#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SentryRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SentryRuntime.CreativeSentryAnimInstance
	// Inherited from UFortDefenderAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x20 (0x620 - 0x600)
	class UCreativeSentryAnimInstance : public UFortDefenderAnimInstance	
	{
	public:
		float RotateAimAnimationPitch; // 0x600(0x4)
		float CounterRotateAimAnimationPitch; // 0x604(0x4)
		bool bIsRelaxedLevel1OrNotTargeting; // 0x608(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x609(0x3) UNKNOWN PROPERTY
		float RightHandIKAlpha; // 0x60C(0x4)
		float OneMinusLeftHandFK; // 0x610(0x4)
		float LeftHandIKAlpha; // 0x614(0x4)
		float RetargetHandIKBonesToFKPositionWeight; // 0x618(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x61C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SentryRuntime.CreativeSentryAnimInstance");
			return ret;
		}
	};

}
