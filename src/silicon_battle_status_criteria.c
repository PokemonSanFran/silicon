#include "global.h"
#include "string_util.h"
#include "battle.h"
#include "battle_gimmick.h"
#include "silicon_battle_status_criteria.h"

typedef bool32 (*IsStatusActiveFunc)(enum BattlerId battler);
typedef const u8 *(*FormatStatusNameFunc)(enum BattlerId battler);

EWRAM_DATA struct MaxBattleStatusValues gRecordedMaxBattleStatusValues = {0};

static u32 BattleStatusCriteria_StatusToIdx(enum SiliconBattleStatuses);

/*
static bool32 IsStatusActive_(enum BattlerId);
static const u8 *FormatStatusName_(enum BattlerId);
*/

static bool32 IsStatusActive_MegaEvolve(enum BattlerId);
static const u8 *FormatStatusName_MegaEvolve(enum BattlerId);
static bool32 IsStatusActive_Dynamax(enum BattlerId);
static const u8 *FormatStatusName_Dynamax(enum BattlerId);

static bool32 IsStatusActive_Burn(enum BattlerId);
static const u8 *FormatStatusName_Burn(enum BattlerId);
static bool32 IsStatusActive_Freeze(enum BattlerId);
static const u8 *FormatStatusName_Freeze(enum BattlerId);
static bool32 IsStatusActive_Paralyzed(enum BattlerId);
static const u8 *FormatStatusName_Paralyzed(enum BattlerId);
static bool32 IsStatusActive_Poisoned(enum BattlerId);
static bool32 IsStatusActive_BadlyPoisoned(enum BattlerId);
static const u8 *FormatStatusName_Poisoned(enum BattlerId);
static bool32 IsStatusActive_Asleep(enum BattlerId);
static const u8 *FormatStatusName_Asleep(enum BattlerId);

static bool32 IsStatusActive_ElectricTerrain(enum BattlerId);
static const u8 *FormatStatusName_ElectricTerrain(enum BattlerId);
static bool32 IsStatusActive_GrassyTerrain(enum BattlerId);
static const u8 *FormatStatusName_GrassyTerrain(enum BattlerId);
static bool32 IsStatusActive_MistyTerrain(enum BattlerId);
static const u8 *FormatStatusName_MistyTerrain(enum BattlerId);
static bool32 IsStatusActive_PsychicTerrain(enum BattlerId);
static const u8 *FormatStatusName_PsychicTerrain(enum BattlerId);
static bool32 IsStatusActive_HarshSun(enum BattlerId);
static const u8 *FormatStatusName_HarshSun(enum BattlerId);
static bool32 IsStatusActive_Rain(enum BattlerId);
static const u8 *FormatStatusName_Rain(enum BattlerId);
static bool32 IsStatusActive_Sandstorm(enum BattlerId);
static const u8 *FormatStatusName_Sandstorm(enum BattlerId);
static bool32 IsStatusActive_Snow(enum BattlerId);
static const u8 *FormatStatusName_Snow(enum BattlerId);
static bool32 IsStatusActive_Fog(enum BattlerId);
static const u8 *FormatStatusName_Fog(enum BattlerId);
static bool32 IsStatusActive_StrongWinds(enum BattlerId);
static const u8 *FormatStatusName_StrongWinds(enum BattlerId);
static bool32 IsStatusActive_Spikes(enum BattlerId);
static const u8 *FormatStatusName_Spikes(enum BattlerId);
static bool32 IsStatusActive_StealthRock(enum BattlerId);
static const u8 *FormatStatusName_StealthRock(enum BattlerId);
static bool32 IsStatusActive_ToxicSpikes(enum BattlerId);
static const u8 *FormatStatusName_ToxicSpikes(enum BattlerId);
static bool32 IsStatusActive_StickyWeb(enum BattlerId);
static const u8 *FormatStatusName_StickyWeb(enum BattlerId);
static bool32 IsStatusActive_SharpSteel(enum BattlerId);
static const u8 *FormatStatusName_SharpSteel(enum BattlerId);
static bool32 IsStatusActive_MagicRoom(enum BattlerId);
static const u8 *FormatStatusName_MagicRoom(enum BattlerId);
static bool32 IsStatusActive_WonderRoom(enum BattlerId);
static const u8 *FormatStatusName_WonderRoom(enum BattlerId);
static bool32 IsStatusActive_Gravity(enum BattlerId);
static const u8 *FormatStatusName_Gravity(enum BattlerId);
static bool32 IsStatusActive_TrickRoom(enum BattlerId);
static const u8 *FormatStatusName_TrickRoom(enum BattlerId);
static bool32 IsStatusActive_Tailwind(enum BattlerId);
static const u8 *FormatStatusName_Tailwind(enum BattlerId);

static bool32 IsStatusActive_Bound(enum BattlerId);
static const u8 *FormatStatusName_Bound(enum BattlerId);
static bool32 IsStatusActive_Trapped(enum BattlerId);
static const u8 *FormatStatusName_Trapped(enum BattlerId);
static bool32 IsStatusActive_Confused(enum BattlerId);
static const u8 *FormatStatusName_Confused(enum BattlerId);
static bool32 IsStatusActive_Cursed(enum BattlerId);
static const u8 *FormatStatusName_Cursed(enum BattlerId);
static bool32 IsStatusActive_Drowsy(enum BattlerId);
static const u8 *FormatStatusName_Drowsy(enum BattlerId);
static bool32 IsStatusActive_Embargo(enum BattlerId);
static const u8 *FormatStatusName_Embargo(enum BattlerId);
static bool32 IsStatusActive_Encore(enum BattlerId);
static const u8 *FormatStatusName_Encore(enum BattlerId);
static bool32 IsStatusActive_HealBlock(enum BattlerId);
static const u8 *FormatStatusName_HealBlock(enum BattlerId);
static bool32 IsStatusActive_Identified(enum BattlerId);
static const u8 *FormatStatusName_Identified(enum BattlerId);
static bool32 IsStatusActive_Infatuated(enum BattlerId);
static const u8 *FormatStatusName_Infatuated(enum BattlerId);
static bool32 IsStatusActive_LeechSeed(enum BattlerId);
static const u8 *FormatStatusName_LeechSeed(enum BattlerId);
static bool32 IsStatusActive_Nightmare(enum BattlerId);
static const u8 *FormatStatusName_Nightmare(enum BattlerId);
static bool32 IsStatusActive_PerishSong(enum BattlerId);
static const u8 *FormatStatusName_PerishSong(enum BattlerId);
static bool32 IsStatusActive_Taunt(enum BattlerId);
static const u8 *FormatStatusName_Taunt(enum BattlerId);
static bool32 IsStatusActive_Telekinesis(enum BattlerId);
static const u8 *FormatStatusName_Telekinesis(enum BattlerId);
static bool32 IsStatusActive_Torment(enum BattlerId);
static const u8 *FormatStatusName_Torment(enum BattlerId);

static bool32 IsStatusActive_AquaRing(enum BattlerId);
static const u8 *FormatStatusName_AquaRing(enum BattlerId);
static bool32 IsStatusActive_Bracing(enum BattlerId);
static const u8 *FormatStatusName_Bracing(enum BattlerId);
static bool32 IsStatusActive_Charging(enum BattlerId);
static const u8 *FormatStatusName_Charging(enum BattlerId);
static bool32 IsStatusActive_CenterAttention(enum BattlerId);
static const u8 *FormatStatusName_CenterAttention(enum BattlerId);
static bool32 IsStatusActive_DefenseCurl(enum BattlerId);
static const u8 *FormatStatusName_DefenseCurl(enum BattlerId);
static bool32 IsStatusActive_Rooted(enum BattlerId);
static const u8 *FormatStatusName_Rooted(enum BattlerId);
static bool32 IsStatusActive_MagicCoat(enum BattlerId);
static const u8 *FormatStatusName_MagicCoat(enum BattlerId);
static bool32 IsStatusActive_MagneticLevitation(enum BattlerId);
static const u8 *FormatStatusName_MagneticLevitation(enum BattlerId);
static bool32 IsStatusActive_Minimized(enum BattlerId);
static const u8 *FormatStatusName_Minimized(enum BattlerId);
static bool32 IsStatusActive_Protection(enum BattlerId);
static const u8 *FormatStatusName_Protection(enum BattlerId);
static bool32 IsStatusActive_Recharging(enum BattlerId);
static const u8 *FormatStatusName_Recharging(enum BattlerId);
static bool32 IsStatusActive_Underground(enum BattlerId);
static const u8 *FormatStatusName_Underground(enum BattlerId);
static bool32 IsStatusActive_HighFlight(enum BattlerId);
static const u8 *FormatStatusName_HighFlight(enum BattlerId);
static bool32 IsStatusActive_Underwater(enum BattlerId);
static const u8 *FormatStatusName_Underwater(enum BattlerId);
static bool32 IsStatusActive_InShadows(enum BattlerId);
static const u8 *FormatStatusName_InShadows(enum BattlerId);
static bool32 IsStatusActive_TakingAim(enum BattlerId);
static const u8 *FormatStatusName_TakingAim(enum BattlerId);
static bool32 IsStatusActive_Thrashing(enum BattlerId);
static const u8 *FormatStatusName_Thrashing(enum BattlerId);
static bool32 IsStatusActive_Transformed(enum BattlerId);
static const u8 *FormatStatusName_Transformed(enum BattlerId);

static const u8 sBattleStatusCriteria_HarshSunDesc[] = _("Boosts the damage dealt by Fire-type moves by 50% and halves the damage dealt by Water-type moves.");
static const u8 sBattleStatusCriteria_Rain[] = _("Boosts the damage dealt by Water-type moves by 50% and halves the damage dealt by Fire-type moves.");

static const struct {
    enum SiliconBattleStatuses status;
    IsStatusActiveFunc isActive;
    FormatStatusNameFunc formatName;
    const u8 *desc;
} sBattleStatusCriteria_StatusInfo[] =
{
    //{ BATTLE_STATUS_, IsStatusActive_, FormatStatusName_ },
    { BATTLE_STATUS_MEGA_EVOLVE,                    IsStatusActive_MegaEvolve,            FormatStatusName_MegaEvolve },
    { BATTLE_STATUS_DYNAMAX,                        IsStatusActive_Dynamax,               FormatStatusName_Dynamax },

    { BATTLE_STATUS_BURN,                           IsStatusActive_Burn,                  FormatStatusName_Burn, COMPOUND_STRING("The Pokémon takes damage equal to 1/16 of its max HP at the end of every turn. The damage dealt by its physical moves is also halved. Fire-type Pokémon are unaffected.") },
    { BATTLE_STATUS_FREEZE,                         IsStatusActive_Freeze,                FormatStatusName_Freeze, COMPOUND_STRING("The Pokémon can’t use almost any moves but has a 25% chance of being cured each time it tries to do so. The Pokémon will be cured on its third turn after becoming frozen or if it takes damage from a Fire-type move or certain other moves. Ice-type Pokémon are unaffected.") },
    { BATTLE_STATUS_PARALYZED,                      IsStatusActive_Paralyzed,             FormatStatusName_Paralyzed, COMPOUND_STRING("The Pokémon has a 12.5% chance of being unable to use moves. Its Speed stat is also halved. Electric-type Pokémon are unaffected.") },
    { BATTLE_STATUS_POISONED,                       IsStatusActive_Poisoned,              FormatStatusName_Poisoned, COMPOUND_STRING("The Pokémon takes damage equal to 1/8 of its max HP at the end of every turn. Poison- and Steel-type Pokémon are unaffected.") },
    { BATTLE_STATUS_BADLY_POISONED, IsStatusActive_BadlyPoisoned, FormatStatusName_Poisoned, COMPOUND_STRING("The Pokémon takes increasing poison damage at the end of every turn, starting at 1/16 of the Pokémon’s max HP, then 2/16, then 3/16, and so on. If the Pokémon switches out and reenters battle, the damage restarts at 1/16 of its max HP. Poison- and Steel-type Pokémon are unaffected.") },
    { BATTLE_STATUS_ASLEEP,                         IsStatusActive_Asleep,                FormatStatusName_Asleep, COMPOUND_STRING("The Pokémon can’t use moves other than Snore or Sleep Talk. After a Pokémon is put to sleep, it will remain asleep on its first turn, it will have a 1-in-3 chance of being cured on its second turn, and it will be cured on its third turn. A Pokémon that used the move Rest has no chance of being cured until its third turn.") },

    { BATTLE_STATUS_ELECTRIC_TERRAIN,               IsStatusActive_ElectricTerrain,       FormatStatusName_ElectricTerrain, COMPOUND_STRING("Pokémon on the ground have the power of their Electric-type moves boosted by 30% and they cannot fall asleep.") },
    { BATTLE_STATUS_GRASSY_TERRAIN,                 IsStatusActive_GrassyTerrain,         FormatStatusName_GrassyTerrain, COMPOUND_STRING("Pokémon on the ground have the power of their Grass-type moves boosted by 30% and they have 1/16 of their max HP restored at the end of every turn.") },
    { BATTLE_STATUS_MISTY_TERRAIN,                  IsStatusActive_MistyTerrain,          FormatStatusName_MistyTerrain, COMPOUND_STRING("Halves the damage dealt by Dragon-type moves used against Pokémon on the ground. Pokémon on the ground are also immune to status conditions and cannot become confused.") },
    { BATTLE_STATUS_PSYCHIC_TERRAIN,                IsStatusActive_PsychicTerrain,        FormatStatusName_PsychicTerrain, COMPOUND_STRING("Pokémon on the ground have the power of their Psychic-type moves boosted by 30% and they are immune to priority moves.") },
    { BATTLE_STATUS_HARSH_SUN,                      IsStatusActive_HarshSun,              FormatStatusName_HarshSun, sBattleStatusCriteria_HarshSunDesc },
    { BATTLE_STATUS_RAIN,                           IsStatusActive_Rain,                  FormatStatusName_Rain, sBattleStatusCriteria_Rain },
    { BATTLE_STATUS_SANDSTORM,                      IsStatusActive_Sandstorm,             FormatStatusName_Sandstorm, COMPOUND_STRING("Pokémon that are not Rock, Ground, or Steel types take damage equal to 1/16 of their max HP at the end of every turn. Boosts the Sp. Def stats of Rock-type Pokémon by 50%.") },
    { BATTLE_STATUS_SNOW,                           IsStatusActive_Snow,                  FormatStatusName_Snow, COMPOUND_STRING("Boosts the Defense stats of Ice-type Pokémon by 50%.") },
    { BATTLE_STATUS_FOG,                            IsStatusActive_Fog,                   FormatStatusName_Fog },
    { BATTLE_STATUS_VERY_HARSH_SUN,                 IsStatusActive_HarshSun,              FormatStatusName_HarshSun, sBattleStatusCriteria_HarshSunDesc },
    { BATTLE_STATUS_HEAVY_RAIN,                     IsStatusActive_Rain,                  FormatStatusName_Rain, sBattleStatusCriteria_Rain },
    { BATTLE_STATUS_STRONG_WINDS,                   IsStatusActive_StrongWinds,           FormatStatusName_StrongWinds },
    { BATTLE_STATUS_SPIKES,                         IsStatusActive_Spikes,                FormatStatusName_Spikes, COMPOUND_STRING("Pokémon that switch into battle will take damage equal to 1/8 of their max HP. This damage will increase if 2 layers of Spikes are set, and again if 3 layers are set. Pokémon such as Flying types or ones with the Levitate Ability are unaffected.") },
    { BATTLE_STATUS_STEALTH_ROCK,                   IsStatusActive_StealthRock,           FormatStatusName_StealthRock, COMPOUND_STRING("Pokémon that switch into battle will take damage equal to 1/8 of their max HP. This damage differs depending on the Pokémon’s type matchup with the Rock type.") },
    { BATTLE_STATUS_TOXIC_SPIKES,                   IsStatusActive_ToxicSpikes,           FormatStatusName_ToxicSpikes, COMPOUND_STRING("Pokémon that switch into battle will be poisoned or, if 2 layers of Toxic Spikes are set, badly poisoned. Pokémon such as Flying types or ones with the Levitate Ability are unaffected. This status is removed if a Poison-type Pokémon enters battle.") },
    { BATTLE_STATUS_STICKY_WEB,                     IsStatusActive_StickyWeb,             FormatStatusName_StickyWeb, COMPOUND_STRING("Pokémon that switch into battle will have their Speed stats lowered by 1 stage. Pokémon such as Flying types or ones with the Levitate Ability are unaffected.") },
    { BATTLE_STATUS_SHARP_STEEL,                    IsStatusActive_SharpSteel,            FormatStatusName_SharpSteel },
    { BATTLE_STATUS_MAGIC_ROOM,                     IsStatusActive_MagicRoom,             FormatStatusName_MagicRoom, COMPOUND_STRING("Most held items do not work.") },
    { BATTLE_STATUS_WONDER_ROOM,                    IsStatusActive_WonderRoom,            FormatStatusName_WonderRoom, COMPOUND_STRING("    Pokémon’s Defense and Sp. Def stats are swapped.") },
    { BATTLE_STATUS_GRAVITY,                        IsStatusActive_Gravity,               FormatStatusName_Gravity, COMPOUND_STRING("Boosts the accuracy of moves by 67%. Pokémon such as Flying types or ones with the Levitate Ability become grounded. Moves that involve flying or leaping cannot be used.") },
    { BATTLE_STATUS_TRICK_ROOM,                     IsStatusActive_TrickRoom,             FormatStatusName_TrickRoom, COMPOUND_STRING("Pokémon with lower Speed stats move first.") },
    { BATTLE_STATUS_TAILWIND,                       IsStatusActive_Tailwind,              FormatStatusName_Tailwind, COMPOUND_STRING("Doubles the Pokémon’s Speed stat.") },

    { BATTLE_STATUS_VOLATILE_WRAPPED,               IsStatusActive_Bound,                 FormatStatusName_Bound, COMPOUND_STRING("For 4-5 turns, the Pokémon takes damage equal to 1/8 of its max HP at the end of every turn. It cannot be switched out of battle.") },
    { BATTLE_STATUS_VOLATILE_ESCAPE_PREVENTION,     IsStatusActive_Trapped,               FormatStatusName_Trapped, COMPOUND_STRING("The Pokémon cannot be switched out of battle. Ghost-type Pokémon are unaffected.") },
    { BATTLE_STATUS_VOLATILE_CONFUSION,             IsStatusActive_Confused,              FormatStatusName_Confused, COMPOUND_STRING("For 1-4 turns, the Pokémon has a 1-in-3 chance of hurting itself.") },
    { BATTLE_STATUS_VOLATILE_CURSED,                IsStatusActive_Cursed,                FormatStatusName_Cursed, COMPOUND_STRING("The Pokémon loses 1/4 of its max HP at the end of every turn.") },
    { BATTLE_STATUS_VOLATILE_YAWN,                  IsStatusActive_Drowsy,                FormatStatusName_Drowsy, COMPOUND_STRING("The Pokémon will fall asleep at the end of the next turn after becoming drowsy.") },
    { BATTLE_STATUS_VOLATILE_EMBARGO,               IsStatusActive_Embargo,               FormatStatusName_Embargo },
    { BATTLE_STATUS_VOLATILE_ENCORE_TIMER,          IsStatusActive_Encore,                FormatStatusName_Encore, COMPOUND_STRING("The Pokémon can only use whichever move it last used before gaining the Encore status.") },
    { BATTLE_STATUS_VOLATILE_HEAL_BLOCK,            IsStatusActive_HealBlock,             FormatStatusName_HealBlock, COMPOUND_STRING("The Pokémon is unable to restore HP through moves, Abilities, or held items.") },
    { BATTLE_STATUS_VOLATILE_FORESIGHT,             IsStatusActive_Identified,            FormatStatusName_Identified },
    { BATTLE_STATUS_VOLATILE_INFATUATION,           IsStatusActive_Infatuated,            FormatStatusName_Infatuated, COMPOUND_STRING("The Pokémon has a 50% chance of being unable to use its moves while the Pokémon that gave it the Infatuated status is on the field.") },
    { BATTLE_STATUS_VOLATILE_LEECH_SEED,            IsStatusActive_LeechSeed,             FormatStatusName_LeechSeed, COMPOUND_STRING("The Pokémon takes damage equal to 1/8 of its max HP at the end of every turn. The Pokémon in the spot of the Pokémon that caused the Leech Seeded status has its HP restored by the same amount. Grass-type Pokémon are unaffected.") },
    { BATTLE_STATUS_VOLATILE_NIGHTMARE,             IsStatusActive_Nightmare,             FormatStatusName_Nightmare },
    { BATTLE_STATUS_VOLATILE_PERISH_SONG,           IsStatusActive_PerishSong,            FormatStatusName_PerishSong, COMPOUND_STRING("The Pokémon will faint 3 turns after gaining the Perishing status.") },
    { BATTLE_STATUS_VOLATILE_TAUNT_TIMER,           IsStatusActive_Taunt,                 FormatStatusName_Taunt, COMPOUND_STRING("The Pokémon can use only attacks.") },
    { BATTLE_STATUS_VOLATILE_TELEKINESIS,           IsStatusActive_Telekinesis,           FormatStatusName_Telekinesis },
    { BATTLE_STATUS_VOLATILE_TORMENT,               IsStatusActive_Torment,               FormatStatusName_Torment, COMPOUND_STRING("The Pokémon cannot use the same move twice in a row.") },

    { BATTLE_STATUS_VOLATILE_AQUA_RING,             IsStatusActive_AquaRing,              FormatStatusName_AquaRing, COMPOUND_STRING("The Pokémon has 1/16 of its max HP restored at the end of every turn.") },
    { BATTLE_STATUS_VOLATILE_ENDURED,               IsStatusActive_Bracing,               FormatStatusName_Bracing },
    { BATTLE_STATUS_VOLATILE_CHARGE_TIMER,          IsStatusActive_Charging,              FormatStatusName_Charging },
    { BATTLE_STATUS_CENTER_ATTENTION,               IsStatusActive_CenterAttention,       FormatStatusName_CenterAttention },
    { BATTLE_STATUS_VOLATILE_DEFENSE_CURL,          IsStatusActive_DefenseCurl,           FormatStatusName_DefenseCurl },
    { BATTLE_STATUS_VOLATILE_ROOT,                  IsStatusActive_Rooted,                FormatStatusName_Rooted, COMPOUND_STRING("The Pokémon has 1/16 of its max HP restored at the end of every turn. It also becomes grounded and cannot be switched out of battle.") },
    { BATTLE_STATUS_MAGIC_COAT,                     IsStatusActive_MagicCoat,             FormatStatusName_MagicCoat },
    { BATTLE_STATUS_VOLATILE_MAGNET_RISE,           IsStatusActive_MagneticLevitation,    FormatStatusName_MagneticLevitation, COMPOUND_STRING("The Pokémon floats off the ground, making it immune to Ground-type moves, as well as the Spikes, Toxic Spikes, and Sticky Web statuses.") },
    { BATTLE_STATUS_VOLATILE_MINIMIZE,              IsStatusActive_Minimized,             FormatStatusName_Minimized },
    { BATTLE_STATUS_PROTECTION,                     IsStatusActive_Protection,            FormatStatusName_Protection },
    { BATTLE_STATUS_VOLATILE_RECHARGE_TIMER,        IsStatusActive_Recharging,            FormatStatusName_Recharging, COMPOUND_STRING("The Pokémon cannot take any actions for 1 turn.") },
    { BATTLE_STATUS_UNDERGROUND,                    IsStatusActive_Underground,           FormatStatusName_Underground, COMPOUND_STRING("The Pokémon cannot be hit by most moves, but Earthquake will hit and will deal double damage. The Pokémon is also unaffected by the terrain.") },
    { BATTLE_STATUS_HIGH_FLIGHT,                    IsStatusActive_HighFlight,            FormatStatusName_HighFlight, COMPOUND_STRING("The Pokémon cannot be hit by most moves, excluding moves such as Thunder, Hurricane, and Smack Down. The Pokémon is also unaffected by the terrain.") },
    { BATTLE_STATUS_UNDERWATER,                     IsStatusActive_Underwater,            FormatStatusName_Underwater, COMPOUND_STRING("The Pokémon cannot be hit by most moves, but Surf and Whirlpool will hit and will deal double damage. The Pokémon is also unaffected by the terrain.") },
    { BATTLE_STATUS_IN_SHADOWS,                     IsStatusActive_InShadows,             FormatStatusName_InShadows, COMPOUND_STRING("The Pokémon cannot be hit by moves and is unaffected by the terrain.") },
    { BATTLE_STATUS_VOLATILE_LOCK_ON,               IsStatusActive_TakingAim,             FormatStatusName_TakingAim, COMPOUND_STRING("On the next turn after gaining the Locked On status, the Pokémon’s move will not miss if targeting the Pokémon that was locked onto.") },
    { BATTLE_STATUS_VOLATILE_RAMPAGE_TURNS,         IsStatusActive_Thrashing,             FormatStatusName_Thrashing, COMPOUND_STRING("For 2-3 turns, the Pokémon continues its attack and is unable to take any other actions. After that, it becomes confused.") },
    { BATTLE_STATUS_VOLATILE_TRANSFORMED,           IsStatusActive_Transformed,           FormatStatusName_Transformed },
    { NUM_BATTLE_STATUSES,                          NULL,                                 NULL },
};

u32 BattleStatusCriteria_CompileListForBattler(enum BattlerId battler, enum SiliconBattleStatuses *list)
{
    if (!IsBattlerAlive(battler))
    {
        list[0] = NUM_BATTLE_STATUSES;
        return 0;
    }

    u32 count = 0;
    for (u32 availableItem = 0; availableItem < BattleStatusCriteria_GetMaxTotalListItems(); availableItem++)
    {
        enum SiliconBattleStatuses status = sBattleStatusCriteria_StatusInfo[availableItem].status;
        if (status == NUM_BATTLE_STATUSES)
            break;

        IsStatusActiveFunc func = sBattleStatusCriteria_StatusInfo[availableItem].isActive;
        if (func == NULL)
            continue;

        if (func(battler))
            list[count++] = status;
    }

    return count;
}

u32 BattleStatusCriteria_GetMaxTotalListItems(void)
{
    return ARRAY_COUNT(sBattleStatusCriteria_StatusInfo);
}

const u8 *BattleStatusCriteria_GetFormattedName(enum BattlerId battler, enum SiliconBattleStatuses status)
{
    u32 idx = BattleStatusCriteria_StatusToIdx(status);
    FormatStatusNameFunc func = sBattleStatusCriteria_StatusInfo[idx].formatName;
    if (status == NUM_BATTLE_STATUSES
     || func == NULL)
    {
        return gText_EmptyString3;
    }

    return func(battler);
}

const u8 *BattleStatusCriteria_GetDescription(enum SiliconBattleStatuses status)
{
    u32 idx = BattleStatusCriteria_StatusToIdx(status);
    const u8 *desc = sBattleStatusCriteria_StatusInfo[idx].desc;
    if (status == NUM_BATTLE_STATUSES
     || desc == NULL)
    {
        return COMPOUND_STRING("No description for this status found.");
    }

    return desc;
}

static u32 BattleStatusCriteria_StatusToIdx(enum SiliconBattleStatuses status)
{
    u32 idx = 0;

    while (sBattleStatusCriteria_StatusInfo[idx].status != NUM_BATTLE_STATUSES)
    {
        if (sBattleStatusCriteria_StatusInfo[idx].status == status)
            return idx;

        idx++;
    }

    return NUM_BATTLE_STATUSES;
}

static bool32 BattleStatusCriteria_BattlerHasStatus1(enum BattlerId battler, u32 status)
{
    return gBattleMons[battler].status1 & status;
}

static u8 *BattleStatusCriteria_FormatTerrainName(const u8 *name)
{
    u8 *tail = StringCopy(gStringVar1, name);
    StringCopy(tail, COMPOUND_STRING(" Terrain"));

    return gStringVar1;
}

static u8 *BattleStatusCriteria_FormatDuration(const u8 *name, u32 currDuration, u32 maxDuration)
{
    if (maxDuration)
    {
        u8 *tail = StringCopy(gStringVar1, name);
        tail = StringCopy(tail, COMPOUND_STRING(" "));
        tail = ConvertIntToDecimalStringN(tail, currDuration, STR_CONV_MODE_LEFT_ALIGN, 1);
        tail = StringCopy(tail, COMPOUND_STRING("/"));
        tail = ConvertIntToDecimalStringN(tail, maxDuration, STR_CONV_MODE_LEFT_ALIGN, 1);
    }

    return gStringVar1;
}

static u8 *BattleStatusCriteria_FormatWeatherDuration(const u8 *name)
{
    return BattleStatusCriteria_FormatDuration(name, gBattleStruct->weatherDuration, gRecordedMaxBattleStatusValues.weatherDuration);
}

static u8 *BattleStatusCriteria_FormatSingleNumber(const u8 *name, u32 totalLayers)
{
    u8 *tail = StringCopy(gStringVar1, name);
    tail = StringCopy(tail, COMPOUND_STRING(" "));
    ConvertIntToDecimalStringN(tail, totalLayers, STR_CONV_MODE_LEFT_ALIGN, 1);

    return gStringVar1;
}

static u8 *BattleStatusCriteria_FormatRoomDuration(const u8 *name, u32 currDuration, u32 maxDuration)
{
    u8 *tail = StringCopy(gStringVar2, name);
    StringCopy(tail, COMPOUND_STRING(" "));

    return BattleStatusCriteria_FormatDuration(gStringVar2, currDuration, maxDuration);
}

/*

static bool32 IsStatusActive_(enum BattlerId battler)
{
    return TRUE;
}

static const u8 *FormatStatusName_(enum BattlerId battler)
{
    return COMPOUND_STRING("");
}
*/

static bool32 IsStatusActive_MegaEvolve(enum BattlerId battler)
{
    return GetActiveGimmick(battler) == GIMMICK_MEGA;
}

static const u8 *FormatStatusName_MegaEvolve(enum BattlerId battler)
{
    return COMPOUND_STRING("Mega Evolve");
}

static bool32 IsStatusActive_Dynamax(enum BattlerId battler)
{
    return GetActiveGimmick(battler) == GIMMICK_DYNAMAX;
}

static const u8 *FormatStatusName_Dynamax(enum BattlerId battler)
{
    return COMPOUND_STRING("Dynamax");
}

static bool32 IsStatusActive_Burn(enum BattlerId battler)
{
    return BattleStatusCriteria_BattlerHasStatus1(battler, STATUS1_BURN);
}

static const u8 *FormatStatusName_Burn(enum BattlerId battler)
{
    return COMPOUND_STRING("Burn");
}

static bool32 IsStatusActive_Freeze(enum BattlerId battler)
{
    return BattleStatusCriteria_BattlerHasStatus1(battler, STATUS1_FREEZE);
}

static const u8 *FormatStatusName_Freeze(enum BattlerId battler)
{
    return COMPOUND_STRING("Freeze");
}

static bool32 IsStatusActive_Paralyzed(enum BattlerId battler)
{
    return BattleStatusCriteria_BattlerHasStatus1(battler, STATUS1_PARALYSIS);
}

static const u8 *FormatStatusName_Paralyzed(enum BattlerId battler)
{
    return COMPOUND_STRING("Paralyzed");
}

static bool32 IsStatusActive_Poisoned(enum BattlerId battler)
{
    return BattleStatusCriteria_BattlerHasStatus1(battler, STATUS1_POISON);
}

static bool32 IsStatusActive_BadlyPoisoned(enum BattlerId battler)
{
    return BattleStatusCriteria_BattlerHasStatus1(battler, STATUS1_TOXIC_POISON);
}

static const u8 *FormatStatusName_Poisoned(enum BattlerId battler)
{
    if (BattleStatusCriteria_BattlerHasStatus1(battler, STATUS1_TOXIC_POISON))
        return COMPOUND_STRING("Badly Poisoned");
    else
        return COMPOUND_STRING("Poisoned");
}

static bool32 IsStatusActive_Asleep(enum BattlerId battler)
{
    return BattleStatusCriteria_BattlerHasStatus1(battler, STATUS1_SLEEP);
}

static const u8 *FormatStatusName_Asleep(enum BattlerId battler)
{
    return COMPOUND_STRING("Asleep");
}

static bool32 IsStatusActive_ElectricTerrain(enum BattlerId battler)
{
    return gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN;
}

static const u8 *FormatStatusName_ElectricTerrain(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatTerrainName(COMPOUND_STRING("Electric"));
}

static bool32 IsStatusActive_GrassyTerrain(enum BattlerId battler)
{
    return gFieldStatuses & STATUS_FIELD_GRASSY_TERRAIN;
}

static const u8 *FormatStatusName_GrassyTerrain(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatTerrainName(COMPOUND_STRING("Grassy"));
}

static bool32 IsStatusActive_MistyTerrain(enum BattlerId battler)
{
    return gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN;
}

static const u8 *FormatStatusName_MistyTerrain(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatTerrainName(COMPOUND_STRING("Misty"));
}

static bool32 IsStatusActive_PsychicTerrain(enum BattlerId battler)
{
    return gFieldStatuses & STATUS_FIELD_PSYCHIC_TERRAIN;
}

static const u8 *FormatStatusName_PsychicTerrain(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatTerrainName(COMPOUND_STRING("Psychic"));
}

static bool32 IsStatusActive_HarshSun(enum BattlerId battler)
{
    return gBattleWeather & B_WEATHER_SUN;
}

static const u8 *FormatStatusName_HarshSun(enum BattlerId battler)
{
    if (gBattleWeather & B_WEATHER_PRIMAL_ANY)
        return COMPOUND_STRING("Very Harsh Sun");

    return BattleStatusCriteria_FormatWeatherDuration(COMPOUND_STRING("Harsh Sun"));
}

static bool32 IsStatusActive_Rain(enum BattlerId battler)
{
    return gBattleWeather & B_WEATHER_RAIN;
}

static const u8 *FormatStatusName_Rain(enum BattlerId battler)
{
    if (gBattleWeather & B_WEATHER_PRIMAL_ANY)
        return COMPOUND_STRING("Heavy Rain");

    return BattleStatusCriteria_FormatWeatherDuration(COMPOUND_STRING("Rain"));
}

static bool32 IsStatusActive_Sandstorm(enum BattlerId battler)
{
    return gBattleWeather & B_WEATHER_SANDSTORM;
}

static const u8 *FormatStatusName_Sandstorm(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatWeatherDuration(COMPOUND_STRING("Sandstorm"));
}

static bool32 IsStatusActive_Snow(enum BattlerId battler)
{
    return gBattleWeather & B_WEATHER_SNOW;
}

static const u8 *FormatStatusName_Snow(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatWeatherDuration(COMPOUND_STRING("Snow"));
}

static bool32 IsStatusActive_Fog(enum BattlerId battler)
{
    return gBattleWeather & B_WEATHER_FOG;
}

static const u8 *FormatStatusName_Fog(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatWeatherDuration(COMPOUND_STRING("Fog"));
}

static bool32 IsStatusActive_StrongWinds(enum BattlerId battler)
{
    return gBattleWeather & B_WEATHER_STRONG_WINDS;
}

static const u8 *FormatStatusName_StrongWinds(enum BattlerId battler)
{
    return COMPOUND_STRING("Strong Winds");
}

static bool32 IsStatusActive_Spikes(enum BattlerId battler)
{
    return IsHazardOnSide(GetBattlerSide(battler), HAZARDS_SPIKES);
}

static const u8 *FormatStatusName_Spikes(enum BattlerId battler)
{
    enum BattleSide side = GetBattlerSide(battler);
    return BattleStatusCriteria_FormatSingleNumber(COMPOUND_STRING("Spikes"), gSideTimers[side].spikesAmount);
}

static bool32 IsStatusActive_StealthRock(enum BattlerId battler)
{
    return IsHazardOnSide(GetBattlerSide(battler), HAZARDS_STEALTH_ROCK);
}

static const u8 *FormatStatusName_StealthRock(enum BattlerId battler)
{
    return COMPOUND_STRING("Stealth Rock");
}

static bool32 IsStatusActive_ToxicSpikes(enum BattlerId battler)
{
    return IsHazardOnSide(GetBattlerSide(battler), HAZARDS_STEALTH_ROCK);
}

static const u8 *FormatStatusName_ToxicSpikes(enum BattlerId battler)
{
    enum BattleSide side = GetBattlerSide(battler);
    return BattleStatusCriteria_FormatSingleNumber(COMPOUND_STRING("Toxic Spikes"), gSideTimers[side].toxicSpikesAmount);
}

static bool32 IsStatusActive_StickyWeb(enum BattlerId battler)
{
    return IsHazardOnSide(GetBattlerSide(battler), HAZARDS_STICKY_WEB);
}

static const u8 *FormatStatusName_StickyWeb(enum BattlerId battler)
{
    return COMPOUND_STRING("Sticky Web");
}

static bool32 IsStatusActive_SharpSteel(enum BattlerId battler)
{
    return IsHazardOnSide(GetBattlerSide(battler), HAZARDS_STEELSURGE);
}

static const u8 *FormatStatusName_SharpSteel(enum BattlerId battler)
{
    return COMPOUND_STRING("Sharp Steel");
}

static bool32 IsStatusActive_MagicRoom(enum BattlerId battler)
{
    return gFieldStatuses & STATUS_FIELD_MAGIC_ROOM;
}

static const u8 *FormatStatusName_MagicRoom(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatRoomDuration(COMPOUND_STRING("Magic"), gFieldTimers.magicRoomTimer, gRecordedMaxBattleStatusValues.magicRoomDuration);
}

static bool32 IsStatusActive_WonderRoom(enum BattlerId battler)
{
    return gFieldStatuses & STATUS_FIELD_WONDER_ROOM;
}

static const u8 *FormatStatusName_WonderRoom(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatRoomDuration(COMPOUND_STRING("Wonder"), gFieldTimers.wonderRoomTimer, gRecordedMaxBattleStatusValues.wonderRoomDuration);
}

static bool32 IsStatusActive_Gravity(enum BattlerId battler)
{
    return gFieldStatuses & STATUS_FIELD_GRAVITY;
}

static const u8 *FormatStatusName_Gravity(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatDuration(COMPOUND_STRING("Gravity"), gFieldTimers.trickRoomTimer, gRecordedMaxBattleStatusValues.trickRoomDuration);
}

static bool32 IsStatusActive_TrickRoom(enum BattlerId battler)
{
    return gFieldStatuses & STATUS_FIELD_TRICK_ROOM;
}

static const u8 *FormatStatusName_TrickRoom(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatRoomDuration(COMPOUND_STRING("Trick"), gFieldTimers.trickRoomTimer, gRecordedMaxBattleStatusValues.trickRoomDuration);
}

static bool32 IsStatusActive_Tailwind(enum BattlerId battler)
{
    return gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_TAILWIND;
}

static const u8 *FormatStatusName_Tailwind(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatDuration(COMPOUND_STRING("Tailwind"), gSideTimers[GetBattlerSide(battler)].tailwindTimer, gRecordedMaxBattleStatusValues.tailwindDuration);
}

static bool32 IsStatusActive_Bound(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.wrapped;
}

static const u8 *FormatStatusName_Bound(enum BattlerId battler)
{
    return COMPOUND_STRING("Bound");
}

static bool32 IsStatusActive_Trapped(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.escapePrevention;
}

static const u8 *FormatStatusName_Trapped(enum BattlerId battler)
{
    return COMPOUND_STRING("Trapped");
}

static bool32 IsStatusActive_Confused(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.confusionTurns || gBattleMons[battler].volatiles.infiniteConfusion;
}

static const u8 *FormatStatusName_Confused(enum BattlerId battler)
{
    return COMPOUND_STRING("Confused");
}

static bool32 IsStatusActive_Cursed(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.cursed;
}

static const u8 *FormatStatusName_Cursed(enum BattlerId battler)
{
    return COMPOUND_STRING("Cursed");
}

static bool32 IsStatusActive_Drowsy(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.yawn;
}

static const u8 *FormatStatusName_Drowsy(enum BattlerId battler)
{
    return COMPOUND_STRING("Drowsy");
}

static bool32 IsStatusActive_Embargo(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.embargo;
}

static const u8 *FormatStatusName_Embargo(enum BattlerId battler)
{
    return COMPOUND_STRING("Embargo");
}

static bool32 IsStatusActive_Encore(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.encoreTimer;
}

static const u8 *FormatStatusName_Encore(enum BattlerId battler)
{
    return COMPOUND_STRING("Encore");
}

static bool32 IsStatusActive_HealBlock(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.healBlock;
}

static const u8 *FormatStatusName_HealBlock(enum BattlerId battler)
{
    return COMPOUND_STRING("Heal Block");
}

static bool32 IsStatusActive_Identified(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.foresight;
}

static const u8 *FormatStatusName_Identified(enum BattlerId battler)
{
    return COMPOUND_STRING("Identified");
}

static bool32 IsStatusActive_Infatuated(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.infatuation > 0;
}

static const u8 *FormatStatusName_Infatuated(enum BattlerId battler)
{
    return COMPOUND_STRING("Infatuated");
}

static bool32 IsStatusActive_LeechSeed(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.leechSeed > 0;
}

static const u8 *FormatStatusName_LeechSeed(enum BattlerId battler)
{
    return COMPOUND_STRING("Leech Seed");
}

static bool32 IsStatusActive_Nightmare(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.nightmare;
}

static const u8 *FormatStatusName_Nightmare(enum BattlerId battler)
{
    return COMPOUND_STRING("Nightmare");
}

static bool32 IsStatusActive_PerishSong(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.perishSong;
}

static const u8 *FormatStatusName_PerishSong(enum BattlerId battler)
{
    u32 timer = gBattleMons[battler].volatiles.perishSongTimer;
    return BattleStatusCriteria_FormatSingleNumber(COMPOUND_STRING("Perish Song"), timer);
}

static bool32 IsStatusActive_Taunt(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.tauntTimer;
}

static const u8 *FormatStatusName_Taunt(enum BattlerId battler)
{
    return COMPOUND_STRING("Taunt");
}

static bool32 IsStatusActive_Telekinesis(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.telekinesis;
}

static const u8 *FormatStatusName_Telekinesis(enum BattlerId battler)
{
    return COMPOUND_STRING("Telekinesis");
}

static bool32 IsStatusActive_Torment(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.torment;
}

static const u8 *FormatStatusName_Torment(enum BattlerId battler)
{
    return COMPOUND_STRING("Torment");
}

static bool32 IsStatusActive_AquaRing(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.aquaRing;
}

static const u8 *FormatStatusName_AquaRing(enum BattlerId battler)
{
    return COMPOUND_STRING("Aqua Ring");
}

static bool32 IsStatusActive_Bracing(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.endured;
}

static const u8 *FormatStatusName_Bracing(enum BattlerId battler)
{
    return COMPOUND_STRING("Endured");
}

static bool32 IsStatusActive_Charging(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.chargeTimer;
}

static const u8 *FormatStatusName_Charging(enum BattlerId battler)
{
    return COMPOUND_STRING("Charging");
}

static bool32 IsStatusActive_CenterAttention(enum BattlerId battler)
{
    return gSideTimers[GetBattlerSide(battler)].followmeTimer;
}

static const u8 *FormatStatusName_CenterAttention(enum BattlerId battler)
{
    return COMPOUND_STRING("Center Attention");
}

static bool32 IsStatusActive_DefenseCurl(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.defenseCurl;
}

static const u8 *FormatStatusName_DefenseCurl(enum BattlerId battler)
{
    return COMPOUND_STRING("Defense Curl");
}

static bool32 IsStatusActive_Rooted(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.root;
}

static const u8 *FormatStatusName_Rooted(enum BattlerId battler)
{
    return COMPOUND_STRING("Rooted");
}

static bool32 IsStatusActive_MagicCoat(enum BattlerId battler)
{
    return gBattleStruct->magicCoatPending & (1 << battler);
}

static const u8 *FormatStatusName_MagicCoat(enum BattlerId battler)
{
    return COMPOUND_STRING("Magic Coat");
}

static bool32 IsStatusActive_MagneticLevitation(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.magnetRise;
}

static const u8 *FormatStatusName_MagneticLevitation(enum BattlerId battler)
{
    return BattleStatusCriteria_FormatSingleNumber(COMPOUND_STRING("MagnetLevitate"), gBattleMons[battler].volatiles.magnetRiseTimer);
}

static bool32 IsStatusActive_Minimized(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.minimize;
}

static const u8 *FormatStatusName_Minimized(enum BattlerId battler)
{
    return COMPOUND_STRING("Minimized");
}

static bool32 IsStatusActive_Protection(enum BattlerId battler)
{
    return gProtectStructs[battler].protected != PROTECT_NONE;
}

static const u8 *FormatStatusName_Protection(enum BattlerId battler)
{
    return COMPOUND_STRING("Protection");
}

static bool32 IsStatusActive_Recharging(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.rechargeTimer;
}

static const u8 *FormatStatusName_Recharging(enum BattlerId battler)
{
    return COMPOUND_STRING("Recharging");
}

static bool32 IsStatusActive_Underground(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.semiInvulnerable == STATE_UNDERGROUND;
}

static const u8 *FormatStatusName_Underground(enum BattlerId battler)
{
    return COMPOUND_STRING("Underground");
}

static bool32 IsStatusActive_HighFlight(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.semiInvulnerable == STATE_ON_AIR;
}

static const u8 *FormatStatusName_HighFlight(enum BattlerId battler)
{
    return COMPOUND_STRING("High Flight");
}

static bool32 IsStatusActive_Underwater(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.semiInvulnerable == STATE_UNDERWATER;
}

static const u8 *FormatStatusName_Underwater(enum BattlerId battler)
{
    return COMPOUND_STRING("Underwater");
}

static bool32 IsStatusActive_InShadows(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.semiInvulnerable == STATE_PHANTOM_FORCE;
}

static const u8 *FormatStatusName_InShadows(enum BattlerId battler)
{
    return COMPOUND_STRING("In Shadows");
}

static bool32 IsStatusActive_TakingAim(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.lockOn;
}

static const u8 *FormatStatusName_TakingAim(enum BattlerId battler)
{
    return COMPOUND_STRING("Taking Aim");
}

static bool32 IsStatusActive_Thrashing(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.rampageTurns;
}

static const u8 *FormatStatusName_Thrashing(enum BattlerId battler)
{
    return COMPOUND_STRING("Thrashing");
}

static bool32 IsStatusActive_Transformed(enum BattlerId battler)
{
    return gBattleMons[battler].volatiles.transformed;
}

static const u8 *FormatStatusName_Transformed(enum BattlerId battler)
{
    return COMPOUND_STRING("Transformed");
}
