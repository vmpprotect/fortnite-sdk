#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NitroGauntletsGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
	// Size: 0x30 (0x1440 - 0x1410)
	class UNitroGauntletsLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bMeteorStrike; // 0x1410(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1411(0x3) UNKNOWN PROPERTY
		float MeteorPitchAlpha; // 0x1414(0x4)
		float MeteorPitchTotal; // 0x1418(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x141C(0x4) UNKNOWN PROPERTY
		FRotator UpperBodyTwistRotator; // 0x1420(0x18)
		FGameplayTag MeteorActiveTag; // 0x1438(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x143C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGauntletsGameplayRuntime.NitroGauntletsLayerAnimInstance");
			return ret;
		}
	};

}
