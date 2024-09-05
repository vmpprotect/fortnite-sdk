#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SentryGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SentryGameplayRuntime.SentryLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USentryLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SentryGameplayRuntime.SentryLibrary");
			return ret;
		}

		float Sentry_CalculateTargetingLaserScale(AActor* TurretActor, FTransform& CurrentTurretAimTransform, FVector& LaserOrigin, float MaxLaserRange, float DistMult); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75074BB70(relative to base address)
	};

}
