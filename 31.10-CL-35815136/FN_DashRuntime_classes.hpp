#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DashRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DashRuntime.FortGameplayAbility_Dash
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x170 (0xCB0 - 0xB40)
	class UFortGameplayAbility_Dash : public UFortGameplayAbility	
	{
	public:
		AFortPlayerPawn* OwningPawn; // 0xB40(0x8)
		FScalableFloat UseMovementForTargetDeadzone; // 0xB48(0x28)
		FScalableFloat DashDistance; // 0xB70(0x28)
		FScalableFloat DashEndVelocity; // 0xB98(0x28)
		FScalableFloat bDashEndVelocityUseZ; // 0xBC0(0x28)
		FScalableFloat bUseDynamicZTarget; // 0xBE8(0x28)
		FScalableFloat DynamicZMaxReverseAngle; // 0xC10(0x28)
		FScalableFloat DynamicZMinReverseAngle; // 0xC38(0x28)
		FScalableFloat DynamicZReverseModifier; // 0xC60(0x28)
		FScalableFloat DynamicZReverseTargetMinZ; // 0xC88(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DashRuntime.FortGameplayAbility_Dash");
			return ret;
		}

		float GetMoveDistance(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750769160(relative to base address)
		FVector GetEndMovementVelocity(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750769124(relative to base address)
		FVector GetDashTarget(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507690EC(relative to base address)
	};


	// Class DashRuntime.FortMovementMode_DashRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x58 (0x98 - 0x40)
	class UFortMovementMode_DashRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x40(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DashRuntime.FortMovementMode_DashRuntimeData");
			return ret;
		}
	};


	// Class DashRuntime.FortMovementMode_ExtDash
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x8 (0x128 - 0x120)
	class UFortMovementMode_ExtDash : public UFortMovementMode_BaseExtLogic	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x120(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DashRuntime.FortMovementMode_ExtDash");
			return ret;
		}

		bool TryActivateDashMME(AFortPawn* TargetPawn, UClass* DashMME, FFortMovementMode_DashCreationData& CreationData, UFortMovementMode_BaseExtRuntimeData* OutRuntimeData); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75076918C(relative to base address)
		EFortMovementModeExt_UpdateResult BP_UpdateBeforeCharacterMovement(float DeltaTime); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
