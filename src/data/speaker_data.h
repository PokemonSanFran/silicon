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
        .name = _("Domimic"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Test,
        .speakerPal = sSpeakerPal_Test,
        //.speakerIcon = gSpeakerIcon_Super_Nerd,
        //.speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_DEFAULT] =
    {
        .name = _("NPC"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_DIMU] =
    {
        .name = _("Dimu"),
        .title = _("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Dimu,
        .speakerPal = sSpeakerPal_Dimu,
    },
    [SPEAKER_BLAINE] =
    {
        .name = _("Blaine"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Blaine,
        .speakerPal = sSpeakerPal_Blaine,
    },
    [SPEAKER_BROCK] =
    {
        .name = _("Brock"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Brock,
        .speakerPal = sSpeakerPal_Brock,
    },
    [SPEAKER_BRUNO] =
    {
        .name = _("Bruno"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bruno,
        .speakerPal = sSpeakerPal_Bruno,
    },
    [SPEAKER_BUG_CATCHER] =
    {
        .name = _("Bug Catcher"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_SHINZO] =
    {
        .name = _("Shinzo"),
        .title = _("Gym Leader"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Shinzo,
        .speakerPal = sSpeakerPal_Shinzo,
    },
    [SPEAKER_NERIENE] =
    {
        .name = _("Neriene"),
        .title = _("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Neriene,
        .speakerPal = sSpeakerPal_Neriene,
    },
    [SPEAKER_AMIARGENTO] =
    {
        .name = _("Ami Argento"),
        .title = _("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_AmiArgento,
        .speakerPal = sSpeakerPal_AmiArgento,
    },
    [SPEAKER_ELM] =
    {
        .name = _("Elm"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Elm,
        .speakerPal = sSpeakerPal_Elm,
    },
    [SPEAKER_ERIKA] =
    {
        .name = _("Erika"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_BELEN] =
    {
        .name = _("Belen"),
        .title = _("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Belen,
        .speakerPal = sSpeakerPal_Belen,
    },
    [SPEAKER_FISHERMAN] =
    {
        .name = _("Fisherman"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_VIGRIM] =
    {
        .name = _("Vigrim"),
        .title = _("Tide Leader"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Vigrim,
        .speakerPal = sSpeakerPal_Vigrim,
    },
    [SPEAKER_VIGRIM_UNKNOWN] =
    {
        .name = _("???"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Vigrim,
        .speakerPal = sSpeakerPal_Vigrim,
    },
    [SPEAKER_GIRL] =
    {
        .name = _("Girl"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_GREEN] =
    {
        .name = _("Green"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Green,
        .speakerPal = sSpeakerPal_Green,
    },
    [SPEAKER_JANINE] =
    {
        .name = _("Janine"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Janine,
        .speakerPal = sSpeakerPal_Janine,
    },
    [SPEAKER_KAREN] =
    {
        .name = _("Karen"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Karen,
        .speakerPal = sSpeakerPal_Karen,
    },
    [SPEAKER_KID] =
    {
        .name = _("Kid"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_KEIYING] =
    {
        .name = _("Keiying"),
        .title = _("SharpRise COO"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Keiying,
        .speakerPal = sSpeakerPal_Keiying,
    },
    [SPEAKER_KEIYING_GYM] =
    {
        .name = _("Keiying"),
        .title = _("Ex-Gym Leader"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Keiying,
        .speakerPal = sSpeakerPal_Keiying,
    },
    [SPEAKER_KURT] =
    {
        .name = _("Kurt"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kurt,
        .speakerPal = sSpeakerPal_Kurt,
    },
    [SPEAKER_LANCE] =
    {
        .name = _("Lance"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Lance,
        .speakerPal = sSpeakerPal_Lance,
    },
    [SPEAKER_LT_SURGE] =
    {
        .name = _("Lt.Surge"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Lt_Surge,
        .speakerPal = sSpeakerPal_Lt_Surge,
    },
    [SPEAKER_MAN] =
    {
        .name = _("Man"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_MISTY] =
    {
        .name = _("Misty"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Misty,
        .speakerPal = sSpeakerPal_Misty,
    },
    [SPEAKER_PUA] =
    {
        .name = _("Pua"),
        .title = _("Gym Leader"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Pua,
        .speakerPal = sSpeakerPal_Pua,
    },
    [SPEAKER_OLD_MAN] =
    {
        .name = _("Old Man"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_POLICEMAN] =
    {
        .name = _("Policeman"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_BD] =
    {
        .name = _("BD"),
        .title = _("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_BD,
        .speakerPal = sSpeakerPal_BD,
    },
    [SPEAKER_RED] =
    {
        .name = _("Red"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Red,
        .speakerPal = sSpeakerPal_Red,
    },
    [SPEAKER_ROCKET_GRUNT_MALE] =
    {
        .name = _("Rocket Grunt"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_ROCKET_GRUNT_FEMALE] =
    {
        .name = _("Rocket Grunt"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_RAMESH] =
    {
        .name = _("Ramesh"),
        .title = _("SharpRise CMO"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Ramesh,
        .speakerPal = sSpeakerPal_Ramesh,
    },
    [SPEAKER_SILVER] =
    {
        .name = _("Silver"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Silver,
        .speakerPal = sSpeakerPal_Silver,
    },
    [SPEAKER_STEVEN] =
    {
        .name = _("Steven"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Steven,
        .speakerPal = sSpeakerPal_Steven,
    },
    [SPEAKER_SWIMMER_MALE] =
    {
        .name = _("Swimmer"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_EMRYS] =
    {
        .name = _("Emrys"),
        .title = _("Gym Leader"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Emrys,
        .speakerPal = sSpeakerPal_Emrys,
    },
    [SPEAKER_WILL] =
    {
        .name = _("Will"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Will,
        .speakerPal = sSpeakerPal_Will,
    },
    [SPEAKER_WOMAN] =
    {
        .name = _("Woman"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_YOUNGSTER] =
    {
        .name = _("Youngster"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Youngster,
        .speakerPal = sSpeakerPal_Youngster,
    },
    [SPEAKER_FIREBREATHER] =
    {
        .name = _("Firebreather"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_BEAUTY] =
    {
        .name = _("Beauty"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Beauty,
        .speakerPal = sSpeakerPal_Beauty,
    },
    [SPEAKER_BIRD_KEEPER] =
    {
        .name = _("Bird Keeper"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bird_Keeper,
        .speakerPal = sSpeakerPal_Bird_Keeper,
    },
    [SPEAKER_BLACK_BELT] =
    {
        .name = _("Black Belt"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_EUSINE] =
    {
        .name = _("Eusine"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Eusine,
        .speakerPal = sSpeakerPal_Eusine,
    },
    [SPEAKER_PROTON] =
    {
        .name = _("Proton"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Proton,
        .speakerPal = sSpeakerPal_Proton,
    },
    [SPEAKER_PETREL] =
    {
        .name = _("Petrel"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Petrel,
        .speakerPal = sSpeakerPal_Petrel,
    },
    [SPEAKER_ADAORA] =
    {
        .name = _("Adaora"),
        .title = _("Tide Admin"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Adaora,
        .speakerPal = sSpeakerPal_Adaora,
    },
    [SPEAKER_ADAORA_FIRST_INTRO] =
    {
        .name = _("Adaora"),
        .title = _("Volunteer"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Adaora,
        .speakerPal = sSpeakerPal_Adaora,
    },
    [SPEAKER_BAIYA] =
    {
        .name = _("Baiya"),
        .title = _("{PKMN} Trainer"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Baiya,
        .speakerPal = sSpeakerPal_Baiya,
    },
    [SPEAKER_BAIYA_TIDE] =
    {
        .name = _("Baiya"),
        .title = _("The Tide"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Baiya,
        .speakerPal = sSpeakerPal_Baiya,
    },
    [SPEAKER_COLLECTOR] =
    {
        .name = _("Collector"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_BILL] =
    {
        .name = _("Bill"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_BOARDER] =
    {
        .name = _("Boarder"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Boarder,
        .speakerPal = sSpeakerPal_Boarder,
    },
    [SPEAKER_JUGGLER] =
    {
        .name = _("Juggler"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Juggler,
        .speakerPal = sSpeakerPal_Juggler,
    },
    [SPEAKER_KIMONO_GIRL] =
    {
        .name = _("Kimono Girl"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kimono_Girl,
        .speakerPal = sSpeakerPal_Kimono_Girl,
    },
    [SPEAKER_LASS] =
    {
        .name = _("Lass"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Lass,
        .speakerPal = sSpeakerPal_Lass,
    },
    [SPEAKER_MEDIUM] =
    {
        .name = _("Medium"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Medium,
        .speakerPal = sSpeakerPal_Medium,
    },
    [SPEAKER_MEDIUM_2] =
    {
        .name = _("Medium"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Medium_2,
        .speakerPal = sSpeakerPal_Medium_2,
    },
    [SPEAKER_POKE_MANIAC] =
    {
        .name = _("Poke Maniac"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Poke_Maniac,
        .speakerPal = sSpeakerPal_Poke_Maniac,
    },
    [SPEAKER_SAGE] =
    {
        .name = _("Sage"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Sage,
        .speakerPal = sSpeakerPal_Sage,
    },
    [SPEAKER_SUPER_NERD] =
    {
        .name = _("Super Nerd"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Super_Nerd,
        .speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_ACE_TRAINER_M] =
    {
        .name = _("Ace Trainer"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
        .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_ACE_TRAINER_F] =
    {
        .name = _("Ace Trainer"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },
    [SPEAKER_LI] =
    {
        .name = _("Li"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_AROMA_LADY] =
    {
        .name = _("Aroma Lady"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Aroma_Lady,
        .speakerPal = sSpeakerPal_Aroma_Lady,
    },
    [SPEAKER_BATTLE_GIRL] =
    {
        .name = _("Battle Girl"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Battle_Girl,
        .speakerPal = sSpeakerPal_Battle_Girl,
    },
    [SPEAKER_MOM] =
    {
        .name = _("Mom"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Mom,
        .speakerPal = sSpeakerPal_Mom,
    },
    [SPEAKER_WAITER] =
    {
        .name = _("Waiter"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Waiter,
        .speakerPal = sSpeakerPal_Waiter,
    },
    [SPEAKER_NEWS] =
    {
        .name = _("News"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_ALICIA] =
    {
        .name = _("{PLAYER}"),
        .title = _("{PKMN} Trainer"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Mom,
        .speakerPal = sSpeakerPal_Mom,
    },
    [SPEAKER_CHARLOTTE] =
    {
        .name = _("Charlotte"),
        .title = _("{PKMN} Trainer"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Silver,
        .speakerPal = sSpeakerPal_Silver,
    },
    [SPEAKER_CHARLOTTE_SHARPRISE] =
    {
        .name = _("Charlotte"),
        .title = _("Enforcer"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Silver,
        .speakerPal = sSpeakerPal_Silver,
    },
    [SPEAKER_GRUNT] =
    {
        .name = _("G.R.U.N.T."),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_MARKETING_STAFF] =
    {
        .name = _("Marketing Staff"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_ANNOUNCER] =
    {
        .name = _("Announcer"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_TALA] =
    {
        .name = _("Tala"),
        .title = _("Ex-Elite Four"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Will,
        .speakerPal = sSpeakerPal_Will,
    },
    [SPEAKER_CROWD_A] =
    {
        .name = _("Crowd Member"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
        .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_CROWD_B] =
    {
        .name = _("Crowd Member"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },
    [SPEAKER_CROWD_C] =
    {
        .name = _("Crowd Member"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_CROWD_D] =
    {
        .name = _("Crowd Member"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_RUPERT] =
    {
        .name = _("Rupert"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_OLIVER] =
    {
        .name = _("Oliver"),
        .title = _("Assistant"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Elm,
        .speakerPal = sSpeakerPal_Elm,
    },
    [SPEAKER_RESIDENT_A] =
    {
        .name = _("Resident"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
        .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_RESIDENT_B] =
    {
        .name = _("Resident"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },
    [SPEAKER_RESIDENT_C] =
    {
        .name = _("Resident"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_RESIDENT_D] =
    {
        .name = _("Resident"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_SIARL] =
    {
        .name =_("Siarl"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_FRANK] =
    {
        .name =_("Frank"),
        .title = _("Ex-Elite Four"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bruno,
        .speakerPal = sSpeakerPal_Bruno,
    },
    [SPEAKER_DAGMAR] =
    {
        .name = _("Dagmar"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_GURL] =
    {
        .name = _("Gurl"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_LEAGUE_STAFF_A] =
    {
        .name = _("League Staff"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_DAVID] =
    {
        .name = _("David"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Waiter,
        .speakerPal = sSpeakerPal_Waiter,
    },
    [SPEAKER_ISHAN] =
    {
        .name =_("Ishan"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_ROCKET_MEMBER_A] =
    {
        .name = _("The Tide Member"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_M,
        .speakerPal = sSpeakerPal_Rocket_Grunt_M,
    },
    [SPEAKER_ROCKET_MEMBER_B] =
    {
        .name = _("The Tide Member"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_LUCREZIA] =
    {
        .name = _("Lucrezia"),
        .title = _("SharpRise CEO"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Proton,
        .speakerPal = sSpeakerPal_Proton,
    },
    [SPEAKER_VITOMIR] =
    {
        .name = _("Vitomir"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_RABIA] =
    {
        .name = _("Rabia"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Rocket_Grunt_F,
        .speakerPal = sSpeakerPal_Rocket_Grunt_F,
    },
    [SPEAKER_LANDLORD] =
    {
        .name = _("Landlord"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Juggler,
        .speakerPal = sSpeakerPal_Juggler,
    },
    [SPEAKER_PROTEST_A] =
    {
        .name = _("Protestor"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Aroma_Lady,
        .speakerPal = sSpeakerPal_Aroma_Lady,
    },
    [SPEAKER_PROTEST_B] =
    {
        .name = _("Protestor"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Beauty,
        .speakerPal = sSpeakerPal_Beauty,
    },
    [SPEAKER_PROTEST_C] =
    {
        .name = _("Protestor"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_PROTEST_D] =
    {
        .name = _("Protestor"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_JULIUS] =
    {
        .name = _("Julius"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_MADISON] =
    {
        .name = _("Madison"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_STRANDED_A] =
    {
        .name = _("Stranded Citizen"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_STRANDED_B] =
    {
        .name = _("Stranded Citizen"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_RESIDENT_E] =
    {
        .name = _("Resident"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_RESIDENT_F] =
    {
        .name = _("Resident"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_MAGNUS] =
    {
        .name = _("Magnus"),
        .title = _("Ex-Elite Four"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Steven,
        .speakerPal = sSpeakerPal_Steven,
    },
    [SPEAKER_ELEANOR] =
    {
        .name = _("Eleanor"),
        .title = _("Ex-Elite Four"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Karen,
        .speakerPal = sSpeakerPal_Karen,
    },
    [SPEAKER_ALEKSANDER] =
    {
        .name = _("Aleksander"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_SUMMER] =
    {
        .name = _("Summer"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_MAID] =
    {
        .name = _("Maid"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_NEWS_B] =
    {
        .name = _("News"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_ARNAV] =
    {
        .name = _("Arnav"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_TECH] =
    {
        .name = _("Techie"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_CHIEF] =
    {
        .name = _("Chief"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },
    [SPEAKER_DOYLE] =
    {
        .name = _("Doyle"),
        .title = _("Ex-Gym Leader"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Brock,
        .speakerPal = sSpeakerPal_Brock,
    },
    [SPEAKER_IMELDA] =
    {
        .name = _("Imelda"),
        .title = _("Ex-Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Misty,
        .speakerPal = sSpeakerPal_Misty,
    },
    [SPEAKER_DOOR] =
    {
        .name = _("Door"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Misty,
        .speakerPal = sSpeakerPal_Misty,
    },
    [SPEAKER_TEODORO] =
    {
        .name = _("Teodoro"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_DUDLEY] =
    {
        .name = _("Dudley"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_CHERIE] =
    {
        .name = _("Cherie"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Medium,
        .speakerPal = sSpeakerPal_Medium,
    },
    [SPEAKER_MATTHEW] =
    {
        .name = _("Matthew"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_FANNY] =
    {
        .name = _("Fanny"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_CRAIG] =
    {
        .name = _("Craig"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_ANTONE] =
    {
        .name = _("Antone"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Boarder,
        .speakerPal = sSpeakerPal_Boarder,
    },
    [SPEAKER_ORI] =
    {
        .name = _("Ori"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Old_Woman,
        .speakerPal = sSpeakerPal_Old_Woman,
    },
    [SPEAKER_HIKO] =
    {
        .name = _("Hiko"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_POLICE] =
    {
        .name = _("Police"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_MACK] =
    {
        .name = _("Mack"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_TYZONN] =
    {
        .name = _("Tyzonn"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_WILL2] =
    {
        .name = _("Will"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_RONNY] =
    {
        .name = _("Ronny"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_DAX] =
    {
        .name = _("Dax"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_BRENNAN] =
    {
        .name = _("Brennan"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_ATTENDANT] =
    {
        .name = _("Exhibit Attendant"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_SPEAKER] =
    {
        .name = _("Speaker"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_GHOST] =
    {
        .name = _("Ghost"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_ISMAIL] =
    {
        .name = _("Ismail"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_SERGEY] =
    {
        .name = _("Sergey"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Collector,
        .speakerPal = sSpeakerPal_Collector,
    },
    [SPEAKER_REPORTER] =
    {
        .name = _("Reporter"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_STAN_PERLACIA_CITY] =
    {
        .name = _("Wallace Stan"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_TROLLEY_GUY] =
    {
        .name = _("Trolley Guy"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Man,
        .speakerPal = sSpeakerPal_Man,
    },
    [SPEAKER_HESTER] =
    {
        .name = _("Hester"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_SHARPRISECAPITAL_STAFF] =
    {
        .name = _("SharpRise Staff"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_TONALLI] =
    {
        .name = _("Tonalli"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_DRUMMER_B] =
    {
        .name = _("Drummer"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_DRUMMER_C] =
    {
        .name = _("Drummer"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_DRUMMER_D] =
    {
        .name = _("Drummer"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_LIIDIA] =
    {
        .name = _("Liidia"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_RAINER] =
    {
        .name = _("Rainer"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_BRONSON] =
    {
        .name = _("Bronson"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Lt_Surge,
        .speakerPal = sSpeakerPal_Lt_Surge,
    },
    [SPEAKER_SHASHI] =
    {
        .name = _("Shashi"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_LEAH] =
    {
        .name = _("Leah"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_GUARD] =
    {
        .name = _("Guard"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_SHOPKEEPER] =
    {
        .name = _("Shopkeeper"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Green,
        .speakerPal = sSpeakerPal_Green,
    },
    [SPEAKER_ELIOR] =
    {
        .name = _("Elior"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_LELAND] =
    {
        .name = _("Leland"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Old_Man,
        .speakerPal = sSpeakerPal_Old_Man,
    },
    [SPEAKER_AMBROGIO] =
    {
        .name = _("Ambrogio"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_JORIS] =
    {
        .name = _("Joris"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_NURSE] =
    {
        .name = _("Nurse"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Woman,
        .speakerPal = sSpeakerPal_Woman,
    },
    [SPEAKER_AUGUSTE] =
    {
        .name = _("Auguste"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },
    [SPEAKER_JULIA] =
    {
        .name = _("Julia"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },
    [SPEAKER_ALICE] =
    {
        .name = _("Alice"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FERRAN] =
    {
        .name = _("Ferran"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Poke_Maniac,
        .speakerPal = sSpeakerPal_Poke_Maniac,
    },
    [SPEAKER_ANTHONY] =
    {
        .name = _("Anthony"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_SEVENSISTERS_TINA] =
    {
        .name = _("Tina"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_F,
        .speakerPal = sSpeakerPal_Ace_Trainer_F,
    },

    [SPEAKER_SEVENSISTERS_PAUL] =
    {
        .name = _("Paul"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kurt,
        .speakerPal = sSpeakerPal_Kurt,
    },

    [SPEAKER_SEVENSISTERS_JON] =
    {
        .name = _("Jon"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Lass,
        .speakerPal = sSpeakerPal_Lass,
    },

    [SPEAKER_SEVENSISTERS_BRADLEY] =
    {
        .name = _("Bradley"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Li,
        .speakerPal = sSpeakerPal_Li,
    },

    [SPEAKER_SEVENSISTERS_JO] =
    {
        .name = _("Jo"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bird_Keeper,
        .speakerPal = sSpeakerPal_Bird_Keeper,
    },

    [SPEAKER_SEVENSISTERS_HANNAH] =
    {
        .name = _("Hannah"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bug_Catcher,
        .speakerPal = sSpeakerPal_Bug_Catcher,
    },

    [SPEAKER_SEVENSISTERS_RACHEL] =
    {
        .name = _("Rachel"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Battle_Girl,
        .speakerPal = sSpeakerPal_Battle_Girl,
    },
    [SPEAKER_KATHARINA] =
    {
        .name = _("Katharina"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Aroma_Lady,
        .speakerPal = sSpeakerPal_Aroma_Lady,
    },
    [SPEAKER_OFFICIANT] =
    {
        .name = _("Officiant"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Old_Woman,
        .speakerPal = sSpeakerPal_Old_Woman,
    },
    [SPEAKER_HELEN] =
    {
        .name = _("Helen"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Fisherman,
        .speakerPal = sSpeakerPal_Fisherman,
    },
    [SPEAKER_RUSTY] =
    {
        .name = _("Rusty"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kid,
        .speakerPal = sSpeakerPal_Kid,
    },
    [SPEAKER_WILLOW] =
    {
        .name = _("Willow"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_GRIFF] =
    {
        .name = _("Griff"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Youngster,
        .speakerPal = sSpeakerPal_Youngster,
    },
    [SPEAKER_LUNA] =
    {
        .name = _("Luna"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MAX] =
    {
        .name = _("Max"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bird_Keeper,
        .speakerPal = sSpeakerPal_Bird_Keeper,
    },
    [SPEAKER_BLAZE] =
    {
        .name = _("B-Boy Blaze"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Petrel,
        .speakerPal = sSpeakerPal_Petrel,
    },
    [SPEAKER_KIKI] =
    {
        .name = _("Krumpin' Kiki"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Blaine,
        .speakerPal = sSpeakerPal_Blaine,
    },
    [SPEAKER_EJ] =
    {
        .name = _("Electric EJ"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Poke_Maniac,
        .speakerPal = sSpeakerPal_Poke_Maniac,
    },
    [SPEAKER_WAITE] =
    {
        .name = _("Waite"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
        .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_DEBRA] =
    {
        .name = _("Debra"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Battle_Girl,
        .speakerPal = sSpeakerPal_Battle_Girl,
    },
    [SPEAKER_WALDRON] =
    {
        .name = _("Waldron"),
        .title = _("IT Employee"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Swimmer_M,
        .speakerPal = sSpeakerPal_Swimmer_M,
    },
    [SPEAKER_ISIDORE] =
    {
        .name = _("Isidore"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Black_Belt,
        .speakerPal = sSpeakerPal_Black_Belt,
    },
    [SPEAKER_FILIP] =
    {
        .name = _("Filip"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Petrel,
        .speakerPal = sSpeakerPal_Petrel,
    },
    [SPEAKER_GERTRUDE] =
    {
        .name =_("Gertrude"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_KHALEEL] =
    {
        .name = _("Khaleel"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Medium_2,
        .speakerPal = sSpeakerPal_Medium_2,
    },
    [SPEAKER_KITVOL] =
    {
        .name = _("Kitvol"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_NANCY] =
    {
        .name = _("Nancy"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Kurt,
        .speakerPal = sSpeakerPal_Kurt,
    },
    [SPEAKER_PANNEN] =
    {
        .name = _("Pannen"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Super_Nerd,
        .speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_MADRONE] =
    {
        .name = _("Professor Madrone"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Elm,
        .speakerPal = sSpeakerPal_Elm,
    },
    [SPEAKER_BUZZR_CEO] =
    {
        .name = _("Buzzr CEO"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Medium_2,
        .speakerPal = sSpeakerPal_Medium_2,
    },
    [SPEAKER_PRESTO_CEO] =
    {
        .name = _("Presto CEO"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Steven,
        .speakerPal = sSpeakerPal_Steven,
    },
    [SPEAKER_ARRIBA_DRIVER1] =
    {
        .name = _("Arriba Driver 1"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Brock,
        .speakerPal = sSpeakerPal_Brock,
    },
    [SPEAKER_ARRIBA_DRIVER2] =
    {
        .name = _("Arriba Driver 2"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Firebreather,
        .speakerPal = sSpeakerPal_Firebreather,
    },
    [SPEAKER_ARRIBA_DRIVER3] =
    {
        .name = _("Arriba Driver 3"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Boarder,
        .speakerPal = sSpeakerPal_Boarder,
    },
    [SPEAKER_PERSUASIVE_LANDLORD] =
    {
        .name = _("Landlord"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Blaine,
        .speakerPal = sSpeakerPal_Blaine,
    },
    [SPEAKER_PERSUASIVE_SIBLING] =
    {
        .name =_("Sibling"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Battle_Girl,
        .speakerPal = sSpeakerPal_Battle_Girl,
    },
    [SPEAKER_ARRIBA_GRUNT1] =
    {
        .name =_("Arriba Grunt 1"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Medium_2,
        .speakerPal = sSpeakerPal_Medium_2,
    },
    [SPEAKER_ARRIBA_GRUNT2] =
    {
        .name =_("Arriba Grunt 2"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_ARRIBA_CEO] =
    {
        .name = _("Arriba CEO"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Policeman,
        .speakerPal = sSpeakerPal_Policeman,
    },
    [SPEAKER_GYM_ATTENDANT] =
    {
        .name = _("Gym Attendant"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Shinzo,
        .speakerPal = sSpeakerPal_Shinzo,
    },
    [SPEAKER_IMPROV_1] =
    {
        .name = _("Improv 1"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Medium,
        .speakerPal = sSpeakerPal_Medium,
    },
    [SPEAKER_IMPROV_2] =
    {
        .name = _("Improv 2"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Girl,
        .speakerPal = sSpeakerPal_Girl,
    },
    [SPEAKER_IMPROV_3] =
    {
        .name = _("Improv 3"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Beauty,
        .speakerPal = sSpeakerPal_Beauty,
    },
    [SPEAKER_CHRIS] =
    {
        .name = _("Chris"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Green,
        .speakerPal = sSpeakerPal_Green,
    },
    [SPEAKER_LEE_PYRON] =
    {
        .name = _("Lee Pyron"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Lass,
        .speakerPal = sSpeakerPal_Lass,
    },
    [SPEAKER_PROF_TRACHY] =
    {
        .name = _("Prof Trachy"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Lass,
        .speakerPal = sSpeakerPal_Lass,
    },
    [SPEAKER_DRUG_HELMET_TESTER] =
    {
        .name = _("Drughelmettester"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Super_Nerd,
        .speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_VSDEOGUY] =
    {
        .name = _("Vsdeoguy"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Poke_Maniac,
        .speakerPal = sSpeakerPal_Poke_Maniac,
    },
    [SPEAKER_VSDEORESEARCHER] =
    {
        .name = _("Vsdeoresearcher"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Super_Nerd,
        .speakerPal = sSpeakerPal_Super_Nerd,
    },
    [SPEAKER_ANGELDELIVERYBIKERA] =
    {
        .name = _("AngeldeliverybikerA"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Biker,
        .speakerPal = sSpeakerPal_Biker,
    },
    [SPEAKER_ANGELDELIVERYBIKERB] =
    {
        .name = _("AngeldeliverybikerB"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Biker,
        .speakerPal = sSpeakerPal_Biker,
    },
    [SPEAKER_ANGELDELIVERYBIKERC] =
    {
        .name = _("AngeldeliverybikerC"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Biker,
        .speakerPal = sSpeakerPal_Biker,
    },
    [SPEAKER_ANGELDELIVERYBIKERD] =
    {
        .name = _("AngeldeliverybikerD"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Biker,
        .speakerPal = sSpeakerPal_Biker,
    },
    [SPEAKER_MELISSA] =
    {
        .name = _("Melissa"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_OLD_WOMAN] =
    {
        .name =_("Old Woman"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_STAN_PERLACIA_CITYB] =
    {
        .name =_("Stan"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_STAN_PERLACIA_CITYC] =
    {
        .name =_("Stan"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_STAN_PERLACIA_CITYD] =
    {
        .name =_("Stan"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_STAN_PERLACIA_CITYE] =
    {
        .name =_("Stan"),
        .title = _("???"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Erika,
        .speakerPal = sSpeakerPal_Erika,
    },
    [SPEAKER_BREEDINGPARENT] =
    {
        .name =_("Breedingparent"),
        .title= _("Parent Manager"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Brock,
        .speakerPal = sSpeakerPal_Brock,
    },
    [SPEAKER_BREEDINGEGG] =
    {
        .name =_("BreedingEgg"),
        .title= _("Egg Manager"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Aroma_Lady,
        .speakerPal = sSpeakerPal_Aroma_Lady,
    },
    [SPEAKER_BREEDINGGENE] =
    {
        .name =_("Gene"),
        .title= _("Stat Manager"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Blaine,
        .speakerPal = sSpeakerPal_Blaine,
    },
    [SPEAKER_PARKRANGER] =
    {
        .name =_("Parkranger"),
        .title= _("Park Ranger"),
        .gender = NON_BINARY,
        .speakerIcon = gSpeakerIcon_Green,
        .speakerPal = sSpeakerPal_Green,
    },
    [SPEAKER_ADAM_UNKNOWN] =
    {
      .name =_("???"),
      .title= _("???"),
      .gender = MALE,
      .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
      .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_ADAM] =
    {
      .name =_("Champion"),
      .title= _("Adam"),
      .gender = MALE,
      .speakerIcon = gSpeakerIcon_Ace_Trainer_M,
      .speakerPal = sSpeakerPal_Ace_Trainer_M,
    },
    [SPEAKER_ELEANOR_PAST] =
    {
      .name = _("Eleanor"),
      .title = _("Elite Four"),
      .gender = FEMALE,
      .speakerIcon = gSpeakerIcon_Karen,
      .speakerPal = sSpeakerPal_Karen,
    },
    [SPEAKER_FRANK_PAST] =
    {
      .name =_("Frank"),
      .title = _("Elite Four"),
      .gender = MALE,
      .speakerIcon = gSpeakerIcon_Bruno,
      .speakerPal = sSpeakerPal_Bruno,
    },
    [SPEAKER_NOPOMOD] =
    {
      .name =_("NoPoMod"),
      .title = _("???"),
      .gender = MALE,
      .speakerIcon = gSpeakerIcon_Bill,
      .speakerPal = sSpeakerPal_Bill,
    }
  };
