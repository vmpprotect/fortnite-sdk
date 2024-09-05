#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CustomizableObject
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/CustomizableObject.EPackageSaveResolutionType
	enum EPackageSaveResolutionType
	{
		EPackageSaveResolutionType__None = 0,
		EPackageSaveResolutionType__NewFile = 1,
		EPackageSaveResolutionType__Overriden = 2,
		EPackageSaveResolutionType__UnableToOverride = 3,
	};


	// Enum /Script/CustomizableObject.EUpdateResult
	enum EUpdateResult
	{
		EUpdateResult__Success = 0,
		EUpdateResult__Warning = 1,
		EUpdateResult__Error = 2,
		EUpdateResult__ErrorOptimized = 3,
		EUpdateResult__ErrorReplaced = 4,
		EUpdateResult__ErrorDiscarded = 5,
		EUpdateResult__Error16BitBoneIndex = 6,
	};


	// Enum /Script/CustomizableObject.ECustomizableObjectNumBoneInfluences
	enum ECustomizableObjectNumBoneInfluences
	{
		ECustomizableObjectNumBoneInfluences__Four = 4,
		ECustomizableObjectNumBoneInfluences__Eight = 8,
		ECustomizableObjectNumBoneInfluences__Twelve = C,
	};


	// Enum /Script/CustomizableObject.ECustomizableObjectTextureCompression
	enum ECustomizableObjectTextureCompression
	{
		ECustomizableObjectTextureCompression__None = 0,
		ECustomizableObjectTextureCompression__Fast = 1,
		ECustomizableObjectTextureCompression__HighQuality = 2,
	};


	// Enum /Script/CustomizableObject.EMutableParameterType
	enum EMutableParameterType
	{
		EMutableParameterType__None = 0,
		EMutableParameterType__Bool = 1,
		EMutableParameterType__Int = 2,
		EMutableParameterType__Float = 3,
		EMutableParameterType__Color = 4,
		EMutableParameterType__Projector = 5,
		EMutableParameterType__Texture = 6,
	};


	// Enum /Script/CustomizableObject.ECustomizableObjectGroupType
	enum ECustomizableObjectGroupType
	{
		ECustomizableObjectGroupType__COGT_TOGGLE = 0,
		ECustomizableObjectGroupType__COGT_ALL = 1,
		ECustomizableObjectGroupType__COGT_ONE = 2,
		ECustomizableObjectGroupType__COGT_ONE_OR_NONE = 3,
	};


	// Enum /Script/CustomizableObject.EMutableCompileMeshType
	enum EMutableCompileMeshType
	{
		EMutableCompileMeshType__Full = 0,
		EMutableCompileMeshType__Local = 1,
		EMutableCompileMeshType__LocalAndChildren = 2,
		EMutableCompileMeshType__AddWorkingSetNoChildren = 3,
		EMutableCompileMeshType__AddWorkingSetAndChildren = 4,
	};


	// Enum /Script/CustomizableObject.ECustomizableObjectProjectorType
	enum ECustomizableObjectProjectorType
	{
		ECustomizableObjectProjectorType__Planar = 0,
		ECustomizableObjectProjectorType__Cylindrical = 1,
		ECustomizableObjectProjectorType__Wrapping = 2,
	};


	// Enum /Script/CustomizableObject.ECOResourceDataType
	enum ECOResourceDataType
	{
		ECOResourceDataType__None = 0,
		ECOResourceDataType__AssetUserData = 1,
	};

}
