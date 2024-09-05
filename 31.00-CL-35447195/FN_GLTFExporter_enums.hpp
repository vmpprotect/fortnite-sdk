#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GLTFExporter
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/GLTFExporter.EGLTFTextureImageFormat
	enum EGLTFTextureImageFormat
	{
		EGLTFTextureImageFormat__None = 0,
		EGLTFTextureImageFormat__PNG = 1,
		EGLTFTextureImageFormat__JPEG = 2,
	};


	// Enum /Script/GLTFExporter.EGLTFMaterialVariantMode
	enum EGLTFMaterialVariantMode
	{
		EGLTFMaterialVariantMode__None = 0,
		EGLTFMaterialVariantMode__Simple = 1,
		EGLTFMaterialVariantMode__UseMeshData = 2,
	};


	// Enum /Script/GLTFExporter.EGLTFMaterialBakeMode
	enum EGLTFMaterialBakeMode
	{
		EGLTFMaterialBakeMode__Disabled = 0,
		EGLTFMaterialBakeMode__Simple = 1,
		EGLTFMaterialBakeMode__UseMeshData = 2,
	};


	// Enum /Script/GLTFExporter.EGLTFMaterialPropertyGroup
	enum EGLTFMaterialPropertyGroup
	{
		EGLTFMaterialPropertyGroup__None = 0,
		EGLTFMaterialPropertyGroup__BaseColorOpacity = 1,
		EGLTFMaterialPropertyGroup__MetallicRoughness = 2,
		EGLTFMaterialPropertyGroup__EmissiveColor = 3,
		EGLTFMaterialPropertyGroup__Normal = 4,
		EGLTFMaterialPropertyGroup__AmbientOcclusion = 5,
		EGLTFMaterialPropertyGroup__ClearCoatRoughness = 6,
		EGLTFMaterialPropertyGroup__ClearCoatBottomNormal = 7,
	};

}
