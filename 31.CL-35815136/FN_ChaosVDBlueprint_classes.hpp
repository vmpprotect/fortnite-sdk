#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosVDBlueprint
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ChaosVDBlueprint.ChaosVDRuntimeBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChaosVDRuntimeBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosVDBlueprint.ChaosVDRuntimeBlueprintLibrary");
			return ret;
		}

		void RecordDebugDrawVector(UObject* WorldContext, FVector& InStartLocation, FVector& InVector, FName Tag, FLinearColor Color); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7521F75D0(relative to base address)
		void RecordDebugDrawSphere(UObject* WorldContext, FVector& InCenter, float Radius, FName Tag, FLinearColor Color); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7521F7830(relative to base address)
		void RecordDebugDrawLine(UObject* WorldContext, FVector& InStartLocation, FVector& InEndLocation, FName Tag, FLinearColor Color); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7521F75D0(relative to base address)
		void RecordDebugDrawBox(UObject* WorldContext, FBox& InBox, FName Tag, FLinearColor Color); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7521F73B4(relative to base address)
	};

}
