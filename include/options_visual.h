#ifndef GUARD_OPTIONS_VISUAL_H
#define GUARD_OPTIONS_VISUAL_H

// Visual Settings: Font Switcher
u32 GetFontSwitcherFontId(u8 fontId);
bool32 IsMeasurementSystemImperial(void);
u32 GetDecimalSeparatorChar(void);
enum optionVisualColor GetVisualColor(void);

// Visual Settings: Color Variation
enum optionsVisualColorVariationValues GetColorVariationOption(void);

// Visual Settings: Time
void FormatGivenTimeForOutput(u8* txtPtr, u32 hours, u32 minutes);
void FormatCurrentTimeForOutput(u8* txtPtr);
#endif // GUARD_OPTIONS_VISUAL_H
