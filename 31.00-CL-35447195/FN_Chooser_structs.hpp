#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Chooser
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Chooser.ChooserParameterBase
	// Size: 0x8 (0x8 - 0x0)
	struct FChooserParameterBase	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Chooser.ChooserParameterBoolBase
	// Inherited from FChooserParameterBase
	// Size: 0x0 (0x8 - 0x8)
	struct FChooserParameterBoolBase : public FChooserParameterBase	
	{
	public:
	};


	// Struct Chooser.BoolContextProperty
	// Inherited from FChooserParameterBoolBase -> FChooserParameterBase
	// Size: 0x38 (0x40 - 0x8)
	struct FBoolContextProperty : public FChooserParameterBoolBase	
	{
	public:
		TArray PropertyBindingChain; // 0x8(0x10)
		FChooserPropertyBinding Binding; // 0x18(0x28)
	};


	// Struct Chooser.ChooserPropertyBinding
	// Size: 0x28 (0x28 - 0x0)
	struct FChooserPropertyBinding	
	{
	public:
		TArray PropertyBindingChain; // 0x0(0x10)
		int32_t ContextIndex; // 0x10(0x4)
		bool IsBoundToRoot; // 0x14(0x1)
		unsigned char UnknownData01_7[0x13]; // 0x15(0x13) UNKNOWN PROPERTY
	};


	// Struct Chooser.ChooserColumnBase
	// Size: 0x8 (0x8 - 0x0)
	struct FChooserColumnBase	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Chooser.BoolColumn
	// Inherited from FChooserColumnBase
	// Size: 0x20 (0x28 - 0x8)
	struct FBoolColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		TArray RowValuesWithAny; // 0x18(0x10)
	};


	// Struct Chooser.ChooserEnumPropertyBinding
	// Inherited from FChooserPropertyBinding
	// Size: 0x0 (0x28 - 0x28)
	struct FChooserEnumPropertyBinding : public FChooserPropertyBinding	
	{
	public:
	};


	// Struct Chooser.ChooserObjectPropertyBinding
	// Inherited from FChooserPropertyBinding
	// Size: 0x0 (0x28 - 0x28)
	struct FChooserObjectPropertyBinding : public FChooserPropertyBinding	
	{
	public:
	};


	// Struct Chooser.ChooserStructPropertyBinding
	// Inherited from FChooserPropertyBinding
	// Size: 0x0 (0x28 - 0x28)
	struct FChooserStructPropertyBinding : public FChooserPropertyBinding	
	{
	public:
	};


	// Struct Chooser.ContextObjectTypeBase
	// Size: 0x4 (0x4 - 0x0)
	struct FContextObjectTypeBase	
	{
	public:
		EContextObjectDirection Direction; // 0x0(0x4)
	};


	// Struct Chooser.ContextObjectTypeClass
	// Inherited from FContextObjectTypeBase
	// Size: 0xC (0x10 - 0x4)
	struct FContextObjectTypeClass : public FContextObjectTypeBase	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass Class; // 0x8(0x8)
	};


	// Struct Chooser.ContextObjectTypeStruct
	// Inherited from FContextObjectTypeBase
	// Size: 0xC (0x10 - 0x4)
	struct FContextObjectTypeStruct : public FContextObjectTypeBase	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UScriptStruct Struct; // 0x8(0x8)
	};


	// Struct Chooser.ChooserParameterEnumBase
	// Inherited from FChooserParameterBase
	// Size: 0x0 (0x8 - 0x8)
	struct FChooserParameterEnumBase : public FChooserParameterBase	
	{
	public:
	};


	// Struct Chooser.EnumContextProperty
	// Inherited from FChooserParameterEnumBase -> FChooserParameterBase
	// Size: 0x38 (0x40 - 0x8)
	struct FEnumContextProperty : public FChooserParameterEnumBase	
	{
	public:
		TArray PropertyBindingChain; // 0x8(0x10)
		FChooserEnumPropertyBinding Binding; // 0x18(0x28)
	};


	// Struct Chooser.ChooserEnumRowData
	// Size: 0x8 (0x8 - 0x0)
	struct FChooserEnumRowData	
	{
	public:
		EEnumColumnCellValueComparison Comparison; // 0x0(0x4)
		char Value; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Chooser.EnumColumn
	// Inherited from FChooserColumnBase
	// Size: 0x20 (0x28 - 0x8)
	struct FEnumColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		TArray RowValues; // 0x18(0x10)
	};


	// Struct Chooser.ChooserFloatDistanceRowData
	// Size: 0x4 (0x4 - 0x0)
	struct FChooserFloatDistanceRowData	
	{
	public:
		float Value; // 0x0(0x4)
	};


	// Struct Chooser.FloatDistanceColumn
	// Inherited from FChooserColumnBase
	// Size: 0x40 (0x48 - 0x8)
	struct FFloatDistanceColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		double MaxDistance; // 0x18(0x8)
		float CostMultiplier; // 0x20(0x4)
		bool bFilterOverMaxDistance; // 0x24(0x1)
		bool bWrapInput; // 0x25(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
		double MinValue; // 0x28(0x8)
		double MaxValue; // 0x30(0x8)
		TArray RowValues; // 0x38(0x10)
	};


	// Struct Chooser.ChooserParameterFloatBase
	// Inherited from FChooserParameterBase
	// Size: 0x0 (0x8 - 0x8)
	struct FChooserParameterFloatBase : public FChooserParameterBase	
	{
	public:
	};


	// Struct Chooser.FloatContextProperty
	// Inherited from FChooserParameterFloatBase -> FChooserParameterBase
	// Size: 0x38 (0x40 - 0x8)
	struct FFloatContextProperty : public FChooserParameterFloatBase	
	{
	public:
		TArray PropertyBindingChain; // 0x8(0x10)
		FChooserPropertyBinding Binding; // 0x18(0x28)
	};


	// Struct Chooser.ChooserFloatRangeRowData
	// Size: 0xC (0xC - 0x0)
	struct FChooserFloatRangeRowData	
	{
	public:
		float Min; // 0x0(0x4)
		float Max; // 0x4(0x4)
		bool bNoMin; // 0x8(0x1)
		bool bNoMax; // 0x9(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct Chooser.FloatRangeColumn
	// Inherited from FChooserColumnBase
	// Size: 0x38 (0x40 - 0x8)
	struct FFloatRangeColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		bool bWrapInput; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		double MinValue; // 0x20(0x8)
		double MaxValue; // 0x28(0x8)
		TArray RowValues; // 0x30(0x10)
	};


	// Struct Chooser.ChooserParameterGameplayTagBase
	// Inherited from FChooserParameterBase
	// Size: 0x0 (0x8 - 0x8)
	struct FChooserParameterGameplayTagBase : public FChooserParameterBase	
	{
	public:
	};


	// Struct Chooser.GameplayTagContextProperty
	// Inherited from FChooserParameterGameplayTagBase -> FChooserParameterBase
	// Size: 0x38 (0x40 - 0x8)
	struct FGameplayTagContextProperty : public FChooserParameterGameplayTagBase	
	{
	public:
		TArray PropertyBindingChain; // 0x8(0x10)
		FChooserPropertyBinding Binding; // 0x18(0x28)
	};


	// Struct Chooser.GameplayTagColumn
	// Inherited from FChooserColumnBase
	// Size: 0x28 (0x30 - 0x8)
	struct FGameplayTagColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		EGameplayContainerMatchType TagMatchType; // 0x18(0x1)
		bool bMatchExact; // 0x19(0x1)
		bool bInvertMatchingLogic; // 0x1A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
		TArray RowValues; // 0x20(0x10)
	};


	// Struct Chooser.ChooserParameterObjectBase
	// Inherited from FChooserParameterBase
	// Size: 0x0 (0x8 - 0x8)
	struct FChooserParameterObjectBase : public FChooserParameterBase	
	{
	public:
	};


	// Struct Chooser.ChooserRandomizationContext
	// Size: 0x50 (0x50 - 0x0)
	struct FChooserRandomizationContext	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct Chooser.ChooserParameterRandomizeBase
	// Inherited from FChooserParameterBase
	// Size: 0x0 (0x8 - 0x8)
	struct FChooserParameterRandomizeBase : public FChooserParameterBase	
	{
	public:
	};


	// Struct Chooser.ChooserParameterStructBase
	// Inherited from FChooserParameterBase
	// Size: 0x0 (0x8 - 0x8)
	struct FChooserParameterStructBase : public FChooserParameterBase	
	{
	public:
	};


	// Struct Chooser.ChooserEvaluationInputObject
	// Size: 0x8 (0x8 - 0x0)
	struct FChooserEvaluationInputObject	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Chooser.ChooserEvaluationContext
	// Size: 0x78 (0x78 - 0x0)
	struct FChooserEvaluationContext	
	{
	public:
		unsigned char UnknownData01_2[0x78]; // 0x0(0x78) UNKNOWN PROPERTY
	};


	// Struct Chooser.ObjectChooserBase
	// Size: 0x8 (0x8 - 0x0)
	struct FObjectChooserBase	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Chooser.ChooserMultiEnumRowData
	// Size: 0x4 (0x4 - 0x0)
	struct FChooserMultiEnumRowData	
	{
	public:
		uint32_t Value; // 0x0(0x4)
	};


	// Struct Chooser.MultiEnumColumn
	// Inherited from FChooserColumnBase
	// Size: 0x20 (0x28 - 0x8)
	struct FMultiEnumColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		TArray RowValues; // 0x18(0x10)
	};


	// Struct Chooser.AssetChooser
	// Inherited from FObjectChooserBase
	// Size: 0x8 (0x10 - 0x8)
	struct FAssetChooser : public FObjectChooserBase	
	{
	public:
		UObject Asset; // 0x8(0x8)
	};


	// Struct Chooser.SoftAssetChooser
	// Inherited from FObjectChooserBase
	// Size: 0x20 (0x28 - 0x8)
	struct FSoftAssetChooser : public FObjectChooserBase	
	{
	public:
		TWeakObjectPtr Asset; // 0x8(0x20)
	};


	// Struct Chooser.ClassChooser
	// Inherited from FObjectChooserBase
	// Size: 0x8 (0x10 - 0x8)
	struct FClassChooser : public FObjectChooserBase	
	{
	public:
		UClass Class; // 0x8(0x8)
	};


	// Struct Chooser.ChooserObjectClassRowData
	// Size: 0x10 (0x10 - 0x0)
	struct FChooserObjectClassRowData	
	{
	public:
		EObjectClassColumnCellValueComparison Comparison; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass Value; // 0x8(0x8)
	};


	// Struct Chooser.ObjectClassColumn
	// Inherited from FChooserColumnBase
	// Size: 0x20 (0x28 - 0x8)
	struct FObjectClassColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		TArray RowValues; // 0x18(0x10)
	};


	// Struct Chooser.ObjectContextProperty
	// Inherited from FChooserParameterObjectBase -> FChooserParameterBase
	// Size: 0x28 (0x30 - 0x8)
	struct FObjectContextProperty : public FChooserParameterObjectBase	
	{
	public:
		FChooserObjectPropertyBinding Binding; // 0x8(0x28)
	};


	// Struct Chooser.ChooserObjectRowData
	// Size: 0x28 (0x28 - 0x0)
	struct FChooserObjectRowData	
	{
	public:
		EObjectColumnCellValueComparison Comparison; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Value; // 0x8(0x20)
	};


	// Struct Chooser.ObjectColumn
	// Inherited from FChooserColumnBase
	// Size: 0x20 (0x28 - 0x8)
	struct FObjectColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		TArray RowValues; // 0x18(0x10)
	};


	// Struct Chooser.OutputBoolColumn
	// Inherited from FChooserColumnBase
	// Size: 0x28 (0x30 - 0x8)
	struct FOutputBoolColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		bool bFallbackValue; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		TArray RowValues; // 0x20(0x10)
	};


	// Struct Chooser.ChooserOutputEnumRowData
	// Size: 0x1 (0x1 - 0x0)
	struct FChooserOutputEnumRowData	
	{
	public:
		char Value; // 0x0(0x1)
	};


	// Struct Chooser.OutputEnumColumn
	// Inherited from FChooserColumnBase
	// Size: 0x28 (0x30 - 0x8)
	struct FOutputEnumColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		FChooserOutputEnumRowData FallbackValue; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		TArray RowValues; // 0x20(0x10)
	};


	// Struct Chooser.OutputFloatColumn
	// Inherited from FChooserColumnBase
	// Size: 0x28 (0x30 - 0x8)
	struct FOutputFloatColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		double FallbackValue; // 0x18(0x8)
		TArray RowValues; // 0x20(0x10)
	};


	// Struct Chooser.ChooserOutputObjectRowData
	// Size: 0x10 (0x10 - 0x0)
	struct FChooserOutputObjectRowData	
	{
	public:
		FInstancedStruct Value; // 0x0(0x10)
	};


	// Struct Chooser.OutputObjectColumn
	// Inherited from FChooserColumnBase
	// Size: 0x30 (0x38 - 0x8)
	struct FOutputObjectColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		TArray RowValues; // 0x18(0x10)
		FChooserOutputObjectRowData FallbackValue; // 0x28(0x10)
	};


	// Struct Chooser.StructContextProperty
	// Inherited from FChooserParameterStructBase -> FChooserParameterBase
	// Size: 0x28 (0x30 - 0x8)
	struct FStructContextProperty : public FChooserParameterStructBase	
	{
	public:
		FChooserStructPropertyBinding Binding; // 0x8(0x28)
	};


	// Struct Chooser.OutputStructColumn
	// Inherited from FChooserColumnBase
	// Size: 0x30 (0x38 - 0x8)
	struct FOutputStructColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		FInstancedStruct FallbackValue; // 0x18(0x10)
		TArray RowValues; // 0x28(0x10)
	};


	// Struct Chooser.RandomizeContextProperty
	// Inherited from FChooserParameterRandomizeBase -> FChooserParameterBase
	// Size: 0x28 (0x30 - 0x8)
	struct FRandomizeContextProperty : public FChooserParameterRandomizeBase	
	{
	public:
		FChooserPropertyBinding Binding; // 0x8(0x28)
	};


	// Struct Chooser.RandomizeColumn
	// Inherited from FChooserColumnBase
	// Size: 0x28 (0x30 - 0x8)
	struct FRandomizeColumn : public FChooserColumnBase	
	{
	public:
		FInstancedStruct InputValue; // 0x8(0x10)
		float RepeatProbabilityMultiplier; // 0x18(0x4)
		float EqualCostThreshold; // 0x1C(0x4)
		TArray RowValues; // 0x20(0x10)
	};


	// Struct Chooser.AnimCurveOverride
	// Size: 0x8 (0x8 - 0x0)
	struct FAnimCurveOverride	
	{
	public:
		FName CurveName; // 0x0(0x4)
		float CurveValue; // 0x4(0x4)
	};


	// Struct Chooser.AnimCurveOverrideList
	// Size: 0x18 (0x18 - 0x0)
	struct FAnimCurveOverrideList	
	{
	public:
		TArray Values; // 0x0(0x10)
		uint32_t Hash; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Chooser.ChooserPlayerSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FChooserPlayerSettings	
	{
	public:
		bool bMirror; // 0x0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float StartTime; // 0x4(0x4)
		bool bForceLooping; // 0x8(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float PlaybackRate; // 0xC(0x4)
		FAnimCurveOverrideList CurveOverrides; // 0x10(0x18)
		float BlendTime; // 0x28(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UBlendProfile BlendProfile; // 0x30(0x8)
		EAlphaBlendOption BlendOption; // 0x38(0x1)
		bool bUseInertialBlend; // 0x39(0x1)
		unsigned char UnknownData07_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct Chooser.AnimNode_ChooserPlayer
	// Inherited from FAnimNode_BlendStack_Standalone -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x188 (0x248 - 0xC0)
	struct FAnimNode_ChooserPlayer : public FAnimNode_BlendStack_Standalone	
	{
	public:
		unsigned char UnknownData04_3[0x20]; // 0xC0(0x20) UNKNOWN PROPERTY
		EChooserEvaluationFrequency EvaluationFrequency; // 0xE0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		FInstancedStruct Chooser; // 0xE8(0x10)
		UMirrorDataTable MirrorDataTable; // 0xF8(0x8)
		float BlendSpaceX; // 0x100(0x4)
		float BlendSpaceY; // 0x104(0x4)
		unsigned char UnknownData06_6[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
		FChooserPlayerSettings DefaultSettings; // 0x110(0x40)
		TArray ChooserContextDefinition; // 0x150(0x10)
		bool bStartFromMatchingPose; // 0x160(0x1)
		unsigned char UnknownData07_7[0xE7]; // 0x161(0xE7) UNKNOWN PROPERTY
	};


	// Struct Chooser.NestedChooser
	// Inherited from FObjectChooserBase
	// Size: 0x8 (0x10 - 0x8)
	struct FNestedChooser : public FObjectChooserBase	
	{
	public:
		UChooserTable Chooser; // 0x8(0x8)
	};


	// Struct Chooser.EvaluateChooser
	// Inherited from FObjectChooserBase
	// Size: 0x8 (0x10 - 0x8)
	struct FEvaluateChooser : public FObjectChooserBase	
	{
	public:
		UChooserTable Chooser; // 0x8(0x8)
	};

}
