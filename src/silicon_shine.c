#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "decompress.h"
#include "dma3.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "m4a.h"
#include "main.h"
#include "palette.h"
#include "pokeball.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "trig.h"
#include "util.h"
#include "data.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "event_data.h"

static void Task_SiliconShine(u8);
static void PlayShineSoundBasedOnSide(u32);
static void SpriteCB_SiliconShine_RenderShineAnimation(struct Sprite*);

#define ANIM_TAG_SILICON_SHINE 12678
#define SHINE_FRAME_LENGTH 5
#define SHINE_FRAMES ARRAY_COUNT(sSiliconShineFrames)
#define SHINE_ANIM_LENGTH (SHINE_FRAME_LENGTH * SHINE_FRAME_LENGTH)
#define SHINE_IMAGE_HEIGHT 64
#define SHINE_IMAGE_WIDTH 64
#define SHINE_FRAME_SIZE (SHINE_IMAGE_HEIGHT * SHINE_IMAGE_WIDTH / 2)
#define SPAWN_SHINE_FRAME_COUNT 60
#define SHINE_FRAME_SOUND_PLAY 7
#define SHINE_ANIM_LINGER 2

static const u32 gBattleAnimSpriteGfx_SiliconShine0[] = INCBIN_U32("graphics/siliconshine/silicon_shine0.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine1[] = INCBIN_U32("graphics/siliconshine/silicon_shine1.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine2[] = INCBIN_U32("graphics/siliconshine/silicon_shine2.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine3[] = INCBIN_U32("graphics/siliconshine/silicon_shine3.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine4[] = INCBIN_U32("graphics/siliconshine/silicon_shine4.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine5[] = INCBIN_U32("graphics/siliconshine/silicon_shine5.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine6[] = INCBIN_U32("graphics/siliconshine/silicon_shine6.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine7[] = INCBIN_U32("graphics/siliconshine/silicon_shine7.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine8[] = INCBIN_U32("graphics/siliconshine/silicon_shine8.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine9[] = INCBIN_U32("graphics/siliconshine/silicon_shine9.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine10[] = INCBIN_U32("graphics/siliconshine/silicon_shine10.4bpp");
static const u32 gBattleAnimSpriteGfx_SiliconShine11[] = INCBIN_U32("graphics/siliconshine/silicon_shine11.4bpp");
static const u16 gBattleAnimSpritePal_SiliconShine[] = INCBIN_U16("graphics/siliconshine/silicon_shine.gbapal");

static const u32 *const sSiliconShineFrames[] =
{
    gBattleAnimSpriteGfx_SiliconShine0,
    gBattleAnimSpriteGfx_SiliconShine1,
    gBattleAnimSpriteGfx_SiliconShine2,
    gBattleAnimSpriteGfx_SiliconShine3,
    gBattleAnimSpriteGfx_SiliconShine4,
    gBattleAnimSpriteGfx_SiliconShine5,
    gBattleAnimSpriteGfx_SiliconShine6,
    gBattleAnimSpriteGfx_SiliconShine7,
    gBattleAnimSpriteGfx_SiliconShine8,
    gBattleAnimSpriteGfx_SiliconShine9,
    gBattleAnimSpriteGfx_SiliconShine10,
    gBattleAnimSpriteGfx_SiliconShine11,
};

#define tBattler   data[0]
#define taskTimer     data[13]

#define spriteTimer  data[1]
#define spriteTileStart data[2]
#define spriteBattler data[3]

const struct SpriteTemplate gSiliconShineSpriteTemplate1 =
{
    .tileTag = ANIM_TAG_SILICON_SHINE,
    .paletteTag = ANIM_TAG_SILICON_SHINE,
    .oam = &gOamData_AffineOff_ObjNormal_64x64,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_SiliconShine_RenderShineAnimation,
};

static const struct SpriteSheet gSiliconShineSpriteSheet =
{
    sSiliconShineFrames[0], SHINE_FRAME_SIZE, ANIM_TAG_SILICON_SHINE,
};

static const struct SpritePalette gSiliconShinePalette =
{
    gBattleAnimSpritePal_SiliconShine, ANIM_TAG_SILICON_SHINE,
};

void TrySiliconShineAnimation(u8 battler, struct Pokemon *mon)
{
    u32 taskId;
    struct Pokemon* illusionMon;

    gBattleSpritesDataPtr->healthBoxesData[battler].triedShinyMonAnim = TRUE;
    gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim = TRUE;

    illusionMon = GetIllusionMonPtr(battler);
    if (illusionMon != NULL)
        mon = illusionMon;

    if (!IsBattlerSpriteVisible(battler) || !IsValidForBattle(mon))
        return;

    if (!GetMonData(mon, MON_DATA_IS_SHINY))
        return;

    FlagSet(FLAG_PLAYER_HAS_SEEN_SHINY);

    if (GetSpriteTileStartByTag(ANIM_TAG_SILICON_SHINE) == 0xFFFF)
        LoadSpritePalette(&gSiliconShinePalette);

    taskId = CreateTask(Task_SiliconShine, 10);
    gTasks[taskId].tBattler = battler;
}

static void PlayShineSoundBasedOnSide(u32 battler)
{
    u32 pan = (GetBattlerSide(battler) == B_SIDE_PLAYER) ? -64 : 63;
    PlaySE12WithPanning(SE_SHINY, pan);
}

static void Task_SiliconShine(u8 taskId)
{
    u32 x, y, spriteId;
    u32 tileStart = 0;
    u32 taskTimer;
    u32 battler = gTasks[taskId].tBattler;

    if (gBattleSpritesDataPtr->animationData->numBallParticles)
    {
        gTasks[taskId].taskTimer = 0;
        return;
    }

    taskTimer = ++(gTasks[taskId].taskTimer);

    if (taskTimer < SPAWN_SHINE_FRAME_COUNT)
        return;

    if (taskTimer == SPAWN_SHINE_FRAME_COUNT)
    {
        if (GetSpriteTileStartByTag(ANIM_TAG_SILICON_SHINE) == 0xFFFF)
            tileStart = LoadSpriteSheet(&gSiliconShineSpriteSheet);

        x = GetBattlerSpriteCoord(battler, BATTLER_COORD_X);
        y = GetBattlerSpriteCoord(battler, BATTLER_COORD_Y);

        spriteId = CreateSprite(&gSiliconShineSpriteTemplate1, x, y, 5);
        gSprites[spriteId].spriteTileStart = tileStart;
        gSprites[spriteId].spriteBattler = battler;
    }

    if (taskTimer < SPAWN_SHINE_FRAME_COUNT + 1)
        return;

    DestroyTask(taskId);
}

static void SpriteCB_SiliconShine_RenderShineAnimation(struct Sprite *sprite)
{
    u32 battler = sprite->spriteBattler;
    u32 tileStart = sprite->spriteTileStart;
    u32 timer = ++(sprite->spriteTimer);
    u32 frameIndex = timer / SHINE_FRAME_LENGTH;
    u32 numFrames = ARRAY_COUNT(sSiliconShineFrames);

    sprite->invisible = FALSE;

    if ((frameIndex < numFrames) && (timer % SHINE_FRAME_LENGTH == 0))
        CpuSmartCopy16(sSiliconShineFrames[frameIndex], (u8 *)OBJ_VRAM0 + TILE_SIZE_4BPP * tileStart, SHINE_FRAME_SIZE);

    if (frameIndex == SHINE_FRAME_SOUND_PLAY)
        PlayShineSoundBasedOnSide(battler);

    if (timer < ((SHINE_FRAME_LENGTH * numFrames) + SHINE_ANIM_LINGER))
        return;

    FreeSpriteTilesByTag(ANIM_TAG_SILICON_SHINE);
    FreeSpriteOamMatrix(sprite);
    DestroySprite(sprite);
}

#undef spriteTileStart
#undef tBattler
#undef taskTimer
#undef spriteTimer

static const u8 sText_DiffSpeciesLeftShinyFirstTime [] = _("Oh, a {B_OPPONENT_MON1_NAME} with a magnificent shine and a {B_OPPONENT_MON2_NAME} appeared!\p");
static const u8 sText_DiffSpeciesRightShinyFirstTime [] = _("Oh, a {B_OPPONENT_MON1_NAME} and a {B_OPPONENT_MON2_NAME} with a magnificent shine appeared!\p");
static const u8 sText_DiffSpeciesBothShinyFirstTime [] = _("Oh, {B_OPPONENT_MON1_NAME} and {B_OPPONENT_MON2_NAME} with magnificent shines appeared!\p");
static const u8 sText_SameSpeciesBothShinyFirstTime [] = _("Oh, {B_OPPONENT_MON1_NAME} with magnificent shines appeared!\p");
static const u8 sText_SameSpeciesLeftShinyFirstTime [] = _("Oh, a {B_OPPONENT_MON1_NAME} with a magnificent shine and a {B_OPPONENT_MON1_NAME} appeared!\p");
static const u8 sText_SameSpeciesRightShinyFirstTime [] = _("Oh, a {B_OPPONENT_MON1_NAME} and a {B_OPPONENT_MON1_NAME} with a magnificent shine appeared!\p");
static const u8 sText_DiffSpeciesLeftShiny [] = _("Wow! A Shiny {B_OPPONENT_MON1_NAME} and a {B_OPPONENT_MON2_NAME} appeared!\p");
static const u8 sText_DiffSpeciesRightShiny [] = _("Wow! A {B_OPPONENT_MON1_NAME} and a Shiny {B_OPPONENT_MON2_NAME} appeared!\p");
static const u8 sText_DiffSpeciesBothShiny [] = _("Wow! Shiny {B_OPPONENT_MON1_NAME} and Shiny {B_OPPONENT_MON2_NAME} appeared!\p");
static const u8 sText_SameSpeciesBothShiny [] = _("Wow! Shiny {B_OPPONENT_MON1_NAME} appeared!\p");
static const u8 sText_SameSpeciesLeftShiny [] = _("Wow! A Shiny {B_OPPONENT_MON1_NAME} and a {B_OPPONENT_MON1_NAME} appeared!\p");
static const u8 sText_SameSpeciesRightShiny [] = _("Wow! A {B_OPPONENT_MON1_NAME} and a Shiny {B_OPPONENT_MON1_NAME} appeared!\p");
static const u8 sText_SingleShinyFirstTime[] =_("Oh, a {B_OPPONENT_MON1_NAME} with a magnificent shine appeared!\p");
static const u8 sText_SingleShiny[] =_("Oh, a Shiny {B_OPPONENT_MON1_NAME} appeared!\p");

static bool32 IsEnemyAtPositionShiny(u32 position)
{
    return GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetBattlerAtPosition(position)]],MON_DATA_IS_SHINY);
}

static bool32 AreBothEnemiesSameSpecies(void)
{
    return GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT)]],MON_DATA_SPECIES) == GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT)]],MON_DATA_SPECIES);
}

static bool32 HasPlayerSeenShinyBefore(void)
{
    return (FlagGet(FLAG_PLAYER_HAS_SEEN_SHINY));
}

const u8* ReturnShinyAppearedText(bool32 isDoubleBattle, const u8* stringPtr)
{
    bool32 leftShiny = IsEnemyAtPositionShiny(B_POSITION_OPPONENT_LEFT);
    bool32 rightShiny = IsEnemyAtPositionShiny(B_POSITION_OPPONENT_RIGHT);
    bool32 sameSpecies = AreBothEnemiesSameSpecies();
    bool32 firstShiny = !HasPlayerSeenShinyBefore();

    if (isDoubleBattle)
    {
        if (!leftShiny && !rightShiny)
            return stringPtr;

        if (firstShiny)
        {
            if (sameSpecies)
            {
                if (leftShiny && rightShiny)
                    return sText_SameSpeciesBothShinyFirstTime;
                if (leftShiny)
                    return sText_SameSpeciesLeftShinyFirstTime;
                return sText_SameSpeciesRightShinyFirstTime;
            }
            if (leftShiny && rightShiny)
                return sText_DiffSpeciesBothShinyFirstTime;
            if (leftShiny)
                return sText_DiffSpeciesLeftShinyFirstTime;
            return sText_DiffSpeciesRightShinyFirstTime;
        }

        if (sameSpecies)
        {
            if (leftShiny && rightShiny)
                return sText_SameSpeciesBothShiny;
            if (leftShiny)
                return sText_SameSpeciesLeftShiny;
            return sText_SameSpeciesRightShiny;
        }
        if (leftShiny && rightShiny)
            return sText_DiffSpeciesBothShiny;
        if (leftShiny)
            return sText_DiffSpeciesLeftShiny;
        return sText_DiffSpeciesRightShiny;
    }

    if (!leftShiny)
        return stringPtr;
    else if (firstShiny)
        return sText_SingleShinyFirstTime;
    else
        return sText_SingleShiny;
}

