#pragma once

#include "enum.h"

enum band_type
{
    BAND_NO_BAND                = 0,
    BAND_KOBOLDS,
    BAND_ORCS,
    BAND_ORC_WARRIOR,
    BAND_ORC_KNIGHT,
    BAND_ORC_WARLORD,
    BAND_KILLER_BEES,
    BAND_CAUSTIC_SHRIKE,
    BAND_SHARD_SHRIKE,
    BAND_LAUGHING_SKULLS,
    BAND_SLIME_CREATURES,
    BAND_YAKS,
    BAND_UGLY_THINGS,
    BAND_VERY_UGLY_THINGS,
    BAND_HELL_HOUNDS,
    BAND_JACKALS,
    BAND_HELL_KNIGHTS,
    BAND_GNOLLS,
    BAND_WIGHTS,
    BAND_CENTAURS,
    BAND_CENTAUR_WARRIORS,
    BAND_YAKTAURS,
    BAND_OGRES,
    BAND_OGRE_MAGE,
    BAND_OGRE_MAGE_EXTERN,
    BAND_DEATH_YAKS,
    BAND_NECROMANCER,
    BAND_BALRUG,
    BAND_CACODEMON,
    BAND_EXECUTIONER,
    BAND_HELLWING,
    BAND_DEEP_ELF_KNIGHT,
    BAND_DEEP_ELF_HIGH_PRIEST,
    BAND_KOBOLD_DEMONOLOGIST,
    BAND_NAGAS,
    BAND_GUARDIAN_SERPENT,
    BAND_WOLVES,
    BAND_GREEN_RATS,
    BAND_HELL_RATS,
    BAND_DREAM_SHEEP,
    BAND_GHOULS,
    BAND_PRESERVER,
    BAND_DEEP_TROLL_SHAMAN,
    BAND_HOGS,
    BAND_HELL_HOGS,
    BAND_VAMPIRE_MOSQUITOES,
    BAND_FIRE_BATS,
    BAND_BOGGARTS,
    BAND_BLINK_FROGS,
    BAND_SKELETAL_WARRIORS,
    BAND_DRACONIAN,
    BAND_PANDEMONIUM_LORD,
    BAND_HARPIES,
    BAND_ILSUIW,
    BAND_AZRAEL,
    BAND_DUVESSA,
    BAND_KHUFU,
    BAND_GOLDEN_EYE,
    BAND_PIKEL,
    BAND_MERFOLK_AQUAMANCER,
    BAND_MERFOLK_IMPALER,
    BAND_MERFOLK_JAVELINEER,
    BAND_ALLIGATOR,
    BAND_ELEPHANT,
    BAND_REDBACK,
    BAND_JUMPING_SPIDER,
    BAND_TARANTELLA,
    BAND_POLYPHEMUS,
    BAND_VAULT_WARDEN,
    BAND_DEATH_KNIGHT_STANDARD,
    BAND_JIANGSHI,
    BAND_FAUNS,
    BAND_TENGU,
    BAND_SOJOBO,
    BAND_SPRIGGANS,
    BAND_SPRIGGAN_ELITES,
    BAND_ENCHANTRESS,
    BAND_SPRIGGAN_DRUID,
    BAND_SPRIGGAN_RIDERS,
    BAND_PHANTASMAL_WARRIORS,
    BAND_THRASHING_HORRORS,
    BAND_RAIJU,
    BAND_FAUN_PARTY,
    BAND_NAGA_RITUALIST,
    BAND_NAGA_SHARPSHOOTER,
    BAND_SALAMANDERS,
    BAND_SALAMANDER_ELITES,
    BAND_BLOOD_SAINT,
    BAND_WARMONGER,
    BAND_CORRUPTER,
    BAND_SOUL_SCHOLAR,
    BAND_VASHNIA,
    BAND_CEREBOV,
    BAND_GLOORX_VLOQ,
    BAND_LOM_LOBON,
    BAND_MNOLEG,
    BAND_DEATH_SCARABS,
    BAND_HOLIES,
    BAND_ROBIN,
    BAND_SPARK_WASPS,
    BAND_RANDOM_SINGLE,
    BAND_JOSEPHINE,
    BAND_HOWLER_MONKEY,
    BAND_MELIAI,
    BAND_IRON_GOLEMS,
    BAND_SALTLINGS,
    BAND_DANCING_WEAPONS,
    BAND_MOLTEN_GARGOYLES,
    BAND_GOLEMS,
    BAND_LINDWURMS,
    BAND_DIRE_ELEPHANTS,
    BAND_SIMULACRA,
    BAND_SPECTRALS,
    BAND_BONE_DRAGONS,
    BAND_MIXED_SPIDERS,
    BAND_ORANGE_DEMONS,
    BAND_OBLIVION_HOUNDS,
    BAND_JELLYFISH,
    BAND_SKYSHARKS,
    BAND_UFETUBI,
    BAND_BLASTMINER,
    BAND_BRAIN_WORMS,
    BAND_PROTEAN_PROGENITORS,
    BAND_MARGERY,
    BAND_LATE_ROKA,
    BAND_WEEPING_SKULLS,
    BAND_THERMIC_DYNAMOS,
    BAND_ORB_SPIDERS,
    BAND_SIN_BEASTS,
    BAND_WURMS_AND_MASTER,
    BAND_SLIMES_AND_MASTER,
    BAND_ELEPHANTS_AND_MASTER,
    BAND_SPHINXES,
    BAND_IRONBOUND_MECHANISTS,
    BAND_CAGES,
    BAND_CHONCHON,
    BAND_FLESHCRAFT,
    BAND_DEATH_KNIGHT_DRAUGR,
    BAND_MIXED_WRAITHS,
    NUM_BANDS                   // always last
};

enum proximity_type   // proximity to player to create monster
{
    PROX_ANYWHERE,
    PROX_CLOSE_TO_PLAYER,
    PROX_AWAY_FROM_PLAYER,
    PROX_AWAY_FROM_STAIRS,
    PROX_AWAY_FROM_ENTRANCE,
};

enum mgen_flag
{
    MG_NONE         = 0x000,
    MG_PERMIT_BANDS = 0x001, ///< allow placing band members too
    MG_FORCE_PLACE  = 0x002,
    MG_FORCE_BEH    = 0x004,
    MG_AUTOFOE      = 0x008, ///< will automatically choose in-sight foe (if friendly)
    MG_PATROLLING   = 0x010,
    MG_BAND_MINION  = 0x020,
    MG_DONT_COME    = 0x040, ///< suppress the "comes into view" spam
                   // 0x080, ///< was MG_DONT_CAP
    MG_FORBID_BANDS = 0x100, ///< override MG_PERMIT_BANDS
    MG_NO_OOD       = 0x200, ///< don't choose out-of-depth random monsters
    MG_PREFER_LAND  = 0x400, ///< don't place monsters in deep water / lava if
                             ///  they could be placed on land / shallow water
                             ///  instead.
    MG_SEE_SUMMONER = 0x800, ///< will always be generated in sight of its
                             ///  summoner
};
DEF_BITFIELD(mgen_flags, mgen_flag);
