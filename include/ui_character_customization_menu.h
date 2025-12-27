#ifndef GUARD_CHARACTER_CUSTOMIZATION_MENU_H
#define GUARD_CHARACTER_CUSTOMIZATION_MENU_H

#include "main.h"

void Task_OpenCharacterCustomizationMenuFromStartMenu(u8 taskId);
void CB2_CustomizationFromStartMenu(void);
void Character_Customization_Menu_Init(MainCallback callback);
void SetPlayerPalette(u32 paletteTag, struct Sprite *sprite);
void SetPlayerAvatarToChampion(void);
void SetPlayerBackPicPalette(u32 picId, struct Sprite *sprite);
void SetPlayerBackSlidePicPalette(u32 battler, struct Sprite *sprite);
void ResetCustomizationValuesData(void);
void CustomizeCharacterFromOverworld(void);
void SetCustomPlayerPalette(u16 *palette, u8 (*rgbValues)[NUM_CUSTOM_COLOR_OPTIONS][NUM_COLOR_OPTIONS], u8 (*customizationValues)[NUM_CUSTOMIZATION_PARTS]);

#endif // GUARD_CHARACTER_CUSTOMIZATION_MENU_H
