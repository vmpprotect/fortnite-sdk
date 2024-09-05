#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ContextualActionCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ContextualActionCodeRuntime.FortMovementMode_ExtLogicBaseSwinging
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x38 (0x158 - 0x120)
	class UFortMovementMode_ExtLogicBaseSwinging : public UFortMovementMode_BaseExtLogic	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		UClass SwingingAnimationLayer; // 0x128(0x8)
		float GravitationalAcceleration; // 0x130(0x4)
		float MinimumInitialSpeed; // 0x134(0x4)
		float AccelerationMultiplier; // 0x138(0x4)
		float DefaultAcceleration; // 0x13C(0x4)
		float NonBrakingFriction; // 0x140(0x4)
		float BrakingFriction; // 0x144(0x4)
		float BrakingDeceleration; // 0x148(0x4)
		float MaxSpeed; // 0x14C(0x4)
		FGameplayTag SwingingTag; // 0x150(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x154(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicBaseSwinging");
			return ret;
		}

		void OnOwnerDBNO(); // Flags: Final|Native|Protected 0x7FF414CE77B8
	};


	// Class ContextualActionCodeRuntime.FortMovementMode_SwingingObjectRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0xC0 (0x100 - 0x40)
	class UFortMovementMode_SwingingObjectRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData01_1[0xC0]; // 0x40(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.FortMovementMode_SwingingObjectRuntimeData");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.FortMovementMode_ExtLogicSwingingObject
	// Inherited from UFortMovementMode_ExtLogicBaseSwinging -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x38 (0x190 - 0x158)
	class UFortMovementMode_ExtLogicSwingingObject : public UFortMovementMode_ExtLogicBaseSwinging	
	{
	public:
		FVector AttachOffset; // 0x158(0x18)
		FVector HandIKOffset; // 0x170(0x18)
		bool bAlignCharacterToObject; // 0x188(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x189(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicSwingingObject");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.FortMovementMode_SwingingRopeRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x28 (0x68 - 0x40)
	class UFortMovementMode_SwingingRopeRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x40(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.FortMovementMode_SwingingRopeRuntimeData");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.FortMovementMode_ExtLogicSwingingRope
	// Inherited from UFortMovementMode_ExtLogicBaseSwinging -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x38 (0x190 - 0x158)
	class UFortMovementMode_ExtLogicSwingingRope : public UFortMovementMode_ExtLogicBaseSwinging	
	{
	public:
		UFortInputMappingContext InputMappingContext; // 0x158(0x8)
		UInputAction SwingingAscendAction; // 0x160(0x8)
		UInputAction SwingingAscendActionRelease; // 0x168(0x8)
		float MinimumAscendRange; // 0x170(0x4)
		float AscendMaxSpeed; // 0x174(0x4)
		float DescendMaxSpeed; // 0x178(0x4)
		float AscendingSettleInterpSpeed; // 0x17C(0x4)
		float AscendingSettleAngleThreshold; // 0x180(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x184(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicSwingingRope");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.FortPlayerAnimInstance_Hijacker
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x4C0 - 0x4B8)
	class UFortPlayerAnimInstance_Hijacker : public UFortBaseLayerAnimInstance	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x4B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.FortPlayerAnimInstance_Hijacker");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.FortPlayerAnimInstance_SwingingObject
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x48 (0x500 - 0x4B8)
	class UFortPlayerAnimInstance_SwingingObject : public UFortBaseLayerAnimInstance	
	{
	public:
		FVector2D RelativeVelocity2D; // 0x4B8(0x10)
		FVector HandAttachLocation; // 0x4C8(0x18)
		float LeftHandIKAlpha; // 0x4E0(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x4E4(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.FortPlayerAnimInstance_SwingingObject");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.FortSwingingObject
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x50 (0x9D8 - 0x988)
	class AFortSwingingObject : public ABuildingGameplayActor	
	{
	public:
		float MaxSwingAngle; // 0x988(0x4)
		bool bUseCharacterSwingMovementMode; // 0x98C(0x1)
		bool bCanAscend; // 0x98D(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x98E(0x2) UNKNOWN PROPERTY
		FVector FixedSwingDirection; // 0x990(0x18)
		bool bUseFixedSwingDirection; // 0x9A8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x9A9(0x3) UNKNOWN PROPERTY
		float ForwardInteractOffset; // 0x9AC(0x4)
		float RightInteractOffset; // 0x9B0(0x4)
		bool bUseClientTransformSmoothing; // 0x9B4(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x9B5(0x3) UNKNOWN PROPERTY
		float SmoothingWindow; // 0x9B8(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x9BC(0x4) UNKNOWN PROPERTY
		USceneComponent AttachPoint; // 0x9C0(0x8)
		unsigned char UnknownData09_7[0x10]; // 0x9C8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.FortSwingingObject");
			return ret;
		}

		void OnStartSwing_BP(AFortPlayerPawn AttachedActor); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE7978
		void OnEndSwing_BP(AFortPlayerPawn AttachedActor); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE7898
	};


	// Class ContextualActionCodeRuntime.FortSwingingRope
	// Inherited from AFortSwingingObject -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x38 (0xA10 - 0x9D8)
	class AFortSwingingRope : public AFortSwingingObject	
	{
	public:
		UCableComponent CableComponent; // 0x9D8(0x8)
		float UnattachedCableGravityScale; // 0x9E0(0x4)
		float UnattachedSolverIterations; // 0x9E4(0x4)
		float CableLengthMultiplier; // 0x9E8(0x4)
		unsigned char UnknownData01_7[0x24]; // 0x9EC(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.FortSwingingRope");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.HijackerComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE8 (0x190 - 0xA8)
	class UHijackerComponent : public UFortPawnComponent	
	{
	public:
		FVector HijackOffset; // 0xA8(0x18)
		FText StartHijackInteractText; // 0xC0(0x10)
		FText StartHijackInteractSubText; // 0xD0(0x10)
		FText CompleteHijackInteractText; // 0xE0(0x10)
		FText CompleteHijackInteractSubText; // 0xF0(0x10)
		UClass HijackerAnimInstanceClass; // 0x100(0x8)
		float RequiredInteractionDuration; // 0x108(0x4)
		float HijackCooldown; // 0x10C(0x4)
		FVector BaseThrownVelocity; // 0x110(0x18)
		float AccelerationThresholdForEjectingHijacker; // 0x128(0x4)
		float MinimumSpeedForEjectingHijacker; // 0x12C(0x4)
		EHijackingStatus HijackingStatus; // 0x130(0x1)
		unsigned char UnknownData01_7[0x5F]; // 0x131(0x5F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.HijackerComponent");
			return ret;
		}

		bool TryHijack(AActor VehicleTarget, FInteractionType& InteractionType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE8698
		void OnStartHijack(AActor VehicleTarget); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414CE85B8
		void OnCompleteHijack(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414CE84D8
		void HandleOwnerJumpInput(bool bPressed); // Flags: Final|Native|Private 0x7FF414CE83F8
		void EjectHijacker(AActor DamageCauser, float Damage, FVector EventLocation); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 0x7FF414CE8318
		void CancelHijack_Server(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414CE8238
		void CancelHijack_NetMulticast(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414CE8158
		void BP_OnStartHijack(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE8078
		void BP_OnHijackInterrupted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE7F98
		void BP_OnHijackCancelled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE7EB8
		void BP_OnCompleteHijack(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE7DD8
		void BP_OnCleanup(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE7CF8
		void BP_GetThrownVelocity(AActor DamageCauser, float Damage, FVector& EventLocation, FVector& OutVelocity); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF414CE7C18
		void BP_CanStartHijack(bool& OutCanStartHijack); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414CE7B38
		void BP_CanCompleteHijack(bool& OutCanCompleteHijack); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414CE7A58
	};


	// Class ContextualActionCodeRuntime.Hijack_InteractionOverrideComponent
	// Inherited from UFortVehicleInteractionOverrideComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UHijack_InteractionOverrideComponent : public UFortVehicleInteractionOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.Hijack_InteractionOverrideComponent");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.RappellingComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x7F0 (0x898 - 0xA8)
	class URappellingComponent : public UFortPawnComponent	
	{
	public:
		UInputAction RappelInputAction; // 0xA8(0x8)
		UInputAction RappelEndInputAction; // 0xB0(0x8)
		UInputMappingContext RappelInputMappingContext; // 0xB8(0x8)
		float ForwardTraceOffset; // 0xC0(0x4)
		float DownwardTraceLength; // 0xC4(0x4)
		float ConnectionTraceOffset; // 0xC8(0x4)
		float MaxDistanceToRappellingEdge; // 0xCC(0x4)
		float InitiateSwingAngleThreshold; // 0xD0(0x4)
		float InitiateSwingSpeedThreshold; // 0xD4(0x4)
		float MinDistanceFromRappelPointToSwing; // 0xD8(0x4)
		float RappellingSwingTraceLength; // 0xDC(0x4)
		float RappellingSwingRecoveryForce; // 0xE0(0x4)
		float RappellingSwingLaunchSpeed; // 0xE4(0x4)
		float RappellingSwingVerticalAttachOffset; // 0xE8(0x4)
		float RappellingSwingVerticalDistanceThresholdToSlow; // 0xEC(0x4)
		float RappellingSwingVerticalMaxSpeedWhileSlowing; // 0xF0(0x4)
		float RappellingSwingVerticalMinDistanceToAttach; // 0xF4(0x4)
		float RappellingSwingVerticalMaxDistanceToAttach; // 0xF8(0x4)
		FGameplayTag RappellingSwingParametersTag; // 0xFC(0x4)
		FSwingingControlParams RappellingSwingParameters; // 0x100(0x738)
		ERappellingState ReplicatedRappellingState; // 0x838(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x839(0x7) UNKNOWN PROPERTY
		FVector RappellingEdge; // 0x840(0x18)
		FVector RappellingNormal; // 0x858(0x18)
		URappellingSwingMovementControls MovementControls; // 0x870(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x878(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.RappellingComponent");
			return ret;
		}

		void TestToggleGravity_Server(); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414CE9498
		void TestToggleGravity(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE93B8
		void StartRappellingSwing_Server(); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414CE92D8
		void StartRappelling_Server(FVector NewGravityDirection, FVector ClientRappellingEdge, FVector ClientRappellingNormal); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 0x7FF414CE91F8
		void StartRappelling(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE9118
		void RappellingCorrectFallingRotation_Client(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414CE9038
		void OnValidTargeting(); // Flags: Event|Public|BlueprintEvent 0x7FF414CE8F58
		void OnStartRappelling(); // Flags: Event|Public|BlueprintEvent 0x7FF414CE8E78
		void OnRep_RappellingState(); // Flags: Final|Native|Protected 0x7FF414CE8D98
		void OnOwnerMovementModeChanged(ACharacter Character, TEnumAsByte PreviousMovementMode, char PreviousCustomMode); // Flags: Final|Native|Protected 0x7FF414CE8CB8
		void OnInvalidTargeting(); // Flags: Event|Public|BlueprintEvent 0x7FF414CE8BD8
		void OnEndRappelling(); // Flags: Event|Public|BlueprintEvent 0x7FF414CE8AF8
		void OnCapsuleHit(UPrimitiveComponent HitComponent, AActor OtherActor, UPrimitiveComponent OtherComp, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Protected|HasOutParms|HasDefaults 0x7FF414CE8A18
		void EndRappellingSwing_Server(); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414CE8938
		void EndRappelling_Server(); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414CE8858
		void EndRappelling(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE8778
	};


	// Class ContextualActionCodeRuntime.RappellingSwingMovementControls
	// Inherited from UFortMovementControls -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class URappellingSwingMovementControls : public UFortMovementControls	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.RappellingSwingMovementControls");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.SwingingObjectCameraMode
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x30 (0x1D30 - 0x1D00)
	class USwingingObjectCameraMode : public UFortCameraMode_ThirdPerson	
	{
	public:
		FVector MaxSwingAdditionalViewTargetOffset; // 0x1D00(0x18)
		float MaxSwingFOV; // 0x1D18(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x1D1C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.SwingingObjectCameraMode");
			return ret;
		}
	};


	// Class ContextualActionCodeRuntime.SwingingObjectComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x120 - 0xA8)
	class USwingingObjectComponent : public UFortPawnComponent	
	{
	public:
		float JumpHorizontalSpeedBoost; // 0xA8(0x4)
		float JumpVerticalSpeedBoost; // 0xAC(0x4)
		float MinimumAscendRange; // 0xB0(0x4)
		float AscendMaxSpeed; // 0xB4(0x4)
		float DescendMaxSpeed; // 0xB8(0x4)
		float AscendingSettleInterpSpeed; // 0xBC(0x4)
		float AscendingSettleAngleThreshold; // 0xC0(0x4)
		float MinimumTimeBetweenRepeatSwings; // 0xC4(0x4)
		float MaximumAngleForAutoAttach; // 0xC8(0x4)
		float MinimumSpeedForAutoAttach; // 0xCC(0x4)
		UClass SwingingRopeMovementModeExtension; // 0xD0(0x8)
		UClass SwingingObjectMovementModeExtension; // 0xD8(0x8)
		ESwingingState SwingingState; // 0xE0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr ReplicatedSwingingObject; // 0xE4(0x8)
		unsigned char UnknownData03_7[0x34]; // 0xEC(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualActionCodeRuntime.SwingingObjectComponent");
			return ret;
		}

		void OnRep_SwingingObject(); // Flags: Final|Native|Private 0x7FF414CE9C78
		void HandleOwnerJumpInput(bool bPressed); // Flags: Final|Native|Private 0x7FF414CE9B98
		void GetSwingDeltaAngle(FRotator& OutSwingRotation, FRotator& OutDeltaRotation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CE9AB8
		FRotator GetAimRotation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CE99D8
		void DetachFromObject_Server(bool bJumpExit); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414CE98F8
		void BP_OnStartSwing(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE9818
		void BP_OnEndSwing(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE9738
		void BP_CanStartSwing(AFortSwingingObject SwingTarget, bool& bCanStartSwing); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414CE9658
		void AttachToObject_Server(AFortSwingingObject Object); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414CE9578
	};

}
