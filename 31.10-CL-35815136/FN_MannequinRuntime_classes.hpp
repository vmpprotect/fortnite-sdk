#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MannequinRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void FireMannequinAnalytics_Interact(AFortPlayerController* Controller, ECreativeMannequinAnalyticsInteractType InteractType, UFortItemDefinition* Character, UFortItemDefinition* BackBling); // Flags: Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7515E9374(relative to base address)
	};

}
