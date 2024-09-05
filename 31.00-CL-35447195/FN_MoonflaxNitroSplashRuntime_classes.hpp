#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MoonflaxNitroSplashRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MoonflaxNitroSplashRuntime.NitroSplashLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x20 (0x1430 - 0x1410)
	class UNitroSplashLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsTacSprintNitroSplash; // 0x1410(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1411(0x3) UNKNOWN PROPERTY
		FGameplayTag PlayerConsumingTag; // 0x1414(0x4)
		unsigned char UnknownData03_7[0x18]; // 0x1418(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MoonflaxNitroSplashRuntime.NitroSplashLayerAnimInstance");
			return ret;
		}
	};

}
