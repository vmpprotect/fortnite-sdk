#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EventScreenBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/EventScreenBase.EEventScreenView
	enum EEventScreenView
	{
		EEventScreenView__None = 0,
		EEventScreenView__LandingPage = 1,
		EEventScreenView__RewardPreview = 2,
		EEventScreenView__MoreInfo = 3,
		EEventScreenView__PurchaseLevels = 4,
		EEventScreenView__PurchasePremiumTrack = 5,
		EEventScreenView__LoadError = 6,
	};


	// Enum /Script/EventScreenBase.EEventScreenRewardPreviewType
	enum EEventScreenRewardPreviewType
	{
		EEventScreenRewardPreviewType__None = 0,
		EEventScreenRewardPreviewType__RewardTrack = 1,
		EEventScreenRewardPreviewType__SpecialItem = 2,
		EEventScreenRewardPreviewType__SpecialPremiumItem = 3,
	};

}
