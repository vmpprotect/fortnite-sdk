#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DynamicUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DynamicUI.DynamicUIUnallowed
	// Size: 0x30 (0x30 - 0x0)
	struct FDynamicUIUnallowed	
	{
	public:
		TWeakObjectPtr<UClass*> Widget; // 0x0(0x20)
		FName UniqueID; // 0x20(0x4)
		EDynamicUIUnallowedBehavior Behavior; // 0x24(0x4)
		bool bTargetAll : 1; // 0x28:0(0x1)
		bool bUseUniqueID : 1; // 0x28:1(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct DynamicUI.DynamicUIManagerDebug
	// Size: 0x1 (0x1 - 0x0)
	struct FDynamicUIManagerDebug	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DynamicUI.DynamicUIPanelDebug
	// Size: 0x1 (0x1 - 0x0)
	struct FDynamicUIPanelDebug	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DynamicUI.DynamicUIAdjust
	// Size: 0x88 (0x88 - 0x0)
	struct FDynamicUIAdjust	
	{
	public:
		FDynamicUIWidgetTarget TargetWidget; // 0x0(0x78)
		UDynamicUIConstraintBase* LayoutConstraint; // 0x78(0x8)
		UDynamicUISizeBase* SizeModifier; // 0x80(0x8)
	};


	// Struct DynamicUI.DynamicUIWidgetTarget
	// Size: 0x78 (0x78 - 0x0)
	struct FDynamicUIWidgetTarget	
	{
	public:
		FName WidgetPath; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FSoftObjectPath WidgetAssetPath; // 0x8(0x18)
		TWeakObjectPtr<UClass*> WidgetClass; // 0x20(0x20)
		FName UniqueID; // 0x40(0x4)
		bool bUseUniqueID : 1; // 0x44:0(0x1)
		unsigned char UnknownData01_7[0x33]; // 0x45(0x33) UNKNOWN PROPERTY
	};


	// Struct DynamicUI.DynamicUIAllowed
	// Size: 0x78 (0x78 - 0x0)
	struct FDynamicUIAllowed	
	{
	public:
		TWeakObjectPtr<UClass*> Widget; // 0x0(0x20)
		EDynamicUIZOrder ZOrder; // 0x20(0x4)
		int32_t CustomZOrder; // 0x24(0x4)
		FName UniqueID; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UCommonInputActionDomain*> ActionDomain; // 0x30(0x20)
		UDynamicUIConstraintBase* LayoutConstraint; // 0x50(0x8)
		UDynamicUISizeBase* SizeModifier; // 0x58(0x8)
		TArray<UDynamicUIExcludeBase*> ExcludeConditions; // 0x60(0x10)
		char LayerIDOverride; // 0x70(0x1)
		bool bIsUnique : 1; // 0x71:0(0x1)
		bool bUseActionDomain : 1; // 0x71:1(0x1)
		bool bUseLayerOverride : 1; // 0x71:2(0x1)
		bool bUseExclude : 1; // 0x71:3(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
	};


	// Struct DynamicUI.DynamicUIAspectRatio
	// Size: 0x8 (0x8 - 0x0)
	struct FDynamicUIAspectRatio	
	{
	public:
		EDynamicUIAspectRatioType AspectRatio; // 0x0(0x4)
		float CustomAspectRatio; // 0x4(0x4)
	};


	// Struct DynamicUI.DynamicUIPreload
	// Size: 0x20 (0x20 - 0x0)
	struct FDynamicUIPreload	
	{
	public:
		TWeakObjectPtr<UClass*> Widget; // 0x0(0x20)
	};


	// Struct DynamicUI.DynamicUISceneTarget
	// Size: 0x18 (0x18 - 0x0)
	struct FDynamicUISceneTarget	
	{
	public:
		FSoftObjectPath SceneAssetPath; // 0x0(0x18)
	};


	// Struct DynamicUI.DynamicUISceneData
	// Size: 0x1 (0x1 - 0x0)
	struct FDynamicUISceneData	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DynamicUI.DynamicUIDirectorData
	// Size: 0x30 (0x30 - 0x0)
	struct FDynamicUIDirectorData	
	{
	public:
		TWeakObjectPtr<UClass*> DirectorClass; // 0x0(0x20)
		TWeakObjectPtr<AActor*> Instance; // 0x20(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct DynamicUI.DynamicUIPlayerData
	// Size: 0x90 (0x90 - 0x0)
	struct FDynamicUIPlayerData	
	{
	public:
		unsigned char UnknownData00_7[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
		TMap<FString, FDynamicUIDirectorData> ActiveDirectors; // 0x40(0x50)
	};

}
