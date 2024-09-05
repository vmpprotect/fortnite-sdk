#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TempestRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TempestRuntime.FortAIControllerComponent_Tempest
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UFortAIControllerComponent_Tempest : public UFortControllerComponent	
	{
	public:
		UFortTimeOfDayWeatherComponent* WeatherComponent; // 0xA8(0x8)
		unsigned char UnknownData00_7[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TempestRuntime.FortAIControllerComponent_Tempest");
			return ret;
		}
	};


	// Class TempestRuntime.FortCheatManager_Tempest
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCheatManager_Tempest : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TempestRuntime.FortCheatManager_Tempest");
			return ret;
		}

		void EndTempestStorm(FString StormName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
	};


	// Class TempestRuntime.TempestMovementComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x1B0 - 0xA0)
	class UTempestMovementComponent : public UGameFrameworkComponent	
	{
	public:
		FTempestReplicatedMovementData MovementData; // 0xA0(0x50)
		FMulticastInlineDelegate OnTempestMovementStuck; // 0xF0(0x10)
		FMulticastInlineDelegate OnTempestSafeZoneStateChanged; // 0x100(0x10)
		ETempestMovementMode MovementMode; // 0x110(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		UEnvQuery* FindNextMovementLocationQuery; // 0x118(0x8)
		AFortAthenaPatrolPath* MovementPath; // 0x120(0x8)
		FScalableFloat MovementSpeed; // 0x128(0x28)
		FScalableFloat RotationSpeed; // 0x150(0x28)
		bool bShouldIgnoreZMovement : 1; // 0x178:0(0x1)
		bool bFloatOnWater : 1; // 0x178:1(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x179(0x7) UNKNOWN PROPERTY
		FScalableFloat WaterTraceZOffset; // 0x180(0x28)
		unsigned char UnknownData02_7[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TempestRuntime.TempestMovementComponent");
			return ret;
		}

		void OnRep_MovementData(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF751562290(relative to base address)
	};


	// Class TempestRuntime.TempestStateMachineComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xD0 (0x170 - 0xA0)
	class UTempestStateMachineComponent : public UGameFrameworkComponent	
	{
	public:
		bool bDestroyOnCompletion; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FScalableFloat FormationDuration; // 0xA8(0x28)
		FScalableFloat ActiveDuration; // 0xD0(0x28)
		FScalableFloat DissipationDuration; // 0xF8(0x28)
		FTempestStateInfo CurrentStateInfo; // 0x120(0xC)
		unsigned char UnknownData01_6[0x1C]; // 0x12C(0x1C) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTempestStateChangedDelegate; // 0x148(0x10)
		unsigned char UnknownData02_7[0x18]; // 0x158(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TempestRuntime.TempestStateMachineComponent");
			return ret;
		}

		void OnRep_CurrentStateInfo(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751562250(relative to base address)
		FTempestStateInfo GetCurrentStateInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751562228(relative to base address)
		float GetCurrentStateCompletionPercentage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751562200(relative to base address)
		ETempestState GetCurrentState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE15548(relative to base address)
		void ForceDissipate(FString InDissipationReason); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751562164(relative to base address)
	};

}
