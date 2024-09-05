#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangePipelines
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/InterchangePipelines.EInterchangeForceMeshType
	enum EInterchangeForceMeshType
	{
		EInterchangeForceMeshType__IFMT_None = 0,
		EInterchangeForceMeshType__IFMT_StaticMesh = 1,
		EInterchangeForceMeshType__IFMT_SkeletalMesh = 2,
	};


	// Enum /Script/InterchangePipelines.EInterchangeVertexColorImportOption
	enum EInterchangeVertexColorImportOption
	{
		EInterchangeVertexColorImportOption__IVCIO_Replace = 0,
		EInterchangeVertexColorImportOption__IVCIO_Ignore = 1,
		EInterchangeVertexColorImportOption__IVCIO_Override = 2,
	};


	// Enum /Script/InterchangePipelines.EInterchangeAnimationRange
	enum EInterchangeAnimationRange
	{
		EInterchangeAnimationRange__Timeline = 0,
		EInterchangeAnimationRange__Animated = 1,
		EInterchangeAnimationRange__SetRange = 2,
	};


	// Enum /Script/InterchangePipelines.EInterchangeMaterialImportOption
	enum EInterchangeMaterialImportOption
	{
		EInterchangeMaterialImportOption__ImportAsMaterials = 0,
		EInterchangeMaterialImportOption__ImportAsMaterialInstances = 1,
	};


	// Enum /Script/InterchangePipelines.EInterchangeMaterialSearchLocation
	enum EInterchangeMaterialSearchLocation
	{
		EInterchangeMaterialSearchLocation__Local = 0,
		EInterchangeMaterialSearchLocation__UnderParent = 1,
		EInterchangeMaterialSearchLocation__UnderRoot = 2,
		EInterchangeMaterialSearchLocation__AllAssets = 3,
		EInterchangeMaterialSearchLocation__DoNotSearch = 4,
	};

}
