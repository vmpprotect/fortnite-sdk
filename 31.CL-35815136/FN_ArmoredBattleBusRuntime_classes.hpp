#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ArmoredBattleBusRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xD0 (0x14F0 - 0x1420)
	class UFortArmoredBattleBusPassengerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		FRotator PreviousVehicleRotator; // 0x1420(0x18)
		float SmoothedVehicleYawRate; // 0x1438(0x4)
		int32_t PawnSeat; // 0x143C(0x4)
		bool bIsFrontTurretPassenger; // 0x1440(0x1)
		bool bIsRearTurretPassenger; // 0x1441(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1442(0x2) UNKNOWN PROPERTY
		float Speed; // 0x1444(0x4)
		float YawDelta; // 0x1448(0x4)
		float TurretYaw; // 0x144C(0x4)
		float TurretPitch; // 0x1450(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1454(0x4) UNKNOWN PROPERTY
		FRotator TurretYawRotator; // 0x1458(0x18)
		float SlopeRollDegreeAngle; // 0x1470(0x4)
		float SlopePitchDegreeAngle; // 0x1474(0x4)
		FVector HandAttachL; // 0x1478(0x18)
		FVector HandAttachR; // 0x1490(0x18)
		TEnumAsByte<ERelativeTransformSpace> TransformSpace; // 0x14A8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x14A9(0x3) UNKNOWN PROPERTY
		float UpdateYawDeltaSmoothedLerpRate; // 0x14AC(0x4)
		int32_t TurretPassengerFront; // 0x14B0(0x4)
		int32_t TurretPassengerRear; // 0x14B4(0x4)
		FName FrontFootBoneName; // 0x14B8(0x4)
		FName RearFootBoneName; // 0x14BC(0x4)
		FName GunHandAttachBoneName_FrontLeft; // 0x14C0(0x4)
		FName GunHandAttachBoneName_RearLeft; // 0x14C4(0x4)
		FName GunHandAttachBoneName_FrontRight; // 0x14C8(0x4)
		FName GunHandAttachBoneName_RearRight; // 0x14CC(0x4)
		FName PassengerBoneName_Front; // 0x14D0(0x4)
		FName PassengerBoneName_Rear; // 0x14D4(0x4)
		float TurretPitchDegMin; // 0x14D8(0x4)
		float TurretPitchDegMax; // 0x14DC(0x4)
		float LocalPlayerTurretPitchEaseRate; // 0x14E0(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x14E4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance");
			return ret;
		}

		void UpdateYawDeltaSmoothed(AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator& NewRotation, float& SmoothedYawValue); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75077ABE8(relative to base address)
		void UpdateSmoothedVehicleYawRate(AFortAthenaVehicle* VehicleActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077A6AC(relative to base address)
		void UpdateHandPositionsSlopeValues(USkeletalMeshComponent* BusMeshComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077A62C(relative to base address)
		FVector UnrotateHandAttachLocation(FVector& HandLocation, FVector& FootLocation, FRotator& FootRotation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75077A468(relative to base address)
		FTransform GetPassengerTransform(USkeletalMeshComponent* BusMeshComponent); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75077A190(relative to base address)
		FVector GetHandAttachLocation(USkeletalMeshComponent* BusMeshComponent, FName FrontHandAttachBoneName, FName RearHandAttachBoneName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75077A080(relative to base address)
		FTransform GetFootAttachTransform(USkeletalMeshComponent* BusMeshComponent); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750779FA4(relative to base address)
		void GenerateCharacterPitchAndYawForSlopedTerrain(AFortAthenaVehicle* VehicleActor, float& TurretYaw, float& TurretPitch, FRotator& PawnYawRotator); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750779E38(relative to base address)
	};


	// Class ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance
	// Inherited from UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x98 (0x700 - 0x668)
	class UFortArmoredBattleBusVehicleAnimInstance : public UFortVehicleAnimInstance	
	{
	public:
		float FrontTurretAimPitch; // 0x668(0x4)
		float RearTurretAimPitch; // 0x66C(0x4)
		float FrontYawDeltaSmoothed; // 0x670(0x4)
		float RearYawDeltaSmoothed; // 0x674(0x4)
		float SmoothedVehicleYawRate; // 0x678(0x4)
		float FrontYawDeltaSmoothedAlpha; // 0x67C(0x4)
		float RearYawDeltaSmoothedAlpha; // 0x680(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x684(0x4) UNKNOWN PROPERTY
		FRotator FrontWeaponYaw; // 0x688(0x18)
		FRotator RearWeaponYaw; // 0x6A0(0x18)
		FRotator PreviousVehicleRotator; // 0x6B8(0x18)
		bool bHasFrontTurretPassenger; // 0x6D0(0x1)
		bool bHasRearTurretPassenger; // 0x6D1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x6D2(0x2) UNKNOWN PROPERTY
		float NetworkEaseRate; // 0x6D4(0x4)
		float UpdateYawDeltaSmoothedLerpRate; // 0x6D8(0x4)
		int32_t FrontPassengerSeatIndex; // 0x6DC(0x4)
		int32_t RearPassengerSeatIndex; // 0x6E0(0x4)
		float FrontPassengerYawOffset; // 0x6E4(0x4)
		float RearPassengerYawOffset; // 0x6E8(0x4)
		FName FrontPassengerBoneName; // 0x6EC(0x4)
		FName RearPassengerBoneName; // 0x6F0(0x4)
		unsigned char UnknownData02_7[0xC]; // 0x6F4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance");
			return ret;
		}

		float UpdateYawDeltaSmoothed(AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator NewRotation, float SmoothedYawValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75077AD48(relative to base address)
		void UpdateTurretAimPitchWeaponYaw(AFortAthenaVehicle* OwnerVehicle, AFortPlayerPawn* GunnerActor, FName SocketName, float YawOffset, float& TurretAimPitch, float& YawDeltaSmoothed, FRotator& WeaponYaw); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75077A9B0(relative to base address)
		float UpdateSmoothedVehicleYawRate(AFortAthenaVehicle* VehicleActor, FRotator PreviousRotator); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75077A7B4(relative to base address)
		void GetPitchAndYaw(AFortAthenaVehicle* VehicleActor, AFortPlayerPawn* GunnerActor, float& AdjustedPitch, float& AdjustedYaw, bool& bIsLocalPlayerControlled, FRotator& YawRotator); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75077A26C(relative to base address)
	};

}
