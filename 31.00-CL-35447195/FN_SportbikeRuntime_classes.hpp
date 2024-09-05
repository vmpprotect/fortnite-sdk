#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SportbikeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SportbikeRuntime.FortSportbikeAnimInstance
	// Inherited from UFortMotorcycleVehicleAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x28 (0x700 - 0x6D8)
	class UFortSportbikeAnimInstance : public UFortMotorcycleVehicleAnimInstance	
	{
	public:
		FRotator LimitedWheelRotationFR; // 0x6D8(0x18)
		bool HasPassenger; // 0x6F0(0x1)
		bool ShouldPlayGroundTrick; // 0x6F1(0x1)
		bool IsWheelie; // 0x6F2(0x1)
		bool StateRuleFromWheelieToGroundTrickOutro; // 0x6F3(0x1)
		bool SportBikeWheelieEarlyOut; // 0x6F4(0x1)
		bool ShouldExitFromLocomotion; // 0x6F5(0x1)
		bool IsChangingGear; // 0x6F6(0x1)
		unsigned char UnknownData01_7[0x9]; // 0x6F7(0x9) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SportbikeRuntime.FortSportbikeAnimInstance");
			return ret;
		}
	};


	// Class SportbikeRuntime.FortSportbikeDriverAnimInstance
	// Inherited from UFortPlayerAnimInstance_MotorcycleDriver -> UFortPlayerAnimInstance_MotorcycleRider -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x30 (0x9C0 - 0x990)
	class UFortSportbikeDriverAnimInstance : public UFortPlayerAnimInstance_MotorcycleDriver	
	{
	public:
		bool SportBikeWheelieEarlyOut; // 0x990(0x1)
		bool StateRuleFromWheelieToGroundTrickOutro; // 0x991(0x1)
		bool EarlyExitFromGroundTrick; // 0x992(0x1)
		bool IsBoostingWithNoPassenger; // 0x993(0x1)
		int32_t MotorcycleGear; // 0x994(0x4)
		int32_t CurrentGear; // 0x998(0x4)
		int32_t PreviousGear; // 0x99C(0x4)
		bool IsChangingGear; // 0x9A0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x9A1(0x3) UNKNOWN PROPERTY
		float SuperSlideBlendAlpha; // 0x9A4(0x4)
		float SuperSlideBlendStart; // 0x9A8(0x4)
		float SuperSlideBlendEnd; // 0x9AC(0x4)
		bool IsSuperSliding; // 0x9B0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x9B1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SportbikeRuntime.FortSportbikeDriverAnimInstance");
			return ret;
		}
	};


	// Class SportbikeRuntime.FortSportbikeVehicle
	// Inherited from AFortMotorcycleVehicle -> AFortAthenaSKMotorVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x10 (0x25F0 - 0x25E0)
	class AFortSportbikeVehicle : public AFortMotorcycleVehicle	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x25E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SportbikeRuntime.FortSportbikeVehicle");
			return ret;
		}
	};


	// Class SportbikeRuntime.FortSportbikeVehicleConfigs
	// Inherited from UFortMotorcycleVehicleConfigs -> UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x0 (0xC50 - 0xC50)
	class UFortSportbikeVehicleConfigs : public UFortMotorcycleVehicleConfigs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SportbikeRuntime.FortSportbikeVehicleConfigs");
			return ret;
		}
	};

}
