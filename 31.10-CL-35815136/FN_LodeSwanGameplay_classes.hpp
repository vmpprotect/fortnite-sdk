#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LodeSwanGameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LodeSwanGameplay.LodeSwanLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x50 (0x1470 - 0x1420)
	class ULodeSwanLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsFiringLeft; // 0x1420(0x1)
		bool bIsFiringRight; // 0x1421(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1422(0x2) UNKNOWN PROPERTY
		float ResultingPitch; // 0x1424(0x4)
		bool bInDiveAttack; // 0x1428(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1429(0x3) UNKNOWN PROPERTY
		float LaserAlphaAO; // 0x142C(0x4)
		FRotator UpperBodyTwistRotator; // 0x1430(0x18)
		bool bIsWaterHovering; // 0x1448(0x1)
		bool bEnterWaterHover; // 0x1449(0x1)
		bool bIsFiringAndPlayingMontage; // 0x144A(0x1)
		bool bCanEnterHoverLoopToBase; // 0x144B(0x1)
		bool bCanEnterJumpToHoverLoop; // 0x144C(0x1)
		bool bCanEnterFireToDefault; // 0x144D(0x1)
		bool bAirBoost; // 0x144E(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x144F(0x1) UNKNOWN PROPERTY
		float FinalYaw; // 0x1450(0x4)
		float DiveKickPitchAlpha; // 0x1454(0x4)
		float PitchDiveKick; // 0x1458(0x4)
		FGameplayTag AirBoostInitiatedTagName; // 0x145C(0x4)
		FGameplayTag DiveKickTagName; // 0x1460(0x4)
		FGameplayTag WaterHoverTagName; // 0x1464(0x4)
		float FiringTime; // 0x1468(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x146C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LodeSwanGameplay.LodeSwanLayerAnimInstance");
			return ret;
		}
	};


	// Class LodeSwanGameplay.LodeSwan_FootDive_Telegraph
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ALodeSwan_FootDive_Telegraph : public AActor	
	{
	public:
		TArray<TEnumAsByte> TraceObjectTypes; // 0x290(0x10)
		float TraceDistance; // 0x2A0(0x4)
		float InterpolateSpeed; // 0x2A4(0x4)
		bool bTelegraphIsOnWater; // 0x2A8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x2A9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LodeSwanGameplay.LodeSwan_FootDive_Telegraph");
			return ret;
		}

		void OnTelegraphIsOnWater(bool bIsOnWater); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class LodeSwanGameplay.PawnComponent_LodeSwan
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UPawnComponent_LodeSwan : public UPawnComponent	
	{
	public:
		FVector LaserHitLocation; // 0xA0(0x18)
		float FootDiveAngle; // 0xB8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LodeSwanGameplay.PawnComponent_LodeSwan");
			return ret;
		}

		void SetLaserHitLocation(FVector& InLaserHitLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751D31B00(relative to base address)
		void SetFootDiveAngle(float InFootDiveAngle); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D31A74(relative to base address)
		FVector GetLaserHitLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EAE47B0(relative to base address)
		float GetFootDiveAngle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3976C4(relative to base address)
	};


	// Class LodeSwanGameplay.TargetingSelectionTask_LodeSwanLaser
	// Inherited from UTargetingSelectionTask_Trace -> UTargetingTask -> UObject
	// Size: 0x70 (0x1E0 - 0x170)
	class UTargetingSelectionTask_LodeSwanLaser : public UTargetingSelectionTask_Trace	
	{
	public:
		float TraceLengthPadding; // 0x170(0x4)
		FName SourceLocationSocketName; // 0x174(0x4)
		float MaxRange; // 0x178(0x4)
		unsigned char UnknownData00_7[0x64]; // 0x17C(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LodeSwanGameplay.TargetingSelectionTask_LodeSwanLaser");
			return ret;
		}
	};

}
