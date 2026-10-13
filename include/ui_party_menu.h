#ifndef GUARD_UI_PARTY_MENU_H
#define GUARD_UI_PARTY_MENU_H

#include "party_menu.h"

void PartyMenu_Init(enum PartyMenuType menuType, enum PartyMenuLayout layout, u8 partyAction, bool8 keepCursorPos, u8 messageId, TaskFunc task, MainCallback callback);

#endif // GUARD_UI_PARTY_MENU_H
