#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Foliage
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct Foliage.FoliageVertexColorChannelMask
	// Size: 0xC (0xC - 0x0)
	struct FFoliageVertexColorChannelMask	
	{
	public:
		bool UseMask : 1; // 0x0:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MaskThreshold; // 0x4(0x4)
		bool InvertMask : 1; // 0x8:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct Foliage.FoliageDensityFalloff
	// Size: 0x90 (0x90 - 0x0)
	struct FFoliageDensityFalloff	
	{
	public:
		bool bUseFalloffCurve; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FRuntimeFloatCurve FalloffCurve; // 0x8(0x88)
	};


	// Struct Foliage.FoliageTypeObject
	// Size: 0x20 (0x20 - 0x0)
	struct FFoliageTypeObject	
	{
	public:
		UObject* FoliageTypeObject; // 0x0(0x8)
		UFoliageType* TypeInstance; // 0x8(0x8)
		bool bIsAsset; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		UClass* Type; // 0x18(0x8)
	};


	// Struct Foliage.ProceduralFoliageInstance
	// Size: 0x80 (0x80 - 0x0)
	struct FProceduralFoliageInstance	
	{
	public:
		FQuat Rotation; // 0x0(0x20)
		FVector Location; // 0x20(0x18)
		float Age; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVector Normal; // 0x40(0x18)
		float Scale; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		UFoliageType* Type; // 0x60(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x68(0x18) UNKNOWN PROPERTY
	};

}
