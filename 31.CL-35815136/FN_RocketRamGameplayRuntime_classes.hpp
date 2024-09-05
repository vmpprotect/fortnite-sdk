#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: RocketRamGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class RocketRamGameplayRuntime.RocketRamItemLayerAnimInstance
	// Inherited from UFortItemLayerAnimInstance -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xE0 (0x820 - 0x740)
	class URocketRamItemLayerAnimInstance : public UFortItemLayerAnimInstance	
	{
	public:
		bool bIsRRWindUp; // 0x740(0x1)
		bool bIsRRSlowAcceleration; // 0x741(0x1)
		bool bIsRRActiveThrust; // 0x742(0x1)
		bool bIsRRFreeFall; // 0x743(0x1)
		bool bIsRRFastFreeFall; // 0x744(0x1)
		bool bIsRRBraking; // 0x745(0x1)
		bool bIsRRRecovery; // 0x746(0x1)
		bool bIsRRRecoveryDelayed; // 0x747(0x1)
		bool bIsRRRecoveryHalfSecDelay; // 0x748(0x1)
		bool bIsRROff; // 0x749(0x1)
		bool bIsFalling; // 0x74A(0x1)
		bool bIsSliding; // 0x74B(0x1)
		bool bIsCrouchingLocal; // 0x74C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x74D(0x3) UNKNOWN PROPERTY
		float XInput; // 0x750(0x4)
		float YInput; // 0x754(0x4)
		float pitch; // 0x758(0x4)
		float Yaw; // 0x75C(0x4)
		float WallImpactPitch; // 0x760(0x4)
		float WallImpactYaw; // 0x764(0x4)
		FVector WeaponLaunchDirection; // 0x768(0x18)
		bool bIsBoneRotOn; // 0x780(0x1)
		bool bIsPitchAndYawRot; // 0x781(0x1)
		bool bIsNoMortar; // 0x782(0x1)
		bool bIsGoingUp; // 0x783(0x1)
		bool bIsJumpFromGround; // 0x784(0x1)
		bool bIsMoving2DLocal; // 0x785(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x786(0x2) UNKNOWN PROPERTY
		float AdditiveSquatAlpha; // 0x788(0x4)
		float JumpAddCurveAlpha; // 0x78C(0x4)
		float ArmsHeadAddAlpha; // 0x790(0x4)
		float JumpAddOffsetAlpha; // 0x794(0x4)
		bool bIsImpactWallBackup; // 0x798(0x1)
		bool bIsLandingDetected; // 0x799(0x1)
		bool bIsWallImpact; // 0x79A(0x1)
		bool bIsApexTimerEnd; // 0x79B(0x1)
		unsigned char UnknownData02_6[0x4]; // 0x79C(0x4) UNKNOWN PROPERTY
		AFortPlayerPawn* FortPlayerPawn; // 0x7A0(0x8)
		AFortWeapon* WeaponRocketRam; // 0x7A8(0x8)
		float FBImpactGroundStateAlpha; // 0x7B0(0x4)
		bool bFBGroundSlideToFBWait; // 0x7B4(0x1)
		bool bFBThrustingToFBApex; // 0x7B5(0x1)
		bool bFBApexToFBToMortar; // 0x7B6(0x1)
		bool bFBOffGroundToFBImpactGround; // 0x7B7(0x1)
		bool bFBOffWallToFBImpactWall; // 0x7B8(0x1)
		bool bFBDetectGroundToFBToImpactGround; // 0x7B9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x7BA(0x2) UNKNOWN PROPERTY
		float FBJumpStateAlpha; // 0x7BC(0x4)
		float FBToApexStateAlpha; // 0x7C0(0x4)
		bool bFBDetectSlideToFBToSlide; // 0x7C4(0x1)
		bool bFBOffToFBWait; // 0x7C5(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x7C6(0x2) UNKNOWN PROPERTY
		float UBPullLeverStateAlpha; // 0x7C8(0x4)
		float UBSquatStateAlpha; // 0x7CC(0x4)
		float UBJumpStateAlpha; // 0x7D0(0x4)
		bool bUBSquatToUBJump; // 0x7D4(0x1)
		bool bUBJumpToUBWait; // 0x7D5(0x1)
		bool bUBJumpToUBToGroundImpact; // 0x7D6(0x1)
		bool bUBWaitToUBImpactGround; // 0x7D7(0x1)
		bool bUBOffToUBWait; // 0x7D8(0x1)
		unsigned char UnknownData05_7[0x47]; // 0x7D9(0x47) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RocketRamGameplayRuntime.RocketRamItemLayerAnimInstance");
			return ret;
		}
	};

}
