#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseMovement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseMovement.NetPhysicsMoveConfig
	// Inherited from UDataAsset -> UObject
	// Size: 0x90 (0xC0 - 0x30)
	class UNetPhysicsMoveConfig : public UDataAsset	
	{
	public:
		TArray Entries; // 0x30(0x10)
		FNetPhysicsMoveLimits Limits; // 0x40(0x80)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseMovement.NetPhysicsMoveConfig");
			return ret;
		}
	};


	// Class VerseMovement.NetPhysicsMoveComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UNetPhysicsMoveComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData03_3[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY
		UNetPhysicsMoveConfig MoveConfig; // 0xF8(0x8)
		FNetPhysicsMoveObject SimOutput; // 0x100(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		APlayerController CachedPC; // 0x108(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x110(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseMovement.NetPhysicsMoveComponent");
			return ret;
		}
	};


	// Class VerseMovement.VerseMovementComponentBase
	// Inherited from UEntityActorComponent -> UEntityComponent -> UObject
	// Size: 0x0 (0x88 - 0x88)
	class UVerseMovementComponentBase : public UEntityActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseMovement.VerseMovementComponentBase");
			return ret;
		}
	};

}
