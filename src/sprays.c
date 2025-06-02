#include "global.h"
#include "event_data.h"
#include "script_menu.h"
#include "strings.h"
#include "constants/items.h"
#include "item.h"
#include "script_menu.h"
#include "menu.h"
// Start siliconMerge
#include "string_util.h"
#include "item_menu.h"
#include "sound.h"
#include "constants/songs.h"
// End siliconMerge
// Start siliconMerge
#define SPRAY_COUNT 0
#define SPRAY_GET 1
#define NUM_SPRAY_TYPE 2
// End siliconMerge
#define NUM_SPRAY_STRENGTH 3
// Start siliconMerge
//#define SPRAY_MENU_Y_COORD 8
#define NUM_SPRAY_MENU_OPTIONS 4
#define SPRAY_MENU_Y_COORD 6
// End siliconMerge

#define LOCAL_VAR_CANCEL gSpecialVar_0x8003 // siliconMerge
#define LOCAL_VAR_SPRAY gSpecialVar_0x8004
#define LOCAL_VAR_SPRAY_CONST VAR_0x8004

// Start siliconMerge
#define USE_REPEL 0
#define TURN_OFF 2
// End siliconMerge

u32 CountOrGetSprays(u32);
u32 GetNumberSprayStrength(void);
u32 GetSprayId(void);
u32 GetLastUsedSprayType(void);
u32 SetSprayMenuCursorPosition(int, int);
#if I_REPEL_LURE_MENU == TRUE
void DrawSprayMenu(void);
#endif
void HandleSprayMenuChoice(void);

u32 CountOrGetSprays(u32 func)
{
    u32 i, currentSpray, sprayCount = 0;
    u32 spray = GetLastUsedSprayType();

    for (i = 0; i < NUM_SPRAY_STRENGTH; i++)
    {
        currentSpray = spray + i;

        if (!CheckBagHasItem(currentSpray,1))
            continue;

        if (func == SPRAY_COUNT)
            sprayCount++;
        else
            return (currentSpray);
    }
    return sprayCount;
}

u32 GetNumberSprayStrength(void)
{
    return CountOrGetSprays(SPRAY_COUNT);
}

u32 GetSprayId(void)
{
    return CountOrGetSprays(SPRAY_GET);
}

u32 GetLastUsedSprayType(void)
{
    if (IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)))
        return ITEM_LURE;
    else
        return ITEM_REPEL;
}

u32 SetSprayMenuCursorPosition(int currentSpray, int count)
{
    if (VarGet(VAR_LAST_REPEL_LURE_USED) == currentSpray)
        return count;

    return 0;
}

#if I_REPEL_LURE_MENU == TRUE
void DrawSprayMenu(void)
{
    struct MenuAction menuItems[NUM_SPRAY_STRENGTH+1] = {NULL};
    int sprayIndex, count = 0, menuPos = 0, currentSpray, yCoord = 0;
    u32 spray = GetLastUsedSprayType();

    for (sprayIndex = 0; sprayIndex < (NUM_SPRAY_STRENGTH); sprayIndex++)
    {
        currentSpray = spray + sprayIndex;

        if (!CheckBagHasItem(currentSpray, 1))
            continue;

        menuItems[count].text = GetItemName(currentSpray);
        VarSet(LOCAL_VAR_SPRAY_CONST + count, currentSpray);

        if (VAR_LAST_REPEL_LURE_USED != 0)
            menuPos = SetSprayMenuCursorPosition(currentSpray, count);

        yCoord = SPRAY_MENU_Y_COORD - (2 * count);
        count++;
    }
    // Start siliconMerge
	LOCAL_VAR_CANCEL = count;
    //gSpecialVar_0x8003 = count;
	// End siliconMerge
    menuItems[count].text = gText_Cancel2;

    DrawMultichoiceMenuInternal(18, yCoord, 0, FALSE, menuPos, menuItems, count+1);
}
#endif

void HandleSprayMenuChoice(void)
{
    u32 lureMask = (GetLastUsedSprayType() == ITEM_LURE) ? REPEL_LURE_MASK : 0;

    LOCAL_VAR_SPRAY = VarGet(LOCAL_VAR_SPRAY_CONST + gSpecialVar_Result);

    VarSet(VAR_REPEL_STEP_COUNT, GetItemHoldEffectParam(LOCAL_VAR_SPRAY) | lureMask);

    if (VAR_LAST_REPEL_LURE_USED != 0)
        VarSet(VAR_LAST_REPEL_LURE_USED, LOCAL_VAR_SPRAY);
}
// Start siliconMerge
#define SPRAY_ON 100
#define LURE_UNLOCKED 1
u32 GetInfiniteSprayMode(void)
{
    u32 mode = 0;

    if (FlagGet(FLAG_INFINITE_LURE_GET))
        mode += LURE_UNLOCKED;

    if (FlagGet(FLAG_INFINITE_MODE_ON))
        mode += SPRAY_ON;

    return mode;
}

void DrawInfiniteSprayMenu(void)
{
    struct MenuAction menuItems[NUM_SPRAY_MENU_OPTIONS] = {NULL};
    int count = 0, menuPos = 0, currentSpray = ITEM_REPEL, yCoord;

    u32 spray = GetLastUsedSprayType();

    for (count = 0; count < (NUM_SPRAY_TYPE); count++)
    {
        menuItems[count].text = GetItemName(currentSpray);
        VarSet(LOCAL_VAR_SPRAY_CONST + count, currentSpray);
        currentSpray+= (ITEM_LURE - ITEM_REPEL);
    }

    if (FlagGet(FLAG_INFINITE_MODE_ON))
    {
        menuPos = count;
        menuItems[count++].text = COMPOUND_STRING("Turn Off");
    }
    else if (spray == ITEM_LURE)
        menuPos++;

    LOCAL_VAR_CANCEL = count;
    menuItems[count].text = gText_Cancel2;

    yCoord = (count == 3) ? 2 : 4;

    DrawMultichoiceMenuInternal(22, yCoord, 0, FALSE, menuPos, menuItems, count+1);
}

u32 GetLureMask(u32 var)
{
    return (var == ITEM_LURE) ? REPEL_LURE_MASK : 0;
}

void DoInfiniteSpray(void)
{
    u32 lureMask;
    u32 oldLureMask = GetLureMask(GetLastUsedSprayType());
    u32 lastSpray;

    CopyItemName(ITEM_INFINITE_SPRAY,gStringVar2);

    if (gSpecialVar_Result == TURN_OFF)
    {
        VarSet(VAR_REPEL_STEP_COUNT, 0 | oldLureMask);
        return;
    }

    LOCAL_VAR_SPRAY = VarGet(LOCAL_VAR_SPRAY_CONST + gSpecialVar_Result);
    lureMask = GetLureMask(LOCAL_VAR_SPRAY);
    VarSet(VAR_REPEL_STEP_COUNT, GetItemHoldEffectParam(ITEM_INFINITE_SPRAY) | lureMask);

    lastSpray = GetLastUsedSprayType();
    VarSet(VAR_LAST_REPEL_LURE_USED, lastSpray);
    CopyItemName(lastSpray,gStringVar1);
}

void TurnInfiniteSprayOn(void)
{
    FlagSet(FLAG_INFINITE_MODE_ON);
    PlaySE(SE_REPEL);
    DoInfiniteSpray();
}

void TurnInfiniteSprayOff(void)
{
    FlagClear(FLAG_INFINITE_MODE_ON);
    DoInfiniteSpray();
}

#define tUsingRegisteredKeyItem  data[3]

void HandleToggleInfiniteSpray(void)
{
    if (!FlagGet(FLAG_INFINITE_MODE_ON))
    {
        gSpecialVar_Result = USE_REPEL;
        VarSet(LOCAL_VAR_SPRAY,ITEM_REPEL);
        TurnInfiniteSprayOn();
    }
    else
    {
        gSpecialVar_Result = TURN_OFF;
        TurnInfiniteSprayOff();
    }
}

bool32 ShouldUseInfiniteSprayOnField(u8 taskId)
{
    return ((gTasks[taskId].tUsingRegisteredKeyItem == TRUE) || FlagGet(FLAG_INFINITE_LURE_GET));

}
#undef tUsingRegisteredKeyItem

extern const u8 InfiniteSpray_Text_ModeActivated[];
extern const u8 InfiniteSpray_Text_TurnedOff[];

static void PrepareInfiniteSprayMessage(void)
{
    if (FlagGet(FLAG_INFINITE_MODE_ON))
        StringExpandPlaceholders(gStringVar3,InfiniteSpray_Text_ModeActivated);
    else
        StringExpandPlaceholders(gStringVar3,InfiniteSpray_Text_TurnedOff);

    StringAppend(gStringVar3,gText_PauseUntilPress);
}

void UseInfiniteSprayInBag(u8 taskId)
{
    HandleToggleInfiniteSpray();
    PrepareInfiniteSprayMessage();
    DisplayItemMessage(taskId, FONT_NORMAL, gStringVar3,CloseItemMessage);
}

bool32 IsInfiniteSprayAndLureLocked(u16 itemId)
{
    return ((itemId == ITEM_INFINITE_SPRAY) && !FlagGet(FLAG_INFINITE_LURE_GET));
}
// End siliconMerge
