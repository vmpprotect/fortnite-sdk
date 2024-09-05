#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TypedElementFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct TypedElementFramework.ScriptTypedElementHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FScriptTypedElementHandle	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FTypedElementDataStorageColumn	
	{
	public:
	};


	// Struct TypedElementFramework.TypedElementAlertColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x20 (0x20 - 0x0)
	struct FTypedElementAlertColumn : public FTypedElementDataStorageColumn	
	{
	public:
		FText Message; // 0x0(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
		FTypedElementAlertColumnType AlertType; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementChildAlertColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x10 (0x10 - 0x0)
	struct FTypedElementChildAlertColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementAlertActionColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x40 (0x40 - 0x0)
	struct FTypedElementAlertActionColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementDataStorageTag
	// Size: 0x1 (0x1 - 0x0)
	struct FTypedElementDataStorageTag	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementUObjectColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementUObjectColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementUObjectIdColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementUObjectIdColumn : public FTypedElementDataStorageColumn	
	{
	public:
		uint32_t ID; // 0x0(0x4)
		int32_t SerialNumber; // 0x4(0x4)
	};


	// Struct TypedElementFramework.TypedElementExternalObjectColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementExternalObjectColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementClassDefaultObjectTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTypedElementClassDefaultObjectTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TypedElementActorTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTypedElementActorTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TypedElementWorldColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementWorldColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementPropertyBagPlaceholderTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTypedElementPropertyBagPlaceholderTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TypedElementLoosePropertyTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTypedElementLoosePropertyTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TypedElementPropertyBagPlaceholderTypeInfoColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementPropertyBagPlaceholderTypeInfoColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementWidgetConstructor
	// Size: 0x28 (0x28 - 0x0)
	struct FTypedElementWidgetConstructor	
	{
	public:
		unsigned char UnknownData00_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementParentColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementParentColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementUnresolvedParentColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementUnresolvedParentColumn : public FTypedElementDataStorageColumn	
	{
	public:
		uint64_t ParentIdHash; // 0x0(0x8)
	};


	// Struct TypedElementFramework.TypedElementLabelColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x10 (0x10 - 0x0)
	struct FTypedElementLabelColumn : public FTypedElementDataStorageColumn	
	{
	public:
		FString Label; // 0x0(0x10)
	};


	// Struct TypedElementFramework.TypedElementLabelHashColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementLabelHashColumn : public FTypedElementDataStorageColumn	
	{
	public:
		uint64_t LabelHash; // 0x0(0x8)
	};


	// Struct TypedElementFramework.ScriptTypedElementListProxy
	// Size: 0x10 (0x10 - 0x0)
	struct FScriptTypedElementListProxy	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementSyncBackToWorldTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTypedElementSyncBackToWorldTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TypedElementSyncFromWorldTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTypedElementSyncFromWorldTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TypedElementSyncFromWorldInteractiveTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTypedElementSyncFromWorldInteractiveTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TypedElementRowReferenceColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementRowReferenceColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.ObjectOverrideColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FObjectOverrideColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementPackageUnresolvedReference
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x18 (0x18 - 0x0)
	struct FTypedElementPackageUnresolvedReference : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementPackageReference
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementPackageReference : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementPackagePathColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x10 (0x10 - 0x0)
	struct FTypedElementPackagePathColumn : public FTypedElementDataStorageColumn	
	{
	public:
		FString Path; // 0x0(0x10)
	};


	// Struct TypedElementFramework.TypedElementPackageLoadedPathColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementPackageLoadedPathColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementPivotOffset
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x18 (0x18 - 0x0)
	struct FTypedElementPivotOffset : public FTypedElementDataStorageColumn	
	{
	public:
		FVector Offset; // 0x0(0x18)
	};


	// Struct TypedElementFramework.SCCInChangelistTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FSCCInChangelistTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.SCCStagedTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FSCCStagedTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.SCCLockedTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FSCCLockedTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.SCCExternallyEditedTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FSCCExternallyEditedTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.SCCNotCurrentTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FSCCNotCurrentTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.SCCStatusColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x4 (0x4 - 0x0)
	struct FSCCStatusColumn : public FTypedElementDataStorageColumn	
	{
	public:
		ESCCModification Modification; // 0x0(0x4)
	};


	// Struct TypedElementFramework.SCCRevisionId
	// Size: 0x14 (0x14 - 0x0)
	struct FSCCRevisionId	
	{
	public:
		uint32_t ID; // 0x0(0x14)
	};


	// Struct TypedElementFramework.SCCRevisionIdColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x14 (0x14 - 0x0)
	struct FSCCRevisionIdColumn : public FTypedElementDataStorageColumn	
	{
	public:
		FSCCRevisionId RevisionId; // 0x0(0x14)
	};


	// Struct TypedElementFramework.SCCExternalRevisionIdColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x14 (0x14 - 0x0)
	struct FSCCExternalRevisionIdColumn : public FTypedElementDataStorageColumn	
	{
	public:
		FSCCRevisionId RevisionId; // 0x0(0x14)
	};


	// Struct TypedElementFramework.SCCUserInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FSCCUserInfo	
	{
	public:
		FString Name; // 0x0(0x10)
	};


	// Struct TypedElementFramework.SCCExternallyLockedColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x10 (0x10 - 0x0)
	struct FSCCExternallyLockedColumn : public FTypedElementDataStorageColumn	
	{
	public:
		FSCCUserInfo LockedBy; // 0x0(0x10)
	};


	// Struct TypedElementFramework.TypedElementSelectionColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x4 (0x4 - 0x0)
	struct FTypedElementSelectionColumn : public FTypedElementDataStorageColumn	
	{
	public:
		FName SelectionSet; // 0x0(0x4)
	};


	// Struct TypedElementFramework.TypedElementSlateWidgetReferenceColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x30 (0x30 - 0x0)
	struct FTypedElementSlateWidgetReferenceColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTypedElementSlateWidgetReferenceDeletesRowTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TestColumnA
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FTestColumnA : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TestColumnB
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FTestColumnB : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TestColumnC
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FTestColumnC : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TestColumnD
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FTestColumnD : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TestColumnE
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FTestColumnE : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TestColumnF
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FTestColumnF : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TestColumnG
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FTestColumnG : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TestColumnInt
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x4 (0x4 - 0x0)
	struct FTestColumnInt : public FTypedElementDataStorageColumn	
	{
	public:
		int32_t TestInt; // 0x0(0x4)
	};


	// Struct TypedElementFramework.TestColumnString
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x10 (0x10 - 0x0)
	struct FTestColumnString : public FTypedElementDataStorageColumn	
	{
	public:
		FString TestString; // 0x0(0x10)
	};


	// Struct TypedElementFramework.TestTagColumnA
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTestTagColumnA : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TestTagColumnB
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTestTagColumnB : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TestTagColumnC
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTestTagColumnC : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TestTagColumnD
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTestTagColumnD : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TEDSProcessorTestsReferenceColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x10 (0x10 - 0x0)
	struct FTEDSProcessorTestsReferenceColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TEDSProcessorTests_PrimaryTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTEDSProcessorTests_PrimaryTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TEDSProcessorTests_SecondaryTag
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTEDSProcessorTests_SecondaryTag : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TEDSProcessorTests_Linked
	// Inherited from FTypedElementDataStorageTag
	// Size: 0x0 (0x1 - 0x1)
	struct FTEDSProcessorTests_Linked : public FTypedElementDataStorageTag	
	{
	public:
	};


	// Struct TypedElementFramework.TypedElementLocalTransformColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x60 (0x60 - 0x0)
	struct FTypedElementLocalTransformColumn : public FTypedElementDataStorageColumn	
	{
	public:
		FTransform Transform; // 0x0(0x60)
	};


	// Struct TypedElementFramework.TypedElementClassTypeInfoColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementClassTypeInfoColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementScriptStructTypeInfoColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementScriptStructTypeInfoColumn : public FTypedElementDataStorageColumn	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TypedElementFramework.TypedElementU32IntValueCacheColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x4 (0x4 - 0x0)
	struct FTypedElementU32IntValueCacheColumn : public FTypedElementDataStorageColumn	
	{
	public:
		uint32_t Value; // 0x0(0x4)
	};


	// Struct TypedElementFramework.TypedElementI32IntValueCacheColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x4 (0x4 - 0x0)
	struct FTypedElementI32IntValueCacheColumn : public FTypedElementDataStorageColumn	
	{
	public:
		int32_t Value; // 0x0(0x4)
	};


	// Struct TypedElementFramework.TypedElementU64IntValueCacheColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementU64IntValueCacheColumn : public FTypedElementDataStorageColumn	
	{
	public:
		uint64_t Value; // 0x0(0x8)
	};


	// Struct TypedElementFramework.TypedElementI64IntValueCacheColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementI64IntValueCacheColumn : public FTypedElementDataStorageColumn	
	{
	public:
		int64_t Value; // 0x0(0x8)
	};


	// Struct TypedElementFramework.TypedElementFloatValueCacheColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x4 (0x4 - 0x0)
	struct FTypedElementFloatValueCacheColumn : public FTypedElementDataStorageColumn	
	{
	public:
		float Value; // 0x0(0x4)
	};


	// Struct TypedElementFramework.TypedElementViewportOutlineColorColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x1 (0x1 - 0x0)
	struct FTypedElementViewportOutlineColorColumn : public FTypedElementDataStorageColumn	
	{
	public:
		char SelectionOutlineColorIndex; // 0x0(0x1)
	};


	// Struct TypedElementFramework.TypedElementViewportOverlayColorColumn
	// Inherited from FTypedElementDataStorageColumn
	// Size: 0x4 (0x4 - 0x0)
	struct FTypedElementViewportOverlayColorColumn : public FTypedElementDataStorageColumn	
	{
	public:
		FColor OverlayColor; // 0x0(0x4)
	};

}
