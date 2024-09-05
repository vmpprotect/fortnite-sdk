#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MoonflaxNitroSplashRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MoonflaxNitroSplashRuntime.NitroSplashLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x20 (0x1440 - 0x1420)
	class UNitroSplashLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsTacSprintNitroSplash; // 0x1420(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1421(0x3) UNKNOWN PROPERTY
		FGameplayTag PlayerConsumingTag; // 0x1424(0x4)
		unsigned char UnknownData01_7[0x18]; // 0x1428(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MoonflaxNitroSplashRuntime.NitroSplashLayerAnimInstance");
			return ret;
		}
	};

}
