#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FacialAnimSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FacialAnimSystem.FacialLiveLinkRemapAsset");
			return ret;
		}
	};

}
