#ifndef GUARD_BATTLE_OPTIONS_H
#define GUARD_BATTLE_OPTIONS_H

// Constant labels for the Options UI's features for use in files
// that cannot read labels off an enum.

#define BATTLE_SCRIPT_OPTION_TAKE_WILD_ITEMS_NEVER   0
#define BATTLE_SCRIPT_OPTION_TAKE_WILD_ITEMS_ASK     1
#define BATTLE_SCRIPT_OPTION_TAKE_WILD_ITEMS_ALWAYS  2

enum optionBattleNicknameValues
{
    BATTLE_OPTION_NICKNAME_ASK,
    BATTLE_OPTION_NICKNAME_FORCED,
    BATTLE_OPTION_NICKNAME_NONE,
};

#endif //GUARD_BATTLE_OPTIONS_H
