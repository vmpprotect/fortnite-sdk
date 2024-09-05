#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FlexLegendWeaponGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FlexLegendWeaponGameplayRuntime.FlexLegendLeverShotgunLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1420 - 0x1410)
	class UFlexLegendLeverShotgunLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bPlayUpperBodyTargetingCustomOrIsTargetingCustom; // 0x1410(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x1411(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FlexLegendWeaponGameplayRuntime.FlexLegendLeverShotgunLayerAnimInstance");
			return ret;
		}
	};

}
