#include "global.h"
#include "pokevial.h"
#include "constants/items.h"
#include "graphics.h"
#include "math_util.h"
#include "random.h"

static void PokevialFixDoseOverflow(void);

static void PokevialInit()
{
    if (gSaveBlock3Ptr->pokevial.Size < VIAL_MIN_SIZE)
    {
        gSaveBlock3Ptr->pokevial.Size = VIAL_MIN_SIZE;
        gSaveBlock3Ptr->pokevial.Dose = VIAL_MIN_SIZE;
    }
}

u32 PokevialGetDose()
{
    PokevialInit();
    return gSaveBlock3Ptr->pokevial.Dose;
}

u32 PokevialGetSize()
{
    PokevialInit();
    return gSaveBlock3Ptr->pokevial.Size;
}

void PokevialSizeUp(u8 sizeIncrease)
{
    gSaveBlock3Ptr->pokevial.Size = ((PokevialGetSize() + sizeIncrease) > VIAL_MAX_SIZE ? VIAL_MAX_SIZE : gSaveBlock3Ptr->pokevial.Size + sizeIncrease);
}

void PokevialDoseUp(u8 doseIncrease)
{
    gSaveBlock3Ptr->pokevial.Dose = ((PokevialGetDose() + doseIncrease) > gSaveBlock3Ptr->pokevial.Size ? gSaveBlock3Ptr->pokevial.Size : gSaveBlock3Ptr->pokevial.Dose + doseIncrease);
}

void PokevialSizeDown(u8 sizeDecrease)
{
    gSaveBlock3Ptr->pokevial.Size = ((PokevialGetSize() - sizeDecrease) < VIAL_MIN_SIZE ? VIAL_MIN_SIZE : (gSaveBlock3Ptr->pokevial.Size - sizeDecrease));
    PokevialFixDoseOverflow();
}

void PokevialDoseDown(u8 doseDecrease)
{
    gSaveBlock3Ptr->pokevial.Dose = (doseDecrease > PokevialGetDose()) ? EMPTY_VIAL : (gSaveBlock3Ptr->pokevial.Dose - doseDecrease);
}

static void PokevialFixDoseOverflow(void)
{
    PokevialDoseUp(0);
}

bool32 PokevialRefill()
{
    if (PokevialGetDose() == PokevialGetSize())
        return FALSE;

    gSaveBlock3Ptr->pokevial.Dose = gSaveBlock3Ptr->pokevial.Size;
    return TRUE;
}

const u32 *const pokevialIconIndex[VIAL_NUM_STATES] =
{
    gItemIcon_Pokevial0,
    gItemIcon_Pokevial1,
    gItemIcon_Pokevial2,
    gItemIcon_Pokevial3,
    gItemIcon_Pokevial4,
    gItemIcon_Pokevial5,
    gItemIcon_Pokevial6,
    gItemIcon_Pokevial7,
    gItemIcon_Pokevial8,
    gItemIcon_Pokevial9,
    gItemIcon_Pokevial
};

static u32 PokevialGetVialPercent(void)
{
    u32 dose = PokevialGetDose(), size = PokevialGetSize(), vialPercent = 0;

    if (dose == EMPTY_VIAL)
        return POKEVIAL_ICON_PERCENT_0;

    if (dose == size)
        return POKEVIAL_ICON_PERCENT_100;

    vialPercent = (dose * 10 / size);

    return (vialPercent == EMPTY_VIAL && dose > EMPTY_VIAL) ? POKEVIAL_ICON_PERCENT_10 : vialPercent;
}

const void *PokevialGetDoseIcon(void)
{
    return pokevialIconIndex[PokevialGetVialPercent()];
}
