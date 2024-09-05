#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AirJellyfishRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AirJellyfishRuntime.FortAirJellyfishAnimInstance
	// Inherited from UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x28 (0x5D0 - 0x5A8)
	class UFortAirJellyfishAnimInstance : public UFortAnimInstance	
	{
	public:
		float RotatorLerpRate; // 0x5A8(0x4)
		float VelocityDirectionScalar; // 0x5AC(0x4)
		FRotator RootRotation; // 0x5B0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x5C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AirJellyfishRuntime.FortAirJellyfishAnimInstance");
			return ret;
		}
	};

}
