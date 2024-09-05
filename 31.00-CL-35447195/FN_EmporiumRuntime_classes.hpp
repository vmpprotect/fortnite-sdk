#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EmporiumRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EmporiumRuntime.EmporiumAssetsPaths
	// Inherited from UObject
	// Size: 0x3A0 (0x3C8 - 0x28)
	class UEmporiumAssetsPaths : public UObject	
	{
	public:
		TWeakObjectPtr MR_MI_Opaque; // 0x28(0x20)
		TWeakObjectPtr MR_MI_Opaque_Clearcoat; // 0x48(0x20)
		TWeakObjectPtr MR_MI_Opaque_Sheen; // 0x68(0x20)
		TWeakObjectPtr MR_MI_Opaque_Unlit; // 0x88(0x20)
		TWeakObjectPtr MR_MI_Translucent; // 0xA8(0x20)
		TWeakObjectPtr MR_MI_Translucent_Clearcoat; // 0xC8(0x20)
		TWeakObjectPtr MR_MI_Transmission; // 0xE8(0x20)
		TWeakObjectPtr MR_MI_Opaque_TS; // 0x108(0x20)
		TWeakObjectPtr MR_MI_Opaque_Clearcoat_TS; // 0x128(0x20)
		TWeakObjectPtr MR_MI_Opaque_Sheen_TS; // 0x148(0x20)
		TWeakObjectPtr MR_MI_Opaque_Unlit_TS; // 0x168(0x20)
		TWeakObjectPtr MR_MI_Translucent_TS; // 0x188(0x20)
		TWeakObjectPtr MR_MI_Translucent_Clearcoat_TS; // 0x1A8(0x20)
		TWeakObjectPtr MR_MI_Transmission_TS; // 0x1C8(0x20)
		TWeakObjectPtr SG_MI_Opaque; // 0x1E8(0x20)
		TWeakObjectPtr SG_MI_Opaque_Clearcoat; // 0x208(0x20)
		TWeakObjectPtr SG_MI_Opaque_Sheen; // 0x228(0x20)
		TWeakObjectPtr SG_MI_Translucent; // 0x248(0x20)
		TWeakObjectPtr SG_MI_Translucent_Clearcoat; // 0x268(0x20)
		TWeakObjectPtr SG_MI_Transmission; // 0x288(0x20)
		TWeakObjectPtr SG_MI_Opaque_TS; // 0x2A8(0x20)
		TWeakObjectPtr SG_MI_Opaque_Clearcoat_TS; // 0x2C8(0x20)
		TWeakObjectPtr SG_MI_Opaque_Sheen_TS; // 0x2E8(0x20)
		TWeakObjectPtr SG_MI_Translucent_TS; // 0x308(0x20)
		TWeakObjectPtr SG_MI_Translucent_Clearcoat_TS; // 0x328(0x20)
		TWeakObjectPtr SG_MI_Transmission_TS; // 0x348(0x20)
		TWeakObjectPtr SG_MI_Foliage_TS; // 0x368(0x20)
		TWeakObjectPtr MR_MI_Foliage_TS; // 0x388(0x20)
		TWeakObjectPtr PlaceholderSphere; // 0x3A8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EmporiumRuntime.EmporiumAssetsPaths");
			return ret;
		}
	};

}
