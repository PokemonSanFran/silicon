#include "main.h"
#include "nameplate.h"
#include "constants/nameplate.h"

static const u32 gSpeakerIcon_Test[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/test.4bpp");
static const u16 sSpeakerPal_Test[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/blaine.gbapal");

static const u32 gSpeakerIcon_Blaine[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/blaine.4bpp");
static const u16 sSpeakerPal_Blaine[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/blaine.gbapal");

static const u32 gSpeakerIcon_Brock[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/brock.4bpp");
static const u16 sSpeakerPal_Brock[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/brock.gbapal");

static const u32 gSpeakerIcon_Bruno[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/bruno.4bpp");
static const u16 sSpeakerPal_Bruno[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/bruno.gbapal");

static const u32 gSpeakerIcon_Bug_Catcher[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/bug_catcher.4bpp");
static const u16 sSpeakerPal_Bug_Catcher[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/bug_catcher.gbapal");

static const u32 gSpeakerIcon_Shinzo[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/shinzo.4bpp");
static const u16 sSpeakerPal_Shinzo[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/shinzo.gbapal");

static const u32 gSpeakerIcon_Neriene[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/neriene.4bpp");
static const u16 sSpeakerPal_Neriene[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/neriene.gbapal");

static const u32 gSpeakerIcon_AmiArgento[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/amiargento.4bpp");
static const u16 sSpeakerPal_AmiArgento[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/amiargento.gbapal");

static const u32 gSpeakerIcon_Elm[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/elm.4bpp");
static const u16 sSpeakerPal_Elm[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/elm.gbapal");

static const u32 gSpeakerIcon_Erika[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/erika.4bpp");
static const u16 sSpeakerPal_Erika[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/erika.gbapal");

static const u32 gSpeakerIcon_Belen[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/belen.4bpp");
static const u16 sSpeakerPal_Belen[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/belen.gbapal");

static const u32 gSpeakerIcon_Fisherman[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/fisherman.4bpp");
static const u16 sSpeakerPal_Fisherman[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/fisherman.gbapal");

static const u32 gSpeakerIcon_Vigrim[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/vigrim.4bpp");
static const u16 sSpeakerPal_Vigrim[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/vigrim.gbapal");

static const u32 gSpeakerIcon_Girl[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/girl.4bpp");
static const u16 sSpeakerPal_Girl[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/girl.gbapal");

static const u32 gSpeakerIcon_Green[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/green.4bpp");
static const u16 sSpeakerPal_Green[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/green.gbapal");

static const u32 gSpeakerIcon_Janine[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/janine.4bpp");
static const u16 sSpeakerPal_Janine[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/janine.gbapal");

static const u32 gSpeakerIcon_Dimu[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/dimu.4bpp");
static const u16 sSpeakerPal_Dimu[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/dimu.gbapal");

static const u32 gSpeakerIcon_Karen[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/karen.4bpp");
static const u16 sSpeakerPal_Karen[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/karen.gbapal");

static const u32 gSpeakerIcon_Kid[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/kid.4bpp");
static const u16 sSpeakerPal_Kid[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/kid.gbapal");

static const u32 gSpeakerIcon_Keiying[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/keiying.4bpp");
static const u16 sSpeakerPal_Keiying[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/keiying.gbapal");

static const u32 gSpeakerIcon_Kurt[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/kurt.4bpp");
static const u16 sSpeakerPal_Kurt[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/kurt.gbapal");

static const u32 gSpeakerIcon_Lance[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/lance.4bpp");
static const u16 sSpeakerPal_Lance[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/lance.gbapal");

static const u32 gSpeakerIcon_Lt_Surge[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/lt_surge.4bpp");
static const u16 sSpeakerPal_Lt_Surge[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/lt_surge.gbapal");

static const u32 gSpeakerIcon_Man[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/man.4bpp");
static const u16 sSpeakerPal_Man[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/man.gbapal");

static const u32 gSpeakerIcon_Misty[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/misty.4bpp");
static const u16 sSpeakerPal_Misty[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/misty.gbapal");

static const u32 gSpeakerIcon_Pua[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/pua.4bpp");
static const u16 sSpeakerPal_Pua[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/pua.gbapal");

static const u32 gSpeakerIcon_Old_Man[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/old_man.4bpp");
static const u16 sSpeakerPal_Old_Man[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/old_man.gbapal");

static const u32 gSpeakerIcon_Old_Woman[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/old_woman.4bpp");
static const u16 sSpeakerPal_Old_Woman[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/old_woman.gbapal");

static const u32 gSpeakerIcon_Policeman[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/policeman.4bpp");
static const u16 sSpeakerPal_Policeman[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/policeman.gbapal");

static const u32 gSpeakerIcon_BD[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/bd.4bpp");
static const u16 sSpeakerPal_BD[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/bd.gbapal");

static const u32 gSpeakerIcon_Red[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/red.4bpp");
static const u16 sSpeakerPal_Red[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/red.gbapal");

static const u32 gSpeakerIcon_Rocket_Grunt_F[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/rocket_grunt_f.4bpp");
static const u16 sSpeakerPal_Rocket_Grunt_F[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/rocket_grunt_f.gbapal");

static const u32 gSpeakerIcon_Rocket_Grunt_M[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/rocket_grunt_m.4bpp");
static const u16 sSpeakerPal_Rocket_Grunt_M[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/rocket_grunt_m.gbapal");

static const u32 gSpeakerIcon_Ramesh[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/ramesh.4bpp");
static const u16 sSpeakerPal_Ramesh[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/ramesh.gbapal");

static const u32 gSpeakerIcon_Silver[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/silver.4bpp");
static const u16 sSpeakerPal_Silver[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/silver.gbapal");

static const u32 gSpeakerIcon_Steven[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/steven.4bpp");
static const u16 sSpeakerPal_Steven[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/steven.gbapal");

static const u32 gSpeakerIcon_Swimmer_M[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/swimmer_m.4bpp");
static const u16 sSpeakerPal_Swimmer_M[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/swimmer_m.gbapal");

static const u32 gSpeakerIcon_Emrys[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/emrys.4bpp");
static const u16 sSpeakerPal_Emrys[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/emrys.gbapal");

static const u32 gSpeakerIcon_Will[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/will.4bpp");
static const u16 sSpeakerPal_Will[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/will.gbapal");

static const u32 gSpeakerIcon_Woman[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/woman.4bpp");
static const u16 sSpeakerPal_Woman[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/woman.gbapal");

static const u32 gSpeakerIcon_Youngster[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/youngster.4bpp");
static const u16 sSpeakerPal_Youngster[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/youngster.gbapal");

//
static const u32 gSpeakerIcon_Ace_Trainer_F[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/ace_trainer_f.4bpp");
static const u16 sSpeakerPal_Ace_Trainer_F[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/ace_trainer_f.gbapal");

static const u32 gSpeakerIcon_Ace_Trainer_M[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/ace_trainer_m.4bpp");
static const u16 sSpeakerPal_Ace_Trainer_M[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/ace_trainer_m.gbapal");

static const u32 gSpeakerIcon_Baiya[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/baiya.4bpp");
static const u16 sSpeakerPal_Baiya[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/baiya.gbapal");

static const u32 gSpeakerIcon_Adaora[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/adaora.4bpp");
static const u16 sSpeakerPal_Adaora[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/adaora.gbapal");

static const u32 gSpeakerIcon_Aroma_Lady[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/aroma_lady.4bpp");
static const u16 sSpeakerPal_Aroma_Lady[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/aroma_lady.gbapal");

static const u32 gSpeakerIcon_Battle_Girl[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/battle_girl.4bpp");
static const u16 sSpeakerPal_Battle_Girl[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/battle_girl.gbapal");

static const u32 gSpeakerIcon_Beauty[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/beauty.4bpp");
static const u16 sSpeakerPal_Beauty[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/beauty.gbapal");

static const u32 gSpeakerIcon_Bill[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/bill.4bpp");
static const u16 sSpeakerPal_Bill[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/bill.gbapal");

static const u32 gSpeakerIcon_Bird_Keeper[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/bird_keeper.4bpp");
static const u16 sSpeakerPal_Bird_Keeper[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/bird_keeper.gbapal");

static const u32 gSpeakerIcon_Black_Belt[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/black_belt.4bpp");
static const u16 sSpeakerPal_Black_Belt[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/black_belt.gbapal");

static const u32 gSpeakerIcon_Boarder[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/boarder.4bpp");
static const u16 sSpeakerPal_Boarder[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/boarder.gbapal");

static const u32 gSpeakerIcon_Collector[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/collector.4bpp");
static const u16 sSpeakerPal_Collector[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/collector.gbapal");

static const u32 gSpeakerIcon_Eusine[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/eusine.4bpp");
static const u16 sSpeakerPal_Eusine[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/eusine.gbapal");

static const u32 gSpeakerIcon_Juggler[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/juggler.4bpp");
static const u16 sSpeakerPal_Juggler[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/juggler.gbapal");

static const u32 gSpeakerIcon_Kimono_Girl[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/kimono_girl.4bpp");
static const u16 sSpeakerPal_Kimono_Girl[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/kimono_girl.gbapal");

static const u32 gSpeakerIcon_Lass[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/lass.4bpp");
static const u16 sSpeakerPal_Lass[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/lass.gbapal");

static const u32 gSpeakerIcon_Li[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/li.4bpp");
static const u16 sSpeakerPal_Li[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/li.gbapal");

static const u32 gSpeakerIcon_Medium[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/medium.4bpp");
static const u16 sSpeakerPal_Medium[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/medium.gbapal");

static const u32 gSpeakerIcon_Medium_2[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/medium_2.4bpp");
static const u16 sSpeakerPal_Medium_2[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/medium_2.gbapal");

static const u32 gSpeakerIcon_Mom[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/mom.4bpp");
static const u16 sSpeakerPal_Mom[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/mom.gbapal");

static const u32 gSpeakerIcon_Petrel[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/petrel.4bpp");
static const u16 sSpeakerPal_Petrel[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/petrel.gbapal");

static const u32 gSpeakerIcon_Poke_Maniac[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/poke_maniac.4bpp");
static const u16 sSpeakerPal_Poke_Maniac[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/poke_maniac.gbapal");

static const u32 gSpeakerIcon_Proton[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/proton.4bpp");
static const u16 sSpeakerPal_Proton[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/proton.gbapal");

static const u32 gSpeakerIcon_Sage[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/sage.4bpp");
static const u16 sSpeakerPal_Sage[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/sage.gbapal");

static const u32 gSpeakerIcon_Super_Nerd[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/super_nerd.4bpp");
static const u16 sSpeakerPal_Super_Nerd[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/super_nerd.gbapal");

static const u32 gSpeakerIcon_Waiter[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/waiter.4bpp");
static const u16 sSpeakerPal_Waiter[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/waiter.gbapal");

static const u32 gSpeakerIcon_Firebreather[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/firebreather.4bpp");
static const u16 sSpeakerPal_Firebreather[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/firebreather.gbapal");

static const u32 gSpeakerIcon_Biker[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/60.4bpp");
static const u16 sSpeakerPal_Biker[]  = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/60.gbapal");

static const u32 gSpeakerIcon_Melissa[] = INCBIN_U32("graphics/ui_menus/msgbox/character_heads/erika.4bpp");
static const u16 sSpeakerPal_Melissa[] = INCBIN_U16("graphics/ui_menus/msgbox/character_heads/erika.gbapal");

static const struct SpeakerData sSpeakerData[NUM_SPEAKERS] =
{
    [SPEAKER_TEST] =
    {
        .name = COMPOUND_STRING("Domimic"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Test,
        .speakerPal = sSpeakerPal_Test,
        //.speakerIcon = gSpeakerIcon_Super_Nerd,
        //.speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_DEFAULT] =
    {
        .name = COMPOUND_STRING("NPC"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_DIMU] =
    {
        .name = COMPOUND_STRING("Dimu"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Dimu,
        .speakerPal = sSpeakerPal_Dimu,
    },
    [SPEAKER_BLAINE] =
    {
        .name = COMPOUND_STRING("Blaine"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Blaine,
        .speakerPal = sSpeakerPal_Blaine,
    },
    [SPEAKER_BROCK] =
    {
        .name = COMPOUND_STRING("Brock"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Brock,
        .speakerPal = sSpeakerPal_Brock,
    },
    [SPEAKER_BRUNO] =
    {
        .name = COMPOUND_STRING("Bruno"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bruno,
        .speakerPal = sSpeakerPal_Bruno,
    },
    [SPEAKER_BUG_CATCHER] =
    {
        .name = COMPOUND_STRING("Bug Catcher"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_SHINZO] =
    {
        .name = COMPOUND_STRING("Shinzo"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Shinzo,
        .speakerPal = sSpeakerPal_Shinzo,
    },
    [SPEAKER_NERIENE] =
    {
        .name = COMPOUND_STRING("Neriene"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Neriene,
        .speakerPal = sSpeakerPal_Neriene,
    },
    [SPEAKER_AMIARGENTO] =
    {
        .name = COMPOUND_STRING("Ami Argento"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_AmiArgento,
        .speakerPal = sSpeakerPal_AmiArgento,
    },
    [SPEAKER_ELM] =
    {
        .name = COMPOUND_STRING("Elm"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Elm,
        .speakerPal = sSpeakerPal_Elm,
    },
    [SPEAKER_ERIKA] =
    {
        .name = COMPOUND_STRING("Erika"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_BELEN] =
    {
        .name = COMPOUND_STRING("Belen"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Belen,
        .speakerPal = sSpeakerPal_Belen,
    },
    [SPEAKER_FISHERMAN] =
    {
        .name = COMPOUND_STRING("Fisherman"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_VIGRIM] =
    {
        .name = COMPOUND_STRING("Vigrim"),
        .title = COMPOUND_STRING("Tide Leader"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Vigrim,
        .speakerPal = sSpeakerPal_Vigrim,
    },
    [SPEAKER_VIGRIM_UNKNOWN] =
    {
        .name = COMPOUND_STRING("???"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Vigrim,
        .speakerPal = sSpeakerPal_Vigrim,
    },
    [SPEAKER_GIRL] =
    {
        .name = COMPOUND_STRING("Girl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_GREEN] =
    {
        .name = COMPOUND_STRING("Green"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Green,
        .speakerPal = sSpeakerPal_Green,
    },
    [SPEAKER_JANINE] =
    {
        .name = COMPOUND_STRING("Janine"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Janine,
        .speakerPal = sSpeakerPal_Janine,
    },
    [SPEAKER_KAREN] =
    {
        .name = COMPOUND_STRING("Karen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Karen,
        .speakerPal = sSpeakerPal_Karen,
    },
    [SPEAKER_KID] =
    {
        .name = COMPOUND_STRING("Kid"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_KEIYING] =
    {
        .name = COMPOUND_STRING("Kei-Ying"),
        .title = COMPOUND_STRING("SharpRise COO"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Keiying,
        .speakerPal = sSpeakerPal_Keiying,
    },
    [SPEAKER_KEIYING_GYM] =
    {
        .name = COMPOUND_STRING("Keiying"),
        .title = COMPOUND_STRING("Ex-Gym Leader"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Keiying,
        .speakerPal = sSpeakerPal_Keiying,
    },
    [SPEAKER_KURT] =
    {
        .name = COMPOUND_STRING("Kurt"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kurt,
        .speakerPal = sSpeakerPal_Kurt,
    },
    [SPEAKER_LANCE] =
    {
        .name = COMPOUND_STRING("Lance"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Lance,
        .speakerPal = sSpeakerPal_Lance,
    },
    [SPEAKER_LT_SURGE] =
    {
        .name = COMPOUND_STRING("Lt.Surge"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Lt_Surge,
        .speakerPal = sSpeakerPal_Lt_Surge,
    },
    [SPEAKER_MAN] =
    {
        .name = COMPOUND_STRING("Man"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_MISTY] =
    {
        .name = COMPOUND_STRING("Misty"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Misty,
        .speakerPal = sSpeakerPal_Misty,
    },
    [SPEAKER_PUA] =
    {
        .name = COMPOUND_STRING("Pua"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Pua,
        .speakerPal = sSpeakerPal_Pua,
    },
    [SPEAKER_OLD_MAN] =
    {
        .name = COMPOUND_STRING("Old Man"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_POLICEMAN] =
    {
        .name = COMPOUND_STRING("Policeman"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_BD] =
    {
        .name = COMPOUND_STRING("BD"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_BD,
        .speakerPal = sSpeakerPal_BD,
    },
    [SPEAKER_RED] =
    {
        .name = COMPOUND_STRING("Red"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Red,
        .speakerPal = sSpeakerPal_Red,
    },
    [SPEAKER_ROCKET_GRUNT_MALE] =
    {
        .name = COMPOUND_STRING("Rocket Grunt"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_ROCKET_GRUNT_FEMALE] =
    {
        .name = COMPOUND_STRING("Rocket Grunt"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_RAMESH] =
    {
        .name = COMPOUND_STRING("Ramesh"),
        .title = COMPOUND_STRING("SharpRise CMO"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Ramesh,
        .speakerPal = sSpeakerPal_Ramesh,
    },
    [SPEAKER_SILVER] =
    {
        .name = COMPOUND_STRING("Silver"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Silver,
        .speakerPal = sSpeakerPal_Silver,
    },
    [SPEAKER_STEVEN] =
    {
        .name = COMPOUND_STRING("Steven"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Steven,
        .speakerPal = sSpeakerPal_Steven,
    },
    [SPEAKER_SWIMMER_MALE] =
    {
        .name = COMPOUND_STRING("Swimmer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_EMRYS] =
    {
        .name = COMPOUND_STRING("Emrys"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Emrys,
        .speakerPal = sSpeakerPal_Emrys,
    },
    [SPEAKER_WILL] =
    {
        .name = COMPOUND_STRING("Will"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Will,
        .speakerPal = sSpeakerPal_Will,
    },
    [SPEAKER_WOMAN] =
    {
        .name = COMPOUND_STRING("Woman"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_YOUNGSTER] =
    {
        .name = COMPOUND_STRING("Youngster"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Youngster,
        .speakerPal = sSpeakerPal_Youngster,
    },
    [SPEAKER_FIREBREATHER] =
    {
        .name = COMPOUND_STRING("Firebreather"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_BEAUTY] =
    {
        .name = COMPOUND_STRING("Beauty"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Beauty,
        .speakerPal = sSpeakerPal_Beauty,
    },
    [SPEAKER_BIRD_KEEPER] =
    {
        .name = COMPOUND_STRING("Bird Keeper"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bird_Keeper,
        .speakerPal = sSpeakerPal_Bird_Keeper,
    },
    [SPEAKER_BLACK_BELT] =
    {
        .name = COMPOUND_STRING("Black Belt"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_EUSINE] =
    {
        .name = COMPOUND_STRING("Eusine"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Eusine,
        .speakerPal = sSpeakerPal_Eusine,
    },
    [SPEAKER_PROTON] =
    {
        .name = COMPOUND_STRING("Proton"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Proton,
        .speakerPal = sSpeakerPal_Proton,
    },
    [SPEAKER_PETREL] =
    {
        .name = COMPOUND_STRING("Petrel"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Petrel,
        .speakerPal = sSpeakerPal_Petrel,
    },
    [SPEAKER_ADAORA] =
    {
        .name = COMPOUND_STRING("Adaora"),
        .title = COMPOUND_STRING("Tide Admin"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Adaora,
        .speakerPal = sSpeakerPal_Adaora,
    },
    [SPEAKER_ADAORA_FIRST_INTRO] =
    {
        .name = COMPOUND_STRING("Adaora"),
        .title = COMPOUND_STRING("Volunteer"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Adaora,
        .speakerPal = sSpeakerPal_Adaora,
    },
    [SPEAKER_BAIYA] =
    {
        .name = COMPOUND_STRING("Baiya"),
        .title = COMPOUND_STRING("{PKMN} Trainer"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Baiya,
        .speakerPal = sSpeakerPal_Baiya,
    },
    [SPEAKER_BAIYA_TIDE] =
    {
        .name = COMPOUND_STRING("Baiya"),
        .title = COMPOUND_STRING("The Tide"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Baiya,
        .speakerPal = sSpeakerPal_Baiya,
    },
    [SPEAKER_COLLECTOR] =
    {
        .name = COMPOUND_STRING("Collector"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_BILL] =
    {
        .name = COMPOUND_STRING("Bill"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_BOARDER] =
    {
        .name = COMPOUND_STRING("Boarder"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Boarder,
        .speakerPal = sSpeakerPal_Boarder,
    },
    [SPEAKER_JUGGLER] =
    {
        .name = COMPOUND_STRING("Juggler"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Juggler,
        .speakerPal = sSpeakerPal_Juggler,
    },
    [SPEAKER_KIMONO_GIRL] =
    {
        .name = COMPOUND_STRING("Kimono Girl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kimono_Girl,
        .speakerPal = sSpeakerPal_Kimono_Girl,
    },
    [SPEAKER_LASS] =
    {
        .name = COMPOUND_STRING("Lass"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Lass,
        .speakerPal = sSpeakerPal_Lass,
    },
    [SPEAKER_MEDIUM] =
    {
        .name = COMPOUND_STRING("Medium"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Medium,
        .speakerPal = sSpeakerPal_Medium,
    },
    [SPEAKER_MEDIUM_2] =
    {
        .name = COMPOUND_STRING("Medium"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Medium_2,
        .speakerPal = sSpeakerPal_Medium_2,
    },
    [SPEAKER_POKE_MANIAC] =
    {
        .name = COMPOUND_STRING("Poke Maniac"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Poke_Maniac,
        .speakerPal = sSpeakerPal_Poke_Maniac,
    },
    [SPEAKER_SAGE] =
    {
        .name = COMPOUND_STRING("Sage"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Sage,
        .speakerPal = sSpeakerPal_Sage,
    },
    [SPEAKER_SUPER_NERD] =
    {
        .name = COMPOUND_STRING("Super Nerd"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Super_Nerd,
        .speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_ACE_TRAINER_M] =
    {
        .name = COMPOUND_STRING("Ace Trainer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
        .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_ACE_TRAINER_F] =
    {
        .name = COMPOUND_STRING("Ace Trainer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },
    [SPEAKER_LI] =
    {
        .name = COMPOUND_STRING("Li"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_AROMA_LADY] =
    {
        .name = COMPOUND_STRING("Aroma Lady"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Aroma_Lady,
        .speakerPal = sSpeakerPal_Aroma_Lady,
    },
    [SPEAKER_BATTLE_GIRL] =
    {
        .name = COMPOUND_STRING("Battle Girl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Battle_Girl,
        .speakerPal = sSpeakerPal_Battle_Girl,
    },
    [SPEAKER_MOM] =
    {
        .name = COMPOUND_STRING("Mom"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Mom,
        .speakerPal = sSpeakerPal_Mom,
    },
    [SPEAKER_WAITER] =
    {
        .name = COMPOUND_STRING("Waiter"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Waiter,
        .speakerPal = sSpeakerPal_Waiter,
    },
    [SPEAKER_NEWS] =
    {
        .name = COMPOUND_STRING("News"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_ALICIA] =
    {
        .name = COMPOUND_STRING("{PLAYER}"),
        .title = COMPOUND_STRING("{PKMN} Trainer"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Mom,
        .speakerPal = sSpeakerPal_Mom,
    },
    [SPEAKER_CHARLOTTE] =
    {
        .name = COMPOUND_STRING("Charlotte"),
        .title = COMPOUND_STRING("{PKMN} Trainer"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Silver,
        .speakerPal = sSpeakerPal_Silver,
    },
    [SPEAKER_CHARLOTTE_SHARPRISE] =
    {
        .name = COMPOUND_STRING("Charlotte"),
        .title = COMPOUND_STRING("Enforcer"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Silver,
        .speakerPal = sSpeakerPal_Silver,
    },
    [SPEAKER_GRUNT] =
    {
        .name = COMPOUND_STRING("GRUNT"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_MARKETING_STAFF] =
    {
        .name = COMPOUND_STRING("Marketing Staff"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_ANNOUNCER] =
    {
        .name = COMPOUND_STRING("Announcer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_TALA] =
    {
        .name = COMPOUND_STRING("Tala"),
        .title = COMPOUND_STRING("Ex-Elite Four"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Will,
        .speakerPal = sSpeakerPal_Will,
    },
    [SPEAKER_CROWD_A] =
    {
        .name = COMPOUND_STRING("Crowd Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
        .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_CROWD_B] =
    {
        .name = COMPOUND_STRING("Crowd Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },
    [SPEAKER_CROWD_C] =
    {
        .name = COMPOUND_STRING("Crowd Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_CROWD_D] =
    {
        .name = COMPOUND_STRING("Crowd Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_RUPERT] =
    {
        .name = COMPOUND_STRING("Rupert"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_OLIVER] =
    {
        .name = COMPOUND_STRING("Oliver"),
        .title = COMPOUND_STRING("Assistant"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Elm,
        .speakerPal = sSpeakerPal_Elm,
    },
    [SPEAKER_RESIDENT_A] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
        .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_RESIDENT_B] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },
    [SPEAKER_RESIDENT_C] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_RESIDENT_D] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_SIARL] =
    {
        .name = COMPOUND_STRING("Siarl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_FRANK] =
    {
        .name = COMPOUND_STRING("Frank"),
        .title = COMPOUND_STRING("Ex-Elite Four"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bruno,
        .speakerPal = sSpeakerPal_Bruno,
    },
    [SPEAKER_DAGMAR] =
    {
        .name = COMPOUND_STRING("Dagmar"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_GURL] =
    {
        .name = COMPOUND_STRING("Gurl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_LEAGUE_STAFF_A] =
    {
        .name = COMPOUND_STRING("League Staff"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_DAVID] =
    {
        .name = COMPOUND_STRING("David"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Waiter,
        .speakerPal = sSpeakerPal_Waiter,
    },
    [SPEAKER_ISHAN] =
    {
        .name = COMPOUND_STRING("Ishan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_ROCKET_MEMBER_A] =
    {
        .name = COMPOUND_STRING("The Tide Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_ROCKET_MEMBER_B] =
    {
        .name = COMPOUND_STRING("The Tide Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_LUCREZIA] =
    {
        .name = COMPOUND_STRING("Lucrezia"),
        .title = COMPOUND_STRING("SharpRise CEO"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Proton,
        .speakerPal = sSpeakerPal_Proton,
    },
    [SPEAKER_VITOMIR] =
    {
        .name = COMPOUND_STRING("Vitomir"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_RABIA] =
    {
        .name = COMPOUND_STRING("Rabia"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_LANDLORD] =
    {
        .name = COMPOUND_STRING("Landlord"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Juggler,
        .speakerPal = sSpeakerPal_Juggler,
    },
    [SPEAKER_PROTEST_A] =
    {
        .name = COMPOUND_STRING("Protestor"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Aroma_Lady,
        .speakerPal = sSpeakerPal_Aroma_Lady,
    },
    [SPEAKER_PROTEST_B] =
    {
        .name = COMPOUND_STRING("Protestor"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Beauty,
        .speakerPal = sSpeakerPal_Beauty,
    },
    [SPEAKER_PROTEST_C] =
    {
        .name = COMPOUND_STRING("Protestor"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_PROTEST_D] =
    {
        .name = COMPOUND_STRING("Protestor"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_JULIUS] =
    {
        .name = COMPOUND_STRING("Julius"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_MADISON] =
    {
        .name = COMPOUND_STRING("Madison"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_STRANDED_A] =
    {
        .name = COMPOUND_STRING("Stranded Citizen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_STRANDED_B] =
    {
        .name = COMPOUND_STRING("Stranded Citizen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_RESIDENT_E] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_RESIDENT_F] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_MAGNUS] =
    {
        .name = COMPOUND_STRING("Magnus"),
        .title = COMPOUND_STRING("Ex-Elite Four"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Steven,
        .speakerPal = sSpeakerPal_Steven,
    },
    [SPEAKER_ELEANOR] =
    {
        .name = COMPOUND_STRING("Eleanor"),
        .title = COMPOUND_STRING("Ex-Elite Four"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Karen,
        .speakerPal = sSpeakerPal_Karen,
    },
    [SPEAKER_ALEKSANDER] =
    {
        .name = COMPOUND_STRING("Aleksander"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_SUMMER] =
    {
        .name = COMPOUND_STRING("Summer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_MAID] =
    {
        .name = COMPOUND_STRING("Maid"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_NEWS_B] =
    {
        .name = COMPOUND_STRING("News"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_ARNAV] =
    {
        .name = COMPOUND_STRING("Arnav"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_TECH] =
    {
        .name = COMPOUND_STRING("Techie"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_CHIEF] =
    {
        .name = COMPOUND_STRING("Chief"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_DOYLE] =
    {
        .name = COMPOUND_STRING("Doyle"),
        .title = COMPOUND_STRING("Ex-Gym Leader"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Brock,
        .speakerPal = sSpeakerPal_Brock,
    },
    [SPEAKER_IMELDA] =
    {
        .name = COMPOUND_STRING("Imelda"),
        .title = COMPOUND_STRING("Ex-Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Misty,
        .speakerPal = sSpeakerPal_Misty,
    },
    [SPEAKER_DOOR] =
    {
        .name = COMPOUND_STRING("Door"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Misty,
        .speakerPal = sSpeakerPal_Misty,
    },
    [SPEAKER_TEODORO] =
    {
        .name = COMPOUND_STRING("Teodoro"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_DUDLEY] =
    {
        .name = COMPOUND_STRING("Dudley"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_CHERIE] =
    {
        .name = COMPOUND_STRING("Cherie"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Medium,
        .speakerPal = sSpeakerPal_Medium,
    },
    [SPEAKER_MATTHEW] =
    {
        .name = COMPOUND_STRING("Matthew"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_FANNY] =
    {
        .name = COMPOUND_STRING("Fanny"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_CRAIG] =
    {
        .name = COMPOUND_STRING("Craig"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_ANTONE] =
    {
        .name = COMPOUND_STRING("Antone"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Boarder,
        .speakerPal = sSpeakerPal_Boarder,
    },
    [SPEAKER_ORI] =
    {
        .name = COMPOUND_STRING("Ori"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Old_Woman,
        .speakerPal = sSpeakerPal_Old_Woman,
    },
    [SPEAKER_HIKO] =
    {
        .name = COMPOUND_STRING("Hiko"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_POLICE] =
    {
        .name = COMPOUND_STRING("Police"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_MACK] =
    {
        .name = COMPOUND_STRING("Mack"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_TYZONN] =
    {
        .name = COMPOUND_STRING("Tyzonn"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_WILL2] =
    {
        .name = COMPOUND_STRING("Will"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_RONNY] =
    {
        .name = COMPOUND_STRING("Ronny"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_DAX] =
    {
        .name = COMPOUND_STRING("Dax"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_BRENNAN] =
    {
        .name = COMPOUND_STRING("Brennan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_ATTENDANT] =
    {
        .name = COMPOUND_STRING("Exhibit Attendant"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_SPEAKER] =
    {
        .name = COMPOUND_STRING("Speaker"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_GHOST] =
    {
        .name = COMPOUND_STRING("Ghost"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_ISMAIL] =
    {
        .name = COMPOUND_STRING("Ismail"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_SERGEY] =
    {
        .name = COMPOUND_STRING("Sergey"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_REPORTER] =
    {
        .name = COMPOUND_STRING("Reporter"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_STAN_PERLACIA_CITY] =
    {
        .name = COMPOUND_STRING("Wallace Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_TROLLEYWORKER] =
    {
        .name = COMPOUND_STRING("Trolleyworker"),
        .title = COMPOUND_STRING("GRUNT Employee"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_HESTER] =
    {
        .name = COMPOUND_STRING("Hester"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_SHARPRISECAPITAL_STAFF] =
    {
        .name = COMPOUND_STRING("SharpRise Staff"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_TONALLI] =
    {
        .name = COMPOUND_STRING("Tonalli"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_DRUMMER_B] =
    {
        .name = COMPOUND_STRING("Drummer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_DRUMMER_C] =
    {
        .name = COMPOUND_STRING("Drummer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_DRUMMER_D] =
    {
        .name = COMPOUND_STRING("Drummer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_LIIDIA] =
    {
        .name = COMPOUND_STRING("Liidia"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_RAINER] =
    {
        .name = COMPOUND_STRING("Rainer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_BRONSON] =
    {
        .name = COMPOUND_STRING("Bronson"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Lt_Surge,
        .speakerPal = sSpeakerPal_Lt_Surge,
    },
    [SPEAKER_SHASHI] =
    {
        .name = COMPOUND_STRING("Shashi"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_LEAH] =
    {
        .name = COMPOUND_STRING("Leah"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_GUARD] =
    {
        .name = COMPOUND_STRING("Guard"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_SHOPKEEPER] =
    {
        .name = COMPOUND_STRING("Shopkeeper"),
        .title = COMPOUND_STRING("Pokemon Center Staff"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Green,
        .speakerPal = sSpeakerPal_Green,
    },
    [SPEAKER_ELIOR] =
    {
        .name = COMPOUND_STRING("Elior"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_LELAND] =
    {
        .name = COMPOUND_STRING("Leland"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_AMBROGIO] =
    {
        .name = COMPOUND_STRING("Ambrogio"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_JORIS] =
    {
        .name = COMPOUND_STRING("Joris"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_NURSE] =
    {
        .name = COMPOUND_STRING("Nurse"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_AUGUSTE] =
    {
        .name = COMPOUND_STRING("Auguste"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_JULIA] =
    {
        .name = COMPOUND_STRING("Julia"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },
    [SPEAKER_ALICE] =
    {
        .name = COMPOUND_STRING("Alice"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FERRAN] =
    {
        .name = COMPOUND_STRING("Ferran"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Poke_Maniac,
        .speakerPal = sSpeakerPal_Poke_Maniac,
    },
    [SPEAKER_ANTHONY] =
    {
        .name = COMPOUND_STRING("Anthony"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_SEVENSISTERS_TINA] =
    {
        .name = COMPOUND_STRING("Tina"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },

    [SPEAKER_SEVENSISTERS_PAUL] =
    {
        .name = COMPOUND_STRING("Paul"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kurt,
        .speakerPal = sSpeakerPal_Kurt,
    },

    [SPEAKER_SEVENSISTERS_JON] =
    {
        .name = COMPOUND_STRING("Jon"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Lass,
        .speakerPal = sSpeakerPal_Lass,
    },

    [SPEAKER_SEVENSISTERS_BRADLEY] =
    {
        .name = COMPOUND_STRING("Bradley"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },

    [SPEAKER_SEVENSISTERS_JO] =
    {
        .name = COMPOUND_STRING("Jo"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bird_Keeper,
        .speakerPal = sSpeakerPal_Bird_Keeper,
    },

    [SPEAKER_SEVENSISTERS_HANNAH] =
    {
        .name = COMPOUND_STRING("Hannah"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },

    [SPEAKER_SEVENSISTERS_RACHEL] =
    {
        .name = COMPOUND_STRING("Rachel"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Battle_Girl,
        .speakerPal = sSpeakerPal_Battle_Girl,
    },
    [SPEAKER_KATHARINA] =
    {
        .name = COMPOUND_STRING("Katharina"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Aroma_Lady,
        .speakerPal = sSpeakerPal_Aroma_Lady,
    },
    [SPEAKER_OFFICIANT] =
    {
        .name = COMPOUND_STRING("Officiant"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Old_Woman,
        .speakerPal = sSpeakerPal_Old_Woman,
    },
    [SPEAKER_HELEN] =
    {
        .name = COMPOUND_STRING("Helen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_RUSTY] =
    {
        .name = COMPOUND_STRING("Rusty"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_WILLOW] =
    {
        .name = COMPOUND_STRING("Willow"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_GRIFF] =
    {
        .name = COMPOUND_STRING("Griff"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Youngster,
        .speakerPal = sSpeakerPal_Youngster,
    },
    [SPEAKER_LUNA] =
    {
        .name = COMPOUND_STRING("Luna"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MAX] =
    {
        .name = COMPOUND_STRING("Max"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bird_Keeper,
        .speakerPal = sSpeakerPal_Bird_Keeper,
    },
    [SPEAKER_BLAZE] =
    {
        .name = COMPOUND_STRING("B-Boy Blaze"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Petrel,
        .speakerPal = sSpeakerPal_Petrel,
    },
    [SPEAKER_KIKI] =
    {
        .name = COMPOUND_STRING("Krumpin' Kiki"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Blaine,
        .speakerPal = sSpeakerPal_Blaine,
    },
    [SPEAKER_EJ] =
    {
        .name = COMPOUND_STRING("Electric EJ"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Poke_Maniac,
        .speakerPal = sSpeakerPal_Poke_Maniac,
    },
    [SPEAKER_WAITE] =
    {
        .name = COMPOUND_STRING("Waite"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
        .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_DEBRA] =
    {
        .name = COMPOUND_STRING("Debra"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Battle_Girl,
        .speakerPal = sSpeakerPal_Battle_Girl,
    },
    [SPEAKER_WALDRON] =
    {
        .name = COMPOUND_STRING("Waldron"),
        .title = COMPOUND_STRING("IT Employee"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_ISIDORE] =
    {
        .name = COMPOUND_STRING("Isidore"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_FILIP] =
    {
        .name = COMPOUND_STRING("Filip"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Petrel,
        .speakerPal = sSpeakerPal_Petrel,
    },
    [SPEAKER_GERTRUDE] =
    {
        .name = COMPOUND_STRING("Gertrude"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_KHALEEL] =
    {
        .name = COMPOUND_STRING("Khaleel"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Medium_2,
        .speakerPal = sSpeakerPal_Medium_2,
    },
    [SPEAKER_KITVOL] =
    {
        .name = COMPOUND_STRING("Kitvol"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_NANCY] =
    {
        .name = COMPOUND_STRING("Nancy"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Kurt,
        .speakerPal = sSpeakerPal_Kurt,
    },
    [SPEAKER_PANNEN] =
    {
        .name = COMPOUND_STRING("Pannen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Super_Nerd,
        .speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_MADRONE] =
    {
        .name = COMPOUND_STRING("Professor Madrone"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Elm,
        .speakerPal = sSpeakerPal_Elm,
    },
    [SPEAKER_BUZZR_CEO] =
    {
        .name = COMPOUND_STRING("Buzzr CEO"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Medium_2,
        .speakerPal = sSpeakerPal_Medium_2,
    },
    [SPEAKER_PRESTO_CEO] =
    {
        .name = COMPOUND_STRING("Presto CEO"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Steven,
        .speakerPal = sSpeakerPal_Steven,
    },
    [SPEAKER_ARRIBA_DRIVER1] =
    {
        .name = COMPOUND_STRING("Arriba Driver 1"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Brock,
        .speakerPal = sSpeakerPal_Brock,
    },
    [SPEAKER_ARRIBA_DRIVER2] =
    {
        .name = COMPOUND_STRING("Arriba Driver 2"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_ARRIBA_DRIVER3] =
    {
        .name = COMPOUND_STRING("Arriba Driver 3"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Boarder,
        .speakerPal = sSpeakerPal_Boarder,
    },
    [SPEAKER_PERSUASIVE_LANDLORD] =
    {
        .name = COMPOUND_STRING("Landlord"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Blaine,
        .speakerPal = sSpeakerPal_Blaine,
    },
    [SPEAKER_PERSUASIVE_SIBLING] =
    {
        .name = COMPOUND_STRING("Sibling"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Battle_Girl,
        .speakerPal = sSpeakerPal_Battle_Girl,
    },
    [SPEAKER_ARRIBA_GRUNT1] =
    {
        .name = COMPOUND_STRING("Arriba Grunt 1"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Medium_2,
        .speakerPal = sSpeakerPal_Medium_2,
    },
    [SPEAKER_ARRIBA_GRUNT2] =
    {
        .name = COMPOUND_STRING("Arriba Grunt 2"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_ARRIBA_CEO] =
    {
        .name = COMPOUND_STRING("Arriba CEO"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_GYM_ATTENDANT] =
    {
        .name = COMPOUND_STRING("Gym Attendant"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Shinzo,
        .speakerPal = sSpeakerPal_Shinzo,
    },
    [SPEAKER_IMPROV_1] =
    {
        .name = COMPOUND_STRING("Improv 1"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Medium,
        .speakerPal = sSpeakerPal_Medium,
    },
    [SPEAKER_IMPROV_2] =
    {
        .name = COMPOUND_STRING("Improv 2"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_IMPROV_3] =
    {
        .name = COMPOUND_STRING("Improv 3"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Beauty,
        .speakerPal = sSpeakerPal_Beauty,
    },
    [SPEAKER_CHRIS] =
    {
        .name = COMPOUND_STRING("Chris"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Green,
        .speakerPal = sSpeakerPal_Green,
    },
    [SPEAKER_LEE_PYRON] =
    {
        .name = COMPOUND_STRING("Lee Pyron"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Lass,
        .speakerPal = sSpeakerPal_Lass,
    },
    [SPEAKER_PROF_TRACHY] =
    {
        .name = COMPOUND_STRING("Prof Trachy"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Lass,
        .speakerPal = sSpeakerPal_Lass,
    },
    [SPEAKER_DRUG_HELMET_TESTER] =
    {
        .name = COMPOUND_STRING("Drughelmettester"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Super_Nerd,
        .speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_VSDEOGUY] =
    {
        .name = COMPOUND_STRING("Vsdeoguy"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Poke_Maniac,
        .speakerPal = sSpeakerPal_Poke_Maniac,
    },
    [SPEAKER_VSDEORESEARCHER] =
    {
        .name = COMPOUND_STRING("Vsdeoresearcher"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Super_Nerd,
        .speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_ANGELDELIVERYBIKERA] =
    {
        .name = COMPOUND_STRING("AngeldeliverybikerA"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Biker,
        .speakerPal = sSpeakerPal_Biker,
    },
    [SPEAKER_ANGELDELIVERYBIKERB] =
    {
        .name = COMPOUND_STRING("AngeldeliverybikerB"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Biker,
        .speakerPal = sSpeakerPal_Biker,
    },
    [SPEAKER_ANGELDELIVERYBIKERC] =
    {
        .name = COMPOUND_STRING("AngeldeliverybikerC"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Biker,
        .speakerPal = sSpeakerPal_Biker,
    },
    [SPEAKER_ANGELDELIVERYBIKERD] =
    {
        .name = COMPOUND_STRING("AngeldeliverybikerD"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Biker,
        .speakerPal = sSpeakerPal_Biker,
    },
    [SPEAKER_MELISSA] =
    {
        .name = COMPOUND_STRING("Melissa"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_OLD_WOMAN] =
    {
        .name = COMPOUND_STRING("Old Woman"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_STAN_PERLACIA_CITYB] =
    {
        .name = COMPOUND_STRING("Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_STAN_PERLACIA_CITYC] =
    {
        .name = COMPOUND_STRING("Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_STAN_PERLACIA_CITYD] =
    {
        .name = COMPOUND_STRING("Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_STAN_PERLACIA_CITYE] =
    {
        .name = COMPOUND_STRING("Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_BREEDINGPARENT] =
    {
        .name = COMPOUND_STRING("Breedingparent"),
        .title = COMPOUND_STRING("Parent Manager"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Brock,
        .speakerPal = sSpeakerPal_Brock,
    },
    [SPEAKER_BREEDINGEGG] =
    {
        .name = COMPOUND_STRING("BreedingEgg"),
        .title = COMPOUND_STRING("Egg Manager"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Aroma_Lady,
        .speakerPal = sSpeakerPal_Aroma_Lady,
    },
    [SPEAKER_BREEDINGGENE] =
    {
        .name = COMPOUND_STRING("Gene"),
        .title = COMPOUND_STRING("Stat Manager"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Blaine,
        .speakerPal = sSpeakerPal_Blaine,
    },
    [SPEAKER_PARKRANGER] =
    {
        .name = COMPOUND_STRING("Parkranger"),
        .title = COMPOUND_STRING("Park Ranger"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Green,
        .speakerPal = sSpeakerPal_Green,
    },
    [SPEAKER_ADAM_UNKNOWN] =
    {
        .name = COMPOUND_STRING("???"),
        .title= COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
        .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_ELEANOR_PAST] =
    {
        .name = COMPOUND_STRING("Eleanor"),
        .title = COMPOUND_STRING("Elite Four"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Karen,
        .speakerPal = sSpeakerPal_Karen,
    },
    [SPEAKER_FRANK_PAST] =
    {
        .name = COMPOUND_STRING("Frank"),
        .title = COMPOUND_STRING("Elite Four"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bruno,
        .speakerPal = sSpeakerPal_Bruno,
    },
    [SPEAKER_NOPOMOD] =
    {
        .name = COMPOUND_STRING("NoPoMod"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_STRESSCUPORGANIZER] =
    {
        .name = COMPOUND_STRING("Stresscuporganizer"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ASPCAOFFICER] =
    {
        .name = COMPOUND_STRING("Aspcaofficer"),
        .title = COMPOUND_STRING("RSPCP"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_SPRINGTRAINER] =
    {
        .name = COMPOUND_STRING("Springtrainer"),
        .title = COMPOUND_STRING("Bystander"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_SMOOTHIESHOPKEEPER] =
    {
        .name = COMPOUND_STRING("Marble Slab Barista"),
        .title = COMPOUND_STRING("Smoothieshopkeeper"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_SMOOTHIECUSTOMER] =
    {
        .name = COMPOUND_STRING("Customer"),
        .title = COMPOUND_STRING("Smoothiecustomer"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_TUNNELSPERSON] =
    {
        .name = COMPOUND_STRING("Customer"),
        .title = COMPOUND_STRING("Smoothiecustomer"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_PSYOPWORKERA] =
    {
        .name = COMPOUND_STRING("Worker"),
        .title = COMPOUND_STRING("PsyopworkerA"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_PSYOPWORKERB] =
    {
        .name = COMPOUND_STRING("Worker"),
        .title = COMPOUND_STRING("PsyopworkerB"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_PSYOPWORKERC] =
    {
        .name = COMPOUND_STRING("Worker"),
        .title = COMPOUND_STRING("PsyopworkerC"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_PSYOPTARGETA] =
    {
        .name = COMPOUND_STRING("{PKMN} Trainer"),
        .title = COMPOUND_STRING("PsyoptargetA"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_PSYOPTARGETC] =
    {
        .name = COMPOUND_STRING("{PKMN} Trainer"),
        .title = COMPOUND_STRING("PsyoptargetC"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_SHOPUNIONREP] =
    {
        .name = COMPOUND_STRING("Shopunionrep"),
        .title = COMPOUND_STRING("Shop Union Leader"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
};
