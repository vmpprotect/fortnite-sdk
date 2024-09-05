#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioMotorSimStandardComponents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioMotorSimStandardComponents.BoostMotorSimComponent
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x158 - 0xB0)
	class UBoostMotorSimComponent : public UAudioMotorSimComponent	
	{
	public:
		float ThrottleScale; // 0xB0(0x4)
		float InterpExp; // 0xB4(0x4)
		float InterpTime; // 0xB8(0x4)
		bool ScaleThrottleWithBoostStrength; // 0xBC(0x1)
		bool bModifyPitch; // 0xBD(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xBE(0x2) UNKNOWN PROPERTY
		float PitchModifierInterpSpeed; // 0xC0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve BoostToPitchCurve; // 0xC8(0x88)
		unsigned char UnknownData05_7[0x8]; // 0x150(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSimStandardComponents.BoostMotorSimComponent");
			return ret;
		}
	};


	// Class AudioMotorSimStandardComponents.MotorPhysicsSimComponent
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x118 - 0xB0)
	class UMotorPhysicsSimComponent : public UAudioMotorSimComponent	
	{
	public:
		float Weight; // 0xB0(0x4)
		float EngineTorque; // 0xB4(0x4)
		float BrakingHorsePower; // 0xB8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		TArray GearRatios; // 0xC0(0x10)
		float ClutchedGearRatio; // 0xD0(0x4)
		bool bUseInfiniteGears; // 0xD4(0x1)
		bool bAlwaysDownshiftToZerothGear; // 0xD5(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xD6(0x2) UNKNOWN PROPERTY
		float InfiniteGearRatio; // 0xD8(0x4)
		float UpShiftMaxRpm; // 0xDC(0x4)
		float DownShiftStartRpm; // 0xE0(0x4)
		float ClutchedForceModifier; // 0xE4(0x4)
		float ClutchedDecelScale; // 0xE8(0x4)
		float EngineGearRatio; // 0xEC(0x4)
		float EngineFriction; // 0xF0(0x4)
		float GroundFriction; // 0xF4(0x4)
		float WindResistancePerVelocity; // 0xF8(0x4)
		float ThrottleInterpolationTime; // 0xFC(0x4)
		float RpmInterpSpeed; // 0x100(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGearChangedEvent; // 0x108(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSimStandardComponents.MotorPhysicsSimComponent");
			return ret;
		}
	};


	// Class AudioMotorSimStandardComponents.ResistanceMotorSimComponent
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x140 - 0xB0)
	class UResistanceMotorSimComponent : public UAudioMotorSimComponent	
	{
	public:
		float UpSpeedMaxFriction; // 0xB0(0x4)
		float MinSpeed; // 0xB4(0x4)
		FRuntimeFloatCurve SideSpeedFrictionCurve; // 0xB8(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSimStandardComponents.ResistanceMotorSimComponent");
			return ret;
		}
	};


	// Class AudioMotorSimStandardComponents.ReverseMotorSimComponent
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UReverseMotorSimComponent : public UAudioMotorSimComponent	
	{
	public:
		float ReverseEngineResistanceModifier; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSimStandardComponents.ReverseMotorSimComponent");
			return ret;
		}
	};


	// Class AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xF8 - 0xB0)
	class URevLimiterMotorSimComponent : public UAudioMotorSimComponent	
	{
	public:
		float LimitTime; // 0xB0(0x4)
		float DecelScale; // 0xB4(0x4)
		float AirMaxThrottleTime; // 0xB8(0x4)
		float SideSpeedThreshold; // 0xBC(0x4)
		float LimiterMaxRpm; // 0xC0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRevLimiterHit; // 0xC8(0x10)
		FMulticastInlineDelegate OnRevLimiterStateChanged; // 0xD8(0x10)
		unsigned char UnknownData03_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSimStandardComponents.RevLimiterMotorSimComponent");
			return ret;
		}
	};


	// Class AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xE8 - 0xB0)
	class URpmCurveMotorSimComponent : public UAudioMotorSimComponent	
	{
	public:
		TArray Gears; // 0xB0(0x10)
		float InterpSpeed; // 0xC0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnUpShift; // 0xC8(0x10)
		FMulticastInlineDelegate OnDownShift; // 0xD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSimStandardComponents.RpmCurveMotorSimComponent");
			return ret;
		}
	};


	// Class AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xF0 - 0xB0)
	class UThrottleStateMotorSimComponent : public UAudioMotorSimComponent	
	{
	public:
		FMulticastInlineDelegate OnThrottleEngaged; // 0xB0(0x10)
		FMulticastInlineDelegate OnThrottleReleased; // 0xC0(0x10)
		FMulticastInlineDelegate OnEngineBlowoff; // 0xD0(0x10)
		float BlowoffMinThrottleTime; // 0xE0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xE4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent");
			return ret;
		}
	};


	// Class AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x158 - 0xB0)
	class UVelocitySyncMotorSimComponent : public UAudioMotorSimComponent	
	{
	public:
		float NoThrottleTime; // 0xB0(0x4)
		float SpeedThreshold; // 0xB4(0x4)
		FRuntimeFloatCurve SpeedToRpmCurve; // 0xB8(0x88)
		float InterpSpeed; // 0x140(0x4)
		float InterpTime; // 0x144(0x4)
		float FirstGearThrottleThreshold; // 0x148(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x14C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent");
			return ret;
		}
	};

}
