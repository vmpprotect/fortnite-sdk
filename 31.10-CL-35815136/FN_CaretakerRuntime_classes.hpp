#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CaretakerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CaretakerRuntime.FortAthenaCaretakerAIController
	// Inherited from AAthenaAIController -> AFortAIController -> AAIController -> AController -> AActor -> UObject
	// Size: 0x8 (0x610 - 0x608)
	class AFortAthenaCaretakerAIController : public AAthenaAIController	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x608(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CaretakerRuntime.FortAthenaCaretakerAIController");
			return ret;
		}

		void OnMovementModeChanged(ACharacter* CharacterOwner, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512E2A14(relative to base address)
		void DebugUpdate(float UpdateInterval); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C42CE74(relative to base address)
	};


	// Class CaretakerRuntime.FortBTTask_CaretakerMoveTo
	// Inherited from UBTTask_MoveTo -> UBTTask_BlackboardBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x30 (0x160 - 0x130)
	class UFortBTTask_CaretakerMoveTo : public UBTTask_MoveTo	
	{
	public:
		FBlackboardKeySelector FocalPointWhileMoving; // 0x130(0x28)
		TEnumAsByte<EPathObstacleAction> PathObstacleAction; // 0x158(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x159(0x3) UNKNOWN PROPERTY
		bool bEnableSlowdownAtGoal : 1; // 0x15C:0(0x1)
		bool bMoveDirectlyTowards : 1; // 0x15C:1(0x1)
		bool bStopAtGoal : 1; // 0x15C:2(0x1)
		bool bFinishMoveOnOverlap : 1; // 0x15C:3(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CaretakerRuntime.FortBTTask_CaretakerMoveTo");
			return ret;
		}
	};


	// Class CaretakerRuntime.FortNavigationFilter_Caretaker
	// Inherited from UFortNavigationFilter -> UNavigationQueryFilter -> UObject
	// Size: 0x18 (0x60 - 0x48)
	class UFortNavigationFilter_Caretaker : public UFortNavigationFilter	
	{
	public:
		float EndPointAcceptableRadius; // 0x48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UClass* EndPointFilterClass; // 0x50(0x8)
		bool bEndPointReachTestIncludesAgentRadius : 1; // 0x58:0(0x1)
		bool bEndPointReachTestIncludesGoalRadius : 1; // 0x58:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CaretakerRuntime.FortNavigationFilter_Caretaker");
			return ret;
		}
	};


	// Class CaretakerRuntime.FortAITask_CaretakerMove
	// Inherited from UFortAbilityTask_MoveAI -> UFortAITask_Move -> UAITask_MoveTo -> UAITask -> UGameplayTask -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UFortAITask_CaretakerMove : public UFortAbilityTask_MoveAI	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CaretakerRuntime.FortAITask_CaretakerMove");
			return ret;
		}
	};


	// Class CaretakerRuntime.FortAIAnimInstance_Caretaker
	// Inherited from UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x58 (0x640 - 0x5E8)
	class UFortAIAnimInstance_Caretaker : public UFortAIAnimInstance	
	{
	public:
		bool bIsMoving; // 0x5E8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5E9(0x3) UNKNOWN PROPERTY
		float WalkPlayRate; // 0x5EC(0x4)
		float AimOffsetCurve; // 0x5F0(0x4)
		bool bFootPhase_StopLeftPlant; // 0x5F4(0x1)
		bool bFootPhase_StopLeftPass; // 0x5F5(0x1)
		bool bFootPhase_StopRightPlant; // 0x5F6(0x1)
		bool bFootPhase_StopRightPass; // 0x5F7(0x1)
		float BreathingCurve; // 0x5F8(0x4)
		float MovingTreshold; // 0x5FC(0x4)
		FName CurveName_AimOffsetCurve; // 0x600(0x4)
		FName CurveName_FootPhase; // 0x604(0x4)
		FName CurveName_BreathingCurve; // 0x608(0x4)
		FName SocketName_FX_Chest; // 0x60C(0x4)
		FName ParamName_ChestSocketLocation; // 0x610(0x4)
		FName ParamName_ChestSocketVector; // 0x614(0x4)
		float FirstFootPhaseMin; // 0x618(0x4)
		float SecondFootPhaseMin; // 0x61C(0x4)
		float ThirdFootPhaseMin; // 0x620(0x4)
		float FourthFootPhaseMin; // 0x624(0x4)
		float FootPhaseMax; // 0x628(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x62C(0x4) UNKNOWN PROPERTY
		UFortAnimWorldStriderComponent* WorldStriderComponent; // 0x630(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x638(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CaretakerRuntime.FortAIAnimInstance_Caretaker");
			return ret;
		}

		void SetDelayedMaterialParameters(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512E2F78(relative to base address)
		UFortAnimWorldStriderComponent GetWorldStriderComponent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512E29EC(relative to base address)
		float GetWalkSpeedWarpingValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512E29C0(relative to base address)
		float GetWalkPlayRateValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512E29A0(relative to base address)
		float GetStartAnimPosition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512E2974(relative to base address)
	};

}
