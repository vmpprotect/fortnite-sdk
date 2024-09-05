#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SentryGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		float Sentry_CalculateTargetingLaserScale(AActor TurretActor, FTransform& CurrentTurretAimTransform, FVector& LaserOrigin, float MaxLaserRange, float DistMult); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BE6018
	};

}
