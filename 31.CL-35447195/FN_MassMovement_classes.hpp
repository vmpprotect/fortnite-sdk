#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassMovement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MassMovement.MassApplyMovementProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UMassApplyMovementProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassMovement.MassApplyMovementProcessor");
			return ret;
		}
	};


	// Class MassMovement.MassMovementSettings
	// Inherited from UMassModuleSettings -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMassMovementSettings : public UMassModuleSettings	
	{
	public:
		TArray MovementStyles; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassMovement.MassMovementSettings");
			return ret;
		}
	};


	// Class MassMovement.MassMovementTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMassMovementTrait : public UMassEntityTraitBase	
	{
	public:
		FMassMovementParameters Movement; // 0x28(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassMovement.MassMovementTrait");
			return ret;
		}
	};


	// Class MassMovement.MassSimpleMovementTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassSimpleMovementTrait : public UMassEntityTraitBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassMovement.MassSimpleMovementTrait");
			return ret;
		}
	};


	// Class MassMovement.MassSimpleMovementProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UMassSimpleMovementProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassMovement.MassSimpleMovementProcessor");
			return ret;
		}
	};


	// Class MassMovement.MassVelocityRandomizerTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMassVelocityRandomizerTrait : public UMassEntityTraitBase	
	{
	public:
		float MinSpeed; // 0x28(0x4)
		float MaxSpeed; // 0x2C(0x4)
		bool bSetZComponent; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassMovement.MassVelocityRandomizerTrait");
			return ret;
		}
	};


	// Class MassMovement.MassRandomVelocityInitializer
	// Inherited from UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x348 (0x420 - 0xD8)
	class UMassRandomVelocityInitializer : public UMassObserverProcessor	
	{
	public:
		unsigned char UnknownData02_3[0x328]; // 0xD8(0x328) UNKNOWN PROPERTY
		float MinSpeed; // 0x400(0x4)
		float MaxSpeed; // 0x404(0x4)
		bool bSetZComponent; // 0x408(0x1)
		unsigned char UnknownData03_7[0x17]; // 0x409(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassMovement.MassRandomVelocityInitializer");
			return ret;
		}
	};

}
