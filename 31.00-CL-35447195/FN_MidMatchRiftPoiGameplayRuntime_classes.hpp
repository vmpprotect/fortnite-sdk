#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MidMatchRiftPoiGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMidmatchRiftPoiCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager");
			return ret;
		}

		void SpawnMidmatchPoiNearestLocation(FVector& Location, int32_t DataLayerInfoIndex); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414D04CB8
		void SpawnMidmatchPoiFurthestLocation(FVector& Location, int32_t DataLayerInfoIndex); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414D04BD8
		void MidmatchRiftPoiSpawnNearestToPawnLocation(int32_t DataLayerInfoIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D04AF8
		void MidmatchRiftPoiSpawnFurthestFromPawnLocation(int32_t DataLayerInfoIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D04A18
	};


	// Class MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor
	// Inherited from AActor -> UObject
	// Size: 0xD0 (0x360 - 0x290)
	class AMidMatchRiftPoiManagerActor : public AActor	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		bool bCanBeMarked : 1; // 0x298:0(0x1)
		bool bBlockMarking : 1; // 0x298:1(0x1)
		unsigned char UnknownData04_5[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		FMarkedActorDisplayInfo MarkerDisplay; // 0x2A0(0xA0)
		FVector MarkerPositionOffset; // 0x340(0x18)
		bool bDynamicLandBrushApplied; // 0x358(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x359(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor");
			return ret;
		}

		void SetDynamicLandBrush(FSlateBrush& LandIcon); // Flags: Final|BlueprintCosmetic|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414D04D98
	};


	// Class MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator
	// Inherited from AActor -> UObject
	// Size: 0xD0 (0x360 - 0x290)
	class AMidmatchRiftPoiSpawnIndicator : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		bool bCanBeMarked : 1; // 0x2A0:0(0x1)
		bool bBlockMarking : 1; // 0x2A0:1(0x1)
		unsigned char UnknownData03_5[0x7]; // 0x2A1(0x7) UNKNOWN PROPERTY
		FMarkedActorDisplayInfo MarkerDisplay; // 0x2A8(0xA0)
		FVector MarkerPositionOffset; // 0x348(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator");
			return ret;
		}

		void TeleportVehicleActor(AActor VehicleActor, FVector& TeleportLocation); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D04F58
		bool IsActorInDataLayerInstance(AActor Actor, UDataLayerInstance DataLayerInstance); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D04E78
	};

}
