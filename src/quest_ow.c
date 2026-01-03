#include "global.h"
#include "battle_main.h"
#include "bg.h"
#include "buzzr.h"
#include "decompress.h"
#include "dma3.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "gpu_regs.h"
#include "malloc.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "pokemon_icon.h"
#include "quests.h"
#include "quest_ow.h"
#include "tv.h"
#include "siliconDaycare.h"
#include "scanline_effect.h"
#include "script.h"
#include "script_menu.h"
#include "string_util.h"
#include "constants/quest_ow.h"
#include "constants/quests.h"
#include "constants/rgb.h"
#include "map_name_popup.h"

static u32 GetFrameCounter(void);
static void IncrementFrameCounter(void);
static void SetFrameCounter(u32 frameCounter);
void Script_StartQuestOverworld(struct ScriptContext *ctx);
void QuestOverworld(enum QuestMenuScriptCommandParameters state, enum QuestIdList quest, bool32 eggMode);
static void PlaceQuestOverworldOnTilemap(u32 windowId);
static u32 CreateQuestOverworldWindow(enum QuestOverworldWindows windowTemplateId);
static void DrawQuestOverworldHeaderTiles(u32, u32);
static void DrawQuestOverworldCTATiles(u32, u32);
static void BufferQuestName(enum QuestIdList quest, u32, bool32);
static void PrintQuestName(u32, u32);
static void BufferCTA(enum QuestMenuScriptCommandParameters state, u32, bool32);
static void PrintCTA(u32, u32);
static void PrintQuestSprite(enum QuestMenuScriptCommandParameters state, u32 taskId, bool32 eggMode);
static void Task_DoQuestOverworldSlide(u8 taskId);

static const u16 questOverworldPalette[] = INCBIN_U16("graphics/quest_menu/palettes/questOverworld.gbapal");

static const u32 sQuestOverworldA[] = INCBIN_U32("graphics/quest_menu/ow/tileA.4bpp.smol");
static const u32 sQuestOverworldB[] = INCBIN_U32("graphics/quest_menu/ow/tileB.4bpp.smol");
static const u32 sQuestOverworldC[] = INCBIN_U32("graphics/quest_menu/ow/tileC.4bpp.smol");
static const u32 sQuestOverworldD[] = INCBIN_U32("graphics/quest_menu/ow/tileD.4bpp.smol");
static const u32 sQuestOverworldE[] = INCBIN_U32("graphics/quest_menu/ow/tileE.4bpp.smol");
static const u32 sQuestOverworldF[] = INCBIN_U32("graphics/quest_menu/ow/tileF.4bpp.smol");
static const u32 sQuestOverworldG[] = INCBIN_U32("graphics/quest_menu/ow/tileG.4bpp.smol");
static const u32 sQuestOverworldH[] = INCBIN_U32("graphics/quest_menu/ow/tileH.4bpp.smol");
static const u32 sQuestOverworldI[] = INCBIN_U32("graphics/quest_menu/ow/tileI.4bpp.smol");

const u32 gQuestIcon_Gfx[] = INCBIN_U32("graphics/quest_menu/ow/pokeball_sheet.4bpp.smol");

static const struct CompressedSpriteSheet sSpriteSheet_QuestIcon[] =
{
    {
        .data = gQuestIcon_Gfx,
        .size = 4608,
        .tag = TAG_QUEST_ICON
    },
};

static const union AnimCmd sAnim_Quest[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CompleteQuest[] =
{
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_0, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_1, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_2, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_3, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_0, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_1, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_2, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_3, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_0, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_4, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_5, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_6, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_7, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_8, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StartQuest[] =
{
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_0, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_1, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_2, 6),
    ANIMCMD_FRAME(QUEST_OVERWORLD_FRAME_3, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd * const sAnims_QuestIcon[] =
{
    sAnim_Quest,
    sAnim_Quest,
    sAnim_StartQuest,
    sAnim_Quest,
    sAnim_CompleteQuest,
};

static const struct OamData sOam_QuestIcon =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = QUEST_OVERWORLD_PALETTE_INTERFACE_ID,
    .affineParam = 0,
};

static void SpriteCB_QuestIcon(struct Sprite *sprite)
{
    u32 state = sprite->data[0];
    u32 frame = GetFrameCounter();
    StartSpriteAnimIfDifferent(sprite, state);
    u32 x = sprite->x;
    u32 y = sprite->y;

    if (x < QUEST_OVERWORLD_ICON_X_DESTINATION)
        sprite->x = QUEST_OVERWORLD_ICON_X_DESTINATION;

    if (x > QUEST_OVERWORLD_ICON_X_DESTINATION)
        sprite->x = x - TILE_SIZE_1BPP;

    if (frame >= QUEST_OVERWORLD_ANIMATION_DISAPPEAR_START)
        sprite->y = y + (TILE_SIZE_1BPP / 2);

    if (sprite->y > QUEST_OVERWORLD_ANIMATION_ICON_DISAPPEAR_POINT)
        DestroySpriteAndFreeResources(sprite);
}

static const struct SpriteTemplate sSpriteTemplate_Pokeball =
{
    .tileTag = TAG_QUEST_ICON,
    .paletteTag = TAG_QUEST_ICON,
    .oam = &sOam_QuestIcon,
    .anims = sAnims_QuestIcon,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_QuestIcon
};

static const u8 sQuestOverworldWindowFontColors[][3] =
{
    [QUEST_OVERWORLD_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  QUEST_OVERWORLD_PALETTE_BLACK, TEXT_COLOR_TRANSPARENT},
    [QUEST_OVERWORLD_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  QUEST_OVERWORLD_PALETTE_WHITE,  TEXT_COLOR_TRANSPARENT},
};

static const struct SpritePalette sQuestOverworldInterfaceSpritePalette =
{
    .data = questOverworldPalette,
    .tag = TAG_QUEST_ICON,
};

static const struct WindowTemplate sQuestOverworldWindowTemplates[] =
{
    [QUEST_OVERWORLD_WINDOW_HEADER] =
    {
        .bg = 0,
        .tilemapLeft = 15,
        .tilemapTop = 16,
        .width = 15,
        .height = 2,
        .paletteNum = QUEST_OVERWORLD_PALETTE_INTERFACE_ID,
        .baseBlock = VRAM_ANIMATION_START,
    },
    [QUEST_OVERWORLD_WINDOW_CTA] =
    {
        .bg = 0,
        .tilemapLeft = 15,
        .tilemapTop = 18,
        .width = 15,
        .height = 2,
        .paletteNum = QUEST_OVERWORLD_PALETTE_INTERFACE_ID,
        .baseBlock = VRAM_ANIMATION_START + (15 * 2),
    },
    DUMMY_WIN_TEMPLATE
};

struct QuestOverworldDataStorage
{
    u16 frameCounter;
};

static struct QuestOverworldDataStorage *sQuestOverworldDataStorage = NULL;

static u32 GetFrameCounter(void)
{
    return sQuestOverworldDataStorage->frameCounter;
}

static void SetFrameCounter(u32 frameCounter)
{
    sQuestOverworldDataStorage->frameCounter = frameCounter;
}

static void IncrementFrameCounter(void)
{
    u32 questOWFrameCounter = GetFrameCounter();

    if (questOWFrameCounter >= QUEST_OVERWORLD_ANIMATION_DISAPPEAR_STOP + 2)
        return;

    SetFrameCounter(++questOWFrameCounter);
}

static bool32 AllocateStructs(void)
{
    sQuestOverworldDataStorage = AllocZeroed(sizeof(struct QuestOverworldDataStorage));

    return (sQuestOverworldDataStorage == NULL);
}

void QuestOverworld(enum QuestMenuScriptCommandParameters state, enum QuestIdList quest, bool32 eggMode)
{
    if (AllocateStructs())
        return;

    LoadPalette(questOverworldPalette,QUEST_OVERWORLD_PALETTE_INTERFACE_SLOT,PLTT_SIZE_4BPP);

    u32 taskId = CreateTask(Task_DoQuestOverworldSlide,0);

    for (enum QuestOverworldWindows windowIndex = 0; windowIndex < QUEST_OVERWORLD_WINDOW_COUNT; windowIndex++)
        gTasks[taskId].data[windowIndex] = CreateQuestOverworldWindow(windowIndex);
    BufferQuestName(quest,gTasks[taskId].data[QUEST_OVERWORLD_WINDOW_HEADER], eggMode);
    BufferCTA(state,gTasks[taskId].data[QUEST_OVERWORLD_WINDOW_CTA], eggMode);

    PrintQuestSprite(state, taskId, eggMode);
}

static u32 CreateQuestOverworldWindow(enum QuestOverworldWindows windowTemplateId)
{
    u32 windowId = AddWindow(&sQuestOverworldWindowTemplates[windowTemplateId]);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    return windowId;
}

static void DrawQuestOverworldHeaderTiles(u32 windowId, u32 frame)
{
    if (frame > QUEST_OVERWORLD_ANIMATION_SLIDE_STOP)
        return;

    u32 index;
    u32 tileOffset = QUEST_OVERWORLD_ANIMATION_SLIDE_STOP - frame;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldA, 0, QUEST_OVERWORLD_FIRST_ROW_OFFSET + tileOffset);

    for (index = 0; index < frame; index++)
        CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldB, 0, QUEST_OVERWORLD_FIRST_ROW_OFFSET + 1 + index + tileOffset);

    for (index = 0; index < (frame + 1); index++)
        CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldC, 0, QUEST_OVERWORLD_SECOND_ROW_OFFSET + index + tileOffset);
}

static void DrawQuestOverworldCTATiles(u32 windowId, u32 frame)
{
    if (frame > QUEST_OVERWORLD_ANIMATION_SLIDE_STOP)
        return;

    u32 index;
    u32 tileOffset = QUEST_OVERWORLD_ANIMATION_SLIDE_STOP - frame;
    u32 cIndex = min(frame+1,3);
    u32 iIndex = min(frame-3,11);
    u32 gIndex = min(frame,2);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    for (index = 0; index < cIndex; index++)
        CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldC, 0, QUEST_OVERWORLD_THIRD_ROW_OFFSET + index + tileOffset);

    if (frame >= 3)
        CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldD, 0, QUEST_OVERWORLD_THIRD_ROW_D_TILE_OFFSET + tileOffset);

    if (frame >= 4)
        for (index = 0; index < iIndex; index++)
            CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldE, 0, QUEST_OVERWORLD_THIRD_ROW_E_TILE_OFFSET + tileOffset + index);

    CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldF, 0, QUEST_OVERWORLD_FOURTH_ROW_OFFSET + tileOffset);

    for (index = 0; index < gIndex; index++)
        CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldG, 0, QUEST_OVERWORLD_FOURTH_ROW_G_TILE_OFFSET + index + tileOffset);

    if (frame >= 3)
        CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldH, 0, QUEST_OVERWORLD_FOURTH_ROW_H_TILE_OFFSET + tileOffset);

    if (frame >= 4)
        for (index = 0; index < iIndex; index++)
            CopyToWindowPixelBuffer(windowId, (const void*)sQuestOverworldI, 0, QUEST_OVERWORLD_FOURTH_ROW_I_TILE_OFFSET + index + tileOffset);
}

static void PlaceQuestOverworldOnTilemap(u32 windowId)
{
    PutWindowRectTilemap(windowId, 0, 0, 15, 2);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void BufferQuestName(enum QuestIdList quest, u32 windowId, u32 eggMode)
{
    u32 fontId = FONT_QUEST_OVERWORLD_HEADER;
    u32 windowWidth = (GetWindowAttribute(windowId, WINDOW_WIDTH) * TILE_WIDTH) - QUEST_OVERWORLD_ICON_LEFT_BUFFER;
    u8 *end;

    if (!eggMode)
        StringCopy(gStringVar4,GetQuestName(quest));
    else
        StringCopy(gStringVar4,COMPOUND_STRING("Egg Discovered!"));

    end = StringExpandPlaceholders(gStringVar1,gStringVar4);
    PrependFontIdToFit(gStringVar1,end,fontId,windowWidth);
}

static void PrintQuestName(u32 windowId, u32 frame)
{
    if (frame > QUEST_OVERWORLD_ANIMATION_SLIDE_STOP)
        return;

    if (frame < QUEST_OVERWORLD_ANIMATION_SLIDE_TEXT_START)
        return;

    u32 fontId = FONT_QUEST_OVERWORLD_HEADER;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8 *color = sQuestOverworldWindowFontColors[QUEST_OVERWORLD_FONT_COLOR_BLACK];
    u32 x = QUEST_OVERWORLD_ICON_LEFT_BUFFER + (10 * (QUEST_OVERWORLD_ANIMATION_SLIDE_STOP - frame));
    u32 y = 3;

    AddTextPrinterParameterized4(windowId,fontId, x , y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar1);
}

static void BufferCTA(enum QuestMenuScriptCommandParameters state, u32 windowId, bool32 eggMode)
{
    u32 windowWidth = (GetWindowAttribute(windowId, WINDOW_WIDTH) * TILE_WIDTH) - QUEST_OVERWORLD_ICON_LEFT_BUFFER;
    u32 fontId = FONT_QUEST_OVERWORLD_CTA;
    u8 *end;

    if (eggMode)
    {
        u32 species = GetBoxMonData(&gSaveBlock1Ptr->daycare.daycareEgg[GetEmptyEggIndex()-1].egg, MON_DATA_SPECIES);
        StringCopy(gStringVar3,GetSpeciesName(species));
        StringCopy(gStringVar4,COMPOUND_STRING("{STR_VAR_3} Egg"));
    }
    else if (state == QUEST_MENU_SET_ACTIVE)
        StringCopy(gStringVar4,COMPOUND_STRING("NEW TASK"));
    else
        StringCopy(gStringVar4,COMPOUND_STRING("TASK COMPLETE"));

    end = StringExpandPlaceholders(gStringVar2,gStringVar4);
    PrependFontIdToFit(gStringVar2,end,fontId,windowWidth);
}

static void PrintCTA(u32 windowId, u32 frame)
{
    if (frame > QUEST_OVERWORLD_ANIMATION_SLIDE_STOP)
        return;

    if (frame < QUEST_OVERWORLD_ANIMATION_SLIDE_TEXT_START)
        return;

    u32 fontId = FONT_QUEST_OVERWORLD_HEADER;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8 *color = sQuestOverworldWindowFontColors[QUEST_OVERWORLD_FONT_COLOR_WHITE];
    u32 windowWidth = (GetWindowAttribute(windowId, WINDOW_WIDTH) * TILE_WIDTH) - QUEST_OVERWORLD_ICON_LEFT_BUFFER;
    u32 stringWidth = GetStringWidth(fontId, gStringVar2, letterSpacing);

    u32 q = QUEST_OVERWORLD_ICON_LEFT_BUFFER + (10 * (QUEST_OVERWORLD_ANIMATION_SLIDE_STOP - frame));
    u32 x = (q + windowWidth) - stringWidth;
    u32 y = 0;

    AddTextPrinterParameterized4(windowId,fontId, x , y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar2);
}

static void PrintQuestSprite(enum QuestMenuScriptCommandParameters state, u32 taskId, bool32 eggMode)
{
    u32 spriteId;
    if (!eggMode)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_QuestIcon[0]);
        LoadSpritePalette(&sQuestOverworldInterfaceSpritePalette);
        spriteId = CreateSprite(&sSpriteTemplate_Pokeball,255,145,0);
    }
    else
    {
        LoadMonIconPalettes();
        spriteId = CreateMonIcon(SPECIES_EGG,SpriteCB_QuestIcon,255,141,3,0);
        gSprites[spriteId].oam.priority = 0;
    }
    gSprites[spriteId].data[0] = state;
    gTasks[taskId].data[2] = spriteId;
}

static void Task_DoQuestOverworldSlide(u8 taskId)
{
    u32 windowId[QUEST_OVERWORLD_WINDOW_COUNT];

    windowId[QUEST_OVERWORLD_WINDOW_HEADER] = gTasks[taskId].data[0];
    windowId[QUEST_OVERWORLD_WINDOW_CTA] = gTasks[taskId].data[1];

    u32 frameCounter = GetFrameCounter();
    IncrementFrameCounter();

    DrawQuestOverworldHeaderTiles(windowId[QUEST_OVERWORLD_WINDOW_HEADER],frameCounter);
    DrawQuestOverworldCTATiles(windowId[QUEST_OVERWORLD_WINDOW_CTA], frameCounter);

    PrintQuestName(windowId[QUEST_OVERWORLD_WINDOW_HEADER], frameCounter);
    PrintCTA(windowId[QUEST_OVERWORLD_WINDOW_CTA], frameCounter);

    if (frameCounter >= QUEST_OVERWORLD_ANIMATION_DISAPPEAR_START && frameCounter < QUEST_OVERWORLD_ANIMATION_DISAPPEAR_STOP)
    {
        ChangeBgY(BG0_QUEST_OVERWORLD,(QUEST_OVERWORLD_BACKGROUND_HALF_TILE * (frameCounter - QUEST_OVERWORLD_ANIMATION_DISAPPEAR_START)),BG_COORD_SET);
    }

    for (enum QuestOverworldWindows windowIndex = 0; windowIndex < QUEST_OVERWORLD_WINDOW_COUNT; windowIndex++)
        PlaceQuestOverworldOnTilemap(windowId[windowIndex]);

    if (frameCounter <= QUEST_OVERWORLD_ANIMATION_DISAPPEAR_STOP)
        return;

    HideMapNamePopUpWindow();
}

void HideQuestOverworld(void)
{
    u32 taskId = FindTaskIdByFunc(Task_DoQuestOverworldSlide);

    if (taskId == TASK_NONE)
        return;

    if (!FuncIsActiveTask(Task_DoQuestOverworldSlide))
        return;

    Free(sQuestOverworldDataStorage);

    for (enum QuestOverworldWindows windowIndex = 0; windowIndex < QUEST_OVERWORLD_WINDOW_COUNT; windowIndex++)
    {
        ClearStdWindowAndFrameToTransparent(gTasks[taskId].data[windowIndex],TRUE);
        RemoveWindow(gTasks[taskId].data[windowIndex]);
    }

    DestroySpriteAndFreeResources(&gSprites[gTasks[taskId].data[2]]);
    ChangeBgY(BG0_QUEST_OVERWORLD,0,BG_COORD_SET);
    DestroyTask(taskId);
}
