#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GLTFExporter
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GLTFExporter.GLTFExportMessages
	// Size: 0x30 (0x30 - 0x0)
	struct FGLTFExportMessages	
	{
	public:
		TArray<FString> Suggestions; // 0x0(0x10)
		TArray<FString> Warnings; // 0x10(0x10)
		TArray<FString> Errors; // 0x20(0x10)
	};


	// Struct GLTFExporter.GLTFMaterialBakeSize
	// Size: 0xC (0xC - 0x0)
	struct FGLTFMaterialBakeSize	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
		bool bAutoDetect; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct GLTFExporter.GLTFOverrideMaterialBakeSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FGLTFOverrideMaterialBakeSettings	
	{
	public:
		bool bOverrideSize; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FGLTFMaterialBakeSize Size; // 0x4(0xC)
		bool bOverrideFilter; // 0x10(0x1)
		TEnumAsByte<TextureFilter> Filter; // 0x11(0x1)
		bool bOverrideTiling; // 0x12(0x1)
		TEnumAsByte<TextureAddress> Tiling; // 0x13(0x1)
	};

}
