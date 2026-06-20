#include "main.h"
#include "nameplate.h"
#include "constants/nameplate.h"

static const u32 gSpeakerIcon_Test[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/test.png", ".4bpp");
static const u16 sSpeakerPal_Test[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/blaine.png", ".gbapal");

static const u32 gSpeakerIcon_Blaine[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/blaine.png", ".4bpp");
static const u16 sSpeakerPal_Blaine[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/blaine.png", ".gbapal");

static const u32 gSpeakerIcon_Brock[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/brock.png", ".4bpp");
static const u16 sSpeakerPal_Brock[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/brock.png", ".gbapal");

static const u32 gSpeakerIcon_Bruno[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bruno.png", ".4bpp");
static const u16 sSpeakerPal_Bruno[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bruno.png", ".gbapal");

static const u32 gSpeakerIcon_Bug_Catcher[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bug_catcher.png", ".4bpp");
static const u16 sSpeakerPal_Bug_Catcher[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bug_catcher.png", ".gbapal");

static const u32 gSpeakerIcon_Shinzo[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/shinzo.png", ".4bpp");
static const u16 sSpeakerPal_Shinzo[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/shinzo.png", ".gbapal");

static const u32 gSpeakerIcon_Neriene[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/neriene.png", ".4bpp");
static const u16 sSpeakerPal_Neriene[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/neriene.png", ".gbapal");

static const u32 gSpeakerIcon_AmiArgento[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/amiargento.png", ".4bpp");
static const u16 sSpeakerPal_AmiArgento[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/amiargento.png", ".gbapal");

static const u32 gSpeakerIcon_Elm[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/elm.png", ".4bpp");
static const u16 sSpeakerPal_Elm[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/elm.png", ".gbapal");

static const u32 gSpeakerIcon_Erika[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/erika.png", ".4bpp");
static const u16 sSpeakerPal_Erika[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/erika.png", ".gbapal");

static const u32 gSpeakerIcon_Belen[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/belen.png", ".4bpp");
static const u16 sSpeakerPal_Belen[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/belen.png", ".gbapal");

static const u32 gSpeakerIcon_Fisherman[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/fisherman.png", ".4bpp");
static const u16 sSpeakerPal_Fisherman[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/fisherman.png", ".gbapal");

static const u32 gSpeakerIcon_Vigrim[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/vigrim.png", ".4bpp");
static const u16 sSpeakerPal_Vigrim[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/vigrim.png", ".gbapal");

static const u32 gSpeakerIcon_Girl[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/girl.png", ".4bpp");
static const u16 sSpeakerPal_Girl[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/girl.png", ".gbapal");

static const u32 gSpeakerIcon_Green[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/green.png", ".4bpp");
static const u16 sSpeakerPal_Green[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/green.png", ".gbapal");

static const u32 gSpeakerIcon_Janine[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/janine.png", ".4bpp");
static const u16 sSpeakerPal_Janine[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/janine.png", ".gbapal");

static const u32 gSpeakerIcon_Dimu[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/dimu.png", ".4bpp");
static const u16 sSpeakerPal_Dimu[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/dimu.png", ".gbapal");

static const u32 gSpeakerIcon_Karen[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/karen.png", ".4bpp");
static const u16 sSpeakerPal_Karen[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/karen.png", ".gbapal");

static const u32 gSpeakerIcon_Kid[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/kid.png", ".4bpp");
static const u16 sSpeakerPal_Kid[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/kid.png", ".gbapal");

static const u32 gSpeakerIcon_Keiying[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/keiying.png", ".4bpp");
static const u16 sSpeakerPal_Keiying[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/keiying.png", ".gbapal");

static const u32 gSpeakerIcon_Kurt[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/kurt.png", ".4bpp");
static const u16 sSpeakerPal_Kurt[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/kurt.png", ".gbapal");

static const u32 gSpeakerIcon_Lance[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/lance.png", ".4bpp");
static const u16 sSpeakerPal_Lance[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/lance.png", ".gbapal");

static const u32 gSpeakerIcon_Lt_Surge[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/lt_surge.png", ".4bpp");
static const u16 sSpeakerPal_Lt_Surge[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/lt_surge.png", ".gbapal");

static const u32 gSpeakerIcon_Man[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/man.png", ".4bpp");
static const u16 sSpeakerPal_Man[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/man.png", ".gbapal");

static const u32 gSpeakerIcon_Misty[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/misty.png", ".4bpp");
static const u16 sSpeakerPal_Misty[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/misty.png", ".gbapal");

static const u32 gSpeakerIcon_Pua[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/pua.png", ".4bpp");
static const u16 sSpeakerPal_Pua[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/pua.png", ".gbapal");

static const u32 gSpeakerIcon_Old_Man[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/old_man.png", ".4bpp");
static const u16 sSpeakerPal_Old_Man[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/old_man.png", ".gbapal");

static const u32 gSpeakerIcon_Old_Woman[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/old_woman.png", ".4bpp");
static const u16 sSpeakerPal_Old_Woman[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/old_woman.png", ".gbapal");

static const u32 gSpeakerIcon_Policeman[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/policeman.png", ".4bpp");
static const u16 sSpeakerPal_Policeman[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/policeman.png", ".gbapal");

static const u32 gSpeakerIcon_BD[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bd.png", ".4bpp");
static const u16 sSpeakerPal_BD[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bd.png", ".gbapal");

static const u32 gSpeakerIcon_Red[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/red.png", ".4bpp");
static const u16 sSpeakerPal_Red[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/red.png", ".gbapal");

static const u32 gSpeakerIcon_Rocket_Grunt_F[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/rocket_grunt_f.png", ".4bpp");
static const u16 sSpeakerPal_Rocket_Grunt_F[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/rocket_grunt_f.png", ".gbapal");

static const u32 gSpeakerIcon_Rocket_Grunt_M[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/rocket_grunt_m.png", ".4bpp");
static const u16 sSpeakerPal_Rocket_Grunt_M[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/rocket_grunt_m.png", ".gbapal");

static const u32 gSpeakerIcon_Ramesh[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/ramesh.png", ".4bpp");
static const u16 sSpeakerPal_Ramesh[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/ramesh.png", ".gbapal");

static const u32 gSpeakerIcon_Silver[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/silver.png", ".4bpp");
static const u16 sSpeakerPal_Silver[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/silver.png", ".gbapal");

static const u32 gSpeakerIcon_Steven[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/steven.png", ".4bpp");
static const u16 sSpeakerPal_Steven[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/steven.png", ".gbapal");

static const u32 gSpeakerIcon_Swimmer_M[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/swimmer_m.png", ".4bpp");
static const u16 sSpeakerPal_Swimmer_M[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/swimmer_m.png", ".gbapal");

static const u32 gSpeakerIcon_Emrys[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/emrys.png", ".4bpp");
static const u16 sSpeakerPal_Emrys[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/emrys.png", ".gbapal");

static const u32 gSpeakerIcon_Will[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/will.png", ".4bpp");
static const u16 sSpeakerPal_Will[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/will.png", ".gbapal");

static const u32 gSpeakerIcon_Woman[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/woman.png", ".4bpp");
static const u16 sSpeakerPal_Woman[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/woman.png", ".gbapal");

static const u32 gSpeakerIcon_Youngster[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/youngster.png", ".4bpp");
static const u16 sSpeakerPal_Youngster[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/youngster.png", ".gbapal");

//
static const u32 gSpeakerIcon_Ace_Trainer_F[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/ace_trainer_f.png", ".4bpp");
static const u16 sSpeakerPal_Ace_Trainer_F[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/ace_trainer_f.png", ".gbapal");

static const u32 gSpeakerIcon_Ace_Trainer_M[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/ace_trainer_m.png", ".4bpp");
static const u16 sSpeakerPal_Ace_Trainer_M[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/ace_trainer_m.png", ".gbapal");

static const u32 gSpeakerIcon_Baiya[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/baiya.png", ".4bpp");
static const u16 sSpeakerPal_Baiya[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/baiya.png", ".gbapal");

static const u32 gSpeakerIcon_Adaora[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/adaora.png", ".4bpp");
static const u16 sSpeakerPal_Adaora[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/adaora.png", ".gbapal");

static const u32 gSpeakerIcon_Aroma_Lady[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/aroma_lady.png", ".4bpp");
static const u16 sSpeakerPal_Aroma_Lady[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/aroma_lady.png", ".gbapal");

static const u32 gSpeakerIcon_Battle_Girl[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/battle_girl.png", ".4bpp");
static const u16 sSpeakerPal_Battle_Girl[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/battle_girl.png", ".gbapal");

static const u32 gSpeakerIcon_Beauty[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/beauty.png", ".4bpp");
static const u16 sSpeakerPal_Beauty[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/beauty.png", ".gbapal");

static const u32 gSpeakerIcon_Bill[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bill.png", ".4bpp");
static const u16 sSpeakerPal_Bill[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bill.png", ".gbapal");

static const u32 gSpeakerIcon_Bird_Keeper[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bird_keeper.png", ".4bpp");
static const u16 sSpeakerPal_Bird_Keeper[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bird_keeper.png", ".gbapal");

static const u32 gSpeakerIcon_Black_Belt[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/black_belt.png", ".4bpp");
static const u16 sSpeakerPal_Black_Belt[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/black_belt.png", ".gbapal");

static const u32 gSpeakerIcon_Boarder[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/boarder.png", ".4bpp");
static const u16 sSpeakerPal_Boarder[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/boarder.png", ".gbapal");

static const u32 gSpeakerIcon_Collector[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/collector.png", ".4bpp");
static const u16 sSpeakerPal_Collector[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/collector.png", ".gbapal");

static const u32 gSpeakerIcon_Eusine[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/eusine.png", ".4bpp");
static const u16 sSpeakerPal_Eusine[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/eusine.pal", ".gbapal");

static const u32 gSpeakerIcon_Juggler[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/juggler.png", ".4bpp");
static const u16 sSpeakerPal_Juggler[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/juggler.png", ".gbapal");

static const u32 gSpeakerIcon_Kimono_Girl[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/kimono_girl.png", ".4bpp");
static const u16 sSpeakerPal_Kimono_Girl[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/kimono_girl.png", ".gbapal");

static const u32 gSpeakerIcon_Lass[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/lass.png", ".4bpp");
static const u16 sSpeakerPal_Lass[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/lass.png", ".gbapal");

static const u32 gSpeakerIcon_Li[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/li.png", ".4bpp");
static const u16 sSpeakerPal_Li[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/li.png", ".gbapal");

static const u32 gSpeakerIcon_Medium[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/medium.png", ".4bpp");
static const u16 sSpeakerPal_Medium[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/medium.png", ".gbapal");

static const u32 gSpeakerIcon_Medium_2[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/medium_2.png", ".4bpp");
static const u16 sSpeakerPal_Medium_2[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/medium_2.png", ".gbapal");

static const u32 gSpeakerIcon_Mom[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/mom.png", ".4bpp");
static const u16 sSpeakerPal_Mom[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/mom.png", ".gbapal");

static const u32 gSpeakerIcon_Petrel[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/petrel.png", ".4bpp");
static const u16 sSpeakerPal_Petrel[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/petrel.png", ".gbapal");

static const u32 gSpeakerIcon_Poke_Maniac[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/poke_maniac.png", ".4bpp");
static const u16 sSpeakerPal_Poke_Maniac[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/poke_maniac.png", ".gbapal");

static const u32 gSpeakerIcon_Proton[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/proton.png", ".4bpp");
static const u16 sSpeakerPal_Proton[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/proton.png", ".gbapal");

static const u32 gSpeakerIcon_Sage[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/sage.png", ".4bpp");
static const u16 sSpeakerPal_Sage[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/sage.png", ".gbapal");

static const u32 gSpeakerIcon_Super_Nerd[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/super_nerd.png", ".4bpp");
static const u16 sSpeakerPal_Super_Nerd[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/super_nerd.png", ".gbapal");

static const u32 gSpeakerIcon_Waiter[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/waiter.png", ".4bpp");
static const u16 sSpeakerPal_Waiter[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/waiter.png", ".gbapal");

static const u32 gSpeakerIcon_Firebreather[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/firebreather.png", ".4bpp");
static const u16 sSpeakerPal_Firebreather[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/firebreather.png", ".gbapal");

static const u32 gSpeakerIcon_Biker[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/60.png", ".4bpp");
static const u16 sSpeakerPal_Biker[]  = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/60.png", ".gbapal");

static const u32 gSpeakerIcon_Melissa[] = INCGFX_U32("graphics/ui_menus/msgbox/character_heads/erika.png", ".4bpp");
static const u16 sSpeakerPal_Melissa[] = INCGFX_U16("graphics/ui_menus/msgbox/character_heads/erika.png", ".gbapal");

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
    [SPEAKER_LUCREZIA_BEFORE] =
    {
        .name = COMPOUND_STRING("Lucrezia"),
        .title = COMPOUND_STRING("League Commissioner"),
        .gender = FEMALE,
        .speakerIcon = gSpeakerIcon_Proton,
        .speakerPal = sSpeakerPal_Proton,
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
    [SPEAKER_HUNGRYPARENT] =
    {
        .name = COMPOUND_STRING("Hungryparent"),
        .title = COMPOUND_STRING("Adult"),
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
    [SPEAKER_WILDFIRERISKWORKER] =
    {
        .name = COMPOUND_STRING("Wildfireriskworker"),
        .title = COMPOUND_STRING("Toxel Energy Enployee"),
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

    [SPEAKER_BODEGABURNOUTDELIVERYSTRENGTHH] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverystrengthh"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYA] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverya"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYB] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliveryb"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYCUTC] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverycutc"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYSTRENGTHI] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverystrengthi"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYROCKSMASHF] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliveryrocksmashf"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYWHIRLPOOLJ] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverywhirlpoolj"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYROCKSMASHG] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliveryrocksmashg"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYCUTD] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverycutd"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYCUTE] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverycute"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTRESCUEROCKSMASHO] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuerocksmasho"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTRESCUECUTM] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuecutm"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTRESCUESTRENGTHQ] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuestrengthq"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTRESCUEDIVEN] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuediven"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTRESCUEK] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuek"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTRESCUEROCKSMASHP] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuerocksmashp"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTRESCUEL] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuel"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTRESCUEWHIRLPOOLS] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuewhirlpools"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_BODEGABURNOUTRESCUESTRENGTHR] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuestrengthr"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERA] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherA"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERB] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherB"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERC] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherC"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERD] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherD"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERE] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherE"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERF] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherF"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERG] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherG"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMEXPEDITORA] =
    {
        .name = COMPOUND_STRING("MermerezagymexpeditorA"),
        .title = COMPOUND_STRING("Needles Expeditor"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMEXPEDITORB] =
    {
        .name = COMPOUND_STRING("MermerezagymexpeditorB"),
        .title = COMPOUND_STRING("Needles Expeditor"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMEXPEDITORC] =
    {
        .name = COMPOUND_STRING("MermerezagymexpeditorC"),
        .title = COMPOUND_STRING("Needles Expeditor"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKA] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookA"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKB] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookB"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKC] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookC"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKD] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookD"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKE] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookE"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKF] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookF"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKG] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookG"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFA] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefA"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFB] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefB"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFC] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefC"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFD] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefD"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFE] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefE"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFF] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefF"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFG] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefG"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFH] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefH"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFI] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefI"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFJ] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefJ"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMSERVERA] =
    {
        .name = COMPOUND_STRING("MermerezagymserverA"),
        .title = COMPOUND_STRING("Needles Server"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMSERVERB] =
    {
        .name = COMPOUND_STRING("MermerezagymserverB"),
        .title = COMPOUND_STRING("Needles Server"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMSERVERC] =
    {
        .name = COMPOUND_STRING("MermerezagymserverC"),
        .title = COMPOUND_STRING("Needles Server"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MERMEREZAGYMHOST] =
    {
        .name = COMPOUND_STRING("Mermerezagymchefhost"),
        .title = COMPOUND_STRING("Needles Host"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_032E8AC9] =
    {
        .name = COMPOUND_STRING("032E8AC9"),
        .title = COMPOUND_STRING("Mermereza Gym Trainer"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_0389363C] =
    {
        .name = COMPOUND_STRING("0389363C"),
        .title = COMPOUND_STRING("Mermereza Gym Trainer"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_040CEA33] =
    {
        .name = COMPOUND_STRING("040CEA33"),
        .title = COMPOUND_STRING("Mermereza Gym Trainer"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MOCHISHOPKEEPER] =
    {
        .name = COMPOUND_STRING("Mochishopkeeper"),
        .title = COMPOUND_STRING("Shopkeeper"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_DIGGINGINVESTTIGATOR] =
    {
        .name = COMPOUND_STRING("Digginginvesttigator"),
        .title = COMPOUND_STRING("Private Investigator"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_DIGGINGTIDEMEMBERA] =
    {
        .name = COMPOUND_STRING("DiggingtidememberA"),
        .title = COMPOUND_STRING("Comrade"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_DIGGINGTIDEMEMBERB] =
    {
        .name = COMPOUND_STRING("DiggingtidememberB"),
        .title = COMPOUND_STRING("Comrade"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ADAORAPARENT] =
    {
        .name = COMPOUND_STRING("Adaoraparent"),
        .title = COMPOUND_STRING("Adaora's Parent"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_RETURNDOLLCHILD] =
    {
        .name = COMPOUND_STRING("Returndollchild"),
        .title = COMPOUND_STRING("Child"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FREETHEINNOCENTCOMRADEA] =
    {
        .name = COMPOUND_STRING("Freetheinnocentcomradea"),
        .title = COMPOUND_STRING("Comrade"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FINDTHEGUILTYVICTIMB] =
    {
        .name = COMPOUND_STRING("Findtheguiltyvictimb"),
        .title = COMPOUND_STRING("Comrade"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FREETHEINNOCENTHIKERC] =
    {
        .name = COMPOUND_STRING("Freetheinnocenthikerc"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FREETHEINNOCENTHIKERD] =
    {
        .name = COMPOUND_STRING("Freetheinnocenthikerd"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FREETHEINNOCENTHIKERF] =
    {
        .name = COMPOUND_STRING("Freetheinnocenthikerf"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FREETHEINNOCENTHIKERG] =
    {
        .name = COMPOUND_STRING("Freetheinnocenthikerg"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FINDTHEGUILTYPLANTH] =
    {
        .name = COMPOUND_STRING("Findtheguiltyplanth"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FREETHEINNOCENTBOBACASHIERI] =
    {
        .name = COMPOUND_STRING("Freetheinnocentbobacashieri"),
        .title = COMPOUND_STRING("Shopkeeper"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_FINDTHEGUILTYFRIENDI] =
    {
        .name = COMPOUND_STRING("FindtheguilityfriendI"),
        .title = COMPOUND_STRING("Triathlete"),
        .gender = MALE,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_RESTAURANTEXPANSIONBUSSER] =
    {
        .name = COMPOUND_STRING("Restaurantexpansionbusser"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_RESTAURANTEXPANSIONHOSTESS] =
    {
        .name = COMPOUND_STRING("Restaurantexpansionhostess"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_RESTAURANTEXPANSIONCHEF] =
    {
        .name = COMPOUND_STRING("Restaurantexpansionchef"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_RESTAURANTEXPANSIONLINECOOK] =
    {
        .name = COMPOUND_STRING("Restaurantexpansionlinecook"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ESPULEETRADEPERSONA] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonA"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ESPULEETRADEPERSONB] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonB"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ESPULEETRADEPERSONC] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonC"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ESPULEETRADEPERSOND] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonD"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ESPULEETRADEPERSONE] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonE"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ESPULEETRADEPERSONF] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonF"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MONTY] =
    {
        .name = COMPOUND_STRING("Monty"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_MONTYOPP] =
    {
        .name = COMPOUND_STRING("Montyopp"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ARCADEMINI] =
    {
        .name = COMPOUND_STRING("Arcademini"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },

    [SPEAKER_KEVIN] =
    {
        .name = COMPOUND_STRING("Kevin"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ZAC] =
    {
        .name = COMPOUND_STRING("Zac"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_JOHNNY] =
    {
        .name = COMPOUND_STRING("Johnny"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ADAM] =
    {
        .name = COMPOUND_STRING("Adam"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_ANDREAS] =
    {
        .name = COMPOUND_STRING("Andreas"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_JUSTIN] =
    {
        .name = COMPOUND_STRING("Justin"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_JEFFREY] =
    {
        .name = COMPOUND_STRING("Jeffrey"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_DAJUAN] =
    {
        .name = COMPOUND_STRING("Dajuan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_JUAN] =
    {
        .name = COMPOUND_STRING("Juan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_JASON] =
    {
        .name = COMPOUND_STRING("Jason"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVTROUPEA] =
    {
        .name = COMPOUND_STRING("ImprovtroupeA"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVTROUPEB] =
    {
        .name = COMPOUND_STRING("ImprovtroupeB"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVTROUPEC] =
    {
        .name = COMPOUND_STRING("ImprovtroupeC"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVAUDIENCED] =
    {
        .name = COMPOUND_STRING("ImprovaudienceD"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVAUDIENCEE] =
    {
        .name = COMPOUND_STRING("ImprovaudienceE"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVAUDIENCEF] =
    {
        .name = COMPOUND_STRING("ImprovaudienceF"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVAUDIENCEG] =
    {
        .name = COMPOUND_STRING("ImprovaudienceG"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVAUDIENCEH] =
    {
        .name = COMPOUND_STRING("ImprovaudienceH"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVTROUPEX] =
    {
        .name = COMPOUND_STRING("ImprovtroupeX"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVTROUPEY] =
    {
        .name = COMPOUND_STRING("ImprovtroupeY"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_IMPROVTROUPEZ] =
    {
        .name = COMPOUND_STRING("ImprovtroupeZ"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_TEACHTRAINERFISHA] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishA"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_TEACHTRAINERFISHB] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishB"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_TEACHTRAINERFISHC] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishC"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_TEACHTRAINERFISHD] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishD"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_TEACHTRAINERFISHE] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishE"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
    [SPEAKER_TEACHTRAINERFISHF] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishF"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = gSpeakerIcon_Bill,
        .speakerPal = sSpeakerPal_Bill,
    },
};
