#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DatasmithCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/DatasmithCore.EDatasmithLightShape
	enum EDatasmithLightShape
	{
		EDatasmithLightShape__Rectangle = 0,
		EDatasmithLightShape__Disc = 1,
		EDatasmithLightShape__Sphere = 2,
		EDatasmithLightShape__Cylinder = 3,
		EDatasmithLightShape__None = 4,
	};


	// Enum /Script/DatasmithCore.EDatasmithTextureMode
	enum EDatasmithTextureMode
	{
		EDatasmithTextureMode__Diffuse = 0,
		EDatasmithTextureMode__Specular = 1,
		EDatasmithTextureMode__Normal = 2,
		EDatasmithTextureMode__NormalGreenInv = 3,
		EDatasmithTextureMode__UNUSED_Displace = 4,
		EDatasmithTextureMode__Other = 5,
		EDatasmithTextureMode__Bump = 6,
		EDatasmithTextureMode__Ies = 7,
	};


	// Enum /Script/DatasmithCore.EDatasmithTextureFilter
	enum EDatasmithTextureFilter
	{
		EDatasmithTextureFilter__Nearest = 0,
		EDatasmithTextureFilter__Bilinear = 1,
		EDatasmithTextureFilter__Trilinear = 2,
		EDatasmithTextureFilter__Default = 3,
	};


	// Enum /Script/DatasmithCore.EDatasmithTextureAddress
	enum EDatasmithTextureAddress
	{
		EDatasmithTextureAddress__Wrap = 0,
		EDatasmithTextureAddress__Clamp = 1,
		EDatasmithTextureAddress__Mirror = 2,
	};


	// Enum /Script/DatasmithCore.EDatasmithTextureFormat
	enum EDatasmithTextureFormat
	{
		EDatasmithTextureFormat__PNG = 0,
		EDatasmithTextureFormat__JPEG = 1,
	};


	// Enum /Script/DatasmithCore.EDatasmithColorSpace
	enum EDatasmithColorSpace
	{
		EDatasmithColorSpace__Default = 0,
		EDatasmithColorSpace__sRGB = 1,
		EDatasmithColorSpace__Linear = 2,
	};


	// Enum /Script/DatasmithCore.EDatasmithKeyValuePropertyType
	enum EDatasmithKeyValuePropertyType
	{
		EDatasmithKeyValuePropertyType__String = 0,
		EDatasmithKeyValuePropertyType__Color = 1,
		EDatasmithKeyValuePropertyType__Float = 2,
		EDatasmithKeyValuePropertyType__Bool = 3,
		EDatasmithKeyValuePropertyType__Texture = 4,
		EDatasmithKeyValuePropertyType__Vector = 5,
		EDatasmithKeyValuePropertyType__Integer = 6,
	};


	// Enum /Script/DatasmithCore.EDatasmithActorRemovalRule
	enum EDatasmithActorRemovalRule
	{
		EDatasmithActorRemovalRule__RemoveChildren = 0,
		EDatasmithActorRemovalRule__KeepChildrenAndKeepRelativeTransform = 1,
	};


	// Enum /Script/DatasmithCore.EDatasmithActorAttachmentRule
	enum EDatasmithActorAttachmentRule
	{
		EDatasmithActorAttachmentRule__KeepRelativeTransform = 0,
		EDatasmithActorAttachmentRule__KeepWorldTransform = 1,
	};


	// Enum /Script/DatasmithCore.EDatasmithCompletionMode
	enum EDatasmithCompletionMode
	{
		EDatasmithCompletionMode__KeepState = 0,
		EDatasmithCompletionMode__RestoreState = 1,
		EDatasmithCompletionMode__ProjectDefault = 2,
	};


	// Enum /Script/DatasmithCore.EDatasmithPropertyCategory
	enum EDatasmithPropertyCategory
	{
		EDatasmithPropertyCategory__Undefined = 0,
		EDatasmithPropertyCategory__Generic = 1,
		EDatasmithPropertyCategory__RelativeLocation = 2,
		EDatasmithPropertyCategory__RelativeRotation = 4,
		EDatasmithPropertyCategory__RelativeScale3D = 8,
		EDatasmithPropertyCategory__Visibility = 10,
		EDatasmithPropertyCategory__Material = 20,
		EDatasmithPropertyCategory__Color = 40,
		EDatasmithPropertyCategory__Option = 80,
	};

}
