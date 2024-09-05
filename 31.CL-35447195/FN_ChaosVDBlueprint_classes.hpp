#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosVDBlueprint
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void RecordDebugDrawVector(UObject WorldContext, FVector& InStartLocation, FVector& InVector, FName tag, FLinearColor Color); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EC78C0
		void RecordDebugDrawSphere(UObject WorldContext, FVector& InCenter, float Radius, FName tag, FLinearColor Color); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EC77E0
		void RecordDebugDrawLine(UObject WorldContext, FVector& InStartLocation, FVector& InEndLocation, FName tag, FLinearColor Color); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EC7700
		void RecordDebugDrawBox(UObject WorldContext, FBox& InBox, FName tag, FLinearColor Color); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EC7620
	};

}
