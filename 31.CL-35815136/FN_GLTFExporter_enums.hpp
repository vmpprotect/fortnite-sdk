#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GLTFExporter
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
