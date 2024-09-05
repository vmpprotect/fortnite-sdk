#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AutomationUtils
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AutomationUtils.AutomationUtilsBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AutomationUtils.AutomationUtilsBlueprintLibrary");
			return ret;
		}

		void TakeGameplayAutomationScreenshot(FString ScreenshotName, float MaxGlobalError, float MaxLocalError, FString MapNameOverride); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41466FC38
	};

}
