#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OptimusCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct OptimusCore.Optimus_ShaderBinding
	// Size: 0x10 (0x10 - 0x0)
	struct FOptimus_ShaderBinding	
	{
	public:
		FName Name; // 0x0(0x4)
		FOptimusDataTypeRef DataType; // 0x4(0xC)
	};


	// Struct OptimusCore.OptimusDataTypeRef
	// Size: 0xC (0xC - 0x0)
	struct FOptimusDataTypeRef	
	{
	public:
		FName TypeName; // 0x0(0x4)
		TWeakObjectPtr TypeObject; // 0x4(0x8)
	};


	// Struct OptimusCore.OptimusParameterBinding
	// Size: 0x58 (0x58 - 0x0)
	struct FOptimusParameterBinding	
	{
	public:
		FOptimusValidatedName Name; // 0x0(0x4)
		FOptimusDataTypeRef DataType; // 0x4(0xC)
		FOptimusDataDomain DataDomain; // 0x10(0x40)
		bool bSupportAtomicIfCompatibleDataType; // 0x50(0x1)
		bool bSupportRead; // 0x51(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusDataDomain
	// Size: 0x40 (0x40 - 0x0)
	struct FOptimusDataDomain	
	{
	public:
		EOptimusDataDomainType Type; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray DimensionNames; // 0x8(0x10)
		int32_t Multiplier; // 0x18(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FString Expression; // 0x20(0x10)
		TArray LevelNames; // 0x30(0x10)
	};


	// Struct OptimusCore.OptimusValidatedName
	// Size: 0x4 (0x4 - 0x0)
	struct FOptimusValidatedName	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct OptimusCore.OptimusParameterBindingArray
	// Size: 0x10 (0x10 - 0x0)
	struct FOptimusParameterBindingArray	
	{
	public:
		TArray InnerArray; // 0x0(0x10)
	};


	// Struct OptimusCore.OptimusConstantIdentifier
	// Size: 0xC (0xC - 0x0)
	struct FOptimusConstantIdentifier	
	{
	public:
		FName NodePath; // 0x0(0x4)
		FName GroupName; // 0x4(0x4)
		FName ConstantName; // 0x8(0x4)
	};


	// Struct OptimusCore.OptimusConstantDefinition
	// Size: 0x20 (0x20 - 0x0)
	struct FOptimusConstantDefinition	
	{
	public:
		FOptimusConstantIdentifier ReferencedConstant; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString Expression; // 0x10(0x10)
	};


	// Struct OptimusCore.OptimusConstant
	// Size: 0x38 (0x38 - 0x0)
	struct FOptimusConstant	
	{
	public:
		FOptimusConstantIdentifier Identifier; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FOptimusConstantDefinition Definition; // 0x10(0x20)
		int32_t ComponentBindingIndex; // 0x30(0x4)
		EOptimusConstantType Type; // 0x34(0x4)
	};


	// Struct OptimusCore.OptimusConstantIndex
	// Size: 0xC (0xC - 0x0)
	struct FOptimusConstantIndex	
	{
	public:
		int32_t KernelIndex; // 0x0(0x4)
		EOptimusConstantType Type; // 0x4(0x4)
		int32_t ConstantIndex; // 0x8(0x4)
	};


	// Struct OptimusCore.OptimusKernelConstantContainer
	// Size: 0x70 (0x70 - 0x0)
	struct FOptimusKernelConstantContainer	
	{
	public:
		TArray InputConstants; // 0x0(0x10)
		TArray OutputConstants; // 0x10(0x10)
		TMap GroupNameToBindingIndex; // 0x20(0x50)
	};


	// Struct OptimusCore.OptimusConstantContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FOptimusConstantContainer	
	{
	public:
		TArray KernelContainers; // 0x0(0x10)
	};


	// Struct OptimusCore.OptimusShaderText
	// Size: 0x20 (0x20 - 0x0)
	struct FOptimusShaderText	
	{
	public:
		FString Declarations; // 0x0(0x10)
		FString ShaderText; // 0x10(0x10)
	};


	// Struct OptimusCore.OptimusAction
	// Size: 0x18 (0x18 - 0x0)
	struct FOptimusAction	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusCompoundAction
	// Inherited from FOptimusAction
	// Size: 0x10 (0x28 - 0x18)
	struct FOptimusCompoundAction : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusComponentBindingAction_AddBinding
	// Inherited from FOptimusAction
	// Size: 0x10 (0x28 - 0x18)
	struct FOptimusComponentBindingAction_AddBinding : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusComponentBindingAction_RemoveBinding
	// Inherited from FOptimusAction
	// Size: 0x28 (0x40 - 0x18)
	struct FOptimusComponentBindingAction_RemoveBinding : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x18(0x28) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusComponentBindingAction_RenameBinding
	// Inherited from FOptimusAction
	// Size: 0x8 (0x20 - 0x18)
	struct FOptimusComponentBindingAction_RenameBinding : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusComponentBindingAction_SetComponentSource
	// Inherited from FOptimusAction
	// Size: 0x18 (0x30 - 0x18)
	struct FOptimusComponentBindingAction_SetComponentSource : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x18(0x18) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeAction_RenameNode
	// Inherited from FOptimusAction
	// Size: 0x30 (0x48 - 0x18)
	struct FOptimusNodeAction_RenameNode : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x18(0x30) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeAction_MoveNode
	// Inherited from FOptimusAction
	// Size: 0x30 (0x48 - 0x18)
	struct FOptimusNodeAction_MoveNode : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x18(0x30) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeAction_SetPinValue
	// Inherited from FOptimusAction
	// Size: 0x30 (0x48 - 0x18)
	struct FOptimusNodeAction_SetPinValue : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x18(0x30) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeAction_SetPinName
	// Inherited from FOptimusAction
	// Size: 0x18 (0x30 - 0x18)
	struct FOptimusNodeAction_SetPinName : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x18(0x18) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeAction_SetPinType
	// Inherited from FOptimusAction
	// Size: 0x18 (0x30 - 0x18)
	struct FOptimusNodeAction_SetPinType : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x18(0x18) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeAction_SetPinDataDomain
	// Inherited from FOptimusAction
	// Size: 0x90 (0xA8 - 0x18)
	struct FOptimusNodeAction_SetPinDataDomain : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x90]; // 0x18(0x90) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeAction_AddRemovePin
	// Inherited from FOptimusAction
	// Size: 0x98 (0xB0 - 0x18)
	struct FOptimusNodeAction_AddRemovePin : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x98]; // 0x18(0x98) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeAction_AddPin
	// Inherited from FOptimusNodeAction_AddRemovePin -> FOptimusAction
	// Size: 0x0 (0xB0 - 0xB0)
	struct FOptimusNodeAction_AddPin : public FOptimusNodeAction_AddRemovePin	
	{
	public:
	};


	// Struct OptimusCore.OptimusNodeAction_AddGroupingPin
	// Inherited from FOptimusNodeAction_AddRemovePin -> FOptimusAction
	// Size: 0x0 (0xB0 - 0xB0)
	struct FOptimusNodeAction_AddGroupingPin : public FOptimusNodeAction_AddRemovePin	
	{
	public:
	};


	// Struct OptimusCore.OptimusNodeAction_RemovePin
	// Inherited from FOptimusNodeAction_AddRemovePin -> FOptimusAction
	// Size: 0x0 (0xB0 - 0xB0)
	struct FOptimusNodeAction_RemovePin : public FOptimusNodeAction_AddRemovePin	
	{
	public:
	};


	// Struct OptimusCore.OptimusNodeAction_MovePin
	// Inherited from FOptimusAction
	// Size: 0x30 (0x48 - 0x18)
	struct FOptimusNodeAction_MovePin : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x18(0x30) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_AddGraph
	// Inherited from FOptimusAction
	// Size: 0x78 (0x90 - 0x18)
	struct FOptimusNodeGraphAction_AddGraph : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x78]; // 0x18(0x78) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_RemoveGraph
	// Inherited from FOptimusAction
	// Size: 0x40 (0x58 - 0x18)
	struct FOptimusNodeGraphAction_RemoveGraph : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x18(0x40) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_RenameGraph
	// Inherited from FOptimusAction
	// Size: 0x28 (0x40 - 0x18)
	struct FOptimusNodeGraphAction_RenameGraph : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x18(0x28) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_AddNode
	// Inherited from FOptimusAction
	// Size: 0x88 (0xA0 - 0x18)
	struct FOptimusNodeGraphAction_AddNode : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x88]; // 0x18(0x88) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_DuplicateNode
	// Inherited from FOptimusAction
	// Size: 0x88 (0xA0 - 0x18)
	struct FOptimusNodeGraphAction_DuplicateNode : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x88]; // 0x18(0x88) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_RemoveNode
	// Inherited from FOptimusAction
	// Size: 0x48 (0x60 - 0x18)
	struct FOptimusNodeGraphAction_RemoveNode : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x18(0x48) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_AddRemoveNodePair
	// Inherited from FOptimusAction
	// Size: 0x20 (0x38 - 0x18)
	struct FOptimusNodeGraphAction_AddRemoveNodePair : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x18(0x20) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_AddNodePair
	// Inherited from FOptimusNodeGraphAction_AddRemoveNodePair -> FOptimusAction
	// Size: 0x20 (0x58 - 0x38)
	struct FOptimusNodeGraphAction_AddNodePair : public FOptimusNodeGraphAction_AddRemoveNodePair	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x38(0x20) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_RemoveNodePair
	// Inherited from FOptimusNodeGraphAction_AddRemoveNodePair -> FOptimusAction
	// Size: 0x0 (0x38 - 0x38)
	struct FOptimusNodeGraphAction_RemoveNodePair : public FOptimusNodeGraphAction_AddRemoveNodePair	
	{
	public:
	};


	// Struct OptimusCore.OptimusNodeGraphAction_AddRemoveLink
	// Inherited from FOptimusAction
	// Size: 0x28 (0x40 - 0x18)
	struct FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x18(0x28) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_AddLink
	// Inherited from FOptimusNodeGraphAction_AddRemoveLink -> FOptimusAction
	// Size: 0x0 (0x40 - 0x40)
	struct FOptimusNodeGraphAction_AddLink : public FOptimusNodeGraphAction_AddRemoveLink	
	{
	public:
	};


	// Struct OptimusCore.OptimusNodeGraphAction_RemoveLink
	// Inherited from FOptimusNodeGraphAction_AddRemoveLink -> FOptimusAction
	// Size: 0x0 (0x40 - 0x40)
	struct FOptimusNodeGraphAction_RemoveLink : public FOptimusNodeGraphAction_AddRemoveLink	
	{
	public:
	};


	// Struct OptimusCore.OptimusNodeGraphAction_ConnectAdderPin
	// Inherited from FOptimusNodeGraphAction_AddRemoveLink -> FOptimusAction
	// Size: 0x58 (0x98 - 0x40)
	struct FOptimusNodeGraphAction_ConnectAdderPin : public FOptimusNodeGraphAction_AddRemoveLink	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0x40(0x58) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_PackageKernelFunction
	// Inherited from FOptimusAction
	// Size: 0x90 (0xA8 - 0x18)
	struct FOptimusNodeGraphAction_PackageKernelFunction : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x90]; // 0x18(0x90) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
	// Inherited from FOptimusAction
	// Size: 0x48 (0x60 - 0x18)
	struct FOptimusNodeGraphAction_UnpackageKernelFunction : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x18(0x48) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusResourceAction_AddResource
	// Inherited from FOptimusAction
	// Size: 0x50 (0x68 - 0x18)
	struct FOptimusResourceAction_AddResource : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x18(0x50) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusResourceAction_RemoveResource
	// Inherited from FOptimusAction
	// Size: 0x28 (0x40 - 0x18)
	struct FOptimusResourceAction_RemoveResource : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x18(0x28) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusResourceAction_RenameResource
	// Inherited from FOptimusAction
	// Size: 0x8 (0x20 - 0x18)
	struct FOptimusResourceAction_RenameResource : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusResourceAction_SetDataType
	// Inherited from FOptimusAction
	// Size: 0x20 (0x38 - 0x18)
	struct FOptimusResourceAction_SetDataType : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x18(0x20) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusResourceAction_SetDataDomain
	// Inherited from FOptimusAction
	// Size: 0x88 (0xA0 - 0x18)
	struct FOptimusResourceAction_SetDataDomain : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x88]; // 0x18(0x88) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusVariableAction_AddVariable
	// Inherited from FOptimusAction
	// Size: 0x10 (0x28 - 0x18)
	struct FOptimusVariableAction_AddVariable : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusVariableAction_RemoveVariable
	// Inherited from FOptimusAction
	// Size: 0x38 (0x50 - 0x18)
	struct FOptimusVariableAction_RemoveVariable : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x18(0x38) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusVariableAction_RenameVariable
	// Inherited from FOptimusAction
	// Size: 0x8 (0x20 - 0x18)
	struct FOptimusVariableAction_RenameVariable : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusVariableAction_SetDataType
	// Inherited from FOptimusAction
	// Size: 0x20 (0x38 - 0x18)
	struct FOptimusVariableAction_SetDataType : public FOptimusAction	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x18(0x20) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusAnimAttributeDescription
	// Size: 0x50 (0x50 - 0x0)
	struct FOptimusAnimAttributeDescription	
	{
	public:
		FString Name; // 0x0(0x10)
		FName BoneName; // 0x10(0x4)
		FOptimusDataTypeRef DataType; // 0x14(0xC)
		FOptimusValueContainerStruct DefaultValueStruct; // 0x20(0x10)
		FString HlslId; // 0x30(0x10)
		FName PinName; // 0x40(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UOptimusValueContainer DefaultValue; // 0x48(0x8)
	};


	// Struct OptimusCore.OptimusValueContainerStruct
	// Size: 0x10 (0x10 - 0x0)
	struct FOptimusValueContainerStruct	
	{
	public:
		FInstancedPropertyBag Value; // 0x0(0x10)
	};


	// Struct OptimusCore.OptimusAnimAttributeArray
	// Size: 0x10 (0x10 - 0x0)
	struct FOptimusAnimAttributeArray	
	{
	public:
		TArray InnerArray; // 0x0(0x10)
	};


	// Struct OptimusCore.OptimusDebugDrawParameters
	// Size: 0x14 (0x14 - 0x0)
	struct FOptimusDebugDrawParameters	
	{
	public:
		bool bForceEnable; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t MaxLineCount; // 0x4(0x4)
		int32_t MaxTriangleCount; // 0x8(0x4)
		int32_t MaxCharacterCount; // 0xC(0x4)
		int32_t FontSize; // 0x10(0x4)
	};


	// Struct OptimusCore.OptimusGraphVariableDescription
	// Size: 0x88 (0x88 - 0x0)
	struct FOptimusGraphVariableDescription	
	{
	public:
		FString Name; // 0x0(0x10)
		FShaderValueTypeHandle ValueType; // 0x10(0x8)
		FShaderValueContainer ShaderValue; // 0x18(0x20)
		int32_t Offset; // 0x38(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr SourceObject; // 0x40(0x20)
		unsigned char UnknownData03_6[0x18]; // 0x60(0x18) UNKNOWN PROPERTY
		TArray Value; // 0x78(0x10)
	};


	// Struct OptimusCore.OptimusNode_ComponentSource_DuplicationInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FOptimusNode_ComponentSource_DuplicationInfo	
	{
	public:
		FName BindingName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass ComponentType; // 0x8(0x8)
	};


	// Struct OptimusCore.OptimusSecondaryInputBindingsGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FOptimusSecondaryInputBindingsGroup	
	{
	public:
		FOptimusValidatedName GroupName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FOptimusParameterBindingArray BindingArray; // 0x8(0x10)
	};


	// Struct OptimusCore.OptimusNode_GetVariable_DuplicationInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FOptimusNode_GetVariable_DuplicationInfo	
	{
	public:
		FName VariableName; // 0x0(0x4)
		FOptimusDataTypeRef DataType; // 0x4(0xC)
		FString DefaultValue; // 0x10(0x10)
	};


	// Struct OptimusCore.OptimusPinPairInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FOptimusPinPairInfo	
	{
	public:
		TArray InputPinPath; // 0x0(0x10)
		TArray OutputPinPath; // 0x10(0x10)
	};


	// Struct OptimusCore.OptimusLoopTerminalInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FOptimusLoopTerminalInfo	
	{
	public:
		int32_t Count; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FOptimusParameterBindingArray Bindings; // 0x8(0x10)
	};


	// Struct OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FOptimusNode_ResourceAccessorBase_DuplicationInfo	
	{
	public:
		FName ResourceName; // 0x0(0x4)
		FOptimusDataTypeRef DataType; // 0x4(0xC)
		FOptimusDataDomain DataDomain; // 0x10(0x40)
	};


	// Struct OptimusCore.OptimusDataType
	// Size: 0x48 (0x48 - 0x0)
	struct FOptimusDataType	
	{
	public:
		FName TypeName; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText DisplayName; // 0x8(0x10)
		FShaderValueTypeHandle ShaderValueType; // 0x18(0x8)
		int32_t ShaderValueSize; // 0x20(0x4)
		FName TypeCategory; // 0x24(0x4)
		TWeakObjectPtr TypeObject; // 0x28(0x8)
		bool bHasCustomPinColor; // 0x30(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FLinearColor CustomPinColor; // 0x34(0x10)
		EOptimusDataTypeUsageFlags UsageFlags; // 0x44(0x1)
		EOptimusDataTypeFlags TypeFlags; // 0x45(0x1)
		unsigned char UnknownData05_7[0x2]; // 0x46(0x2) UNKNOWN PROPERTY
	};


	// Struct OptimusCore.OptimusComputeGraphInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FOptimusComputeGraphInfo	
	{
	public:
		EOptimusNodeGraphType GraphType; // 0x0(0x4)
		FName GraphName; // 0x4(0x4)
		UOptimusComputeGraph ComputeGraph; // 0x8(0x8)
	};


	// Struct OptimusCore.OptimusDeformerInstanceExecInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FOptimusDeformerInstanceExecInfo	
	{
	public:
		FName GraphName; // 0x0(0x4)
		EOptimusNodeGraphType GraphType; // 0x4(0x4)
		UComputeGraph ComputeGraph; // 0x8(0x8)
		FComputeGraphInstance ComputeGraphInstance; // 0x10(0x18)
	};


	// Struct OptimusCore.OptimusDeformerInstanceComponentBinding
	// Size: 0x8 (0x8 - 0x0)
	struct FOptimusDeformerInstanceComponentBinding	
	{
	public:
		FName ProviderName; // 0x0(0x4)
		FName ComponentName; // 0x4(0x4)
	};


	// Struct OptimusCore.OptimusExecutionDomain
	// Size: 0x18 (0x18 - 0x0)
	struct FOptimusExecutionDomain	
	{
	public:
		EOptimusExecutionDomainType Type; // 0x0(0x4)
		FName Name; // 0x4(0x4)
		FString Expression; // 0x8(0x10)
	};


	// Struct OptimusCore.OptimusFunctionNodeGraphHeader
	// Size: 0x28 (0x28 - 0x0)
	struct FOptimusFunctionNodeGraphHeader	
	{
	public:
		TWeakObjectPtr GraphPath; // 0x0(0x20)
		FName FunctionName; // 0x20(0x4)
		FName category; // 0x24(0x4)
	};


	// Struct OptimusCore.OptimusFunctionNodeGraphHeaderArray
	// Size: 0x10 (0x10 - 0x0)
	struct FOptimusFunctionNodeGraphHeaderArray	
	{
	public:
		TArray Headers; // 0x0(0x10)
	};


	// Struct OptimusCore.OptimusFunctionReferenceNodeSet
	// Size: 0x50 (0x50 - 0x0)
	struct FOptimusFunctionReferenceNodeSet	
	{
	public:
		TSet Nodes; // 0x0(0x50)
	};


	// Struct OptimusCore.OptimusFunctionReferenceData
	// Size: 0x50 (0x50 - 0x0)
	struct FOptimusFunctionReferenceData	
	{
	public:
		TMap FunctionReferences; // 0x0(0x50)
	};


	// Struct OptimusCore.OptimusVariableMetaDataEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FOptimusVariableMetaDataEntry	
	{
	public:
		FName Key; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Value; // 0x8(0x10)
	};

}
