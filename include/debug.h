#ifndef GUARD_DEBUG_H
#define GUARD_DEBUG_H

void Debug_ShowMainMenu(void);
extern const u8 Debug_FlagsAndVarNotSetBattleConfigMessage[];

extern EWRAM_DATA bool8 gIsDebugBattle;
extern EWRAM_DATA u32 gDebugAIFlags;

void DebugAction_PCBag_Fill_PocketTMHM(u8 taskId); // siliconMerge
#endif // GUARD_DEBUG_H
