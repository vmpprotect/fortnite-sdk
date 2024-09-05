#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GLTFExporter
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GLTFExporter.GLTFExportMessages
	// Size: 0x30 (0x30 - 0x0)
	struct FGLTFExportMessages	
	{
	public:
		TArray Suggestions; // 0x0(0x10)
		TArray Warnings; // 0x10(0x10)
		TArray Errors; // 0x20(0x10)
	};


	// Struct GLTFExporter.GLTFMaterialBakeSize
	// Size: 0xC (0xC - 0x0)
	struct FGLTFMaterialBakeSize	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
		bool bAutoDetect; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct GLTFExporter.GLTFOverrideMaterialBakeSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FGLTFOverrideMaterialBakeSettings	
	{
	public:
		bool bOverrideSize; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FGLTFMaterialBakeSize Size; // 0x4(0xC)
		bool bOverrideFilter; // 0x10(0x1)
		TEnumAsByte Filter; // 0x11(0x1)
		bool bOverrideTiling; // 0x12(0x1)
		TEnumAsByte Tiling; // 0x13(0x1)
	};

}
