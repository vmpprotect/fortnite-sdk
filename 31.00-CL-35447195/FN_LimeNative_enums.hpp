#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LimeNative
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/LimeNative.ELimePawnEmotionalState
	enum ELimePawnEmotionalState
	{
		ELimePawnEmotionalState__Default = 0,
		ELimePawnEmotionalState__Happy = 1,
		ELimePawnEmotionalState__Sad = 2,
	};


	// Enum /Script/LimeNative.EFortLimeUefnAnalyticsEvents
	enum EFortLimeUefnAnalyticsEvents
	{
		EFortLimeUefnAnalyticsEvents__None = 0,
		EFortLimeUefnAnalyticsEvents__UEFN_Heartbeat = 1,
		EFortLimeUefnAnalyticsEvents__UEFN_ProjectSessionSummary = 2,
	};


	// Enum /Script/LimeNative.EFortLimeGameplayAnalyticsEvents
	enum EFortLimeGameplayAnalyticsEvents
	{
		EFortLimeGameplayAnalyticsEvents__None = 0,
		EFortLimeGameplayAnalyticsEvents__Core_StartZone = 1,
		EFortLimeGameplayAnalyticsEvents__PlayerContextLocationPerMinute = 2,
	};


	// Enum /Script/LimeNative.ELimePawnEmotionalStateMappingTest
	enum ELimePawnEmotionalStateMappingTest
	{
		ELimePawnEmotionalStateMappingTest__LessOrEqual = 0,
		ELimePawnEmotionalStateMappingTest__GreaterOrEqual = 1,
	};

}
