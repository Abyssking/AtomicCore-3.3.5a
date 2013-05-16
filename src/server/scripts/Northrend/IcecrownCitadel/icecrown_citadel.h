/**********************************************************************************************
*                                                                                             *
*                          ______ _  __   _____ ____  _____  ______                           *
*                         |  ____| |/ /  / ____/ __ \|  __ \|  ____|                          *
*                         | |__  | ' /  | |   | |  | | |__) | |__                             *
*                         |  __| |  <   | |   | |  | |  _  /|  __|                            *
*                         | |    | . \  | |___| |__| | | \ \| |____                           *
*                         |_|    |_|\_\  \_____\____/|_|  \_\______|                          *
*                                                                                             *
*                              Copyright (c) Frozen Kingdom WoW                               *
*                                                                                             *
*                                                                                             *
*            Diese Emulation unterliegt vollständig dem Copyright / Kopierschutz              *
*            von Frozen Kingdom WoW. Sämtliche Vervielfältigung oder Verbreitung              *
*            dieser hier enthaltenen Medien wird juristisch bestraft. Diese                   *
*            Software darf nur vom Herausgeber Frozen Kingdom WoW verwendet bzw               *
*            Weiterverwendet werden.                                                          *
*                                                                                             *
*                                                                                             *
*            This emulation is subject to the law of copyright from "The Frozen               *
*            Kingdom World of Warcraft" servers. All copying of these here contained          *
*            content, will be legitimate punished. This software must only used by            *
*            the publisher.                                                                   *
*                                                                                             *
**********************************************************************************************/

#ifndef ICECROWN_CITADEL_H_
#define ICECROWN_CITADEL_H_

#include "SpellScript.h"
#include "Map.h"
#include "Creature.h"

#define ICCScriptName "instance_icecrown_citadel"

uint32 const EncounterCount = 14;
uint32 const WeeklyNPCs = 9;
uint32 const MaxHeroicAttempts = 50;

extern Position const ValithriaSpawnPos;
extern Position const SindragosaSpawnPos;
extern Position const TerenasSpawn;
extern Position const TerenasSpawnHeroic;
extern Position const SpiritWardenSpawn;

enum SharedSpells
{
    SPELL_BERSERK                       = 26662,
    SPELL_BERSERK2                      = 47008,
    SPELL_STONEFORM                     = 70733,
    SPELL_ORANGE_BLIGHT_RESIDUE         = 72144,
    SPELL_GREEN_BLIGHT_RESIDUE          = 72145,
    SPELL_ARTHAS_TELEPORTER_CEREMONY    = 72915,
    SPELL_FROSTMOURNE_TELEPORT_VISUAL   = 73078,
    SPELL_SHADOWS_FATE                  = 71169,
};

enum TeleporterSpells
{
    LIGHT_S_HAMMER_TELEPORT         = 70781,
    ORATORY_OF_THE_DAMNED_TELEPORT  = 70856,
    RAMPART_OF_SKULLS_TELEPORT      = 70857,
    DEATHBRINGER_S_RISE_TELEPORT    = 70858,
    UPPER_SPIRE_TELEPORT            = 70859,
    FROZEN_THRONE_TELEPORT          = 70860,
    SINDRAGOSA_S_LAIR_TELEPORT      = 70861,
};

enum DataTypes
{
    DATA_LORD_MARROWGAR             = 0,
    DATA_LADY_DEATHWHISPER          = 1,
    DATA_GUNSHIP_EVENT              = 2,
    DATA_FROSTRIESE                 = 51,
    DATA_DEATHBRINGER_SAURFANG      = 3,
    DATA_FESTERGUT                  = 4,
    DATA_ROTFACE                    = 5,
    DATA_PROFESSOR_PUTRICIDE        = 6,
    DATA_BLOOD_PRINCE_COUNCIL       = 7,
    DATA_BLOOD_QUEEN_LANA_THEL      = 8,
    DATA_SISTER_SVALNA              = 9,
    DATA_VALITHRIA_DREAMWALKER      = 10,
    DATA_SINDRAGOSA                 = 11,
    DATA_THE_LICH_KING              = 12,	
    DATA_SINDRAGOSA_GAUNTLET        = 13,
    DATA_SAURFANG_EVENT_NPC         = 14,
    DATA_BONED_ACHIEVEMENT          = 15,
    DATA_OOZE_DANCE_ACHIEVEMENT     = 16,
    DATA_PUTRICIDE_TABLE            = 17,	
    DATA_NAUSEA_ACHIEVEMENT         = 18,
    DATA_ORB_WHISPERER_ACHIEVEMENT  = 19,
    DATA_PRINCE_KELESETH_GUID       = 20,
    DATA_PRINCE_TALDARAM_GUID       = 21,
    DATA_PRINCE_VALANAR_GUID        = 22,
    DATA_BLOOD_PRINCES_CONTROL      = 23,
    DATA_SINDRAGOSA_FROSTWYRMS      = 24,
    DATA_SPINESTALKER               = 25,	
    DATA_RIMEFANG                   = 26,	
    DATA_COLDFLAME_JETS             = 27,
    DATA_TEAM_IN_INSTANCE           = 28,
    DATA_BLOOD_QUICKENING_STATE     = 29,	
    DATA_HEROIC_ATTEMPTS            = 30,	
    DATA_CROK_SCOURGEBANE           = 31,	
    DATA_CAPTAIN_ARNATH             = 32,	
    DATA_CAPTAIN_BRANDON            = 33,	
    DATA_CAPTAIN_GRONDEL            = 34,	
    DATA_CAPTAIN_RUPERT             = 35,	
    DATA_VALITHRIA_TRIGGER          = 36,	
    DATA_VALITHRIA_LICH_KING        = 37,
    DATA_HIGHLORD_TIRION_FORDRING   = 38,	
    DATA_ARTHAS_PLATFORM            = 39,
    DATA_TERENAS_MENETHIL           = 40,
    DATA_BEEN_WAITING_ACHIEVEMENT   = 49,
    DATA_NECK_DEEP_ACHIEVEMENT      = 50,	
    DATA_FIRST_SQUAD_STATE                  = 100,
    DATA_SECOND_SQUAD_STATE                 = 101,
    DATA_SPIRE_FROSTWYRM_STATE              = 102,
    DATA_GB_HIGH_OVERLORD_SAURFANG          = 103,
    DATA_GB_MURADIN_BRONZEBEARD             = 104,
    DATA_HIGH_OVERLORD_SAURFANG_NOT_VISUAL  = 105,
    DATA_GB_BATTLE_MAGE                     = 106,
    DATA_SKYBREAKER_BOSS                    = 107,
    DATA_ORGRIMMAR_HAMMER_BOSS              = 108,
    DATA_MURADIN_BRONZEBEARD_NOT_VISUAL     = 109,
    DATA_MURADIN_BRONZEBEARD                = 110,
    DATA_GUNSHIP_BATTLE                     = 111,
    GUID_PLAYER_LOCATION                    = 112,
};

enum CreaturesIds
{
    NPC_HIGHLORD_TIRION_FORDRING_LH             = 37119,
    NPC_THE_LICH_KING_LH                        = 37181,
    NPC_HIGHLORD_BOLVAR_FORDRAGON_LH            = 37183,
    NPC_KOR_KRON_GENERAL                        = 37189,
    NPC_ALLIANCE_COMMANDER                      = 37190,
    NPC_TORTUNOK                                = 37992,
    NPC_ALANA_MOONSTRIKE                        = 37999,
    NPC_GERARDO_THE_SUAVE                       = 37993,
    NPC_TALAN_MOONSTRIKE                        = 37998,
    NPC_UVLUS_BANEFIRE                          = 38284,
    NPC_MALFUS_GRIMFROST                        = 38283,
    NPC_IKFIRUS_THE_VILE                        = 37991,
    NPC_YILI                                    = 37997,
    NPC_VOL_GUK                                 = 38841,
    NPC_JEDEBIA                                 = 38840,
    NPC_HARAGG_THE_UNSEEN                       = 38181,
    NPC_NIBY_THE_ALMIGHTY                       = 38182,
    NPC_GARROSH_HELLSCREAM                      = 39372,
    NPC_KING_VARIAN_WRYNN                       = 39371,
    NPC_DEATHBOUND_WARD                         = 37007,
    NPC_INFILTRATOR_MINCHAR                     = 38471,
    NPC_KOR_KRON_LIEUTENANT                     = 38491,
    NPC_SKYBREAKER_LIEUTENANT                   = 38492,
    //NPC_ROTTING_FROST_GIANT_10                  = 38490,
    //NPC_ROTTING_FROST_GIANT_25                  = 38494,
    NPC_ALCHEMIST_ADRIANNA                      = 38501,
    NPC_ALRIN_THE_AGILE                         = 38551,
    NPC_INFILTRATOR_MINCHAR_BQ                  = 38558,
    NPC_MINCHAR_BEAM_STALKER                    = 38557,
    NPC_VALITHRIA_DREAMWALKER_QUEST             = 38589,
    NPC_LORD_MARROWGAR                          = 36612,
    NPC_COLDFLAME                               = 36672,
    NPC_BONE_SPIKE                              = 36619,
    NPC_LADY_DEATHWHISPER                       = 36855,
    NPC_CULT_FANATIC                            = 37890,
    NPC_DEFORMED_FANATIC                        = 38135,
    NPC_REANIMATED_FANATIC                      = 38009,
    NPC_CULT_ADHERENT                           = 37949,
    NPC_EMPOWERED_ADHERENT                      = 38136,
    NPC_REANIMATED_ADHERENT                     = 38010,
    NPC_VENGEFUL_SHADE                          = 38222,    
    NPC_GB_SKYBREAKER                           = 37540,
    NPC_GB_ORGRIMS_HAMMER                       = 37215,
    NPC_GB_HIGH_OVERLORD_SAURFANG               = 36939,
    NPC_GB_MURADIN_BRONZEBEARD                  = 36948,
    NPC_GB_HIHG_CAPTAIN_JUSTIN_BARTLETT         = 37182,
    NPC_GB_HIGH_OVERLORD_SAURFANG_NOT_VISUAL    = 50004,
    NPC_GB_MURADIN_BRONZEBEARD_NOT_VISUAL       = 50006,
    NPC_GB_SKYBREAKER_SORCERER                  = 37026,
    NPC_GB_SKYBREAKER_SORCERERS                 = 37116,
    NPC_GB_KORKRON_REAVER                       = 37920,
    NPC_GB_KORKRON_REAVERS                      = 36957,
    NPC_GB_KORKRON_SERGANTE                     = 36960,
    NPC_GB_SKYBREAKER_SERGANTE                  = 36961,
    NPC_GB_KORKRON_BATTLE_MAGE                  = 37117,
    NPC_GB_SKYBREAKER_MARINE                    = 36950,
    NPC_GB_KORKRON_ROCKETEER                    = 36982,
    NPC_GB_SKYBREAKER_MORTAR_SOLDIER            = 36978,
    NPC_GB_KORKRON_AXETHROWER                   = 36968,
    NPC_GB_SKYBREAKER_RIFLEMAN                  = 36969,
    NPC_GB_SKYBREAKER_DECKHAND                  = 36970,
    NPC_GB_ZAFOD_BOOMBOX                        = 37184,
    NPC_GB_ALLIANCE_CANON                       = 36838,
    NPC_GB_HORDE_CANON                          = 36839,
    NPC_GB_INVISIBLE_STALKER                    = 32780,
    NPC_GB_PORTAL                               = 37227,
    NPC_GB_GUNSHIP_HULL                         = 37547,
    NPC_SKYBREAKER_SORCERER                     = 37026,
    NPC_KORKRON_INVOKER                         = 37033,
    NPC_SPIRE_FROSTWYRM                         = 37230,
    NPC_DEATHBRINGER_SAURFANG                   = 37813,
    NPC_BLOOD_BEAST                             = 38508,
    NPC_SE_JAINA_PROUDMOORE                     = 37188,
    NPC_SE_MURADIN_BRONZEBEARD                  = 37200,
    NPC_SE_KING_VARIAN_WRYNN                    = 37879,
    NPC_SE_HIGH_OVERLORD_SAURFANG               = 37187,
    NPC_SE_KOR_KRON_REAVER                      = 37920,
    NPC_SE_SKYBREAKER_MARINE                    = 37830,
    NPC_FROST_FREEZE_TRAP                       = 37744,
    NPC_FESTERGUT                               = 36626,
    NPC_GAS_DUMMY                               = 36659,
    NPC_ROTFACE                                 = 36627,
    NPC_OOZE_SPRAY_STALKER                      = 37986,
    NPC_PUDDLE_STALKER                          = 37013,
    NPC_UNSTABLE_EXPLOSION_STALKER              = 38107,
    NPC_PROFESSOR_PUTRICIDE                     = 36678,
    NPC_ABOMINATION_WING_MAD_SCIENTIST_STALKER  = 37824,
    NPC_GROWING_OOZE_PUDDLE                     = 37690,
    NPC_GAS_CLOUD                               = 37562,
    NPC_VOLATILE_OOZE                           = 37697,
    NPC_CHOKING_GAS_BOMB                        = 38159,
    NPC_TEAR_GAS_TARGET_STALKER                 = 38317,
    NPC_MUTATED_ABOMINATION_10                  = 37672,
    NPC_MUTATED_ABOMINATION_25                  = 38285,
    NPC_PRINCE_KELESETH                         = 37972,
    NPC_PRINCE_TALDARAM                         = 37973,
    NPC_PRINCE_VALANAR                          = 37970,
    NPC_BLOOD_ORB_CONTROLLER                    = 38008,
    NPC_FLOATING_TRIGGER                        = 30298,
    NPC_DARK_NUCLEUS                            = 38369,
    NPC_BALL_OF_FLAME                           = 38332,
    NPC_BALL_OF_INFERNO_FLAME                   = 38451,
    NPC_KINETIC_BOMB_TARGET                     = 38458,
    NPC_KINETIC_BOMB                            = 38454,
    NPC_SHOCK_VORTEX                            = 38422,
    NPC_BLOOD_QUEEN_LANA_THEL                   = 37955,
    NPC_CROK_SCOURGEBANE                        = 37129,
    NPC_CAPTAIN_ARNATH                          = 37122,
    NPC_CAPTAIN_BRANDON                         = 37123,
    NPC_CAPTAIN_GRONDEL                         = 37124,
    NPC_CAPTAIN_RUPERT                          = 37125,
    NPC_CAPTAIN_ARNATH_UNDEAD                   = 37491,
    NPC_CAPTAIN_BRANDON_UNDEAD                  = 37493,
    NPC_CAPTAIN_GRONDEL_UNDEAD                  = 37494,
    NPC_CAPTAIN_RUPERT_UNDEAD                   = 37495,
    NPC_YMIRJAR_BATTLE_MAIDEN                   = 37132,
    NPC_YMIRJAR_DEATHBRINGER                    = 38125,
    NPC_YMIRJAR_FROSTBINDER                     = 37127,
    NPC_YMIRJAR_HUNTRESS                        = 37134,
    NPC_YMIRJAR_WARLORD                         = 37133,
    NPC_SISTER_SVALNA                           = 37126,
    NPC_IMPALING_SPEAR                          = 38248,
    NPC_VALITHRIA_DREAMWALKER                   = 36789,
    NPC_GREEN_DRAGON_COMBAT_TRIGGER             = 38752,
    NPC_RISEN_ARCHMAGE                          = 37868,
    NPC_BLAZING_SKELETON                        = 36791,
    NPC_SUPPRESSER                              = 37863,
    NPC_BLISTERING_ZOMBIE                       = 37934,
    NPC_GLUTTONOUS_ABOMINATION                  = 37886,
    NPC_MANA_VOID                               = 38068,
    NPC_COLUMN_OF_FROST                         = 37918,
    NPC_ROT_WORM                                = 37907,
    NPC_THE_LICH_KING_VALITHRIA                 = 16980,
    NPC_DREAM_PORTAL_PRE_EFFECT                 = 38186,
    NPC_NIGHTMARE_PORTAL_PRE_EFFECT             = 38429,
    NPC_DREAM_PORTAL                            = 37945,
    NPC_NIGHTMARE_PORTAL                        = 38430,
    NPC_SINDRAGOSA                              = 36853,
    NPC_SPINESTALKER                            = 37534,
    NPC_RIMEFANG                                = 37533,
    NPC_FROSTWARDEN_HANDLER                     = 37531,
    NPC_FROSTWING_WHELP                         = 37532,
    NPC_ICY_BLAST                               = 38223,
    NPC_FROST_BOMB                              = 37186,
    NPC_ICE_TOMB                                = 36980,
    NPC_THE_LICH_KING                           = 36597,
    NPC_HIGHLORD_TIRION_FORDRING_LK             = 38995,
    NPC_TERENAS_MENETHIL_FROSTMOURNE            = 36823,
    NPC_SPIRIT_WARDEN                           = 36824,
    NPC_TERENAS_MENETHIL_FROSTMOURNE_H          = 39217,
    NPC_SHAMBLING_HORROR                        = 37698,
    NPC_DRUDGE_GHOUL                            = 37695,
    NPC_ICE_SPHERE                              = 36633,
    NPC_RAGING_SPIRIT                           = 36701,
    NPC_DEFILE                                  = 38757,
    NPC_VALKYR_SHADOWGUARD                      = 36609,
    NPC_VILE_SPIRIT                             = 37799,
    NPC_WICKED_SPIRIT                           = 39190,
    NPC_STRANGULATE_VEHICLE                     = 36598,
    NPC_WORLD_TRIGGER                           = 22515,
    NPC_WORLD_TRIGGER_INFINITE_AOI              = 36171,
    NPC_SPIRIT_BOMB                             = 39189,
    NPC_FROSTMOURNE_TRIGGER                     = 38584,
    NPC_SINDRAGOSAS_WARD                        = 37503,	
    NPC_NERUBAR_WEBWEAVER                       = 37502,	
    NPC_NERUBAR_CHAMPION                        = 37501,	
    NPC_NERUBAR_BROODLING                       = 37232,	
    NPC_FROSTWARDEN_WARRIOR                     = 37228,	
    NPC_FROSTWARDEN_SORCERESS                   = 37229,
    NPC_INVISIBLE_STALKER                       = 30298,	
    NPC_FROST_GIANT                             = 38490,
};

enum GameObjectsIds
{
    GO_SPIRIT_ALARM_1                       = 201814,
    GO_SPIRIT_ALARM_2                       = 201815,
    GO_SPIRIT_ALARM_3                       = 201816,
    GO_SPIRIT_ALARM_4                       = 201817,
    GO_DOODAD_ICECROWN_ICEWALL02            = 201910,
    GO_ICEWALL                              = 201911,
    GO_LORD_MARROWGAR_S_ENTRANCE            = 201857,
    GO_ORATORY_OF_THE_DAMNED_ENTRANCE       = 201563,
    GO_LADY_DEATHWHISPER_ELEVATOR           = 202220,	
    GO_ORGRIM_S_HAMMER_HORDE_ICC            = 201812,
    GO_ORGRIM_S_HAMMER_ALLIANCE_ICC         = 201581,
    GO_THE_SKYBREAKER_HORDE_ICC             = 201811,
    GO_THE_SKYBREAKER_ALLIANCE_ICC          = 201580,
    GO_CAPITAN_CHEST_A_10N                  = 201872,
    GO_CAPITAN_CHEST_A_25N                  = 201873,
    GO_CAPITAN_CHEST_A_10H                  = 201874,
    GO_CAPITAN_CHEST_A_25H                  = 201875,
    GO_CAPITAN_CHEST_H_10N                  = 202177,
    GO_CAPITAN_CHEST_H_25N                  = 202178,
    GO_CAPITAN_CHEST_H_10H                  = 202179,
    GO_CAPITAN_CHEST_H_25H                  = 202180,	
    GO_SAURFANG_S_DOOR                      = 201825,
    GO_DEATHBRINGER_S_CACHE_10N             = 202239,
    GO_DEATHBRINGER_S_CACHE_25N             = 202240,
    GO_DEATHBRINGER_S_CACHE_10H             = 202238,
    GO_DEATHBRINGER_S_CACHE_25H             = 202241,
    GO_SCOURGE_TRANSPORTER_SAURFANG         = 202244,
    GO_HORDE_TELEPORTER                     = 201880,
    GO_ORANGE_PLAGUE_MONSTER_ENTRANCE       = 201371,
    GO_GREEN_PLAGUE_MONSTER_ENTRANCE        = 201370,
    GO_SCIENTIST_AIRLOCK_DOOR_COLLISION     = 201612,
    GO_SCIENTIST_AIRLOCK_DOOR_ORANGE        = 201613,
    GO_SCIENTIST_AIRLOCK_DOOR_GREEN         = 201614,
    GO_DOODAD_ICECROWN_ORANGETUBES02        = 201617,
    GO_DOODAD_ICECROWN_GREENTUBES02         = 201618,
    GO_SCIENTIST_ENTRANCE                   = 201372,
    GO_DRINK_ME                             = 201584,
    GO_PLAGUE_SIGIL                         = 202182,
    GO_CRIMSON_HALL_DOOR                    = 201376,
    GO_BLOOD_ELF_COUNCIL_DOOR               = 201378,
    GO_BLOOD_ELF_COUNCIL_DOOR_RIGHT         = 201377,
    GO_DOODAD_ICECROWN_BLOODPRINCE_DOOR_01  = 201746,
    GO_DOODAD_ICECROWN_GRATE_01             = 201755,
    GO_BLOODWING_SIGIL                      = 202183,
    GO_GREEN_DRAGON_BOSS_ENTRANCE           = 201375,
    GO_GREEN_DRAGON_BOSS_EXIT               = 201374,
    GO_DOODAD_ICECROWN_ROOSTPORTCULLIS_01   = 201380,
    GO_DOODAD_ICECROWN_ROOSTPORTCULLIS_02   = 201381,
    GO_DOODAD_ICECROWN_ROOSTPORTCULLIS_03   = 201382,
    GO_DOODAD_ICECROWN_ROOSTPORTCULLIS_04   = 201383,
    GO_CACHE_OF_THE_DREAMWALKER_10N         = 201959,
    GO_CACHE_OF_THE_DREAMWALKER_25N         = 202339,
    GO_CACHE_OF_THE_DREAMWALKER_10H         = 202338,
    GO_CACHE_OF_THE_DREAMWALKER_25H         = 202340,
    GO_SINDRAGOSA_ENTRANCE_DOOR             = 201373,
    GO_SINDRAGOSA_SHORTCUT_ENTRANCE_DOOR    = 201369,
    GO_SINDRAGOSA_SHORTCUT_EXIT_DOOR        = 201379,
    GO_ICE_WALL                             = 202396,
    GO_ICE_BLOCK                            = 201722,
    GO_SIGIL_OF_THE_FROSTWING               = 202181,
    GO_SCOURGE_TRANSPORTER_LK               = 202223,
    GO_ARTHAS_PLATFORM                      = 202161,
    GO_ARTHAS_PRECIPICE                     = 202078,
    GO_DOODAD_ICECROWN_THRONEFROSTYWIND01   = 202188,
    GO_DOODAD_ICECROWN_THRONEFROSTYEDGE01   = 202189,
    GO_DOODAD_ICESHARD_STANDING02           = 202141,
    GO_DOODAD_ICESHARD_STANDING01           = 202142,
    GO_DOODAD_ICESHARD_STANDING03           = 202143,
    GO_DOODAD_ICESHARD_STANDING04           = 202144,
    GO_DOODAD_ICECROWN_SNOWEDGEWARNING01    = 202190,
    GO_FROZEN_LAVAMAN                       = 202436,
    GO_LAVAMAN_PILLARS_CHAINED              = 202437,
    GO_LAVAMAN_PILLARS_UNCHAINED            = 202438,	
};

enum AchievementCriteriaIds
{
    CRITERIA_BONED_10N                  = 12775,
    CRITERIA_BONED_25N                  = 12962,
    CRITERIA_BONED_10H                  = 13393,
    CRITERIA_BONED_25H                  = 13394,
    CRITERIA_DANCES_WITH_OOZES_10N      = 12984,
    CRITERIA_DANCES_WITH_OOZES_25N      = 12966,
    CRITERIA_DANCES_WITH_OOZES_10H      = 12985,
    CRITERIA_DANCES_WITH_OOZES_25H      = 12983,
    CRITERIA_NAUSEA_10N                 = 12987,
    CRITERIA_NAUSEA_25N                 = 12968,
    CRITERIA_NAUSEA_10H                 = 12988,
    CRITERIA_NAUSEA_25H                 = 12981,
    CRITERIA_ORB_WHISPERER_10N          = 13033,
    CRITERIA_ORB_WHISPERER_25N          = 12969,
    CRITERIA_ORB_WHISPERER_10H          = 13034,
    CRITERIA_ORB_WHISPERER_25H          = 13032,
    CRITERIA_KILL_LANA_THEL_10M         = 13340,
    CRITERIA_KILL_LANA_THEL_25M         = 13360,
    CRITERIA_ONCE_BITTEN_TWICE_SHY_10N  = 12780,
    CRITERIA_ONCE_BITTEN_TWICE_SHY_25N  = 13012,
    CRITERIA_ONCE_BITTEN_TWICE_SHY_10V  = 13011,
    CRITERIA_ONCE_BITTEN_TWICE_SHY_25V  = 13013,
};

enum SharedActions
{
    ACTION_FESTERGUT_COMBAT     = -366260,
    ACTION_FESTERGUT_GAS        = -366261,
    ACTION_FESTERGUT_DEATH      = -366262,
    ACTION_ROTFACE_COMBAT       = -366270,
    ACTION_ROTFACE_OOZE         = -366271,
    ACTION_ROTFACE_DEATH        = -366272,
    ACTION_CHANGE_PHASE         = -366780,
    ACTION_KILL_MINCHAR         = -379550,
    ACTION_VRYKUL_DEATH         = 37129,
    ACTION_START_FROSTWYRM      = -368530,
    ACTION_TRIGGER_ASPHYXIATION = -368531,
    ACTION_RESTORE_LIGHT        = -72262,
    ACTION_FROSTMOURNE_INTRO    = -36823,
};

enum WeekliesICC
{
    QUEST_DEPROGRAMMING_10                  = 24869,
    QUEST_DEPROGRAMMING_25                  = 24875,
    QUEST_SECURING_THE_RAMPARTS_10          = 24870,
    QUEST_SECURING_THE_RAMPARTS_25          = 24877,
    QUEST_RESIDUE_RENDEZVOUS_10             = 24873,
    QUEST_RESIDUE_RENDEZVOUS_25             = 24878,
    QUEST_BLOOD_QUICKENING_10               = 24874,
    QUEST_BLOOD_QUICKENING_25               = 24879,
    QUEST_RESPITE_FOR_A_TORNMENTED_SOUL_10  = 24872,
    QUEST_RESPITE_FOR_A_TORNMENTED_SOUL_25  = 24880,
};

enum WorldStatesICC
{
    WORLDSTATE_SHOW_TIMER           = 4903,
    WORLDSTATE_EXECUTION_TIME       = 4904,
    WORLDSTATE_SHOW_ATTEMPTS        = 4940,
    WORLDSTATE_ATTEMPTS_REMAINING   = 4941,
    WORLDSTATE_ATTEMPTS_MAX         = 4942,
};

enum AreaIds
{
    AREA_THE_FROZEN_THRONE  = 4859,
};

class spell_trigger_spell_from_caster : public SpellScriptLoader
{
    public:
        spell_trigger_spell_from_caster(char const* scriptName, uint32 triggerId) : SpellScriptLoader(scriptName), _triggerId(triggerId) { }

        class spell_trigger_spell_from_caster_SpellScript : public SpellScript
        {
            PrepareSpellScript(spell_trigger_spell_from_caster_SpellScript);

        public:
            spell_trigger_spell_from_caster_SpellScript(uint32 triggerId) : SpellScript(), _triggerId(triggerId) { }

            bool Validate(SpellInfo const* /*spell*/)
            {
                if (!sSpellMgr->GetSpellInfo(_triggerId))
                    return false;
                return true;
            }

            void HandleTrigger()
            {
                GetCaster()->CastSpell(GetHitUnit(), _triggerId, true);
            }

            void Register()
            {
                AfterHit += SpellHitFn(spell_trigger_spell_from_caster_SpellScript::HandleTrigger);
            }

            uint32 _triggerId;
        };

        SpellScript* GetSpellScript() const
        {
            return new spell_trigger_spell_from_caster_SpellScript(_triggerId);
        }

    private:
        uint32 _triggerId;
};

void UnsummonSpecificCreaturesNearby(Creature* ref, uint32 entry, float radius);

template<class AI>
CreatureAI* GetIcecrownCitadelAI(Creature* creature)
{
    if (InstanceMap* instance = creature->GetMap()->ToInstanceMap())
        if (instance->GetInstanceScript())
            if (instance->GetScriptId() == sObjectMgr->GetScriptId(ICCScriptName))
                return new AI(creature);
    return NULL;
}

#endif // ICECROWN_CITADEL_H_
