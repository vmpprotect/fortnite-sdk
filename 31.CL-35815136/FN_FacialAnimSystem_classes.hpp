#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FacialAnimSystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FacialAnimSystem.FacialLiveLinkRemapAsset
	// Inherited from ULiveLinkRetargetAsset -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFacialLiveLinkRemapAsset : public ULiveLinkRetargetAsset	
	{
	public:
		bool bExtractBoneTransform; // 0x28(0x1)
		bool bExtractCurve; // 0x29(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FacialAnimSystem.FacialLiveLinkRemapAsset");
			return ret;
		}
	};

}
