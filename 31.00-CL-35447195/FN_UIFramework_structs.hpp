#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UIFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct UIFramework.UIFrameworkSimpleEventArgument
	// Size: 0x10 (0x10 - 0x0)
	struct FUIFrameworkSimpleEventArgument	
	{
	public:
		APlayerController PlayerController; // 0x0(0x8)
		UUIFrameworkWidget Sender; // 0x8(0x8)
	};


	// Struct UIFramework.UIFrameworkClickEventArgument
	// Inherited from FUIFrameworkSimpleEventArgument
	// Size: 0x0 (0x10 - 0x10)
	struct FUIFrameworkClickEventArgument : public FUIFrameworkSimpleEventArgument	
	{
	public:
	};


	// Struct UIFramework.UIFrameworkWidgetOwner
	// Size: 0x18 (0x18 - 0x0)
	struct FUIFrameworkWidgetOwner	
	{
	public:
		APlayerController PlayerController; // 0x0(0x8)
		UGameInstance GameInstance; // 0x8(0x8)
		UWorld World; // 0x10(0x8)
	};


	// Struct UIFramework.UIFrameworkParentWidget
	// Size: 0x10 (0x10 - 0x0)
	struct FUIFrameworkParentWidget	
	{
	public:
		UObject Parent; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct UIFramework.UIFrameworkSlotBase
	// Inherited from FFastArraySerializerItem
	// Size: 0x1C (0x28 - 0xC)
	struct FUIFrameworkSlotBase : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UUIFrameworkWidget Widget; // 0x10(0x8)
		FUIFrameworkWidgetId WidgetId; // 0x18(0x8)
		FUIFrameworkWidgetId LocalPreviousWidgetId; // 0x20(0x8)
	};


	// Struct UIFramework.UIFrameworkWidgetId
	// Size: 0x8 (0x8 - 0x0)
	struct FUIFrameworkWidgetId	
	{
	public:
		int64_t Key; // 0x0(0x8)
	};


	// Struct UIFramework.UIFrameworkSimpleSlot
	// Inherited from FUIFrameworkSlotBase -> FFastArraySerializerItem
	// Size: 0x18 (0x40 - 0x28)
	struct FUIFrameworkSimpleSlot : public FUIFrameworkSlotBase	
	{
	public:
		FMargin Padding; // 0x28(0x10)
		TEnumAsByte HorizontalAlignment; // 0x38(0x1)
		TEnumAsByte VerticalAlignment; // 0x39(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct UIFramework.UIFrameworkWidgetTreeEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x24 (0x30 - 0xC)
	struct FUIFrameworkWidgetTreeEntry : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UUIFrameworkWidget Parent; // 0x10(0x8)
		UUIFrameworkWidget Child; // 0x18(0x8)
		FUIFrameworkWidgetId ParentID; // 0x20(0x8)
		FUIFrameworkWidgetId ChildId; // 0x28(0x8)
	};


	// Struct UIFramework.UIFrameworkWidgetTree
	// Inherited from FFastArraySerializer
	// Size: 0xF0 (0x1F8 - 0x108)
	struct FUIFrameworkWidgetTree : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x108(0x30) UNKNOWN PROPERTY
		TArray Entries; // 0x138(0x10)
		AActor ReplicatedOwner; // 0x148(0x8)
		unsigned char UnknownData03_7[0xA8]; // 0x150(0xA8) UNKNOWN PROPERTY
	};


	// Struct UIFramework.UIFrameworkGameLayerSlot
	// Inherited from FUIFrameworkSlotBase -> FFastArraySerializerItem
	// Size: 0x8 (0x30 - 0x28)
	struct FUIFrameworkGameLayerSlot : public FUIFrameworkSlotBase	
	{
	public:
		int32_t ZOrder; // 0x28(0x4)
		EUIFrameworkInputMode InputMode; // 0x2C(0x1)
		EUIFrameworkGameLayerType Type; // 0x2D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
	};


	// Struct UIFramework.UIFrameworkGameLayerSlotList
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FUIFrameworkGameLayerSlotList : public FFastArraySerializer	
	{
	public:
		TArray Entries; // 0x108(0x10)
		UUIFrameworkPlayerComponent Owner; // 0x118(0x8)
	};


	// Struct UIFramework.UIFrameworkCanvasBoxSlot
	// Inherited from FUIFrameworkSlotBase -> FFastArraySerializerItem
	// Size: 0x48 (0x70 - 0x28)
	struct FUIFrameworkCanvasBoxSlot : public FUIFrameworkSlotBase	
	{
	public:
		FAnchors Anchors; // 0x28(0x20)
		FMargin Offsets; // 0x48(0x10)
		FVector2D Alignment; // 0x58(0x10)
		int32_t ZOrder; // 0x68(0x4)
		bool bSizeToContent; // 0x6C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
	};


	// Struct UIFramework.UIFrameworkCanvasBoxSlotList
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FUIFrameworkCanvasBoxSlotList : public FFastArraySerializer	
	{
	public:
		TArray Slots; // 0x108(0x10)
		UUIFrameworkCanvasBox Owner; // 0x118(0x8)
	};


	// Struct UIFramework.UIFrameworkImageBlockData
	// Size: 0x40 (0x40 - 0x0)
	struct FUIFrameworkImageBlockData	
	{
	public:
		FLinearColor Tint; // 0x0(0x10)
		TWeakObjectPtr ResourceObject; // 0x10(0x20)
		FVector2f DesiredSize; // 0x30(0x8)
		TEnumAsByte Tiling; // 0x38(0x1)
		bool bUseTextureSize; // 0x39(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct UIFramework.UIFrameworkOverlaySlot
	// Inherited from FUIFrameworkSlotBase -> FFastArraySerializerItem
	// Size: 0x18 (0x40 - 0x28)
	struct FUIFrameworkOverlaySlot : public FUIFrameworkSlotBase	
	{
	public:
		FMargin Padding; // 0x28(0x10)
		TEnumAsByte HorizontalAlignment; // 0x38(0x1)
		TEnumAsByte VerticalAlignment; // 0x39(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x3A(0x2) UNKNOWN PROPERTY
		int32_t Index; // 0x3C(0x4)
	};


	// Struct UIFramework.UIFrameworkOverlaySlotList
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FUIFrameworkOverlaySlotList : public FFastArraySerializer	
	{
	public:
		TArray Slots; // 0x108(0x10)
		UUIFrameworkOverlay Owner; // 0x118(0x8)
	};


	// Struct UIFramework.UIFrameworkStackBoxSlot
	// Inherited from FUIFrameworkSlotBase -> FFastArraySerializerItem
	// Size: 0x20 (0x48 - 0x28)
	struct FUIFrameworkStackBoxSlot : public FUIFrameworkSlotBase	
	{
	public:
		TEnumAsByte HorizontalAlignment; // 0x28(0x1)
		TEnumAsByte VerticalAlignment; // 0x29(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FMargin Padding; // 0x2C(0x10)
		FSlateChildSize Size; // 0x3C(0x8)
		int32_t Index; // 0x44(0x4)
	};


	// Struct UIFramework.UIFrameworkStackBoxSlotList
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FUIFrameworkStackBoxSlotList : public FFastArraySerializer	
	{
	public:
		TArray Slots; // 0x108(0x10)
		UUIFrameworkStackBox Owner; // 0x118(0x8)
	};


	// Struct UIFramework.UIFrameworkUserWidgetNamedSlot
	// Inherited from FUIFrameworkSlotBase -> FFastArraySerializerItem
	// Size: 0x8 (0x30 - 0x28)
	struct FUIFrameworkUserWidgetNamedSlot : public FUIFrameworkSlotBase	
	{
	public:
		FName SlotName; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct UIFramework.UIFrameworkUserWidgetNamedSlotList
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FUIFrameworkUserWidgetNamedSlotList : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
	};

}
