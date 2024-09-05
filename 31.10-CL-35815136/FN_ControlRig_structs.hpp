#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ControlRig
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ControlRig.RigElementKey
	// Size: 0x8 (0x8 - 0x0)
	struct FRigElementKey	
	{
	public:
		ERigElementType Type; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName Name; // 0x4(0x4)
	};


	// Struct ControlRig.RigBaseElement
	// Size: 0x48 (0x48 - 0x0)
	struct FRigBaseElement	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		FRigElementKey Key; // 0x10(0x8)
		int32_t Index; // 0x18(0x4)
		int32_t SubIndex; // 0x1C(0x4)
		int32_t CreatedAtInstructionIndex; // 0x20(0x4)
		bool bSelected; // 0x24(0x1)
		unsigned char UnknownData01_7[0x23]; // 0x25(0x23) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigTransformElement
	// Inherited from FRigBaseElement
	// Size: 0x1E8 (0x230 - 0x48)
	struct FRigTransformElement : public FRigBaseElement	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		FRigCurrentAndInitialTransform Pose; // 0x50(0x1A0)
		unsigned char UnknownData01_7[0x40]; // 0x1F0(0x40) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigCurrentAndInitialTransform
	// Size: 0x1A0 (0x1A0 - 0x0)
	struct FRigCurrentAndInitialTransform	
	{
	public:
		FRigLocalAndGlobalTransform Current; // 0x0(0xD0)
		FRigLocalAndGlobalTransform Initial; // 0xD0(0xD0)
	};


	// Struct ControlRig.RigLocalAndGlobalTransform
	// Size: 0xD0 (0xD0 - 0x0)
	struct FRigLocalAndGlobalTransform	
	{
	public:
		FRigComputedTransform Local; // 0x0(0x60)
		FRigComputedTransform Global; // 0x60(0x60)
		unsigned char UnknownData00_7[0x10]; // 0xC0(0x10) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigComputedTransform
	// Size: 0x60 (0x60 - 0x0)
	struct FRigComputedTransform	
	{
	public:
		FTransform Transform; // 0x0(0x60)
	};


	// Struct ControlRig.RigMultiParentElement
	// Inherited from FRigTransformElement -> FRigBaseElement
	// Size: 0x100 (0x330 - 0x230)
	struct FRigMultiParentElement : public FRigTransformElement	
	{
	public:
		unsigned char UnknownData00_1[0x100]; // 0x230(0x100) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigControlElement
	// Inherited from FRigMultiParentElement -> FRigTransformElement -> FRigBaseElement
	// Size: 0x530 (0x860 - 0x330)
	struct FRigControlElement : public FRigMultiParentElement	
	{
	public:
		FRigControlSettings Settings; // 0x330(0x1B0)
		FRigCurrentAndInitialTransform Offset; // 0x4E0(0x1A0)
		FRigCurrentAndInitialTransform Shape; // 0x680(0x1A0)
		FRigPreferredEulerAngles PreferredEulerAngles; // 0x820(0x38)
		unsigned char UnknownData00_7[0x8]; // 0x858(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigPreferredEulerAngles
	// Size: 0x38 (0x38 - 0x0)
	struct FRigPreferredEulerAngles	
	{
	public:
		EEulerRotationOrder RotationOrder; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector Current; // 0x8(0x18)
		FVector Initial; // 0x20(0x18)
	};


	// Struct ControlRig.RigControlSettings
	// Size: 0x1B0 (0x1B0 - 0x0)
	struct FRigControlSettings	
	{
	public:
		ERigControlAnimationType AnimationType; // 0x0(0x1)
		ERigControlType ControlType; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FName DisplayName; // 0x4(0x4)
		ERigControlAxis PrimaryAxis; // 0x8(0x1)
		bool bIsCurve; // 0x9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		TArray<FRigControlLimitEnabled> LimitEnabled; // 0x10(0x10)
		bool bDrawLimits; // 0x20(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FRigControlValue MinimumValue; // 0x24(0x84)
		FRigControlValue MaximumValue; // 0xA8(0x84)
		bool bShapeVisible; // 0x12C(0x1)
		ERigControlVisibility ShapeVisibility; // 0x12D(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x12E(0x2) UNKNOWN PROPERTY
		FName ShapeName; // 0x130(0x4)
		FLinearColor ShapeColor; // 0x134(0x10)
		bool bIsTransientControl; // 0x144(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x145(0x3) UNKNOWN PROPERTY
		UEnum* ControlEnum; // 0x148(0x8)
		FRigControlElementCustomization Customization; // 0x150(0x20)
		TArray<FRigElementKey> DrivenControls; // 0x170(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x180(0x10) UNKNOWN PROPERTY
		bool bGroupWithParentControl; // 0x190(0x1)
		bool bRestrictSpaceSwitching; // 0x191(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x192(0x6) UNKNOWN PROPERTY
		TArray<ERigControlTransformChannel> FilteredChannels; // 0x198(0x10)
		EEulerRotationOrder PreferredRotationOrder; // 0x1A8(0x1)
		bool bUsePreferredRotationOrder; // 0x1A9(0x1)
		unsigned char UnknownData07_7[0x6]; // 0x1AA(0x6) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigControlElementCustomization
	// Size: 0x20 (0x20 - 0x0)
	struct FRigControlElementCustomization	
	{
	public:
		TArray<FRigElementKey> AvailableSpaces; // 0x0(0x10)
		TArray<FRigElementKey> RemovedSpaces; // 0x10(0x10)
	};


	// Struct ControlRig.RigControlValue
	// Size: 0x84 (0x84 - 0x0)
	struct FRigControlValue	
	{
	public:
		FRigControlValueStorage FloatStorage; // 0x0(0x84)
	};


	// Struct ControlRig.RigControlValueStorage
	// Size: 0x84 (0x84 - 0x0)
	struct FRigControlValueStorage	
	{
	public:
		float Float00; // 0x0(0x4)
		float Float01; // 0x4(0x4)
		float Float02; // 0x8(0x4)
		float Float03; // 0xC(0x4)
		float Float10; // 0x10(0x4)
		float Float11; // 0x14(0x4)
		float Float12; // 0x18(0x4)
		float Float13; // 0x1C(0x4)
		float Float20; // 0x20(0x4)
		float Float21; // 0x24(0x4)
		float Float22; // 0x28(0x4)
		float Float23; // 0x2C(0x4)
		float Float30; // 0x30(0x4)
		float Float31; // 0x34(0x4)
		float Float32; // 0x38(0x4)
		float Float33; // 0x3C(0x4)
		float Float00; // 0x40(0x4)
		float Float01; // 0x44(0x4)
		float Float02; // 0x48(0x4)
		float Float03; // 0x4C(0x4)
		float Float10; // 0x50(0x4)
		float Float11; // 0x54(0x4)
		float Float12; // 0x58(0x4)
		float Float13; // 0x5C(0x4)
		float Float20; // 0x60(0x4)
		float Float21; // 0x64(0x4)
		float Float22; // 0x68(0x4)
		float Float23; // 0x6C(0x4)
		float Float30; // 0x70(0x4)
		float Float31; // 0x74(0x4)
		float Float32; // 0x78(0x4)
		float Float33; // 0x7C(0x4)
		bool bValid; // 0x80(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigControlLimitEnabled
	// Size: 0x2 (0x2 - 0x0)
	struct FRigControlLimitEnabled	
	{
	public:
		bool bMinimum; // 0x0(0x1)
		bool bMaximum; // 0x1(0x1)
	};


	// Struct ControlRig.RigModuleSettings
	// Size: 0x78 (0x78 - 0x0)
	struct FRigModuleSettings	
	{
	public:
		FRigModuleIdentifier Identifier; // 0x0(0x20)
		FSoftObjectPath Icon; // 0x20(0x18)
		FString category; // 0x38(0x10)
		FString Keywords; // 0x48(0x10)
		FString Description; // 0x58(0x10)
		TArray<FRigModuleConnector> ExposedConnectors; // 0x68(0x10)
	};


	// Struct ControlRig.RigModuleConnector
	// Size: 0x38 (0x38 - 0x0)
	struct FRigModuleConnector	
	{
	public:
		FString Name; // 0x0(0x10)
		FRigConnectorSettings Settings; // 0x10(0x28)
	};


	// Struct ControlRig.RigConnectorSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FRigConnectorSettings	
	{
	public:
		FString Description; // 0x0(0x10)
		EConnectorType Type; // 0x10(0x1)
		bool bOptional; // 0x11(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		TArray<FRigConnectionRuleStash> Rules; // 0x18(0x10)
	};


	// Struct ControlRig.RigConnectionRuleStash
	// Size: 0x20 (0x20 - 0x0)
	struct FRigConnectionRuleStash	
	{
	public:
		FString ScriptStructPath; // 0x0(0x10)
		FString ExportedText; // 0x10(0x10)
	};


	// Struct ControlRig.RigModuleIdentifier
	// Size: 0x20 (0x20 - 0x0)
	struct FRigModuleIdentifier	
	{
	public:
		FString Name; // 0x0(0x10)
		FString Type; // 0x10(0x10)
	};


	// Struct ControlRig.RigInfluenceMapPerEvent
	// Size: 0x60 (0x60 - 0x0)
	struct FRigInfluenceMapPerEvent	
	{
	public:
		TArray<FRigInfluenceMap> Maps; // 0x0(0x10)
		TMap<FName, int32_t> EventToIndex; // 0x10(0x50)
	};


	// Struct ControlRig.RigInfluenceMap
	// Size: 0x68 (0x68 - 0x0)
	struct FRigInfluenceMap	
	{
	public:
		FName EventName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FRigInfluenceEntry> Entries; // 0x8(0x10)
		TMap<FRigElementKey, int32_t> KeyToIndex; // 0x18(0x50)
	};


	// Struct ControlRig.RigInfluenceEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FRigInfluenceEntry	
	{
	public:
		FRigElementKey Source; // 0x0(0x8)
		TArray<FRigElementKey> AffectedList; // 0x8(0x10)
	};


	// Struct ControlRig.RigHierarchySettings
	// Size: 0x4 (0x4 - 0x0)
	struct FRigHierarchySettings	
	{
	public:
		int32_t ProceduralElementLimit; // 0x0(0x4)
	};


	// Struct ControlRig.RigModuleInstance
	// Size: 0x88 (0x88 - 0x0)
	struct FRigModuleInstance	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UControlRig* RigPtr; // 0x8(0x8)
		FString ParentPath; // 0x10(0x10)
		TMap<FName, FRigVMExternalVariable> VariableBindings; // 0x20(0x50)
		unsigned char UnknownData01_7[0x18]; // 0x70(0x18) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigModuleExecutionElement
	// Size: 0x20 (0x20 - 0x0)
	struct FRigModuleExecutionElement	
	{
	public:
		FString ModulePath; // 0x0(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
		FName EventName; // 0x18(0x4)
		bool bExecuted; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct ControlRig.MovieSceneControlRigInstanceData
	// Inherited from FMovieSceneSequenceInstanceData
	// Size: 0x140 (0x148 - 0x8)
	struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData	
	{
	public:
		bool bAdditive; // 0x8(0x1)
		bool bApplyBoneFilter; // 0x9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		FInputBlendPose BoneFilter; // 0x10(0x10)
		FMovieSceneFloatChannel Weight; // 0x20(0x110)
		FMovieSceneEvaluationOperand Operand; // 0x130(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x144(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigTransformStackEntry
	// Size: 0xF0 (0xF0 - 0x0)
	struct FRigTransformStackEntry	
	{
	public:
		FRigElementKey Key; // 0x0(0x8)
		TEnumAsByte<ERigTransformStackEntryType> EntryType; // 0x8(0x1)
		TEnumAsByte<ERigTransformType> TransformType; // 0x9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		FTransform OldTransform; // 0x10(0x60)
		FTransform NewTransform; // 0x70(0x60)
		bool bAffectChildren; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		TArray<FString> Callstack; // 0xD8(0x10)
		unsigned char UnknownData02_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigSingleParentElement
	// Inherited from FRigTransformElement -> FRigBaseElement
	// Size: 0x10 (0x240 - 0x230)
	struct FRigSingleParentElement : public FRigTransformElement	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x230(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigElementWeight
	// Size: 0xC (0xC - 0x0)
	struct FRigElementWeight	
	{
	public:
		float Location; // 0x0(0x4)
		float Rotation; // 0x4(0x4)
		float Scale; // 0x8(0x4)
	};


	// Struct ControlRig.RigElementParentConstraint
	// Size: 0x90 (0x90 - 0x0)
	struct FRigElementParentConstraint	
	{
	public:
		unsigned char UnknownData00_2[0x90]; // 0x0(0x90) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigBoneElement
	// Inherited from FRigSingleParentElement -> FRigTransformElement -> FRigBaseElement
	// Size: 0x8 (0x240 - 0x238)
	struct FRigBoneElement : public FRigSingleParentElement	
	{
	public:
		ERigBoneType BoneType; // 0x238(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x239(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigNullElement
	// Inherited from FRigMultiParentElement -> FRigTransformElement -> FRigBaseElement
	// Size: 0x0 (0x330 - 0x330)
	struct FRigNullElement : public FRigMultiParentElement	
	{
	public:
	};


	// Struct ControlRig.RigCurveElement
	// Inherited from FRigBaseElement
	// Size: 0x8 (0x50 - 0x48)
	struct FRigCurveElement : public FRigBaseElement	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigRigidBodySettings
	// Size: 0x4 (0x4 - 0x0)
	struct FRigRigidBodySettings	
	{
	public:
		float Mass; // 0x0(0x4)
	};


	// Struct ControlRig.RigRigidBodyElement
	// Inherited from FRigSingleParentElement -> FRigTransformElement -> FRigBaseElement
	// Size: 0x8 (0x240 - 0x238)
	struct FRigRigidBodyElement : public FRigSingleParentElement	
	{
	public:
		FRigRigidBodySettings Settings; // 0x238(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x23C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigReferenceElement
	// Inherited from FRigSingleParentElement -> FRigTransformElement -> FRigBaseElement
	// Size: 0x18 (0x250 - 0x238)
	struct FRigReferenceElement : public FRigSingleParentElement	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x238(0x18) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigConnectorState
	// Size: 0x38 (0x38 - 0x0)
	struct FRigConnectorState	
	{
	public:
		FName Name; // 0x0(0x4)
		FRigElementKey ResolvedTarget; // 0x4(0x8)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FRigConnectorSettings Settings; // 0x10(0x28)
	};


	// Struct ControlRig.RigConnectorElement
	// Inherited from FRigBaseElement
	// Size: 0x28 (0x70 - 0x48)
	struct FRigConnectorElement : public FRigBaseElement	
	{
	public:
		FRigConnectorSettings Settings; // 0x48(0x28)
	};


	// Struct ControlRig.RigSocketState
	// Size: 0x90 (0x90 - 0x0)
	struct FRigSocketState	
	{
	public:
		FName Name; // 0x0(0x4)
		FRigElementKey Parent; // 0x4(0x8)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FTransform InitialLocalTransform; // 0x10(0x60)
		FLinearColor Color; // 0x70(0x10)
		FString Description; // 0x80(0x10)
	};


	// Struct ControlRig.RigSocketElement
	// Inherited from FRigSingleParentElement -> FRigTransformElement -> FRigBaseElement
	// Size: 0x8 (0x240 - 0x238)
	struct FRigSocketElement : public FRigSingleParentElement	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigHierarchyCopyPasteContentPerElement
	// Size: 0x1E0 (0x1E0 - 0x0)
	struct FRigHierarchyCopyPasteContentPerElement	
	{
	public:
		FRigElementKey Key; // 0x0(0x8)
		FString Content; // 0x8(0x10)
		TArray<FRigElementKey> Parents; // 0x18(0x10)
		TArray<FRigElementWeight> ParentWeights; // 0x28(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FRigCurrentAndInitialTransform Pose; // 0x40(0x1A0)
	};


	// Struct ControlRig.RigHierarchyCopyPasteContent
	// Size: 0x50 (0x50 - 0x0)
	struct FRigHierarchyCopyPasteContent	
	{
	public:
		TArray<FRigHierarchyCopyPasteContentPerElement> Elements; // 0x0(0x10)
		TArray<ERigElementType> Types; // 0x10(0x10)
		TArray<FString> Contents; // 0x20(0x10)
		TArray<FTransform> LocalTransforms; // 0x30(0x10)
		TArray<FTransform> GlobalTransforms; // 0x40(0x10)
	};


	// Struct ControlRig.RigUnit
	// Inherited from FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit : public FRigVMStruct	
	{
	public:
	};


	// Struct ControlRig.RigUnit_DebugBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit_DebugBase : public FRigUnit	
	{
	public:
	};


	// Struct ControlRig.RigUnitMutable
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x1B8 (0x1C0 - 0x8)
	struct FRigUnitMutable : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
	};


	// Struct ControlRig.ControlRigExecuteContext
	// Inherited from FRigVMExecuteContext
	// Size: 0xC0 (0x1B0 - 0xF0)
	struct FControlRigExecuteContext : public FRigVMExecuteContext	
	{
	public:
		unsigned char UnknownData00_1[0xC0]; // 0xF0(0xC0) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugBaseMutable
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FRigUnit_DebugBaseMutable : public FRigUnitMutable	
	{
	public:
	};


	// Struct ControlRig.RigUnit_HighlevelBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit_HighlevelBase : public FRigUnit	
	{
	public:
	};


	// Struct ControlRig.RigUnit_HighlevelBaseMutable
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable	
	{
	public:
	};


	// Struct ControlRig.StructReference
	// Size: 0x8 (0x8 - 0x0)
	struct FStructReference	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.AnimNode_ControlRigBase
	// Inherited from FAnimNode_CustomProperty -> FAnimNode_Base
	// Size: 0x1F0 (0x248 - 0x58)
	struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty	
	{
	public:
		FPoseLink Source; // 0x58(0x10)
		bool bResetInputPoseToInitial; // 0x68(0x1)
		bool bTransferInputPose; // 0x69(0x1)
		bool bTransferInputCurves; // 0x6A(0x1)
		bool bTransferPoseInGlobalSpace; // 0x6B(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		TArray<FBoneReference> InputBonesToTransfer; // 0x70(0x10)
		TArray<FBoneReference> OutputBonesToTransfer; // 0x80(0x10)
		TArray<UAssetUserData*> AssetUserData; // 0x90(0x10)
		unsigned char UnknownData01_6[0x170]; // 0xA0(0x170) UNKNOWN PROPERTY
		TWeakObjectPtr<UNodeMappingContainer*> NodeMappingContainer; // 0x210(0x8)
		FControlRigIOSettings InputSettings; // 0x218(0x2)
		FControlRigIOSettings OutputSettings; // 0x21A(0x2)
		bool bExecute; // 0x21C(0x1)
		unsigned char UnknownData02_6[0xB]; // 0x21D(0xB) UNKNOWN PROPERTY
		TArray<FControlRigAnimNodeEventName> EventQueue; // 0x228(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x238(0x10) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ControlRigAnimNodeEventName
	// Size: 0x4 (0x4 - 0x0)
	struct FControlRigAnimNodeEventName	
	{
	public:
		FName EventName; // 0x0(0x4)
	};


	// Struct ControlRig.ControlRigIOSettings
	// Size: 0x2 (0x2 - 0x0)
	struct FControlRigIOSettings	
	{
	public:
		bool bUpdatePose; // 0x0(0x1)
		bool bUpdateCurves; // 0x1(0x1)
	};


	// Struct ControlRig.AnimNode_ControlRig
	// Inherited from FAnimNode_ControlRigBase -> FAnimNode_CustomProperty -> FAnimNode_Base
	// Size: 0x288 (0x4D0 - 0x248)
	struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase	
	{
	public:
		UClass* ControlRigClass; // 0x248(0x8)
		UClass* DefaultControlRigClass; // 0x250(0x8)
		UControlRig* ControlRig; // 0x258(0x8)
		TMap<UClass*, UControlRig*> ControlRigPerClass; // 0x260(0x50)
		float Alpha; // 0x2B0(0x4)
		EAnimAlphaInputType AlphaInputType; // 0x2B4(0x1)
		bool bAlphaBoolEnabled : 1; // 0x2B5:0(0x1)
		bool bSetRefPoseFromSkeleton : 1; // 0x2B5:1(0x1)
		unsigned char UnknownData00_5[0x2]; // 0x2B6(0x2) UNKNOWN PROPERTY
		FInputScaleBias AlphaScaleBias; // 0x2B8(0x8)
		FInputAlphaBoolBlend AlphaBoolBlend; // 0x2C0(0x48)
		FName AlphaCurveName; // 0x308(0x4)
		FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x30C(0x30)
		unsigned char UnknownData01_6[0x4]; // 0x33C(0x4) UNKNOWN PROPERTY
		TMap<FName, FName> InputMapping; // 0x340(0x50)
		TMap<FName, FName> OutputMapping; // 0x390(0x50)
		unsigned char UnknownData02_6[0xB0]; // 0x3E0(0xB0) UNKNOWN PROPERTY
		int32_t LODThreshold; // 0x490(0x4)
		unsigned char UnknownData03_7[0x3C]; // 0x494(0x3C) UNKNOWN PROPERTY
	};


	// Struct ControlRig.AnimNode_ControlRig_ExternalSource
	// Inherited from FAnimNode_ControlRigBase -> FAnimNode_CustomProperty -> FAnimNode_Base
	// Size: 0x8 (0x250 - 0x248)
	struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase	
	{
	public:
		TWeakObjectPtr<UControlRig*> ControlRig; // 0x248(0x8)
	};


	// Struct ControlRig.ControlRigReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FControlRigReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct ControlRig.ControlRigAnimInstanceProxy
	// Inherited from FAnimInstanceProxy
	// Size: 0xE8 (0x880 - 0x798)
	struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy	
	{
	public:
		unsigned char UnknownData00_1[0xE8]; // 0x798(0xE8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ControlRigComponentMappedElement
	// Size: 0xE0 (0xE0 - 0x0)
	struct FControlRigComponentMappedElement	
	{
	public:
		FSoftComponentReference ComponentReference; // 0x0(0x40)
		int32_t TransformIndex; // 0x40(0x4)
		FName TransformName; // 0x44(0x4)
		ERigElementType ElementType; // 0x48(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		FName ElementName; // 0x4C(0x4)
		EControlRigComponentMapDirection Direction; // 0x50(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x51(0xF) UNKNOWN PROPERTY
		FTransform Offset; // 0x60(0x60)
		float Weight; // 0xC0(0x4)
		EControlRigComponentSpace Space; // 0xC4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xC5(0x3) UNKNOWN PROPERTY
		USceneComponent* SceneComponent; // 0xC8(0x8)
		int32_t ElementIndex; // 0xD0(0x4)
		int32_t SubIndex; // 0xD4(0x4)
		unsigned char UnknownData03_7[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ControlRigComponentMappedComponent
	// Size: 0x10 (0x10 - 0x0)
	struct FControlRigComponentMappedComponent	
	{
	public:
		USceneComponent* Component; // 0x0(0x8)
		FName ElementName; // 0x8(0x4)
		ERigElementType ElementType; // 0xC(0x1)
		EControlRigComponentMapDirection Direction; // 0xD(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ControlRigComponentMappedBone
	// Size: 0x8 (0x8 - 0x0)
	struct FControlRigComponentMappedBone	
	{
	public:
		FName Source; // 0x0(0x4)
		FName Target; // 0x4(0x4)
	};


	// Struct ControlRig.ControlRigComponentMappedCurve
	// Size: 0x8 (0x8 - 0x0)
	struct FControlRigComponentMappedCurve	
	{
	public:
		FName Source; // 0x0(0x4)
		FName Target; // 0x4(0x4)
	};


	// Struct ControlRig.ControlShapeActorCreationParam
	// Size: 0x1A0 (0x1A0 - 0x0)
	struct FControlShapeActorCreationParam	
	{
	public:
		unsigned char UnknownData00_2[0x1A0]; // 0x0(0x1A0) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ControlRigShapeDefinition
	// Size: 0xA0 (0xA0 - 0x0)
	struct FControlRigShapeDefinition	
	{
	public:
		FName ShapeName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UStaticMesh*> StaticMesh; // 0x8(0x20)
		unsigned char UnknownData01_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x30(0x60)
		unsigned char UnknownData02_7[0x10]; // 0x90(0x10) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ControlRigTestDataVariable
	// Size: 0x18 (0x18 - 0x0)
	struct FControlRigTestDataVariable	
	{
	public:
		FName Name; // 0x0(0x4)
		FName CPPType; // 0x4(0x4)
		FString Value; // 0x8(0x10)
	};


	// Struct ControlRig.ControlRigTestDataFrame
	// Size: 0x90 (0x90 - 0x0)
	struct FControlRigTestDataFrame	
	{
	public:
		double AbsoluteTime; // 0x0(0x8)
		double DeltaTime; // 0x8(0x8)
		TArray<FControlRigTestDataVariable> Variables; // 0x10(0x10)
		FRigPose Pose; // 0x20(0x70)
	};


	// Struct ControlRig.RigPose
	// Size: 0x70 (0x70 - 0x0)
	struct FRigPose	
	{
	public:
		TArray<FRigPoseElement> Elements; // 0x0(0x10)
		int32_t HierarchyTopologyVersion; // 0x10(0x4)
		int32_t PoseHash; // 0x14(0x4)
		unsigned char UnknownData00_7[0x58]; // 0x18(0x58) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigPoseElement
	// Size: 0x110 (0x110 - 0x0)
	struct FRigPoseElement	
	{
	public:
		FCachedRigElement Index; // 0x0(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform GlobalTransform; // 0x20(0x60)
		FTransform LocalTransform; // 0x80(0x60)
		FVector PreferredEulerAngle; // 0xE0(0x18)
		FRigElementKey ActiveParent; // 0xF8(0x8)
		float CurveValue; // 0x100(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x104(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.CachedRigElement
	// Size: 0x18 (0x18 - 0x0)
	struct FCachedRigElement	
	{
	public:
		FRigElementKey Key; // 0x0(0x8)
		uint16_t Index; // 0x8(0x2)
		unsigned char UnknownData00_6[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
		int32_t ContainerVersion; // 0xC(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ControlRigValidationContext
	// Size: 0x28 (0x28 - 0x0)
	struct FControlRigValidationContext	
	{
	public:
		unsigned char UnknownData00_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct ControlRig.CRSimContainer
	// Size: 0x18 (0x18 - 0x0)
	struct FCRSimContainer	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		float TimeStep; // 0x8(0x4)
		float AccumulatedTime; // 0xC(0x4)
		float TimeLeftForStep; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.CRSimLinearSpring
	// Size: 0x10 (0x10 - 0x0)
	struct FCRSimLinearSpring	
	{
	public:
		int32_t SubjectA; // 0x0(0x4)
		int32_t SubjectB; // 0x4(0x4)
		float Coefficient; // 0x8(0x4)
		float Equilibrium; // 0xC(0x4)
	};


	// Struct ControlRig.CRSimPointConstraint
	// Size: 0x40 (0x40 - 0x0)
	struct FCRSimPointConstraint	
	{
	public:
		ECRSimConstraintType Type; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t SubjectA; // 0x4(0x4)
		int32_t SubjectB; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector DataA; // 0x10(0x18)
		FVector DataB; // 0x28(0x18)
	};


	// Struct ControlRig.CRSimPointContainer
	// Inherited from FCRSimContainer
	// Size: 0x60 (0x78 - 0x18)
	struct FCRSimPointContainer : public FCRSimContainer	
	{
	public:
		TArray<FRigVMSimPoint> Points; // 0x18(0x10)
		TArray<FCRSimLinearSpring> Springs; // 0x28(0x10)
		TArray<FCRSimPointForce> Forces; // 0x38(0x10)
		TArray<FCRSimSoftCollision> CollisionVolumes; // 0x48(0x10)
		TArray<FCRSimPointConstraint> Constraints; // 0x58(0x10)
		TArray<FRigVMSimPoint> PreviousStep; // 0x68(0x10)
	};


	// Struct ControlRig.CRSimSoftCollision
	// Size: 0x80 (0x80 - 0x0)
	struct FCRSimSoftCollision	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		ECRSimSoftCollisionType ShapeType; // 0x60(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		float MinimumDistance; // 0x64(0x4)
		float MaximumDistance; // 0x68(0x4)
		ERigVMAnimEasingType FalloffType; // 0x6C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		float Coefficient; // 0x70(0x4)
		bool bInverted; // 0x74(0x1)
		unsigned char UnknownData02_7[0xB]; // 0x75(0xB) UNKNOWN PROPERTY
	};


	// Struct ControlRig.CRSimPointForce
	// Size: 0x28 (0x28 - 0x0)
	struct FCRSimPointForce	
	{
	public:
		ECRSimPointForceType ForceType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector Vector; // 0x8(0x18)
		float Coefficient; // 0x20(0x4)
		bool bNormalize; // 0x24(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigModuleReference
	// Size: 0x168 (0x168 - 0x0)
	struct FRigModuleReference	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString ShortName; // 0x8(0x10)
		bool bShortNameBasedOnPath; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FString ParentPath; // 0x20(0x10)
		TWeakObjectPtr<UClass*> Class; // 0x30(0x20)
		TMap<FRigElementKey, FRigElementKey> Connections; // 0x50(0x50)
		TMap<FName, FString> ConfigValues; // 0xA0(0x50)
		TMap<FName, FString> Bindings; // 0xF0(0x50)
		FName PreviousName; // 0x140(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x144(0x4) UNKNOWN PROPERTY
		FString PreviousParentPath; // 0x148(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x158(0x10) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ModularRigSingleConnection
	// Size: 0x10 (0x10 - 0x0)
	struct FModularRigSingleConnection	
	{
	public:
		FRigElementKey Connector; // 0x0(0x8)
		FRigElementKey Target; // 0x8(0x8)
	};


	// Struct ControlRig.ModularRigConnections
	// Size: 0x60 (0x60 - 0x0)
	struct FModularRigConnections	
	{
	public:
		TArray<FModularRigSingleConnection> ConnectionList; // 0x0(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x10(0x50) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ModularRigModel
	// Size: 0xA0 (0xA0 - 0x0)
	struct FModularRigModel	
	{
	public:
		TArray<FRigModuleReference> Modules; // 0x0(0x10)
		unsigned char UnknownData00_6[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
		FModularRigConnections Connections; // 0x30(0x60)
		UObject* Controller; // 0x90(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ConstraintNodeData
	// Size: 0x140 (0x140 - 0x0)
	struct FConstraintNodeData	
	{
	public:
		FTransform RelativeParent; // 0x0(0x60)
		FConstraintOffset ConstraintOffset; // 0x60(0xC0)
		FName LinkedNode; // 0x120(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		TArray<FTransformConstraint> Constraints; // 0x128(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x138(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.AnimationHierarchy
	// Inherited from FNodeHierarchyWithUserData
	// Size: 0x10 (0x88 - 0x78)
	struct FAnimationHierarchy : public FNodeHierarchyWithUserData	
	{
	public:
		TArray<FConstraintNodeData> UserData; // 0x78(0x10)
	};


	// Struct ControlRig.RigElement
	// Size: 0x10 (0x10 - 0x0)
	struct FRigElement	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FName Name; // 0x8(0x4)
		int32_t Index; // 0xC(0x4)
	};


	// Struct ControlRig.RigBone
	// Inherited from FRigElement
	// Size: 0x150 (0x160 - 0x10)
	struct FRigBone : public FRigElement	
	{
	public:
		FName ParentName; // 0x10(0x4)
		int32_t ParentIndex; // 0x14(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform InitialTransform; // 0x20(0x60)
		FTransform GlobalTransform; // 0x80(0x60)
		FTransform LocalTransform; // 0xE0(0x60)
		TArray<int32_t> Dependents; // 0x140(0x10)
		ERigBoneType Type; // 0x150(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x151(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigBoneHierarchy
	// Size: 0x10 (0x10 - 0x0)
	struct FRigBoneHierarchy	
	{
	public:
		TArray<FRigBone> Bones; // 0x0(0x10)
	};


	// Struct ControlRig.RigConnectionRule
	// Size: 0x8 (0x8 - 0x0)
	struct FRigConnectionRule	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigAndConnectionRule
	// Inherited from FRigConnectionRule
	// Size: 0x10 (0x18 - 0x8)
	struct FRigAndConnectionRule : public FRigConnectionRule	
	{
	public:
		TArray<FRigConnectionRuleStash> ChildRules; // 0x8(0x10)
	};


	// Struct ControlRig.RigOrConnectionRule
	// Inherited from FRigConnectionRule
	// Size: 0x10 (0x18 - 0x8)
	struct FRigOrConnectionRule : public FRigConnectionRule	
	{
	public:
		TArray<FRigConnectionRuleStash> ChildRules; // 0x8(0x10)
	};


	// Struct ControlRig.RigTypeConnectionRule
	// Inherited from FRigConnectionRule
	// Size: 0x8 (0x10 - 0x8)
	struct FRigTypeConnectionRule : public FRigConnectionRule	
	{
	public:
		ERigElementType ElementType; // 0x8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigTagConnectionRule
	// Inherited from FRigConnectionRule
	// Size: 0x8 (0x10 - 0x8)
	struct FRigTagConnectionRule : public FRigConnectionRule	
	{
	public:
		FName Tag; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigChildOfPrimaryConnectionRule
	// Inherited from FRigConnectionRule
	// Size: 0x0 (0x8 - 0x8)
	struct FRigChildOfPrimaryConnectionRule : public FRigConnectionRule	
	{
	public:
	};


	// Struct ControlRig.RigControl
	// Inherited from FRigElement
	// Size: 0x330 (0x340 - 0x10)
	struct FRigControl : public FRigElement	
	{
	public:
		ERigControlType ControlType; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName DisplayName; // 0x14(0x4)
		FName ParentName; // 0x18(0x4)
		int32_t ParentIndex; // 0x1C(0x4)
		FName SpaceName; // 0x20(0x4)
		int32_t SpaceIndex; // 0x24(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FTransform OffsetTransform; // 0x30(0x60)
		FRigControlValue InitialValue; // 0x90(0x84)
		FRigControlValue Value; // 0x114(0x84)
		ERigControlAxis PrimaryAxis; // 0x198(0x1)
		bool bIsCurve; // 0x199(0x1)
		bool bAnimatable; // 0x19A(0x1)
		bool bLimitTranslation; // 0x19B(0x1)
		bool bLimitRotation; // 0x19C(0x1)
		bool bLimitScale; // 0x19D(0x1)
		bool bDrawLimits; // 0x19E(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x19F(0x1) UNKNOWN PROPERTY
		FRigControlValue MinimumValue; // 0x1A0(0x84)
		FRigControlValue MaximumValue; // 0x224(0x84)
		bool bGizmoEnabled; // 0x2A8(0x1)
		bool bGizmoVisible; // 0x2A9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2AA(0x2) UNKNOWN PROPERTY
		FName GizmoName; // 0x2AC(0x4)
		FTransform GizmoTransform; // 0x2B0(0x60)
		FLinearColor GizmoColor; // 0x310(0x10)
		TArray<int32_t> Dependents; // 0x320(0x10)
		bool bIsTransientControl; // 0x330(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x331(0x7) UNKNOWN PROPERTY
		UEnum* ControlEnum; // 0x338(0x8)
	};


	// Struct ControlRig.RigControlHierarchy
	// Size: 0x10 (0x10 - 0x0)
	struct FRigControlHierarchy	
	{
	public:
		TArray<FRigControl> Controls; // 0x0(0x10)
	};


	// Struct ControlRig.RigCurve
	// Inherited from FRigElement
	// Size: 0x8 (0x18 - 0x10)
	struct FRigCurve : public FRigElement	
	{
	public:
		float Value; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigCurveContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FRigCurveContainer	
	{
	public:
		TArray<FRigCurve> Curves; // 0x0(0x10)
	};


	// Struct ControlRig.RigHierarchyContainer
	// Size: 0x40 (0x40 - 0x0)
	struct FRigHierarchyContainer	
	{
	public:
		FRigBoneHierarchy BoneHierarchy; // 0x0(0x10)
		FRigSpaceHierarchy SpaceHierarchy; // 0x10(0x10)
		FRigControlHierarchy ControlHierarchy; // 0x20(0x10)
		FRigCurveContainer CurveContainer; // 0x30(0x10)
	};


	// Struct ControlRig.RigSpaceHierarchy
	// Size: 0x10 (0x10 - 0x0)
	struct FRigSpaceHierarchy	
	{
	public:
		TArray<FRigSpace> Spaces; // 0x0(0x10)
	};


	// Struct ControlRig.RigSpace
	// Inherited from FRigElement
	// Size: 0xD0 (0xE0 - 0x10)
	struct FRigSpace : public FRigElement	
	{
	public:
		ERigSpaceType SpaceType; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName ParentName; // 0x14(0x4)
		int32_t ParentIndex; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FTransform InitialTransform; // 0x20(0x60)
		FTransform LocalTransform; // 0x80(0x60)
	};


	// Struct ControlRig.RigHierarchyRef
	// Size: 0x1 (0x1 - 0x0)
	struct FRigHierarchyRef	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigControlModifiedContext
	// Size: 0x14 (0x14 - 0x0)
	struct FRigControlModifiedContext	
	{
	public:
		unsigned char UnknownData00_2[0x14]; // 0x0(0x14) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigElementKeyCollection
	// Size: 0x10 (0x10 - 0x0)
	struct FRigElementKeyCollection	
	{
	public:
		TArray<FRigElementKey> Keys; // 0x0(0x10)
	};


	// Struct ControlRig.RigEventContext
	// Size: 0x20 (0x20 - 0x0)
	struct FRigEventContext	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigElementResolveResult
	// Size: 0x20 (0x20 - 0x0)
	struct FRigElementResolveResult	
	{
	public:
		FRigElementKey Key; // 0x0(0x8)
		ERigElementResolveState State; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FText Message; // 0x10(0x10)
	};


	// Struct ControlRig.ModularRigResolveResult
	// Size: 0x40 (0x40 - 0x0)
	struct FModularRigResolveResult	
	{
	public:
		FRigElementKey Connector; // 0x0(0x8)
		TArray<FRigElementResolveResult> Matches; // 0x8(0x10)
		TArray<FRigElementResolveResult> Excluded; // 0x18(0x10)
		EModularRigResolveState State; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FText Message; // 0x30(0x10)
	};


	// Struct ControlRig.RigBaseMetadata
	// Size: 0x18 (0x18 - 0x0)
	struct FRigBaseMetadata	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FName Name; // 0x8(0x4)
		ERigMetadataType Type; // 0xC(0x1)
		unsigned char UnknownData01_7[0xB]; // 0xD(0xB) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigBoolMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x8 (0x20 - 0x18)
	struct FRigBoolMetadata : public FRigBaseMetadata	
	{
	public:
		bool Value; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigBoolArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigBoolArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<bool> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigFloatMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x8 (0x20 - 0x18)
	struct FRigFloatMetadata : public FRigBaseMetadata	
	{
	public:
		float Value; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigFloatArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigFloatArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<float> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigInt32Metadata
	// Inherited from FRigBaseMetadata
	// Size: 0x8 (0x20 - 0x18)
	struct FRigInt32Metadata : public FRigBaseMetadata	
	{
	public:
		int32_t Value; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigInt32ArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigInt32ArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<int32_t> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigNameMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x8 (0x20 - 0x18)
	struct FRigNameMetadata : public FRigBaseMetadata	
	{
	public:
		FName Value; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigNameArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigNameArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<FName> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigVectorMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x18 (0x30 - 0x18)
	struct FRigVectorMetadata : public FRigBaseMetadata	
	{
	public:
		FVector Value; // 0x18(0x18)
	};


	// Struct ControlRig.RigVectorArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigVectorArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<FVector> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigRotatorMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x18 (0x30 - 0x18)
	struct FRigRotatorMetadata : public FRigBaseMetadata	
	{
	public:
		FRotator Value; // 0x18(0x18)
	};


	// Struct ControlRig.RigRotatorArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigRotatorArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<FRotator> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigQuatMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x28 (0x40 - 0x18)
	struct FRigQuatMetadata : public FRigBaseMetadata	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x20(0x20)
	};


	// Struct ControlRig.RigQuatArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigQuatArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<FQuat> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigTransformMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x68 (0x80 - 0x18)
	struct FRigTransformMetadata : public FRigBaseMetadata	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x20(0x60)
	};


	// Struct ControlRig.RigTransformArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigTransformArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<FTransform> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigLinearColorMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigLinearColorMetadata : public FRigBaseMetadata	
	{
	public:
		FLinearColor Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigLinearColorArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigLinearColorArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<FLinearColor> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigElementKeyMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x8 (0x20 - 0x18)
	struct FRigElementKeyMetadata : public FRigBaseMetadata	
	{
	public:
		FRigElementKey Value; // 0x18(0x8)
	};


	// Struct ControlRig.RigElementKeyArrayMetadata
	// Inherited from FRigBaseMetadata
	// Size: 0x10 (0x28 - 0x18)
	struct FRigElementKeyArrayMetadata : public FRigBaseMetadata	
	{
	public:
		TArray<FRigElementKey> Value; // 0x18(0x10)
	};


	// Struct ControlRig.RigInfluenceEntryModifier
	// Size: 0x10 (0x10 - 0x0)
	struct FRigInfluenceEntryModifier	
	{
	public:
		TArray<FRigElementKey> AffectedList; // 0x0(0x10)
	};


	// Struct ControlRig.ModularRigSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FModularRigSettings	
	{
	public:
		bool bAutoResolve; // 0x0(0x1)
	};


	// Struct ControlRig.RigModuleDescription
	// Size: 0x90 (0x90 - 0x0)
	struct FRigModuleDescription	
	{
	public:
		FSoftObjectPath Path; // 0x0(0x18)
		FRigModuleSettings Settings; // 0x18(0x78)
	};


	// Struct ControlRig.AnimNode_ControlRigInputPose
	// Inherited from FAnimNode_Base
	// Size: 0x20 (0x30 - 0x10)
	struct FAnimNode_ControlRigInputPose : public FAnimNode_Base	
	{
	public:
		FPoseLink InputPose; // 0x10(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ControlRigLayerInstanceProxy
	// Inherited from FAnimInstanceProxy
	// Size: 0xA8 (0x840 - 0x798)
	struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy	
	{
	public:
		unsigned char UnknownData00_1[0xA8]; // 0x798(0xA8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ControlRigSequenceObjectReference
	// Size: 0x8 (0x8 - 0x0)
	struct FControlRigSequenceObjectReference	
	{
	public:
		UClass* ControlRigClass; // 0x0(0x8)
	};


	// Struct ControlRig.ControlRigSequenceObjectReferences
	// Size: 0x10 (0x10 - 0x0)
	struct FControlRigSequenceObjectReferences	
	{
	public:
		TArray<FControlRigSequenceObjectReference> Array; // 0x0(0x10)
	};


	// Struct ControlRig.ControlRigSequenceObjectReferenceMap
	// Size: 0x20 (0x20 - 0x0)
	struct FControlRigSequenceObjectReferenceMap	
	{
	public:
		TArray<FGuid> BindingIds; // 0x0(0x10)
		TArray<FControlRigSequenceObjectReferences> References; // 0x10(0x10)
	};


	// Struct ControlRig.EnumParameterNameAndCurve
	// Size: 0x110 (0x110 - 0x0)
	struct FEnumParameterNameAndCurve	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneByteChannel ParameterCurve; // 0x8(0x108)
	};


	// Struct ControlRig.IntegerParameterNameAndCurve
	// Size: 0x110 (0x110 - 0x0)
	struct FIntegerParameterNameAndCurve	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneIntegerChannel ParameterCurve; // 0x8(0x108)
	};


	// Struct ControlRig.SpaceControlNameAndChannel
	// Size: 0x118 (0x118 - 0x0)
	struct FSpaceControlNameAndChannel	
	{
	public:
		FName ControlName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneControlRigSpaceChannel SpaceCurve; // 0x8(0x110)
	};


	// Struct ControlRig.MovieSceneControlRigSpaceChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xC0 (0x110 - 0x50)
	struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel	
	{
	public:
		TArray<FFrameNumber> KeyTimes; // 0x50(0x10)
		TArray<FMovieSceneControlRigSpaceBaseKey> KeyValues; // 0x60(0x10)
		FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
		unsigned char UnknownData00_7[0x18]; // 0xF8(0x18) UNKNOWN PROPERTY
	};


	// Struct ControlRig.MovieSceneControlRigSpaceBaseKey
	// Size: 0xC (0xC - 0x0)
	struct FMovieSceneControlRigSpaceBaseKey	
	{
	public:
		EMovieSceneControlRigSpaceType SpaceType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FRigElementKey ControlRigElement; // 0x4(0x8)
	};


	// Struct ControlRig.ChannelMapInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FChannelMapInfo	
	{
	public:
		int32_t ControlIndex; // 0x0(0x4)
		int32_t TotalChannelIndex; // 0x4(0x4)
		int32_t ChannelIndex; // 0x8(0x4)
		int32_t ParentControlIndex; // 0xC(0x4)
		FName ChannelTypeName; // 0x10(0x4)
		bool bDoesHaveSpace; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		int32_t SpaceChannelIndex; // 0x18(0x4)
		int32_t MaskIndex; // 0x1C(0x4)
		int32_t CategoryIndex; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray<uint32_t> ConstraintsIndex; // 0x28(0x10)
	};


	// Struct ControlRig.MovieSceneControlRigParameterTemplate
	// Inherited from FMovieSceneParameterSectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x40 (0xC0 - 0x80)
	struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate	
	{
	public:
		TArray<FEnumParameterNameAndCurve> Enums; // 0x80(0x10)
		TArray<FIntegerParameterNameAndCurve> Integers; // 0x90(0x10)
		TArray<FSpaceControlNameAndChannel> Spaces; // 0xA0(0x10)
		TArray<FConstraintAndActiveChannel> Constraints; // 0xB0(0x10)
	};


	// Struct ControlRig.ControlRotationOrder
	// Size: 0x2 (0x2 - 0x0)
	struct FControlRotationOrder	
	{
	public:
		EEulerRotationOrder RotationOrder; // 0x0(0x1)
		bool bOverrideSetting; // 0x1(0x1)
	};


	// Struct ControlRig.ControlRigSettingsPerPinBool
	// Size: 0x50 (0x50 - 0x0)
	struct FControlRigSettingsPerPinBool	
	{
	public:
		TMap<FString, bool> Values; // 0x0(0x50)
	};


	// Struct ControlRig.RigControlCopy
	// Size: 0x220 (0x220 - 0x0)
	struct FRigControlCopy	
	{
	public:
		FName Name; // 0x0(0x4)
		ERigControlType ControlType; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FRigElementKey ParentKey; // 0x8(0x8)
		FRigControlValue Value; // 0x10(0x84)
		unsigned char UnknownData01_6[0xC]; // 0x94(0xC) UNKNOWN PROPERTY
		FTransform OffsetTransform; // 0xA0(0x60)
		FTransform ParentTransform; // 0x100(0x60)
		FTransform LocalTransform; // 0x160(0x60)
		FTransform GlobalTransform; // 0x1C0(0x60)
	};


	// Struct ControlRig.ControlRigControlPose
	// Size: 0x60 (0x60 - 0x0)
	struct FControlRigControlPose	
	{
	public:
		TArray<FRigControlCopy> CopyOfControls; // 0x0(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x10(0x50) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigDispatchFactory
	// Inherited from FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigDispatchFactory : public FRigVMDispatchFactory	
	{
	public:
	};


	// Struct ControlRig.RigDispatch_AnimAttributeBase
	// Inherited from FRigDispatchFactory -> FRigVMDispatchFactory
	// Size: 0x30 (0xA0 - 0x70)
	struct FRigDispatch_AnimAttributeBase : public FRigDispatchFactory	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x70(0x30) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigDispatch_GetAnimAttribute
	// Inherited from FRigDispatch_AnimAttributeBase -> FRigDispatchFactory -> FRigVMDispatchFactory
	// Size: 0x0 (0xA0 - 0xA0)
	struct FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase	
	{
	public:
	};


	// Struct ControlRig.RigDispatch_SetAnimAttribute
	// Inherited from FRigDispatch_AnimAttributeBase -> FRigDispatchFactory -> FRigVMDispatchFactory
	// Size: 0x0 (0xA0 - 0xA0)
	struct FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase	
	{
	public:
	};


	// Struct ControlRig.RigUnit_SphereTrace_WorkData
	// Size: 0x38 (0x38 - 0x0)
	struct FRigUnit_SphereTrace_WorkData	
	{
	public:
		uint32_t Hash; // 0x0(0x4)
		bool bHit; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FVector HitLocation; // 0x8(0x18)
		FVector HitNormal; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_SphereTraceWorld
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigUnit_SphereTraceWorld : public FRigUnit	
	{
	public:
		FVector Start; // 0x8(0x18)
		FVector End; // 0x20(0x18)
		TEnumAsByte<ECollisionChannel> Channel; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float Radius; // 0x3C(0x4)
		bool bHit; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FVector HitLocation; // 0x48(0x18)
		FVector HitNormal; // 0x60(0x18)
		FRigUnit_SphereTrace_WorkData WorkData; // 0x78(0x38)
	};


	// Struct ControlRig.RigUnit_SphereTraceByTraceChannel
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit	
	{
	public:
		FVector Start; // 0x8(0x18)
		FVector End; // 0x20(0x18)
		TEnumAsByte<ETraceTypeQuery> TraceChannel; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float Radius; // 0x3C(0x4)
		bool bHit; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FVector HitLocation; // 0x48(0x18)
		FVector HitNormal; // 0x60(0x18)
		FRigUnit_SphereTrace_WorkData WorkData; // 0x78(0x38)
	};


	// Struct ControlRig.RigUnit_SphereTraceByObjectTypes
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xB0 (0xB8 - 0x8)
	struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit	
	{
	public:
		FVector Start; // 0x8(0x18)
		FVector End; // 0x20(0x18)
		TArray<TEnumAsByte> ObjectTypes; // 0x38(0x10)
		float Radius; // 0x48(0x4)
		bool bHit; // 0x4C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		FVector HitLocation; // 0x50(0x18)
		FVector HitNormal; // 0x68(0x18)
		FRigUnit_SphereTrace_WorkData WorkData; // 0x80(0x38)
	};


	// Struct ControlRig.RigUnit_Control
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x178 (0x180 - 0x8)
	struct FRigUnit_Control : public FRigUnit	
	{
	public:
		FEulerTransform Transform; // 0x8(0x48)
		FTransform base; // 0x50(0x60)
		FTransform InitTransform; // 0xB0(0x60)
		FTransform Result; // 0x110(0x60)
		FTransformFilter Filter; // 0x170(0x9)
		bool bIsInitialized; // 0x179(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x17A(0x6) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_Control_StaticMesh
	// Inherited from FRigUnit_Control -> FRigUnit -> FRigVMStruct
	// Size: 0x60 (0x1E0 - 0x180)
	struct FRigUnit_Control_StaticMesh : public FRigUnit_Control	
	{
	public:
		FTransform MeshTransform; // 0x180(0x60)
	};


	// Struct ControlRig.RigDispatch_GetUserData
	// Inherited from FRigDispatchFactory -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigDispatch_GetUserData : public FRigDispatchFactory	
	{
	public:
	};


	// Struct ControlRig.RigUnit_SetupShapeLibraryFromUserData
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x40 (0x200 - 0x1C0)
	struct FRigUnit_SetupShapeLibraryFromUserData : public FRigUnitMutable	
	{
	public:
		FString NameSpace; // 0x1C0(0x10)
		FString Path; // 0x1D0(0x10)
		FString LibraryName; // 0x1E0(0x10)
		bool LogShapeLibraries; // 0x1F0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x1F1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ShapeExists
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigUnit_ShapeExists : public FRigUnit	
	{
	public:
		FName ShapeName; // 0x8(0x4)
		bool Result; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugBezier
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0x100 (0x200 - 0x100)
	struct FRigUnit_DebugBezier : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		FRigVMFourPointBezier Bezier; // 0x100(0x60)
		float MinimumU; // 0x160(0x4)
		float MaximumU; // 0x164(0x4)
		FLinearColor Color; // 0x168(0x10)
		float Thickness; // 0x178(0x4)
		int32_t Detail; // 0x17C(0x4)
		FName Space; // 0x180(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x184(0xC) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x190(0x60)
		bool bEnabled; // 0x1F0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x1F1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugBezierItemSpace
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0x100 (0x200 - 0x100)
	struct FRigUnit_DebugBezierItemSpace : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		FRigVMFourPointBezier Bezier; // 0x100(0x60)
		float MinimumU; // 0x160(0x4)
		float MaximumU; // 0x164(0x4)
		FLinearColor Color; // 0x168(0x10)
		float Thickness; // 0x178(0x4)
		int32_t Detail; // 0x17C(0x4)
		FRigElementKey Space; // 0x180(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x188(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x190(0x60)
		bool bEnabled; // 0x1F0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x1F1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugHierarchy
	// Inherited from FRigVMFunction_DebugBase -> FRigVMStruct
	// Size: 0x248 (0x250 - 0x8)
	struct FRigUnit_DebugHierarchy : public FRigVMFunction_DebugBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
		float Scale; // 0x1C0(0x4)
		FLinearColor Color; // 0x1C4(0x10)
		float Thickness; // 0x1D4(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x1D8(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x1E0(0x60)
		bool bEnabled; // 0x240(0x1)
		unsigned char UnknownData02_7[0xF]; // 0x241(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugPose
	// Inherited from FRigVMFunction_DebugBase -> FRigVMStruct
	// Size: 0x2B8 (0x2C0 - 0x8)
	struct FRigUnit_DebugPose : public FRigVMFunction_DebugBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
		FRigPose Pose; // 0x1C0(0x70)
		float Scale; // 0x230(0x4)
		FLinearColor Color; // 0x234(0x10)
		float Thickness; // 0x244(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x248(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x250(0x60)
		bool bEnabled; // 0x2B0(0x1)
		unsigned char UnknownData02_7[0xF]; // 0x2B1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugLine
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xC0 (0x280 - 0x1C0)
	struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable	
	{
	public:
		FVector A; // 0x1C0(0x18)
		FVector B; // 0x1D8(0x18)
		FLinearColor Color; // 0x1F0(0x10)
		float Thickness; // 0x200(0x4)
		FName Space; // 0x204(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x208(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x210(0x60)
		bool bEnabled; // 0x270(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x271(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugLineItemSpace
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xC0 (0x280 - 0x1C0)
	struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable	
	{
	public:
		FVector A; // 0x1C0(0x18)
		FVector B; // 0x1D8(0x18)
		FLinearColor Color; // 0x1F0(0x10)
		float Thickness; // 0x200(0x4)
		FRigElementKey Space; // 0x204(0x8)
		unsigned char UnknownData00_6[0x4]; // 0x20C(0x4) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x210(0x60)
		bool bEnabled; // 0x270(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x271(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugLineStrip
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xA0 (0x260 - 0x1C0)
	struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable	
	{
	public:
		TArray<FVector> Points; // 0x1C0(0x10)
		FLinearColor Color; // 0x1D0(0x10)
		float Thickness; // 0x1E0(0x4)
		FName Space; // 0x1E4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x1F0(0x60)
		bool bEnabled; // 0x250(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x251(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugLineStripItemSpace
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xA0 (0x260 - 0x1C0)
	struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable	
	{
	public:
		TArray<FVector> Points; // 0x1C0(0x10)
		FLinearColor Color; // 0x1D0(0x10)
		float Thickness; // 0x1E0(0x4)
		FRigElementKey Space; // 0x1E4(0x8)
		unsigned char UnknownData00_6[0x4]; // 0x1EC(0x4) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x1F0(0x60)
		bool bEnabled; // 0x250(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x251(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugRectangle
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xF0 (0x2B0 - 0x1C0)
	struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x1C0(0x60)
		FLinearColor Color; // 0x220(0x10)
		float Scale; // 0x230(0x4)
		float Thickness; // 0x234(0x4)
		FName Space; // 0x238(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x23C(0x4) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x240(0x60)
		bool bEnabled; // 0x2A0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x2A1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugRectangleItemSpace
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xF0 (0x2B0 - 0x1C0)
	struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x1C0(0x60)
		FLinearColor Color; // 0x220(0x10)
		float Scale; // 0x230(0x4)
		float Thickness; // 0x234(0x4)
		FRigElementKey Space; // 0x238(0x8)
		FTransform WorldOffset; // 0x240(0x60)
		bool bEnabled; // 0x2A0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x2A1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugArc
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x100 (0x2C0 - 0x1C0)
	struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x1C0(0x60)
		FLinearColor Color; // 0x220(0x10)
		float Radius; // 0x230(0x4)
		float MinimumDegrees; // 0x234(0x4)
		float MaximumDegrees; // 0x238(0x4)
		float Thickness; // 0x23C(0x4)
		int32_t Detail; // 0x240(0x4)
		FName Space; // 0x244(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x248(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x250(0x60)
		bool bEnabled; // 0x2B0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x2B1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugArcItemSpace
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x100 (0x2C0 - 0x1C0)
	struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x1C0(0x60)
		FLinearColor Color; // 0x220(0x10)
		float Radius; // 0x230(0x4)
		float MinimumDegrees; // 0x234(0x4)
		float MaximumDegrees; // 0x238(0x4)
		float Thickness; // 0x23C(0x4)
		int32_t Detail; // 0x240(0x4)
		FRigElementKey Space; // 0x244(0x8)
		unsigned char UnknownData00_6[0x4]; // 0x24C(0x4) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x250(0x60)
		bool bEnabled; // 0x2B0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x2B1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugTransform
	// Inherited from FRigUnit_DebugBase -> FRigUnit -> FRigVMStruct
	// Size: 0xF8 (0x100 - 0x8)
	struct FRigUnit_DebugTransform : public FRigUnit_DebugBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		ERigUnitDebugTransformMode Mode; // 0x70(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x74(0x10)
		float Thickness; // 0x84(0x4)
		float Scale; // 0x88(0x4)
		FName Space; // 0x8C(0x4)
		FTransform WorldOffset; // 0x90(0x60)
		bool bEnabled; // 0xF0(0x1)
		unsigned char UnknownData02_7[0xF]; // 0xF1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugTransformMutable
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xF0 (0x2B0 - 0x1C0)
	struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x1C0(0x60)
		ERigUnitDebugTransformMode Mode; // 0x220(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x221(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x224(0x10)
		float Thickness; // 0x234(0x4)
		float Scale; // 0x238(0x4)
		FName Space; // 0x23C(0x4)
		FTransform WorldOffset; // 0x240(0x60)
		bool bEnabled; // 0x2A0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x2A1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugTransformMutableItemSpace
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x100 (0x2C0 - 0x1C0)
	struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x1C0(0x60)
		ERigUnitDebugTransformMode Mode; // 0x220(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x221(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x224(0x10)
		float Thickness; // 0x234(0x4)
		float Scale; // 0x238(0x4)
		FRigElementKey Space; // 0x23C(0x8)
		unsigned char UnknownData01_6[0xC]; // 0x244(0xC) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x250(0x60)
		bool bEnabled; // 0x2B0(0x1)
		unsigned char UnknownData02_7[0xF]; // 0x2B1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
	// Size: 0x10 (0x10 - 0x0)
	struct FRigUnit_DebugTransformArrayMutable_WorkData	
	{
	public:
		TArray<FTransform> DrawTransforms; // 0x0(0x10)
	};


	// Struct ControlRig.RigUnit_DebugTransformArrayMutable
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xB0 (0x270 - 0x1C0)
	struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable	
	{
	public:
		TArray<FTransform> Transforms; // 0x1C0(0x10)
		ERigUnitDebugTransformMode Mode; // 0x1D0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1D1(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x1D4(0x10)
		float Thickness; // 0x1E4(0x4)
		float Scale; // 0x1E8(0x4)
		FName Space; // 0x1EC(0x4)
		FTransform WorldOffset; // 0x1F0(0x60)
		bool bEnabled; // 0x250(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x251(0x7) UNKNOWN PROPERTY
		FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0x258(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
	// Inherited from FRigUnit_DebugBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xC0 (0x280 - 0x1C0)
	struct FRigUnit_DebugTransformArrayMutableItemSpace : public FRigUnit_DebugBaseMutable	
	{
	public:
		TArray<FTransform> Transforms; // 0x1C0(0x10)
		TArray<int32_t> ParentIndices; // 0x1D0(0x10)
		ERigUnitDebugTransformMode Mode; // 0x1E0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E1(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x1E4(0x10)
		float Thickness; // 0x1F4(0x4)
		float Scale; // 0x1F8(0x4)
		FRigElementKey Space; // 0x1FC(0x8)
		unsigned char UnknownData01_6[0xC]; // 0x204(0xC) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x210(0x60)
		bool bEnabled; // 0x270(0x1)
		unsigned char UnknownData02_7[0xF]; // 0x271(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_StartProfilingTimer
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0x0 (0x100 - 0x100)
	struct FRigUnit_StartProfilingTimer : public FRigVMFunction_DebugBaseMutable	
	{
	public:
	};


	// Struct ControlRig.RigUnit_EndProfilingTimer
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0x30 (0x130 - 0x100)
	struct FRigUnit_EndProfilingTimer : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		int32_t NumberOfMeasurements; // 0x100(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FString Prefix; // 0x108(0x10)
		float AccumulatedTime; // 0x118(0x4)
		int32_t MeasurementsLeft; // 0x11C(0x4)
		bool bIsInitialized; // 0x120(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x121(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_VisualDebugVector
	// Inherited from FRigUnit_DebugBase -> FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		bool bEnabled; // 0x20(0x1)
		ERigUnitVisualDebugPointMode Mode; // 0x21(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x22(0x2) UNKNOWN PROPERTY
		FLinearColor Color; // 0x24(0x10)
		float Thickness; // 0x34(0x4)
		float Scale; // 0x38(0x4)
		FName BoneSpace; // 0x3C(0x4)
	};


	// Struct ControlRig.RigUnit_VisualDebugVectorItemSpace
	// Inherited from FRigUnit_DebugBase -> FRigUnit -> FRigVMStruct
	// Size: 0x40 (0x48 - 0x8)
	struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		bool bEnabled; // 0x20(0x1)
		ERigUnitVisualDebugPointMode Mode; // 0x21(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x22(0x2) UNKNOWN PROPERTY
		FLinearColor Color; // 0x24(0x10)
		float Thickness; // 0x34(0x4)
		float Scale; // 0x38(0x4)
		FRigElementKey Space; // 0x3C(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_VisualDebugQuat
	// Inherited from FRigUnit_DebugBase -> FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		bool bEnabled; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float Thickness; // 0x34(0x4)
		float Scale; // 0x38(0x4)
		FName BoneSpace; // 0x3C(0x4)
	};


	// Struct ControlRig.RigUnit_VisualDebugQuatItemSpace
	// Inherited from FRigUnit_DebugBase -> FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		bool bEnabled; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float Thickness; // 0x34(0x4)
		float Scale; // 0x38(0x4)
		FRigElementKey Space; // 0x3C(0x8)
		unsigned char UnknownData02_7[0xC]; // 0x44(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_VisualDebugTransform
	// Inherited from FRigUnit_DebugBase -> FRigUnit -> FRigVMStruct
	// Size: 0x78 (0x80 - 0x8)
	struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		bool bEnabled; // 0x70(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		float Thickness; // 0x74(0x4)
		float Scale; // 0x78(0x4)
		FName BoneSpace; // 0x7C(0x4)
	};


	// Struct ControlRig.RigUnit_VisualDebugTransformItemSpace
	// Inherited from FRigUnit_DebugBase -> FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		bool bEnabled; // 0x70(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		float Thickness; // 0x74(0x4)
		float Scale; // 0x78(0x4)
		FRigElementKey Space; // 0x7C(0x8)
		unsigned char UnknownData02_7[0xC]; // 0x84(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ConvertTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRigUnit_ConvertTransform : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Input; // 0x10(0x60)
		FEulerTransform Result; // 0x70(0x48)
		unsigned char UnknownData01_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ConvertEulerTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigUnit_ConvertEulerTransform : public FRigUnit	
	{
	public:
		FEulerTransform Input; // 0x8(0x48)
		FTransform Result; // 0x50(0x60)
	};


	// Struct ControlRig.RigUnit_ConvertRotation
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_ConvertRotation : public FRigUnit	
	{
	public:
		FRotator Input; // 0x8(0x18)
		FQuat Result; // 0x20(0x20)
	};


	// Struct ControlRig.RigUnit_ConvertVectorRotation
	// Inherited from FRigUnit_ConvertRotation -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x40 - 0x40)
	struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation	
	{
	public:
	};


	// Struct ControlRig.RigUnit_ConvertQuaternion
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_ConvertQuaternion : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Input; // 0x10(0x20)
		FRotator Result; // 0x30(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ConvertVectorToRotation
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_ConvertVectorToRotation : public FRigUnit	
	{
	public:
		FVector Input; // 0x8(0x18)
		FRotator Result; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_ConvertVectorToQuaternion
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit	
	{
	public:
		FVector Input; // 0x8(0x18)
		FQuat Result; // 0x20(0x20)
	};


	// Struct ControlRig.RigUnit_ConvertRotationToVector
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_ConvertRotationToVector : public FRigUnit	
	{
	public:
		FRotator Input; // 0x8(0x18)
		FVector Result; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_ConvertQuaternionToVector
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_ConvertQuaternionToVector : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Input; // 0x10(0x20)
		FVector Result; // 0x30(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ToSwingAndTwist
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_ToSwingAndTwist : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Input; // 0x10(0x20)
		FVector TwistAxis; // 0x30(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		FQuat Swing; // 0x50(0x20)
		FQuat Twist; // 0x70(0x20)
	};


	// Struct ControlRig.RigUnit_BinaryFloatOp
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigUnit_BinaryFloatOp : public FRigUnit	
	{
	public:
		float Argument0; // 0x8(0x4)
		float Argument1; // 0xC(0x4)
		float Result; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_Multiply_FloatFloat
	// Inherited from FRigUnit_BinaryFloatOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_Add_FloatFloat
	// Inherited from FRigUnit_BinaryFloatOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_Subtract_FloatFloat
	// Inherited from FRigUnit_BinaryFloatOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_Divide_FloatFloat
	// Inherited from FRigUnit_BinaryFloatOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_Clamp_Float
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigUnit_Clamp_Float : public FRigUnit	
	{
	public:
		float Value; // 0x8(0x4)
		float Min; // 0xC(0x4)
		float Max; // 0x10(0x4)
		float Result; // 0x14(0x4)
	};


	// Struct ControlRig.RigUnit_MapRange_Float
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_MapRange_Float : public FRigUnit	
	{
	public:
		float Value; // 0x8(0x4)
		float MinIn; // 0xC(0x4)
		float MaxIn; // 0x10(0x4)
		float MinOut; // 0x14(0x4)
		float MaxOut; // 0x18(0x4)
		float Result; // 0x1C(0x4)
	};


	// Struct ControlRig.RigUnit_BinaryQuaternionOp
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigUnit_BinaryQuaternionOp : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Argument0; // 0x10(0x20)
		FQuat Argument1; // 0x30(0x20)
		FQuat Result; // 0x50(0x20)
	};


	// Struct ControlRig.RigUnit_MultiplyQuaternion
	// Inherited from FRigUnit_BinaryQuaternionOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x70 - 0x70)
	struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_UnaryQuaternionOp
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_UnaryQuaternionOp : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Argument; // 0x10(0x20)
		FQuat Result; // 0x30(0x20)
	};


	// Struct ControlRig.RigUnit_InverseQuaterion
	// Inherited from FRigUnit_UnaryQuaternionOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_QuaternionToAxisAndAngle
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Argument; // 0x10(0x20)
		FVector Axis; // 0x30(0x18)
		float Angle; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_QuaternionFromAxisAndAngle
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit	
	{
	public:
		FVector Axis; // 0x8(0x18)
		float Angle; // 0x20(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
		FQuat Result; // 0x30(0x20)
	};


	// Struct ControlRig.RigUnit_QuaternionToAngle
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_QuaternionToAngle : public FRigUnit	
	{
	public:
		FVector Axis; // 0x8(0x18)
		FQuat Argument; // 0x20(0x20)
		float Angle; // 0x40(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x44(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_BinaryTransformOp
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x128 (0x130 - 0x8)
	struct FRigUnit_BinaryTransformOp : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Argument0; // 0x10(0x60)
		FTransform Argument1; // 0x70(0x60)
		FTransform Result; // 0xD0(0x60)
	};


	// Struct ControlRig.RigUnit_MultiplyTransform
	// Inherited from FRigUnit_BinaryTransformOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x130 - 0x130)
	struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_GetRelativeTransform
	// Inherited from FRigUnit_BinaryTransformOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x130 - 0x130)
	struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_BinaryVectorOp
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_BinaryVectorOp : public FRigUnit	
	{
	public:
		FVector Argument0; // 0x8(0x18)
		FVector Argument1; // 0x20(0x18)
		FVector Result; // 0x38(0x18)
	};


	// Struct ControlRig.RigUnit_Multiply_VectorVector
	// Inherited from FRigUnit_BinaryVectorOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_Add_VectorVector
	// Inherited from FRigUnit_BinaryVectorOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_Subtract_VectorVector
	// Inherited from FRigUnit_BinaryVectorOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_Divide_VectorVector
	// Inherited from FRigUnit_BinaryVectorOp -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp	
	{
	public:
	};


	// Struct ControlRig.RigUnit_Distance_VectorVector
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_Distance_VectorVector : public FRigUnit	
	{
	public:
		FVector Argument0; // 0x8(0x18)
		FVector Argument1; // 0x20(0x18)
		float Result; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.AimTarget
	// Size: 0x90 (0x90 - 0x0)
	struct FAimTarget	
	{
	public:
		float Weight; // 0x0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FVector AlignVector; // 0x70(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_AimConstraint_WorkData
	// Size: 0x10 (0x10 - 0x0)
	struct FRigUnit_AimConstraint_WorkData	
	{
	public:
		TArray<FConstraintData> ConstraintData; // 0x0(0x10)
	};


	// Struct ControlRig.RigUnit_AimConstraint
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x70 (0x230 - 0x1C0)
	struct FRigUnit_AimConstraint : public FRigUnitMutable	
	{
	public:
		FName Joint; // 0x1C0(0x4)
		EAimMode AimMode; // 0x1C4(0x1)
		EAimMode UpMode; // 0x1C5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1C6(0x2) UNKNOWN PROPERTY
		FVector AimVector; // 0x1C8(0x18)
		FVector UpVector; // 0x1E0(0x18)
		TArray<FAimTarget> AimTargets; // 0x1F8(0x10)
		TArray<FAimTarget> UpTargets; // 0x208(0x10)
		FRigUnit_AimConstraint_WorkData WorkData; // 0x218(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x228(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ApplyFK
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xF0 (0x2B0 - 0x1C0)
	struct FRigUnit_ApplyFK : public FRigUnitMutable	
	{
	public:
		FName Joint; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
		FTransformFilter Filter; // 0x230(0x9)
		EApplyTransformMode ApplyTransformMode; // 0x239(0x1)
		ETransformSpaceMode ApplyTransformSpace; // 0x23A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x23B(0x5) UNKNOWN PROPERTY
		FTransform BaseTransform; // 0x240(0x60)
		FName BaseJoint; // 0x2A0(0x4)
		unsigned char UnknownData02_7[0xC]; // 0x2A4(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.BlendTarget
	// Size: 0x70 (0x70 - 0x0)
	struct FBlendTarget	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		float Weight; // 0x60(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x64(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_BlendTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xD8 (0xE0 - 0x8)
	struct FRigUnit_BlendTransform : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Source; // 0x10(0x60)
		TArray<FBlendTarget> Targets; // 0x70(0x10)
		FTransform Result; // 0x80(0x60)
	};


	// Struct ControlRig.RigUnit_GetJointTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xE0 (0x2A0 - 0x1C0)
	struct FRigUnit_GetJointTransform : public FRigUnitMutable	
	{
	public:
		FName Joint; // 0x1C0(0x4)
		ETransformGetterType Type; // 0x1C4(0x1)
		ETransformSpaceMode TransformSpace; // 0x1C5(0x1)
		unsigned char UnknownData00_6[0xA]; // 0x1C6(0xA) UNKNOWN PROPERTY
		FTransform BaseTransform; // 0x1D0(0x60)
		FName BaseJoint; // 0x230(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x234(0xC) UNKNOWN PROPERTY
		FTransform Output; // 0x240(0x60)
	};


	// Struct ControlRig.RigUnit_TwoBoneIKFK
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x310 (0x4D0 - 0x1C0)
	struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable	
	{
	public:
		FName StartJoint; // 0x1C0(0x4)
		FName EndJoint; // 0x1C4(0x4)
		FVector PoleTarget; // 0x1C8(0x18)
		float Spin; // 0x1E0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1E4(0xC) UNKNOWN PROPERTY
		FTransform EndEffector; // 0x1F0(0x60)
		float IKBlend; // 0x250(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x254(0xC) UNKNOWN PROPERTY
		FTransform StartJointFKTransform; // 0x260(0x60)
		FTransform MidJointFKTransform; // 0x2C0(0x60)
		FTransform EndJointFKTransform; // 0x320(0x60)
		float PreviousFKIKBlend; // 0x380(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x384(0xC) UNKNOWN PROPERTY
		FTransform StartJointIKTransform; // 0x390(0x60)
		FTransform MidJointIKTransform; // 0x3F0(0x60)
		FTransform EndJointIKTransform; // 0x450(0x60)
		int32_t StartJointIndex; // 0x4B0(0x4)
		int32_t MidJointIndex; // 0x4B4(0x4)
		int32_t EndJointIndex; // 0x4B8(0x4)
		float UpperLimbLength; // 0x4BC(0x4)
		float LowerLimbLength; // 0x4C0(0x4)
		bool bIsInitialized; // 0x4C4(0x1)
		unsigned char UnknownData03_7[0xB]; // 0x4C5(0xB) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DrawContainerGetInstruction
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x78 (0x80 - 0x8)
	struct FRigUnit_DrawContainerGetInstruction : public FRigUnit	
	{
	public:
		FName InstructionName; // 0x8(0x4)
		FLinearColor Color; // 0xC(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FTransform Transform; // 0x20(0x60)
	};


	// Struct ControlRig.RigUnit_DrawContainerSetColor
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable	
	{
	public:
		FName InstructionName; // 0x1C0(0x4)
		FLinearColor Color; // 0x1C4(0x10)
		unsigned char UnknownData00_7[0xC]; // 0x1D4(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DrawContainerSetThickness
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x1D0 - 0x1C0)
	struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable	
	{
	public:
		FName InstructionName; // 0x1C0(0x4)
		float Thickness; // 0x1C4(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DrawContainerSetTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x70 (0x230 - 0x1C0)
	struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable	
	{
	public:
		FName InstructionName; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
	};


	// Struct ControlRig.RigUnit_BeginExecution
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x1B8 (0x1C0 - 0x8)
	struct FRigUnit_BeginExecution : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
	};


	// Struct ControlRig.RigUnit_PreBeginExecution
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x1B8 (0x1C0 - 0x8)
	struct FRigUnit_PreBeginExecution : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
	};


	// Struct ControlRig.RigUnit_PostBeginExecution
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x1B8 (0x1C0 - 0x8)
	struct FRigUnit_PostBeginExecution : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
	};


	// Struct ControlRig.RigUnit_CollectionBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit_CollectionBase : public FRigUnit	
	{
	public:
	};


	// Struct ControlRig.RigUnit_CollectionBaseMutable
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable	
	{
	public:
	};


	// Struct ControlRig.RigUnit_CollectionChain
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKey FirstItem; // 0x8(0x8)
		FRigElementKey LastItem; // 0x10(0x8)
		bool Reverse; // 0x18(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FRigElementKeyCollection Collection; // 0x20(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionChainArray
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKey FirstItem; // 0x8(0x8)
		FRigElementKey LastItem; // 0x10(0x8)
		bool Reverse; // 0x18(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x20(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionNameSearch
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase	
	{
	public:
		FName PartialName; // 0x8(0x4)
		ERigElementType TypeToSearch; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FRigElementKeyCollection Collection; // 0x10(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionNameSearchArray
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase	
	{
	public:
		FName PartialName; // 0x8(0x4)
		ERigElementType TypeToSearch; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x10(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionChildren
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKey Parent; // 0x8(0x8)
		bool bIncludeParent; // 0x10(0x1)
		bool bRecursive; // 0x11(0x1)
		ERigElementType TypeToSearch; // 0x12(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
		FRigElementKeyCollection Collection; // 0x18(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionChildrenArray
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKey Parent; // 0x8(0x8)
		bool bIncludeParent; // 0x10(0x1)
		bool bRecursive; // 0x11(0x1)
		ERigElementType TypeToSearch; // 0x12(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x18(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionGetAll
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase	
	{
	public:
		ERigElementType TypeToSearch; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x10(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionReplaceItems
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection Items; // 0x8(0x10)
		FName Old; // 0x18(0x4)
		FName New; // 0x1C(0x4)
		bool RemoveInvalidItems; // 0x20(0x1)
		bool bAllowDuplicates; // 0x21(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
		FRigElementKeyCollection Collection; // 0x28(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionReplaceItemsArray
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase	
	{
	public:
		TArray<FRigElementKey> Items; // 0x8(0x10)
		FName Old; // 0x18(0x4)
		FName New; // 0x1C(0x4)
		bool RemoveInvalidItems; // 0x20(0x1)
		bool bAllowDuplicates; // 0x21(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
		TArray<FRigElementKey> Result; // 0x28(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionItems
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase	
	{
	public:
		TArray<FRigElementKey> Items; // 0x8(0x10)
		bool bAllowDuplicates; // 0x18(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FRigElementKeyCollection Collection; // 0x20(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionGetItems
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection Collection; // 0x8(0x10)
		TArray<FRigElementKey> Items; // 0x18(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionGetParentIndices
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection Collection; // 0x8(0x10)
		TArray<int32_t> ParentIndices; // 0x18(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase	
	{
	public:
		TArray<FRigElementKey> Items; // 0x8(0x10)
		TArray<int32_t> ParentIndices; // 0x18(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionUnion
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection A; // 0x8(0x10)
		FRigElementKeyCollection B; // 0x18(0x10)
		bool bAllowDuplicates; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FRigElementKeyCollection Collection; // 0x30(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionIntersection
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection A; // 0x8(0x10)
		FRigElementKeyCollection B; // 0x18(0x10)
		FRigElementKeyCollection Collection; // 0x28(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionDifference
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection A; // 0x8(0x10)
		FRigElementKeyCollection B; // 0x18(0x10)
		FRigElementKeyCollection Collection; // 0x28(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionReverse
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection Collection; // 0x8(0x10)
		FRigElementKeyCollection Reversed; // 0x18(0x10)
	};


	// Struct ControlRig.RigUnit_CollectionCount
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection Collection; // 0x8(0x10)
		int32_t Count; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_CollectionItemAtIndex
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection Collection; // 0x8(0x10)
		int32_t Index; // 0x18(0x4)
		FRigElementKey Item; // 0x1C(0x8)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_CollectionLoop
	// Inherited from FRigUnit_CollectionBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x1E0 (0x3A0 - 0x1C0)
	struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable	
	{
	public:
		FName BlockToRun; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FRigElementKeyCollection Collection; // 0x1C8(0x10)
		FRigElementKey Item; // 0x1D8(0x8)
		int32_t Index; // 0x1E0(0x4)
		int32_t Count; // 0x1E4(0x4)
		float Ratio; // 0x1E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1EC(0x4) UNKNOWN PROPERTY
		FControlRigExecuteContext Completed; // 0x1F0(0x1B0)
	};


	// Struct ControlRig.RigUnit_CollectionAddItem
	// Inherited from FRigUnit_CollectionBase -> FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase	
	{
	public:
		FRigElementKeyCollection Collection; // 0x8(0x10)
		FRigElementKey Item; // 0x18(0x8)
		FRigElementKeyCollection Result; // 0x20(0x10)
	};


	// Struct ControlRig.RigUnit_DynamicHierarchyBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit_DynamicHierarchyBase : public FRigUnit	
	{
	public:
	};


	// Struct ControlRig.RigUnit_DynamicHierarchyBaseMutable
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable	
	{
	public:
	};


	// Struct ControlRig.RigUnit_AddParent
	// Inherited from FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x1D0 - 0x1C0)
	struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		FRigElementKey Parent; // 0x1C8(0x8)
	};


	// Struct ControlRig.RigUnit_SetDefaultParent
	// Inherited from FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x1D0 - 0x1C0)
	struct FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		FRigElementKey Parent; // 0x1C8(0x8)
	};


	// Struct ControlRig.RigUnit_SwitchParent
	// Inherited from FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable	
	{
	public:
		ERigSwitchParentMode Mode; // 0x1C0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1C1(0x3) UNKNOWN PROPERTY
		FRigElementKey Child; // 0x1C4(0x8)
		FRigElementKey Parent; // 0x1CC(0x8)
		bool bMaintainGlobal; // 0x1D4(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x1D5(0xB) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyGetParentWeights
	// Inherited from FRigUnit_DynamicHierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase	
	{
	public:
		FRigElementKey Child; // 0x8(0x8)
		TArray<FRigElementWeight> Weights; // 0x10(0x10)
		FRigElementKeyCollection Parents; // 0x20(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyGetParentWeightsArray
	// Inherited from FRigUnit_DynamicHierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase	
	{
	public:
		FRigElementKey Child; // 0x8(0x8)
		TArray<FRigElementWeight> Weights; // 0x10(0x10)
		TArray<FRigElementKey> Parents; // 0x20(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchySetParentWeights
	// Inherited from FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		TArray<FRigElementWeight> Weights; // 0x1C8(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x1D8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyReset
	// Inherited from FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable	
	{
	public:
	};


	// Struct ControlRig.RigUnit_HierarchyImportFromSkeleton
	// Inherited from FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable	
	{
	public:
		FName NameSpace; // 0x1C0(0x4)
		bool bIncludeCurves; // 0x1C4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1C5(0x3) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x1C8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x1D8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyRemoveElement
	// Inherited from FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x1D0 - 0x1C0)
	struct FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		bool bSuccess; // 0x1C8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x1C9(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddElement
	// Inherited from FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable	
	{
	public:
		FRigElementKey Parent; // 0x1C0(0x8)
		FName Name; // 0x1C8(0x4)
		FRigElementKey Item; // 0x1CC(0x8)
		unsigned char UnknownData00_7[0x4]; // 0x1D4(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddBone
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x78 (0x250 - 0x1D8)
	struct FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1D8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x1E0(0x60)
		ERigVMTransformSpace Space; // 0x240(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x241(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddNull
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x78 (0x250 - 0x1D8)
	struct FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1D8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x1E0(0x60)
		ERigVMTransformSpace Space; // 0x240(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x241(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControl_Settings
	// Size: 0x10 (0x10 - 0x0)
	struct FRigUnit_HierarchyAddControl_Settings	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FName DisplayName; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
	// Size: 0x80 (0x80 - 0x0)
	struct FRigUnit_HierarchyAddControl_ShapeSettings	
	{
	public:
		bool bVisible; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName Name; // 0x4(0x4)
		FLinearColor Color; // 0x8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x20(0x60)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
	// Size: 0x20 (0x20 - 0x0)
	struct FRigUnit_HierarchyAddControl_ProxySettings	
	{
	public:
		bool bIsProxy; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FRigElementKey> DrivenControls; // 0x8(0x10)
		ERigControlVisibility ShapeVisibility; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings	
	{
	public:
		FRigControlLimitEnabled Limit; // 0x0(0x2)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float MinValue; // 0x4(0x4)
		float MaxValue; // 0x8(0x4)
		bool bDrawLimits; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
	// Inherited from FRigUnit_HierarchyAddControl_Settings
	// Size: 0xC0 (0xD0 - 0x10)
	struct FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings	
	{
	public:
		ERigControlAxis PrimaryAxis; // 0x10(0x1)
		bool bIsScale; // 0x11(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlFloat_LimitSettings Limits; // 0x14(0x10)
		unsigned char UnknownData01_6[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x30(0x80)
		FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xB0(0x20)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlElement
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x78 (0x250 - 0x1D8)
	struct FRigUnit_HierarchyAddControlElement : public FRigUnit_HierarchyAddElement	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1D8(0x8) UNKNOWN PROPERTY
		FTransform OffsetTransform; // 0x1E0(0x60)
		ERigVMTransformSpace OffsetSpace; // 0x240(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x241(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlFloat
	// Inherited from FRigUnit_HierarchyAddControlElement -> FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xD8 (0x320 - 0x248)
	struct FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement	
	{
	public:
		float InitialValue; // 0x248(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24C(0x4) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlFloat_Settings Settings; // 0x250(0xD0)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FRigUnit_HierarchyAddControlInteger_LimitSettings	
	{
	public:
		FRigControlLimitEnabled Limit; // 0x0(0x2)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		int32_t MinValue; // 0x4(0x4)
		int32_t MaxValue; // 0x8(0x4)
		bool bDrawLimits; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
	// Inherited from FRigUnit_HierarchyAddControl_Settings
	// Size: 0xC0 (0xD0 - 0x10)
	struct FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings	
	{
	public:
		ERigControlAxis PrimaryAxis; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		UEnum* ControlEnum; // 0x18(0x8)
		FRigUnit_HierarchyAddControlInteger_LimitSettings Limits; // 0x20(0x10)
		FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x30(0x80)
		FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xB0(0x20)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlInteger
	// Inherited from FRigUnit_HierarchyAddControlElement -> FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xD8 (0x320 - 0x248)
	struct FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement	
	{
	public:
		int32_t InitialValue; // 0x248(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24C(0x4) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlInteger_Settings Settings; // 0x250(0xD0)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings	
	{
	public:
		FRigControlLimitEnabled LimitX; // 0x0(0x2)
		FRigControlLimitEnabled LimitY; // 0x2(0x2)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector2D MinValue; // 0x8(0x10)
		FVector2D MaxValue; // 0x18(0x10)
		bool bDrawLimits; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
	// Inherited from FRigUnit_HierarchyAddControl_Settings
	// Size: 0xF0 (0x100 - 0x10)
	struct FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings	
	{
	public:
		ERigControlAxis PrimaryAxis; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits; // 0x18(0x30)
		unsigned char UnknownData01_6[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x50(0x80)
		FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xD0(0x20)
		TArray<ERigControlTransformChannel> FilteredChannels; // 0xF0(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlVector2D
	// Inherited from FRigUnit_HierarchyAddControlElement -> FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x118 (0x360 - 0x248)
	struct FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement	
	{
	public:
		FVector2D InitialValue; // 0x248(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x258(0x8) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlVector2D_Settings Settings; // 0x260(0x100)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FRigUnit_HierarchyAddControlVector_LimitSettings	
	{
	public:
		FRigControlLimitEnabled LimitX; // 0x0(0x2)
		FRigControlLimitEnabled LimitY; // 0x2(0x2)
		FRigControlLimitEnabled LimitZ; // 0x4(0x2)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FVector MinValue; // 0x8(0x18)
		FVector MaxValue; // 0x20(0x18)
		bool bDrawLimits; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlVector_Settings
	// Inherited from FRigUnit_HierarchyAddControl_Settings
	// Size: 0x100 (0x110 - 0x10)
	struct FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings	
	{
	public:
		ERigVMTransformSpace InitialSpace; // 0x10(0x1)
		bool bIsPosition; // 0x11(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlVector_LimitSettings Limits; // 0x18(0x40)
		unsigned char UnknownData01_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x60(0x80)
		FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xE0(0x20)
		TArray<ERigControlTransformChannel> FilteredChannels; // 0x100(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlVector
	// Inherited from FRigUnit_HierarchyAddControlElement -> FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x128 (0x370 - 0x248)
	struct FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddControlElement	
	{
	public:
		FVector InitialValue; // 0x248(0x18)
		FRigUnit_HierarchyAddControlVector_Settings Settings; // 0x260(0x110)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FRigUnit_HierarchyAddControlRotator_LimitSettings	
	{
	public:
		FRigControlLimitEnabled LimitPitch; // 0x0(0x2)
		FRigControlLimitEnabled LimitYaw; // 0x2(0x2)
		FRigControlLimitEnabled LimitRoll; // 0x4(0x2)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FRotator MinValue; // 0x8(0x18)
		FRotator MaxValue; // 0x20(0x18)
		bool bDrawLimits; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
	// Inherited from FRigUnit_HierarchyAddControl_Settings
	// Size: 0x100 (0x110 - 0x10)
	struct FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings	
	{
	public:
		ERigVMTransformSpace InitialSpace; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlRotator_LimitSettings Limits; // 0x18(0x40)
		unsigned char UnknownData01_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x60(0x80)
		FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xE0(0x20)
		TArray<ERigControlTransformChannel> FilteredChannels; // 0x100(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlRotator
	// Inherited from FRigUnit_HierarchyAddControlElement -> FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x128 (0x370 - 0x248)
	struct FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement	
	{
	public:
		FRotator InitialValue; // 0x248(0x18)
		FRigUnit_HierarchyAddControlRotator_Settings Settings; // 0x260(0x110)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlTransform_LimitSettings
	// Size: 0xB0 (0xB0 - 0x0)
	struct FRigUnit_HierarchyAddControlTransform_LimitSettings	
	{
	public:
		FRigControlLimitEnabled LimitTranslationX; // 0x0(0x2)
		FRigControlLimitEnabled LimitTranslationY; // 0x2(0x2)
		FRigControlLimitEnabled LimitTranslationZ; // 0x4(0x2)
		FRigControlLimitEnabled LimitPitch; // 0x6(0x2)
		FRigControlLimitEnabled LimitYaw; // 0x8(0x2)
		FRigControlLimitEnabled LimitRoll; // 0xA(0x2)
		FRigControlLimitEnabled LimitScaleX; // 0xC(0x2)
		FRigControlLimitEnabled LimitScaleY; // 0xE(0x2)
		FRigControlLimitEnabled LimitScaleZ; // 0x10(0x2)
		unsigned char UnknownData00_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		FEulerTransform MinValue; // 0x18(0x48)
		FEulerTransform MaxValue; // 0x60(0x48)
		bool bDrawLimits; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
	// Inherited from FRigUnit_HierarchyAddControl_Settings
	// Size: 0x170 (0x180 - 0x10)
	struct FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings	
	{
	public:
		ERigVMTransformSpace InitialSpace; // 0x10(0x1)
		bool bUsePreferredRotationOrder; // 0x11(0x1)
		EEulerRotationOrder PreferredRotationOrder; // 0x12(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlTransform_LimitSettings Limits; // 0x18(0xB0)
		unsigned char UnknownData01_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0xD0(0x80)
		FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0x150(0x20)
		TArray<ERigControlTransformChannel> FilteredChannels; // 0x170(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyAddControlTransform
	// Inherited from FRigUnit_HierarchyAddControlElement -> FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x1E8 (0x430 - 0x248)
	struct FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x248(0x8) UNKNOWN PROPERTY
		FTransform InitialValue; // 0x250(0x60)
		FRigUnit_HierarchyAddControlTransform_Settings Settings; // 0x2B0(0x180)
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings	
	{
	public:
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x8 (0x1E0 - 0x1D8)
	struct FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement	
	{
	public:
		bool InitialValue; // 0x1D8(0x1)
		bool MinimumValue; // 0x1D9(0x1)
		bool MaximumValue; // 0x1DA(0x1)
		FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings LimitsEnabled; // 0x1DB(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x1DC(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelSingleLimitSettings
	// Inherited from FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
	// Size: 0x2 (0x2 - 0x0)
	struct FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings	
	{
	public:
		FRigControlLimitEnabled Enabled; // 0x0(0x2)
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x1F0 - 0x1D8)
	struct FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement	
	{
	public:
		float InitialValue; // 0x1D8(0x4)
		float MinimumValue; // 0x1DC(0x4)
		float MaximumValue; // 0x1E0(0x4)
		FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled; // 0x1E4(0x2)
		unsigned char UnknownData00_7[0xA]; // 0x1E6(0xA) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelScaleFloat
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x1F0 - 0x1D8)
	struct FRigUnit_HierarchyAddAnimationChannelScaleFloat : public FRigUnit_HierarchyAddElement	
	{
	public:
		float InitialValue; // 0x1D8(0x4)
		float MinimumValue; // 0x1DC(0x4)
		float MaximumValue; // 0x1E0(0x4)
		FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled; // 0x1E4(0x2)
		unsigned char UnknownData00_7[0xA]; // 0x1E6(0xA) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x1F0 - 0x1D8)
	struct FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement	
	{
	public:
		int32_t InitialValue; // 0x1D8(0x4)
		int32_t MinimumValue; // 0x1DC(0x4)
		int32_t MaximumValue; // 0x1E0(0x4)
		FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled; // 0x1E4(0x2)
		unsigned char UnknownData00_6[0x2]; // 0x1E6(0x2) UNKNOWN PROPERTY
		UEnum* ControlEnum; // 0x1E8(0x8)
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannel2DLimitSettings
	// Inherited from FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
	// Size: 0x4 (0x4 - 0x0)
	struct FRigUnit_HierarchyAddAnimationChannel2DLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings	
	{
	public:
		FRigControlLimitEnabled X; // 0x0(0x2)
		FRigControlLimitEnabled Y; // 0x2(0x2)
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x210 - 0x1D8)
	struct FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement	
	{
	public:
		FVector2D InitialValue; // 0x1D8(0x10)
		FVector2D MinimumValue; // 0x1E8(0x10)
		FVector2D MaximumValue; // 0x1F8(0x10)
		FRigUnit_HierarchyAddAnimationChannel2DLimitSettings LimitsEnabled; // 0x208(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x20C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelVectorLimitSettings
	// Inherited from FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
	// Size: 0x6 (0x6 - 0x0)
	struct FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings	
	{
	public:
		FRigControlLimitEnabled X; // 0x0(0x2)
		FRigControlLimitEnabled Y; // 0x2(0x2)
		FRigControlLimitEnabled Z; // 0x4(0x2)
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x58 (0x230 - 0x1D8)
	struct FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement	
	{
	public:
		FVector InitialValue; // 0x1D8(0x18)
		FVector MinimumValue; // 0x1F0(0x18)
		FVector MaximumValue; // 0x208(0x18)
		FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings LimitsEnabled; // 0x220(0x6)
		unsigned char UnknownData00_7[0xA]; // 0x226(0xA) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelScaleVector
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x58 (0x230 - 0x1D8)
	struct FRigUnit_HierarchyAddAnimationChannelScaleVector : public FRigUnit_HierarchyAddElement	
	{
	public:
		FVector InitialValue; // 0x1D8(0x18)
		FVector MinimumValue; // 0x1F0(0x18)
		FVector MaximumValue; // 0x208(0x18)
		FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings LimitsEnabled; // 0x220(0x6)
		unsigned char UnknownData00_7[0xA]; // 0x226(0xA) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelRotatorLimitSettings
	// Inherited from FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
	// Size: 0x6 (0x6 - 0x0)
	struct FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings	
	{
	public:
		FRigControlLimitEnabled pitch; // 0x0(0x2)
		FRigControlLimitEnabled Yaw; // 0x2(0x2)
		FRigControlLimitEnabled Roll; // 0x4(0x2)
	};


	// Struct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x58 (0x230 - 0x1D8)
	struct FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement	
	{
	public:
		FRotator InitialValue; // 0x1D8(0x18)
		FRotator MinimumValue; // 0x1F0(0x18)
		FRotator MaximumValue; // 0x208(0x18)
		FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings LimitsEnabled; // 0x220(0x6)
		unsigned char UnknownData00_7[0xA]; // 0x226(0xA) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyGetShapeSettings
	// Inherited from FRigUnit_DynamicHierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		FRigUnit_HierarchyAddControl_ShapeSettings Settings; // 0x10(0x80)
	};


	// Struct ControlRig.RigUnit_HierarchySetShapeSettings
	// Inherited from FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_HierarchySetShapeSettings : public FRigUnit_DynamicHierarchyBaseMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControl_ShapeSettings Settings; // 0x1D0(0x80)
	};


	// Struct ControlRig.RigUnit_HierarchyAddSocket
	// Inherited from FRigUnit_HierarchyAddElement -> FRigUnit_DynamicHierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x98 (0x270 - 0x1D8)
	struct FRigUnit_HierarchyAddSocket : public FRigUnit_HierarchyAddElement	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1D8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x1E0(0x60)
		ERigVMTransformSpace Space; // 0x240(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x241(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x244(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x254(0x4) UNKNOWN PROPERTY
		FString Description; // 0x258(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchyBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit_HierarchyBase : public FRigUnit	
	{
	public:
	};


	// Struct ControlRig.RigUnit_HierarchyBaseMutable
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable	
	{
	public:
	};


	// Struct ControlRig.RigUnit_HierarchyGetParent
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase	
	{
	public:
		FRigElementKey Child; // 0x8(0x8)
		bool bDefaultParent; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FRigElementKey Parent; // 0x14(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FCachedRigElement CachedChild; // 0x20(0x18)
		FCachedRigElement CachedParent; // 0x38(0x18)
	};


	// Struct ControlRig.RigUnit_HierarchyGetParents
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase	
	{
	public:
		FRigElementKey Child; // 0x8(0x8)
		bool bIncludeChild; // 0x10(0x1)
		bool bReverse; // 0x11(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		FRigElementKeyCollection Parents; // 0x18(0x10)
		FCachedRigElement CachedChild; // 0x28(0x18)
		FRigElementKeyCollection CachedParents; // 0x40(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyGetParentsItemArray
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase	
	{
	public:
		FRigElementKey Child; // 0x8(0x8)
		bool bIncludeChild; // 0x10(0x1)
		bool bReverse; // 0x11(0x1)
		bool bDefaultParent; // 0x12(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
		TArray<FRigElementKey> Parents; // 0x18(0x10)
		FCachedRigElement CachedChild; // 0x28(0x18)
		FRigElementKeyCollection CachedParents; // 0x40(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyGetChildren
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase	
	{
	public:
		FRigElementKey Parent; // 0x8(0x8)
		bool bIncludeParent; // 0x10(0x1)
		bool bRecursive; // 0x11(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		FRigElementKeyCollection Children; // 0x18(0x10)
		FCachedRigElement CachedParent; // 0x28(0x18)
		FRigElementKeyCollection CachedChildren; // 0x40(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyGetSiblings
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		bool bIncludeItem; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FRigElementKeyCollection Siblings; // 0x18(0x10)
		FCachedRigElement CachedItem; // 0x28(0x18)
		FRigElementKeyCollection CachedSiblings; // 0x40(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		bool bIncludeItem; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TArray<FRigElementKey> Siblings; // 0x18(0x10)
		FCachedRigElement CachedItem; // 0x28(0x18)
		FRigElementKeyCollection CachedSiblings; // 0x40(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyGetChainItemArray
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigUnit_HierarchyGetChainItemArray : public FRigUnit_HierarchyBase	
	{
	public:
		FRigElementKey Start; // 0x8(0x8)
		FRigElementKey End; // 0x10(0x8)
		bool bIncludeStart; // 0x18(0x1)
		bool bIncludeEnd; // 0x19(0x1)
		bool bReverse; // 0x1A(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
		TArray<FRigElementKey> Chain; // 0x20(0x10)
		FCachedRigElement CachedStart; // 0x30(0x18)
		FCachedRigElement CachedEnd; // 0x48(0x18)
		FRigElementKeyCollection CachedChain; // 0x60(0x10)
	};


	// Struct ControlRig.RigUnit_HierarchyGetPose
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase	
	{
	public:
		bool Initial; // 0x8(0x1)
		ERigElementType ElementType; // 0x9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		FRigElementKeyCollection ItemsToGet; // 0x10(0x10)
		FRigPose Pose; // 0x20(0x70)
	};


	// Struct ControlRig.RigUnit_HierarchyGetPoseItemArray
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase	
	{
	public:
		bool Initial; // 0x8(0x1)
		ERigElementType ElementType; // 0x9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		TArray<FRigElementKey> ItemsToGet; // 0x10(0x10)
		FRigPose Pose; // 0x20(0x70)
	};


	// Struct ControlRig.RigUnit_HierarchySetPose
	// Inherited from FRigUnit_HierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable	
	{
	public:
		FRigPose Pose; // 0x1C0(0x70)
		ERigElementType ElementType; // 0x230(0x1)
		ERigVMTransformSpace Space; // 0x231(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x232(0x6) UNKNOWN PROPERTY
		FRigElementKeyCollection ItemsToSet; // 0x238(0x10)
		float Weight; // 0x248(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HierarchySetPoseItemArray
	// Inherited from FRigUnit_HierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable	
	{
	public:
		FRigPose Pose; // 0x1C0(0x70)
		ERigElementType ElementType; // 0x230(0x1)
		ERigVMTransformSpace Space; // 0x231(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x232(0x6) UNKNOWN PROPERTY
		TArray<FRigElementKey> ItemsToSet; // 0x238(0x10)
		float Weight; // 0x248(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_PoseIsEmpty
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x78 (0x80 - 0x8)
	struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase	
	{
	public:
		FRigPose Pose; // 0x8(0x70)
		bool IsEmpty; // 0x78(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_PoseGetItems
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase	
	{
	public:
		FRigPose Pose; // 0x8(0x70)
		ERigElementType ElementType; // 0x78(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		FRigElementKeyCollection Items; // 0x80(0x10)
	};


	// Struct ControlRig.RigUnit_PoseGetItemsItemArray
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase	
	{
	public:
		FRigPose Pose; // 0x8(0x70)
		ERigElementType ElementType; // 0x78(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x80(0x10)
	};


	// Struct ControlRig.RigUnit_PoseGetDelta
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x120 (0x128 - 0x8)
	struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase	
	{
	public:
		FRigPose PoseA; // 0x8(0x70)
		FRigPose PoseB; // 0x78(0x70)
		float PositionThreshold; // 0xE8(0x4)
		float RotationThreshold; // 0xEC(0x4)
		float ScaleThreshold; // 0xF0(0x4)
		float CurveThreshold; // 0xF4(0x4)
		ERigElementType ElementType; // 0xF8(0x1)
		ERigVMTransformSpace Space; // 0xF9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xFA(0x6) UNKNOWN PROPERTY
		FRigElementKeyCollection ItemsToCompare; // 0x100(0x10)
		bool PosesAreEqual; // 0x110(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FRigElementKeyCollection ItemsWithDelta; // 0x118(0x10)
	};


	// Struct ControlRig.RigUnit_PoseGetTransform
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0xF8 (0x100 - 0x8)
	struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase	
	{
	public:
		FRigPose Pose; // 0x8(0x70)
		FRigElementKey Item; // 0x78(0x8)
		ERigVMTransformSpace Space; // 0x80(0x1)
		bool Valid; // 0x81(0x1)
		unsigned char UnknownData00_6[0xE]; // 0x82(0xE) UNKNOWN PROPERTY
		FTransform Transform; // 0x90(0x60)
		float CurveValue; // 0xF0(0x4)
		int32_t CachedPoseElementIndex; // 0xF4(0x4)
		int32_t CachedPoseHash; // 0xF8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_PoseGetTransformArray
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase	
	{
	public:
		FRigPose Pose; // 0x8(0x70)
		ERigVMTransformSpace Space; // 0x78(0x1)
		bool Valid; // 0x79(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x7A(0x6) UNKNOWN PROPERTY
		TArray<FTransform> Transforms; // 0x80(0x10)
	};


	// Struct ControlRig.RigUnit_PoseGetCurve
	// Inherited from FRigUnit_HierarchyBase -> FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase	
	{
	public:
		FRigPose Pose; // 0x8(0x70)
		FName Curve; // 0x78(0x4)
		bool Valid; // 0x7C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		float CurveValue; // 0x80(0x4)
		int32_t CachedPoseElementIndex; // 0x84(0x4)
		int32_t CachedPoseHash; // 0x88(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_PoseLoop
	// Inherited from FRigUnit_HierarchyBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x300 (0x4C0 - 0x1C0)
	struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable	
	{
	public:
		FName BlockToRun; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FRigPose Pose; // 0x1C8(0x70)
		FRigElementKey Item; // 0x238(0x8)
		FTransform GlobalTransform; // 0x240(0x60)
		FTransform LocalTransform; // 0x2A0(0x60)
		float CurveValue; // 0x300(0x4)
		int32_t Index; // 0x304(0x4)
		int32_t Count; // 0x308(0x4)
		float Ratio; // 0x30C(0x4)
		FControlRigExecuteContext Completed; // 0x310(0x1B0)
	};


	// Struct ControlRig.RigUnit_InteractionExecution
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x1B8 (0x1C0 - 0x8)
	struct FRigUnit_InteractionExecution : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
	};


	// Struct ControlRig.RigUnit_InverseExecution
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x1B8 (0x1C0 - 0x8)
	struct FRigUnit_InverseExecution : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
	};


	// Struct ControlRig.RigUnit_IsInteracting
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_IsInteracting : public FRigUnit	
	{
	public:
		bool bIsInteracting; // 0x8(0x1)
		bool bIsTranslating; // 0x9(0x1)
		bool bIsRotating; // 0xA(0x1)
		bool bIsScaling; // 0xB(0x1)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x10(0x10)
	};


	// Struct ControlRig.RigUnit_ItemBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit_ItemBase : public FRigUnit	
	{
	public:
	};


	// Struct ControlRig.RigUnit_ItemBaseMutable
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FRigUnit_ItemBaseMutable : public FRigUnitMutable	
	{
	public:
	};


	// Struct ControlRig.RigUnit_ItemExists
	// Inherited from FRigUnit_ItemBase -> FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_ItemExists : public FRigUnit_ItemBase	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		bool Exists; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x18(0x18)
	};


	// Struct ControlRig.RigUnit_ItemReplace
	// Inherited from FRigUnit_ItemBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_ItemReplace : public FRigUnit_ItemBase	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		FName Old; // 0x10(0x4)
		FName New; // 0x14(0x4)
		FRigElementKey Result; // 0x18(0x8)
	};


	// Struct ControlRig.RigUnit_ItemEquals
	// Inherited from FRigUnit_ItemBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_ItemEquals : public FRigUnit_ItemBase	
	{
	public:
		FRigElementKey A; // 0x8(0x8)
		FRigElementKey B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ItemNotEquals
	// Inherited from FRigUnit_ItemBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase	
	{
	public:
		FRigElementKey A; // 0x8(0x8)
		FRigElementKey B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ItemTypeEquals
	// Inherited from FRigUnit_ItemBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase	
	{
	public:
		FRigElementKey A; // 0x8(0x8)
		FRigElementKey B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ItemTypeNotEquals
	// Inherited from FRigUnit_ItemBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase	
	{
	public:
		FRigElementKey A; // 0x8(0x8)
		FRigElementKey B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ItemToName
	// Inherited from FRigUnit_ItemBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigUnit_ItemToName : public FRigUnit_ItemBase	
	{
	public:
		FRigElementKey Value; // 0x8(0x8)
		FName Result; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_PrepareForExecution
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x1B8 (0x1C0 - 0x8)
	struct FRigUnit_PrepareForExecution : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
	};


	// Struct ControlRig.RigUnit_RigModulesBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit_RigModulesBase : public FRigUnit	
	{
	public:
	};


	// Struct ControlRig.RigUnit_RigModulesBaseMutable
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FRigUnit_RigModulesBaseMutable : public FRigUnitMutable	
	{
	public:
	};


	// Struct ControlRig.RigUnit_ResolveConnector
	// Inherited from FRigUnit_RigModulesBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_ResolveConnector : public FRigUnit_RigModulesBase	
	{
	public:
		FRigElementKey Connector; // 0x8(0x8)
		bool SkipSocket; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FRigElementKey Result; // 0x14(0x8)
		bool bIsConnected; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetCurrentNameSpace
	// Inherited from FRigUnit_RigModulesBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigUnit_GetCurrentNameSpace : public FRigUnit_RigModulesBase	
	{
	public:
		FString NameSpace; // 0x8(0x10)
	};


	// Struct ControlRig.RigUnit_GetItemShortName
	// Inherited from FRigUnit_RigModulesBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigUnit_GetItemShortName : public FRigUnit_RigModulesBase	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		FName ShortName; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetItemNameSpace
	// Inherited from FRigUnit_RigModulesBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_GetItemNameSpace : public FRigUnit_RigModulesBase	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		bool HasNameSpace; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FString NameSpace; // 0x18(0x10)
	};


	// Struct ControlRig.RigUnit_IsItemInCurrentNameSpace
	// Inherited from FRigUnit_RigModulesBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigUnit_IsItemInCurrentNameSpace : public FRigUnit_RigModulesBase	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetItemsInNameSpace
	// Inherited from FRigUnit_RigModulesBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_GetItemsInNameSpace : public FRigUnit_RigModulesBase	
	{
	public:
		ERigElementType TypeToSearch; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x10(0x10)
	};


	// Struct ControlRig.RigUnit_SequenceExecution
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x878 (0x880 - 0x8)
	struct FRigUnit_SequenceExecution : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
		FControlRigExecuteContext A; // 0x1C0(0x1B0)
		FControlRigExecuteContext B; // 0x370(0x1B0)
		FControlRigExecuteContext C; // 0x520(0x1B0)
		FControlRigExecuteContext D; // 0x6D0(0x1B0)
	};


	// Struct ControlRig.RigUnit_AddBoneTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_AddBoneTransform : public FRigUnitMutable	
	{
	public:
		FName bone; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
		float Weight; // 0x230(0x4)
		bool bPostMultiply; // 0x234(0x1)
		bool bPropagateToChildren; // 0x235(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x236(0x2) UNKNOWN PROPERTY
		FCachedRigElement CachedBone; // 0x238(0x18)
	};


	// Struct ControlRig.RigUnit_Item
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigUnit_Item : public FRigUnit	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
	};


	// Struct ControlRig.RigUnit_ItemArray
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigUnit_ItemArray : public FRigUnit	
	{
	public:
		TArray<FRigElementKey> Items; // 0x8(0x10)
	};


	// Struct ControlRig.RigUnit_BoneName
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigUnit_BoneName : public FRigUnit	
	{
	public:
		FName bone; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SpaceName
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigUnit_SpaceName : public FRigUnit	
	{
	public:
		FName Space; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ControlName
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigUnit_ControlName : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetAnimationChannelBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_GetAnimationChannelBase : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		FName Channel; // 0xC(0x4)
		bool bInitial; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FRigElementKey CachedChannelKey; // 0x14(0x8)
		int32_t CachedChannelHash; // 0x1C(0x4)
	};


	// Struct ControlRig.RigUnit_GetBoolAnimationChannel
	// Inherited from FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x8 (0x28 - 0x20)
	struct FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase	
	{
	public:
		bool Value; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetFloatAnimationChannel
	// Inherited from FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x8 (0x28 - 0x20)
	struct FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase	
	{
	public:
		float Value; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetIntAnimationChannel
	// Inherited from FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x8 (0x28 - 0x20)
	struct FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase	
	{
	public:
		int32_t Value; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetVector2DAnimationChannel
	// Inherited from FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x30 - 0x20)
	struct FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase	
	{
	public:
		FVector2D Value; // 0x20(0x10)
	};


	// Struct ControlRig.RigUnit_GetVectorAnimationChannel
	// Inherited from FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x38 - 0x20)
	struct FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase	
	{
	public:
		FVector Value; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_GetRotatorAnimationChannel
	// Inherited from FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x38 - 0x20)
	struct FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase	
	{
	public:
		FRotator Value; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_GetTransformAnimationChannel
	// Inherited from FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x60 (0x80 - 0x20)
	struct FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase	
	{
	public:
		FTransform Value; // 0x20(0x60)
	};


	// Struct ControlRig.RigUnit_SetAnimationChannelBase
	// Inherited from FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x1B0 (0x1D0 - 0x20)
	struct FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase	
	{
	public:
		FControlRigExecuteContext ExecuteContext; // 0x20(0x1B0)
	};


	// Struct ControlRig.RigUnit_SetBoolAnimationChannel
	// Inherited from FRigUnit_SetAnimationChannelBase -> FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x1E0 - 0x1D0)
	struct FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase	
	{
	public:
		bool Value; // 0x1D0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x1D1(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetFloatAnimationChannel
	// Inherited from FRigUnit_SetAnimationChannelBase -> FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x1E0 - 0x1D0)
	struct FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase	
	{
	public:
		float Value; // 0x1D0(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x1D4(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetIntAnimationChannel
	// Inherited from FRigUnit_SetAnimationChannelBase -> FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x1E0 - 0x1D0)
	struct FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase	
	{
	public:
		int32_t Value; // 0x1D0(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x1D4(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetVector2DAnimationChannel
	// Inherited from FRigUnit_SetAnimationChannelBase -> FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x1E0 - 0x1D0)
	struct FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase	
	{
	public:
		FVector2D Value; // 0x1D0(0x10)
	};


	// Struct ControlRig.RigUnit_SetVectorAnimationChannel
	// Inherited from FRigUnit_SetAnimationChannelBase -> FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1F0 - 0x1D0)
	struct FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase	
	{
	public:
		FVector Value; // 0x1D0(0x18)
		unsigned char UnknownData00_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetRotatorAnimationChannel
	// Inherited from FRigUnit_SetAnimationChannelBase -> FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1F0 - 0x1D0)
	struct FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase	
	{
	public:
		FRotator Value; // 0x1D0(0x18)
		unsigned char UnknownData00_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetTransformAnimationChannel
	// Inherited from FRigUnit_SetAnimationChannelBase -> FRigUnit_GetAnimationChannelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x60 (0x230 - 0x1D0)
	struct FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase	
	{
	public:
		FTransform Value; // 0x1D0(0x60)
	};


	// Struct ControlRig.RigUnit_CurveExists
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_CurveExists : public FRigUnit	
	{
	public:
		FName Curve; // 0x8(0x4)
		bool Exists; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedCurveIndex; // 0x10(0x18)
	};


	// Struct ControlRig.RigUnit_GetBoneTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_GetBoneTransform : public FRigUnit	
	{
	public:
		FName bone; // 0x8(0x4)
		ERigVMTransformSpace Space; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FCachedRigElement CachedBone; // 0x70(0x18)
		bool bFirstUpdate; // 0x88(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetControlInitialTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_GetControlInitialTransform : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		ERigVMTransformSpace Space; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FCachedRigElement CachedControlIndex; // 0x70(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetControlBool
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_GetControlBool : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		bool BoolValue; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x10(0x18)
	};


	// Struct ControlRig.RigUnit_GetControlFloat
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_GetControlFloat : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		float FloatValue; // 0xC(0x4)
		float Minimum; // 0x10(0x4)
		float Maximum; // 0x14(0x4)
		FCachedRigElement CachedControlIndex; // 0x18(0x18)
	};


	// Struct ControlRig.RigUnit_GetControlInteger
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_GetControlInteger : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		int32_t IntegerValue; // 0xC(0x4)
		int32_t Minimum; // 0x10(0x4)
		int32_t Maximum; // 0x14(0x4)
		FCachedRigElement CachedControlIndex; // 0x18(0x18)
	};


	// Struct ControlRig.RigUnit_GetControlVector2D
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x50 (0x58 - 0x8)
	struct FRigUnit_GetControlVector2D : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector2D Vector; // 0x10(0x10)
		FVector2D Minimum; // 0x20(0x10)
		FVector2D Maximum; // 0x30(0x10)
		FCachedRigElement CachedControlIndex; // 0x40(0x18)
	};


	// Struct ControlRig.RigUnit_GetControlVector
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigUnit_GetControlVector : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		ERigVMTransformSpace Space; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FVector Vector; // 0x10(0x18)
		FVector Minimum; // 0x28(0x18)
		FVector Maximum; // 0x40(0x18)
		FCachedRigElement CachedControlIndex; // 0x58(0x18)
	};


	// Struct ControlRig.RigUnit_GetControlRotator
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigUnit_GetControlRotator : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		ERigVMTransformSpace Space; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FRotator Rotator; // 0x10(0x18)
		FRotator Minimum; // 0x28(0x18)
		FRotator Maximum; // 0x40(0x18)
		FCachedRigElement CachedControlIndex; // 0x58(0x18)
	};


	// Struct ControlRig.RigUnit_GetControlTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x148 (0x150 - 0x8)
	struct FRigUnit_GetControlTransform : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		ERigVMTransformSpace Space; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FTransform Minimum; // 0x70(0x60)
		FTransform Maximum; // 0xD0(0x60)
		FCachedRigElement CachedControlIndex; // 0x130(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x148(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetCurveValue
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_GetCurveValue : public FRigUnit	
	{
	public:
		FName Curve; // 0x8(0x4)
		bool Valid; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float Value; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FCachedRigElement CachedCurveIndex; // 0x18(0x18)
	};


	// Struct ControlRig.RigUnit_GetInitialBoneTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_GetInitialBoneTransform : public FRigUnit	
	{
	public:
		FName bone; // 0x8(0x4)
		ERigVMTransformSpace Space; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FCachedRigElement CachedBone; // 0x70(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetRelativeBoneTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigUnit_GetRelativeBoneTransform : public FRigUnit	
	{
	public:
		FName bone; // 0x8(0x4)
		FName Space; // 0xC(0x4)
		FTransform Transform; // 0x10(0x60)
		FCachedRigElement CachedBone; // 0x70(0x18)
		FCachedRigElement CachedSpace; // 0x88(0x18)
	};


	// Struct ControlRig.RigUnit_GetRelativeTransformForItem
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigUnit_GetRelativeTransformForItem : public FRigUnit	
	{
	public:
		FRigElementKey Child; // 0x8(0x8)
		bool bChildInitial; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FRigElementKey Parent; // 0x14(0x8)
		bool bParentInitial; // 0x1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		FTransform RelativeTransform; // 0x20(0x60)
		FCachedRigElement CachedChild; // 0x80(0x18)
		FCachedRigElement CachedParent; // 0x98(0x18)
	};


	// Struct ControlRig.RigUnit_GetSpaceTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_GetSpaceTransform : public FRigUnit	
	{
	public:
		FName Space; // 0x8(0x4)
		ERigVMTransformSpace SpaceType; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FCachedRigElement CachedSpaceIndex; // 0x70(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigUnit_GetTransform : public FRigUnit	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		ERigVMTransformSpace Space; // 0x10(0x1)
		bool bInitial; // 0x11(0x1)
		unsigned char UnknownData00_6[0xE]; // 0x12(0xE) UNKNOWN PROPERTY
		FTransform Transform; // 0x20(0x60)
		FCachedRigElement CachedIndex; // 0x80(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetTransformArray
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_GetTransformArray : public FRigUnit	
	{
	public:
		FRigElementKeyCollection Items; // 0x8(0x10)
		ERigVMTransformSpace Space; // 0x18(0x1)
		bool bInitial; // 0x19(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
		TArray<FTransform> Transforms; // 0x20(0x10)
		TArray<FCachedRigElement> CachedIndex; // 0x30(0x10)
	};


	// Struct ControlRig.RigUnit_GetTransformItemArray
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_GetTransformItemArray : public FRigUnit	
	{
	public:
		TArray<FRigElementKey> Items; // 0x8(0x10)
		ERigVMTransformSpace Space; // 0x18(0x1)
		bool bInitial; // 0x19(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
		TArray<FTransform> Transforms; // 0x20(0x10)
		TArray<FCachedRigElement> CachedIndex; // 0x30(0x10)
	};


	// Struct ControlRig.RigDispatch_MetadataBase
	// Inherited from FRigDispatchFactory -> FRigVMDispatchFactory
	// Size: 0x30 (0xA0 - 0x70)
	struct FRigDispatch_MetadataBase : public FRigDispatchFactory	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x70(0x30) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigDispatch_GetMetadata
	// Inherited from FRigDispatch_MetadataBase -> FRigDispatchFactory -> FRigVMDispatchFactory
	// Size: 0x0 (0xA0 - 0xA0)
	struct FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase	
	{
	public:
	};


	// Struct ControlRig.RigDispatch_SetMetadata
	// Inherited from FRigDispatch_MetadataBase -> FRigDispatchFactory -> FRigVMDispatchFactory
	// Size: 0x0 (0xA0 - 0xA0)
	struct FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase	
	{
	public:
	};


	// Struct ControlRig.RigUnit_RemoveMetadata
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_RemoveMetadata : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		FName Name; // 0x1C8(0x4)
		ERigMetaDataNameSpace NameSpace; // 0x1CC(0x1)
		bool Removed; // 0x1CD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1CE(0x2) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x1D0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_RemoveAllMetadata
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_RemoveAllMetadata : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		ERigMetaDataNameSpace NameSpace; // 0x1C8(0x1)
		bool Removed; // 0x1C9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1CA(0x6) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x1D0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HasMetadata
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_HasMetadata : public FRigUnit	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		FName Name; // 0x10(0x4)
		ERigMetadataType Type; // 0x14(0x1)
		ERigMetaDataNameSpace NameSpace; // 0x15(0x1)
		bool Found; // 0x16(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x17(0x1) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x18(0x18)
	};


	// Struct ControlRig.RigUnit_FindItemsWithMetadata
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_FindItemsWithMetadata : public FRigUnit	
	{
	public:
		FName Name; // 0x8(0x4)
		ERigMetadataType Type; // 0xC(0x1)
		ERigMetaDataNameSpace NameSpace; // 0xD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x10(0x10)
	};


	// Struct ControlRig.RigUnit_GetMetadataTags
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_GetMetadataTags : public FRigUnit	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		TArray<FName> Tags; // 0x10(0x10)
		FCachedRigElement CachedIndex; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_SetMetadataTag
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetMetadataTag : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		FName Tag; // 0x1C8(0x4)
		ERigMetaDataNameSpace NameSpace; // 0x1CC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1CD(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x1D0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetMetadataTagArray
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x40 (0x200 - 0x1C0)
	struct FRigUnit_SetMetadataTagArray : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		TArray<FName> Tags; // 0x1C8(0x10)
		ERigMetaDataNameSpace NameSpace; // 0x1D8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1D9(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x1E0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1F8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_RemoveMetadataTag
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_RemoveMetadataTag : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		FName Tag; // 0x1C8(0x4)
		ERigMetaDataNameSpace NameSpace; // 0x1CC(0x1)
		bool Removed; // 0x1CD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1CE(0x2) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x1D0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_HasMetadataTag
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_HasMetadataTag : public FRigUnit	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		FName Tag; // 0x10(0x4)
		ERigMetaDataNameSpace NameSpace; // 0x14(0x1)
		bool Found; // 0x15(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x18(0x18)
	};


	// Struct ControlRig.RigUnit_HasMetadataTagArray
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_HasMetadataTagArray : public FRigUnit	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		TArray<FName> Tags; // 0x10(0x10)
		ERigMetaDataNameSpace NameSpace; // 0x20(0x1)
		bool Found; // 0x21(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x28(0x18)
	};


	// Struct ControlRig.RigUnit_FindItemsWithMetadataTag
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_FindItemsWithMetadataTag : public FRigUnit	
	{
	public:
		FName Tag; // 0x8(0x4)
		ERigMetaDataNameSpace NameSpace; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x10(0x10)
	};


	// Struct ControlRig.RigUnit_FindItemsWithMetadataTagArray
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit	
	{
	public:
		TArray<FName> Tags; // 0x8(0x10)
		ERigMetaDataNameSpace NameSpace; // 0x18(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		TArray<FRigElementKey> Items; // 0x20(0x10)
	};


	// Struct ControlRig.RigUnit_FilterItemsByMetadataTags
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_FilterItemsByMetadataTags : public FRigUnit	
	{
	public:
		TArray<FRigElementKey> Items; // 0x8(0x10)
		TArray<FName> Tags; // 0x18(0x10)
		ERigMetaDataNameSpace NameSpace; // 0x28(0x1)
		bool Inclusive; // 0x29(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
		TArray<FRigElementKey> Result; // 0x30(0x10)
		TArray<FCachedRigElement> CachedIndices; // 0x40(0x10)
	};


	// Struct ControlRig.RigDispatch_GetModuleMetadata
	// Inherited from FRigDispatch_GetMetadata -> FRigDispatch_MetadataBase -> FRigDispatchFactory -> FRigVMDispatchFactory
	// Size: 0x0 (0xA0 - 0xA0)
	struct FRigDispatch_GetModuleMetadata : public FRigDispatch_GetMetadata	
	{
	public:
	};


	// Struct ControlRig.RigDispatch_SetModuleMetadata
	// Inherited from FRigDispatch_SetMetadata -> FRigDispatch_MetadataBase -> FRigDispatchFactory -> FRigVMDispatchFactory
	// Size: 0x0 (0xA0 - 0xA0)
	struct FRigDispatch_SetModuleMetadata : public FRigDispatch_SetMetadata	
	{
	public:
	};


	// Struct ControlRig.RigUnit_OffsetTransformForItem
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FTransform OffsetTransform; // 0x1D0(0x60)
		float Weight; // 0x230(0x4)
		bool bPropagateToChildren; // 0x234(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x235(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x238(0x18)
	};


	// Struct ControlRig.RigUnit_ParentSwitchConstraint
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x190 (0x350 - 0x1C0)
	struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable	
	{
	public:
		FRigElementKey Subject; // 0x1C0(0x8)
		int32_t ParentIndex; // 0x1C8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FRigElementKeyCollection Parents; // 0x1D0(0x10)
		FTransform InitialGlobalTransform; // 0x1E0(0x60)
		float Weight; // 0x240(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x244(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x250(0x60)
		bool Switched; // 0x2B0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedSubject; // 0x2B8(0x18)
		FCachedRigElement CachedParent; // 0x2D0(0x18)
		unsigned char UnknownData03_6[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY
		FTransform RelativeOffset; // 0x2F0(0x60)
	};


	// Struct ControlRig.RigUnit_ParentSwitchConstraintArray
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x190 (0x350 - 0x1C0)
	struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable	
	{
	public:
		FRigElementKey Subject; // 0x1C0(0x8)
		int32_t ParentIndex; // 0x1C8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray<FRigElementKey> Parents; // 0x1D0(0x10)
		FTransform InitialGlobalTransform; // 0x1E0(0x60)
		float Weight; // 0x240(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x244(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x250(0x60)
		bool Switched; // 0x2B0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedSubject; // 0x2B8(0x18)
		FCachedRigElement CachedParent; // 0x2D0(0x18)
		unsigned char UnknownData03_6[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY
		FTransform RelativeOffset; // 0x2F0(0x60)
	};


	// Struct ControlRig.RigUnit_ProjectTransformToNewParent
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xD8 (0xE0 - 0x8)
	struct FRigUnit_ProjectTransformToNewParent : public FRigUnit	
	{
	public:
		FRigElementKey Child; // 0x8(0x8)
		bool bChildInitial; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FRigElementKey OldParent; // 0x14(0x8)
		bool bOldParentInitial; // 0x1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		FRigElementKey NewParent; // 0x20(0x8)
		bool bNewParentInitial; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FTransform Transform; // 0x30(0x60)
		FCachedRigElement CachedChild; // 0x90(0x18)
		FCachedRigElement CachedOldParent; // 0xA8(0x18)
		FCachedRigElement CachedNewParent; // 0xC0(0x18)
		unsigned char UnknownData03_7[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_PropagateTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_PropagateTransform : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		bool bRecomputeGlobal; // 0x1C8(0x1)
		bool bApplyToChildren; // 0x1C9(0x1)
		bool bRecursive; // 0x1CA(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x1CB(0x5) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x1D0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SendEvent
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_SendEvent : public FRigUnitMutable	
	{
	public:
		ERigEvent Event; // 0x1C0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1C1(0x3) UNKNOWN PROPERTY
		FRigElementKey Item; // 0x1C4(0x8)
		float OffsetInSeconds; // 0x1CC(0x4)
		bool bEnable; // 0x1D0(0x1)
		bool bOnlyDuringInteraction; // 0x1D1(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x1D2(0xE) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetBoneInitialTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xF0 (0x2B0 - 0x1C0)
	struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable	
	{
	public:
		FName bone; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
		FTransform Result; // 0x230(0x60)
		ERigVMTransformSpace Space; // 0x290(0x1)
		bool bPropagateToChildren; // 0x291(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x292(0x6) UNKNOWN PROPERTY
		FCachedRigElement CachedBone; // 0x298(0x18)
	};


	// Struct ControlRig.RigUnit_SetBoneRotation
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x60 (0x220 - 0x1C0)
	struct FRigUnit_SetBoneRotation : public FRigUnitMutable	
	{
	public:
		FName bone; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		FQuat Rotation; // 0x1D0(0x20)
		ERigVMTransformSpace Space; // 0x1F0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1F1(0x3) UNKNOWN PROPERTY
		float Weight; // 0x1F4(0x4)
		bool bPropagateToChildren; // 0x1F8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedBone; // 0x200(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x218(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetBoneTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x100 (0x2C0 - 0x1C0)
	struct FRigUnit_SetBoneTransform : public FRigUnitMutable	
	{
	public:
		FName bone; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
		FTransform Result; // 0x230(0x60)
		ERigVMTransformSpace Space; // 0x290(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x291(0x3) UNKNOWN PROPERTY
		float Weight; // 0x294(0x4)
		bool bPropagateToChildren; // 0x298(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedBone; // 0x2A0(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetBoneTranslation
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x50 (0x210 - 0x1C0)
	struct FRigUnit_SetBoneTranslation : public FRigUnitMutable	
	{
	public:
		FName bone; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FVector Translation; // 0x1C8(0x18)
		ERigVMTransformSpace Space; // 0x1E0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1E1(0x3) UNKNOWN PROPERTY
		float Weight; // 0x1E4(0x4)
		bool bPropagateToChildren; // 0x1E8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1E9(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedBone; // 0x1F0(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x208(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_GetControlColor
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_GetControlColor : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		FLinearColor Color; // 0xC(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_SetControlColor
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetControlColor : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		FLinearColor Color; // 0x1C4(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x1D4(0x4) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x1D8(0x18)
	};


	// Struct ControlRig.RigUnit_GetControlDrivenList
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_GetControlDrivenList : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<FRigElementKey> Driven; // 0x10(0x10)
		FCachedRigElement CachedControlIndex; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_SetControlDrivenList
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetControlDrivenList : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		TArray<FRigElementKey> Driven; // 0x1C8(0x10)
		FCachedRigElement CachedControlIndex; // 0x1D8(0x18)
	};


	// Struct ControlRig.RigUnit_SetControlOffset
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_SetControlOffset : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		FTransform Offset; // 0x1D0(0x60)
		ERigVMTransformSpace Space; // 0x230(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x231(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x238(0x18)
	};


	// Struct ControlRig.RigUnit_GetShapeTransform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_GetShapeTransform : public FRigUnit	
	{
	public:
		FName Control; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FCachedRigElement CachedControlIndex; // 0x70(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetShapeTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_SetShapeTransform : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
		FCachedRigElement CachedControlIndex; // 0x230(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x248(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetControlBool
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_SetControlBool : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		bool BoolValue; // 0x1C4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1C5(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x1C8(0x18)
	};


	// Struct ControlRig.RigUnit_SetMultiControlBool_Entry
	// Size: 0x8 (0x8 - 0x0)
	struct FRigUnit_SetMultiControlBool_Entry	
	{
	public:
		FName Control; // 0x0(0x4)
		bool BoolValue; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetMultiControlBool
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_SetMultiControlBool : public FRigUnitMutable	
	{
	public:
		TArray<FRigUnit_SetMultiControlBool_Entry> Entries; // 0x1C0(0x10)
		TArray<FCachedRigElement> CachedControlIndices; // 0x1D0(0x10)
	};


	// Struct ControlRig.RigUnit_SetControlFloat
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetControlFloat : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		float Weight; // 0x1C4(0x4)
		float FloatValue; // 0x1C8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x1D0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetMultiControlFloat_Entry
	// Size: 0x8 (0x8 - 0x0)
	struct FRigUnit_SetMultiControlFloat_Entry	
	{
	public:
		FName Control; // 0x0(0x4)
		float FloatValue; // 0x4(0x4)
	};


	// Struct ControlRig.RigUnit_SetMultiControlFloat
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable	
	{
	public:
		TArray<FRigUnit_SetMultiControlFloat_Entry> Entries; // 0x1C0(0x10)
		float Weight; // 0x1D0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1D4(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> CachedControlIndices; // 0x1D8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetControlInteger
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetControlInteger : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		int32_t Weight; // 0x1C4(0x4)
		int32_t IntegerValue; // 0x1C8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x1D0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetMultiControlInteger_Entry
	// Size: 0x8 (0x8 - 0x0)
	struct FRigUnit_SetMultiControlInteger_Entry	
	{
	public:
		FName Control; // 0x0(0x4)
		int32_t IntegerValue; // 0x4(0x4)
	};


	// Struct ControlRig.RigUnit_SetMultiControlInteger
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable	
	{
	public:
		TArray<FRigUnit_SetMultiControlInteger_Entry> Entries; // 0x1C0(0x10)
		float Weight; // 0x1D0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1D4(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> CachedControlIndices; // 0x1D8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetControlVector2D
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetControlVector2D : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		float Weight; // 0x1C4(0x4)
		FVector2D Vector; // 0x1C8(0x10)
		FCachedRigElement CachedControlIndex; // 0x1D8(0x18)
	};


	// Struct ControlRig.RigUnit_SetMultiControlVector2D_Entry
	// Size: 0x18 (0x18 - 0x0)
	struct FRigUnit_SetMultiControlVector2D_Entry	
	{
	public:
		FName Control; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector2D Vector; // 0x8(0x10)
	};


	// Struct ControlRig.RigUnit_SetMultiControlVector2D
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable	
	{
	public:
		TArray<FRigUnit_SetMultiControlVector2D_Entry> Entries; // 0x1C0(0x10)
		float Weight; // 0x1D0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1D4(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> CachedControlIndices; // 0x1D8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetControlVector
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x40 (0x200 - 0x1C0)
	struct FRigUnit_SetControlVector : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		float Weight; // 0x1C4(0x4)
		FVector Vector; // 0x1C8(0x18)
		ERigVMTransformSpace Space; // 0x1E0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1E1(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x1E8(0x18)
	};


	// Struct ControlRig.RigUnit_SetControlRotator
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x40 (0x200 - 0x1C0)
	struct FRigUnit_SetControlRotator : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		float Weight; // 0x1C4(0x4)
		FRotator Rotator; // 0x1C8(0x18)
		ERigVMTransformSpace Space; // 0x1E0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1E1(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x1E8(0x18)
	};


	// Struct ControlRig.RigUnit_SetMultiControlRotator_Entry
	// Size: 0x28 (0x28 - 0x0)
	struct FRigUnit_SetMultiControlRotator_Entry	
	{
	public:
		FName Control; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FRotator Rotator; // 0x8(0x18)
		ERigVMTransformSpace Space; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetMultiControlRotator
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable	
	{
	public:
		TArray<FRigUnit_SetMultiControlRotator_Entry> Entries; // 0x1C0(0x10)
		float Weight; // 0x1D0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1D4(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> CachedControlIndices; // 0x1D8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetControlTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_SetControlTransform : public FRigUnitMutable	
	{
	public:
		FName Control; // 0x1C0(0x4)
		float Weight; // 0x1C4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
		ERigVMTransformSpace Space; // 0x230(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x231(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x238(0x18)
	};


	// Struct ControlRig.RigUnit_GetControlVisibility
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_GetControlVisibility : public FRigUnit	
	{
	public:
		FRigElementKey Item; // 0x8(0x8)
		bool bVisible; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedControlIndex; // 0x18(0x18)
	};


	// Struct ControlRig.RigUnit_SetControlVisibility
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetControlVisibility : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		FString Pattern; // 0x1C8(0x10)
		bool bVisible; // 0x1D8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1D9(0x7) UNKNOWN PROPERTY
		TArray<FCachedRigElement> CachedControlIndices; // 0x1E0(0x10)
	};


	// Struct ControlRig.RigUnit_SetCurveValue
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_SetCurveValue : public FRigUnitMutable	
	{
	public:
		FName Curve; // 0x1C0(0x4)
		float Value; // 0x1C4(0x4)
		FCachedRigElement CachedCurveIndex; // 0x1C8(0x18)
	};


	// Struct ControlRig.RigUnit_SetRelativeBoneTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xB0 (0x270 - 0x1C0)
	struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable	
	{
	public:
		FName bone; // 0x1C0(0x4)
		FName Space; // 0x1C4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
		float Weight; // 0x230(0x4)
		bool bPropagateToChildren; // 0x234(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x235(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedBone; // 0x238(0x18)
		FCachedRigElement CachedSpaceIndex; // 0x250(0x18)
		unsigned char UnknownData02_7[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetRelativeTransformForItem
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xC0 (0x280 - 0x1C0)
	struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		FRigElementKey Parent; // 0x1C8(0x8)
		bool bParentInitial; // 0x1D0(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x1D1(0xF) UNKNOWN PROPERTY
		FTransform Value; // 0x1E0(0x60)
		float Weight; // 0x240(0x4)
		bool bPropagateToChildren; // 0x244(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x245(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedChild; // 0x248(0x18)
		FCachedRigElement CachedParent; // 0x260(0x18)
		unsigned char UnknownData02_7[0x8]; // 0x278(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetRelativeTranslationForItem
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x70 (0x230 - 0x1C0)
	struct FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		FRigElementKey Parent; // 0x1C8(0x8)
		bool bParentInitial; // 0x1D0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1D1(0x7) UNKNOWN PROPERTY
		FVector Value; // 0x1D8(0x18)
		float Weight; // 0x1F0(0x4)
		bool bPropagateToChildren; // 0x1F4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1F5(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedChild; // 0x1F8(0x18)
		FCachedRigElement CachedParent; // 0x210(0x18)
		unsigned char UnknownData02_7[0x8]; // 0x228(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetRelativeRotationForItem
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x80 (0x240 - 0x1C0)
	struct FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		FRigElementKey Parent; // 0x1C8(0x8)
		bool bParentInitial; // 0x1D0(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x1D1(0xF) UNKNOWN PROPERTY
		FQuat Value; // 0x1E0(0x20)
		float Weight; // 0x200(0x4)
		bool bPropagateToChildren; // 0x204(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x205(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedChild; // 0x208(0x18)
		FCachedRigElement CachedParent; // 0x220(0x18)
		unsigned char UnknownData02_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetSpaceInitialTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xF0 (0x2B0 - 0x1C0)
	struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable	
	{
	public:
		FName SpaceName; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
		FTransform Result; // 0x230(0x60)
		ERigVMTransformSpace Space; // 0x290(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedSpaceIndex; // 0x298(0x18)
	};


	// Struct ControlRig.RigUnit_SetSpaceTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_SetSpaceTransform : public FRigUnitMutable	
	{
	public:
		FName Space; // 0x1C0(0x4)
		float Weight; // 0x1C4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x1D0(0x60)
		ERigVMTransformSpace SpaceType; // 0x230(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x231(0x7) UNKNOWN PROPERTY
		FCachedRigElement CachedSpaceIndex; // 0x238(0x18)
	};


	// Struct ControlRig.RigUnit_SetTransform
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x90 (0x250 - 0x1C0)
	struct FRigUnit_SetTransform : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		ERigVMTransformSpace Space; // 0x1C8(0x1)
		bool bInitial; // 0x1C9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1CA(0x6) UNKNOWN PROPERTY
		FTransform Value; // 0x1D0(0x60)
		float Weight; // 0x230(0x4)
		bool bPropagateToChildren; // 0x234(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x235(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x238(0x18)
	};


	// Struct ControlRig.RigUnit_SetTranslation
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x50 (0x210 - 0x1C0)
	struct FRigUnit_SetTranslation : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		ERigVMTransformSpace Space; // 0x1C8(0x1)
		bool bInitial; // 0x1C9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1CA(0x6) UNKNOWN PROPERTY
		FVector Value; // 0x1D0(0x18)
		float Weight; // 0x1E8(0x4)
		bool bPropagateToChildren; // 0x1EC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1ED(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x1F0(0x18)
		unsigned char UnknownData02_7[0x8]; // 0x208(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetRotation
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x50 (0x210 - 0x1C0)
	struct FRigUnit_SetRotation : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		ERigVMTransformSpace Space; // 0x1C8(0x1)
		bool bInitial; // 0x1C9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1CA(0x6) UNKNOWN PROPERTY
		FQuat Value; // 0x1D0(0x20)
		float Weight; // 0x1F0(0x4)
		bool bPropagateToChildren; // 0x1F4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1F5(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x1F8(0x18)
	};


	// Struct ControlRig.RigUnit_SetScale
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x50 (0x210 - 0x1C0)
	struct FRigUnit_SetScale : public FRigUnitMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		ERigVMTransformSpace Space; // 0x1C8(0x1)
		bool bInitial; // 0x1C9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1CA(0x6) UNKNOWN PROPERTY
		FVector Scale; // 0x1D0(0x18)
		float Weight; // 0x1E8(0x4)
		bool bPropagateToChildren; // 0x1EC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1ED(0x3) UNKNOWN PROPERTY
		FCachedRigElement CachedIndex; // 0x1F0(0x18)
		unsigned char UnknownData02_7[0x8]; // 0x208(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SetTransformArray
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x40 (0x200 - 0x1C0)
	struct FRigUnit_SetTransformArray : public FRigUnitMutable	
	{
	public:
		FRigElementKeyCollection Items; // 0x1C0(0x10)
		ERigVMTransformSpace Space; // 0x1D0(0x1)
		bool bInitial; // 0x1D1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1D2(0x6) UNKNOWN PROPERTY
		TArray<FTransform> Transforms; // 0x1D8(0x10)
		float Weight; // 0x1E8(0x4)
		bool bPropagateToChildren; // 0x1EC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1ED(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> CachedIndex; // 0x1F0(0x10)
	};


	// Struct ControlRig.RigUnit_SetTransformItemArray
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x40 (0x200 - 0x1C0)
	struct FRigUnit_SetTransformItemArray : public FRigUnitMutable	
	{
	public:
		TArray<FRigElementKey> Items; // 0x1C0(0x10)
		ERigVMTransformSpace Space; // 0x1D0(0x1)
		bool bInitial; // 0x1D1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1D2(0x6) UNKNOWN PROPERTY
		TArray<FTransform> Transforms; // 0x1D8(0x10)
		float Weight; // 0x1E8(0x4)
		bool bPropagateToChildren; // 0x1EC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1ED(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> CachedIndex; // 0x1F0(0x10)
	};


	// Struct ControlRig.RigUnit_UnsetCurveValue
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_UnsetCurveValue : public FRigUnitMutable	
	{
	public:
		FName Curve; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FCachedRigElement CachedCurveIndex; // 0x1C8(0x18)
	};


	// Struct ControlRig.RigUnit_ToWorldSpace_Transform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xC8 (0xD0 - 0x8)
	struct FRigUnit_ToWorldSpace_Transform : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		FTransform World; // 0x70(0x60)
	};


	// Struct ControlRig.RigUnit_ToRigSpace_Transform
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xC8 (0xD0 - 0x8)
	struct FRigUnit_ToRigSpace_Transform : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		FTransform Global; // 0x70(0x60)
	};


	// Struct ControlRig.RigUnit_ToWorldSpace_Location
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_ToWorldSpace_Location : public FRigUnit	
	{
	public:
		FVector Value; // 0x8(0x18)
		FVector World; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_ToRigSpace_Location
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigUnit_ToRigSpace_Location : public FRigUnit	
	{
	public:
		FVector Value; // 0x8(0x18)
		FVector Global; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_ToWorldSpace_Rotation
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		FQuat World; // 0x30(0x20)
	};


	// Struct ControlRig.RigUnit_ToRigSpace_Rotation
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigUnit_ToRigSpace_Rotation : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		FQuat Global; // 0x30(0x20)
	};


	// Struct ControlRig.RigUnit_BoneHarmonics_BoneTarget
	// Size: 0x8 (0x8 - 0x0)
	struct FRigUnit_BoneHarmonics_BoneTarget	
	{
	public:
		FName bone; // 0x0(0x4)
		float Ratio; // 0x4(0x4)
	};


	// Struct ControlRig.RigUnit_Harmonics_TargetItem
	// Size: 0xC (0xC - 0x0)
	struct FRigUnit_Harmonics_TargetItem	
	{
	public:
		FRigElementKey Item; // 0x0(0x8)
		float Ratio; // 0x8(0x4)
	};


	// Struct ControlRig.RigUnit_BoneHarmonics_WorkData
	// Size: 0x28 (0x28 - 0x0)
	struct FRigUnit_BoneHarmonics_WorkData	
	{
	public:
		TArray<FCachedRigElement> CachedItems; // 0x0(0x10)
		FVector WaveTime; // 0x10(0x18)
	};


	// Struct ControlRig.RigUnit_BoneHarmonics
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xC0 (0x280 - 0x1C0)
	struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones; // 0x1C0(0x10)
		FVector WaveSpeed; // 0x1D0(0x18)
		FVector WaveFrequency; // 0x1E8(0x18)
		FVector WaveAmplitude; // 0x200(0x18)
		FVector WaveOffset; // 0x218(0x18)
		FVector WaveNoise; // 0x230(0x18)
		ERigVMAnimEasingType WaveEase; // 0x248(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x249(0x3) UNKNOWN PROPERTY
		float WaveMinimum; // 0x24C(0x4)
		float WaveMaximum; // 0x250(0x4)
		EEulerRotationOrder RotationOrder; // 0x254(0x1)
		bool bPropagateToChildren; // 0x255(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x256(0x2) UNKNOWN PROPERTY
		FRigUnit_BoneHarmonics_WorkData WorkData; // 0x258(0x28)
	};


	// Struct ControlRig.RigUnit_ItemHarmonics
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xC0 (0x280 - 0x1C0)
	struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigUnit_Harmonics_TargetItem> Targets; // 0x1C0(0x10)
		FVector WaveSpeed; // 0x1D0(0x18)
		FVector WaveFrequency; // 0x1E8(0x18)
		FVector WaveAmplitude; // 0x200(0x18)
		FVector WaveOffset; // 0x218(0x18)
		FVector WaveNoise; // 0x230(0x18)
		ERigVMAnimEasingType WaveEase; // 0x248(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x249(0x3) UNKNOWN PROPERTY
		float WaveMinimum; // 0x24C(0x4)
		float WaveMaximum; // 0x250(0x4)
		EEulerRotationOrder RotationOrder; // 0x254(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x255(0x3) UNKNOWN PROPERTY
		FRigUnit_BoneHarmonics_WorkData WorkData; // 0x258(0x28)
	};


	// Struct ControlRig.RigUnit_ChainHarmonics_Reach
	// Size: 0x48 (0x48 - 0x0)
	struct FRigUnit_ChainHarmonics_Reach	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector ReachTarget; // 0x8(0x18)
		FVector ReachAxis; // 0x20(0x18)
		float ReachMinimum; // 0x38(0x4)
		float ReachMaximum; // 0x3C(0x4)
		ERigVMAnimEasingType ReachEase; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ChainHarmonics_Wave
	// Size: 0x78 (0x78 - 0x0)
	struct FRigUnit_ChainHarmonics_Wave	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector WaveFrequency; // 0x8(0x18)
		FVector WaveAmplitude; // 0x20(0x18)
		FVector WaveOffset; // 0x38(0x18)
		FVector WaveNoise; // 0x50(0x18)
		float WaveMinimum; // 0x68(0x4)
		float WaveMaximum; // 0x6C(0x4)
		ERigVMAnimEasingType WaveEase; // 0x70(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ChainHarmonics_Pendulum
	// Size: 0x58 (0x58 - 0x0)
	struct FRigUnit_ChainHarmonics_Pendulum	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float PendulumStiffness; // 0x4(0x4)
		FVector PendulumGravity; // 0x8(0x18)
		float PendulumBlend; // 0x20(0x4)
		float PendulumDrag; // 0x24(0x4)
		float PendulumMinimum; // 0x28(0x4)
		float PendulumMaximum; // 0x2C(0x4)
		ERigVMAnimEasingType PendulumEase; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FVector UnwindAxis; // 0x38(0x18)
		float UnwindMinimum; // 0x50(0x4)
		float UnwindMaximum; // 0x54(0x4)
	};


	// Struct ControlRig.RigUnit_ChainHarmonics_WorkData
	// Size: 0x98 (0x98 - 0x0)
	struct FRigUnit_ChainHarmonics_WorkData	
	{
	public:
		FVector Time; // 0x0(0x18)
		TArray<FCachedRigElement> Items; // 0x18(0x10)
		TArray<float> Ratio; // 0x28(0x10)
		TArray<FVector> LocalTip; // 0x38(0x10)
		TArray<FVector> PendulumTip; // 0x48(0x10)
		TArray<FVector> PendulumPosition; // 0x58(0x10)
		TArray<FVector> PendulumVelocity; // 0x68(0x10)
		TArray<FVector> HierarchyLine; // 0x78(0x10)
		TArray<FVector> VelocityLines; // 0x88(0x10)
	};


	// Struct ControlRig.RigUnit_ChainHarmonics
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x2D0 (0x490 - 0x1C0)
	struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName ChainRoot; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FVector Speed; // 0x1C8(0x18)
		FRigUnit_ChainHarmonics_Reach Reach; // 0x1E0(0x48)
		FRigUnit_ChainHarmonics_Wave Wave; // 0x228(0x78)
		FRuntimeFloatCurve WaveCurve; // 0x2A0(0x88)
		FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x328(0x58)
		bool bDrawDebug; // 0x380(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x381(0xF) UNKNOWN PROPERTY
		FTransform DrawWorldOffset; // 0x390(0x60)
		FRigUnit_ChainHarmonics_WorkData WorkData; // 0x3F0(0x98)
		unsigned char UnknownData02_7[0x8]; // 0x488(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ChainHarmonicsPerItem
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x2D0 (0x490 - 0x1C0)
	struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey ChainRoot; // 0x1C0(0x8)
		FVector Speed; // 0x1C8(0x18)
		FRigUnit_ChainHarmonics_Reach Reach; // 0x1E0(0x48)
		FRigUnit_ChainHarmonics_Wave Wave; // 0x228(0x78)
		FRuntimeFloatCurve WaveCurve; // 0x2A0(0x88)
		FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x328(0x58)
		bool bDrawDebug; // 0x380(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x381(0xF) UNKNOWN PROPERTY
		FTransform DrawWorldOffset; // 0x390(0x60)
		FRigUnit_ChainHarmonics_WorkData WorkData; // 0x3F0(0x98)
		unsigned char UnknownData01_7[0x8]; // 0x488(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_AimBone_Target
	// Size: 0x40 (0x40 - 0x0)
	struct FRigUnit_AimBone_Target	
	{
	public:
		float Weight; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Axis; // 0x8(0x18)
		FVector Target; // 0x20(0x18)
		EControlRigVectorKind Kind; // 0x38(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FName Space; // 0x3C(0x4)
	};


	// Struct ControlRig.RigUnit_AimItem_Target
	// Size: 0x48 (0x48 - 0x0)
	struct FRigUnit_AimItem_Target	
	{
	public:
		float Weight; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Axis; // 0x8(0x18)
		FVector Target; // 0x20(0x18)
		EControlRigVectorKind Kind; // 0x38(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FRigElementKey Space; // 0x3C(0x8)
		unsigned char UnknownData02_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_AimBone_DebugSettings
	// Size: 0x70 (0x70 - 0x0)
	struct FRigUnit_AimBone_DebugSettings	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Scale; // 0x4(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x10(0x60)
	};


	// Struct ControlRig.RigUnit_AimBoneMath
	// Inherited from FRigUnit_HighlevelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x218 (0x220 - 0x8)
	struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform InputTransform; // 0x10(0x60)
		FRigUnit_AimItem_Target Primary; // 0x70(0x48)
		FRigUnit_AimItem_Target Secondary; // 0xB8(0x48)
		float Weight; // 0x100(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x104(0xC) UNKNOWN PROPERTY
		FTransform Result; // 0x110(0x60)
		FRigUnit_AimBone_DebugSettings DebugSettings; // 0x170(0x70)
		FCachedRigElement PrimaryCachedSpace; // 0x1E0(0x18)
		FCachedRigElement SecondaryCachedSpace; // 0x1F8(0x18)
		bool bIsInitialized; // 0x210(0x1)
		unsigned char UnknownData02_7[0xF]; // 0x211(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_AimBone
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x150 (0x310 - 0x1C0)
	struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName bone; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FRigUnit_AimBone_Target Primary; // 0x1C8(0x40)
		FRigUnit_AimBone_Target Secondary; // 0x208(0x40)
		float Weight; // 0x248(0x4)
		bool bPropagateToChildren; // 0x24C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x24D(0x3) UNKNOWN PROPERTY
		FRigUnit_AimBone_DebugSettings DebugSettings; // 0x250(0x70)
		FCachedRigElement CachedBoneIndex; // 0x2C0(0x18)
		FCachedRigElement PrimaryCachedSpace; // 0x2D8(0x18)
		FCachedRigElement SecondaryCachedSpace; // 0x2F0(0x18)
		bool bIsInitialized; // 0x308(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x309(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_AimItem
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x160 (0x320 - 0x1C0)
	struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		FRigUnit_AimItem_Target Primary; // 0x1C8(0x48)
		FRigUnit_AimItem_Target Secondary; // 0x210(0x48)
		float Weight; // 0x258(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x25C(0x4) UNKNOWN PROPERTY
		FRigUnit_AimBone_DebugSettings DebugSettings; // 0x260(0x70)
		FCachedRigElement CachedItem; // 0x2D0(0x18)
		FCachedRigElement PrimaryCachedSpace; // 0x2E8(0x18)
		FCachedRigElement SecondaryCachedSpace; // 0x300(0x18)
		bool bIsInitialized; // 0x318(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x319(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_AimConstraint_WorldUp
	// Size: 0x28 (0x28 - 0x0)
	struct FRigUnit_AimConstraint_WorldUp	
	{
	public:
		FVector Target; // 0x0(0x18)
		EControlRigVectorKind Kind; // 0x18(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FRigElementKey Space; // 0x1C(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_AimConstraint_AdvancedSettings
	// Size: 0x80 (0x80 - 0x0)
	struct FRigUnit_AimConstraint_AdvancedSettings	
	{
	public:
		FRigUnit_AimBone_DebugSettings DebugSettings; // 0x0(0x70)
		EEulerRotationOrder RotationOrderForFilter; // 0x70(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x71(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_AimConstraintLocalSpaceOffset
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x150 (0x310 - 0x1C0)
	struct FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		bool bMaintainOffset; // 0x1C8(0x1)
		FFilterOptionPerAxis Filter; // 0x1C9(0x3)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FVector AimAxis; // 0x1D0(0x18)
		FVector UpAxis; // 0x1E8(0x18)
		FRigUnit_AimConstraint_WorldUp WorldUp; // 0x200(0x28)
		TArray<FConstraintParent> Parents; // 0x228(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
		FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings; // 0x240(0x80)
		float Weight; // 0x2C0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY
		FCachedRigElement WorldUpSpaceCache; // 0x2C8(0x18)
		FCachedRigElement ChildCache; // 0x2E0(0x18)
		TArray<FCachedRigElement> ParentCaches; // 0x2F8(0x10)
		bool bIsInitialized; // 0x308(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x309(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.ConstraintParent
	// Size: 0xC (0xC - 0x0)
	struct FConstraintParent	
	{
	public:
		FRigElementKey Item; // 0x0(0x8)
		float Weight; // 0x8(0x4)
	};


	// Struct ControlRig.RigUnit_CCDIK_RotationLimit
	// Size: 0x8 (0x8 - 0x0)
	struct FRigUnit_CCDIK_RotationLimit	
	{
	public:
		FName bone; // 0x0(0x4)
		float Limit; // 0x4(0x4)
	};


	// Struct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
	// Size: 0xC (0xC - 0x0)
	struct FRigUnit_CCDIK_RotationLimitPerItem	
	{
	public:
		FRigElementKey Item; // 0x0(0x8)
		float Limit; // 0x8(0x4)
	};


	// Struct ControlRig.RigUnit_CCDIK_WorkData
	// Size: 0x58 (0x58 - 0x0)
	struct FRigUnit_CCDIK_WorkData	
	{
	public:
		TArray<FCCDIKChainLink> Chain; // 0x0(0x10)
		TArray<FCachedRigElement> CachedItems; // 0x10(0x10)
		TArray<int32_t> RotationLimitIndex; // 0x20(0x10)
		TArray<float> RotationLimitsPerItem; // 0x30(0x10)
		FCachedRigElement CachedEffector; // 0x40(0x18)
	};


	// Struct ControlRig.RigUnit_CCDIK
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x100 (0x2C0 - 0x1C0)
	struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName StartBone; // 0x1C0(0x4)
		FName EffectorBone; // 0x1C4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FTransform EffectorTransform; // 0x1D0(0x60)
		float Precision; // 0x230(0x4)
		float Weight; // 0x234(0x4)
		int32_t MaxIterations; // 0x238(0x4)
		bool bStartFromTail; // 0x23C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x23D(0x3) UNKNOWN PROPERTY
		float BaseRotationLimit; // 0x240(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_CCDIK_RotationLimit> RotationLimits; // 0x248(0x10)
		bool bPropagateToChildren; // 0x258(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x259(0x7) UNKNOWN PROPERTY
		FRigUnit_CCDIK_WorkData WorkData; // 0x260(0x58)
		unsigned char UnknownData04_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_CCDIKPerItem
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x100 (0x2C0 - 0x1C0)
	struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKeyCollection Items; // 0x1C0(0x10)
		FTransform EffectorTransform; // 0x1D0(0x60)
		float Precision; // 0x230(0x4)
		float Weight; // 0x234(0x4)
		int32_t MaxIterations; // 0x238(0x4)
		bool bStartFromTail; // 0x23C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x23D(0x3) UNKNOWN PROPERTY
		float BaseRotationLimit; // 0x240(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0x248(0x10)
		bool bPropagateToChildren; // 0x258(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x259(0x7) UNKNOWN PROPERTY
		FRigUnit_CCDIK_WorkData WorkData; // 0x260(0x58)
		unsigned char UnknownData03_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_CCDIKItemArray
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x100 (0x2C0 - 0x1C0)
	struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigElementKey> Items; // 0x1C0(0x10)
		FTransform EffectorTransform; // 0x1D0(0x60)
		float Precision; // 0x230(0x4)
		float Weight; // 0x234(0x4)
		int32_t MaxIterations; // 0x238(0x4)
		bool bStartFromTail; // 0x23C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x23D(0x3) UNKNOWN PROPERTY
		float BaseRotationLimit; // 0x240(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0x248(0x10)
		bool bPropagateToChildren; // 0x258(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x259(0x7) UNKNOWN PROPERTY
		FRigUnit_CCDIK_WorkData WorkData; // 0x260(0x58)
		unsigned char UnknownData03_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DistributeRotation_Rotation
	// Size: 0x30 (0x30 - 0x0)
	struct FRigUnit_DistributeRotation_Rotation	
	{
	public:
		FQuat Rotation; // 0x0(0x20)
		float Ratio; // 0x20(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DistributeRotation_WorkData
	// Size: 0x50 (0x50 - 0x0)
	struct FRigUnit_DistributeRotation_WorkData	
	{
	public:
		TArray<FCachedRigElement> CachedItems; // 0x0(0x10)
		TArray<int32_t> ItemRotationA; // 0x10(0x10)
		TArray<int32_t> ItemRotationB; // 0x20(0x10)
		TArray<float> ItemRotationT; // 0x30(0x10)
		TArray<FTransform> ItemLocalTransforms; // 0x40(0x10)
	};


	// Struct ControlRig.RigUnit_DistributeRotation
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x80 (0x240 - 0x1C0)
	struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName StartBone; // 0x1C0(0x4)
		FName EndBone; // 0x1C4(0x4)
		TArray<FRigUnit_DistributeRotation_Rotation> Rotations; // 0x1C8(0x10)
		ERigVMAnimEasingType RotationEaseType; // 0x1D8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1D9(0x3) UNKNOWN PROPERTY
		float Weight; // 0x1DC(0x4)
		bool bPropagateToChildren; // 0x1E0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1E1(0x7) UNKNOWN PROPERTY
		FRigUnit_DistributeRotation_WorkData WorkData; // 0x1E8(0x50)
		unsigned char UnknownData02_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DistributeRotationForCollection
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x80 (0x240 - 0x1C0)
	struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKeyCollection Items; // 0x1C0(0x10)
		TArray<FRigUnit_DistributeRotation_Rotation> Rotations; // 0x1D0(0x10)
		ERigVMAnimEasingType RotationEaseType; // 0x1E0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E1(0x3) UNKNOWN PROPERTY
		float Weight; // 0x1E4(0x4)
		FRigUnit_DistributeRotation_WorkData WorkData; // 0x1E8(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_DistributeRotationForItemArray
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x80 (0x240 - 0x1C0)
	struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigElementKey> Items; // 0x1C0(0x10)
		TArray<FRigUnit_DistributeRotation_Rotation> Rotations; // 0x1D0(0x10)
		ERigVMAnimEasingType RotationEaseType; // 0x1E0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E1(0x3) UNKNOWN PROPERTY
		float Weight; // 0x1E4(0x4)
		FRigUnit_DistributeRotation_WorkData WorkData; // 0x1E8(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_FABRIK_WorkData
	// Size: 0x38 (0x38 - 0x0)
	struct FRigUnit_FABRIK_WorkData	
	{
	public:
		TArray<FFABRIKChainLink> Chain; // 0x0(0x10)
		TArray<FCachedRigElement> CachedItems; // 0x10(0x10)
		FCachedRigElement CachedEffector; // 0x20(0x18)
	};


	// Struct ControlRig.RigUnit_FABRIK
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xC0 (0x280 - 0x1C0)
	struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName StartBone; // 0x1C0(0x4)
		FName EffectorBone; // 0x1C4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FTransform EffectorTransform; // 0x1D0(0x60)
		float Precision; // 0x230(0x4)
		float Weight; // 0x234(0x4)
		bool bPropagateToChildren; // 0x238(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x239(0x3) UNKNOWN PROPERTY
		int32_t MaxIterations; // 0x23C(0x4)
		FRigUnit_FABRIK_WorkData WorkData; // 0x240(0x38)
		bool bSetEffectorTransform; // 0x278(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x279(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_FABRIKPerItem
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xC0 (0x280 - 0x1C0)
	struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKeyCollection Items; // 0x1C0(0x10)
		FTransform EffectorTransform; // 0x1D0(0x60)
		float Precision; // 0x230(0x4)
		float Weight; // 0x234(0x4)
		bool bPropagateToChildren; // 0x238(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x239(0x3) UNKNOWN PROPERTY
		int32_t MaxIterations; // 0x23C(0x4)
		FRigUnit_FABRIK_WorkData WorkData; // 0x240(0x38)
		bool bSetEffectorTransform; // 0x278(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x279(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_FABRIKItemArray
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xC0 (0x280 - 0x1C0)
	struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigElementKey> Items; // 0x1C0(0x10)
		FTransform EffectorTransform; // 0x1D0(0x60)
		float Precision; // 0x230(0x4)
		float Weight; // 0x234(0x4)
		bool bPropagateToChildren; // 0x238(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x239(0x3) UNKNOWN PROPERTY
		int32_t MaxIterations; // 0x23C(0x4)
		FRigUnit_FABRIK_WorkData WorkData; // 0x240(0x38)
		bool bSetEffectorTransform; // 0x278(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x279(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_FitChainToCurve_Rotation
	// Size: 0x30 (0x30 - 0x0)
	struct FRigUnit_FitChainToCurve_Rotation	
	{
	public:
		FQuat Rotation; // 0x0(0x20)
		float Ratio; // 0x20(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_FitChainToCurve_DebugSettings
	// Size: 0x90 (0x90 - 0x0)
	struct FRigUnit_FitChainToCurve_DebugSettings	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Scale; // 0x4(0x4)
		FLinearColor CurveColor; // 0x8(0x10)
		FLinearColor SegmentsColor; // 0x18(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x30(0x60)
	};


	// Struct ControlRig.RigUnit_FitChainToCurve_WorkData
	// Size: 0x98 (0x98 - 0x0)
	struct FRigUnit_FitChainToCurve_WorkData	
	{
	public:
		float ChainLength; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FVector> ItemPositions; // 0x8(0x10)
		TArray<float> ItemSegments; // 0x18(0x10)
		TArray<FVector> CurvePositions; // 0x28(0x10)
		TArray<float> CurveSegments; // 0x38(0x10)
		TArray<FCachedRigElement> CachedItems; // 0x48(0x10)
		TArray<int32_t> ItemRotationA; // 0x58(0x10)
		TArray<int32_t> ItemRotationB; // 0x68(0x10)
		TArray<float> ItemRotationT; // 0x78(0x10)
		TArray<FTransform> ItemLocalTransforms; // 0x88(0x10)
	};


	// Struct ControlRig.RigUnit_FitChainToCurve
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x210 (0x3D0 - 0x1C0)
	struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName StartBone; // 0x1C0(0x4)
		FName EndBone; // 0x1C4(0x4)
		FRigVMFourPointBezier Bezier; // 0x1C8(0x60)
		EControlRigCurveAlignment Alignment; // 0x228(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x229(0x3) UNKNOWN PROPERTY
		float Minimum; // 0x22C(0x4)
		float Maximum; // 0x230(0x4)
		int32_t SamplingPrecision; // 0x234(0x4)
		FVector PrimaryAxis; // 0x238(0x18)
		FVector SecondaryAxis; // 0x250(0x18)
		FVector PoleVectorPosition; // 0x268(0x18)
		TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x280(0x10)
		ERigVMAnimEasingType RotationEaseType; // 0x290(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x291(0x3) UNKNOWN PROPERTY
		float Weight; // 0x294(0x4)
		bool bPropagateToChildren; // 0x298(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x2A0(0x90)
		FRigUnit_FitChainToCurve_WorkData WorkData; // 0x330(0x98)
		unsigned char UnknownData03_7[0x8]; // 0x3C8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_FitChainToCurvePerItem
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x220 (0x3E0 - 0x1C0)
	struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKeyCollection Items; // 0x1C0(0x10)
		FRigVMFourPointBezier Bezier; // 0x1D0(0x60)
		EControlRigCurveAlignment Alignment; // 0x230(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x231(0x3) UNKNOWN PROPERTY
		float Minimum; // 0x234(0x4)
		float Maximum; // 0x238(0x4)
		int32_t SamplingPrecision; // 0x23C(0x4)
		FVector PrimaryAxis; // 0x240(0x18)
		FVector SecondaryAxis; // 0x258(0x18)
		FVector PoleVectorPosition; // 0x270(0x18)
		TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x288(0x10)
		ERigVMAnimEasingType RotationEaseType; // 0x298(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x299(0x3) UNKNOWN PROPERTY
		float Weight; // 0x29C(0x4)
		bool bPropagateToChildren; // 0x2A0(0x1)
		unsigned char UnknownData02_6[0xF]; // 0x2A1(0xF) UNKNOWN PROPERTY
		FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x2B0(0x90)
		FRigUnit_FitChainToCurve_WorkData WorkData; // 0x340(0x98)
		unsigned char UnknownData03_7[0x8]; // 0x3D8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_FitChainToCurveItemArray
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x220 (0x3E0 - 0x1C0)
	struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigElementKey> Items; // 0x1C0(0x10)
		FRigVMFourPointBezier Bezier; // 0x1D0(0x60)
		EControlRigCurveAlignment Alignment; // 0x230(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x231(0x3) UNKNOWN PROPERTY
		float Minimum; // 0x234(0x4)
		float Maximum; // 0x238(0x4)
		int32_t SamplingPrecision; // 0x23C(0x4)
		FVector PrimaryAxis; // 0x240(0x18)
		FVector SecondaryAxis; // 0x258(0x18)
		FVector PoleVectorPosition; // 0x270(0x18)
		TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x288(0x10)
		ERigVMAnimEasingType RotationEaseType; // 0x298(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x299(0x3) UNKNOWN PROPERTY
		float Weight; // 0x29C(0x4)
		bool bPropagateToChildren; // 0x2A0(0x1)
		unsigned char UnknownData02_6[0xF]; // 0x2A1(0xF) UNKNOWN PROPERTY
		FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x2B0(0x90)
		FRigUnit_FitChainToCurve_WorkData WorkData; // 0x340(0x98)
		unsigned char UnknownData03_7[0x8]; // 0x3D8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
	// Size: 0x70 (0x70 - 0x0)
	struct FRigUnit_ModifyBoneTransforms_PerBone	
	{
	public:
		FName bone; // 0x0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
	};


	// Struct ControlRig.RigUnit_ModifyTransforms_WorkData
	// Size: 0x10 (0x10 - 0x0)
	struct FRigUnit_ModifyTransforms_WorkData	
	{
	public:
		TArray<FCachedRigElement> CachedItems; // 0x0(0x10)
	};


	// Struct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
	// Inherited from FRigUnit_ModifyTransforms_WorkData
	// Size: 0x0 (0x10 - 0x10)
	struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData	
	{
	public:
	};


	// Struct ControlRig.RigUnit_ModifyBoneTransforms
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x1C0(0x10)
		float Weight; // 0x1D0(0x4)
		float WeightMinimum; // 0x1D4(0x4)
		float WeightMaximum; // 0x1D8(0x4)
		EControlRigModifyBoneMode Mode; // 0x1DC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1DD(0x3) UNKNOWN PROPERTY
		FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x1E0(0x10)
	};


	// Struct ControlRig.RigUnit_ModifyTransforms_PerItem
	// Size: 0x70 (0x70 - 0x0)
	struct FRigUnit_ModifyTransforms_PerItem	
	{
	public:
		FRigElementKey Item; // 0x0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
	};


	// Struct ControlRig.RigUnit_ModifyTransforms
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify; // 0x1C0(0x10)
		float Weight; // 0x1D0(0x4)
		float WeightMinimum; // 0x1D4(0x4)
		float WeightMaximum; // 0x1D8(0x4)
		EControlRigModifyBoneMode Mode; // 0x1DC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1DD(0x3) UNKNOWN PROPERTY
		FRigUnit_ModifyTransforms_WorkData WorkData; // 0x1E0(0x10)
	};


	// Struct ControlRig.RigUnit_MultiFABRIK_WorkData
	// Size: 0x68 (0x68 - 0x0)
	struct FRigUnit_MultiFABRIK_WorkData	
	{
	public:
		unsigned char UnknownData00_2[0x68]; // 0x0(0x68) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_MultiFABRIK_EndEffector
	// Size: 0x20 (0x20 - 0x0)
	struct FRigUnit_MultiFABRIK_EndEffector	
	{
	public:
		FName bone; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x8(0x18)
	};


	// Struct ControlRig.RigUnit_MultiFABRIK
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xA0 (0x260 - 0x1C0)
	struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName RootBone; // 0x1C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x1C8(0x10)
		float Precision; // 0x1D8(0x4)
		bool bPropagateToChildren; // 0x1DC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1DD(0x3) UNKNOWN PROPERTY
		int32_t MaxIterations; // 0x1E0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY
		FRigUnit_MultiFABRIK_WorkData WorkData; // 0x1E8(0x68)
		bool bIsInitialized; // 0x250(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x251(0xF) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SlideChain_WorkData
	// Size: 0x48 (0x48 - 0x0)
	struct FRigUnit_SlideChain_WorkData	
	{
	public:
		float ChainLength; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<float> ItemSegments; // 0x8(0x10)
		TArray<FCachedRigElement> CachedItems; // 0x18(0x10)
		TArray<FTransform> Transforms; // 0x28(0x10)
		TArray<FTransform> BlendedTransforms; // 0x38(0x10)
	};


	// Struct ControlRig.RigUnit_SlideChain
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x60 (0x220 - 0x1C0)
	struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName StartBone; // 0x1C0(0x4)
		FName EndBone; // 0x1C4(0x4)
		float SlideAmount; // 0x1C8(0x4)
		bool bPropagateToChildren; // 0x1CC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1CD(0x3) UNKNOWN PROPERTY
		FRigUnit_SlideChain_WorkData WorkData; // 0x1D0(0x48)
		unsigned char UnknownData01_7[0x8]; // 0x218(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SlideChainPerItem
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x60 (0x220 - 0x1C0)
	struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKeyCollection Items; // 0x1C0(0x10)
		float SlideAmount; // 0x1D0(0x4)
		bool bPropagateToChildren; // 0x1D4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1D5(0x3) UNKNOWN PROPERTY
		FRigUnit_SlideChain_WorkData WorkData; // 0x1D8(0x48)
	};


	// Struct ControlRig.RigUnit_SlideChainItemArray
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x60 (0x220 - 0x1C0)
	struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigElementKey> Items; // 0x1C0(0x10)
		float SlideAmount; // 0x1D0(0x4)
		bool bPropagateToChildren; // 0x1D4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1D5(0x3) UNKNOWN PROPERTY
		FRigUnit_SlideChain_WorkData WorkData; // 0x1D8(0x48)
	};


	// Struct ControlRig.RegionScaleFactors
	// Size: 0x10 (0x10 - 0x0)
	struct FRegionScaleFactors	
	{
	public:
		float PositiveWidth; // 0x0(0x4)
		float NegativeWidth; // 0x4(0x4)
		float PositiveHeight; // 0x8(0x4)
		float NegativeHeight; // 0xC(0x4)
	};


	// Struct ControlRig.SphericalRegion
	// Size: 0x14 (0x14 - 0x0)
	struct FSphericalRegion	
	{
	public:
		unsigned char UnknownData00_2[0x14]; // 0x0(0x14) UNKNOWN PROPERTY
	};


	// Struct ControlRig.SphericalPoseReaderDebugSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSphericalPoseReaderDebugSettings	
	{
	public:
		bool bDrawDebug; // 0x0(0x1)
		bool bDraw2D; // 0x1(0x1)
		bool bDrawLocalAxes; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float DebugScale; // 0x4(0x4)
		int32_t DebugSegments; // 0x8(0x4)
		float DebugThickness; // 0xC(0x4)
	};


	// Struct ControlRig.RigUnit_SphericalPoseReader
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x190 (0x350 - 0x1C0)
	struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		float OutputParam; // 0x1C0(0x4)
		FRigElementKey DriverItem; // 0x1C4(0x8)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FVector DriverAxis; // 0x1D0(0x18)
		FVector RotationOffset; // 0x1E8(0x18)
		float ActiveRegionSize; // 0x200(0x4)
		FRegionScaleFactors ActiveRegionScaleFactors; // 0x204(0x10)
		float FalloffSize; // 0x214(0x4)
		FRegionScaleFactors FalloffRegionScaleFactors; // 0x218(0x10)
		bool FlipWidthScaling; // 0x228(0x1)
		bool FlipHeightScaling; // 0x229(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x22A(0x2) UNKNOWN PROPERTY
		FRigElementKey OptionalParentItem; // 0x22C(0x8)
		FSphericalPoseReaderDebugSettings Debug; // 0x234(0x10)
		FSphericalRegion InnerRegion; // 0x244(0x14)
		FSphericalRegion OuterRegion; // 0x258(0x14)
		unsigned char UnknownData02_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		FVector DriverNormal; // 0x270(0x18)
		FVector Driver2D; // 0x288(0x18)
		FCachedRigElement DriverCache; // 0x2A0(0x18)
		FCachedRigElement OptionalParentCache; // 0x2B8(0x18)
		FTransform LocalDriverTransformInit; // 0x2D0(0x60)
		FVector CachedRotationOffset; // 0x330(0x18)
		bool bCachedInitTransforms; // 0x348(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x349(0x7) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SpringIK_DebugSettings
	// Size: 0x80 (0x80 - 0x0)
	struct FRigUnit_SpringIK_DebugSettings	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Scale; // 0x4(0x4)
		FLinearColor Color; // 0x8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x20(0x60)
	};


	// Struct ControlRig.RigUnit_SpringIK_WorkData
	// Size: 0xB0 (0xB0 - 0x0)
	struct FRigUnit_SpringIK_WorkData	
	{
	public:
		TArray<FCachedRigElement> CachedBones; // 0x0(0x10)
		FCachedRigElement CachedPoleVector; // 0x10(0x18)
		TArray<FTransform> Transforms; // 0x28(0x10)
		FCRSimPointContainer Simulation; // 0x38(0x78)
	};


	// Struct ControlRig.RigUnit_SpringIK
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x1B0 (0x370 - 0x1C0)
	struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName StartBone; // 0x1C0(0x4)
		FName EndBone; // 0x1C4(0x4)
		float HierarchyStrength; // 0x1C8(0x4)
		float EffectorStrength; // 0x1CC(0x4)
		float EffectorRatio; // 0x1D0(0x4)
		float RootStrength; // 0x1D4(0x4)
		float RootRatio; // 0x1D8(0x4)
		float Damping; // 0x1DC(0x4)
		FVector PoleVector; // 0x1E0(0x18)
		bool bFlipPolePlane; // 0x1F8(0x1)
		EControlRigVectorKind PoleVectorKind; // 0x1F9(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1FA(0x2) UNKNOWN PROPERTY
		FName PoleVectorSpace; // 0x1FC(0x4)
		FVector PrimaryAxis; // 0x200(0x18)
		FVector SecondaryAxis; // 0x218(0x18)
		bool bLiveSimulation; // 0x230(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x231(0x3) UNKNOWN PROPERTY
		int32_t Iterations; // 0x234(0x4)
		bool bLimitLocalPosition; // 0x238(0x1)
		bool bPropagateToChildren; // 0x239(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x23A(0x6) UNKNOWN PROPERTY
		FRigUnit_SpringIK_DebugSettings DebugSettings; // 0x240(0x80)
		FRigUnit_SpringIK_WorkData WorkData; // 0x2C0(0xB0)
	};


	// Struct ControlRig.ConstraintTarget
	// Size: 0x70 (0x70 - 0x0)
	struct FConstraintTarget	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		float Weight; // 0x60(0x4)
		bool bMaintainOffset; // 0x64(0x1)
		FTransformFilter Filter; // 0x65(0x9)
		unsigned char UnknownData00_7[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_TransformConstraint_WorkData
	// Size: 0x60 (0x60 - 0x0)
	struct FRigUnit_TransformConstraint_WorkData	
	{
	public:
		TArray<FConstraintData> ConstraintData; // 0x0(0x10)
		TMap<int32_t, int32_t> ConstraintDataToTargets; // 0x10(0x50)
	};


	// Struct ControlRig.RigUnit_TransformConstraint
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xF0 (0x2B0 - 0x1C0)
	struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName bone; // 0x1C0(0x4)
		ETransformSpaceMode BaseTransformSpace; // 0x1C4(0x1)
		unsigned char UnknownData00_6[0xB]; // 0x1C5(0xB) UNKNOWN PROPERTY
		FTransform BaseTransform; // 0x1D0(0x60)
		FName BaseBone; // 0x230(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x234(0x4) UNKNOWN PROPERTY
		TArray<FConstraintTarget> Targets; // 0x238(0x10)
		bool bUseInitialTransforms; // 0x248(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x249(0x7) UNKNOWN PROPERTY
		FRigUnit_TransformConstraint_WorkData WorkData; // 0x250(0x60)
	};


	// Struct ControlRig.RigUnit_TransformConstraintPerItem
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xF0 (0x2B0 - 0x1C0)
	struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Item; // 0x1C0(0x8)
		ETransformSpaceMode BaseTransformSpace; // 0x1C8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1C9(0x7) UNKNOWN PROPERTY
		FTransform BaseTransform; // 0x1D0(0x60)
		FRigElementKey BaseItem; // 0x230(0x8)
		TArray<FConstraintTarget> Targets; // 0x238(0x10)
		bool bUseInitialTransforms; // 0x248(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x249(0x7) UNKNOWN PROPERTY
		FRigUnit_TransformConstraint_WorkData WorkData; // 0x250(0x60)
	};


	// Struct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
	// Size: 0x2 (0x2 - 0x0)
	struct FRigUnit_ParentConstraint_AdvancedSettings	
	{
	public:
		EConstraintInterpType InterpolationType; // 0x0(0x1)
		EEulerRotationOrder RotationOrderForFilter; // 0x1(0x1)
	};


	// Struct ControlRig.RigUnit_ParentConstraint
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x60 (0x220 - 0x1C0)
	struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		bool bMaintainOffset; // 0x1C8(0x1)
		FTransformFilter Filter; // 0x1C9(0x9)
		unsigned char UnknownData00_6[0x6]; // 0x1D2(0x6) UNKNOWN PROPERTY
		TArray<FConstraintParent> Parents; // 0x1D8(0x10)
		FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings; // 0x1E8(0x2)
		unsigned char UnknownData01_6[0x2]; // 0x1EA(0x2) UNKNOWN PROPERTY
		float Weight; // 0x1EC(0x4)
		FCachedRigElement ChildCache; // 0x1F0(0x18)
		TArray<FCachedRigElement> ParentCaches; // 0x208(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x218(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ParentConstraintMath_AdvancedSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FRigUnit_ParentConstraintMath_AdvancedSettings	
	{
	public:
		EConstraintInterpType InterpolationType; // 0x0(0x1)
	};


	// Struct ControlRig.RigUnit_ParentConstraintMath
	// Inherited from FRigUnit_HighlevelBase -> FRigUnit -> FRigVMStruct
	// Size: 0xF8 (0x100 - 0x8)
	struct FRigUnit_ParentConstraintMath : public FRigUnit_HighlevelBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Input; // 0x10(0x60)
		TArray<FConstraintParent> Parents; // 0x70(0x10)
		FRigUnit_ParentConstraintMath_AdvancedSettings AdvancedSettings; // 0x80(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x81(0xF) UNKNOWN PROPERTY
		FTransform Output; // 0x90(0x60)
		TArray<FCachedRigElement> ParentCaches; // 0xF0(0x10)
	};


	// Struct ControlRig.RigUnit_PositionConstraint
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		bool bMaintainOffset; // 0x1C8(0x1)
		FFilterOptionPerAxis Filter; // 0x1C9(0x3)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray<FConstraintParent> Parents; // 0x1D0(0x10)
		float Weight; // 0x1E0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x1E4(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x50 (0x210 - 0x1C0)
	struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		bool bMaintainOffset; // 0x1C8(0x1)
		FFilterOptionPerAxis Filter; // 0x1C9(0x3)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray<FConstraintParent> Parents; // 0x1D0(0x10)
		float Weight; // 0x1E0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY
		FCachedRigElement ChildCache; // 0x1E8(0x18)
		TArray<FCachedRigElement> ParentCaches; // 0x200(0x10)
	};


	// Struct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
	// Size: 0x2 (0x2 - 0x0)
	struct FRigUnit_RotationConstraint_AdvancedSettings	
	{
	public:
		EConstraintInterpType InterpolationType; // 0x0(0x1)
		EEulerRotationOrder RotationOrderForFilter; // 0x1(0x1)
	};


	// Struct ControlRig.RigUnit_RotationConstraint
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		bool bMaintainOffset; // 0x1C8(0x1)
		FFilterOptionPerAxis Filter; // 0x1C9(0x3)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray<FConstraintParent> Parents; // 0x1D0(0x10)
		FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings; // 0x1E0(0x2)
		unsigned char UnknownData01_6[0x2]; // 0x1E2(0x2) UNKNOWN PROPERTY
		float Weight; // 0x1E4(0x4)
		unsigned char UnknownData02_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x50 (0x210 - 0x1C0)
	struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		bool bMaintainOffset; // 0x1C8(0x1)
		FFilterOptionPerAxis Filter; // 0x1C9(0x3)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray<FConstraintParent> Parents; // 0x1D0(0x10)
		FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings; // 0x1E0(0x2)
		unsigned char UnknownData01_6[0x2]; // 0x1E2(0x2) UNKNOWN PROPERTY
		float Weight; // 0x1E4(0x4)
		FCachedRigElement ChildCache; // 0x1E8(0x18)
		TArray<FCachedRigElement> ParentCaches; // 0x200(0x10)
	};


	// Struct ControlRig.RigUnit_ScaleConstraint
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		bool bMaintainOffset; // 0x1C8(0x1)
		FFilterOptionPerAxis Filter; // 0x1C9(0x3)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray<FConstraintParent> Parents; // 0x1D0(0x10)
		float Weight; // 0x1E0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x1E4(0xC) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x50 (0x210 - 0x1C0)
	struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Child; // 0x1C0(0x8)
		bool bMaintainOffset; // 0x1C8(0x1)
		FFilterOptionPerAxis Filter; // 0x1C9(0x3)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray<FConstraintParent> Parents; // 0x1D0(0x10)
		float Weight; // 0x1E0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY
		FCachedRigElement ChildCache; // 0x1E8(0x18)
		TArray<FCachedRigElement> ParentCaches; // 0x200(0x10)
	};


	// Struct ControlRig.RigUnit_TwistBones_WorkData
	// Size: 0x30 (0x30 - 0x0)
	struct FRigUnit_TwistBones_WorkData	
	{
	public:
		TArray<FCachedRigElement> CachedItems; // 0x0(0x10)
		TArray<float> ItemRatios; // 0x10(0x10)
		TArray<FTransform> ItemTransforms; // 0x20(0x10)
	};


	// Struct ControlRig.RigUnit_TwistBones
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x80 (0x240 - 0x1C0)
	struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName StartBone; // 0x1C0(0x4)
		FName EndBone; // 0x1C4(0x4)
		FVector TwistAxis; // 0x1C8(0x18)
		FVector PoleAxis; // 0x1E0(0x18)
		ERigVMAnimEasingType TwistEaseType; // 0x1F8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1F9(0x3) UNKNOWN PROPERTY
		float Weight; // 0x1FC(0x4)
		bool bPropagateToChildren; // 0x200(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x201(0x7) UNKNOWN PROPERTY
		FRigUnit_TwistBones_WorkData WorkData; // 0x208(0x30)
		unsigned char UnknownData02_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_TwistBonesPerItem
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x80 (0x240 - 0x1C0)
	struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKeyCollection Items; // 0x1C0(0x10)
		FVector TwistAxis; // 0x1D0(0x18)
		FVector PoleAxis; // 0x1E8(0x18)
		ERigVMAnimEasingType TwistEaseType; // 0x200(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x201(0x3) UNKNOWN PROPERTY
		float Weight; // 0x204(0x4)
		bool bPropagateToChildren; // 0x208(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x209(0x7) UNKNOWN PROPERTY
		FRigUnit_TwistBones_WorkData WorkData; // 0x210(0x30)
	};


	// Struct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
	// Size: 0x70 (0x70 - 0x0)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Scale; // 0x4(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x10(0x60)
	};


	// Struct ControlRig.RigUnit_TwoBoneIKSimple
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x1C0 (0x380 - 0x1C0)
	struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName BoneA; // 0x1C0(0x4)
		FName BoneB; // 0x1C4(0x4)
		FName EffectorBone; // 0x1C8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FTransform Effector; // 0x1D0(0x60)
		FVector PrimaryAxis; // 0x230(0x18)
		FVector SecondaryAxis; // 0x248(0x18)
		float SecondaryAxisWeight; // 0x260(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x264(0x4) UNKNOWN PROPERTY
		FVector PoleVector; // 0x268(0x18)
		EControlRigVectorKind PoleVectorKind; // 0x280(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x281(0x3) UNKNOWN PROPERTY
		FName PoleVectorSpace; // 0x284(0x4)
		bool bEnableStretch; // 0x288(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x289(0x3) UNKNOWN PROPERTY
		float StretchStartRatio; // 0x28C(0x4)
		float StretchMaximumRatio; // 0x290(0x4)
		float Weight; // 0x294(0x4)
		float BoneALength; // 0x298(0x4)
		float BoneBLength; // 0x29C(0x4)
		bool bPropagateToChildren; // 0x2A0(0x1)
		unsigned char UnknownData04_6[0xF]; // 0x2A1(0xF) UNKNOWN PROPERTY
		FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x2B0(0x70)
		FCachedRigElement CachedBoneAIndex; // 0x320(0x18)
		FCachedRigElement CachedBoneBIndex; // 0x338(0x18)
		FCachedRigElement CachedEffectorBoneIndex; // 0x350(0x18)
		FCachedRigElement CachedPoleVectorSpaceIndex; // 0x368(0x18)
	};


	// Struct ControlRig.RigUnit_TwoBoneIKSimplePerItem
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x1D0 (0x390 - 0x1C0)
	struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey ItemA; // 0x1C0(0x8)
		FRigElementKey ItemB; // 0x1C8(0x8)
		FRigElementKey EffectorItem; // 0x1D0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x1D8(0x8) UNKNOWN PROPERTY
		FTransform Effector; // 0x1E0(0x60)
		FVector PrimaryAxis; // 0x240(0x18)
		FVector SecondaryAxis; // 0x258(0x18)
		float SecondaryAxisWeight; // 0x270(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x274(0x4) UNKNOWN PROPERTY
		FVector PoleVector; // 0x278(0x18)
		EControlRigVectorKind PoleVectorKind; // 0x290(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x291(0x3) UNKNOWN PROPERTY
		FRigElementKey PoleVectorSpace; // 0x294(0x8)
		bool bEnableStretch; // 0x29C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x29D(0x3) UNKNOWN PROPERTY
		float StretchStartRatio; // 0x2A0(0x4)
		float StretchMaximumRatio; // 0x2A4(0x4)
		float Weight; // 0x2A8(0x4)
		float ItemALength; // 0x2AC(0x4)
		float ItemBLength; // 0x2B0(0x4)
		bool bPropagateToChildren; // 0x2B4(0x1)
		unsigned char UnknownData04_6[0xB]; // 0x2B5(0xB) UNKNOWN PROPERTY
		FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x2C0(0x70)
		FCachedRigElement CachedItemAIndex; // 0x330(0x18)
		FCachedRigElement CachedItemBIndex; // 0x348(0x18)
		FCachedRigElement CachedEffectorItemIndex; // 0x360(0x18)
		FCachedRigElement CachedPoleVectorSpaceIndex; // 0x378(0x18)
	};


	// Struct ControlRig.RigUnit_TwoBoneIKSimpleVectors
	// Inherited from FRigUnit_HighlevelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x78 (0x80 - 0x8)
	struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase	
	{
	public:
		FVector Root; // 0x8(0x18)
		FVector PoleVector; // 0x20(0x18)
		FVector Effector; // 0x38(0x18)
		bool bEnableStretch; // 0x50(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		float StretchStartRatio; // 0x54(0x4)
		float StretchMaximumRatio; // 0x58(0x4)
		float BoneALength; // 0x5C(0x4)
		float BoneBLength; // 0x60(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FVector Elbow; // 0x68(0x18)
	};


	// Struct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
	// Inherited from FRigUnit_HighlevelBase -> FRigUnit -> FRigVMStruct
	// Size: 0x198 (0x1A0 - 0x8)
	struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Root; // 0x10(0x60)
		FVector PoleVector; // 0x70(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		FTransform Effector; // 0x90(0x60)
		FVector PrimaryAxis; // 0xF0(0x18)
		FVector SecondaryAxis; // 0x108(0x18)
		float SecondaryAxisWeight; // 0x120(0x4)
		bool bEnableStretch; // 0x124(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x125(0x3) UNKNOWN PROPERTY
		float StretchStartRatio; // 0x128(0x4)
		float StretchMaximumRatio; // 0x12C(0x4)
		float BoneALength; // 0x130(0x4)
		float BoneBLength; // 0x134(0x4)
		unsigned char UnknownData03_6[0x8]; // 0x138(0x8) UNKNOWN PROPERTY
		FTransform Elbow; // 0x140(0x60)
	};


	// Struct ControlRig.RigUnit_GetCandidates
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigUnit_GetCandidates : public FRigUnit	
	{
	public:
		FRigElementKey Connector; // 0x8(0x8)
		TArray<FRigElementKey> Candidates; // 0x10(0x10)
	};


	// Struct ControlRig.RigUnit_DiscardMatches
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x1E0 - 0x1C0)
	struct FRigUnit_DiscardMatches : public FRigUnitMutable	
	{
	public:
		TArray<FRigElementKey> Excluded; // 0x1C0(0x10)
		FString Message; // 0x1D0(0x10)
	};


	// Struct ControlRig.RigUnit_SetDefaultMatch
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x1D0 - 0x1C0)
	struct FRigUnit_SetDefaultMatch : public FRigUnitMutable	
	{
	public:
		FRigElementKey Default; // 0x1C0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_ConnectorExecution
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x1B8 (0x1C0 - 0x8)
	struct FRigUnit_ConnectorExecution : public FRigUnit	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FControlRigExecuteContext ExecuteContext; // 0x10(0x1B0)
	};


	// Struct ControlRig.RigUnit_PointSimulation_DebugSettings
	// Size: 0x80 (0x80 - 0x0)
	struct FRigUnit_PointSimulation_DebugSettings	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Scale; // 0x4(0x4)
		float CollisionScale; // 0x8(0x4)
		bool bDrawPointsAsSpheres; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x10(0x10)
		FTransform WorldOffset; // 0x20(0x60)
	};


	// Struct ControlRig.RigUnit_PointSimulation_BoneTarget
	// Size: 0x10 (0x10 - 0x0)
	struct FRigUnit_PointSimulation_BoneTarget	
	{
	public:
		FName bone; // 0x0(0x4)
		int32_t TranslationPoint; // 0x4(0x4)
		int32_t PrimaryAimPoint; // 0x8(0x4)
		int32_t SecondaryAimPoint; // 0xC(0x4)
	};


	// Struct ControlRig.RigUnit_PointSimulation_WorkData
	// Size: 0x88 (0x88 - 0x0)
	struct FRigUnit_PointSimulation_WorkData	
	{
	public:
		FCRSimPointContainer Simulation; // 0x0(0x78)
		TArray<FCachedRigElement> BoneIndices; // 0x78(0x10)
	};


	// Struct ControlRig.RigUnit_PointSimulation
	// Inherited from FRigVMFunction_SimBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0x210 (0x310 - 0x100)
	struct FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable	
	{
	public:
		TArray<FRigVMSimPoint> Points; // 0x100(0x10)
		TArray<FCRSimLinearSpring> Links; // 0x110(0x10)
		TArray<FCRSimPointForce> Forces; // 0x120(0x10)
		TArray<FCRSimSoftCollision> CollisionVolumes; // 0x130(0x10)
		float SimulatedStepsPerSecond; // 0x140(0x4)
		ERigVMSimPointIntegrateType IntegratorType; // 0x144(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x145(0x3) UNKNOWN PROPERTY
		float VerletBlend; // 0x148(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0x150(0x10)
		bool bLimitLocalPosition; // 0x160(0x1)
		bool bPropagateToChildren; // 0x161(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x162(0x6) UNKNOWN PROPERTY
		FVector PrimaryAimAxis; // 0x168(0x18)
		FVector SecondaryAimAxis; // 0x180(0x18)
		unsigned char UnknownData03_6[0x8]; // 0x198(0x8) UNKNOWN PROPERTY
		FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0x1A0(0x80)
		FRigVMFourPointBezier Bezier; // 0x220(0x60)
		FRigUnit_PointSimulation_WorkData WorkData; // 0x280(0x88)
		unsigned char UnknownData04_7[0x8]; // 0x308(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SpringInterp
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigUnit_SpringInterp : public FRigVMFunction_SimBase	
	{
	public:
		float Current; // 0x8(0x4)
		float Target; // 0xC(0x4)
		float Stiffness; // 0x10(0x4)
		float CriticalDamping; // 0x14(0x4)
		float Mass; // 0x18(0x4)
		float Result; // 0x1C(0x4)
		FFloatSpringState SpringState; // 0x20(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRig.RigUnit_SpringInterpVector
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x90 (0x98 - 0x8)
	struct FRigUnit_SpringInterpVector : public FRigVMFunction_SimBase	
	{
	public:
		FVector Current; // 0x8(0x18)
		FVector Target; // 0x20(0x18)
		float Stiffness; // 0x38(0x4)
		float CriticalDamping; // 0x3C(0x4)
		float Mass; // 0x40(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x48(0x18)
		FVectorSpringState SpringState; // 0x60(0x38)
	};


	// Struct ControlRig.RigUnit_SpringInterpV2
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_SpringInterpV2 : public FRigVMFunction_SimBase	
	{
	public:
		float Target; // 0x8(0x4)
		float Strength; // 0xC(0x4)
		float CriticalDamping; // 0x10(0x4)
		float Force; // 0x14(0x4)
		bool bUseCurrentInput; // 0x18(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float Current; // 0x1C(0x4)
		float TargetVelocityAmount; // 0x20(0x4)
		bool bInitializeFromTarget; // 0x24(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		float Result; // 0x28(0x4)
		float Velocity; // 0x2C(0x4)
		float SimulatedResult; // 0x30(0x4)
		FFloatSpringState SpringState; // 0x34(0xC)
	};


	// Struct ControlRig.RigUnit_SpringInterpVectorV2
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0xE0 (0xE8 - 0x8)
	struct FRigUnit_SpringInterpVectorV2 : public FRigVMFunction_SimBase	
	{
	public:
		FVector Target; // 0x8(0x18)
		float Strength; // 0x20(0x4)
		float CriticalDamping; // 0x24(0x4)
		FVector Force; // 0x28(0x18)
		bool bUseCurrentInput; // 0x40(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FVector Current; // 0x48(0x18)
		float TargetVelocityAmount; // 0x60(0x4)
		bool bInitializeFromTarget; // 0x64(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		FVector Result; // 0x68(0x18)
		FVector Velocity; // 0x80(0x18)
		FVector SimulatedResult; // 0x98(0x18)
		FVectorSpringState SpringState; // 0xB0(0x38)
	};


	// Struct ControlRig.RigUnit_SpringInterpQuaternionV2
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x128 (0x130 - 0x8)
	struct FRigUnit_SpringInterpQuaternionV2 : public FRigVMFunction_SimBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Target; // 0x10(0x20)
		float Strength; // 0x30(0x4)
		float CriticalDamping; // 0x34(0x4)
		FVector Torque; // 0x38(0x18)
		bool bUseCurrentInput; // 0x50(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x51(0xF) UNKNOWN PROPERTY
		FQuat Current; // 0x60(0x20)
		float TargetVelocityAmount; // 0x80(0x4)
		bool bInitializeFromTarget; // 0x84(0x1)
		unsigned char UnknownData02_6[0xB]; // 0x85(0xB) UNKNOWN PROPERTY
		FQuat Result; // 0x90(0x20)
		FVector AngularVelocity; // 0xB0(0x18)
		unsigned char UnknownData03_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FQuat SimulatedResult; // 0xD0(0x20)
		FQuaternionSpringState SpringState; // 0xF0(0x40)
	};

}
