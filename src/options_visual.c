#include "global.h"
#include "text.h"
#include "ui_options_menu.h"

// ***********************************************************************
// Visual Settings: Color
// ***********************************************************************
enum optionVisualColor GetVisualColor(void)
{
    return gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR];
}

// ***********************************************************************
// Visual Settings: Font Switcher
// ***********************************************************************

#include "string_util.h"

static u32 GetFontSwitcherOption(void)
{
    return gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_FONT_SWITCHER];
}

u32 GetFontSwitcherFontId(u8 fontId)
{
    if (GetFontSwitcherOption() == VISUAL_OPTION_FONT_SWITCHER_FIRERED)
        fontId = FONT_SHORT;

    return fontId;
}

// ***********************************************************************
// Visual Settings: Units Switcher
// ***********************************************************************

static u32 GetUnitsOption(void)
{
    return gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_UNITS];
}

static bool32 IsDecimalSeparatorPeriod(void)
{
    return (GetUnitsOption() < VISUAL_OPTION_UNITS_IMPERIAL_COMMA);
}

bool32 IsMeasurementSystemImperial(void)
{
    return (GetUnitsOption() % 2) == 0;
}

u32 GetDecimalSeparatorChar(void)
{
    if (IsDecimalSeparatorPeriod())
        return CHAR_PERIOD;
    else
        return CHAR_COMMA;
}

// ***********************************************************************
// Visual Settings: Color Variation
// ***********************************************************************

enum optionsVisualColorVariationValues GetColorVariationOption(void)
{
    return gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR_VARIATION];
}
