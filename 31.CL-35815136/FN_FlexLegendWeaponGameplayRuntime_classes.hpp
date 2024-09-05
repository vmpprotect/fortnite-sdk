#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FlexLegendWeaponGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FlexLegendWeaponGameplayRuntime.FlexLegendLeverShotgunLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1430 - 0x1420)
	class UFlexLegendLeverShotgunLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bPlayUpperBodyTargetingCustomOrIsTargetingCustom; // 0x1420(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x1421(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FlexLegendWeaponGameplayRuntime.FlexLegendLeverShotgunLayerAnimInstance");
			return ret;
		}
	};

}
