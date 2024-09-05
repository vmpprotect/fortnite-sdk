#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GiftingUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/GiftingUI.EGiftingPresentationMode
	enum EGiftingPresentationMode
	{
		EGiftingPresentationMode__ConfirmPurchase = 0,
		EGiftingPresentationMode__WrapOptions = 1,
		EGiftingPresentationMode__GiftingProcess = 2,
		EGiftingPresentationMode__GiftingError = 3,
		EGiftingPresentationMode__GiftConfirmed = 4,
		EGiftingPresentationMode__None = 5,
	};


	// Enum /Script/GiftingUI.EGiftingPricePresentationMode
	enum EGiftingPricePresentationMode
	{
		EGiftingPricePresentationMode__MtxCurrency = 0,
		EGiftingPricePresentationMode__RealMoney = 1,
		EGiftingPricePresentationMode__Hidden = 2,
	};


	// Enum /Script/GiftingUI.EFilterType
	enum EFilterType
	{
		EFilterType__All = 0,
		EFilterType__Party = 1,
	};


	// Enum /Script/GiftingUI.EGiftingScreenPresentationMode
	enum EGiftingScreenPresentationMode
	{
		EGiftingScreenPresentationMode__ItemList = 0,
		EGiftingScreenPresentationMode__NoContent = 1,
	};


	// Enum /Script/GiftingUI.ERecipientPresentationMode
	enum ERecipientPresentationMode
	{
		ERecipientPresentationMode__Loading = 0,
		ERecipientPresentationMode__GiftPrice = 1,
		ERecipientPresentationMode__AlreadyOwned = 2,
		ERecipientPresentationMode__Unavailable = 3,
	};

}
