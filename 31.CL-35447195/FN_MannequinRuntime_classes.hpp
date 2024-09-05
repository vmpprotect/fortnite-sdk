#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MannequinRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MannequinRuntime.MannequinAnalyticsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UMannequinAnalyticsComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MannequinRuntime.MannequinAnalyticsComponent");
			return ret;
		}

		void FireMannequinAnalytics_Interact(AFortPlayerController Controller, ECreativeMannequinAnalyticsInteractType InteractType, UFortItemDefinition Character, UFortItemDefinition BackBling); // Flags: Native|Public|BlueprintCallable|Const 0x7FF414D62198
	};

}
