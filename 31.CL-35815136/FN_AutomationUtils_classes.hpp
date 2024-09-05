#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AutomationUtils
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void TakeGameplayAutomationScreenshot(FString ScreenshotName, float MaxGlobalError, float MaxLocalError, FString MapNameOverride); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E130174(relative to base address)
	};

}
