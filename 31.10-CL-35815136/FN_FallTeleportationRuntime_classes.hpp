#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FallTeleportationRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FallTeleportationRuntime.FortFallTeleportSpawnerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xC8 (0x168 - 0xA0)
	class UFortFallTeleportSpawnerComponent : public UActorComponent	
	{
	public:
		TWeakObjectPtr<UClass*> PlayerPawnReceiverClass; // 0xA0(0x20)
		UClass* ComponentToAddClass; // 0xC0(0x8)
		FScalableFloat TeleportEnabled; // 0xC8(0x28)
		FScalableFloat RemoveComponentRequestTimeOffset; // 0xF0(0x28)
		unsigned char UnknownData00_7[0x50]; // 0x118(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent");
			return ret;
		}

		void HandleWarmupCountdownEndTimeUpdated(float NewEndTime); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751365FE8(relative to base address)
		void HandleGamePhaseChanged(FFortGamePhaseUpdatedEvent& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751365F5C(relative to base address)
	};


	// Class FallTeleportationRuntime.FortFallTeleportCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortFallTeleportCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FallTeleportationRuntime.FortFallTeleportCheatManager");
			return ret;
		}

		void EnableFallTeleportationIndefinitely(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class FallTeleportationRuntime.FortFallTeleportComponentBase
	// Inherited from UActorComponent -> UObject
	// Size: 0x150 (0x1F0 - 0xA0)
	class UFortFallTeleportComponentBase : public UActorComponent	
	{
	public:
		FScalableFloat TeleportEnabled; // 0xA0(0x28)
		FScalableFloat ContinuousTeleportUpdateEnabled; // 0xC8(0x28)
		FScalableFloat ForceTeleportZHeight; // 0xF0(0x28)
		FScalableFloat SphereTraceRadius; // 0x118(0x28)
		float WalkingLocationUpdateRate; // 0x140(0x4)
		float ZHeightThresholdCheckRate; // 0x144(0x4)
		float TeleportZModifier; // 0x148(0x4)
		float DistanceFromPawnToTraceLocation; // 0x14C(0x4)
		TArray<UClass*> TeleportOnBlocklist; // 0x150(0x10)
		FName NoTeleportActorTag; // 0x160(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		FVector SafeManualLocation; // 0x168(0x18)
		UClass* TeleportGEClass; // 0x180(0x8)
		FVector TeleportLocation; // 0x188(0x18)
		FVector FallbackLocation; // 0x1A0(0x18)
		bool bValidFallbackLocation; // 0x1B8(0x1)
		bool bTeleporting; // 0x1B9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1BA(0x2) UNKNOWN PROPERTY
		int32_t TeleportLimitBeforeFail; // 0x1BC(0x4)
		int32_t TeleportCount; // 0x1C0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		AFortPlayerPawnAthena* OwningPawn; // 0x1C8(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x1D0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FallTeleportationRuntime.FortFallTeleportComponentBase");
			return ret;
		}

		void UpdateLastGroundLocation(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7513661EC(relative to base address)
		bool IsValidActorToTeleportOn(AActor* ActorToTeleportOn); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751366138(relative to base address)
		bool IsTeleportLocationValid(FVector& LocationToTest); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751366064(relative to base address)
	};

}
