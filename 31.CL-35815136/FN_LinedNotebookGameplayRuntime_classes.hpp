#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LinedNotebookGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LinedNotebookGameplayRuntime.LinedNotebookItemLayerAnimInstance
	// Inherited from UFortItemLayerAnimInstance -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x140 (0x880 - 0x740)
	class ULinedNotebookItemLayerAnimInstance : public UFortItemLayerAnimInstance	
	{
	public:
		FGameplayTag IsInAirAttackTag; // 0x740(0x4)
		FGameplayTag IsDoubleJumpingTag; // 0x744(0x4)
		FGameplayTag IsSurfaceSwimmingTag; // 0x748(0x4)
		FGameplayTag IsRidingMotorcycleTag; // 0x74C(0x4)
		FGameplayTag IsGrindRailTag; // 0x750(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x754(0x4) UNKNOWN PROPERTY
		UAnimSequenceBase* DoubleJumpSequenceForward; // 0x758(0x8)
		UAnimSequenceBase* DoubleJumpSequenceBackward; // 0x760(0x8)
		UAnimSequenceBase* DoubleJumpSequenceLeft; // 0x768(0x8)
		UAnimSequenceBase* DoubleJumpSequenceRight; // 0x770(0x8)
		UAnimSequenceBase* EvergreenMotorcyclePose; // 0x778(0x8)
		UAnimSequenceBase* EvergreenSlidingPose; // 0x780(0x8)
		UAnimSequenceBase* EvergreenGrindRailPose; // 0x788(0x8)
		UAnimSequenceBase* TacSprintHandPose; // 0x790(0x8)
		TWeakObjectPtr<UAnimMontage*> DashMontage; // 0x798(0x20)
		TWeakObjectPtr<UAnimMontage*> DeltaEquipMontage; // 0x7B8(0x20)
		TArray<TWeakObjectPtr> SwingMontages; // 0x7D8(0x10)
		FAlphaBlendArgs DeltaEquipBlendOut; // 0x7E8(0x10)
		bool bUseOceanRiverTacSprint; // 0x7F8(0x1)
		bool bUseDeltaTacSprint; // 0x7F9(0x1)
		bool bIsDelta; // 0x7FA(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x7FB(0x5) UNKNOWN PROPERTY
		UAnimSequenceBase* DoubleJumpSequence; // 0x800(0x8)
		UAnimSequenceBase* EvergreenPose; // 0x808(0x8)
		float Yaw; // 0x810(0x4)
		float YawAdjusted; // 0x814(0x4)
		float pitch; // 0x818(0x4)
		float RotationAlpha; // 0x81C(0x4)
		float DeltaDoorBashRightArmAlpha; // 0x820(0x4)
		bool bIsDoubleJumping : 1; // 0x824:0(0x1)
		bool bIsDoubleJumpStart : 1; // 0x824:1(0x1)
		bool bIsDashLoop : 1; // 0x824:2(0x1)
		bool bIsNoDashOrDoubleJump : 1; // 0x824:3(0x1)
		bool bIsExitDoubleJump : 1; // 0x824:4(0x1)
		bool bIsDeltaWaterJump : 1; // 0x824:5(0x1)
		bool bIsWaterLanding : 1; // 0x824:6(0x1)
		bool bIsNotDeltaSwimJump : 1; // 0x824:7(0x1)
		bool bIsEvergreenUB : 1; // 0x825:0(0x1)
		bool bIsOceanRiverTacSprint : 1; // 0x825:1(0x1)
		bool bIsDeltaTacSprint : 1; // 0x825:2(0x1)
		bool bIsParachuting : 1; // 0x825:3(0x1)
		bool bIsDolphinDoubleJump : 1; // 0x825:4(0x1)
		unsigned char UnknownData02_7[0x5A]; // 0x826(0x5A) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LinedNotebookGameplayRuntime.LinedNotebookItemLayerAnimInstance");
			return ret;
		}
	};


	// Class LinedNotebookGameplayRuntime.LinedNotebookLakeWeaponAnimInstance
	// Inherited from UFortWeaponAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x98 (0x550 - 0x4B8)
	class ULinedNotebookLakeWeaponAnimInstance : public UFortWeaponAnimInstance	
	{
	public:
		TArray<TWeakObjectPtr> Swing01Montages; // 0x4B8(0x10)
		TArray<TWeakObjectPtr> Swing02Montages; // 0x4C8(0x10)
		TArray<TWeakObjectPtr> Swing03Montages; // 0x4D8(0x10)
		TArray<TWeakObjectPtr> Swing04Montages; // 0x4E8(0x10)
		TArray<TWeakObjectPtr> Swing05Montages; // 0x4F8(0x10)
		TArray<TWeakObjectPtr> UpperBodySwing01Montages; // 0x508(0x10)
		TArray<TWeakObjectPtr> UpperBodySwing02Montages; // 0x518(0x10)
		TArray<TWeakObjectPtr> InAirAttackMontages; // 0x528(0x10)
		bool bIsEquipping; // 0x538(0x1)
		bool bSwing01; // 0x539(0x1)
		bool bSwing02; // 0x53A(0x1)
		bool bSwing03; // 0x53B(0x1)
		bool bSwing04; // 0x53C(0x1)
		bool bSwing05; // 0x53D(0x1)
		bool bIsUpperBodySwing01; // 0x53E(0x1)
		bool bIsUpperBodySwing02; // 0x53F(0x1)
		bool bIsAirLand; // 0x540(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x541(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LinedNotebookGameplayRuntime.LinedNotebookLakeWeaponAnimInstance");
			return ret;
		}
	};


	// Class LinedNotebookGameplayRuntime.LinedNotebookRiverWeaponAnimInstance
	// Inherited from UFortWeaponAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18 (0x4D0 - 0x4B8)
	class ULinedNotebookRiverWeaponAnimInstance : public UFortWeaponAnimInstance	
	{
	public:
		TArray<TWeakObjectPtr> InAirMontages; // 0x4B8(0x10)
		bool bIsAirLand; // 0x4C8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x4C9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LinedNotebookGameplayRuntime.LinedNotebookRiverWeaponAnimInstance");
			return ret;
		}
	};

}
