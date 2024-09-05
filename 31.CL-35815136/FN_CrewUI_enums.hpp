#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CrewUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/CrewUI.EBattlePassCrewContentState
	enum EBattlePassCrewContentState
	{
		EBattlePassCrewContentState__BattlePass = 0,
		EBattlePassCrewContentState__Crew = 1,
		EBattlePassCrewContentState__CrewSubscribed = 2,
	};


	// Enum /Script/CrewUI.EFortProgressiveContentInterfaceCloseReason
	enum EFortProgressiveContentInterfaceCloseReason
	{
		EFortProgressiveContentInterfaceCloseReason__Normal = 0,
		EFortProgressiveContentInterfaceCloseReason__SubscriptionPurchased = 1,
	};


	// Enum /Script/CrewUI.EFortProgressiveContentType
	enum EFortProgressiveContentType
	{
		EFortProgressiveContentType__ProgressiveTableOfContentsScreen = 0,
		EFortProgressiveContentType__ProgressiveItemScreen = 1,
	};


	// Enum /Script/CrewUI.EBattlePassPurchaseButtonCurrencyType
	enum EBattlePassPurchaseButtonCurrencyType
	{
		EBattlePassPurchaseButtonCurrencyType__None = 0,
		EBattlePassPurchaseButtonCurrencyType__Mtx = 1,
		EBattlePassPurchaseButtonCurrencyType__RealMoney = 2,
	};


	// Enum /Script/CrewUI.EBattlePassPurchaseState
	enum EBattlePassPurchaseState
	{
		EBattlePassPurchaseState__Purchase = 0,
		EBattlePassPurchaseState__Confirm = 1,
	};


	// Enum /Script/CrewUI.ECrewPurchaseButtonState
	enum ECrewPurchaseButtonState
	{
		ECrewPurchaseButtonState__None = 0,
		ECrewPurchaseButtonState__Purchase = 1,
		ECrewPurchaseButtonState__Rejoin = 2,
		ECrewPurchaseButtonState__Continue = 3,
	};

}