#include "global.h"
#include "text.h"
#include "rtc.h"
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
// Visual Settings: Time Switcher
// ***********************************************************************

static u32 GetTimeOption(void)
{
    return gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_TIME];
}

static bool32 IsTime24Hour(void)
{
    return (GetTimeOption() == VISUAL_OPTION_24_HOUR);
}

void FormatCurrentTimeForOutput(u8* txtPtr)
{
    RtcCalcLocalTime();
    FormatDecimalTimeWithoutSeconds(txtPtr,gLocalTime.hours,gLocalTime.minutes,IsTime24Hour());
}

void FormatGivenTimeForOutput(u8* txtPtr, u32 hours, u32 minutes)
{
    FormatDecimalTimeWithoutSeconds(txtPtr,hours,minutes,IsTime24Hour());
}

// ***********************************************************************
// Visual Settings: Color Variation
// ***********************************************************************

enum optionsVisualColorVariationValues GetColorVariationOption(void)
{
    return gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR_VARIATION];
}
