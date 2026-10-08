#include "main.h"
#include "nameplate.h"
#include "constants/nameplate.h"

static const struct SpeakerIconData sSpeakerIconData[SPEAKER_ICON_COUNT] =
{
    [SPEAKER_ICON_TEST] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/test.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/blaine.png", ".gbapal"),
    },
    [SPEAKER_ICON_BLAINE] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/blaine.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/blaine.png", ".gbapal"),
    },
    [SPEAKER_ICON_BROCK] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/brock.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/brock.png", ".gbapal"),
    },
    [SPEAKER_ICON_BRUNO] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bruno.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bruno.png", ".gbapal"),
    },
    [SPEAKER_ICON_BUG_CATCHER] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bug_catcher.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bug_catcher.png", ".gbapal"),
    },
    [SPEAKER_ICON_SHINZO] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/shinzo.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/shinzo.png", ".gbapal"),
    },
    [SPEAKER_ICON_NERIENE] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/neriene.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/neriene.png", ".gbapal"),
    },
    [SPEAKER_ICON_AMIARGENTO] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/amiargento.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/amiargento.png", ".gbapal"),
    },
    [SPEAKER_ICON_ELM] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/elm.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/elm.png", ".gbapal"),
    },
    [SPEAKER_ICON_ERIKA] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/erika.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/erika.png", ".gbapal"),
    },
    [SPEAKER_ICON_BELEN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/belen.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/belen.png", ".gbapal"),
    },
    [SPEAKER_ICON_FISHERMAN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/fisherman.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/fisherman.png", ".gbapal"),
    },
    [SPEAKER_ICON_VIGRIM] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/vigrim.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/vigrim.png", ".gbapal"),
    },
    [SPEAKER_ICON_GIRL] =
    {
        .speakerIcon =(const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/girl.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/girl.png", ".gbapal"),
    },
    [SPEAKER_ICON_GREEN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/green.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/green.png", ".gbapal"),
    },
    [SPEAKER_ICON_JANINE] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/janine.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/janine.png", ".gbapal"),
    },
    [SPEAKER_ICON_DIMU] =
    {
        .speakerIcon =(const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/dimu.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/dimu.png", ".gbapal"),
    },
    [SPEAKER_ICON_KAREN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/karen.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/karen.png", ".gbapal"),
    },
    [SPEAKER_ICON_KID] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/kid.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/kid.png", ".gbapal"),
    },
    [SPEAKER_ICON_KEIYING] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/keiying.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/keiying.png", ".gbapal"),
    },
    [SPEAKER_ICON_KURT] =
    {
        .speakerIcon =(const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/kurt.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/kurt.png", ".gbapal"),
    },
    [SPEAKER_ICON_LANCE] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/lance.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/lance.png", ".gbapal"),
    },
    [SPEAKER_ICON_LT_SURGE] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/lt_surge.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/lt_surge.png", ".gbapal"),
    },
    [SPEAKER_ICON_MAN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/man.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/man.png", ".gbapal"),
    },
    [SPEAKER_ICON_MISTY] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/misty.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/misty.png", ".gbapal"),
    },
    [SPEAKER_ICON_PUA] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/pua.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/pua.png", ".gbapal"),
    },
    [SPEAKER_ICON_OLD_MAN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/old_man.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/old_man.png", ".gbapal"),
    },
    [SPEAKER_ICON_OLD_WOMAN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/old_woman.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/old_woman.png", ".gbapal"),
    },
    [SPEAKER_ICON_POLICEMAN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/policeman.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/policeman.png", ".gbapal"),
    },
    [SPEAKER_ICON_BD] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bd.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bd.png", ".gbapal"),
    },
    [SPEAKER_ICON_RED] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/red.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/red.png", ".gbapal"),
    },
    [SPEAKER_ICON_ROCKET_GRUNT_F] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/rocket_grunt_f.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/rocket_grunt_f.png", ".gbapal"),
    },
    [SPEAKER_ICON_ROCKET_GRUNT_M] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/rocket_grunt_m.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/rocket_grunt_m.png", ".gbapal"),
    },
    [SPEAKER_ICON_RAMESH] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/ramesh.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/ramesh.png", ".gbapal"),
    },
    [SPEAKER_ICON_SILVER] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/silver.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/silver.png", ".gbapal"),
    },
    [SPEAKER_ICON_STEVEN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/steven.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/steven.png", ".gbapal"),
    },
    [SPEAKER_ICON_SWIMMER_M] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/swimmer_m.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/swimmer_m.png", ".gbapal"),
    },
    [SPEAKER_ICON_EMRYS] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/emrys.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/emrys.png", ".gbapal"),
    },
    [SPEAKER_ICON_WILL] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/will.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/will.png", ".gbapal"),
    },
    [SPEAKER_ICON_WOMAN] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/woman.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/woman.png", ".gbapal"),
    },
    [SPEAKER_ICON_YOUNGSTER] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/youngster.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/youngster.png", ".gbapal"),
    },
    [SPEAKER_ICON_ACE_TRAINER_F] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/ace_trainer_f.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/ace_trainer_f.png", ".gbapal"),
    },
    [SPEAKER_ICON_ACE_TRAINER_M] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/ace_trainer_m.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/ace_trainer_m.png", ".gbapal"),
    },
    [SPEAKER_ICON_BAIYA] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/baiya.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/baiya.png", ".gbapal"),
    },
    [SPEAKER_ICON_ADAORA] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/adaora.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/adaora.png", ".gbapal"),
    },
    [SPEAKER_ICON_AROMA_LADY] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/aroma_lady.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/aroma_lady.png", ".gbapal"),
    },
    [SPEAKER_ICON_BATTLE_GIRL] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/battle_girl.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/battle_girl.png", ".gbapal"),
    },
    [SPEAKER_ICON_BEAUTY] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/beauty.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/beauty.png", ".gbapal"),
    },
    [SPEAKER_ICON_BILL] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bill.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bill.png", ".gbapal"),
    },
    [SPEAKER_ICON_BIRD_KEEPER] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/bird_keeper.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/bird_keeper.png", ".gbapal"),
    },
    [SPEAKER_ICON_BLACK_BELT] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/black_belt.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/black_belt.png", ".gbapal"),
    },
    [SPEAKER_ICON_BOARDER] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/boarder.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/boarder.png", ".gbapal"),
    },
    [SPEAKER_ICON_COLLECTOR] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/collector.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/collector.png", ".gbapal"),
    },
    [SPEAKER_ICON_EUSINE] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/eusine.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/eusine.pal", ".gbapal"),
    },
    [SPEAKER_ICON_JUGGLER] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/juggler.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/juggler.png", ".gbapal"),
    },
    [SPEAKER_ICON_KIMONO_GIRL] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/kimono_girl.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/kimono_girl.png", ".gbapal"),
    },
    [SPEAKER_ICON_LASS] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/lass.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/lass.png", ".gbapal"),
    },
    [SPEAKER_ICON_LI] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/li.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/li.png", ".gbapal"),
    },
    [SPEAKER_ICON_MEDIUM] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/medium.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/medium.png", ".gbapal"),
    },
    [SPEAKER_ICON_MEDIUM_2] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/medium_2.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/medium_2.png", ".gbapal"),
    },
    [SPEAKER_ICON_MOM] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/mom.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/mom.png", ".gbapal"),
    },
    [SPEAKER_ICON_PETREL] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/petrel.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/petrel.png", ".gbapal"),
    },
    [SPEAKER_ICON_POKE_MANIAC] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/poke_maniac.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/poke_maniac.png", ".gbapal"),
    },
    [SPEAKER_ICON_PROTON] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/proton.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/proton.png", ".gbapal"),
    },
    [SPEAKER_ICON_SAGE] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/sage.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/sage.png", ".gbapal"),
    },
    [SPEAKER_ICON_SUPER_NERD] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/super_nerd.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/super_nerd.png", ".gbapal"),
    },
    [SPEAKER_ICON_WAITER] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/waiter.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/waiter.png", ".gbapal"),
    },
    [SPEAKER_ICON_FIREBREATHER] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/firebreather.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/firebreather.png", ".gbapal"),
    },
    [SPEAKER_ICON_BIKER] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/60.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/60.png", ".gbapal"),
    },
    [SPEAKER_ICON_MELISSA] =
    {
        .speakerIcon = (const u32[])INCGFX_U32("graphics/ui_menus/msgbox/character_heads/erika.png", ".4bpp"),
        .speakerPal = (const u16[])INCGFX_U16("graphics/ui_menus/msgbox/character_heads/erika.png", ".gbapal"),
    },
};

static const struct SpeakerData sSpeakerData[NUM_SPEAKERS] =
{
    [SPEAKER_TEST] =
    {
        .name = COMPOUND_STRING("Domimic"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_TEST,
    },
    [SPEAKER_DEFAULT] =
    {
        .name = COMPOUND_STRING("NPC"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_M,
    },
    [SPEAKER_DIMU] =
    {
        .name = COMPOUND_STRING("Dimu"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_DIMU,
    },
    [SPEAKER_BLAINE] =
    {
        .name = COMPOUND_STRING("Blaine"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLAINE,
    },
    [SPEAKER_BROCK] =
    {
        .name = COMPOUND_STRING("Brock"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BROCK,
    },
    [SPEAKER_BRUNO] =
    {
        .name = COMPOUND_STRING("Bruno"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BRUNO,
    },
    [SPEAKER_BUG_CATCHER] =
    {
        .name = COMPOUND_STRING("Bug Catcher"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BUG_CATCHER,
    },
    [SPEAKER_SHINZO] =
    {
        .name = COMPOUND_STRING("Shinzo"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_SHINZO,
    },
    [SPEAKER_NERIENE] =
    {
        .name = COMPOUND_STRING("Neriene"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_NERIENE,
    },
    [SPEAKER_AMIARGENTO] =
    {
        .name = COMPOUND_STRING("Ami Argento"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_AMIARGENTO,
    },
    [SPEAKER_ELM] =
    {
        .name = COMPOUND_STRING("Elm"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ELM,
    },
    [SPEAKER_ERIKA] =
    {
        .name = COMPOUND_STRING("Erika"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ERIKA,
    },
    [SPEAKER_BELEN] =
    {
        .name = COMPOUND_STRING("Belen"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_BELEN,
    },
    [SPEAKER_FISHERMAN] =
    {
        .name = COMPOUND_STRING("Fisherman"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FISHERMAN,
    },
    [SPEAKER_VIGRIM] =
    {
        .name = COMPOUND_STRING("Vigrim"),
        .title = COMPOUND_STRING("Tide Leader"),
        .gender = NON_BINARY,
        .speakerIcon = SPEAKER_ICON_VIGRIM,
    },
    [SPEAKER_VIGRIM_UNKNOWN] =
    {
        .name = COMPOUND_STRING("???"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_BINARY,
        .speakerIcon = SPEAKER_ICON_VIGRIM,
    },
    [SPEAKER_GIRL] =
    {
        .name = COMPOUND_STRING("Girl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
    [SPEAKER_GREEN] =
    {
        .name = COMPOUND_STRING("Green"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_GREEN,
    },
    [SPEAKER_JANINE] =
    {
        .name = COMPOUND_STRING("Janine"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_JANINE,
    },
    [SPEAKER_KAREN] =
    {
        .name = COMPOUND_STRING("Karen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KAREN,
    },
    [SPEAKER_KID] =
    {
        .name = COMPOUND_STRING("Kid"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KID,
    },
    [SPEAKER_KEIYING_INTRO]
    {
        .name = COMPOUND_STRING("???"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_KEIYING,
    },
    [SPEAKER_KEIYING] =
    {
        .name = COMPOUND_STRING("Kei-Ying"),
        .title = COMPOUND_STRING("SharpRise COO"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_KEIYING,
    },
    [SPEAKER_KEIYING_GYM] =
    {
        .name = COMPOUND_STRING("Keiying"),
        .title = COMPOUND_STRING("Ex-Gym Leader"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_KEIYING,
    },
    [SPEAKER_KEIYING_PROLOGUE] =
    {
        .name = COMPOUND_STRING("Keiying"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_KEIYING,
    },
    [SPEAKER_KURT] =
    {
        .name = COMPOUND_STRING("Kurt"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KURT,
    },
    [SPEAKER_LANCE] =
    {
        .name = COMPOUND_STRING("Lance"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LANCE,
    },
    [SPEAKER_LT_SURGE] =
    {
        .name = COMPOUND_STRING("Lt.Surge"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LT_SURGE,
    },
    [SPEAKER_MAN] =
    {
        .name = COMPOUND_STRING("Man"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MAN,
    },
    [SPEAKER_MISTY] =
    {
        .name = COMPOUND_STRING("Misty"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MISTY,
    },
    [SPEAKER_PUA] =
    {
        .name = COMPOUND_STRING("Pua"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_PUA,
    },
    [SPEAKER_OLD_MAN] =
    {
        .name = COMPOUND_STRING("Old Man"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_OLD_MAN,
    },
    [SPEAKER_POLICEMAN] =
    {
        .name = COMPOUND_STRING("Policeman"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_POLICEMAN,
    },
    [SPEAKER_BD] =
    {
        .name = COMPOUND_STRING("BD"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_BD,
    },
    [SPEAKER_RED] =
    {
        .name = COMPOUND_STRING("Red"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_RED,
    },
    [SPEAKER_ROCKET_GRUNT_MALE] =
    {
        .name = COMPOUND_STRING("Rocket Grunt"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_M,
    },
    [SPEAKER_ROCKET_GRUNT_FEMALE] =
    {
        .name = COMPOUND_STRING("Rocket Grunt"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_F,
    },
    [SPEAKER_RAMESH] =
    {
        .name = COMPOUND_STRING("Ramesh"),
        .title = COMPOUND_STRING("SharpRise CMO"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_RAMESH,
    },
    [SPEAKER_SILVER] =
    {
        .name = COMPOUND_STRING("Silver"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SILVER,
    },
    [SPEAKER_STEVEN] =
    {
        .name = COMPOUND_STRING("Steven"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_STEVEN,
    },
    [SPEAKER_SWIMMER_MALE] =
    {
        .name = COMPOUND_STRING("Swimmer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SWIMMER_M,
    },
    [SPEAKER_EMRYS] =
    {
        .name = COMPOUND_STRING("Emrys"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = NON_BINARY,
        .speakerIcon = SPEAKER_ICON_EMRYS,
    },
    [SPEAKER_WILL] =
    {
        .name = COMPOUND_STRING("Will"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WILL,
    },
    [SPEAKER_WOMAN] =
    {
        .name = COMPOUND_STRING("Woman"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_YOUNGSTER] =
    {
        .name = COMPOUND_STRING("Youngster"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_YOUNGSTER,
    },
    [SPEAKER_FIREBREATHER] =
    {
        .name = COMPOUND_STRING("Firebreather"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FIREBREATHER,
    },
    [SPEAKER_BEAUTY] =
    {
        .name = COMPOUND_STRING("Beauty"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BEAUTY,
    },
    [SPEAKER_BIRD_KEEPER] =
    {
        .name = COMPOUND_STRING("Bird Keeper"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BIRD_KEEPER,
    },
    [SPEAKER_BLACK_BELT] =
    {
        .name = COMPOUND_STRING("Black Belt"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLACK_BELT,
    },
    [SPEAKER_EUSINE] =
    {
        .name = COMPOUND_STRING("Eusine"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_EUSINE,
    },
    [SPEAKER_PROTON] =
    {
        .name = COMPOUND_STRING("Proton"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_PROTON,
    },
    [SPEAKER_PETREL] =
    {
        .name = COMPOUND_STRING("Petrel"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_PETREL,
    },
    [SPEAKER_ADAORA] =
    {
        .name = COMPOUND_STRING("Adaora"),
        .title = COMPOUND_STRING("Tide Admin"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_ADAORA,
    },
    [SPEAKER_ADAORA_FIRST_INTRO] =
    {
        .name = COMPOUND_STRING("Adaora"),
        .title = COMPOUND_STRING("Volunteer"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_ADAORA,
    },
    [SPEAKER_BAIYA] =
    {
        .name = COMPOUND_STRING("Baiya"),
        .title = COMPOUND_STRING("{PKMN} Trainer"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BAIYA,
    },
    [SPEAKER_BAIYA_TIDE] =
    {
        .name = COMPOUND_STRING("Baiya"),
        .title = COMPOUND_STRING("The Tide"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BAIYA,
    },
    [SPEAKER_COLLECTOR] =
    {
        .name = COMPOUND_STRING("Collector"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_COLLECTOR,
    },
    [SPEAKER_BILL] =
    {
        .name = COMPOUND_STRING("Bill"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BOARDER] =
    {
        .name = COMPOUND_STRING("Boarder"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BOARDER,
    },
    [SPEAKER_JUGGLER] =
    {
        .name = COMPOUND_STRING("Juggler"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_JUGGLER,
    },
    [SPEAKER_KIMONO_GIRL] =
    {
        .name = COMPOUND_STRING("Kimono Girl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KIMONO_GIRL,
    },
    [SPEAKER_LASS] =
    {
        .name = COMPOUND_STRING("Lass"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LASS,
    },
    [SPEAKER_MEDIUM] =
    {
        .name = COMPOUND_STRING("Medium"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MEDIUM,
    },
    [SPEAKER_MEDIUM_2] =
    {
        .name = COMPOUND_STRING("Medium"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MEDIUM_2,
    },
    [SPEAKER_POKE_MANIAC] =
    {
        .name = COMPOUND_STRING("Poke Maniac"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_POKE_MANIAC,
    },
    [SPEAKER_SAGE] =
    {
        .name = COMPOUND_STRING("Sage"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SAGE,
    },
    [SPEAKER_SUPER_NERD] =
    {
        .name = COMPOUND_STRING("Super Nerd"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SUPER_NERD,
    },
    [SPEAKER_ACE_TRAINER_M] =
    {
        .name = COMPOUND_STRING("Ace Trainer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ACE_TRAINER_M,
    },
    [SPEAKER_ACE_TRAINER_F] =
    {
        .name = COMPOUND_STRING("Ace Trainer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ACE_TRAINER_F,
    },
    [SPEAKER_LI] =
    {
        .name = COMPOUND_STRING("Li"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LI,
    },
    [SPEAKER_AROMA_LADY] =
    {
        .name = COMPOUND_STRING("Aroma Lady"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_AROMA_LADY,
    },
    [SPEAKER_BATTLE_GIRL] =
    {
        .name = COMPOUND_STRING("Battle Girl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BATTLE_GIRL,
    },
    [SPEAKER_MOM] =
    {
        .name = COMPOUND_STRING("Mom"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MOM,
    },
    [SPEAKER_WAITER] =
    {
        .name = COMPOUND_STRING("Waiter"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WAITER,
    },
    [SPEAKER_NEWS] =
    {
        .name = COMPOUND_STRING("News"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_M,
    },
    [SPEAKER_ALICIA] =
    {
        .name = COMPOUND_STRING("{PLAYER}"),
        .title = COMPOUND_STRING("{PKMN} Trainer"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MOM,
    },
    [SPEAKER_USUL] =
    {
        .name = COMPOUND_STRING("{PLAYER}"),
        .title = COMPOUND_STRING("Champion"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_MOM,
    },
    [SPEAKER_CHARLOTTE] =
    {
        .name = COMPOUND_STRING("Charlotte"),
        .title = COMPOUND_STRING("{PKMN} Trainer"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_SILVER,
    },
    [SPEAKER_CHARLOTTE_SHARPRISE] =
    {
        .name = COMPOUND_STRING("Charlotte"),
        .title = COMPOUND_STRING("Enforcer"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_SILVER,
    },
    [SPEAKER_GRUNT] =
    {
        .name = COMPOUND_STRING("GRUNT"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_POLICEMAN,
    },
    [SPEAKER_MARKETING_STAFF] =
    {
        .name = COMPOUND_STRING("Marketing Staff"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_COLLECTOR,
    },
    [SPEAKER_ANNOUNCER] =
    {
        .name = COMPOUND_STRING("Announcer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_COLLECTOR,
    },
    [SPEAKER_TALA] =
    {
        .name = COMPOUND_STRING("Tala"),
        .title = COMPOUND_STRING("Ex-Elite Four"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_WILL,
    },
    [SPEAKER_TALA_PROLOUGE] =
    {
        .name = COMPOUND_STRING("Tala"),
        .title = COMPOUND_STRING("Elite Four"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_WILL,
    },
    [SPEAKER_CROWD_A] =
    {
        .name = COMPOUND_STRING("Crowd Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ACE_TRAINER_M,
    },
    [SPEAKER_CROWD_B] =
    {
        .name = COMPOUND_STRING("Crowd Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ACE_TRAINER_F,
    },
    [SPEAKER_CROWD_C] =
    {
        .name = COMPOUND_STRING("Crowd Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_OLD_MAN,
    },
    [SPEAKER_CROWD_D] =
    {
        .name = COMPOUND_STRING("Crowd Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_RUPERT] =
    {
        .name = COMPOUND_STRING("Rupert"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KID,
    },
    [SPEAKER_OLIVER] =
    {
        .name = COMPOUND_STRING("Oliver"),
        .title = COMPOUND_STRING("Assistant"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_ELM,
    },
    [SPEAKER_RESIDENT_A] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ACE_TRAINER_M,
    },
    [SPEAKER_RESIDENT_B] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ACE_TRAINER_F,
    },
    [SPEAKER_RESIDENT_C] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_OLD_MAN,
    },
    [SPEAKER_RESIDENT_D] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_SIARL] =
    {
        .name = COMPOUND_STRING("Siarl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_M,
    },
    [SPEAKER_FRANK] =
    {
        .name = COMPOUND_STRING("Frank"),
        .title = COMPOUND_STRING("Ex-Elite Four"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BRUNO,
    },
    [SPEAKER_FRANK_PROLOUGE] =
    {
        .name = COMPOUND_STRING("Frank"),
        .title = COMPOUND_STRING("Elite Four"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BRUNO,
    },
    [SPEAKER_DAGMAR] =
    {
        .name = COMPOUND_STRING("Dagmar"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_OLD_MAN,
    },
    [SPEAKER_GURL] =
    {
        .name = COMPOUND_STRING("Gurl"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_LEAGUE_STAFF_A] =
    {
        .name = COMPOUND_STRING("League Staff"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLACK_BELT,
    },
    [SPEAKER_DAVID] =
    {
        .name = COMPOUND_STRING("David"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WAITER,
    },
    [SPEAKER_ISHAN] =
    {
        .name = COMPOUND_STRING("Ishan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_F,
    },
    [SPEAKER_ROCKET_MEMBER_A] =
    {
        .name = COMPOUND_STRING("The Tide Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_BINARY,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_M,
    },
    [SPEAKER_ROCKET_MEMBER_B] =
    {
        .name = COMPOUND_STRING("The Tide Member"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_BINARY,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_F,
    },
    [SPEAKER_LUCREZIA_BEFORE] =
    {
        .name = COMPOUND_STRING("Lucrezia"),
        .title = COMPOUND_STRING("League Commissioner"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_PROTON,
    },
    [SPEAKER_LUCREZIA] =
    {
        .name = COMPOUND_STRING("Lucrezia"),
        .title = COMPOUND_STRING("SharpRise CEO"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_PROTON,
    },
    [SPEAKER_VITOMIR] =
    {
        .name = COMPOUND_STRING("Vitomir"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_F,
    },
    [SPEAKER_RABIA] =
    {
        .name = COMPOUND_STRING("Rabia"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ROCKET_GRUNT_F,
    },
    [SPEAKER_LANDLORD] =
    {
        .name = COMPOUND_STRING("Landlord"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_JUGGLER,
    },
    [SPEAKER_PROTEST_A] =
    {
        .name = COMPOUND_STRING("Protestor"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_AROMA_LADY,
    },
    [SPEAKER_PROTEST_B] =
    {
        .name = COMPOUND_STRING("Protestor"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BEAUTY,
    },
    [SPEAKER_PROTEST_C] =
    {
        .name = COMPOUND_STRING("Protestor"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BUG_CATCHER,
    },
    [SPEAKER_PROTEST_D] =
    {
        .name = COMPOUND_STRING("Protestor"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_COLLECTOR,
    },
    [SPEAKER_JULIUS] =
    {
        .name = COMPOUND_STRING("Julius"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MAN,
    },
    [SPEAKER_MADISON] =
    {
        .name = COMPOUND_STRING("Madison"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_STRANDED_A] =
    {
        .name = COMPOUND_STRING("Stranded Citizen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_COLLECTOR,
    },
    [SPEAKER_STRANDED_B] =
    {
        .name = COMPOUND_STRING("Stranded Citizen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FIREBREATHER,
    },
    [SPEAKER_RESIDENT_E] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
    [SPEAKER_RESIDENT_F] =
    {
        .name = COMPOUND_STRING("Resident"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FISHERMAN,
    },
    [SPEAKER_MAGNUS] =
    {
        .name = COMPOUND_STRING("Magnus"),
        .title = COMPOUND_STRING("Ex-Elite Four"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_STEVEN,
    },
    [SPEAKER_MAGNUS_PROLOUGE] =
    {
        .name = COMPOUND_STRING("Magnus"),
        .title = COMPOUND_STRING("Elite Four"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_STEVEN,
    },
    [SPEAKER_ELEANOR] =
    {
        .name = COMPOUND_STRING("Eleanor"),
        .title = COMPOUND_STRING("Ex-Elite Four"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_KAREN,
    },
    [SPEAKER_ELEANOR_PROLOUGE] =
    {
        .name = COMPOUND_STRING("Eleanor"),
        .title = COMPOUND_STRING("Elite Four"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_KAREN,
    },
    [SPEAKER_ALEKSANDER] =
    {
        .name = COMPOUND_STRING("Aleksander"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KID,
    },
    [SPEAKER_SUMMER] =
    {
        .name = COMPOUND_STRING("Summer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
    [SPEAKER_MAID] =
    {
        .name = COMPOUND_STRING("Maid"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_NEWS_B] =
    {
        .name = COMPOUND_STRING("News"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LI,
    },
    [SPEAKER_ARNAV] =
    {
        .name = COMPOUND_STRING("Arnav"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LI,
    },
    [SPEAKER_TECH] =
    {
        .name = COMPOUND_STRING("Techie"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LI,
    },
    [SPEAKER_CHIEF] =
    {
        .name = COMPOUND_STRING("Chief"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LI,
    },
    [SPEAKER_DOYLE] =
    {
        .name = COMPOUND_STRING("Doyle"),
        .title = COMPOUND_STRING("Ex-Gym Leader"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BROCK,
    },
    [SPEAKER_DOYLE_PROLOUGE] =
    {
        .name = COMPOUND_STRING("Doyle"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BROCK,
    },
    [SPEAKER_IMELDA] =
    {
        .name = COMPOUND_STRING("Imelda"),
        .title = COMPOUND_STRING("Ex-Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_MISTY,
    },
    [SPEAKER_IMELDA_PROLOGUE]
    {
        .name = COMPOUND_STRING("Imelda"),
        .title = COMPOUND_STRING("Gym Leader"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_MISTY,
    },
    [SPEAKER_DOOR] =
    {
        .name = COMPOUND_STRING("Door"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MISTY,
    },
    [SPEAKER_TEODORO] =
    {
        .name = COMPOUND_STRING("Teodoro"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MAN,
    },
    [SPEAKER_DUDLEY] =
    {
        .name = COMPOUND_STRING("Dudley"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BUG_CATCHER,
    },
    [SPEAKER_CHERIE] =
    {
        .name = COMPOUND_STRING("Cherie"),
        .title = COMPOUND_STRING("Reporter"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MEDIUM,
    },
    [SPEAKER_MATTHEW] =
    {
        .name = COMPOUND_STRING("Matthew"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SWIMMER_M,
    },
    [SPEAKER_FANNY] =
    {
        .name = COMPOUND_STRING("Fanny"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLACK_BELT,
    },
    [SPEAKER_CRAIG] =
    {
        .name = COMPOUND_STRING("Craig"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLACK_BELT,
    },
    [SPEAKER_ANTONE] =
    {
        .name = COMPOUND_STRING("Antone"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BOARDER,
    },
    [SPEAKER_ORI] =
    {
        .name = COMPOUND_STRING("Ori"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_OLD_WOMAN,
    },
    [SPEAKER_HIKO] =
    {
        .name = COMPOUND_STRING("Hiko"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_OLD_MAN,
    },
    [SPEAKER_POLICE] =
    {
        .name = COMPOUND_STRING("Police"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_POLICEMAN,
    },
    [SPEAKER_MACK] =
    {
        .name = COMPOUND_STRING("Mack"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BUG_CATCHER,
    },
    [SPEAKER_TYZONN] =
    {
        .name = COMPOUND_STRING("Tyzonn"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FISHERMAN,
    },
    [SPEAKER_WILL2] =
    {
        .name = COMPOUND_STRING("Will"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
    [SPEAKER_RONNY] =
    {
        .name = COMPOUND_STRING("Ronny"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KID,
    },
    [SPEAKER_DAX] =
    {
        .name = COMPOUND_STRING("Dax"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MAN,
    },
    [SPEAKER_BRENNAN] =
    {
        .name = COMPOUND_STRING("Brennan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_OLD_MAN,
    },
    [SPEAKER_ATTENDANT] =
    {
        .name = COMPOUND_STRING("Exhibit Attendant"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_COLLECTOR,
    },
    [SPEAKER_ELEVATOR_ATTENDANT] =
    {
        .name = COMPOUND_STRING("Exhibit Attendant"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_SPEAKER] =
    {
        .name = COMPOUND_STRING("Speaker"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
    [SPEAKER_GHOST] =
    {
        .name = COMPOUND_STRING("Ghost"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLACK_BELT,
    },
    [SPEAKER_ISMAIL] =
    {
        .name = COMPOUND_STRING("Ismail"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MAN,
    },
    [SPEAKER_SERGEY] =
    {
        .name = COMPOUND_STRING("Sergey"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_COLLECTOR,
    },
    [SPEAKER_REPORTER] =
    {
        .name = COMPOUND_STRING("Reporter"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MAN,
    },
    [SPEAKER_STAN_PERLACIA_CITY] =
    {
        .name = COMPOUND_STRING("Wallace Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MAN,
    },
    [SPEAKER_TROLLEYWORKER] =
    {
        .name = COMPOUND_STRING("Trolleyworker"),
        .title = COMPOUND_STRING("GRUNT Employee"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_MAN,
    },
    [SPEAKER_HESTER] =
    {
        .name = COMPOUND_STRING("Hester"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KID,
    },
    [SPEAKER_SHARPRISECAPITAL_STAFF] =
    {
        .name = COMPOUND_STRING("SharpRise Staff"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_BINARY,
        .speakerIcon = SPEAKER_ICON_FIREBREATHER,
    },
    [SPEAKER_TONALLI] =
    {
        .name = COMPOUND_STRING("Tonalli"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FIREBREATHER,
    },
    [SPEAKER_DRUMMER_B] =
    {
        .name = COMPOUND_STRING("Drummer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SWIMMER_M,
    },
    [SPEAKER_DRUMMER_C] =
    {
        .name = COMPOUND_STRING("Drummer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_DRUMMER_D] =
    {
        .name = COMPOUND_STRING("Drummer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BUG_CATCHER,
    },
    [SPEAKER_LIIDIA] =
    {
        .name = COMPOUND_STRING("Liidia"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KID,
    },
    [SPEAKER_RAINER] =
    {
        .name = COMPOUND_STRING("Rainer"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_BRONSON] =
    {
        .name = COMPOUND_STRING("Bronson"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LT_SURGE,
    },
    [SPEAKER_SHASHI] =
    {
        .name = COMPOUND_STRING("Shashi"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ERIKA,
    },
    [SPEAKER_LEAH] =
    {
        .name = COMPOUND_STRING("Leah"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_GUARD] =
    {
        .name = COMPOUND_STRING("Guard"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLACK_BELT,
    },
    [SPEAKER_SHOPKEEPER] =
    {
        .name = COMPOUND_STRING("Shopkeeper"),
        .title = COMPOUND_STRING("Pokemon Center Staff"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_GREEN,
    },
    [SPEAKER_ELIOR] =
    {
        .name = COMPOUND_STRING("Elior"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FISHERMAN,
    },
    [SPEAKER_LELAND] =
    {
        .name = COMPOUND_STRING("Leland"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_OLD_MAN,
    },
    [SPEAKER_AMBROGIO] =
    {
        .name = COMPOUND_STRING("Ambrogio"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FIREBREATHER,
    },
    [SPEAKER_HUNGRYPARENT] =
    {
        .name = COMPOUND_STRING("Hungryparent"),
        .title = COMPOUND_STRING("Adult"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_NURSE] =
    {
        .name = COMPOUND_STRING("Nurse"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_WOMAN,
    },
    [SPEAKER_AUGUSTE] =
    {
        .name = COMPOUND_STRING("Auguste"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BUG_CATCHER,
    },
    [SPEAKER_JULIA] =
    {
        .name = COMPOUND_STRING("Julia"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ACE_TRAINER_F,
    },
    [SPEAKER_ALICE] =
    {
        .name = COMPOUND_STRING("Alice"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FERRAN] =
    {
        .name = COMPOUND_STRING("Ferran"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_POKE_MANIAC,
    },
    [SPEAKER_ANTHONY] =
    {
        .name = COMPOUND_STRING("Anthony"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SWIMMER_M,
    },
    [SPEAKER_SEVENSISTERS_TINA] =
    {
        .name = COMPOUND_STRING("Tina"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ACE_TRAINER_F,
    },

    [SPEAKER_SEVENSISTERS_PAUL] =
    {
        .name = COMPOUND_STRING("Paul"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KURT,
    },

    [SPEAKER_SEVENSISTERS_JON] =
    {
        .name = COMPOUND_STRING("Jon"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LASS,
    },

    [SPEAKER_SEVENSISTERS_BRADLEY] =
    {
        .name = COMPOUND_STRING("Bradley"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LI,
    },

    [SPEAKER_SEVENSISTERS_JO] =
    {
        .name = COMPOUND_STRING("Jo"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BIRD_KEEPER,
    },

    [SPEAKER_SEVENSISTERS_HANNAH] =
    {
        .name = COMPOUND_STRING("Hannah"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BUG_CATCHER,
    },

    [SPEAKER_SEVENSISTERS_RACHEL] =
    {
        .name = COMPOUND_STRING("Rachel"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BATTLE_GIRL,
    },
    [SPEAKER_KATHARINA] =
    {
        .name = COMPOUND_STRING("Katharina"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_AROMA_LADY,
    },
    [SPEAKER_OFFICIANT] =
    {
        .name = COMPOUND_STRING("Officiant"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_OLD_WOMAN,
    },
    [SPEAKER_HELEN] =
    {
        .name = COMPOUND_STRING("Helen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FISHERMAN,
    },
    [SPEAKER_RUSTY] =
    {
        .name = COMPOUND_STRING("Rusty"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KID,
    },
    [SPEAKER_WILLOW] =
    {
        .name = COMPOUND_STRING("Willow"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FIREBREATHER,
    },
    [SPEAKER_GRIFF] =
    {
        .name = COMPOUND_STRING("Griff"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_YOUNGSTER,
    },
    [SPEAKER_LUNA] =
    {
        .name = COMPOUND_STRING("Luna"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MAX] =
    {
        .name = COMPOUND_STRING("Max"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BIRD_KEEPER,
    },
    [SPEAKER_BLAZE] =
    {
        .name = COMPOUND_STRING("B-Boy Blaze"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_PETREL,
    },
    [SPEAKER_KIKI] =
    {
        .name = COMPOUND_STRING("Krumpin' Kiki"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLAINE,
    },
    [SPEAKER_EJ] =
    {
        .name = COMPOUND_STRING("Electric EJ"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_POKE_MANIAC,
    },
    [SPEAKER_WAITE] =
    {
        .name = COMPOUND_STRING("Waite"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ACE_TRAINER_M,
    },
    [SPEAKER_DEBRA] =
    {
        .name = COMPOUND_STRING("Debra"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BATTLE_GIRL,
    },
    [SPEAKER_WALDRON] =
    {
        .name = COMPOUND_STRING("Waldron"),
        .title = COMPOUND_STRING("IT Employee"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SWIMMER_M,
    },
    [SPEAKER_ISIDORE] =
    {
        .name = COMPOUND_STRING("Isidore"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLACK_BELT,
    },
    [SPEAKER_WILDFIRERISKWORKER] =
    {
        .name = COMPOUND_STRING("Wildfireriskworker"),
        .title = COMPOUND_STRING("Toxel Energy Enployee"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_PETREL,
    },
    [SPEAKER_GERTRUDE] =
    {
        .name = COMPOUND_STRING("Gertrude"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ERIKA,
    },
    [SPEAKER_KHALEEL] =
    {
        .name = COMPOUND_STRING("Khaleel"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MEDIUM_2,
    },
    [SPEAKER_NANCY] =
    {
        .name = COMPOUND_STRING("Nancy"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_KURT,
    },
    [SPEAKER_PANNEN] =
    {
        .name = COMPOUND_STRING("Pannen"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SUPER_NERD,
    },
    [SPEAKER_MADRONE] =
    {
        .name = COMPOUND_STRING("Professor Madrone"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ELM,
    },
    [SPEAKER_BUZZR_CEO] =
    {
        .name = COMPOUND_STRING("Buzzr CEO"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MEDIUM_2,
    },
    [SPEAKER_PRESTO_CEO] =
    {
        .name = COMPOUND_STRING("Presto CEO"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_STEVEN,
    },
    [SPEAKER_ARRIBA_DRIVER1] =
    {
        .name = COMPOUND_STRING("Arriba Driver 1"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BROCK,
    },
    [SPEAKER_ARRIBA_DRIVER2] =
    {
        .name = COMPOUND_STRING("Arriba Driver 2"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_FIREBREATHER,
    },
    [SPEAKER_ARRIBA_DRIVER3] =
    {
        .name = COMPOUND_STRING("Arriba Driver 3"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BOARDER,
    },
    [SPEAKER_PERSUASIVE_LANDLORD] =
    {
        .name = COMPOUND_STRING("Landlord"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLAINE,
    },
    [SPEAKER_PERSUASIVE_SIBLING] =
    {
        .name = COMPOUND_STRING("Sibling"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BATTLE_GIRL,
    },
    [SPEAKER_ARRIBA_GRUNT1] =
    {
        .name = COMPOUND_STRING("Arriba Grunt 1"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_MEDIUM_2,
    },
    [SPEAKER_ARRIBA_GRUNT2] =
    {
        .name = COMPOUND_STRING("Arriba Grunt 2"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_POLICEMAN,
    },
    [SPEAKER_ARRIBA_CEO] =
    {
        .name = COMPOUND_STRING("Arriba CEO"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_POLICEMAN,
    },
    [SPEAKER_GYM_ATTENDANT] =
    {
        .name = COMPOUND_STRING("Gym Attendant"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SHINZO,
    },
    [SPEAKER_CHRIS] =
    {
        .name = COMPOUND_STRING("Chris"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_GREEN,
    },
    [SPEAKER_LEE_PYRON] =
    {
        .name = COMPOUND_STRING("Lee Pyron"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LASS,
    },
    [SPEAKER_PROF_TRACHY] =
    {
        .name = COMPOUND_STRING("Prof Trachy"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_LASS,
    },
    [SPEAKER_DRUG_HELMET_TESTER] =
    {
        .name = COMPOUND_STRING("Drughelmettester"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SUPER_NERD,
    },
    [SPEAKER_VSDEOGUY] =
    {
        .name = COMPOUND_STRING("Vsdeoguy"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_POKE_MANIAC,
    },
    [SPEAKER_VSDEORESEARCHER] =
    {
        .name = COMPOUND_STRING("Vsdeoresearcher"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_SUPER_NERD,
    },
    [SPEAKER_ANGELDELIVERYBIKERA] =
    {
        .name = COMPOUND_STRING("AngeldeliverybikerA"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BIKER,
    },
    [SPEAKER_ANGELDELIVERYBIKERB] =
    {
        .name = COMPOUND_STRING("AngeldeliverybikerB"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BIKER,
    },
    [SPEAKER_ANGELDELIVERYBIKERC] =
    {
        .name = COMPOUND_STRING("AngeldeliverybikerC"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BIKER,
    },
    [SPEAKER_ANGELDELIVERYBIKERD] =
    {
        .name = COMPOUND_STRING("AngeldeliverybikerD"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BIKER,
    },
    [SPEAKER_MELISSA] =
    {
        .name = COMPOUND_STRING("Melissa"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ERIKA,
    },
    [SPEAKER_OLD_WOMAN] =
    {
        .name = COMPOUND_STRING("Old Woman"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ERIKA,
    },
    [SPEAKER_STAN_PERLACIA_CITYB] =
    {
        .name = COMPOUND_STRING("Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ERIKA,
    },
    [SPEAKER_STAN_PERLACIA_CITYC] =
    {
        .name = COMPOUND_STRING("Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ERIKA,
    },
    [SPEAKER_STAN_PERLACIA_CITYD] =
    {
        .name = COMPOUND_STRING("Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ERIKA,
    },
    [SPEAKER_STAN_PERLACIA_CITYE] =
    {
        .name = COMPOUND_STRING("Stan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_ERIKA,
    },
    [SPEAKER_BREEDINGPARENT] =
    {
        .name = COMPOUND_STRING("Breedingparent"),
        .title = COMPOUND_STRING("Parent Manager"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BROCK,
    },
    [SPEAKER_BREEDINGEGG] =
    {
        .name = COMPOUND_STRING("BreedingEgg"),
        .title = COMPOUND_STRING("Egg Manager"),
        .gender = FEMALE,
        .speakerIcon = SPEAKER_ICON_AROMA_LADY,
    },
    [SPEAKER_BREEDINGGENE] =
    {
        .name = COMPOUND_STRING("Gene"),
        .title = COMPOUND_STRING("Stat Manager"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BLAINE,
    },
    [SPEAKER_PARKRANGER] =
    {
        .name = COMPOUND_STRING("Parkranger"),
        .title = COMPOUND_STRING("Park Ranger"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_GREEN,
    },
    [SPEAKER_NOPOMOD] =
    {
        .name = COMPOUND_STRING("NoPoMod"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_STRESSCUPORGANIZER] =
    {
        .name = COMPOUND_STRING("Stresscuporganizer"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ASPCAOFFICER] =
    {
        .name = COMPOUND_STRING("Aspcaofficer"),
        .title = COMPOUND_STRING("RSPCP"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_SPRINGTRAINER] =
    {
        .name = COMPOUND_STRING("Springtrainer"),
        .title = COMPOUND_STRING("Bystander"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_SMOOTHIESHOPKEEPER] =
    {
        .name = COMPOUND_STRING("Marble Slab Barista"),
        .title = COMPOUND_STRING("Smoothieshopkeeper"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_SMOOTHIECUSTOMER] =
    {
        .name = COMPOUND_STRING("Customer"),
        .title = COMPOUND_STRING("Smoothiecustomer"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_TUNNELSPERSON] =
    {
        .name = COMPOUND_STRING("Customer"),
        .title = COMPOUND_STRING("Smoothiecustomer"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_PSYOPWORKERA] =
    {
        .name = COMPOUND_STRING("Worker"),
        .title = COMPOUND_STRING("PsyopworkerA"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_PSYOPWORKERB] =
    {
        .name = COMPOUND_STRING("Worker"),
        .title = COMPOUND_STRING("PsyopworkerB"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_PSYOPWORKERC] =
    {
        .name = COMPOUND_STRING("Worker"),
        .title = COMPOUND_STRING("PsyopworkerC"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_PSYOPTARGETA] =
    {
        .name = COMPOUND_STRING("{PKMN} Trainer"),
        .title = COMPOUND_STRING("PsyoptargetA"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_PSYOPTARGETC] =
    {
        .name = COMPOUND_STRING("{PKMN} Trainer"),
        .title = COMPOUND_STRING("PsyoptargetC"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_SHOPUNIONREP] =
    {
        .name = COMPOUND_STRING("Shopunionrep"),
        .title = COMPOUND_STRING("Shop Union Leader"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_INSTALLNATUREPROBESWORKER] =
    {
        .name = COMPOUND_STRING("Installnatureprobes"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYSTRENGTHH] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverystrengthh"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYA] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverya"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYB] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliveryb"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYCUTC] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverycutc"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYSTRENGTHI] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverystrengthi"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYROCKSMASHF] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliveryrocksmashf"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYWHIRLPOOLJ] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverywhirlpoolj"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYROCKSMASHG] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliveryrocksmashg"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYCUTD] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverycutd"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTDELIVERYCUTE] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutdeliverycute"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTRESCUEROCKSMASHO] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuerocksmasho"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTRESCUECUTM] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuecutm"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTRESCUESTRENGTHQ] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuestrengthq"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTRESCUEDIVEN] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuediven"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTRESCUEK] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuek"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTRESCUEROCKSMASHP] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuerocksmashp"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTRESCUEL] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuel"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTRESCUEWHIRLPOOLS] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuewhirlpools"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_BODEGABURNOUTRESCUESTRENGTHR] =
    {
        .name = COMPOUND_STRING("Bodegaburnoutrescuestrengthr"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERA] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherA"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERB] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherB"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERC] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherC"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERD] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherD"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERE] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherE"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERF] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherF"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_GETTHEBANDBACKTOGETHERBIKERG] =
    {
        .name = COMPOUND_STRING("GetthebandbacktogetherG"),
        .title = COMPOUND_STRING("???"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMEXPEDITORA] =
    {
        .name = COMPOUND_STRING("MermerezagymexpeditorA"),
        .title = COMPOUND_STRING("Needles Expeditor"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMEXPEDITORB] =
    {
        .name = COMPOUND_STRING("MermerezagymexpeditorB"),
        .title = COMPOUND_STRING("Needles Expeditor"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMEXPEDITORC] =
    {
        .name = COMPOUND_STRING("MermerezagymexpeditorC"),
        .title = COMPOUND_STRING("Needles Expeditor"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKA] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookA"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKB] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookB"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKC] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookC"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKD] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookD"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKE] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookE"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKF] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookF"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMLINECOOKG] =
    {
        .name = COMPOUND_STRING("MermerezagymlinecookG"),
        .title = COMPOUND_STRING("Needles Line Cook"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFA] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefA"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFB] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefB"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFC] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefC"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFD] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefD"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFE] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefE"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFF] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefF"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFG] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefG"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFH] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefH"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFI] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefI"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMPREPCHEFJ] =
    {
        .name = COMPOUND_STRING("MermerezagymprepchefJ"),
        .title = COMPOUND_STRING("Needles Prep Chef"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMSERVERA] =
    {
        .name = COMPOUND_STRING("MermerezagymserverA"),
        .title = COMPOUND_STRING("Needles Server"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMSERVERB] =
    {
        .name = COMPOUND_STRING("MermerezagymserverB"),
        .title = COMPOUND_STRING("Needles Server"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMSERVERC] =
    {
        .name = COMPOUND_STRING("MermerezagymserverC"),
        .title = COMPOUND_STRING("Needles Server"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MERMEREZAGYMHOST] =
    {
        .name = COMPOUND_STRING("Mermerezagymchefhost"),
        .title = COMPOUND_STRING("Needles Host"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_032E8AC9] =
    {
        .name = COMPOUND_STRING("032E8AC9"),
        .title = COMPOUND_STRING("Mermereza Gym Trainer"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_0389363C] =
    {
        .name = COMPOUND_STRING("0389363C"),
        .title = COMPOUND_STRING("Mermereza Gym Trainer"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_040CEA33] =
    {
        .name = COMPOUND_STRING("040CEA33"),
        .title = COMPOUND_STRING("Mermereza Gym Trainer"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MOCHISHOPKEEPER] =
    {
        .name = COMPOUND_STRING("Mochishopkeeper"),
        .title = COMPOUND_STRING("Shopkeeper"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_DIGGINGINVESTTIGATOR] =
    {
        .name = COMPOUND_STRING("Digginginvesttigator"),
        .title = COMPOUND_STRING("Private Investigator"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_DIGGINGTIDEMEMBERA] =
    {
        .name = COMPOUND_STRING("DiggingtidememberA"),
        .title = COMPOUND_STRING("Comrade"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_DIGGINGTIDEMEMBERB] =
    {
        .name = COMPOUND_STRING("DiggingtidememberB"),
        .title = COMPOUND_STRING("Comrade"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ADAORAPARENT] =
    {
        .name = COMPOUND_STRING("Adaoraparent"),
        .title = COMPOUND_STRING("Adaora's Parent"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_RETURNDOLLCHILD] =
    {
        .name = COMPOUND_STRING("Returndollchild"),
        .title = COMPOUND_STRING("Child"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FREETHEINNOCENTCOMRADEA] =
    {
        .name = COMPOUND_STRING("Freetheinnocentcomradea"),
        .title = COMPOUND_STRING("Comrade"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FINDTHEGUILTYVICTIMB] =
    {
        .name = COMPOUND_STRING("Findtheguiltyvictimb"),
        .title = COMPOUND_STRING("Comrade"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FREETHEINNOCENTHIKERC] =
    {
        .name = COMPOUND_STRING("Freetheinnocenthikerc"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FREETHEINNOCENTHIKERD] =
    {
        .name = COMPOUND_STRING("Freetheinnocenthikerd"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FREETHEINNOCENTHIKERF] =
    {
        .name = COMPOUND_STRING("Freetheinnocenthikerf"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FREETHEINNOCENTHIKERG] =
    {
        .name = COMPOUND_STRING("Freetheinnocenthikerg"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FINDTHEGUILTYPLANTH] =
    {
        .name = COMPOUND_STRING("Findtheguiltyplanth"),
        .title = COMPOUND_STRING("Hiker"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FREETHEINNOCENTBOBACASHIERI] =
    {
        .name = COMPOUND_STRING("Freetheinnocentbobacashieri"),
        .title = COMPOUND_STRING("Shopkeeper"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_FINDTHEGUILTYFRIENDI] =
    {
        .name = COMPOUND_STRING("FindtheguilityfriendI"),
        .title = COMPOUND_STRING("Triathlete"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_RESTAURANTEXPANSIONBUSSER] =
    {
        .name = COMPOUND_STRING("Restaurantexpansionbusser"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_RESTAURANTEXPANSIONHOSTESS] =
    {
        .name = COMPOUND_STRING("Restaurantexpansionhostess"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_RESTAURANTEXPANSIONCHEF] =
    {
        .name = COMPOUND_STRING("Restaurantexpansionchef"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_RESTAURANTEXPANSIONLINECOOK] =
    {
        .name = COMPOUND_STRING("Restaurantexpansionlinecook"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ESPULEETRADEPERSONA] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonA"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ESPULEETRADEPERSONB] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonB"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ESPULEETRADEPERSONC] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonC"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ESPULEETRADEPERSOND] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonD"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ESPULEETRADEPERSONE] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonE"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ESPULEETRADEPERSONF] =
    {
        .name = COMPOUND_STRING("EspuleetradepersonF"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MONTY] =
    {
        .name = COMPOUND_STRING("Monty"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_MONTYOPP] =
    {
        .name = COMPOUND_STRING("Montyopp"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ARCADEMINI] =
    {
        .name = COMPOUND_STRING("Arcademini"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },

    [SPEAKER_KEVIN] =
    {
        .name = COMPOUND_STRING("Kevin"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ZAC] =
    {
        .name = COMPOUND_STRING("Zac"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_JOHNNY] =
    {
        .name = COMPOUND_STRING("Johnny"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ADAM] =
    {
        .name = COMPOUND_STRING("Adam"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ANDREAS] =
    {
        .name = COMPOUND_STRING("Andreas"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_JUSTIN] =
    {
        .name = COMPOUND_STRING("Justin"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_JEFFREY] =
    {
        .name = COMPOUND_STRING("Jeffrey"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_DAJUAN] =
    {
        .name = COMPOUND_STRING("Dajuan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_JUAN] =
    {
        .name = COMPOUND_STRING("Juan"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_JASON] =
    {
        .name = COMPOUND_STRING("Jason"),
        .title = COMPOUND_STRING("???"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVTROUPEA] =
    {
        .name = COMPOUND_STRING("ImprovtroupeA"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVTROUPEB] =
    {
        .name = COMPOUND_STRING("ImprovtroupeB"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVTROUPEC] =
    {
        .name = COMPOUND_STRING("ImprovtroupeC"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVAUDIENCED] =
    {
        .name = COMPOUND_STRING("ImprovaudienceD"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVAUDIENCEE] =
    {
        .name = COMPOUND_STRING("ImprovaudienceE"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVAUDIENCEF] =
    {
        .name = COMPOUND_STRING("ImprovaudienceF"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVAUDIENCEG] =
    {
        .name = COMPOUND_STRING("ImprovaudienceG"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVAUDIENCEH] =
    {
        .name = COMPOUND_STRING("ImprovaudienceH"),
        .title = COMPOUND_STRING("Audience Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVTROUPEX] =
    {
        .name = COMPOUND_STRING("ImprovtroupeX"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVTROUPEY] =
    {
        .name = COMPOUND_STRING("ImprovtroupeY"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_IMPROVTROUPEZ] =
    {
        .name = COMPOUND_STRING("ImprovtroupeZ"),
        .title = COMPOUND_STRING("Improv Troupe"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_TEACHTRAINERFISHA] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishA"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_TEACHTRAINERFISHB] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishB"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_TEACHTRAINERFISHC] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishC"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_TEACHTRAINERFISHD] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishD"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_TEACHTRAINERFISHE] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishE"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_TEACHTRAINERFISHF] =
    {
        .name = COMPOUND_STRING("TeachtrainerfishF"),
        .title = COMPOUND_STRING("Fisherfolk"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMGUARDA] =
    {
        .name = COMPOUND_STRING("BackroomguardA"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMTRAINERA1] =
    {
        .name = COMPOUND_STRING("BackroomtrainerA1"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMTRAINERA2] =
    {
        .name = COMPOUND_STRING("BackroomtrainerA2"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMTRAINERA3] =
    {
        .name = COMPOUND_STRING("BackroomtrainerA3"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMTRAINERA4] =
    {
        .name = COMPOUND_STRING("BackroomtrainerA4"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMGUARDB] =
    {
        .name = COMPOUND_STRING("BackroomguardB"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMTRAINERB1] =
    {
        .name = COMPOUND_STRING("BackroomtrainerB1"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMTRAINERB2] =
    {
        .name = COMPOUND_STRING("BackroomtrainerB2"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMTRAINERB3] =
    {
        .name = COMPOUND_STRING("BackroomtrainerB3"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMGUARDC] =
    {
        .name = COMPOUND_STRING("BackroomguardC"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMTRAINERC1] =
    {
        .name = COMPOUND_STRING("BackroomtrainerC1"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_BACKROOMTRAINERC2] =
    {
        .name = COMPOUND_STRING("BackroomtrainerC2"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_CULTHOUSEGUARD] =
    {
        .name = COMPOUND_STRING("Culthouseguard"),
        .title = COMPOUND_STRING("Society Member"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_CULTLEADER] =
    {
        .name = COMPOUND_STRING("Cultleader"),
        .title = COMPOUND_STRING("Society Leader"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_SOCIETY] =
    {
        .name = COMPOUND_STRING("???"),
        .title = COMPOUND_STRING("Society Members"),
        .gender = NON_HUMAN,
        .speakerIcon = SPEAKER_ICON_BILL,
    },
    [SPEAKER_ROBOT] =
    {
        .name = COMPOUND_STRING("Training Robot"),
        .title = COMPOUND_STRING(""),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_MOM,
    },
    [SPEAKER_WALLACEARMYTIDEMEMBERA] =
    {
        .name = COMPOUND_STRING("Wallacearmytidemembera"),
        .title = COMPOUND_STRING("Comrade"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_JANINE,
    },
    [SPEAKER_WALLACEARMYSTANB] =
    {
        .name = COMPOUND_STRING("Wallacearmystanb"),
        .title = COMPOUND_STRING("Wallace Stan"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
    [SPEAKER_WALLACEARMYSTANC] =
    {
        .name = COMPOUND_STRING("Wallacearmystanc"),
        .title = COMPOUND_STRING("Wallace Stan"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
    [SPEAKER_WALLACEARMYSTAND] =
    {
        .name = COMPOUND_STRING("Wallacearmystand"),
        .title = COMPOUND_STRING("Wallace Stan"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
    [SPEAKER_WALLACEARMYSTANE] =
    {
        .name = COMPOUND_STRING("Wallacearmystane"),
        .title = COMPOUND_STRING("Wallace Stan"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
    [SPEAKER_WALLACEARMYSTANF] =
    {
        .name = COMPOUND_STRING("Wallacearmystanf"),
        .title = COMPOUND_STRING("Wallace Stan"),
        .gender = MALE,
        .speakerIcon = SPEAKER_ICON_GIRL,
    },
};
