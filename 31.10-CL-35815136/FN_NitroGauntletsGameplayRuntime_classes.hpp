#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NitroGauntletsGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NitroGauntletsGameplayRuntime.NitroGauntletCustomCharacterPartAnimInstance
	// Inherited from UCustomCharacterPartAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x0 (0x770 - 0x770)
	class UNitroGauntletCustomCharacterPartAnimInstance : public UCustomCharacterPartAnimInstance	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGauntletsGameplayRuntime.NitroGauntletCustomCharacterPartAnimInstance");
			return ret;
		}
	};


	// Class NitroGauntletsGameplayRuntime.NitroGauntletsLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x30 (0x1450 - 0x1420)
	class UNitroGauntletsLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bMeteorStrike; // 0x1420(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1421(0x3) UNKNOWN PROPERTY
		float MeteorPitchAlpha; // 0x1424(0x4)
		float MeteorPitchTotal; // 0x1428(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x142C(0x4) UNKNOWN PROPERTY
		FRotator UpperBodyTwistRotator; // 0x1430(0x18)
		FGameplayTag MeteorActiveTag; // 0x1448(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x144C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGauntletsGameplayRuntime.NitroGauntletsLayerAnimInstance");
			return ret;
		}
	};

}
