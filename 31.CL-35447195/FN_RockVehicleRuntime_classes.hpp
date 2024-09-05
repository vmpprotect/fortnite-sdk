#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RockVehicleRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class RockVehicleRuntime.RockVehicle_InteractionOverrideComponent
	// Inherited from UFortVehicleInteractionOverrideComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class URockVehicle_InteractionOverrideComponent : public UFortVehicleInteractionOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicle_InteractionOverrideComponent");
			return ret;
		}
	};


	// Class RockVehicleRuntime.FortCheatManager_RockVehicle
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCheatManager_RockVehicle : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.FortCheatManager_RockVehicle");
			return ret;
		}

		void RockVehicleSetVelocity(float X, float Y, float Z); // Flags: Final|Exec|Native|Public 0x7FF414D18DD8
		void RockVehicleSetRotation(float pitch, float Yaw, float Roll); // Flags: Final|Exec|Native|Public 0x7FF414D18CF8
		void RockVehicleSetLocation(float X, float Y, float Z); // Flags: Final|Exec|Native|Public 0x7FF414D18C18
		void RockVehicleSetBalboaVelocity(float X, float Y, float Z); // Flags: Final|Exec|Native|Public 0x7FF414D18B38
	};


	// Class RockVehicleRuntime.RockVehicle
	// Inherited from AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x240 (0x2350 - 0x2110)
	class ARockVehicle : public AFortAthenaSKVehicle	
	{
	public:
		float InputSwivelPitch; // 0x2110(0x4)
		float InputSwivelYaw; // 0x2114(0x4)
		bool bInputReverseCamera : 1; // 0x2118:0(0x1)
		bool bHasDoubleJumped : 1; // 0x2118:1(0x1)
		bool bHasDodged : 1; // 0x2118:2(0x1)
		bool bFreeLookCamera; // 0x2119(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x211A(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFreeCamToggled; // 0x2120(0x10)
		unsigned char UnknownData06_6[0x1]; // 0x2130(0x1) UNKNOWN PROPERTY
		FRockRuntimeConfigOverrides RockRuntimeConfigs; // 0x2131(0x4)
		unsigned char UnknownData07_6[0x1B]; // 0x2135(0x1B) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSpringImpact; // 0x2150(0x10)
		unsigned char UnknownData08_6[0x78]; // 0x2160(0x78) UNKNOWN PROPERTY
		URockVehicleAnalyticsComponent RockAnalyticsComp; // 0x21D8(0x8)
		TArray VehicleAbilities; // 0x21E0(0x10)
		TArray VehicleAbilityTickOrder; // 0x21F0(0x10)
		AFortVehicleAudioController CachedVehicleAudioController; // 0x2200(0x8)
		URockVehicleAbility_Supersonic SupersonicAbility; // 0x2208(0x8)
		URockVehicleAnimInstance RockAnimInstance; // 0x2210(0x8)
		FFortAthenaVehicleInputState PendingDriverInputState; // 0x2218(0x40)
		FFortAthenaVehicleInputState PrevDriverInputState; // 0x2258(0x40)
		FVector EnterExitImpulse; // 0x2298(0x18)
		unsigned char UnknownData09_7[0xA0]; // 0x22B0(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicle");
			return ret;
		}

		void ServerToggleFreeCam(); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF414096660
		void ServerSetLegacyDamageValues(bool bDamageFriendlyVehicles, bool bDamageOtherVehicles, bool bDamageOwnVehicle, bool bDamageAllowedFromOtherVehicle); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414096580
		void RockFreeCamToggledDelegate__DelegateSignature(bool bFreeCam); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140964A0
		void OnSpringImpact__DelegateSignature(FName Socket, float ImpactSpeed, FHitResult& OutHit); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140963C0
		void OnRep_FreeLookCamera(); // Flags: Final|Native|Public 0x7FF4140962E0
		float GetThrottleState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414096200
		FFortAthenaVehicleInputState GetDriverInput(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414096120
		FRockRuntimeConfigOverrides GetCurrentRockRuntimeConfigOverrides(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414095F80
	};


	// Class RockVehicleRuntime.RockVehicleAbility
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class URockVehicleAbility : public UActorComponent	
	{
	public:
		ARockVehicle Vehicle; // 0xA0(0x8)
		float ActiveSeconds; // 0xA8(0x4)
		float LastDeactivationTimeSeconds; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility");
			return ret;
		}

		ARockVehicle GetVehicle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D19078
		float GetInactiveSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D18F98
		float GetActiveSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D18EB8
	};


	// Class RockVehicleRuntime.RockVehicleAbility_Physics
	// Inherited from URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0x58 (0x108 - 0xB0)
	class URockVehicleAbility_Physics : public URockVehicleAbility	
	{
	public:
		bool bShouldStayActive; // 0xB0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		FFortAthenaVehicleInputState InputState; // 0xB8(0x40)
		unsigned char UnknownData03_7[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_Physics");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAbility_AirControl
	// Inherited from URockVehicleAbility_Physics -> URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0x60 (0x168 - 0x108)
	class URockVehicleAbility_AirControl : public URockVehicleAbility_Physics	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		FVector TorqueAccel; // 0x120(0x18)
		FVector TorqueDamping; // 0x138(0x18)
		float DisableForDodgeTime; // 0x150(0x4)
		bool bAnyWheelsOnGround; // 0x154(0x1)
		bool bDodgeActive; // 0x155(0x1)
		bool bAutoUprightActive; // 0x156(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x157(0x1) UNKNOWN PROPERTY
		URockVehicleAbility_Dodge DodgeAbility; // 0x158(0x8)
		URockVehicleAbility_AutoUpright AutoUprightAbility; // 0x160(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_AirControl");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAbility_AutoUpright
	// Inherited from URockVehicleAbility_Physics -> URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0x108 (0x210 - 0x108)
	class URockVehicleAbility_AutoUpright : public URockVehicleAbility_Physics	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		FRockScalableFloat RollTorque; // 0x120(0x30)
		FRockScalableFloat PitchTorque; // 0x150(0x30)
		FRockScalableFloat PushForce; // 0x180(0x30)
		FRockScalableFloat MinActiveSeconds; // 0x1B0(0x30)
		URockVehicleAbility_Dodge DodgeAbility; // 0x1E0(0x8)
		int32_t LastWorldContactFrame; // 0x1E8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1EC(0x4) UNKNOWN PROPERTY
		FVector LastContactNormal; // 0x1F0(0x18)
		bool bWheelsOnGround; // 0x208(0x1)
		bool bAnyWheelsOnGround; // 0x209(0x1)
		bool bDodgeActive; // 0x20A(0x1)
		bool bBodyContact; // 0x20B(0x1)
		float TimeSinceLastBodyContact; // 0x20C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_AutoUpright");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAbility_Boost
	// Inherited from URockVehicleAbility_Physics -> URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0x68 (0x170 - 0x108)
	class URockVehicleAbility_Boost : public URockVehicleAbility_Physics	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		FRockScalableFloat BoostAccel; // 0x120(0x30)
		FMulticastInlineDelegate OnBoostFailed; // 0x150(0x10)
		URockVehicleBoostTank BoostTank; // 0x160(0x8)
		bool bHasBoost; // 0x168(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x169(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_Boost");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleBoostTank
	// Inherited from UActorComponent -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class URockVehicleBoostTank : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnSecondsChanged; // 0xA0(0x10)
		FRockScalableFloat StartSeconds; // 0xB0(0x30)
		FRockScalableFloat MaxSeconds; // 0xE0(0x30)
		ERockBoostLogic BoostLogic; // 0x110(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x111(0x3) UNKNOWN PROPERTY
		float BoostRechargeRate; // 0x114(0x4)
		float BoostRechargeDelay; // 0x118(0x4)
		float SecondsRemaining; // 0x11C(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x120(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleBoostTank");
			return ret;
		}

		void OnRep_SecondsRemaining(float PrevValue); // Flags: Final|Native|Protected 0x7FF414D195B8
		bool IsBoostFull(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D194D8
		bool HasBoost(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D193F8
		void GiveBoost(float Seconds); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D19318
		float GetPercentRemaining(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D19238
		float GetMaxBoostInSeconds(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D19158
	};


	// Class RockVehicleRuntime.RockVehicleAbility_Dodge
	// Inherited from URockVehicleAbility_Physics -> URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0x330 (0x438 - 0x108)
	class URockVehicleAbility_Dodge : public URockVehicleAbility_Physics	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		FRockDodgeImpulse ForwardImpulse; // 0x120(0x60)
		FRockDodgeImpulse BackwardImpulse; // 0x180(0x60)
		FRockDodgeImpulse SideImpulse; // 0x1E0(0x60)
		FRockScalableFloat MinTimeAfterJump; // 0x240(0x30)
		FRockScalableFloat MinTorqueTime; // 0x270(0x30)
		FRockScalableFloat MaxTorqueTime; // 0x2A0(0x30)
		FRockScalableFloat ForwardTorque; // 0x2D0(0x30)
		FRockScalableFloat SideTorque; // 0x300(0x30)
		FRockScalableFloat ZLiftTime; // 0x330(0x30)
		FRockScalableFloat ZLiftAccel; // 0x360(0x30)
		FRockScalableFloat ZDampingTime; // 0x390(0x30)
		FRockScalableFloat ZDamping; // 0x3C0(0x30)
		FRockScalableFloat InputThreshold; // 0x3F0(0x30)
		FVector2D DodgeInput; // 0x420(0x10)
		bool bWheelsOnGround; // 0x430(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x431(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_Dodge");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAbility_DoubleJump
	// Inherited from URockVehicleAbility_Physics -> URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0x50 (0x158 - 0x108)
	class URockVehicleAbility_DoubleJump : public URockVehicleAbility_Physics	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		FRockScalableFloat JumpVelocity; // 0x120(0x30)
		URockVehicleAbility_Jump JumpAbility; // 0x150(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_DoubleJump");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAbility_Flip
	// Inherited from URockVehicleAbility_Physics -> URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0xE8 (0x1F0 - 0x108)
	class URockVehicleAbility_Flip : public URockVehicleAbility_Physics	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		FRockScalableFloat Impulse; // 0x120(0x30)
		FRockScalableFloat Torque; // 0x150(0x30)
		FRockScalableFloat duration; // 0x180(0x30)
		FRockScalableFloat ContactNormalThresholdDegrees; // 0x1B0(0x30)
		bool bWheelsOnGround; // 0x1E0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x1E1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_Flip");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAbility_GroundTrails
	// Inherited from URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0x58 (0x108 - 0xB0)
	class URockVehicleAbility_GroundTrails : public URockVehicleAbility	
	{
	public:
		FGroundTrailsMap GroundTrailsMap; // 0xB0(0x18)
		TArray GroundTrailSockets; // 0xC8(0x10)
		UNiagaraSystem HandbrakeSystem; // 0xD8(0x8)
		TArray GroundTrailComponents; // 0xE0(0x10)
		TArray HandbrakeComponents; // 0xF0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x100(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails");
			return ret;
		}

		void SetEnabled(bool bValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D19778
		void OnSurfaceChanged(TEnumAsByte NewSurface); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D19698
	};


	// Class RockVehicleRuntime.RockVehicleAbility_Jump
	// Inherited from URockVehicleAbility_Physics -> URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0xD8 (0x1E0 - 0x108)
	class URockVehicleAbility_Jump : public URockVehicleAbility_Physics	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		FRockScalableFloat JumpVelocity; // 0x120(0x30)
		FRockScalableFloat JumpAccel; // 0x150(0x30)
		FRockScalableFloat MinJumpSeconds; // 0x180(0x30)
		FRockScalableFloat MaxJumpSeconds; // 0x1B0(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_Jump");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAbility_StickyWheels
	// Inherited from URockVehicleAbility_Physics -> URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0x98 (0x1A0 - 0x108)
	class URockVehicleAbility_StickyWheels : public URockVehicleAbility_Physics	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		FRockScalableFloat StickyForceScaleGround; // 0x120(0x30)
		FRockScalableFloat StickyForceScaleWall; // 0x150(0x30)
		FVector ContactNormal; // 0x180(0x18)
		float Scale; // 0x198(0x4)
		bool bAnyWheelsOnGround; // 0x19C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x19D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_StickyWheels");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAbility_Supersonic
	// Inherited from URockVehicleAbility -> UActorComponent -> UObject
	// Size: 0xC8 (0x178 - 0xB0)
	class URockVehicleAbility_Supersonic : public URockVehicleAbility	
	{
	public:
		FMulticastInlineDelegate OnTrailsActivate; // 0xB0(0x10)
		FMulticastInlineDelegate OnTrailsDeactivate; // 0xC0(0x10)
		FRockScalableFloat TurnOffTime; // 0xD0(0x30)
		FRockScalableFloat TurnOnTime; // 0x100(0x30)
		bool bUseTurnOnTimeRequirement; // 0x130(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
		FRockScalableFloat TurnOffSpeedBuffer; // 0x138(0x30)
		float TimeBelowSupersonic; // 0x168(0x4)
		float WorldTimeSupersonicExceeded; // 0x16C(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x170(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAbility_Supersonic");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAnalyticsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class URockVehicleAnalyticsComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FRockVehicleAnalyticsSession CurrentSession; // 0xA8(0x28)
		ARockVehicle Vehicle; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAnalyticsComponent");
			return ret;
		}

		void OnSupersonicStart(UActorComponent InComp, bool bInReset); // Flags: Final|Native|Private 0x7FF414D19D98
		void OnSupersonicEnd(UActorComponent InComp); // Flags: Final|Native|Private 0x7FF414D19CB8
		void OnPawnExitedSeat(TScriptInterface& InVehicle, AFortPawn InPlayerPawn, int32_t InSeatIndex); // Flags: Final|Native|Private|HasOutParms 0x7FF414D19BD8
		void OnPawnEnteredSeat(TScriptInterface& InVehicle, AFortPawn InPlayerPawn, int32_t InSeatIndex); // Flags: Final|Native|Private|HasOutParms 0x7FF414D19AF8
		void OnJumped(UActorComponent InComp, bool bInReset); // Flags: Final|Native|Private 0x7FF414D19A18
		void OnDoubleJumped(UActorComponent InComp, bool bInReset); // Flags: Final|Native|Private 0x7FF414D19938
		void OnDodged(UActorComponent InComp, bool bInReset); // Flags: Final|Native|Private 0x7FF414D19858
	};


	// Class RockVehicleRuntime.RockVehicleAnimInstance
	// Inherited from UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x188 (0x7F0 - 0x668)
	class URockVehicleAnimInstance : public UFortVehicleAnimInstance	
	{
	public:
		FBouncyChassisState BouncyChassis; // 0x668(0xC)
		FRockVehicleWheelAnimInfo WheelInfoFR; // 0x674(0x14)
		FRockVehicleWheelAnimInfo WheelInfoFL; // 0x688(0x14)
		FRockVehicleWheelAnimInfo WheelInfoBR; // 0x69C(0x14)
		FRockVehicleWheelAnimInfo WheelInfoBL; // 0x6B0(0x14)
		float WheelLerpSpeed; // 0x6C4(0x4)
		unsigned char UnknownData01_7[0x128]; // 0x6C8(0x128) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAnimInstance");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleAudioController
	// Inherited from AFortVehicleAudioController -> AActor -> UObject
	// Size: 0xF0 (0x4D8 - 0x3E8)
	class ARockVehicleAudioController : public AFortVehicleAudioController	
	{
	public:
		FRuntimeFloatCurve SideSpeedToSkidVolume; // 0x3E8(0x88)
		float SurfaceTypeInterpSpeed; // 0x470(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x474(0x4) UNKNOWN PROPERTY
		UAudioComponent TireSurfaceComponent; // 0x478(0x8)
		UAudioComponent AirLoopComponent; // 0x480(0x8)
		UAudioComponent SuperSonicComponent; // 0x488(0x8)
		bool bInWater; // 0x490(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x491(0x7) UNKNOWN PROPERTY
		UAudioMotorModelComponent MotorModel; // 0x498(0x8)
		ARockVehicle CachedVehicle; // 0x4A0(0x8)
		unsigned char UnknownData05_7[0x30]; // 0x4A8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleAudioController");
			return ret;
		}

		void SetSurfaceTypeParam(float NewSurfaceParam); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D1A118
		void SetBoosting(bool bNewBoosting); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D1A038
		void OnInAirUpdated(bool bNewInAir); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D19F58
		UAudioMotorModelComponent GetMotorSimComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D19E78
	};


	// Class RockVehicleRuntime.RockVehicleCameraMode
	// Inherited from UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x208 (0x1F20 - 0x1D18)
	class URockVehicleCameraMode : public UFortCameraMode_AthenaVehicle	
	{
	public:
		float SwivelPitchMax; // 0x1D18(0x4)
		float SwivelYawMax; // 0x1D1C(0x4)
		float GroundNormalInterpRate; // 0x1D20(0x4)
		float GroundNormalAirInterpRate; // 0x1D24(0x4)
		float GroundYawRate; // 0x1D28(0x4)
		float WallYawRate; // 0x1D2C(0x4)
		float InterpToGroundTime; // 0x1D30(0x4)
		float InterpToAirTime; // 0x1D34(0x4)
		float AverageVelocityInterpRate; // 0x1D38(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1D3C(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve AirRotationInterpRateForSpeed; // 0x1D40(0x88)
		float FocusOffsetInterpRate; // 0x1DC8(0x4)
		float DistanceSpeedScale; // 0x1DCC(0x4)
		float DistanceOffsetMin; // 0x1DD0(0x4)
		float DistanceOffsetMax; // 0x1DD4(0x4)
		float DistanceInterpRate; // 0x1DD8(0x4)
		float MaxSpeedFOVOffset; // 0x1DDC(0x4)
		float SupersonicFOVOffset; // 0x1DE0(0x4)
		float FOVInterpRate; // 0x1DE4(0x4)
		FRockCameraSettings CameraSettings; // 0x1DE8(0x1C)
		unsigned char UnknownData04_6[0x4]; // 0x1E04(0x4) UNKNOWN PROPERTY
		ARockVehicle VehicleTarget; // 0x1E08(0x8)
		URockVehicleAbility_Jump JumpAbility; // 0x1E10(0x8)
		unsigned char UnknownData05_7[0x108]; // 0x1E18(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleCameraMode");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleConfigs
	// Inherited from UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x608 (0xF88 - 0x980)
	class URockVehicleConfigs : public UFortPhysicsVehicleConfigs	
	{
	public:
		FRockVehicleAxleConfig FrontAxle; // 0x980(0x34)
		FRockVehicleAxleConfig BackAxle; // 0x9B4(0x34)
		FRockVehicleDriveConfig Drive; // 0x9E8(0x510)
		FRockVehicleDemoConfig DemolitionConfiguration; // 0xEF8(0x28)
		FRockScalableFloat MaxLinearSpeed; // 0xF20(0x30)
		FRockScalableFloat SupersonicSpeed; // 0xF50(0x30)
		float MaxAngularSpeed; // 0xF80(0x4)
		float SafeBuildingLandingDegrees; // 0xF84(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleConfigs");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleManager
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ARockVehicleManager : public AActor	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		TArray RockVehicles; // 0x2A0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleManager");
			return ret;
		}
	};


	// Class RockVehicleRuntime.RockVehicleWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class URockVehicleWorldSubsystem : public UWorldSubsystem	
	{
	public:
		ARockVehicleManager VehicleManager; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.RockVehicleWorldSubsystem");
			return ret;
		}
	};


	// Class RockVehicleRuntime.StreamingRadioPlayerComponent_Rock
	// Inherited from UStreamingRadioPlayerComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x540 - 0x540)
	class UStreamingRadioPlayerComponent_Rock : public UStreamingRadioPlayerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RockVehicleRuntime.StreamingRadioPlayerComponent_Rock");
			return ret;
		}

		void VehicleExploded(AController LastDamageInstigator, AFortAthenaVehicle Vehicle); // Flags: Final|Native|Protected 0x7FF414D1A1F8
	};

}
