#include "global.h"
#include "battle.h"
#include "constants/trainers.h"
#include "battle_anim.h"
#include "battle_setup.h"
#include "constants/moves.h"
#include "constants/abilities.h"
#include "pokedex.h"
#include "event_object_movement.h"
#include "event_data.h"
#include "fieldmap.h"
#include "item.h"
#include "malloc.h"
#include "mazegen.h"
#include "quests.h"
#include "money.h"
#include "party_menu.h"
#include "quest_logic.h"
#include "hidden_grotto.h"
#include "overworld.h"
#include "random.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "constants/sound.h"
#include "field_control_avatar.h"
#include "battle_main.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "strings.h"
#include "constants/region_map_sections.h"
#include "region_map.h"
#include "random.h"
#include "event_data.h"
#include "buzzr.h"
#include "quests.h"

void Buzzr_IncrementSteps(void)
{
    u16 steps;

    if (!FlagGet(FLAG_SYS_APP_BUZZR_GET))
        return;

    steps = VarGet(VAR_BUZZR_STEP_COUNTER);

    if (steps == USHRT_MAX)
        return;

    VarSet(VAR_BUZZR_STEP_COUNTER,++steps);
}

static bool32 TweetCriteria_CheckSteps(u32 cost)
{
    u32 steps = VarGet(VAR_BUZZR_STEP_COUNTER);

    if (steps < cost)
        return FALSE;

    VarSet(VAR_BUZZR_STEP_COUNTER,(steps -= cost));
    return TRUE;
}

void TweetCriteria_AlwaysTrue(void)
{
    gSpecialVar_Result = TRUE;
}

void TweetCriteria_Quest_NPC_Rabies(void)
{
    gSpecialVar_Result = TRUE;
}

static bool32 TweetCriteria_HasTalkedReporter(void)
{
    return (VarGet(VAR_QUEST_BREAKTHEINTERNET_STATE) > TALA_MENTIONED_REPORTER);
}

static bool32 TweetCriteria_SocialMedia(void)
{
    // PSF TODO is the rate at which social media quests unlocked good? They are basically all unlocked as soon as the quest starts, flooding the timeline. is that okay?
    bool32 talkedReporter = TweetCriteria_HasTalkedReporter();
    bool32 hasSteps = TweetCriteria_CheckSteps(TWEET_SOCIAL_MEDIA_STEPS);
    return (talkedReporter && hasSteps);
}

void TweetCriteria_Quest_NPC_Robbery(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Ice(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Deoxys(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Tunnels(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Freshwater(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Gem(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Stone(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Gym_MermerezaCity_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_MERMEREZA_CITY_BADGE);
}

void TweetCriteria_Gym_ToraTown_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_TORA_TOWN_BADGE);
}

void TweetCriteria_Gym_PerlaciaCity_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_PERLACIA_CITY_BADGE);
}

void TweetCriteria_Gym_Chasilla_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_CHASILLA_BADGE);
}

void TweetCriteria_Gym_FortYobu_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_FORT_YOBU_BADGE);
}

void TweetCriteria_Gym_HalerbaCity_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_HALERBA_CITY_BADGE);
}

void TweetCriteria_Gym_TirabudinPlace_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_TIRABUDIN_PLACE_BADGE);
}

void TweetCriteria_Gym_IrisinaTown_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_IRISINA_TOWN_BADGE);
}

void TweetCriteria_Story_GRUNT_Restored(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_STORY_GRUNT_RESTORED);
}

void TweetCriteria_Story_Strike_Begin1(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_STORY_STRIKE_BEGIN_1);
}

void TweetCriteria_Story_Strike_Begin2(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_STORY_STRIKE_BEGIN_2);
}

void TweetCriteria_Story_Warehouse_Rave(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_STORY_WAREHOUSE_RAVE);
}

void TweetCriteria_StoryClear(void)
{
    gSpecialVar_Result = (VarGet(VAR_STORYLINE_STATE) >= STORY_CLEAR);
}

void TweetCriteria_IsCompulsiveHealingReward(void)
{
    gSpecialVar_Result = ((IsQuestRewardState(QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP)) || (IsQuestCompletedState(QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP)));
}

void TweetCriteria_23(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_24(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_25(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_26(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_27(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_28(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_29(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_30(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_31(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_32(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_33(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_STORY_FALSETIMELINE);
}

void TweetCriteria_34(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_35(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_36(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_37(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_38(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_39(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_40(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_41(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_42(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_43(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_44(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_45(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_46(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_47(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_48(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_49(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_50(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_51(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_52(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_53(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_54(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_55(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_56(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_57(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_58(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_59(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_60(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_61(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_62(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_63(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_64(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_65(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_66(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_67(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_68(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_69(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_70(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_71(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_72(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_73(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_74(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_75(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_76(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_77(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_78(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_79(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_80(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_81(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_82(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_83(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_84(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_85(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_86(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_87(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_88(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_89(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_90(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_91(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_92(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_93(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_94(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_95(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_96(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_97(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_98(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_99(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_100(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_101(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_102(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_103(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_104(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_105(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_106(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_107(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_108(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_109(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_110(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_111(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_112(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_113(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_114(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_115(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_116(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_117(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_118(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_119(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_120(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_121(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_122(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_123(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_124(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_125(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_126(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_127(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_128(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_129(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_130(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_131(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_132(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_133(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_134(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_135(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_136(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_137(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_138(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_139(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_140(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_141(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_142(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_143(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_144(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_145(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_146(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_147(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_148(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_149(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_150(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_151(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_152(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_153(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_154(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_155(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_156(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_157(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_158(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_159(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_160(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_161(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_162(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_163(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_164(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_165(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_166(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_167(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_168(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_169(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_170(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_171(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_172(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_173(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_174(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_175(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_176(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_177(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_178(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_179(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_180(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_181(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_182(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_183(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_184(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_185(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_186(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_187(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_188(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_189(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_190(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_191(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_192(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_193(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_194(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_195(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_196(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_197(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_198(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_199(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_200(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_201(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_202(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_203(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_204(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_205(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_206(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_207(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_208(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_209(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_210(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_211(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_212(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_213(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_214(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_215(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_216(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_217(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_218(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_219(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_220(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_221(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_222(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_223(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_224(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_225(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_226(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_227(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_228(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_229(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_230(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_231(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_232(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_233(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_234(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_235(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_236(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_237(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_238(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_239(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_240(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_241(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_242(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_243(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_244(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_245(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_246(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_247(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_248(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_249(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_250(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_251(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_252(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_253(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_254(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_255(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_256(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_257(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_258(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_259(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_260(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_261(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_262(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_263(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_264(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_265(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_266(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_267(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_268(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_269(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_270(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_271(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_272(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_273(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_274(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_275(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_276(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_277(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_278(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_279(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_280(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_281(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_282(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_283(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_284(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_285(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_286(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_287(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_288(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_289(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_290(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_291(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_292(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_293(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_294(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_295(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_296(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_297(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_298(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_299(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_300(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_301(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_302(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_303(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_304(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_305(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_306(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_307(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_308(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_309(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_310(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_311(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_312(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_313(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_314(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_315(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_316(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_317(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_318(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_319(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_320(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_321(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_322(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_323(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_324(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_325(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_326(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_327(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_328(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_329(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_330(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_331(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_332(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_333(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_334(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_335(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_336(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_337(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_338(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_339(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_340(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_341(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_342(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_343(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_344(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_345(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_346(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_347(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_348(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_349(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_350(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_351(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_352(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_353(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_354(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_355(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_356(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_357(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_358(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_359(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_360(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_361(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_362(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_363(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_364(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_365(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_366(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_367(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_368(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_369(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_370(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_371(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_372(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_373(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_374(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_375(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_376(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_377(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_378(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_379(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_380(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_381(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_382(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_383(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_384(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_385(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_386(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_387(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_388(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_389(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_390(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_391(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_392(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_393(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_394(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_395(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_396(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_397(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_398(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_399(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_400(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_401(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_402(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_403(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_404(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_405(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_406(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_407(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_408(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_409(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_410(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_411(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_412(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_413(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_414(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_415(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_416(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_417(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_418(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_419(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_420(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_421(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_422(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_423(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_424(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_425(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_426(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_427(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_428(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_429(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_430(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_431(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_432(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_433(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_434(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_435(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_436(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_437(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_438(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_439(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_440(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_441(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_442(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_443(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_444(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_445(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_446(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_447(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_448(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_449(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_450(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_451(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_452(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_453(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_454(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_455(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_456(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_457(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_458(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_459(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_460(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_461(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_462(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_463(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_464(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_465(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_466(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_467(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_468(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_469(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_470(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_471(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_472(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_473(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_474(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_475(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_476(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_477(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_478(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_479(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_480(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_481(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_482(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_483(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_484(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_485(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_486(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_487(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_488(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_489(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_490(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_491(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_492(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_493(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_494(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_495(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_496(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_497(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_498(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_499(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_500(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_501(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_502(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_503(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_504(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_505(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_506(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_507(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_508(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_509(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_510(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_511(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_512(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_513(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_514(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_515(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_516(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_517(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_518(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_519(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_520(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_521(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_522(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_523(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_524(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_525(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_526(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_527(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_528(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_529(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_530(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_531(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_532(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_533(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_534(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_535(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_536(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_537(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_538(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_539(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_540(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_541(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_542(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_543(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_544(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_545(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_546(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_547(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_548(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_549(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_550(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_551(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_552(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_553(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_554(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_555(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_556(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_557(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_558(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_559(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_560(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_561(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_562(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_563(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_564(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_565(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_566(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_567(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_568(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_569(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_570(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_571(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_572(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_573(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_574(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_575(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_576(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_577(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_578(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_579(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_580(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_581(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_582(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_583(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_584(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_585(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_586(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_587(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_588(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_589(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_590(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_591(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_592(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_593(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_594(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_595(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_596(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_597(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_598(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_599(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_600(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_601(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_602(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_603(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_604(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_605(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_606(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_607(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_608(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_609(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_610(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_611(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_612(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_613(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_614(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_615(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_616(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_617(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_618(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_619(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_620(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_621(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_622(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_623(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_624(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_625(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_626(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_627(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_628(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_629(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_630(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_631(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_632(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_633(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_634(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_635(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_636(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_637(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_638(void)
{
	gSpecialVar_Result = FALSE;
}

void TweetCriteria_639(void)
{
	gSpecialVar_Result = FALSE;
}
void TweetCriteria_640(void)
{
	gSpecialVar_Result = FALSE;
}
