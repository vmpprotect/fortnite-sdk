#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RockVehicleRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct RockVehicleRuntime.RockRuntimeConfigOverrides
	// Size: 0x4 (0x4 - 0x0)
	struct FRockRuntimeConfigOverrides	
	{
	public:
		bool bDamageFriendlyVehicles; // 0x0(0x1)
		bool bDamageOtherVehicles; // 0x1(0x1)
		bool bDamageOwnVehicle; // 0x2(0x1)
		bool bDamageAllowedFromOtherVehicle; // 0x3(0x1)
	};


	// Struct RockVehicleRuntime.RockScalableFloat
	// Inherited from FScalableFloat
	// Size: 0x8 (0x30 - 0x28)
	struct FRockScalableFloat : public FScalableFloat	
	{
	public:
		float CachedValue; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleState
	// Size: 0xE0 (0xE0 - 0x0)
	struct FRockVehicleState	
	{
	public:
		FReplicatedPhysicsPawnState RigidBodyState; // 0x0(0x80)
		FFortAthenaVehicleInputState PrevDriverInput; // 0x80(0x40)
		bool bWheelsOnGround; // 0xC0(0x1)
		bool bAnyWheelsOnGround; // 0xC1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xC2(0x6) UNKNOWN PROPERTY
		FVector AverageSpringNormal; // 0xC8(0x18)
	};


	// Struct RockVehicleRuntime.AnimNode_RockVehicleController
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x18 (0xE0 - 0xC8)
	struct FAnimNode_RockVehicleController : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference ChassisBone; // 0xC8(0xC)
		FBouncyChassisState BouncyChassis; // 0xD4(0xC)
	};


	// Struct RockVehicleRuntime.BouncyChassisState
	// Size: 0xC (0xC - 0x0)
	struct FBouncyChassisState	
	{
	public:
		float PitchDegrees; // 0x0(0x4)
		float RollDegrees; // 0x4(0x4)
		float TranslationZ; // 0x8(0x4)
	};


	// Struct RockVehicleRuntime.RockBoxSpringSetup
	// Size: 0x50 (0x50 - 0x0)
	struct FRockBoxSpringSetup	
	{
	public:
		FVector Strength; // 0x0(0x18)
		FVector Damping; // 0x18(0x18)
		FVector MaxDisplacement; // 0x30(0x18)
		float MaxSpeed; // 0x48(0x4)
		float Mass; // 0x4C(0x4)
	};


	// Struct RockVehicleRuntime.RockBoxSpring
	// Size: 0xB0 (0xB0 - 0x0)
	struct FRockBoxSpring	
	{
	public:
		FRockBoxSpringSetup Setup; // 0x0(0x50)
		unsigned char UnknownData01_7[0x60]; // 0x50(0x60) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.SpringSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FSpringSettings	
	{
	public:
		float Strength; // 0x0(0x4)
		float Damping; // 0x4(0x4)
	};


	// Struct RockVehicleRuntime.BouncyChassisSetup
	// Size: 0x58 (0x58 - 0x0)
	struct FBouncyChassisSetup	
	{
	public:
		FSpringSettings PitchSpring; // 0x0(0x8)
		float PitchMaxAngleDegrees; // 0x8(0x4)
		FSpringSettings RollSpring; // 0xC(0x8)
		float RollMaxAngleDegrees; // 0x14(0x4)
		FSpringSettings ZSpring; // 0x18(0x8)
		float ZMaxDrop; // 0x20(0x4)
		float ZMaxRaise; // 0x24(0x4)
		FVector MaxDisplacement; // 0x28(0x18)
		FVector MassOffset; // 0x40(0x18)
	};


	// Struct RockVehicleRuntime.BouncyChassisInstance
	// Size: 0x118 (0x118 - 0x0)
	struct FBouncyChassisInstance	
	{
	public:
		FRockBoxSpring Spring; // 0x0(0xB0)
		unsigned char UnknownData01_7[0x68]; // 0xB0(0x68) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInPersistent
	// Size: 0x8 (0x8 - 0x0)
	struct FRockVehicleAbilityInPersistent	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInPersistent_AirControl
	// Inherited from FRockVehicleAbilityInPersistent
	// Size: 0x38 (0x40 - 0x8)
	struct FRockVehicleAbilityInPersistent_AirControl : public FRockVehicleAbilityInPersistent	
	{
	public:
		FVector TorqueAccel; // 0x8(0x18)
		FVector TorqueDamping; // 0x20(0x18)
		float DisableForDodgeTime; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInContinuous
	// Size: 0x40 (0x40 - 0x0)
	struct FRockVehicleAbilityInContinuous	
	{
	public:
		FFortAthenaVehicleInputState InputState; // 0x0(0x40)
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInContinuous_AirControl
	// Inherited from FRockVehicleAbilityInContinuous
	// Size: 0x8 (0x48 - 0x40)
	struct FRockVehicleAbilityInContinuous_AirControl : public FRockVehicleAbilityInContinuous	
	{
	public:
		bool bAnyWheelsOnGround; // 0x40(0x1)
		bool bDodgeActive; // 0x41(0x1)
		bool bAutoUprightActive; // 0x42(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x43(0x5) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInPersistent_AutoUpright
	// Inherited from FRockVehicleAbilityInPersistent
	// Size: 0x10 (0x18 - 0x8)
	struct FRockVehicleAbilityInPersistent_AutoUpright : public FRockVehicleAbilityInPersistent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInContinuous_AutoUpright
	// Inherited from FRockVehicleAbilityInContinuous
	// Size: 0x10 (0x50 - 0x40)
	struct FRockVehicleAbilityInContinuous_AutoUpright : public FRockVehicleAbilityInContinuous	
	{
	public:
		int32_t LastWorldContactFrame; // 0x40(0x4)
		bool bWheelsOnGround; // 0x44(0x1)
		bool bAnyWheelsOnGround; // 0x45(0x1)
		bool bDodgeActive; // 0x46(0x1)
		bool bBodyContact; // 0x47(0x1)
		float TimeSinceLastBodyContact; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInPersistent_Boost
	// Inherited from FRockVehicleAbilityInPersistent
	// Size: 0x8 (0x10 - 0x8)
	struct FRockVehicleAbilityInPersistent_Boost : public FRockVehicleAbilityInPersistent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInContinuous_Boost
	// Inherited from FRockVehicleAbilityInContinuous
	// Size: 0x8 (0x48 - 0x40)
	struct FRockVehicleAbilityInContinuous_Boost : public FRockVehicleAbilityInContinuous	
	{
	public:
		bool bHasBoost; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockDodgeImpulse_PhysicsThread
	// Size: 0x8 (0x8 - 0x0)
	struct FRockDodgeImpulse_PhysicsThread	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockDodgeImpulse
	// Size: 0x60 (0x60 - 0x0)
	struct FRockDodgeImpulse	
	{
	public:
		FRockScalableFloat VelocityChange; // 0x0(0x30)
		FRockScalableFloat MaxSpeedScale; // 0x30(0x30)
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInPersistent_Dodge
	// Inherited from FRockVehicleAbilityInPersistent
	// Size: 0x40 (0x48 - 0x8)
	struct FRockVehicleAbilityInPersistent_Dodge : public FRockVehicleAbilityInPersistent	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x8(0x40) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInContinuous_Dodge
	// Inherited from FRockVehicleAbilityInContinuous
	// Size: 0x8 (0x48 - 0x40)
	struct FRockVehicleAbilityInContinuous_Dodge : public FRockVehicleAbilityInContinuous	
	{
	public:
		bool bWheelsOnGround; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInPersistent_DoubleJump
	// Inherited from FRockVehicleAbilityInPersistent
	// Size: 0x8 (0x10 - 0x8)
	struct FRockVehicleAbilityInPersistent_DoubleJump : public FRockVehicleAbilityInPersistent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInPersistent_Flip
	// Inherited from FRockVehicleAbilityInPersistent
	// Size: 0x10 (0x18 - 0x8)
	struct FRockVehicleAbilityInPersistent_Flip : public FRockVehicleAbilityInPersistent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInContinuous_Flip
	// Inherited from FRockVehicleAbilityInContinuous
	// Size: 0x8 (0x48 - 0x40)
	struct FRockVehicleAbilityInContinuous_Flip : public FRockVehicleAbilityInContinuous	
	{
	public:
		bool bWheelsOnGround; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.GroundTrailsData
	// Size: 0x10 (0x10 - 0x0)
	struct FGroundTrailsData	
	{
	public:
		TEnumAsByte SurfaceType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UNiagaraSystem NiagaraFX; // 0x8(0x8)
	};


	// Struct RockVehicleRuntime.GroundTrailsMap
	// Size: 0x18 (0x18 - 0x0)
	struct FGroundTrailsMap	
	{
	public:
		UNiagaraSystem DefaultTrails; // 0x0(0x8)
		TArray GroundTrails; // 0x8(0x10)
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityInPersistent_Jump
	// Inherited from FRockVehicleAbilityInPersistent
	// Size: 0x10 (0x18 - 0x8)
	struct FRockVehicleAbilityInPersistent_Jump : public FRockVehicleAbilityInPersistent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityOutContinuous
	// Size: 0x1 (0x1 - 0x0)
	struct FRockVehicleAbilityOutContinuous	
	{
	public:
		bool bShouldStayActive; // 0x0(0x1)
	};


	// Struct RockVehicleRuntime.RockVehicleAbilityOutPersistent
	// Size: 0x4 (0x4 - 0x0)
	struct FRockVehicleAbilityOutPersistent	
	{
	public:
		float ActiveSeconds; // 0x0(0x4)
	};


	// Struct RockVehicleRuntime.RockVehileAbilityInContinous_StickyWheels
	// Inherited from FRockVehicleAbilityInContinuous
	// Size: 0x20 (0x60 - 0x40)
	struct FRockVehileAbilityInContinous_StickyWheels : public FRockVehicleAbilityInContinuous	
	{
	public:
		FVector ContactNormal; // 0x40(0x18)
		float Scale; // 0x58(0x4)
		bool bAnyWheelsOnGround; // 0x5C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleAnalyticsSession
	// Size: 0x28 (0x28 - 0x0)
	struct FRockVehicleAnalyticsSession	
	{
	public:
		AFortPlayerController DriverPC; // 0x0(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x8(0x20) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockVehicleWheelAnimInfo
	// Size: 0x14 (0x14 - 0x0)
	struct FRockVehicleWheelAnimInfo	
	{
	public:
		float SpringToWheelOffsetZ; // 0x0(0x4)
		FFloatInterval SpringTravelRange; // 0x4(0x8)
		float WheelRadius; // 0xC(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x10(0x4) UNKNOWN PROPERTY
	};


	// Struct RockVehicleRuntime.RockCameraSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FRockCameraSettings	
	{
	public:
		float FOV; // 0x0(0x4)
		float Height; // 0x4(0x4)
		float pitch; // 0x8(0x4)
		float Distance; // 0xC(0x4)
		float Stiffness; // 0x10(0x4)
		float SwivelSpeed; // 0x14(0x4)
		float TransitionSpeed; // 0x18(0x4)
	};


	// Struct RockVehicleRuntime.RockThrottledValue
	// Size: 0x8 (0x8 - 0x0)
	struct FRockThrottledValue	
	{
	public:
		float RiseRate; // 0x0(0x4)
		float FallRate; // 0x4(0x4)
	};


	// Struct RockVehicleRuntime.RockVehicleDriveConfig
	// Size: 0x510 (0x510 - 0x0)
	struct FRockVehicleDriveConfig	
	{
	public:
		FRockScalableFloat DriveAccel; // 0x0(0x30)
		FRockScalableFloat DriveTopSpeed; // 0x30(0x30)
		FRockScalableFloat BrakeAccel; // 0x60(0x30)
		FRockScalableFloat StopSpeed; // 0x90(0x30)
		float IdleBrakeFactor; // 0xC0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve DriveAccelCurve; // 0xC8(0x88)
		FRuntimeFloatCurve SteerAngleCurve; // 0x150(0x88)
		FRuntimeFloatCurve LatFrictionCurve; // 0x1D8(0x88)
		FRuntimeFloatCurve LongFrictionCurve; // 0x260(0x88)
		FRuntimeFloatCurve WallFrictionCurve; // 0x2E8(0x88)
		FRuntimeFloatCurve HandbrakeSteerAngleCurve; // 0x370(0x88)
		FRuntimeFloatCurve HandbrakeLatFrictionCurve; // 0x3F8(0x88)
		FRuntimeFloatCurve HandbrakeLongFrictionCurve; // 0x480(0x88)
		FRockThrottledValue HandbrakeRate; // 0x508(0x8)
	};


	// Struct RockVehicleRuntime.RockVehicleSuspensionConfig
	// Size: 0x20 (0x20 - 0x0)
	struct FRockVehicleSuspensionConfig	
	{
	public:
		float MaxRaise; // 0x0(0x4)
		float MaxDrop; // 0x4(0x4)
		float Stiffness; // 0x8(0x4)
		float DampingCompression; // 0xC(0x4)
		float DampingRelaxation; // 0x10(0x4)
		float Strength; // 0x14(0x4)
		float RockDampingCompression; // 0x18(0x4)
		float RockDampingRelaxation; // 0x1C(0x4)
	};


	// Struct RockVehicleRuntime.RockVehicleAxleConfig
	// Size: 0x34 (0x34 - 0x0)
	struct FRockVehicleAxleConfig	
	{
	public:
		float TranslateX; // 0x0(0x4)
		float TranslateY; // 0x4(0x4)
		float TranslateZ; // 0x8(0x4)
		float WheelRadius; // 0xC(0x4)
		float RestDistanceZ; // 0x10(0x4)
		FRockVehicleSuspensionConfig Suspension; // 0x14(0x20)
	};


	// Struct RockVehicleRuntime.RockVehicleDemoConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FRockVehicleDemoConfig	
	{
	public:
		FGameplayTagContainer VehiclesThatCanBeDemolished; // 0x0(0x20)
		float DemolishAngleYaw; // 0x20(0x4)
		float DemolishAnglePitch; // 0x24(0x4)
	};

}
