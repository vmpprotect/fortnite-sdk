#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LandscapePatch
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
