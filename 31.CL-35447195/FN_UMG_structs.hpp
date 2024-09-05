#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UMG
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct UMG.EventReply
	// Size: 0xB8 (0xB8 - 0x0)
	struct FEventReply	
	{
	public:
		unsigned char UnknownData01_2[0xB8]; // 0x0(0xB8) UNKNOWN PROPERTY
	};


	// Struct UMG.WidgetTransform
	// Size: 0x38 (0x38 - 0x0)
	struct FWidgetTransform	
	{
	public:
		FVector2D Translation; // 0x0(0x10)
		FVector2D Scale; // 0x10(0x10)
		FVector2D Shear; // 0x20(0x10)
		float Angle; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct UMG.ShapedTextOptions
	// Size: 0x3 (0x3 - 0x0)
	struct FShapedTextOptions	
	{
	public:
		bool bOverride_TextShapingMethod : 1; // 0x0:0(0x1)
		bool bOverride_TextFlowDirection : 1; // 0x0:1(0x1)
		ETextShapingMethod TextShapingMethod; // 0x1(0x1)
		ETextFlowDirection TextFlowDirection; // 0x2(0x1)
	};


	// Struct UMG.PaintContext
	// Size: 0x30 (0x30 - 0x0)
	struct FPaintContext	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct UMG.AnimationEventBinding
	// Size: 0x20 (0x20 - 0x0)
	struct FAnimationEventBinding	
	{
	public:
		UWidgetAnimation Animation; // 0x0(0x8)
		FDelegateProperty Delegate; // 0x8(0xC)
		EWidgetAnimationEvent AnimationEvent; // 0x14(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FName UserTag; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct UMG.WidgetChild
	// Size: 0xC (0xC - 0x0)
	struct FWidgetChild	
	{
	public:
		FName WidgetName; // 0x0(0x4)
		TWeakObjectPtr WidgetPtr; // 0x4(0x8)
	};


	// Struct UMG.NamedSlotBinding
	// Size: 0x10 (0x10 - 0x0)
	struct FNamedSlotBinding	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UWidget Content; // 0x8(0x8)
	};


	// Struct UMG.QueuedWidgetAnimationTransition
	// Size: 0x38 (0x38 - 0x0)
	struct FQueuedWidgetAnimationTransition	
	{
	public:
		UWidgetAnimation WidgetAnimation; // 0x0(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x8(0x30) UNKNOWN PROPERTY
	};


	// Struct UMG.UserWidgetPool
	// Size: 0x88 (0x88 - 0x0)
	struct FUserWidgetPool	
	{
	public:
		TArray ActiveWidgets; // 0x0(0x10)
		TArray InactiveWidgets; // 0x10(0x10)
		unsigned char UnknownData01_7[0x68]; // 0x20(0x68) UNKNOWN PROPERTY
	};


	// Struct UMG.AnchorData
	// Size: 0x40 (0x40 - 0x0)
	struct FAnchorData	
	{
	public:
		FMargin Offsets; // 0x0(0x10)
		FAnchors Anchors; // 0x10(0x20)
		FVector2D Alignment; // 0x30(0x10)
	};


	// Struct UMG.WidgetEventField
	// Size: 0x1 (0x1 - 0x0)
	struct FWidgetEventField	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct UMG.RadialBoxSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FRadialBoxSettings	
	{
	public:
		float StartingAngle; // 0x0(0x4)
		bool bDistributeItemsEvenly; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float AngleBetweenItems; // 0x8(0x4)
		float SectorCentralAngle; // 0xC(0x4)
	};


	// Struct UMG.SlateChildSize
	// Size: 0x8 (0x8 - 0x0)
	struct FSlateChildSize	
	{
	public:
		float Value; // 0x0(0x4)
		TEnumAsByte SizeRule; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct UMG.WidgetNavigationData
	// Size: 0x1C (0x1C - 0x0)
	struct FWidgetNavigationData	
	{
	public:
		EUINavigationRule Rule; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName WidgetToFocus; // 0x4(0x4)
		TWeakObjectPtr Widget; // 0x8(0x8)
		FDelegateProperty CustomDelegate; // 0x10(0xC)
	};


	// Struct UMG.MovieScene2DTransformMask
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieScene2DTransformMask	
	{
	public:
		uint32_t Mask; // 0x0(0x4)
	};


	// Struct UMG.SequenceTickManagerWidgetData
	// Size: 0x2 (0x2 - 0x0)
	struct FSequenceTickManagerWidgetData	
	{
	public:
		unsigned char UnknownData01_2[0x2]; // 0x0(0x2) UNKNOWN PROPERTY
	};


	// Struct UMG.WidgetAnimationBinding
	// Size: 0x48 (0x48 - 0x0)
	struct FWidgetAnimationBinding	
	{
	public:
		FName WidgetName; // 0x0(0x4)
		FName SlotWidgetName; // 0x4(0x4)
		FGuid AnimationGuid; // 0x8(0x10)
		bool bIsRootWidget; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FMovieSceneDynamicBinding DynamicBinding; // 0x20(0x28)
	};


	// Struct UMG.BlueprintWidgetAnimationDelegateBinding
	// Size: 0x10 (0x10 - 0x0)
	struct FBlueprintWidgetAnimationDelegateBinding	
	{
	public:
		EWidgetAnimationEvent Action; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName AnimationToBind; // 0x4(0x4)
		FName FunctionNameToBind; // 0x8(0x4)
		FName UserTag; // 0xC(0x4)
	};


	// Struct UMG.DynamicPropertyPath
	// Inherited from FCachedPropertyPath
	// Size: 0x0 (0x38 - 0x38)
	struct FDynamicPropertyPath : public FCachedPropertyPath	
	{
	public:
	};


	// Struct UMG.WidgetStateBitfield
	// Size: 0x8 (0x8 - 0x0)
	struct FWidgetStateBitfield	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct UMG.GameViewportWidgetSlot
	// Size: 0x48 (0x48 - 0x0)
	struct FGameViewportWidgetSlot	
	{
	public:
		FAnchors Anchors; // 0x0(0x20)
		FMargin Offsets; // 0x20(0x10)
		FVector2D Alignment; // 0x30(0x10)
		int32_t ZOrder; // 0x40(0x4)
		bool bAutoRemoveOnWorldRemoved; // 0x44(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
	};


	// Struct UMG.SlatePostBufferUpdateInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FSlatePostBufferUpdateInfo	
	{
	public:
		ESlatePostRT BufferToUpdate; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		USlatePostBufferProcessorUpdater PostParamUpdater; // 0x8(0x8)
	};


	// Struct UMG.RichTextStyleRow
	// Inherited from FTableRowBase
	// Size: 0x2E8 (0x2F0 - 0x8)
	struct FRichTextStyleRow : public FTableRowBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTextBlockStyle TextStyle; // 0x10(0x2E0)
	};


	// Struct UMG.RichImageRow
	// Inherited from FTableRowBase
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRichImageRow : public FTableRowBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush Brush; // 0x10(0xB0)
	};


	// Struct UMG.WidgetComponentInstanceData
	// Inherited from FSceneComponentInstanceData -> FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x10 (0xC8 - 0xB8)
	struct FWidgetComponentInstanceData : public FSceneComponentInstanceData	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
	};


	// Struct UMG.SlateMeshVertex
	// Size: 0x3C (0x3C - 0x0)
	struct FSlateMeshVertex	
	{
	public:
		FVector2f Position; // 0x0(0x8)
		FColor Color; // 0x8(0x4)
		FVector2f UV0; // 0xC(0x8)
		FVector2f UV1; // 0x14(0x8)
		FVector2f UV2; // 0x1C(0x8)
		FVector2f UV3; // 0x24(0x8)
		FVector2f UV4; // 0x2C(0x8)
		FVector2f UV5; // 0x34(0x8)
	};


	// Struct UMG.DelegateRuntimeBinding
	// Size: 0x58 (0x58 - 0x0)
	struct FDelegateRuntimeBinding	
	{
	public:
		FString ObjectName; // 0x0(0x10)
		FName PropertyName; // 0x10(0x4)
		FName FunctionName; // 0x14(0x4)
		FDynamicPropertyPath SourcePath; // 0x18(0x38)
		EBindingKind Kind; // 0x50(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};

}
