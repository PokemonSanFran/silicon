#include "global.h"
#include "battle.h"
#include "coins.h"
#include "credits.h"
#include "data.h"
#include "daycare.h"
#include "debug.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_message_box.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "list_menu.h"
#include "quest_logic.h"
#include "m4a.h"
#include "main.h"
#include "main_menu.h"
#include "malloc.h"
#include "ui_character_customization_menu.h"
#include "map_name_popup.h"
#include "menu.h"
#include "money.h"
#include "naming_screen.h"
#include "new_game.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"
#include "quests.h"
#include "random.h"
#include "region_map.h"
#include "script.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "story_jump.h"
#include "task.h"
#include "debug_start.h"
#include "pokemon_summary_screen.h"
#include "constants/abilities.h"
#include "constants/battle_frontier.h"
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/map_groups.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/species.h"
#include "constants/weather.h"
#include "constants/quests.h"
#include "buzzr.h"
#include "buzzr_criteria.h"
#include "field_specials.h"
#include "constants/story_jump.h"
#include "post_battle_event_funcs.h"
#include "quest_logic.h"
#include "siliconStarter.h"
#include "constants/heal_locations.h"

static void IncrementStorylineVariable();
static void PreventVariableFromReversion(u16, u8, u8);
static void JumpPlayerTo_Prologue_Intro(bool32);
static void JumpPlayerTo_Prologue_Champion(bool32);
static void JumpPlayerTo_Prologue_Announcement(bool32);
static void JumpPlayerTo_BeginAdventure(bool32);
static void JumpPlayerTo_StarterChoice(bool32);
static void JumpPlayerTo_ImProbablyBetterThanYou(bool32);
static void JumpPlayerTo_swagbag(bool32);
static void JumpPlayerTo_ReadySetI(bool32);
static void JumpPlayerTo_CatchTutorial(bool32);
static void JumpPlayerTo_EnterBelen(bool32);
static void JumpPlayerTo_EnterShinzo(bool32);
static void JumpPlayerTo_EnterEmrys(bool32);
static void JumpPlayerTo_NewAssholeAppears(bool32);
static void JumpPlayerTo_OldAssholeAppears(bool32);
static void JumpPlayerTo_GroupofAssholesAppears(bool32);
static void JumpPlayerTo_FlyingBlind(bool32);
static void JumpPlayerTo_WowYoureStrong(bool32);
static void JumpPlayerTo_TheGangsAllHere(bool32);
static void JumpPlayerTo_AlwaysWatchingWazokwski(bool32);
static void JumpPlayerTo_EnterAdaora(bool32);
static void JumpPlayerTo_HowDoWeGetHome(bool32);
static void JumpPlayerTo_AaandWereBack(bool32);
static void JumpPlayerTo_AssholesHome(bool32);
static void JumpPlayerTo_HousingProtest(bool32);
static void JumpPlayerTo_swagbag2(bool32);
static void JumpPlayerTo_EnterKauna(bool32);
static void JumpPlayerTo_SorryAboutMyFriends(bool32);
static void JumpPlayerTo_TheStorySoFar(bool32, u32);
static void JumpPlayerTo_YoungPadawan(bool32);
static void JumpPlayerTo_WaitYouWentWhere(bool32);
static void JumpPlayerTo_EnterNeriene(bool32);
static void JumpPlayerTo_FriendsForDinner(bool32);
static void JumpPlayerTo_Keiyingsraisondetre(bool32);
static void JumpPlayerTo_BeachBattle(bool32);
static void JumpPlayerTo_EnterDimu(bool32);
static void JumpPlayerTo_ANewStrike(bool32);
static void JumpPlayerTo_AndWeMarchOn(bool32);
static void JumpPlayerTo_EnterBD(bool32);
static void JumpPlayerTo_Battle8(bool32);
static void JumpPlayerTo_EnterAmiArgento(bool32);
static void JumpPlayerTo_TheStrikeStrikesBack(bool32);
static void JumpPlayerTo_VSGarbodor(bool32);
static void JumpPlayerTo_OffYouGo_Phone(bool32);
static void JumpPlayerTo_OffYouGo_Bridge(bool32);
static void JumpPlayerTo_IGuessWeShouldBeNiceNow(bool32);
static void JumpPlayerTo_EntertheMaster(bool32);
static void JumpPlayerTo_HaveYouSeenTheNews(bool32);
static void JumpPlayerTo_WelcometotheWarRoom(bool32);
static void JumpPlayerTo_SurvivalChance333(bool32);
static void JumpPlayerTo_WhyAreYouHelpingThem(bool32);
static void JumpPlayerTo_WhyAreYouHelpingThemSleep(bool32);
static void JumpPlayerTo_HeresHowThisIsGoingToGo(bool32);
static void JumpPlayerTo_WhyDidntYouRatMeOut(bool32);
static void JumpPlayerTo_GroupStages(bool32);
static void JumpPlayerTo_Finals(bool32);
static void JumpPlayerTo_WaitHeDidWhat(bool32);
static void JumpPlayerTo_WelcometotheHallofFame(bool32);
static void JumpPlayerTo_BeingChampionisHard(bool32);
static void JumpPlayerTo_LetsGrabLunch(bool32);
static void JumpPlayerTo_RestoreHodouCity(bool32);
static void JumpPlayerTo_RestoreZenzuIsland(bool32);
static void JumpPlayerTo_RestoreEspuleeOutskirts(bool32);
//static void JumpPlayerTo_RestoreTirabudinPlace(bool32);
static void JumpPlayerTo_YouRealizeWereEvilRight(bool32);
static void JumpPlayerTo_YouRealizeTheyreEvilRight_Phone(bool32);
static void JumpPlayerTo_YouRealizeTheyreEvilRight_Island(bool32);
static void JumpPlayerTo_CongratsYoureanAsshole(bool32);
static void JumpPlayerTo_YouHaveYourOrders(bool32);
static void JumpPlayerTo_HowDisappointing_Raid(bool32);
static void JumpPlayerTo_HowDisappointing_Arrest(bool32);
static void JumpPlayerTo_LetsBurnThisMotherDown(bool32);
static void JumpPlayerTo_Manhunt_News(bool32);
static void JumpPlayerTo_Manhunt_Business(bool32);
static void JumpPlayerTo_Manhunt_Ball(bool32);
static void JumpPlayerTo_Manhunt_Route(bool32);
static void JumpPlayerTo_Manhunt_Vigrim(bool32);
static void JumpPlayerTo_ExhibitionBattle(bool32);
static void JumpPlayerTo_MaybeIFuckedUp(bool32);
static void JumpPlayerTo_OkayLetsFixit(bool32);
static void JumpPlayerTo_LetsGettheBandBackTogether_Before(bool32);
static void JumpPlayerTo_LetsGettheBandBackTogether_After(bool32);
static void JumpPlayerTo_MaskOff_H(bool32);
static void JumpPlayerTo_MaskOff_F(bool32);
static void JumpPlayerTo_MaskOff_I(bool32);
static void JumpPlayerTo_MaskOff_D(bool32);
static void JumpPlayerTo_MaskOff_G(bool32);
static void JumpPlayerTo_MaskOff_Vigrim(bool32);
static void JumpPlayerTo_LetsFixThis(bool32);
static void JumpPlayerTo_LockedOut(bool32);
static void JumpPlayerTo_WarehouseRave(bool32);
static void JumpPlayerTo_SpeechSpeechSpeech(bool32);
static void JumpPlayerTo_Persuasivepassenger(bool32);
static void JumpPlayerTo_Breaktheinternet(bool32);
static void JumpPlayerTo_Warehousewarfare(bool32);
static void JumpPlayerTo_OneDown(bool32);
static void JumpPlayerTo_Earthquake_Inside(bool32);
static void JumpPlayerTo_Earthquake_Outside(bool32);
static void JumpPlayerTo_ThisIsntRandom_Discover(bool32);
static void JumpPlayerTo_ThisIsntRandom_Mon1(bool32);
static void JumpPlayerTo_ThisIsntRandom_Mon2(bool32);
static void JumpPlayerTo_WaitEvenThen(bool32);
static void JumpPlayerTo_LetsFinishThis(bool32);
static void JumpPlayerTo_ImIn_Breakin(bool32);
static void JumpPlayerTo_ImIn_Postwarp(bool32);
static void JumpPlayerTo_ImIn_Postrival(bool32);
static void JumpPlayerTo_YouCantStopMe_Lastplea(bool32);
static void JumpPlayerTo_YouCantStopMe_Postbattle(bool32);
static void JumpPlayerTo_WeCanStopYouActually(bool32);
static void JumpPlayerTo_Epilogue(bool32);

void JumpPlayerToStoryPoint(u32 chosenStoryPoint, bool32 jumpType)
{
    switch (chosenStoryPoint)
    {
        case JUMPPLAYER_PROLOGUE_INTRO:
            JumpPlayerTo_Prologue_Intro(jumpType);
            break;
        case JUMPPLAYER_PROLOGUE_CHAMPION:
            JumpPlayerTo_Prologue_Champion(jumpType);
            break;
        case JUMPPLAYER_PROLOGUE_ANNOUNCEMENT:
            JumpPlayerTo_Prologue_Announcement(jumpType);
            break;
        case JUMPPLAYER_BEGINADVENTURE:
            JumpPlayerTo_BeginAdventure(jumpType);
            break;
        case JUMPPLAYER_STARTERCHOICE:
            JumpPlayerTo_StarterChoice(jumpType);
            break;
        case JUMPPLAYER_IMPROBABLYBETTERTHANYOU:
            JumpPlayerTo_ImProbablyBetterThanYou(jumpType);
            break;
        case JUMPPLAYER_SWAGBAG:
            JumpPlayerTo_swagbag(jumpType);
            break;
        case JUMPPLAYER_READYSETI:
            JumpPlayerTo_ReadySetI(jumpType);
            break;
        case JUMPPLAYER_CATCHTUTORIAL:
            JumpPlayerTo_CatchTutorial(jumpType);
            break;
        case JUMPPLAYER_ENTERBELEN:
            JumpPlayerTo_EnterBelen(jumpType);
            break;
        case JUMPPLAYER_ENTERSHINZO:
            JumpPlayerTo_EnterShinzo(jumpType);
            break;
        case JUMPPLAYER_ENTEREMRYS:
            JumpPlayerTo_EnterEmrys(jumpType);
            break;
        case JUMPPLAYER_NEWASSHOLEAPPEARS:
            JumpPlayerTo_NewAssholeAppears(jumpType);
            break;
        case JUMPPLAYER_OLDASSHOLEAPPEARS:
            JumpPlayerTo_OldAssholeAppears(jumpType);
            break;
        case JUMPPLAYER_GROUPOFASSHOLESAPPEARS:
            JumpPlayerTo_GroupofAssholesAppears(jumpType);
            break;
        case JUMPPLAYER_FLYINGBLIND_NORTH:
            JumpPlayerTo_FlyingBlind(jumpType);
            break;
        case JUMPPLAYER_WOWYOURESTRONG_PERLACIA_CITY:
            JumpPlayerTo_WowYoureStrong(jumpType);
            break;
        case JUMPPLAYER_THEGANGSALLHERE:
            JumpPlayerTo_TheGangsAllHere(jumpType);
            break;
        case JUMPPLAYER_ALWAYSWATCHINGWAZOKWSKI:
            JumpPlayerTo_AlwaysWatchingWazokwski(jumpType);
            break;
        case JUMPPLAYER_ENTERADAORA:
            JumpPlayerTo_EnterAdaora(jumpType);
            break;
        case JUMPPLAYER_HOWDOWEGETHOME:
            JumpPlayerTo_HowDoWeGetHome(jumpType);
            break;
        case JUMPPLAYER_AAANDWEREBACK:
            JumpPlayerTo_AaandWereBack(jumpType);
            break;
        case JUMPPLAYER_ASSHOLESHOME:
            JumpPlayerTo_AssholesHome(jumpType);
            break;
        case JUMPPLAYER_HOUSINGPROTEST:
            JumpPlayerTo_HousingProtest(jumpType);
            break;
        case JUMPPLAYER_SWAGBAG2:
            JumpPlayerTo_swagbag2(jumpType);
            break;
        case JUMPPLAYER_ENTERKAUNA:
            JumpPlayerTo_EnterKauna(jumpType);
            break;
        case JUMPPLAYER_SORRYABOUTMYFRIENDS:
            JumpPlayerTo_SorryAboutMyFriends(jumpType);
            break;
        case JUMPPLAYER_THESTORYSOFAR_A:
        case JUMPPLAYER_THESTORYSOFAR_B:
        case JUMPPLAYER_THESTORYSOFAR_C:
        case JUMPPLAYER_THESTORYSOFAR_D:
        case JUMPPLAYER_THESTORYSOFAR_E:
        case JUMPPLAYER_THESTORYSOFAR_F:
        case JUMPPLAYER_THESTORYSOFAR_ALL:
            JumpPlayerTo_TheStorySoFar(jumpType, chosenStoryPoint);
            break;
        case JUMPPLAYER_YOUNGPADAWAN:
            JumpPlayerTo_YoungPadawan(jumpType);
            break;
        case JUMPPLAYER_WAITYOUWENTWHERE:
            JumpPlayerTo_WaitYouWentWhere(jumpType);
            break;
        case JUMPPLAYER_ENTERNERIENE:
            JumpPlayerTo_EnterNeriene(jumpType);
            break;
        case JUMPPLAYER_FRIENDSFORDINNER:
            JumpPlayerTo_FriendsForDinner(jumpType);
            break;
        case JUMPPLAYER_KEIYINGSRAISONDETRE:
            JumpPlayerTo_Keiyingsraisondetre(jumpType);
            break;
        case JUMPPLAYER_BEACHBATTLE:
            JumpPlayerTo_BeachBattle(jumpType);
            break;
        case JUMPPLAYER_ENTERDIMU:
            JumpPlayerTo_EnterDimu(jumpType);
            break;
        case JUMPPLAYER_ANEWSTRIKE:
            JumpPlayerTo_ANewStrike(jumpType);
            break;
        case JUMPPLAYER_ANDWEMARCHON:
            JumpPlayerTo_AndWeMarchOn(jumpType);
            break;
        case JUMPPLAYER_ENTERBD:
            JumpPlayerTo_EnterBD(jumpType);
            break;
        case JUMPPLAYER_BATTLE8:
            JumpPlayerTo_Battle8(jumpType);
            break;
        case JUMPPLAYER_ENTERAMIARGENTO:
            JumpPlayerTo_EnterAmiArgento(jumpType);
            break;
        case JUMPPLAYER_THESTRIKESTRIKESBACK:
            JumpPlayerTo_TheStrikeStrikesBack(jumpType);
            break;
        case JUMPPLAYER_VSGARBODOR:
            JumpPlayerTo_VSGarbodor(jumpType);
            break;
        case JUMPPLAYER_OFFYOUGO_PHONE:
            JumpPlayerTo_OffYouGo_Phone(jumpType);
            break;
        case JUMPPLAYER_OFFYOUGO_BRIDGE:
            JumpPlayerTo_OffYouGo_Bridge(jumpType);
            break;
        case JUMPPLAYER_IGUESSWESHOULDBENICENOW:
            JumpPlayerTo_IGuessWeShouldBeNiceNow(jumpType);
            break;
        case JUMPPLAYER_ENTERTHEMASTER:
            JumpPlayerTo_EntertheMaster(jumpType);
            break;
        case JUMPPLAYER_HAVEYOUSEENTHENEWS:
            JumpPlayerTo_HaveYouSeenTheNews(jumpType);
            break;
        case JUMPPLAYER_WELCOMETOTHEWARROOM:
            JumpPlayerTo_WelcometotheWarRoom(jumpType);
            break;
        case JUMPPLAYER_SURVIVALCHANCE333:
            JumpPlayerTo_SurvivalChance333(jumpType);
            break;
        case JUMPPLAYER_WHYAREYOUHELPINGTHEM:
            JumpPlayerTo_WhyAreYouHelpingThem(jumpType);
            break;
        case JUMPPLAYER_WHYAREYOUHELPINGTHEMSLEEP:
            JumpPlayerTo_WhyAreYouHelpingThemSleep(jumpType);
            break;
        case JUMPPLAYER_HERESHOWTHISISGOINGTOGO:
            JumpPlayerTo_HeresHowThisIsGoingToGo(jumpType);
            break;
        case JUMPPLAYER_WHYDIDNTYOURATMEOUT:
            JumpPlayerTo_WhyDidntYouRatMeOut(jumpType);
            break;
        case JUMPPLAYER_GROUPSTAGES:
            JumpPlayerTo_GroupStages(jumpType);
            break;
        case JUMPPLAYER_FINALS:
            JumpPlayerTo_Finals(jumpType);
            break;
        case JUMPPLAYER_WAITHEDIDWHAT:
            JumpPlayerTo_WaitHeDidWhat(jumpType);
            break;
        case JUMPPLAYER_WELCOMETOTHEHALLOFFAME:
            JumpPlayerTo_WelcometotheHallofFame(jumpType);
            break;
        case JUMPPLAYER_BEINGCHAMPIONISHARD:
            JumpPlayerTo_BeingChampionisHard(jumpType);
            break;
        case JUMPPLAYER_LETSGRABLUNCH:
            JumpPlayerTo_LetsGrabLunch(jumpType);
            break;
        case JUMPPLAYER_RESTOREHODOU_CITY:
            JumpPlayerTo_RestoreHodouCity(jumpType);
            break;
        case JUMPPLAYER_RESTOREZENZU_ISLAND:
            JumpPlayerTo_RestoreZenzuIsland(jumpType);
            break;
        case JUMPPLAYER_RESTOREESPULEE_OUTSKIRTS:
            JumpPlayerTo_RestoreEspuleeOutskirts(jumpType);
            break;
            /*
               case JUMPPLAYER_RESTORETIRABUDIN_PLACE:
               JumpPlayerTo_RestoreTirabudinPlace(jumpType);
               */
            break;
        case JUMPPLAYER_YOUREALIZEWEREEVILRIGHT:
            JumpPlayerTo_YouRealizeWereEvilRight(jumpType);
            break;
        case JUMPPLAYER_YOUREALIZETHEYREEVILRIGHT_PHONE:
            JumpPlayerTo_YouRealizeTheyreEvilRight_Phone(jumpType);
        case JUMPPLAYER_YOUREALIZETHEYREEVILRIGHT_ISLAND:
            JumpPlayerTo_YouRealizeTheyreEvilRight_Island(jumpType);
            break;
        case JUMPPLAYER_CONGRATSYOUREANASSHOLE:
            JumpPlayerTo_CongratsYoureanAsshole(jumpType);
            break;
        case JUMPPLAYER_YOUHAVEYOURORDERS:
            JumpPlayerTo_YouHaveYourOrders(jumpType);
            break;
        case JUMPPLAYER_HOWDISAPPOINTING_RAID:
            JumpPlayerTo_HowDisappointing_Raid(jumpType);
            break;
        case JUMPPLAYER_HOWDISAPPOINTING_ARREST:
            JumpPlayerTo_HowDisappointing_Arrest(jumpType);
            break;
        case JUMPPLAYER_LETSBURNTHISMOTHERDOWN:
            JumpPlayerTo_LetsBurnThisMotherDown(jumpType);
            break;
        case JUMPPLAYER_MANHUNT_NEWS:
            JumpPlayerTo_Manhunt_News(jumpType);
            break;
        case JUMPPLAYER_MANHUNT_BUSINESS:
            JumpPlayerTo_Manhunt_Business(jumpType);
            break;
        case JUMPPLAYER_MANHUNT_BALL:
            JumpPlayerTo_Manhunt_Ball(jumpType);
            break;
        case JUMPPLAYER_MANHUNT_ROUTE:
            JumpPlayerTo_Manhunt_Route(jumpType);
            break;
        case JUMPPLAYER_MANHUNT_VIGRIM:
            JumpPlayerTo_Manhunt_Vigrim(jumpType);
            break;
        case JUMPPLAYER_EXHIBITIONBATTLE:
            JumpPlayerTo_ExhibitionBattle(jumpType);
            break;
        case JUMPPLAYER_MAYBEIFUCKEDUP:
            JumpPlayerTo_MaybeIFuckedUp(jumpType);
            break;
        case JUMPPLAYER_OKAYLETSFIXIT:
            JumpPlayerTo_OkayLetsFixit(jumpType);
            break;
        case JUMPPLAYER_LETSGETTHEBANDBACKTOGETHER_BEFORE:
            JumpPlayerTo_LetsGettheBandBackTogether_Before(jumpType);
            break;
        case JUMPPLAYER_LETSGETTHEBANDBACKTOGETHER_AFTER:
            JumpPlayerTo_LetsGettheBandBackTogether_After(jumpType);
            break;
        case JUMPPLAYER_MASKOFF_H:
            JumpPlayerTo_MaskOff_H(jumpType);
            break;
        case JUMPPLAYER_MASKOFF_F:
            JumpPlayerTo_MaskOff_F(jumpType);
            break;
        case JUMPPLAYER_MASKOFF_I:
            JumpPlayerTo_MaskOff_I(jumpType);
            break;
        case JUMPPLAYER_MASKOFF_D:
            JumpPlayerTo_MaskOff_D(jumpType);
            break;
        case JUMPPLAYER_MASKOFF_G:
            JumpPlayerTo_MaskOff_G(jumpType);
            break;
        case JUMPPLAYER_MASKOFF_VIGRIM:
            JumpPlayerTo_MaskOff_Vigrim(jumpType);
            break;
        case JUMPPLAYER_LETSFIXTHIS:
            JumpPlayerTo_LetsFixThis(jumpType);
            break;
        case JUMPPLAYER_LOCKEDOUT:
            JumpPlayerTo_LockedOut(jumpType);
            break;
        case JUMPPLAYER_WAREHOUSERAVE:
            JumpPlayerTo_WarehouseRave(jumpType);
            break;
        case JUMPPLAYER_SPEECHSPEECHSPEECH:
            JumpPlayerTo_SpeechSpeechSpeech(jumpType);
            break;
        case JUMPPLAYER_PERSUASIVEPASSENGER:
            JumpPlayerTo_Persuasivepassenger(jumpType);
            break;
        case JUMPPLAYER_BREAKTHEINTERNET:
            JumpPlayerTo_Breaktheinternet(jumpType);
            break;
        case JUMPPLAYER_WAREHOUSEWARFARE:
            JumpPlayerTo_Warehousewarfare(jumpType);
            break;
        case JUMPPLAYER_ONEDOWN:
            JumpPlayerTo_OneDown(jumpType);
            break;
        case JUMPPLAYER_EARTHQUAKE_INSIDE:
            JumpPlayerTo_Earthquake_Outside(jumpType);
            break;
        case JUMPPLAYER_EARTHQUAKE_OUTSIDE:
            JumpPlayerTo_Earthquake_Outside(jumpType);
            break;
        case JUMPPLAYER_THISISNTRANDOM_DISCOVER:
            JumpPlayerTo_ThisIsntRandom_Discover(jumpType);
            break;
        case JUMPPLAYER_THISISNTRANDOM_MON1:
            JumpPlayerTo_ThisIsntRandom_Mon1(jumpType);
            break;
        case JUMPPLAYER_THISISNTRANDOM_MON2:
            JumpPlayerTo_ThisIsntRandom_Mon2(jumpType);
            break;
        case JUMPPLAYER_WAITEVENTHEN:
            JumpPlayerTo_WaitEvenThen(jumpType);
            break;
        case JUMPPLAYER_LETSFINISHTHIS:
            JumpPlayerTo_LetsFinishThis(jumpType);
            break;
        case JUMPPLAYER_IMIN_POSTRIVAL:
            JumpPlayerTo_ImIn_Postrival(jumpType);
            break;
        case JUMPPLAYER_YOUCANTSTOPME_POSTBATTLE:
            JumpPlayerTo_YouCantStopMe_Postbattle(jumpType);
            break;
        case JUMPPLAYER_WECANSTOPYOUACTUALLY:
            JumpPlayerTo_WeCanStopYouActually(jumpType);
            break;
        case JUMPPLAYER_EPILOGUE:
            JumpPlayerTo_Epilogue(jumpType);
            break;
    }
}

void WarpPlayerAfterVarSet()
{
    //ResetInitialPlayerAvatarState();
    DoWarp();
}

static void IncrementStorylineVariable()
{
    u32 storyline = VarGet(VAR_STORYLINE_STATE);
    VarSet(VAR_STORYLINE_STATE,++storyline);
    VarSet(VAR_TEMP_0,0);
}

static void UNUSED IncrementMaskOffVariable()
{
    u32 maskoff = VarGet(VAR_MASK_OFF_STATE);
    VarSet(VAR_MASK_OFF_STATE,++maskoff);
    VarSet(VAR_TEMP_0,0);
}

static void PreventVariableFromReversion(u16 adjustedVariable,
        u8 originalValue, u8 newValue)
{
    if (originalValue < newValue)
        VarSet(adjustedVariable, newValue);
    else
        VarSet(adjustedVariable, originalValue);
}

static bool32 IsJumpTypeDebug(bool32 jumpType)
{
    return (jumpType == JUMP_DEBUG);
}

static bool32 IsJumpTypeSkip(bool32 jumpType)
{
    return (jumpType == JUMP_CUTSCENE_SKIP);
}

void FlagsVarWarp_Prologue_Intro()
{
    VarSet(VAR_PROLOGUE_STATE,GIVEN_POKEMON);
    FlagSet(FLAG_SYS_APP_PROLOUGE_GET);
    FlagSet(FLAG_SET_WALL_CLOCK);
    SetWarpDestination(MAP_GROUP(MAP_OROLAND_COLISEUM_HALLWAY), MAP_NUM(MAP_OROLAND_COLISEUM_HALLWAY), NO_WARP_ID, 5, 12);
}

void GiveItems_Prologue_Intro(bool32 jumpType)
{
    u8 evs[NUM_STATS] = {0,252,252,4,0,0};
    u8 ivs[NUM_STATS] = {31,31,31,31,31,31};
    u16 moves[4] = {MOVE_GLACIAL_LANCE,MOVE_HIGH_HORSEPOWER,MOVE_FLAMETHROWER,MOVE_EXPLOSION};

    if (FlagGet(FLAG_SYS_APP_PROLOUGE_GET))
        return;

    InitPlayerTrainerId();
    AssignDefaultPlayerName();

    VarSet(B_LEVEL_CAP_VARIABLE,27);
    ScriptGiveMonParameterized(0,PARTY_SIZE,SPECIES_CALYREX_ICE,100,ITEM_WHITE_HERB,ITEM_CHERISH_BALL,NATURE_ADAMANT,0,0,evs,ivs,moves,SHINY_MODE_RANDOM,FALSE,NUMBER_OF_MON_TYPES,0);

    GivePlayerAllTechnicalMachines();
    GivePlayerHealingItems();

    VarSet(VAR_PROLOGUE_STATE,GIVEN_POKEMON);
    FlagSet(FLAG_SYS_APP_PROLOUGE_GET);
    FlagSet(FLAG_SET_WALL_CLOCK);
    SetLastHealLocationWarp(HEAL_LOCATION_OROLAND_COLISEUM_ARENA);
}

void JumpPlayerTo_Prologue_Intro(bool32 jumpType)
{
    GiveItems_Prologue_Intro(jumpType);
    FlagsVarWarp_Prologue_Intro();
}

void FlagsVarWarp_Prologue_Champion(void)
{
    VarSet(VAR_PROLOGUE_STATE,WALK_INTO_HALL);
    SetWarpDestination(MAP_GROUP(MAP_OROLAND_COLISEUM_HALL), MAP_NUM(MAP_OROLAND_COLISEUM_HALL), NO_WARP_ID, 9, 8);
}

void JumpPlayerTo_Prologue_Champion(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_Prologue_Intro(jumpType);
    FlagsVarWarp_Prologue_Champion();
}

void FlagsVarWarp_Prologue_Announcement(void)
{
    VarSet(VAR_PROLOGUE_STATE,ELEANOR_ANNOUNCE);
    SetWarpDestination(MAP_GROUP(MAP_OROLAND_COLISEUM_HALL), MAP_NUM(MAP_OROLAND_COLISEUM_HALL), NO_WARP_ID, 9, 7);
}

void JumpPlayerTo_Prologue_Announcement(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_Prologue_Champion(jumpType);

    FlagsVarWarp_Prologue_Announcement();
}

void GiveItems_BeginAdventure(bool32 jumpType)
{
    if(FlagGet(FLAG_SYS_B_DASH))
        return;

    ResetBagAndParty();
}

void FlagsVarWarp_BeginAdventure()
{
    VarSet(VAR_PROLOGUE_STATE,START_ADVENTURE);
    FlagSet(FLAG_SPAWN_INVISIBLE);
    ResetCustomizationValuesData();
    SetWarpDestination(MAP_GROUP(MAP_BLACK_MAP), MAP_NUM(MAP_BLACK_MAP), 0, 0, 0);
}

void JumpPlayerTo_BeginAdventure(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_Prologue_Announcement(jumpType);

    GiveItems_BeginAdventure(jumpType);
    FlagsVarWarp_BeginAdventure();
}

void GenerateGiveStarterToPlayer(void)
{
    AssignDefaultPlayerName();
    InitPlayerTrainerId();

    GenerateDummyPartyMembers();
    AddStartersToBox();
    MoveStarterToParty();
    ClearBag();
    SetInitalMoney();
}

void FlagsVarWarp_StarterChoice(void)
{
    FlagSet(FLAG_SYS_B_DASH);
    FlagClear(FLAG_SPAWN_INVISIBLE);
    SetWarpDestination(MAP_GROUP(MAP_CUCONU_TOWN), MAP_NUM(MAP_CUCONU_TOWN), 0, 3, 10);
}

void GiveItems_StarterChoice(bool32 jumpType)
{
    if(FlagGet(FLAG_SYS_B_DASH))
        return;

    u32 slot = Random() % SILICON_STARTER_COUNT;
    VarSet(VAR_CHOSEN_PSF_STARTER,GetStarterFromSlot(slot));

    GenerateGiveStarterToPlayer();
}

void JumpPlayerTo_StarterChoice(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_BeginAdventure(jumpType);

    GiveItems_StarterChoice(jumpType);
    FlagsVarWarp_StarterChoice();
}

void FlagsVarWarp_ImProbablyBetterThanYou(void)
{
    VarSet(VAR_PLAYER_HOME_STATE, HAS_MET_CHARLOTTE);
    SetLastHealLocationWarp(HEAL_LOCATION_CUCONU_TOWN_COMPOUND_2F);
    SetWarpDestination(MAP_GROUP(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F), MAP_NUM(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F), 2, USE_WARP_ID, USE_WARP_ID);
}

void JumpPlayerTo_ImProbablyBetterThanYou(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_StarterChoice(jumpType);

    FlagsVarWarp_ImProbablyBetterThanYou();
}

void FlagsVarWarp_swagbag(void)
{
    VarSet(VAR_PLAYER_HOME_STATE,POST_SWAGBAG);
    FlagSet(FLAG_SYS_STARTER_APPS_GET);
    QuestMenu_GetSetQuestState(QUEST_PLAYERSADVENTURE, FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_PLAYERSADVENTURE, FLAG_SET_ACTIVE);
    SetWarpDestination(MAP_GROUP(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F), MAP_NUM(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F), 0, USE_WARP_ID, USE_WARP_ID);
}

void JumpPlayerTo_swagbag(bool32 jumpType)
{

    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ImProbablyBetterThanYou(jumpType);
    FlagsVarWarp_swagbag();

}

void FlagsVarWarp_ReadySetI()
{
    VarSet(VAR_PLAYER_HOME_STATE, SLEPT_AFTER_SWAGBAG);
    FlagSet(FLAG_RECIEVED_LEFTOVERS);
    SetWarpDestination(MAP_GROUP(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F), MAP_NUM(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F), 0, USE_WARP_ID, USE_WARP_ID);
}

void GiveItems_ReadySetI(bool32 jumpType)
{
    if (!FlagGet(FLAG_RECIEVED_LEFTOVERS))
        AddBagItem(ITEM_LEFTOVERS, 1);
}

void JumpPlayerTo_ReadySetI(bool32 jumpType)
{
    GiveItems_ReadySetI(jumpType);

    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_swagbag(jumpType);

    FlagsVarWarp_ReadySetI();
}

void FlagsVarWarp_CatchTutorial()
{
    FlagSet(FLAG_PLAYED_CATCH_TUTORIAL);
    SetWarpDestination(MAP_GROUP(MAP_ROUTE6),MAP_NUM(MAP_ROUTE6),NO_WARP_ID,10,19);
}

void GiveItems_CatchTutorial(bool32 jumpType)
{
        return;
}

void JumpPlayerTo_CatchTutorial(bool32 jumpType)
{
    GiveItems_CatchTutorial(jumpType);

    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ReadySetI(jumpType);

    FlagsVarWarp_CatchTutorial();
}


void FlagsVarWarp_EnterFallkner()
{
    FlagSet(FLAG_VISITED_MERMEREZA_CITY);
    FlagSet(FLAG_VISITED_GLAVEZ_HILL);
    FlagSet(FLAG_BADGE01_GET);
    FlagSet(FLAG_SYS_APP_BUZZR_GET);
    Buzzr_MarkTweetAsRead(TWEET_GYM_MERMEREZA_CITY_BADGE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BELEN);
    VarSet(VAR_BELEN_STATE, BATTLE_1_COMPLETE);
    VarSet(VAR_GYM_1_STATE, GYM_DEFEATED_LEADER);
    IncrementStorylineVariable();
    WowYoureStrong_GetBadgesAndSetTowerState();
    SetWarpDestination(MAP_GROUP(MAP_MERMEREZA_CITY_GYM),MAP_NUM(MAP_MERMEREZA_CITY_GYM),0,USE_WARP_ID,USE_WARP_ID);
}

void GiveItems_EnterBelen(bool32 jumpType)
{
    if (!FlagGet(FLAG_BADGE01_GET))
        AddBagItem(ITEM_TM01, 1);
}

void JumpPlayerTo_EnterBelen(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CatchTutorial(jumpType);

    GiveItems_EnterBelen(jumpType);
    FlagsVarWarp_EnterFallkner();
}

void FlagsVarWarp_EnterShinzo()
{
    FlagSet(FLAG_VISITED_CAPHE_CITY);
    FlagSet(FLAG_SYS_APP_TRAINER_CARD_GET);
    FlagSet(FLAG_VISITED_TORA_TOWN);
    FlagSet(FLAG_VISITED_GLAVEZ_HILL);
    FlagSet(FLAG_BADGE02_GET);
    FlagSet(FLAG_SYS_APP_BUZZR_GET);
    Buzzr_MarkTweetAsRead(TWEET_GYM_TORA_TOWN_BADGE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_SHINZO);
    VarSet(VAR_SHINZO_STATE, BATTLE_2_COMPLETE);
    VarSet(VAR_GYM_2_STATE, GYM_DEFEATED_LEADER);
    IncrementStorylineVariable();
    WowYoureStrong_GetBadgesAndSetTowerState();
    SetWarpDestination(MAP_GROUP(MAP_TORA_TOWN_GYM),MAP_NUM(MAP_TORA_TOWN_GYM),0,USE_WARP_ID,USE_WARP_ID);
}

void GiveItems_EnterShinzo(bool32 jumpType)
{
    if (!FlagGet(FLAG_BADGE02_GET))
        AddBagItem(ITEM_TM02, 1);
}

void JumpPlayerTo_EnterShinzo(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_EnterAdaora(jumpType);

    GiveItems_EnterShinzo(jumpType);
    FlagsVarWarp_EnterShinzo();
}

void GiveItems_EnterEmrys(bool32 jumpType)
{
    if (!FlagGet(FLAG_BADGE03_GET))
        AddBagItem(ITEM_TM03,1);
}

void FlagsVarWarp_EnterEmrys()
{
    FlagSet(FLAG_VISITED_PERLACIA_CITY);
    FlagSet(FLAG_VISITED_GLAVEZ_HILL);
    FlagSet(FLAG_BADGE03_GET);
    FlagSet(FLAG_SYS_APP_BUZZR_GET);
    Buzzr_MarkTweetAsRead(TWEET_GYM_PERLACIA_CITY_BADGE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_EMRYS);
    VarSet(VAR_EMRYS_STATE, BATTLE_1_COMPLETE);
    VarSet(VAR_GYM_3_STATE, GYM_DEFEATED_LEADER);
    IncrementStorylineVariable();
    WowYoureStrong_GetBadgesAndSetTowerState();
    SetWarpDestination(MAP_GROUP(MAP_PERLACIA_CITY_GYM),MAP_NUM(MAP_PERLACIA_CITY_GYM),0,USE_WARP_ID,USE_WARP_ID);
}
void JumpPlayerTo_EnterEmrys(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CatchTutorial(jumpType);

    GiveItems_EnterEmrys(jumpType);
    FlagsVarWarp_EnterEmrys();
}

void FlagsVarWarp_NewAssholeAppears()
{
    FlagSet(FLAG_VISITED_GLAVEZ_HILL);
    VarSet(VAR_ROUTE10_STATE, DEFEATED_BAIYA_ROUTE10);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BAIYA_NEWASSHOLEAPPEARS);
    IncrementStorylineVariable();
    SetWarpDestination(MAP_GROUP(MAP_ROUTE10),MAP_NUM(MAP_ROUTE10),NO_WARP_ID,2,4);
}

void JumpPlayerTo_NewAssholeAppears(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CatchTutorial(jumpType);

    FlagsVarWarp_NewAssholeAppears();
}

void FlagsVarWarp_OldAssholeAppears()
{
    HealPlayerParty();
    FlagSet(FLAG_VISITED_ANBEH_BEND);
    FlagSet(FLAG_VISITED_GLAVEZ_HILL);
    IncrementStorylineVariable();
    VarSet(VAR_ANBEH_BEND_STATE, DEFEATED_CHARLOTTE_LOMBARD);
    FlagSet(TRAINER_FLAGS_START + TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS);
    SetWarpDestination(MAP_GROUP(MAP_ANBEH_BEND),MAP_NUM(MAP_ANBEH_BEND),NO_WARP_ID,15,11);
}

void JumpPlayerTo_OldAssholeAppears(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CatchTutorial(jumpType);

    FlagsVarWarp_OldAssholeAppears();
}

void FlagsVarWarp_GroupofAssholesAppears()
{
    FlagSet(FLAG_VISITED_POPIDORA_PIER);
    FlagSet(FLAG_VISITED_GLAVEZ_HILL);
    VarSet(VAR_GROUP_OF_ASSHOLES_STATE, PLAYER_HAS_DEFEATED_THETIDE);
    IncrementStorylineVariable();
    FlagSet(TRAINER_FLAGS_START + TRAINER_IHSAN_AND_EMMITT);
    SetWarpDestination(MAP_GROUP(MAP_POPIDORA_PIER),MAP_NUM(MAP_POPIDORA_PIER),NO_WARP_ID,31,5);
}

void GiveItems_GroupofAssoholesAppears(bool32 jumpType)
{
    if (VarGet(VAR_GROUP_OF_ASSHOLES_STATE) < PLAYER_HAS_DEFEATED_THETIDE)
        AddBagItem(ITEM_DOWSING_MACHINE, 1);
}

void JumpPlayerTo_GroupofAssholesAppears(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CatchTutorial(jumpType);
    GiveItems_GroupofAssoholesAppears(jumpType);
    FlagsVarWarp_GroupofAssholesAppears();
}

void FlagsVarWarp_FlyingBlind()
{
    FlagSet(FLAG_VISITED_GLAVEZ_HILL);
    FlagSet(FLAG_EDUCATED_FOG_ROUTE11);
    FlagSet(FLAG_EDUCATED_FOG_ROUTE5);
    SetWarpDestination(MAP_GROUP(MAP_ROUTE11), MAP_NUM(MAP_ROUTE11), NO_WARP_ID, 79, 15);
}

void JumpPlayerTo_FlyingBlind(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CatchTutorial(jumpType);

    FlagsVarWarp_FlyingBlind();
}

void FlagsVarWarp_WowYoureStrong()
{
    VarSet(VAR_SHARPRISESPIRE_CONFERENCE_STATE, POST_WOW_YOURE_STRONG);
    SetWarpDestination(MAP_GROUP(MAP_PERLACIA_CITY),MAP_NUM(MAP_PERLACIA_CITY),8, USE_WARP_ID, USE_WARP_ID);

}

void JumpPlayerTo_WowYoureStrong(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
    {
        JumpPlayerTo_EnterEmrys(jumpType);
        JumpPlayerTo_EnterBelen(jumpType);
        JumpPlayerTo_EnterShinzo(jumpType);
    }

    FlagsVarWarp_WowYoureStrong();
}

void FlagsVarWarp_TheGangsAllHere()
{
    FlagSet(FLAG_VISITED_SHARPRISESPIRE);
    VarSet(VAR_SHARPRISESPIRE_CONFERENCE_STATE, POST_THE_GANGS_ALL_HERE);
    FlagSet(FLAG_SYS_APP_PRESTO_GET);
    IncrementStorylineVariable();
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_LEAGUEOPS), MAP_NUM(MAP_SHARPRISE_SPIRE_LEAGUEOPS), NO_WARP_ID, 5, 53);
}

void JumpPlayerTo_TheGangsAllHere(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WowYoureStrong(jumpType);

    FlagsVarWarp_TheGangsAllHere();
}

void FlagsVarWarp_AlwaysWatchingWazokwski()
{
    VarSet(VAR_SHARPRISE_SPIRE_PRODUCTION_STATE,
            POST_ALWAYS_WATCHING_WAZOWSKI);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_PRODUCTION),MAP_NUM(MAP_SHARPRISE_SPIRE_PRODUCTION),NO_WARP_ID,9,7);

}

void JumpPlayerTo_AlwaysWatchingWazokwski(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WowYoureStrong(jumpType);

    FlagsVarWarp_AlwaysWatchingWazokwski();
}

void FlagsVarWarp_EnterAdaora()
{
    FlagSet(FLAG_VISITED_GLAVEZ_HILL);
    FlagSet(FLAG_VISITED_CAPHE_CITY);
    FlagSet(FLAG_SYS_APP_TRAINER_CARD_GET);
    VarSet(VAR_CAPHE_CITY_STATE,LINE_IS_NOT_BLOCKING);
    SetWarpDestination(MAP_GROUP(MAP_CAPHE_CITY),MAP_NUM(MAP_CAPHE_CITY),NO_WARP_ID,2,40);
}

void GiveItems_EnterAdaora(bool32 jumpType)
{
    //if (VarGet(VAR_CAPHE_CITY_STATE) < LINE_IS_NOT_BLOCKING)
        return;
}

void JumpPlayerTo_EnterAdaora(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CatchTutorial(jumpType);

    GiveItems_EnterAdaora(jumpType);
    FlagsVarWarp_EnterAdaora();
}

void FlagsVarWarp_HowDoWeGetHome()
{
    FlagSet(FLAG_VISITED_CURENO_PORT);
    FlagSet(FLAG_VISITED_GLAVEZ_HILL);
    VarSet(VAR_CURENO_PORT_STATE, POST_HOW_DO_WE_GET_HOME);
    IncrementStorylineVariable();
    SetWarpDestination(MAP_GROUP(MAP_CURENO_PORT),MAP_NUM(MAP_CURENO_PORT),NO_WARP_ID,11,21);
}

void JumpPlayerTo_HowDoWeGetHome(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CatchTutorial(jumpType);

    FlagsVarWarp_HowDoWeGetHome();
}

void FlagsVarWarp_AaandWereBack()
{
    VarSet(VAR_STORYLINE_STATE, STORY_FERRY_FIXED);
    VarSet(VAR_PLAYER_HOME_STATE, FINISHED_1_1);
    VarSet(VAR_FERRY_STATE, FERRY_HALAI_ISLAND_AVAILABLE);
    Buzzr_MarkTweetAsRead(TWEET_STORY_GRUNT_RESTORED);
    SetWarpDestination(MAP_GROUP(MAP_CUCONU_TOWN),MAP_NUM(MAP_CUCONU_TOWN),0,USE_WARP_ID,USE_WARP_ID);
}
void JumpPlayerTo_ClearAllAct1(bool32 jumpType)
{
    JumpPlayerTo_EnterBelen(jumpType);
    JumpPlayerTo_EnterShinzo(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_EnterEmrys(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_NewAssholeAppears(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_OldAssholeAppears(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_GroupofAssholesAppears(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_WowYoureStrong(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_TheGangsAllHere(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_HowDoWeGetHome(JUMP_CUTSCENE_SKIP);
}

void JumpPlayerTo_AaandWereBack(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ClearAllAct1(jumpType);

    FlagsVarWarp_AaandWereBack();
}

void FlagsVarWarp_AssholesHome()
{
    FlagSet(FLAG_VISITED_FERRYBUILDING);
    FlagSet(FLAG_VISITED_HALAI_ISLAND);
    VarSet(VAR_HALAI_ISLAND_STATE, DEFEATED_BAIYA_HALAI_ISLAND);
    VarSet(VAR_STORYLINE_STATE, STORY_DEFEAT_BAIYA_HALAI_ISLAND);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BAIYA_ASSHOLEHOME);
    SetWarpDestination(MAP_GROUP(MAP_HALAI_ISLAND),MAP_NUM(MAP_HALAI_ISLAND),NO_WARP_ID,20,5);
}

void JumpPlayerTo_AssholesHome(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_AaandWereBack(jumpType);

    FlagsVarWarp_AssholesHome();
}

void FlagsVarWarp_HousingProtest()
{
    FlagSet(FLAG_VISITED_OROLAND);
    VarSet(VAR_STORYLINE_STATE, STORY_DEFEAT_CHASILLA_PROTEST);
    VarSet(VAR_ROUTE99_STATE, DEFEATED_THETIDE_ROUTE99);
    FlagSet(TRAINER_FLAGS_START + TRAINER_HOUSINGPROTEST_ROCKET);
    SetWarpDestination(MAP_GROUP(MAP_ROUTE99),MAP_NUM(MAP_ROUTE99),NO_WARP_ID,7,14);

}

void JumpPlayerTo_HousingProtest(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_AssholesHome(jumpType);

    FlagsVarWarp_HousingProtest();
}

void FlagsVarWarp_swagbag2()
{
    FlagSet(FLAG_VISITED_CHASILLA);
    VarSet(VAR_CHASILLA_STATE, SWAGBAG_2_COMPLETE);
    SetWarpDestination(MAP_GROUP(MAP_CHASILLA),MAP_NUM(MAP_CHASILLA),NO_WARP_ID,4,13);

}

void JumpPlayerTo_swagbag2(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_HousingProtest(jumpType);

    FlagsVarWarp_swagbag2();
}

void FlagsVarWarp_EnterKauna()
{
    FlagSet(FLAG_CONSTRUCTION_BREAKING_NEWS);
    FlagSet(FLAG_BADGE04_GET);
    Buzzr_MarkTweetAsRead(TWEET_GYM_CHASILLA_BADGE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_KAUNA);
    VarSet(VAR_KAUNA_STATE, BATTLE_1_COMPLETE);
    VarSet(VAR_GYM_4_STATE, GYM_DEFEATED_LEADER);
    VarSet(VAR_CHASILLA_STATE, DEFEATED_KAUNA);
    VarSet(VAR_STORYLINE_STATE, STORY_DEFEAT_KAUNA);
    SetWarpDestination(MAP_GROUP(MAP_CHASILLA_GYM),MAP_NUM(MAP_CHASILLA_GYM),0,USE_WARP_ID,USE_WARP_ID);
}

void GiveItems_EnterKauna(bool32 jumpType)
{
    if (!FlagGet(FLAG_BADGE04_GET))
        AddBagItem(ITEM_TM04, 1);
}

void JumpPlayerTo_EnterKauna(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_swagbag2(jumpType);

    FlagsVarWarp_EnterKauna();
}

void FlagsVarWarp_SorryAboutMyFriends()
{
    VarSet(VAR_CHASILLA_STATE, GOT_ARANTRAZ_TICKET);
    VarSet(VAR_FERRY_STATE, FERRY_ARANTRAZ_AVAILABLE);
    SetWarpDestination(MAP_GROUP(MAP_CHASILLA),MAP_NUM(MAP_CHASILLA),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_SorryAboutMyFriends(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_EnterKauna(jumpType);

    FlagsVarWarp_SorryAboutMyFriends();
}


void FlagsVarWarp_TheStorySoFar(u32 trainer)
{
    switch(trainer)
    {
        case JUMPPLAYER_THESTORYSOFAR_A:
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_A);
            SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ),MAP_NUM(MAP_ARANTRAZ),NO_WARP_ID,29,60);
            break;
        case JUMPPLAYER_THESTORYSOFAR_B:
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_B);
            SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ),MAP_NUM(MAP_ARANTRAZ),NO_WARP_ID,37,13);
            break;
        case JUMPPLAYER_THESTORYSOFAR_C:
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_C);
            SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ),MAP_NUM(MAP_ARANTRAZ),NO_WARP_ID,25,10);
            break;
        case JUMPPLAYER_THESTORYSOFAR_D:
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_D);
            SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ),MAP_NUM(MAP_ARANTRAZ),NO_WARP_ID,8,35);
            break;
        case JUMPPLAYER_THESTORYSOFAR_E:
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_E);
            SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ),MAP_NUM(MAP_ARANTRAZ),NO_WARP_ID,27,22);
            break;
        case JUMPPLAYER_THESTORYSOFAR_F:
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_F);
            SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ),MAP_NUM(MAP_ARANTRAZ),NO_WARP_ID,17,51);
            break;
        case JUMPPLAYER_THESTORYSOFAR_ALL:
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_A);
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_B);
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_C);
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_D);
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_E);
            FlagSet(TRAINER_FLAGS_START + TRAINER_ARANTRAZ_EXHIBIT_F);
            SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ),MAP_NUM(MAP_ARANTRAZ),NO_WARP_ID,29,60);
            break;
    }
    VarSet(VAR_ARANTRAZ_EXHIBIT_STATE, ARANTRAZ_EXHIBIT_START);
    FlagSet(FLAG_VISITED_ARANTRAZ);
}

void JumpPlayerTo_TheStorySoFar(bool32 jumpType, u32 trainer)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_SorryAboutMyFriends(jumpType);

    FlagsVarWarp_TheStorySoFar(trainer);
}

void FlagsVarWarp_YoungPadawan()
{
    u8 storyline = VarGet(VAR_STORYLINE_STATE);

    PreventVariableFromReversion(VAR_STORYLINE_STATE, storyline,
            STORY_COMPLETE_ARANTRAZ);
    VarSet(VAR_ARANTRAZ_STATE, BATTLED_TALA);
    VarSet(VAR_ARANTRAZ_EXHIBIT_STATE, ARANTRAZ_EXHIBIT_COMPLETE);
    FlagSet(FLAG_VISITED_ARANTRAZ);
    SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ),MAP_NUM(MAP_ARANTRAZ),NO_WARP_ID,37,59);
}

void GiveItems_YoungPadawan(bool32 jumpType)
{
    if (VarGet(VAR_ARANTRAZ_STATE) < BATTLED_TALA)
        AddBagItem(ITEM_GO_GOGGLES, 1);
}

void JumpPlayerTo_YoungPadawan(bool32 jumpType)
{

    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_SorryAboutMyFriends(jumpType);

    GiveItems_YoungPadawan(jumpType);
    FlagsVarWarp_YoungPadawan();
}


void FlagsVarWarp_WaitYouWentWhere()
{
    VarSet(VAR_WAIT_YOU_WENT_WHERE, POST_WAITYOUWENTWHERE);
    SetWarpDestination(MAP_GROUP(MAP_PSFROUTE9F45DA86),MAP_NUM(MAP_PSFROUTE9F45DA86),NO_WARP_ID,3,1);
}

void JumpPlayerTo_WaitYouWentWhere(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YoungPadawan(jumpType);

    FlagsVarWarp_WaitYouWentWhere();
}

void FlagsVarWarp_EnterNeriene()
{
    FlagSet(FLAG_VISITED_FORT_YOBU);
    FlagSet(FLAG_BADGE05_GET);
    Buzzr_MarkTweetAsRead(TWEET_GYM_FORT_YOBU_BADGE);
    VarSet(VAR_GYM_5_STATE, GYM_DEFEATED_LEADER);
    VarSet(VAR_NERIENE_STATE, BATTLE_1_COMPLETE);
    VarSet(VAR_FORT_YOBU_STATE, DEFEATED_NERIENE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_NERIENE);
    SetWarpDestination(MAP_GROUP(MAP_FORT_YOBU_GYM),MAP_NUM(MAP_FORT_YOBU_GYM), 0, USE_WARP_ID, USE_WARP_ID);
}

void GiveItems_EnterNeriene(bool32 jumpType)
{
    if (!FlagGet(FLAG_BADGE05_GET))
        AddBagItem(ITEM_TM05, 1);
}

void JumpPlayerTo_EnterNeriene(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YoungPadawan(jumpType);

    GiveItems_EnterNeriene(jumpType);
    FlagsVarWarp_EnterNeriene();
}

void FlagsVarWarp_FriendsForDinner()
{
    VarSet(VAR_FORT_YOBU_STATE, MET_KEIYING_OUTSIDE_GYM);
    SetWarpDestination(MAP_GROUP(MAP_FORT_YOBU), MAP_NUM(MAP_FORT_YOBU), 0, USE_WARP_ID, USE_WARP_ID);

}

void JumpPlayerTo_FriendsForDinner(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_EnterNeriene(jumpType);

    FlagsVarWarp_FriendsForDinner();
}


void FlagsVarWarp_Keiyingsraisondetre()
{
    FlagSet(FLAG_VISITED_PETAROSA_BOROUGH);
    IncrementStorylineVariable();
    VarSet(VAR_KEIYING_RAISON_DETRE_STATE, POST_KEIYING_RAISON_DETRE);
    VarSet(VAR_KEIYING_MANSION_STATE, FINISHED_KEIYING_RAISON);
    SetWarpDestination(MAP_GROUP(MAP_PETAROSA_BOROUGH),MAP_NUM(MAP_PETAROSA_BOROUGH),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_Keiyingsraisondetre(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_FriendsForDinner(jumpType);

    FlagsVarWarp_Keiyingsraisondetre();
}

void FlagsVarWarp_BeachBattle()
{
    IncrementStorylineVariable();
    FlagSet(FLAG_VISITED_CRESALTA_VISTA);
    VarSet(VAR_BEACH_BATTLE_STATE, POST_BEACH_BATTLE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_CHARLOTTE_BEACHBATTLE);
    SetWarpDestination(MAP_GROUP(MAP_CRESALTA_VISTA), MAP_NUM(MAP_CRESALTA_VISTA), NO_WARP_ID, 10, 23);

}

void JumpPlayerTo_BeachBattle(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YoungPadawan(jumpType);

    FlagsVarWarp_BeachBattle();
}

void GiveItems_EnterDimu(bool32 jumpType)
{
    if (!FlagGet(FLAG_BADGE06_GET))
        AddBagItem(ITEM_TM06, 1);
}

void FlagsVarWarp_EnterDimu()
{
    FlagSet(FLAG_VISITED_HALERBA_CITY);
    FlagSet(FLAG_VISITED_HALERBAWILDS);
    FlagSet(FLAG_VISITED_HALERBAWILDS_EAST);
    FlagSet(FLAG_VISITED_HALERBAWILDS_NORTH);
    FlagSet(FLAG_VISITED_HALERBAWILDS_SOUTH);
    FlagSet(FLAG_VISITED_HALERBAWILDS_WEST);
    IncrementStorylineVariable();
    FlagSet(FLAG_BADGE06_GET);
    Buzzr_MarkTweetAsRead(TWEET_GYM_HALERBA_CITY_BADGE);
    VarSet(VAR_GYM_6_STATE, GYM_DEFEATED_LEADER);
    VarSet(VAR_DIMU_STATE, BATTLE_1_COMPLETE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_DIMU);
    SetWarpDestination(MAP_GROUP(MAP_HALERBA_CITY_GYM), MAP_NUM(MAP_HALERBA_CITY_GYM),2, USE_WARP_ID, USE_WARP_ID);

}

void JumpPlayerTo_EnterDimu(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YoungPadawan(jumpType);

    GiveItems_EnterDimu(jumpType);
    FlagsVarWarp_EnterDimu();
}

void FlagsVarWarp_ANewStrike()
{
    FlagClear(FLAG_CONSTRUCTION_BREAKING_NEWS);
    IncrementStorylineVariable();
}

void JumpPlayerTo_ANewStrike(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YoungPadawan(jumpType);

    FlagsVarWarp_ANewStrike();
}

void FlagsVarWarp_AndWeMarchOn()
{
    FlagSet(FLAG_VISITED_TIRABUDIN_PLACE);
    VarSet(VAR_TIRABUDIN_PLACE_STATE, PARADE_COMPLETE);
    SetWarpDestination(MAP_GROUP(MAP_TIRABUDIN_PLACE),MAP_NUM(MAP_TIRABUDIN_PLACE),NO_WARP_ID, 23, 7);
}

void JumpPlayerTo_AndWeMarchOn(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YoungPadawan(jumpType);

    FlagsVarWarp_AndWeMarchOn();
}

void GiveItems_EnterBD(bool32 jumpType)
{
    if (!FlagGet(FLAG_BADGE07_GET))
        AddBagItem(ITEM_TM07, 1);
}

void FlagsVarWarp_EnterBD()
{

    IncrementStorylineVariable();
    FlagSet(FLAG_BADGE07_GET);
    Buzzr_MarkTweetAsRead(TWEET_GYM_TIRABUDIN_PLACE_BADGE);
    VarSet(VAR_BD_STATE, BATTLE_1_COMPLETE);
    VarSet(VAR_GYM_7_STATE, GYM_DEFEATED_LEADER);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BD);
    SetWarpDestination(MAP_GROUP(MAP_TIRABUDIN_PLACE_GYM_LOBBY), MAP_NUM(MAP_TIRABUDIN_PLACE_GYM_LOBBY), 1, USE_WARP_ID, USE_WARP_ID);
}

void JumpPlayerTo_EnterBD(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_AndWeMarchOn(jumpType);

    GiveItems_EnterBD(jumpType);
    FlagsVarWarp_EnterBD();
}

void FlagsVarWarp_Battle8()
{
    FlagSet(FLAG_VISITED_PINTILLONHOUSE);
    IncrementStorylineVariable();
    VarSet(VAR_BATTLE_8_STATE, DEFEATED_BAIYA_PINTILLONHOUSE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BAIYA_BATTLE8);
    SetWarpDestination(MAP_GROUP(MAP_PINTILLON_HOUSE_EXTERIOR),MAP_NUM(MAP_PINTILLON_HOUSE_EXTERIOR),NO_WARP_ID,19,16);

}

void JumpPlayerTo_Battle8(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YoungPadawan(jumpType);

    FlagsVarWarp_Battle8();
}

void GiveItems_EnterAmiArgento(bool32 jumpType)
{
    if (!FlagGet(FLAG_BADGE08_GET))
        AddBagItem(ITEM_TM08, 1);
}

void FlagsVarWarp_EnterAmiArgento()
{
    FlagSet(FLAG_VISITED_IRISINA_TOWN);
    IncrementStorylineVariable();
    FlagSet(FLAG_BADGE08_GET);
    Buzzr_MarkTweetAsRead(TWEET_GYM_IRISINA_TOWN_BADGE);
    VarSet(VAR_AMIARGENTO_STATE, BATTLE_1_COMPLETE);
    VarSet(VAR_GYM_8_STATE, GYM_DEFEATED_LEADER);
    FlagSet(TRAINER_FLAGS_START + TRAINER_JUAN_1);
    SetWarpDestination(MAP_GROUP(MAP_IRISINA_TOWN_GYM),MAP_NUM(MAP_IRISINA_TOWN_GYM),0,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_EnterAmiArgento(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YoungPadawan(jumpType);

    GiveItems_EnterAmiArgento(jumpType);
    FlagsVarWarp_EnterAmiArgento();
}

void FlagsVarWarp_TheStrikeStrikesBack()
{
    VarSet(VAR_CONSTRUCTION_STRIKE_STATE, START_VS_GARBODOR);
    VarSet(VAR_STORYLINE_STATE, STORY_CALLED_TO_CONSTRUCTION);
    SetWarpDestination(MAP_GROUP(MAP_ROUTE2),MAP_NUM(MAP_ROUTE2),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_ClearAllAct2(bool32 jumpType)
{
    JumpPlayerTo_Keiyingsraisondetre(jumpType);
    JumpPlayerTo_BeachBattle(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_EnterDimu(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_ANewStrike(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_AndWeMarchOn(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_EnterBD(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_Battle8(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_EnterAmiArgento(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_ANewStrike(JUMP_CUTSCENE_SKIP);
}

void JumpPlayerTo_TheStrikeStrikesBack(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ClearAllAct2(jumpType);

    FlagsVarWarp_TheStrikeStrikesBack();
}

void GiveItems_VSGarbodor(bool32 jumpType)
{
    if (VarGet(VAR_STORYLINE_STATE) < STORY_NEED_SLEEP_BEFORE_FRANK)
        AddBagItem(VSGarbodor_GetGemFromType(),1);
}

void FlagsVarWarp_VSGarbodor()
{
    VarSet(VAR_CONSTRUCTION_STRIKE_STATE, THETIDE_ARRESTED);
    VarSet(VAR_INNER_CONSTRUCTION_SITE_STATE, PLAYER_LEFT_SIDE);
    FlagSet(FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY);
    FlagSet(FLAG_DEFEATED_RIVAL_ROUTE_104);
    FlagSet(FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE);
    FlagSet(FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE);
    VarSet(VAR_STORYLINE_STATE, STORY_NEED_SLEEP_BEFORE_FRANK);
    SetWarpDestination(MAP_GROUP(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F),MAP_NUM(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F),0,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_VSGarbodor(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_TheStrikeStrikesBack(jumpType);

    FlagsVarWarp_VSGarbodor();
}

void FlagsVarWarp_OffYouGo_Phone()
{
    VarSet(VAR_GOLDENGATEBRIDGE_STATE, CALLED_BY_CHARLOTTE);
    VarSet(VAR_STORYLINE_STATE, STORY_ASSIGNED_FRANK_QUESTS);
    SetWarpDestination(MAP_GROUP(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_2F),MAP_NUM(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_2F),0,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_OffYouGo_Phone(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_VSGarbodor(jumpType);

    FlagsVarWarp_OffYouGo_Phone();
}

void FlagsVarWarp_OffYouGo_Bridge(void)
{
    FlagSet(FLAG_VISITED_PIOCA_BRIDGE);
    VarSet(VAR_GOLDENGATEBRIDGE_STATE, POST_OFF_YOU_GO);
    VarSet(VAR_STORYLINE_STATE, STORY_ASSIGNED_FRANK_QUESTS);
    VarSet(VAR_ROBINWILLIAMSTUNNEL_STATE, CHARLOTTE_INSIDE_TUNNEL);
    SetWarpDestination(MAP_GROUP(MAP_PIOCA_BRIDGE),MAP_NUM(MAP_PIOCA_BRIDGE),0,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_OffYouGo_Bridge(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_OffYouGo_Phone(jumpType);

    FlagsVarWarp_OffYouGo_Bridge();
}

void FlagsVarWarp_IGuessWeShouldBeNiceNow()
{
    FlagSet(FLAG_VISITED_ROBINWILLTUNNEL);
    FlagSet(FLAG_VISITED_ESPULEE_OUTSKIRTS);
    VarSet(VAR_LEAVERRA_FOREST_STATE, CHARLOTTE_WAITING_LEAVERRA_FOREST);
    VarSet(VAR_ESPULEE_OUTSKIRTS_STATE, CHARLOTTE_STUDYING);
    VarSet(VAR_ROBINWILLIAMSTUNNEL_STATE, FRANK_BOSS_DEFEATED);
    SetWarpDestination(MAP_GROUP(MAP_ESPULEE_OUTSKIRTS_KOMALA_CABIN_1F),MAP_NUM(MAP_ESPULEE_OUTSKIRTS_KOMALA_CABIN_1F),2,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_IGuessWeShouldBeNiceNow(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_OffYouGo_Bridge(jumpType);

    FlagsVarWarp_IGuessWeShouldBeNiceNow();
}

void FlagsVarWarp_EntertheMaster()
{
    FlagSet(FLAG_VISITED_LEAVERRA_FOREST);
    VarSet(VAR_LEAVERRA_FOREST_STATE, MET_FRANK);
    SetWarpDestination(MAP_GROUP(MAP_LEAVERRA_FOREST_INNER),MAP_NUM(MAP_LEAVERRA_FOREST_INNER),2,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_EntertheMaster(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_IGuessWeShouldBeNiceNow(jumpType);

    AddBagItem(ITEM_MEGA_RING, 1);
    FlagsVarWarp_EntertheMaster();
}

void FlagsVarWarp_HaveYouSeenTheNews()
{
    VarSet(VAR_LEAVERRA_FOREST_STATE, POST_HAVE_YOU_SEEN_THE_NEWS);
    VarSet(VAR_SHARPRISESPIRE_CONFERENCE_STATE, PRE_WELCOME_TO_THE_WAR_ROOM);
    FlagSet(TRAINER_FLAGS_START + TRAINER_FRANK_ROBOT_1);
    FlagSet(TRAINER_FLAGS_START + TRAINER_FRANK_ROBOT_2);
    FlagSet(TRAINER_FLAGS_START + TRAINER_FRANK_ROBOT_3);
    FlagSet(TRAINER_FLAGS_START + TRAINER_FRANK_ROBOT_4);
    SetWarpDestination(MAP_GROUP(MAP_LEAVERRA_FOREST_INNER),MAP_NUM(MAP_LEAVERRA_FOREST_INNER),1,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_HaveYouSeenTheNews(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_EntertheMaster(jumpType);

    FlagsVarWarp_HaveYouSeenTheNews();
}

void FlagsVarWarp_WelcometotheWarRoom()
{
    VarSet(VAR_SHARPRISESPIRE_CONFERENCE_STATE,
            POST_WELCOME_TO_THE_WAR_ROOM);
    VarSet(VAR_FERRYBUILDING_STATE, CHIEF_LEFT_WAR_ROOM);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_LEAGUEOPS),MAP_NUM(MAP_SHARPRISE_SPIRE_LEAGUEOPS),NO_WARP_ID,17,29);

}

void JumpPlayerTo_WelcometotheWarRoom(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_HaveYouSeenTheNews(jumpType);

    FlagsVarWarp_WelcometotheWarRoom();
}

void FlagsVarWarp_SurvivalChance333()
{
    VarSet(VAR_HALAI_ISLAND_STATE, POST_SURVIVAL_CHANCE);
    VarSet(VAR_FERRYBUILDING_STATE, DEFEATED_SURVIVAL_CHANCE_BATTLE);
    SetWarpDestination(MAP_GROUP(MAP_HALAI_ISLAND),MAP_NUM(MAP_HALAI_ISLAND),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_SurvivalChance333(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WelcometotheWarRoom(jumpType);

    FlagsVarWarp_SurvivalChance333();
}

void FlagsVarWarp_WhyAreYouHelpingThem()
{

    FlagSet(FLAG_VISITED_NAVAL_BASE);
    VarSet(VAR_NAVAL_BASE_STATE, DEFEATED_BAIYA_NAVAL_BASE);
    VarSet(VAR_PLAYER_HOME_STATE, NEXT_DAY_CHAMPIONSHIP);
    VarSet(VAR_STORYLINE_STATE, STORY_COMPLETED_NAVAL_BASE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BAIYA_WHYAREYOUHELPINGTHEM);
    SetWarpDestination(MAP_GROUP(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F),MAP_NUM(MAP_CUCONU_TOWN_SHARPRISE_COMPOUND_1F),NO_WARP_ID,11,4);
}

void JumpPlayerTo_WhyAreYouHelpingThem(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_SurvivalChance333(jumpType);

    FlagsVarWarp_WhyAreYouHelpingThem();
}


void FlagsVarWarp_WhyAreYouHelpingThemSleep()
{

    VarSet(VAR_STORYLINE_STATE, STORY_START_CHAMPIONSHIP);
    VarSet(VAR_HALAI_ISLAND_STATE, SLEPT_AFTER_RAID);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_STADIUM_LOCKERS),MAP_NUM(MAP_SHARPRISE_STADIUM_LOCKERS),NO_WARP_ID,9,6);

}

void JumpPlayerTo_WhyAreYouHelpingThemSleep(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WhyAreYouHelpingThem(jumpType);

    FlagsVarWarp_WhyAreYouHelpingThemSleep();
}


void FlagsVarWarp_HeresHowThisIsGoingToGo()
{
    FlagSet(FLAG_VISITED_SHARPRISESTADIUM);
    VarSet(VAR_STORYLINE_STATE, STORY_CHAMPIONSHIP_EXPLAINED);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_STADIUM_LOCKERS),MAP_NUM(MAP_SHARPRISE_STADIUM_LOCKERS),0,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_HeresHowThisIsGoingToGo(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WhyAreYouHelpingThemSleep(jumpType);

    FlagsVarWarp_HeresHowThisIsGoingToGo();
}

void FlagsVarWarp_WhyDidntYouRatMeOut()
{
    VarSet(VAR_STORYLINE_STATE, STORY_CHARLOTTE_WON_GROUP);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_STADIUM_SKYBOX),MAP_NUM(MAP_SHARPRISE_STADIUM_SKYBOX),0, USE_WARP_ID, USE_WARP_ID);

}

void JumpPlayerTo_WhyDidntYouRatMeOut(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_HeresHowThisIsGoingToGo(jumpType);

    FlagsVarWarp_WhyDidntYouRatMeOut();
}

void FlagsVarWarp_GroupStages()
{
    VarSet(VAR_SHARPRISESTADIUM_TOURNAMENT_STATE, PRE_BATTLE_4);
    FlagSet(FLAG_SHARPRISESTADIUM_TOURNAMENT_HAPPENING);
    VarSet(VAR_STORYLINE_STATE, STORY_GROUP_STATE_COMPLETE);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_STADIUM_LOCKERS),MAP_NUM(MAP_SHARPRISE_STADIUM_LOCKERS),NO_WARP_ID,10,3);

}

void JumpPlayerTo_GroupStages(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WhyDidntYouRatMeOut(jumpType);

    FlagsVarWarp_GroupStages();
}

void FlagsVarWarp_Finals()
{
    VarSet(VAR_SHARPRISESTADIUM_TOURNAMENT_STATE, PRE_BATTLE_5);
    VarSet(VAR_STORYLINE_STATE, STORY_SEMIFINAL_COMPLETE);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_STADIUM_LOCKERS),MAP_NUM(MAP_SHARPRISE_STADIUM_LOCKERS),NO_WARP_ID,10,3);

}

void JumpPlayerTo_Finals(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_GroupStages(jumpType);

    FlagsVarWarp_Finals();
}

void FlagsVarWarp_WaitHeDidWhat()
{
    VarSet(VAR_STORYLINE_STATE, STORY_READY_FINALS);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_STADIUM_SKYBOX),MAP_NUM(MAP_SHARPRISE_STADIUM_SKYBOX),0,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_WaitHeDidWhat(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_Finals(jumpType);

    FlagsVarWarp_WaitHeDidWhat();
}

void FlagsVarWarp_WelcometotheHallofFame()
{
    AwardPartyMonChampionRibbon();
    VarSet(VAR_SHARPRISESTADIUM_TOURNAMENT_STATE, NO_TOURNAMENT);
    VarSet(VAR_STORYLINE_STATE, STORY_WON_FINALS);
    FlagClear(FLAG_SHARPRISESTADIUM_TOURNAMENT_HAPPENING);
    FlagSet(FLAG_IS_RESIDO_CHAMPION);
    SetWarpDestination(MAP_GROUP(MAP_PETAROSA_BOROUGH_SHARPRISE_COMPOUND_1F),MAP_NUM(MAP_PETAROSA_BOROUGH_SHARPRISE_COMPOUND_1F),NO_WARP_ID,11,4);
}

void JumpPlayerTo_WelcometotheHallofFame(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WaitHeDidWhat(jumpType);

    HealPlayerParty();
    FlagsVarWarp_WelcometotheHallofFame();

    if (IsJumpTypeSkip(jumpType))
        GameClear();
}

void FlagsVarWarp_BeingChampionisHard()
{
    VarSet(VAR_STORYLINE_STATE, STORY_EXPLORE_ZENZU_ISLAND);
    SetLastHealLocationWarp(HEAL_LOCATION_PETAROSA_BOROUGH_COMPOUND_1F);
    SetWarpDestination(MAP_GROUP(MAP_PETAROSA_BOROUGH_SHARPRISE_COMPOUND_1F),MAP_NUM(MAP_PETAROSA_BOROUGH_SHARPRISE_COMPOUND_1F),NO_WARP_ID,7,9);
}

void JumpPlayerTo_BeingChampionisHard(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WelcometotheHallofFame(jumpType);

    FlagsVarWarp_BeingChampionisHard();
}

void FlagsVarWarp_LetsGrabLunch()
{
    FlagSet(FLAG_VISITED_ZENZU_ISLAND);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BAIYA_LETSGRABLUNCH);
    VarSet(VAR_STORYLINE_STATE, STORY_BAIYA_EXPLAIN_RESTORATION);
    SetWarpDestination(MAP_GROUP(MAP_ZENZU_ISLAND_RESTAURANT),MAP_NUM(MAP_ZENZU_ISLAND_RESTAURANT),NO_WARP_ID,14,9);
}

void JumpPlayerTo_LetsGrabLunch(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_BeingChampionisHard(jumpType);

    FlagsVarWarp_LetsGrabLunch();
}

void FlagsVarWarp_RestoreHodouCity()
{
    QuestMenu_GetSetQuestState(QUEST_RESTOREHODOUGYM, FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_RESTOREHODOUGYM, FLAG_SET_COMPLETED);

    FlagSet(TRAINER_FLAGS_START + TRAINER_BLACKBELT_A);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BLACKBELT_B);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BLACKBELT_C);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BLACKBELT_D);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BLACKBELT_E);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BLACKBELT_F);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BLACKBELT_G);
    Quest_Generic_CompleteSubquests(QUEST_RESTOREHODOUGYM);
    VarSet(VAR_QUEST_RESTOREHODOUGYM, RESTOREHODOU_CITY_COMPLETE);
    SetWarpDestination(MAP_GROUP(MAP_HODOU_CITY_GYM),MAP_NUM(MAP_HODOU_CITY_GYM),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_RestoreHodouCity(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_LetsGrabLunch(jumpType);

    FlagsVarWarp_RestoreHodouCity();
}

void FlagsVarWarp_RestoreZenzuIsland()
{

    QuestMenu_GetSetQuestState(QUEST_RESTOREZENZUGYM,
            FLAG_SET_UNLOCKED);
    Quest_Generic_CompleteSubquests(QUEST_RESTOREZENZUGYM);
    QuestMenu_GetSetQuestState(QUEST_RESTOREZENZUGYM,
            FLAG_SET_COMPLETED);
    SetWarpDestination(MAP_GROUP(MAP_ZENZU_ISLAND),MAP_NUM(MAP_ZENZU_ISLAND),NO_WARP_ID,3,15);
}

void JumpPlayerTo_RestoreZenzuIsland(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_LetsGrabLunch(jumpType);

    FlagsVarWarp_RestoreZenzuIsland();
}

void FlagsVarWarp_RestoreEspuleeOutskirts()
{
    VarSet(VAR_QUEST_RESTOREESPULEEGYM, DEFEATED_IMELDA);
    QuestMenu_GetSetQuestState(QUEST_RESTOREESPULEEGYM, FLAG_SET_UNLOCKED);
    Quest_Generic_CompleteSubquests(QUEST_RESTOREESPULEEGYM);
    QuestMenu_GetSetQuestState(QUEST_RESTOREESPULEEGYM, FLAG_SET_COMPLETED);
    SetWarpDestination(MAP_GROUP(MAP_ESPULEE_OUTSKIRTS),MAP_NUM(MAP_ESPULEE_OUTSKIRTS),NO_WARP_ID,8,18);

}

void JumpPlayerTo_RestoreEspuleeOutskirts(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_LetsGrabLunch(jumpType);

    FlagsVarWarp_RestoreEspuleeOutskirts();
}

void FlagsVarWarp_YouRealizeWereEvilRight()
{
    VarSet(VAR_SHARPRISESPIRE_CONFERENCE_STATE,
            POST_YOU_REALIZE_WERE_EVIL_RIGHT);
    FlagSet(FLAG_BAIYA_CALL_ARANTRAZ);
    VarSet(VAR_STORYLINE_STATE, STORY_POST_YOU_REALIZE_WERE_EVIL);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_LEAGUEOPS), MAP_NUM(MAP_SHARPRISE_SPIRE_LEAGUEOPS), NO_WARP_ID, 17, 29);
}

void JumpPlayerTo_RandomlyRestore(bool32 jumpType)
{
    switch(Random() % 3)
    {
        case 0:
            JumpPlayerTo_RestoreHodouCity(jumpType);
            break;
        case 1:
            JumpPlayerTo_RestoreZenzuIsland(jumpType);
            break;
        case 2:
            JumpPlayerTo_RestoreEspuleeOutskirts(jumpType);
            break;
    }
}

void JumpPlayerTo_YouRealizeWereEvilRight(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_RandomlyRestore(jumpType);

    FlagsVarWarp_YouRealizeWereEvilRight();
}

void GiveItems_YouRealizeTheyreEvilRight_Phone(bool32 jumpType)
{
    if (!IsJumpTypeDebug(jumpType))
        return;

    if (VarGet(VAR_ARANTRAZ_STATE) >= BAIYA_SUMMONED_ARANTRAZ)
        return;

    AddBagItem(ITEM_TM345, 1);
    AddBagItem(ITEM_SURF_TOOL, 1);
}

void FlagsVarWarp_YouRealizeTheyreEvilRight_Phone(void)
{
    VarSet(VAR_ARANTRAZ_STATE, BAIYA_SUMMONED_ARANTRAZ);
    QuestMenu_GetSetQuestState(QUEST_HANG20, FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_HANG20, FLAG_SET_COMPLETED);
    FlagClear(FLAG_BAIYA_CALL_ARANTRAZ);
    SetWarpDestination(MAP_GROUP(MAP_PERLACIA_CITY), MAP_NUM(MAP_PERLACIA_CITY), 0, USE_WARP_ID, USE_WARP_ID);
}

void JumpPlayerTo_YouRealizeTheyreEvilRight_Phone(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YouRealizeWereEvilRight(jumpType);
    GiveItems_YouRealizeTheyreEvilRight_Phone(jumpType);
    FlagsVarWarp_YouRealizeTheyreEvilRight_Phone();
}

void FlagsVarWarp_YouRealizeTheyreEvilRight_Island()
{
    VarSet(VAR_ARANTRAZ_STATE, POST_YOU_REALIZE_THEYRE_EVIL_RIGHT);
    SetWarpDestination(MAP_GROUP(MAP_PETAROSA_BOROUGH_SHARPRISE_COMPOUND_1F), MAP_NUM(MAP_PETAROSA_BOROUGH_SHARPRISE_COMPOUND_1F), 0, USE_WARP_ID, USE_WARP_ID);
}

void JumpPlayerTo_YouRealizeTheyreEvilRight_Island(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YouRealizeTheyreEvilRight_Phone(jumpType);

    FlagsVarWarp_YouRealizeTheyreEvilRight_Island();
}

void FlagsVarWarp_CongratsYoureanAsshole()
{
    u8 storyline = VarGet(VAR_STORYLINE_STATE);
    VarSet(VAR_SHARPRISESPIRE_CONFERENCE_STATE, START_FALSE_TIMELINE);
    FlagSet(FLAG_TIMELINE_FALSE);
    PreventVariableFromReversion(VAR_STORYLINE_STATE, storyline,
            STORY_START_FALSE_TIMELINE);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_LEAGUEOPS), MAP_NUM(MAP_SHARPRISE_SPIRE_LEAGUEOPS), NO_WARP_ID, 17,29);
}

void JumpPlayerTo_CongratsYoureanAsshole(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YouRealizeTheyreEvilRight_Island(jumpType);

    FlagsVarWarp_CongratsYoureanAsshole();
}

void FlagsVarWarp_YouHaveYourOrders()
{
    QuestMenu_GetSetQuestState(QUEST_HOWDISAPPOINTING, FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_HOWDISAPPOINTING, FLAG_SET_ACTIVE);
    FlagSet(FLAG_VISITED_HODOU_CITY);
    VarSet(VAR_HOWDISAPPOINTING_STATE, MISSION_ASSIGNED);
    SetWarpDestination(MAP_GROUP(MAP_HODOU_CITY), MAP_NUM(MAP_HODOU_CITY), NO_WARP_ID, 33, 8);
}

void JumpPlayerTo_YouHaveYourOrders(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CongratsYoureanAsshole(jumpType);

    FlagsVarWarp_YouHaveYourOrders();
}

void FlagsVarWarp_HowDisappointing_Raid(void)
{
    FlagSet(FLAG_VISITED_HODOU_CITY);
    VarSet(VAR_HOWDISAPPOINTING_STATE, GYM_RAID_STARTED);
    SetWarpDestination(MAP_GROUP(MAP_HODOU_CITY), MAP_NUM(MAP_HODOU_CITY), NO_WARP_ID,22,4);
}

void JumpPlayerTo_HowDisappointing_Raid(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        if (VarGet(VAR_STORYLINE_STATE) <= STORY_START_FALSE_TIMELINE)
            JumpPlayerTo_YouHaveYourOrders(jumpType);

    FlagsVarWarp_HowDisappointing_Raid();
}

void FlagsVarWarp_HowDisappointing_Arrest(void)
{
    IncrementStorylineVariable();
    QuestMenu_GetSetQuestState(QUEST_HOWDISAPPOINTING, FLAG_REMOVE_ACTIVE);
    QuestMenu_GetSetQuestState(QUEST_HOWDISAPPOINTING, FLAG_SET_COMPLETED);
    VarSet(VAR_HOWDISAPPOINTING_STATE, HOWDISAPPOINTING_COMPLETE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_ADAORA_HOWDISAPPOINTING);
    FlagSet(TRAINER_FLAGS_START + TRAINER_HOWDISAPPOINTING_GRUNT1);
    FlagSet(TRAINER_FLAGS_START + TRAINER_HOWDISAPPOINTING_GRUNT2);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_LEAGUEOPS), MAP_NUM(MAP_SHARPRISE_SPIRE_LEAGUEOPS), NO_WARP_ID, 32,53);
}

void JumpPlayerTo_HowDisappointing_Arrest(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_HowDisappointing_Raid(jumpType);

    FlagsVarWarp_HowDisappointing_Arrest();
}

void FlagsVarWarp_LetsBurnThisMotherDown()
{
    QuestMenu_GetSetQuestState(QUEST_LETSBURNTHISMOTHERDOWN,
            FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_LETSBURNTHISMOTHERDOWN,
            FLAG_SET_COMPLETED);
    VarSet(VAR_LETSBURNTHISMOTHERSTATE, BURN_MOTHER_COMPLETE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN);
    IncrementStorylineVariable();
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_LEAGUEOPS), MAP_NUM(MAP_SHARPRISE_SPIRE_LEAGUEOPS), NO_WARP_ID, 34,5);

}

void JumpPlayerTo_LetsBurnThisMotherDown(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        if (VarGet(VAR_STORYLINE_STATE) <= STORY_START_FALSE_TIMELINE)
            JumpPlayerTo_CongratsYoureanAsshole(jumpType);

    FlagsVarWarp_LetsBurnThisMotherDown();
}
void FlagsVarWarp_Manhunt_News()
{
    QuestMenu_GetSetQuestState(QUEST_MANHUNT, FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_MANHUNT, FLAG_SET_ACTIVE);
    VarSet(VAR_MANHUNT_STATE, GOT_MANHUNT_CLUE_1);
    SetWarpDestination(MAP_GROUP(MAP_PERLACIA_CITY_NEWSPAPER), MAP_NUM(MAP_PERLACIA_CITY_NEWSPAPER), NO_WARP_ID,12,8);

}

void JumpPlayerTo_Manhunt_News(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CongratsYoureanAsshole(jumpType);

    FlagsVarWarp_Manhunt_News();
}

void FlagsVarWarp_Manhunt_Business()
{
    VarSet(VAR_MANHUNT_STATE, GOT_MANHUNT_CLUE_2);
    SetWarpDestination(MAP_GROUP(MAP_MERMEREZA_CITY_CONSULTING), MAP_NUM(MAP_MERMEREZA_CITY_CONSULTING), 1,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_Manhunt_Business(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_Manhunt_News(jumpType);

    FlagsVarWarp_Manhunt_Business();
}
void FlagsVarWarp_Manhunt_Ball()
{
    VarSet(VAR_MANHUNT_STATE, GOT_MANHUNT_CLUE_3);
    SetWarpDestination(MAP_GROUP(MAP_IRISINA_TOWN_BALLS),MAP_NUM(MAP_IRISINA_TOWN_BALLS),NO_WARP_ID,6,6);
}

void JumpPlayerTo_Manhunt_Ball(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_Manhunt_Business(jumpType);

    FlagsVarWarp_Manhunt_Ball();
}
void FlagsVarWarp_Manhunt_Route()
{
    VarSet(VAR_MANHUNT_STATE, GOT_MANHUNT_CLUE_4);
    SetWarpDestination(MAP_GROUP(MAP_ROUTE98), MAP_NUM(MAP_ROUTE98), NO_WARP_ID,25,22);
}

void JumpPlayerTo_Manhunt_Route(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_Manhunt_Ball(jumpType);

    FlagsVarWarp_Manhunt_Route();
}

void FlagsVarWarp_Manhunt_Vigrim()
{
    FlagSet(FLAG_VISITED_WISHAAST_LAKE);
    QuestMenu_GetSetQuestState(QUEST_MANHUNT, FLAG_REMOVE_ACTIVE);
    QuestMenu_GetSetQuestState(QUEST_MANHUNT, FLAG_SET_COMPLETED);
    VarSet(VAR_MANHUNT_STATE, MANHUNT_COMPLETE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_VIGRIM);
    IncrementStorylineVariable();
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_LEAGUEOPS), MAP_NUM(MAP_SHARPRISE_SPIRE_LEAGUEOPS), NO_WARP_ID, 5,5);
}

void JumpPlayerTo_Manhunt_Vigrim(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        if (VarGet(VAR_STORYLINE_STATE) <= STORY_START_FALSE_TIMELINE)
            JumpPlayerTo_Manhunt_Route(jumpType);

    FlagsVarWarp_Manhunt_Vigrim();
}

void FlagsVarWarp_ExhibitionBattle()
{
    VarSet(VAR_STORYLINE_STATE, STORY_CONGRATULATED_BY_LUCREZIA);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_STADIUM_LOCKERS),MAP_NUM(MAP_SHARPRISE_STADIUM_LOCKERS),2,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_CompleteAllTideTakedown(bool32 jumpType)
{
    JumpPlayerTo_Manhunt_Vigrim(jumpType);
    JumpPlayerTo_LetsBurnThisMotherDown(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_YouHaveYourOrders(JUMP_CUTSCENE_SKIP);
    JumpPlayerTo_HowDisappointing_Arrest(JUMP_CUTSCENE_SKIP);
}

void JumpPlayerTo_ExhibitionBattle(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_CompleteAllTideTakedown(jumpType);

    FlagsVarWarp_ExhibitionBattle();
}

void FlagsVarWarp_MaybeIFuckedUp()
{
    VarSet(VAR_STORYLINE_STATE, STORY_RECIEVED_BAMBOO_STAR);
    SetWarpDestination(MAP_GROUP(MAP_ROUTE2),MAP_NUM(MAP_ROUTE2),1,USE_WARP_ID,USE_WARP_ID);
}

void GiveItems_MaybeIFuckedUp(bool32 jumpType)
{
    if (VarGet(VAR_STORYLINE_STATE) < STORY_RECIEVED_BAMBOO_STAR)
        AddBagItem(ITEM_WISH_TAG, 1);
}

void JumpPlayerTo_MaybeIFuckedUp(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ExhibitionBattle(jumpType);
    GiveItems_MaybeIFuckedUp(jumpType);
    FlagsVarWarp_MaybeIFuckedUp();
}

void FlagsVarWarp_OkayLetsFixit()
{
    u32 i;

    FlagSet(FLAG_VISITED_TORGEOT_CLIMB_BASE);
    FlagSet(FLAG_VISITED_TORGEOT_CLIMB);
    FlagSet(FLAG_TIMELINE_TIMETRAVEL);
    FlagClear(FLAG_TIMELINE_FALSE);
    VarSet(VAR_STORYLINE_STATE, STORY_MORNING_OF_TIMELINE_SPLIT);
    VarSet(VAR_MANHUNT_STATE, NOT_ASSIGNED);
    VarSet(VAR_HOWDISAPPOINTING_STATE, NOT_ASSIGNED);
    VarSet(VAR_HOWDISAPPOINTING_STATE, NOT_ASSIGNED);
    VarSet(VAR_TIME_TRAVEL_STATE, TIME_TRAVEL_SACRIFICE_COMPLETE);

    for (i = 0; i < USHRT_MAX ; i++)
        Buzzr_IncrementSteps();

    SetWarpDestination(MAP_GROUP(MAP_PETAROSA_BOROUGH_SHARPRISE_COMPOUND_1F), MAP_NUM(MAP_PETAROSA_BOROUGH_SHARPRISE_COMPOUND_1F), 0, USE_WARP_ID, USE_WARP_ID);
}

void GiveItems_OkayLetsFixIt(bool32 jumpType)
{
    if (!FlagGet(FLAG_TIMELINE_TIMETRAVEL))
        RemoveBagItem(ITEM_WISH_TAG,1);
}

void JumpPlayerTo_OkayLetsFixit(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_MaybeIFuckedUp(jumpType);
    GiveItems_OkayLetsFixIt(jumpType);
    FlagsVarWarp_OkayLetsFixit();
}

void FlagsVarWarp_LetsGettheBandBackTogether_Before()
{
    VarSet(VAR_ARANTRAZ_STATE, LAST_CHANCE_TRUE_TIMELINE_START);
    SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ_MESS_HALL),MAP_NUM(MAP_ARANTRAZ_MESS_HALL), 0, USE_WARP_ID, USE_WARP_ID);
}

void JumpPlayerTo_LetsGettheBandBackTogether_Before(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_OkayLetsFixit(jumpType);

    FlagsVarWarp_LetsGettheBandBackTogether_Before();
}

void FlagsVarWarp_LetsGettheBandBackTogether_After()
{
    VarSet(VAR_ARANTRAZ_STATE, START_TRUE_TIMELINE);
    VarSet(VAR_STORYLINE_STATE, STORY_START_TRUE_TIMELINE);
    FlagSet(FLAG_TIMELINE_TRUE);
    VarSet(VAR_MASK_OFF_STATE, ASSIGNED_MASK_OFF);
    SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ_MESS_HALL),MAP_NUM(MAP_ARANTRAZ_MESS_HALL), 0, USE_WARP_ID, USE_WARP_ID);

}

void JumpPlayerTo_LetsGettheBandBackTogether_After(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_LetsGettheBandBackTogether_Before(jumpType);

    FlagsVarWarp_LetsGettheBandBackTogether_After();
}

void FlagsVarWarp_MaskOff_H()
{
    VarSet(VAR_MASK_OFF_STATE,GOT_MASK_OFF_CLUE_1);
    SetWarpDestination(MAP_GROUP(MAP_PERLACIA_CITY_NEWSPAPER), MAP_NUM(MAP_PERLACIA_CITY_NEWSPAPER), NO_WARP_ID,12,8);
}

void JumpPlayerTo_MaskOff_H(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_LetsGettheBandBackTogether_After(jumpType);

    FlagsVarWarp_MaskOff_H();
}

void FlagsVarWarp_MaskOff_F()
{
    VarSet(VAR_MASK_OFF_STATE,GOT_MASK_OFF_CLUE_2);
    SetWarpDestination(MAP_GROUP(MAP_MERMEREZA_CITY_CONSULTING),MAP_NUM(MAP_MERMEREZA_CITY_CONSULTING),NO_WARP_ID,4,5);
}

void JumpPlayerTo_MaskOff_F(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_MaskOff_H(jumpType);

    FlagsVarWarp_MaskOff_F();
}

void FlagsVarWarp_MaskOff_I()
{
    VarSet(VAR_MASK_OFF_STATE,GOT_MASK_OFF_CLUE_3);
    SetWarpDestination(MAP_GROUP(MAP_TORA_TOWN_RAMEN),MAP_NUM(MAP_TORA_TOWN_RAMEN),NO_WARP_ID,9,6);
}

void JumpPlayerTo_MaskOff_I(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_MaskOff_F(jumpType);

    FlagsVarWarp_MaskOff_I();
}

void FlagsVarWarp_MaskOff_D()
{
    VarSet(VAR_MASK_OFF_STATE,GOT_MASK_OFF_CLUE_3);
    SetWarpDestination(MAP_GROUP(MAP_IRISINA_TOWN_BALLS),MAP_NUM(MAP_IRISINA_TOWN_BALLS),NO_WARP_ID,6,6);
}

void JumpPlayerTo_MaskOff_D(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_MaskOff_F(jumpType);

    FlagsVarWarp_MaskOff_D();
}

void FlagsVarWarp_MaskOff_G()
{
    VarSet(VAR_MASK_OFF_STATE,GOT_MASK_OFF_CLUE_4);
    SetWarpDestination(MAP_GROUP(MAP_CAPHE_CITY_LIBRARY),MAP_NUM(MAP_CAPHE_CITY_LIBRARY),NO_WARP_ID,4,4);
}

void JumpPlayerTo_MaskOff_G(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_MaskOff_I(jumpType);

    FlagsVarWarp_MaskOff_G();
}

void FlagsVarWarp_MaskOff_Vigrim()
{
    VarSet(VAR_MASK_OFF_STATE, DEFEATED_MASK_OFF_VIGRIM);
    VarSet(VAR_STORYLINE_STATE, STORY_DEFEATED_VIGRIM);
    SetWarpDestination(MAP_GROUP(MAP_WISHAAST_LAKE),MAP_NUM(MAP_WISHAAST_LAKE),NO_WARP_ID,22,26);
}

void JumpPlayerTo_MaskOff_Vigrim(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_MaskOff_G(jumpType);

    FlagsVarWarp_MaskOff_Vigrim();
}

void FlagsVarWarp_LockedOut()
{
    FlagSet(FLAG_LOCKEDOUT_PLAYED);
    SetLastHealLocationWarp(HEAL_LOCATION_HALAI_ISLAND_BAIYA);
    SetWarpDestination(MAP_GROUP(MAP_HALAI_ISLAND_BAIYA),MAP_NUM(MAP_HALAI_ISLAND_BAIYA),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_LockedOut(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_MaskOff_Vigrim(jumpType);

    FlagsVarWarp_LockedOut();
}

void FlagsVarWarp_LetsFixThis()
{
    u8 storyline = VarGet(VAR_STORYLINE_STATE);
    u8 arantrazState = VarGet(VAR_ARANTRAZ_STATE);
    u8 warehouseState = VarGet(VAR_WAREHOUSE_RAVE_STATE);

    PreventVariableFromReversion(VAR_STORYLINE_STATE, storyline,
            STORY_RECIVED_RAVE_INVITE);
    PreventVariableFromReversion(VAR_ARANTRAZ_STATE, arantrazState,
            PRE_SPEECHSPEECH);
    PreventVariableFromReversion(VAR_WAREHOUSE_RAVE_STATE, warehouseState,
            GOT_RAVE_MESSAGE);
    Buzzr_MarkTweetAsRead(TWEET_STORY_WAREHOUSE_RAVE);
    SetWarpDestination(MAP_GROUP(MAP_HALAI_ISLAND_BAIYA),MAP_NUM(MAP_HALAI_ISLAND_BAIYA),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_LetsFixThis(bool32 jumpType)
{

    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_LockedOut(jumpType);

    FlagsVarWarp_LetsFixThis();
}

void FlagsVarWarp_WarehouseRave()
{
    IncrementStorylineVariable();
    VarSet(VAR_WAREHOUSE_RAVE_STATE, TOLD_BAIYA_ABOUT_KEIYING);
    SetWarpDestination(MAP_GROUP(MAP_CURENO_PORT),MAP_NUM(MAP_CURENO_PORT),4,USE_WARP_ID,USE_WARP_ID);

}

void JumpPlayerTo_WarehouseRave(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        if (VarGet(VAR_STORYLINE_STATE) < STORY_RAVE_OR_SPEECH_COMPLETE)
            JumpPlayerTo_LetsFixThis(jumpType);

    FlagsVarWarp_WarehouseRave();
}

void FlagsVarWarp_SpeechSpeechSpeech()
{
    IncrementStorylineVariable();
    VarSet(VAR_ARANTRAZ_STATE, POST_SPEECHSPEECH);
    SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ_MESS_HALL),MAP_NUM(MAP_ARANTRAZ_MESS_HALL),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_SpeechSpeechSpeech(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        if (VarGet(VAR_STORYLINE_STATE) < STORY_RAVE_OR_SPEECH_COMPLETE)
            JumpPlayerTo_LetsFixThis(jumpType);

    FlagsVarWarp_SpeechSpeechSpeech();
}

void FlagsVarWarp_Persuasivepassenger()
{
    VarSet(VAR_QUEST_PERSUASIVE_PASSENGER_STATE,SAVED_BEFORE_ARRIBA_CEO);
    VarSet(VAR_STORYLINE_STATE,STORY_1ST_TAKEDOWN);
    FlagSet(FLAG_QUEST_PERSUASIVE_SIBLING);
    FlagSet(FLAG_QUEST_PERSUASIVE_PASSENGER_PLAYER_KIDNAPPED);
    FlagSet(TRAINER_FLAGS_START + TRAINER_ARRIBA_CEO);

    SetWarpDestination(MAP_GROUP(MAP_ARRIBA_2F),MAP_NUM(MAP_ARRIBA_2F),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_TrueTimelineStart(bool32 jumpType)
{
    JumpPlayerTo_SpeechSpeechSpeech(jumpType);
    JumpPlayerTo_WarehouseRave(JUMP_CUTSCENE_SKIP);
}

void JumpPlayerTo_Persuasivepassenger(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_TrueTimelineStart(jumpType);

    QuestMenu_GetSetQuestState(QUEST_PERSUASIVEPASSENGER, FLAG_SET_UNLOCKED);
    Quest_Generic_CompleteSubquests(QUEST_PERSUASIVEPASSENGER);
    QuestMenu_GetSetQuestState(QUEST_PERSUASIVEPASSENGER, FLAG_SET_COMPLETED);
    QuestMenu_GetSetQuestState(QUEST_TAXICABTURNAROUND, FLAG_SET_UNLOCKED);
    Quest_Generic_CompleteSubquests(QUEST_TAXICABTURNAROUND);
    QuestMenu_GetSetQuestState(QUEST_TAXICABTURNAROUND, FLAG_SET_COMPLETED);
    FlagsVarWarp_Persuasivepassenger();
}

void FlagsVarWarp_Breaktheinternet()
{
    VarSet(VAR_QUEST_BREAKTHEINTERNET_STATE,SAVED_BEFORE_BUZZR_CEO);
    VarSet(VAR_STORYLINE_STATE,STORY_1ST_TAKEDOWN);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BUZZR6);
    FlagSet(TRAINER_FLAGS_START + TRAINER_BUZZR_CEO);

    SetWarpDestination(MAP_GROUP(MAP_FAKENEWS_WAREHOUSE),MAP_NUM(MAP_FAKENEWS_WAREHOUSE),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_Breaktheinternet(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_TrueTimelineStart(jumpType);

    Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_RABIES);
    Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_SMOOTHIE);
    Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_DEOXYS);
    Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_TUNNELS);
    Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_FRESHWATER);
    Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_STONE);

    QuestMenu_GetSetQuestState(QUEST_RABIESOUTBREAK,FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_SMOOTHIECRAFTING,FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_VSDEOXYS,FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_HODOUTUNNELS,FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_FRESHWATEREVOLUTION,FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(QUEST_BETWEENASTONEANDAHARDPLACE,FLAG_SET_UNLOCKED);

    QuestMenu_GetSetQuestState(QUEST_RABIESOUTBREAK,FLAG_SET_COMPLETED);
    QuestMenu_GetSetQuestState(QUEST_SMOOTHIECRAFTING,FLAG_SET_COMPLETED);
    QuestMenu_GetSetQuestState(QUEST_VSDEOXYS,FLAG_SET_COMPLETED);
    QuestMenu_GetSetQuestState(QUEST_HODOUTUNNELS,FLAG_SET_COMPLETED);
    QuestMenu_GetSetQuestState(QUEST_FRESHWATEREVOLUTION,FLAG_SET_COMPLETED);
    QuestMenu_GetSetQuestState(QUEST_BETWEENASTONEANDAHARDPLACE,FLAG_SET_COMPLETED);

    QuestMenu_GetSetQuestState(QUEST_BREAKTHEINTERNET, FLAG_SET_UNLOCKED);
    Quest_Generic_CompleteSubquests(QUEST_BREAKTHEINTERNET);
    QuestMenu_GetSetQuestState(QUEST_BREAKTHEINTERNET, FLAG_SET_COMPLETED);
    FlagsVarWarp_Breaktheinternet();
}

void FlagsVarWarp_Warehousewarfare()
{
    VarSet(VAR_QUEST_WAREHOUSEWARFARE_STATE,SAVED_BEFORE_PRESTO_CEO);
    VarSet(VAR_STORYLINE_STATE,STORY_1ST_TAKEDOWN);
    FlagSet(FLAG_QUEST_WAREHOUSE_WARFARE_EXPLAINED);
    FlagSet(FLAG_QUEST_WAREHOUSEWARFARE_BARGE2_WORKERS_CLEAR);
    FlagSet(FLAG_QUEST_WAREHOUSEWARFARE_BARGE2_ENGINE_CLEAR);
    FlagSet(FLAG_QUEST_WAREHOUSEWARFARE_BARGE3_ENGINE_CLEAR);
    FlagSet(TRAINER_FLAGS_START + TRAINER_PRESTO_CEO);

    SetWarpDestination(MAP_GROUP(MAP_PRESTO_BARGE_3),MAP_NUM(MAP_PRESTO_BARGE_3),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_Warehousewarfare(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_TrueTimelineStart(jumpType);

    QuestMenu_GetSetQuestState(QUEST_WAREHOUSEWARFARE, FLAG_SET_UNLOCKED);
    Quest_Generic_CompleteSubquests(QUEST_WAREHOUSEWARFARE);
    QuestMenu_GetSetQuestState(QUEST_WAREHOUSEWARFARE, FLAG_SET_COMPLETED);

    QuestMenu_GetSetQuestState(QUEST_BODEGABURNOUT, FLAG_SET_UNLOCKED);
    Quest_Generic_CompleteSubquests(QUEST_BODEGABURNOUT);
    QuestMenu_GetSetQuestState(QUEST_BODEGABURNOUT, FLAG_SET_COMPLETED);

    FlagsVarWarp_Warehousewarfare();
}

void JumpPlayerTo_RandomTakedownQuest(bool32 jumpType)
{
    switch (Random() % 3)
    {
        case 0: JumpPlayerTo_Breaktheinternet(jumpType);
                return;
        case 1: JumpPlayerTo_Warehousewarfare(jumpType);
                return;
        case 2: JumpPlayerTo_Persuasivepassenger(jumpType);
                return;
    }
}

void FlagsVarWarp_OneDown()
{
    VarSet(VAR_STORYLINE_STATE, STORY_PRE_EARTHQUAKE);
    SetWarpDestination(MAP_GROUP(MAP_ARANTRAZ_MESS_HALL),MAP_NUM(MAP_ARANTRAZ_MESS_HALL),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_OneDown(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_RandomTakedownQuest(jumpType);

    FlagsVarWarp_OneDown();
}

void FlagsVarWarp_Earthquake_Inside()
{
    VarSet(VAR_HALAI_ISLAND_STATE, START_EARTHQUAKE_RESCUE);
    SetWarpDestination(MAP_GROUP(MAP_HALAI_ISLAND),MAP_NUM(MAP_HALAI_ISLAND),2,USE_WARP_ID,USE_WARP_ID);

}

void UNUSED JumpPlayerTo_Earthquake_Inside(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_OneDown(jumpType);

    FlagsVarWarp_Earthquake_Inside();
}

void FlagsVarWarp_Earthquake_Outside()
{
    VarSet(VAR_HALAI_ISLAND_STATE, MEET_AT_ROUTE4);
    VarSet(VAR_STORYLINE_STATE, STORY_POST_EARTHQUAKE);
    SetWarpDestination(MAP_GROUP(MAP_HALAI_ISLAND),MAP_NUM(MAP_HALAI_ISLAND),NO_WARP_ID,11,17);
}

void JumpPlayerTo_Earthquake_Outside(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_OneDown(jumpType);

    FlagsVarWarp_Earthquake_Outside();
}

void FlagsVarWarp_ThisIsntRandom_Discover()
{
    FlagSet(FLAG_VISITED_PARC);
    VarSet(VAR_PARC_STATE, TEAM_INSIDE_LAB);
    SetWarpDestination(MAP_GROUP(MAP_PARC),MAP_NUM(MAP_PARC),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_ThisIsntRandom_Discover(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_Earthquake_Outside(jumpType);

    FlagsVarWarp_ThisIsntRandom_Discover();
}
void FlagsVarWarp_ThisIsntRandom_Mon1()
{
    VarSet(VAR_PARC_STATE, FREED_LAB_POKEMON_1);
    SetWarpDestination(MAP_GROUP(MAP_PARC),MAP_NUM(MAP_PARC),NO_WARP_ID,4,26);
}

void JumpPlayerTo_ThisIsntRandom_Mon1(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ThisIsntRandom_Discover(jumpType);

    FlagsVarWarp_ThisIsntRandom_Mon1();
}
void FlagsVarWarp_ThisIsntRandom_Mon2()
{
    VarSet(VAR_PARC_STATE, FREED_LAB_POKEMON_2);
    SetWarpDestination(MAP_GROUP(MAP_PARC),MAP_NUM(MAP_PARC),NO_WARP_ID,4,17);
}

void JumpPlayerTo_ThisIsntRandom_Mon2(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ThisIsntRandom_Mon1(jumpType);

    FlagsVarWarp_ThisIsntRandom_Mon2();
}

void FlagsVarWarp_WaitEvenThen()
{
    VarSet(VAR_PARC_STATE, DEFEATED_DYNAMAX);
    VarSet(VAR_HALAI_ISLAND_STATE, POST_THIS_ISNT_RANDOM);
    VarSet(VAR_STORYLINE_STATE, STORY_POST_DYNAMAX_BOSS);
    SetWarpDestination(MAP_GROUP(MAP_HALAI_ISLAND),MAP_NUM(MAP_HALAI_ISLAND),NO_WARP_ID,32,13);
}

void JumpPlayerTo_WaitEvenThen(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ThisIsntRandom_Mon2(jumpType);

    FlagsVarWarp_WaitEvenThen();
}

void FlagsVarWarp_LetsFinishThis()
{
    FlagSet(FLAG_VISITED_QIU_VILLAGE);
    VarSet(VAR_STORYLINE_STATE, STORY_BEFORE_RAMESH_BREAKIN);
    VarSet(VAR_HALAI_ISLAND_STATE, POST_WAIT_EVEN_THEN);
    SetWarpDestination(MAP_GROUP(MAP_QIU_VILLAGE),MAP_NUM(MAP_QIU_VILLAGE),NO_WARP_ID,13,19);
}

void JumpPlayerTo_LetsFinishThis(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WaitEvenThen(jumpType);

    FlagsVarWarp_LetsFinishThis();
}

void FlagsVarWarp_ImIn_Breakin()
{
    VarSet(VAR_TOWER_RAID_STATE, SEARCHING_RAMESH_HOUSE);
    SetWarpDestination(MAP_GROUP(MAP_QIU_VILLAGE_RAMESH_HOUSE), MAP_NUM(MAP_QIU_VILLAGE_RAMESH_HOUSE), 1, USE_WARP_ID, USE_WARP_ID);
}

void JumpPlayerTo_ImIn_Breakin(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_LetsFinishThis(jumpType);
    FlagsVarWarp_ImIn_Breakin();
}

void FlagsVarWarp_ImIn_Postwarp()
{
    VarSet(VAR_STORYLINE_STATE, STORY_WARP_TILE_ACCESSIBLE);
    VarSet(VAR_SHARPRISESPIRE_CONFERENCE_STATE, TRUE_RAID_START);
    VarSet(VAR_TOWER_RAID_STATE, TEAM_ENTERED_SHARPRISESPIRE);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_LOBBY), MAP_NUM(MAP_SHARPRISE_SPIRE_LOBBY), 3, USE_WARP_ID, USE_WARP_ID);
}

void GiveItems_ImIn_Postwarp(bool32 jumpType)
{
    if (VarGet(VAR_TOWER_RAID_STATE) < TEAM_ENTERED_SHARPRISESPIRE)
        AddBagItem(ITEM_MAGMA_EMBLEM, 1);
}

void JumpPlayerTo_ImIn_Postwarp(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ImIn_Breakin(jumpType);
    GiveItems_ImIn_Postwarp(jumpType);
    FlagsVarWarp_ImIn_Postwarp();
}

void FlagsVarWarp_ImIn_Postrival()
{
    VarSet(VAR_TOWER_RAID_STATE, DEFEATED_CHARLOTTE_SHARPRISESPIRE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_CHARLOTTE_IMIN);
    FlagSet(TRAINER_FLAGS_START + TRAINER_RAMESH_IMIN);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_LEAGUEOPS), MAP_NUM(MAP_SHARPRISE_SPIRE_LEAGUEOPS), 1, USE_WARP_ID, USE_WARP_ID);
}

void GiveItems_ImIn_Postrival(bool32 jumpType)
{
    if (VarGet(VAR_TOWER_RAID_STATE) < TEAM_ENTERED_SHARPRISESPIRE)
        AddBagItem(ITEM_MAGMA_EMBLEM, 1);
}

void JumpPlayerTo_ImIn_Postrival(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ImIn_Postwarp(jumpType);
    GiveItems_ImIn_Postrival(jumpType);
    FlagsVarWarp_ImIn_Postrival();
}

void FlagsVarWarp_YouCantStopMe_Lastplea()
{
    VarSet(VAR_TOWER_RAID_STATE, STOPPED_BY_OLIVER);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_TOP),MAP_NUM(MAP_SHARPRISE_SPIRE_TOP),NO_WARP_ID,6,7);
}

void JumpPlayerTo_YouCantStopMe_Lastplea(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_ImIn_Postrival(jumpType);

    FlagsVarWarp_YouCantStopMe_Lastplea();
}

void FlagsVarWarp_YouCantStopMe_Postbattle()
{
    VarSet(VAR_TOWER_RAID_STATE, DEFEATED_FIRST_LUCREZIA);
    FlagSet(TRAINER_FLAGS_START + TRAINER_LUCREZIA_A);
    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_TOP),MAP_NUM(MAP_SHARPRISE_SPIRE_TOP),NO_WARP_ID,15,6);

}

void JumpPlayerTo_YouCantStopMe_Postbattle(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YouCantStopMe_Lastplea(jumpType);

    FlagsVarWarp_YouCantStopMe_Postbattle();
}

void FlagsVarWarp_WeCanStopYouActually()
{
    VarSet(VAR_STORYLINE_STATE, STORY_EPILOGUE);
    VarSet(VAR_TOWER_RAID_STATE, DEFEATED_SECOND_LUCREZIA);
    FlagSet(TRAINER_FLAGS_START + TRAINER_LUCREZIA_B);

    SetWarpDestination(MAP_GROUP(MAP_SHARPRISE_SPIRE_TOP),MAP_NUM(MAP_SHARPRISE_SPIRE_TOP),NO_WARP_ID,15,6);
}

void JumpPlayerTo_WeCanStopYouActually(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_YouCantStopMe_Postbattle(jumpType);

    FlagsVarWarp_WeCanStopYouActually();
}

void FlagsVarWarp_Epilogue(void)
{
    VarSet(VAR_STORYLINE_STATE, STORY_CLEAR);
    FlagSet(FLAG_SYS_GAME_CLEAR);
    Buzzr_MarkTweetAsRead(TWEET_STORY_EPILOGUE);
    SetWarpDestination(MAP_GROUP(MAP_HALAI_ISLAND_BAIYA),MAP_NUM(MAP_HALAI_ISLAND_BAIYA),0,USE_WARP_ID,USE_WARP_ID);
}

void JumpPlayerTo_Epilogue(bool32 jumpType)
{
    if (IsJumpTypeDebug(jumpType))
        JumpPlayerTo_WeCanStopYouActually(jumpType);

    FlagsVarWarp_Epilogue();
}
