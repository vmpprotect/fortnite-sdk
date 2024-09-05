#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TankRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class TankRuntime.FortTankVehicleConfigs
	// Inherited from UFortTreadVehicleConfigs -> UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x50 (0xAA0 - 0xA50)
	class UFortTankVehicleConfigs : public UFortTreadVehicleConfigs	
	{
	public:
		TArray TankWeaponAimingData; // 0xA50(0x10)
		FText SecondInteractText; // 0xA60(0x10)
		TEnumAsByte SecondInteractType; // 0xA70(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xA71(0x7) UNKNOWN PROPERTY
		FScalableFloat SecondInteractDuration; // 0xA78(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TankRuntime.FortTankVehicleConfigs");
			return ret;
		}
	};


	// Class TankRuntime.FortTankAnimFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortTankAnimFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TankRuntime.FortTankAnimFunctionLibrary");
			return ret;
		}
	};


	// Class TankRuntime.FortTankVehicle
	// Inherited from AFortTreadVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x190 (0x2250 - 0x20C0)
	class AFortTankVehicle : public AFortTreadVehicle	
	{
	public:
		unsigned char UnknownData05_3[0x70]; // 0x20C0(0x70) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTankRepairedDelegate; // 0x2130(0x10)
		FName BarrelSocketName; // 0x2140(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x2144(0x4) UNKNOWN PROPERTY
		UCapsuleComponent BarrelCollision; // 0x2148(0x8)
		UStaticMeshComponent UnderVehicleCollision; // 0x2150(0x8)
		TArray SocketOverrideArray; // 0x2158(0x10)
		TMap SocketTransformOverrideMap; // 0x2168(0x50)
		USkeletalMeshComponent CachedSkeletalMeshComponent; // 0x21B8(0x8)
		AFortVehicleAudioController CachedVehicleAudioController; // 0x21C0(0x8)
		EVisibilityBasedAnimTickOption DefaultServerVisibilityBasedAnimTickOption; // 0x21C8(0x1)
		bool DefaultServerSkeletalMeshTickEnabled; // 0x21C9(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x21CA(0x2) UNKNOWN PROPERTY
		FName YawPivotSocketName; // 0x21CC(0x4)
		FName PitchPivotSocketName; // 0x21D0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x21D4(0x4) UNKNOWN PROPERTY
		ULegacyCameraShake DriverCameraShakeInstance; // 0x21D8(0x8)
		ULegacyCameraShake AcceleratingCameraShakeInstance; // 0x21E0(0x8)
		unsigned char UnknownData09_6[0x8]; // 0x21E8(0x8) UNKNOWN PROPERTY
		UNiagaraComponent CachedNiagaraComponentRoadAndExhaust; // 0x21F0(0x8)
		FString RoadAndExhaustNiagaraComponentName; // 0x21F8(0x10)
		FName RoadAndExhaustPeelOutLeftName; // 0x2208(0x4)
		FName RoadAndExhaustPeelOutRightName; // 0x220C(0x4)
		FName RoadAndExhaustVehicleSpeedName; // 0x2210(0x4)
		FName RoadAndExhaustSlideDirectionName; // 0x2214(0x4)
		float RoadAndExhaustMinSpeedForDust; // 0x2218(0x4)
		FName RoadAndExhaustDustColorLerpName; // 0x221C(0x4)
		float RoadAndExhaustDustColorLerpOffRoad; // 0x2220(0x4)
		float RoadAndExhaustDustColorLerpOnRoad; // 0x2224(0x4)
		FName RoadAndExhaustDustAlphaMultiplierName; // 0x2228(0x4)
		float RoadAndExhaustDustAlphaMultiplierOffRoad; // 0x222C(0x4)
		float RoadAndExhaustDustAlphaMultiplierOnRoad; // 0x2230(0x4)
		FName RoadAndExhaustDustFrontLeftName; // 0x2234(0x4)
		FName RoadAndExhaustDustFrontRightName; // 0x2238(0x4)
		FName RoadAndExhaustDustMiddleLeftName; // 0x223C(0x4)
		FName RoadAndExhaustDustMiddleRightName; // 0x2240(0x4)
		FName RoadAndExhaustDustRearLeftName; // 0x2244(0x4)
		FName RoadAndExhaustDustRearRightName; // 0x2248(0x4)
		FName RoadAndExhaustIsOnDirtName; // 0x224C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TankRuntime.FortTankVehicle");
			return ret;
		}
	};


	// Class TankRuntime.FortTankVehicleAnimInstance
	// Inherited from UFortTreadVehicleAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x118 (0x850 - 0x738)
	class UFortTankVehicleAnimInstance : public UFortTreadVehicleAnimInstance	
	{
	public:
		AFortTankVehicle TankVehicle; // 0x738(0x8)
		FRotator CurrentAimRotation; // 0x740(0x18)
		FRotator CurrentTurretAimRotation; // 0x758(0x18)
		FRotator SmoothedTurretDeltaRotation; // 0x770(0x18)
		float InterpolationRate; // 0x788(0x4)
		bool bEngineOverheated; // 0x78C(0x1)
		bool bHasPassenger; // 0x78D(0x1)
		bool bIsFired; // 0x78E(0x1)
		bool bIsReady; // 0x78F(0x1)
		bool bDriverCoverOnCooldown; // 0x790(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x791(0x3) UNKNOWN PROPERTY
		float LeftTreadPower; // 0x794(0x4)
		float RightTreadPower; // 0x798(0x4)
		float TurretYawAlpha; // 0x79C(0x4)
		float TurretYawAlphaSmoothingRate; // 0x7A0(0x4)
		float CannonYaw; // 0x7A4(0x4)
		float CannonPitch; // 0x7A8(0x4)
		float TurretYaw; // 0x7AC(0x4)
		float TurretPitch; // 0x7B0(0x4)
		FLinearColor MIDTreadPositionColor; // 0x7B4(0x10)
		float MIDTreadDamageLeft; // 0x7C4(0x4)
		float MIDTreadDamageRight; // 0x7C8(0x4)
		float MIDExhaustShakeSpeed; // 0x7CC(0x4)
		float MIDExhaustShakeAmp; // 0x7D0(0x4)
		float MIDEngineBoostGlow; // 0x7D4(0x4)
		float MIDEngineHealthRatio; // 0x7D8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x7DC(0x4) UNKNOWN PROPERTY
		TMap AimingData; // 0x7E0(0x50)
		FRotator PreviousTurretAimRotation; // 0x830(0x18)
		unsigned char UnknownData05_7[0x8]; // 0x848(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TankRuntime.FortTankVehicleAnimInstance");
			return ret;
		}

		void UpdateMIDEngineProperties(float DeltaSeconds, float EngineHealthRatio); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414CCF098
	};


	// Class TankRuntime.FortTankVehicleAudioController
	// Inherited from AFortVehicleAudioController -> AActor -> UObject
	// Size: 0x400 (0x7E8 - 0x3E8)
	class AFortTankVehicleAudioController : public AFortVehicleAudioController	
	{
	public:
		FFortAudioFloatParameter SpeedParam; // 0x3E8(0x38)
		FFortAudioFloatParameter TurnPowerParam; // 0x420(0x38)
		FFortAudioFloatParameter OutOfFuelParam; // 0x458(0x38)
		FFortAudioFloatParameter IdleParam; // 0x490(0x38)
		FFortAudioFloatParameter TurningParam; // 0x4C8(0x38)
		FFortAudioFloatParameter ForwardParam; // 0x500(0x38)
		FFortAudioFloatParameter ReverseParam; // 0x538(0x38)
		FFortAudioFloatParameter SurfaceParam; // 0x570(0x38)
		FFortAudioFloatParameter IsInWaterParam; // 0x5A8(0x38)
		FFortAudioFloatParameter IsInAirParam; // 0x5E0(0x38)
		unsigned char UnknownData01_7[0x1D0]; // 0x618(0x1D0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TankRuntime.FortTankVehicleAudioController");
			return ret;
		}

		void PlayTurningOneShot(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCF418
		void PlayDecelOneShot(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCF338
		void PlayAccelOneShot(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCF258
		AFortTankVehicle GetTankVehicleActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CCF178
	};

}
