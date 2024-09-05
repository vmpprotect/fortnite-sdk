#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LandscapePatch
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LandscapePatch.LandscapePatchComponentInstanceData
	// Inherited from FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x0 (0xB8 - 0xB8)
	struct FLandscapePatchComponentInstanceData : public FSceneComponentInstanceData	
	{
	public:
	};


	// Struct LandscapePatch.LandscapeTexturePatchEncodingSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FLandscapeTexturePatchEncodingSettings	
	{
	public:
		double ZeroInEncoding; // 0x0(0x8)
		double WorldSpaceEncodingScale; // 0x8(0x8)
	};


	// Struct LandscapePatch.LandscapeHeightPatchConvertToNativeParams
	// Size: 0xC (0xC - 0x0)
	struct FLandscapeHeightPatchConvertToNativeParams	
	{
	public:
		float ZeroInEncoding; // 0x0(0x4)
		float HeightScale; // 0x4(0x4)
		float HeightOffset; // 0x8(0x4)
	};

}
