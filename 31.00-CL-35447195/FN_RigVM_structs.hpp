#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RigVM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct RigVM.RigVMExtendedExecuteContext
	// Size: 0x228 (0x228 - 0x0)
	struct FRigVMExtendedExecuteContext	
	{
	public:
		unsigned char UnknownData01_2[0x228]; // 0x0(0x228) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMDrawContainer
	// Size: 0x18 (0x18 - 0x0)
	struct FRigVMDrawContainer	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray Instructions; // 0x8(0x10)
	};


	// Struct RigVM.RigVMDrawInstruction
	// Size: 0xC0 (0xC0 - 0x0)
	struct FRigVMDrawInstruction	
	{
	public:
		FName Name; // 0x0(0x4)
		TEnumAsByte PrimitiveType; // 0x4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray Positions; // 0x8(0x10)
		FLinearColor Color; // 0x18(0x10)
		float Thickness; // 0x28(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FTransform Transform; // 0x30(0x60)
		unsigned char UnknownData05_7[0x30]; // 0x90(0x30) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMRuntimeSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FRigVMRuntimeSettings	
	{
	public:
		int32_t MaximumArraySize; // 0x0(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x4(0x14) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMDispatchFactory
	// Size: 0x70 (0x70 - 0x0)
	struct FRigVMDispatchFactory	
	{
	public:
		unsigned char UnknownData01_2[0x70]; // 0x0(0x70) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMDispatch_CastEnumToInt
	// Inherited from FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_CastEnumToInt : public FRigVMDispatchFactory	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_CastIntToEnum
	// Inherited from FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_CastIntToEnum : public FRigVMDispatchFactory	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_CastObject
	// Inherited from FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_CastObject : public FRigVMDispatchFactory	
	{
	public:
	};


	// Struct RigVM.RigVMExternalVariableDef
	// Size: 0x28 (0x28 - 0x0)
	struct FRigVMExternalVariableDef	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMExternalVariable
	// Inherited from FRigVMExternalVariableDef
	// Size: 0x8 (0x30 - 0x28)
	struct FRigVMExternalVariable : public FRigVMExternalVariableDef	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMStruct
	// Size: 0x8 (0x8 - 0x0)
	struct FRigVMStruct	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AnimBase
	// Inherited from FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_AnimBase : public FRigVMStruct	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_DebugBase
	// Inherited from FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_DebugBase : public FRigVMStruct	
	{
	public:
	};


	// Struct RigVM.RigVMStructMutable
	// Inherited from FRigVMStruct
	// Size: 0xF8 (0x100 - 0x8)
	struct FRigVMStructMutable : public FRigVMStruct	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FRigVMExecuteContext ExecuteContext; // 0x10(0xF0)
	};


	// Struct RigVM.RigVMExecuteContext
	// Size: 0xF0 (0xF0 - 0x0)
	struct FRigVMExecuteContext	
	{
	public:
		unsigned char UnknownData01_2[0xF0]; // 0x0(0xF0) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugBaseMutable
	// Inherited from FRigVMStructMutable -> FRigVMStruct
	// Size: 0x0 (0x100 - 0x100)
	struct FRigVMFunction_DebugBaseMutable : public FRigVMStructMutable	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathBase
	// Inherited from FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathBase : public FRigVMStruct	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathMutableBase
	// Inherited from FRigVMStructMutable -> FRigVMStruct
	// Size: 0x0 (0x100 - 0x100)
	struct FRigVMFunction_MathMutableBase : public FRigVMStructMutable	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_Sequence
	// Inherited from FRigVMStruct
	// Size: 0x2D8 (0x2E0 - 0x8)
	struct FRigVMFunction_Sequence : public FRigVMStruct	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FRigVMExecuteContext ExecuteContext; // 0x10(0xF0)
		FRigVMExecuteContext A; // 0x100(0xF0)
		FRigVMExecuteContext B; // 0x1F0(0xF0)
	};


	// Struct RigVM.RigVMUnknownType
	// Size: 0x4 (0x4 - 0x0)
	struct FRigVMUnknownType	
	{
	public:
		uint32_t Hash; // 0x0(0x4)
	};


	// Struct RigVM.RigVMFunction_SimBase
	// Inherited from FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_SimBase : public FRigVMStruct	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_SimBaseMutable
	// Inherited from FRigVMStructMutable -> FRigVMStruct
	// Size: 0x0 (0x100 - 0x100)
	struct FRigVMFunction_SimBaseMutable : public FRigVMStructMutable	
	{
	public:
	};


	// Struct RigVM.RigVMGraphFunctionStore
	// Size: 0x20 (0x20 - 0x0)
	struct FRigVMGraphFunctionStore	
	{
	public:
		TArray PublicFunctions; // 0x0(0x10)
		TArray PrivateFunctions; // 0x10(0x10)
	};


	// Struct RigVM.RigVMGraphFunctionData
	// Size: 0x380 (0x380 - 0x0)
	struct FRigVMGraphFunctionData	
	{
	public:
		FRigVMGraphFunctionHeader Header; // 0x0(0x138)
		FRigVMFunctionCompilationData CompilationData; // 0x138(0x238)
		FString SerializedCollapsedNode; // 0x370(0x10)
	};


	// Struct RigVM.RigVMFunctionCompilationData
	// Size: 0x238 (0x238 - 0x0)
	struct FRigVMFunctionCompilationData	
	{
	public:
		FRigVMByteCode ByteCode; // 0x0(0xB0)
		TArray FunctionNames; // 0xB0(0x10)
		TArray WorkPropertyDescriptions; // 0xC0(0x10)
		TArray WorkPropertyPathDescriptions; // 0xD0(0x10)
		TArray LiteralPropertyDescriptions; // 0xE0(0x10)
		TArray LiteralPropertyPathDescriptions; // 0xF0(0x10)
		TArray DebugPropertyDescriptions; // 0x100(0x10)
		TArray DebugPropertyPathDescriptions; // 0x110(0x10)
		TArray ExternalPropertyDescriptions; // 0x120(0x10)
		TArray ExternalPropertyPathDescriptions; // 0x130(0x10)
		TMap ExternalRegisterIndexToVariable; // 0x140(0x50)
		TMap Operands; // 0x190(0x50)
		uint32_t Hash; // 0x1E0(0x4)
		bool bEncounteredSurpressedErrors; // 0x1E4(0x1)
		unsigned char UnknownData01_7[0x53]; // 0x1E5(0x53) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMOperand
	// Size: 0x6 (0x6 - 0x0)
	struct FRigVMOperand	
	{
	public:
		ERigVMMemoryType MemoryType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x1(0x1) UNKNOWN PROPERTY
		uint16_t RegisterIndex; // 0x2(0x2)
		uint16_t RegisterOffset; // 0x4(0x2)
	};


	// Struct RigVM.RigVMFunctionCompilationPropertyPath
	// Size: 0x28 (0x28 - 0x0)
	struct FRigVMFunctionCompilationPropertyPath	
	{
	public:
		int32_t PropertyIndex; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString HeadCPPType; // 0x8(0x10)
		FString SegmentPath; // 0x18(0x10)
	};


	// Struct RigVM.RigVMFunctionCompilationPropertyDescription
	// Size: 0x48 (0x48 - 0x0)
	struct FRigVMFunctionCompilationPropertyDescription	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString CPPType; // 0x8(0x10)
		TWeakObjectPtr CPPTypeObject; // 0x18(0x20)
		FString DefaultValue; // 0x38(0x10)
	};


	// Struct RigVM.RigVMByteCode
	// Size: 0xB0 (0xB0 - 0x0)
	struct FRigVMByteCode	
	{
	public:
		TArray ByteCode; // 0x0(0x10)
		int32_t NumInstructions; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray Entries; // 0x18(0x10)
		TArray BranchInfos; // 0x28(0x10)
		TArray PredicateBranches; // 0x38(0x10)
		FString PublicContextPathName; // 0x48(0x10)
		unsigned char UnknownData03_7[0x58]; // 0x58(0x58) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMPredicateBranch
	// Size: 0x30 (0x30 - 0x0)
	struct FRigVMPredicateBranch	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMBranchInfo
	// Size: 0x14 (0x14 - 0x0)
	struct FRigVMBranchInfo	
	{
	public:
		int32_t Index; // 0x0(0x4)
		FName Label; // 0x4(0x4)
		int32_t InstructionIndex; // 0x8(0x4)
		int32_t ArgumentIndex; // 0xC(0x4)
		uint16_t FirstInstruction; // 0x10(0x2)
		uint16_t LastInstruction; // 0x12(0x2)
	};


	// Struct RigVM.RigVMByteCodeEntry
	// Size: 0x8 (0x8 - 0x0)
	struct FRigVMByteCodeEntry	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t InstructionIndex; // 0x4(0x4)
	};


	// Struct RigVM.RigVMGraphFunctionHeader
	// Size: 0x138 (0x138 - 0x0)
	struct FRigVMGraphFunctionHeader	
	{
	public:
		FRigVMGraphFunctionIdentifier LibraryPointer; // 0x0(0x40)
		FRigVMVariant Variant; // 0x40(0x20)
		FName Name; // 0x60(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FString NodeTitle; // 0x68(0x10)
		FLinearColor NodeColor; // 0x78(0x10)
		FText ToolTip; // 0x88(0x10)
		FString Description; // 0x98(0x10)
		FString category; // 0xA8(0x10)
		FString Keywords; // 0xB8(0x10)
		TArray Arguments; // 0xC8(0x10)
		TMap Dependencies; // 0xD8(0x50)
		TArray ExternalVariables; // 0x128(0x10)
	};


	// Struct RigVM.RigVMGraphFunctionIdentifier
	// Size: 0x40 (0x40 - 0x0)
	struct FRigVMGraphFunctionIdentifier	
	{
	public:
		FSoftObjectPath LibraryNode; // 0x0(0x18)
		FString LibraryNodePath; // 0x18(0x10)
		FSoftObjectPath HostObject; // 0x28(0x18)
	};


	// Struct RigVM.RigVMGraphFunctionArgument
	// Size: 0xA0 (0xA0 - 0x0)
	struct FRigVMGraphFunctionArgument	
	{
	public:
		FName Name; // 0x0(0x4)
		FName DisplayName; // 0x4(0x4)
		FName CPPType; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr CPPTypeObject; // 0x10(0x20)
		bool bIsArray; // 0x30(0x1)
		ERigVMPinDirection Direction; // 0x31(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		FString DefaultValue; // 0x38(0x10)
		bool bIsConst; // 0x48(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		TMap PathToTooltip; // 0x50(0x50)
	};


	// Struct RigVM.RigVMVariant
	// Size: 0x20 (0x20 - 0x0)
	struct FRigVMVariant	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		TArray Tags; // 0x10(0x10)
	};


	// Struct RigVM.RigVMTag
	// Size: 0x40 (0x40 - 0x0)
	struct FRigVMTag	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Label; // 0x8(0x10)
		FText ToolTip; // 0x18(0x10)
		FLinearColor Color; // 0x28(0x10)
		bool bShowInUserInterface; // 0x38(0x1)
		bool bMarksSubjectAsInvalid; // 0x39(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMMemoryStorageStruct
	// Inherited from FInstancedPropertyBag
	// Size: 0x40 (0x50 - 0x10)
	struct FRigVMMemoryStorageStruct : public FInstancedPropertyBag	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x10(0x40) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMMemoryStatistics
	// Size: 0xC (0xC - 0x0)
	struct FRigVMMemoryStatistics	
	{
	public:
		int32_t RegisterCount; // 0x0(0x4)
		int32_t DataBytes; // 0x4(0x4)
		int32_t TotalBytes; // 0x8(0x4)
	};


	// Struct RigVM.RigVMByteCodeStatistics
	// Size: 0x8 (0x8 - 0x0)
	struct FRigVMByteCodeStatistics	
	{
	public:
		int32_t InstructionCount; // 0x0(0x4)
		int32_t DataBytes; // 0x4(0x4)
	};


	// Struct RigVM.RigVMStatistics
	// Size: 0x38 (0x38 - 0x0)
	struct FRigVMStatistics	
	{
	public:
		int32_t BytesForCDO; // 0x0(0x4)
		int32_t BytesPerInstance; // 0x4(0x4)
		FRigVMMemoryStatistics LiteralMemory; // 0x8(0xC)
		FRigVMMemoryStatistics WorkMemory; // 0x14(0xC)
		FRigVMMemoryStatistics DebugMemory; // 0x20(0xC)
		int32_t BytesForCaching; // 0x2C(0x4)
		FRigVMByteCodeStatistics ByteCode; // 0x30(0x8)
	};


	// Struct RigVM.RigVMTrait
	// Inherited from FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMTrait : public FRigVMStruct	
	{
	public:
		FString Name; // 0x8(0x10)
	};


	// Struct RigVM.RigVMVariantRef
	// Size: 0x38 (0x38 - 0x0)
	struct FRigVMVariantRef	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMGraphFunctionHeaderArray
	// Size: 0x10 (0x10 - 0x0)
	struct FRigVMGraphFunctionHeaderArray	
	{
	public:
		TArray Headers; // 0x0(0x10)
	};


	// Struct RigVM.RigVMParameter
	// Size: 0x30 (0x30 - 0x0)
	struct FRigVMParameter	
	{
	public:
		ERigVMParameterType Type; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName Name; // 0x4(0x4)
		int32_t RegisterIndex; // 0x8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString CPPType; // 0x10(0x10)
		UScriptStruct ScriptStruct; // 0x20(0x8)
		FName ScriptStructPath; // 0x28(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMBaseOp
	// Size: 0x1 (0x1 - 0x0)
	struct FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMExecuteOp
	// Inherited from FRigVMBaseOp
	// Size: 0x9 (0xA - 0x1)
	struct FRigVMExecuteOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x9]; // 0x1(0x9) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMUnaryOp
	// Inherited from FRigVMBaseOp
	// Size: 0x7 (0x8 - 0x1)
	struct FRigVMUnaryOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMBinaryOp
	// Inherited from FRigVMBaseOp
	// Size: 0xD (0xE - 0x1)
	struct FRigVMBinaryOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0xD]; // 0x1(0xD) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMTernaryOp
	// Inherited from FRigVMBaseOp
	// Size: 0x13 (0x14 - 0x1)
	struct FRigVMTernaryOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x13]; // 0x1(0x13) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMQuaternaryOp
	// Inherited from FRigVMBaseOp
	// Size: 0x19 (0x1A - 0x1)
	struct FRigVMQuaternaryOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x19]; // 0x1(0x19) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMQuinaryOp
	// Inherited from FRigVMBaseOp
	// Size: 0x1F (0x20 - 0x1)
	struct FRigVMQuinaryOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x1F]; // 0x1(0x1F) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMSenaryOp
	// Inherited from FRigVMBaseOp
	// Size: 0x25 (0x26 - 0x1)
	struct FRigVMSenaryOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x25]; // 0x1(0x25) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMCopyOp
	// Inherited from FRigVMBaseOp
	// Size: 0x11 (0x12 - 0x1)
	struct FRigVMCopyOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x11]; // 0x1(0x11) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMComparisonOp
	// Inherited from FRigVMBaseOp
	// Size: 0x13 (0x14 - 0x1)
	struct FRigVMComparisonOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x13]; // 0x1(0x13) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMJumpOp
	// Inherited from FRigVMBaseOp
	// Size: 0x7 (0x8 - 0x1)
	struct FRigVMJumpOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMJumpIfOp
	// Inherited from FRigVMUnaryOp -> FRigVMBaseOp
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMJumpIfOp : public FRigVMUnaryOp	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMChangeTypeOp
	// Inherited from FRigVMUnaryOp -> FRigVMBaseOp
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMChangeTypeOp : public FRigVMUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMInvokeEntryOp
	// Inherited from FRigVMBaseOp
	// Size: 0x7 (0x8 - 0x1)
	struct FRigVMInvokeEntryOp : public FRigVMBaseOp	
	{
	public:
		unsigned char UnknownData01_1[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMJumpToBranchOp
	// Inherited from FRigVMUnaryOp -> FRigVMBaseOp
	// Size: 0x4 (0xC - 0x8)
	struct FRigVMJumpToBranchOp : public FRigVMUnaryOp	
	{
	public:
		unsigned char UnknownData01_1[0x4]; // 0x8(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMRunInstructionsOp
	// Inherited from FRigVMUnaryOp -> FRigVMBaseOp
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMRunInstructionsOp : public FRigVMUnaryOp	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMSetupTraitsOp
	// Inherited from FRigVMUnaryOp -> FRigVMBaseOp
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMSetupTraitsOp : public FRigVMUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMInstruction
	// Size: 0x10 (0x10 - 0x0)
	struct FRigVMInstruction	
	{
	public:
		uint64_t ByteCodeIndex; // 0x0(0x8)
		ERigVMOpCode OpCode; // 0x8(0x1)
		char OperandAlignment; // 0x9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMInstructionArray
	// Size: 0x10 (0x10 - 0x0)
	struct FRigVMInstructionArray	
	{
	public:
		TArray Instructions; // 0x0(0x10)
	};


	// Struct RigVM.RigVMBreakpoint
	// Size: 0x24 (0x24 - 0x0)
	struct FRigVMBreakpoint	
	{
	public:
		unsigned char UnknownData01_2[0x24]; // 0x0(0x24) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMDebugInfo
	// Size: 0x140 (0x140 - 0x0)
	struct FRigVMDebugInfo	
	{
	public:
		unsigned char UnknownData01_2[0x140]; // 0x0(0x140) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMDrawInterface
	// Inherited from FRigVMDrawContainer
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMDrawInterface : public FRigVMDrawContainer	
	{
	public:
	};


	// Struct RigVM.RigVMSlice
	// Size: 0x14 (0x14 - 0x0)
	struct FRigVMSlice	
	{
	public:
		unsigned char UnknownData01_2[0x14]; // 0x0(0x14) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMInstructionSetExecuteState
	// Size: 0x50 (0x50 - 0x0)
	struct FRigVMInstructionSetExecuteState	
	{
	public:
		TMap SliceHashToNumInstruction; // 0x0(0x50)
	};


	// Struct RigVM.RigVMRegister
	// Size: 0x20 (0x20 - 0x0)
	struct FRigVMRegister	
	{
	public:
		ERigVMRegisterType Type; // 0x0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		uint32_t ByteIndex; // 0x4(0x4)
		uint16_t ElementSize; // 0x8(0x2)
		uint16_t ElementCount; // 0xA(0x2)
		uint16_t SliceCount; // 0xC(0x2)
		char AlignmentBytes; // 0xE(0x1)
		unsigned char UnknownData05_6[0x1]; // 0xF(0x1) UNKNOWN PROPERTY
		uint16_t TrailingBytes; // 0x10(0x2)
		unsigned char UnknownData06_6[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
		FName Name; // 0x14(0x4)
		int32_t ScriptStructIndex; // 0x18(0x4)
		bool bIsArray; // 0x1C(0x1)
		bool bIsDynamic; // 0x1D(0x1)
		unsigned char UnknownData07_7[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMRegisterOffset
	// Size: 0x40 (0x40 - 0x0)
	struct FRigVMRegisterOffset	
	{
	public:
		TArray Segments; // 0x0(0x10)
		ERigVMRegisterType Type; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName CPPType; // 0x14(0x4)
		UScriptStruct ScriptStruct; // 0x18(0x8)
		UScriptStruct ParentScriptStruct; // 0x20(0x8)
		int32_t ArrayIndex; // 0x28(0x4)
		uint16_t ElementSize; // 0x2C(0x2)
		unsigned char UnknownData03_6[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
		FString CachedSegmentPath; // 0x30(0x10)
	};


	// Struct RigVM.RigVMMemoryContainer
	// Size: 0xA0 (0xA0 - 0x0)
	struct FRigVMMemoryContainer	
	{
	public:
		bool bUseNameMap; // 0x0(0x1)
		ERigVMMemoryType MemoryType; // 0x1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TArray Registers; // 0x8(0x10)
		TArray RegisterOffsets; // 0x18(0x10)
		TArray Data; // 0x28(0x10)
		TArray ScriptStructs; // 0x38(0x10)
		TMap NameMap; // 0x48(0x50)
		bool bEncounteredErrorDuringLoad; // 0x98(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMInstructionVisitInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FRigVMInstructionVisitInfo	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMProfilingInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FRigVMProfilingInfo	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMTemplateArgumentType
	// Size: 0x10 (0x10 - 0x0)
	struct FRigVMTemplateArgumentType	
	{
	public:
		FName CPPType; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UObject CPPTypeObject; // 0x8(0x8)
	};


	// Struct RigVM.RigVMUserWorkflow
	// Size: 0x58 (0x58 - 0x0)
	struct FRigVMUserWorkflow	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FString Title; // 0x8(0x10)
		FString ToolTip; // 0x18(0x10)
		ERigVMUserWorkflowType Type; // 0x28(0x1)
		unsigned char UnknownData04_6[0x17]; // 0x29(0x17) UNKNOWN PROPERTY
		FDelegateProperty PerformDynamicDelegate; // 0x40(0xC)
		unsigned char UnknownData05_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UClass OptionsClass; // 0x50(0x8)
	};


	// Struct RigVM.RigVMFunction_AnimEasingType
	// Inherited from FRigVMFunction_AnimBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_AnimEasingType : public FRigVMFunction_AnimBase	
	{
	public:
		ERigVMAnimEasingType Type; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AnimEasing
	// Inherited from FRigVMFunction_AnimBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_AnimEasing : public FRigVMFunction_AnimBase	
	{
	public:
		float Value; // 0x8(0x4)
		ERigVMAnimEasingType Type; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float SourceMinimum; // 0x10(0x4)
		float SourceMaximum; // 0x14(0x4)
		float TargetMinimum; // 0x18(0x4)
		float TargetMaximum; // 0x1C(0x4)
		float Result; // 0x20(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AnimEvalRichCurve
	// Inherited from FRigVMFunction_AnimBase -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigVMFunction_AnimEvalRichCurve : public FRigVMFunction_AnimBase	
	{
	public:
		float Value; // 0x8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve Curve; // 0x10(0x88)
		float SourceMinimum; // 0x98(0x4)
		float SourceMaximum; // 0x9C(0x4)
		float TargetMinimum; // 0xA0(0x4)
		float TargetMaximum; // 0xA4(0x4)
		float Result; // 0xA8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AnimRichCurve
	// Inherited from FRigVMFunction_AnimBase -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigVMFunction_AnimRichCurve : public FRigVMFunction_AnimBase	
	{
	public:
		FRuntimeFloatCurve Curve; // 0x8(0x88)
	};


	// Struct RigVM.RigVMFunction_GetDeltaTime
	// Inherited from FRigVMFunction_AnimBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_GetDeltaTime : public FRigVMFunction_AnimBase	
	{
	public:
		float Result; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_GetWorldTime
	// Inherited from FRigVMFunction_AnimBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_GetWorldTime : public FRigVMFunction_AnimBase	
	{
	public:
		float Year; // 0x8(0x4)
		float Month; // 0xC(0x4)
		float Day; // 0x10(0x4)
		float WeekDay; // 0x14(0x4)
		float Hours; // 0x18(0x4)
		float Minutes; // 0x1C(0x4)
		float Seconds; // 0x20(0x4)
		float OverallSeconds; // 0x24(0x4)
	};


	// Struct RigVM.RigVMFunction_FramesToSeconds
	// Inherited from FRigVMFunction_AnimBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_FramesToSeconds : public FRigVMFunction_AnimBase	
	{
	public:
		float Frames; // 0x8(0x4)
		float Seconds; // 0xC(0x4)
	};


	// Struct RigVM.RigVMFunction_SecondsToFrames
	// Inherited from FRigVMFunction_AnimBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_SecondsToFrames : public FRigVMFunction_AnimBase	
	{
	public:
		float Seconds; // 0x8(0x4)
		float Frames; // 0xC(0x4)
	};


	// Struct RigVM.RigVMFunction_DebugLineNoSpace
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0xC0 (0x1C0 - 0x100)
	struct FRigVMFunction_DebugLineNoSpace : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		FVector A; // 0x100(0x18)
		FVector B; // 0x118(0x18)
		FLinearColor Color; // 0x130(0x10)
		float Thickness; // 0x140(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x144(0xC) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x150(0x60)
		bool bEnabled; // 0x1B0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x1B1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugLineStripNoSpace
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0xA0 (0x1A0 - 0x100)
	struct FRigVMFunction_DebugLineStripNoSpace : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		TArray Points; // 0x100(0x10)
		FLinearColor Color; // 0x110(0x10)
		float Thickness; // 0x120(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x124(0xC) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x130(0x60)
		bool bEnabled; // 0x190(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x191(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugPoint
	// Inherited from FRigVMFunction_DebugBase -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigVMFunction_DebugPoint : public FRigVMFunction_DebugBase	
	{
	public:
		FVector Vector; // 0x8(0x18)
		ERigUnitDebugPointMode Mode; // 0x20(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x24(0x10)
		float Scale; // 0x34(0x4)
		float Thickness; // 0x38(0x4)
		FName Space; // 0x3C(0x4)
		FTransform WorldOffset; // 0x40(0x60)
		bool bEnabled; // 0xA0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0xA1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugPointMutable
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0xB0 (0x1B0 - 0x100)
	struct FRigVMFunction_DebugPointMutable : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		FVector Vector; // 0x100(0x18)
		ERigUnitDebugPointMode Mode; // 0x118(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x119(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x11C(0x10)
		float Scale; // 0x12C(0x4)
		float Thickness; // 0x130(0x4)
		FName Space; // 0x134(0x4)
		unsigned char UnknownData04_6[0x8]; // 0x138(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x140(0x60)
		bool bEnabled; // 0x1A0(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x1A1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugRectangle
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0xF0 (0x1F0 - 0x100)
	struct FRigVMFunction_DebugRectangle : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x100(0x60)
		FLinearColor Color; // 0x160(0x10)
		float Scale; // 0x170(0x4)
		float Thickness; // 0x174(0x4)
		FName Space; // 0x178(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x17C(0x4) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x180(0x60)
		bool bEnabled; // 0x1E0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x1E1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugRectangleNoSpace
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0xF0 (0x1F0 - 0x100)
	struct FRigVMFunction_DebugRectangleNoSpace : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x100(0x60)
		FLinearColor Color; // 0x160(0x10)
		float Scale; // 0x170(0x4)
		float Thickness; // 0x174(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x178(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x180(0x60)
		bool bEnabled; // 0x1E0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x1E1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugArc
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0x100 (0x200 - 0x100)
	struct FRigVMFunction_DebugArc : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x100(0x60)
		FLinearColor Color; // 0x160(0x10)
		float Radius; // 0x170(0x4)
		float MinimumDegrees; // 0x174(0x4)
		float MaximumDegrees; // 0x178(0x4)
		float Thickness; // 0x17C(0x4)
		int32_t Detail; // 0x180(0x4)
		FName Space; // 0x184(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x188(0x8) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x190(0x60)
		bool bEnabled; // 0x1F0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x1F1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugArcNoSpace
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0x100 (0x200 - 0x100)
	struct FRigVMFunction_DebugArcNoSpace : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x100(0x60)
		FLinearColor Color; // 0x160(0x10)
		float Radius; // 0x170(0x4)
		float MinimumDegrees; // 0x174(0x4)
		float MaximumDegrees; // 0x178(0x4)
		float Thickness; // 0x17C(0x4)
		int32_t Detail; // 0x180(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x184(0xC) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x190(0x60)
		bool bEnabled; // 0x1F0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x1F1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugTransformMutableNoSpace
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0xF0 (0x1F0 - 0x100)
	struct FRigVMFunction_DebugTransformMutableNoSpace : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		FTransform Transform; // 0x100(0x60)
		ERigUnitDebugTransformMode Mode; // 0x160(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x161(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x164(0x10)
		float Thickness; // 0x174(0x4)
		float Scale; // 0x178(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x17C(0x4) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x180(0x60)
		bool bEnabled; // 0x1E0(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x1E1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DebugTransformArrayMutable_WorkData
	// Size: 0x10 (0x10 - 0x0)
	struct FRigVMFunction_DebugTransformArrayMutable_WorkData	
	{
	public:
		TArray DrawTransforms; // 0x0(0x10)
	};


	// Struct RigVM.RigVMFunction_DebugTransformArrayMutableNoSpace
	// Inherited from FRigVMFunction_DebugBaseMutable -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0xB0 (0x1B0 - 0x100)
	struct FRigVMFunction_DebugTransformArrayMutableNoSpace : public FRigVMFunction_DebugBaseMutable	
	{
	public:
		TArray Transforms; // 0x100(0x10)
		TArray ParentIndices; // 0x110(0x10)
		ERigUnitDebugTransformMode Mode; // 0x120(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x121(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x124(0x10)
		float Thickness; // 0x134(0x4)
		float Scale; // 0x138(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
		FTransform WorldOffset; // 0x140(0x60)
		bool bEnabled; // 0x1A0(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x1A1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_VisualDebugVector
	// Inherited from FRigVMFunction_DebugBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_VisualDebugVector : public FRigVMFunction_DebugBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		bool bEnabled; // 0x20(0x1)
		ERigUnitVisualDebugPointMode Mode; // 0x21(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x22(0x2) UNKNOWN PROPERTY
		FLinearColor Color; // 0x24(0x10)
		float Thickness; // 0x34(0x4)
		float Scale; // 0x38(0x4)
		FName BoneSpace; // 0x3C(0x4)
	};


	// Struct RigVM.RigVMFunction_VisualDebugVectorNoSpace
	// Inherited from FRigVMFunction_DebugBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_VisualDebugVectorNoSpace : public FRigVMFunction_DebugBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		bool bEnabled; // 0x20(0x1)
		ERigUnitVisualDebugPointMode Mode; // 0x21(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x22(0x2) UNKNOWN PROPERTY
		FLinearColor Color; // 0x24(0x10)
		float Thickness; // 0x34(0x4)
		float Scale; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_VisualDebugQuat
	// Inherited from FRigVMFunction_DebugBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_VisualDebugQuat : public FRigVMFunction_DebugBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		bool bEnabled; // 0x30(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float Thickness; // 0x34(0x4)
		float Scale; // 0x38(0x4)
		FName BoneSpace; // 0x3C(0x4)
	};


	// Struct RigVM.RigVMFunction_VisualDebugQuatNoSpace
	// Inherited from FRigVMFunction_DebugBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_VisualDebugQuatNoSpace : public FRigVMFunction_DebugBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		bool bEnabled; // 0x30(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float Thickness; // 0x34(0x4)
		float Scale; // 0x38(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_VisualDebugTransform
	// Inherited from FRigVMFunction_DebugBase -> FRigVMStruct
	// Size: 0x78 (0x80 - 0x8)
	struct FRigVMFunction_VisualDebugTransform : public FRigVMFunction_DebugBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		bool bEnabled; // 0x70(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		float Thickness; // 0x74(0x4)
		float Scale; // 0x78(0x4)
		FName BoneSpace; // 0x7C(0x4)
	};


	// Struct RigVM.RigVMFunction_VisualDebugTransformNoSpace
	// Inherited from FRigVMFunction_DebugBase -> FRigVMStruct
	// Size: 0x78 (0x80 - 0x8)
	struct FRigVMFunction_VisualDebugTransformNoSpace : public FRigVMFunction_DebugBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		bool bEnabled; // 0x70(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		float Thickness; // 0x74(0x4)
		float Scale; // 0x78(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_ForLoopCount
	// Inherited from FRigVMStructMutable -> FRigVMStruct
	// Size: 0x100 (0x200 - 0x100)
	struct FRigVMFunction_ForLoopCount : public FRigVMStructMutable	
	{
	public:
		FName BlockToRun; // 0x100(0x4)
		int32_t Count; // 0x104(0x4)
		int32_t Index; // 0x108(0x4)
		float Ratio; // 0x10C(0x4)
		FRigVMExecuteContext Completed; // 0x110(0xF0)
	};


	// Struct RigVM.RigVMFunction_UserDefinedEvent
	// Inherited from FRigVMStruct
	// Size: 0x108 (0x110 - 0x8)
	struct FRigVMFunction_UserDefinedEvent : public FRigVMStruct	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FRigVMExecuteContext ExecuteContext; // 0x10(0xF0)
		FName EventName; // 0x100(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x104(0xC) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathBoolBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathBoolConstant
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolConstant : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool Value; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolUnaryOp
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolUnaryOp : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool Value; // 0x8(0x1)
		bool Result; // 0x9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolBinaryOp
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolBinaryOp : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool A; // 0x8(0x1)
		bool B; // 0x9(0x1)
		bool Result; // 0xA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolBinaryAggregateOp
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolBinaryAggregateOp : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool A; // 0x8(0x1)
		bool B; // 0x9(0x1)
		bool Result; // 0xA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolMake
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolMake : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool Value; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolConstTrue
	// Inherited from FRigVMFunction_MathBoolConstant -> FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathBoolConstTrue : public FRigVMFunction_MathBoolConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathBoolConstFalse
	// Inherited from FRigVMFunction_MathBoolConstant -> FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathBoolConstFalse : public FRigVMFunction_MathBoolConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathBoolNot
	// Inherited from FRigVMFunction_MathBoolUnaryOp -> FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathBoolNot : public FRigVMFunction_MathBoolUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathBoolAnd
	// Inherited from FRigVMFunction_MathBoolBinaryAggregateOp -> FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathBoolAnd : public FRigVMFunction_MathBoolBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathBoolNand
	// Inherited from FRigVMFunction_MathBoolBinaryOp -> FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathBoolNand : public FRigVMFunction_MathBoolBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathBoolNand2
	// Inherited from FRigVMFunction_MathBoolBinaryOp -> FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathBoolNand2 : public FRigVMFunction_MathBoolBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathBoolOr
	// Inherited from FRigVMFunction_MathBoolBinaryAggregateOp -> FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathBoolOr : public FRigVMFunction_MathBoolBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathBoolEquals
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolEquals : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool A; // 0x8(0x1)
		bool B; // 0x9(0x1)
		bool Result; // 0xA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolNotEquals
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolNotEquals : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool A; // 0x8(0x1)
		bool B; // 0x9(0x1)
		bool Result; // 0xA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolToggled
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolToggled : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool Value; // 0x8(0x1)
		bool Toggled; // 0x9(0x1)
		bool Initialized; // 0xA(0x1)
		bool LastValue; // 0xB(0x1)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolFlipFlop
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathBoolFlipFlop : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool StartValue; // 0x8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float duration; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		bool LastValue; // 0x11(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
		float TimeLeft; // 0x14(0x4)
	};


	// Struct RigVM.RigVMFunction_MathBoolOnce
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathBoolOnce : public FRigVMFunction_MathBoolBase	
	{
	public:
		float duration; // 0x8(0x4)
		bool Result; // 0xC(0x1)
		bool LastValue; // 0xD(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		float TimeLeft; // 0x10(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathBoolToFloat
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolToFloat : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool Value; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float Result; // 0xC(0x4)
	};


	// Struct RigVM.RigVMFunction_MathBoolToInteger
	// Inherited from FRigVMFunction_MathBoolBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathBoolToInteger : public FRigVMFunction_MathBoolBase	
	{
	public:
		bool Value; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t Result; // 0xC(0x4)
	};


	// Struct RigVM.RigVMFunction_MathColorBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathColorBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathColorBinaryOp
	// Inherited from FRigVMFunction_MathColorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigVMFunction_MathColorBinaryOp : public FRigVMFunction_MathColorBase	
	{
	public:
		FLinearColor A; // 0x8(0x10)
		FLinearColor B; // 0x18(0x10)
		FLinearColor Result; // 0x28(0x10)
	};


	// Struct RigVM.RigVMFunction_MathColorBinaryAggregateOp
	// Inherited from FRigVMFunction_MathColorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigVMFunction_MathColorBinaryAggregateOp : public FRigVMFunction_MathColorBase	
	{
	public:
		FLinearColor A; // 0x8(0x10)
		FLinearColor B; // 0x18(0x10)
		FLinearColor Result; // 0x28(0x10)
	};


	// Struct RigVM.RigVMFunction_MathColorMake
	// Inherited from FRigVMFunction_MathColorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathColorMake : public FRigVMFunction_MathColorBase	
	{
	public:
		float R; // 0x8(0x4)
		float G; // 0xC(0x4)
		float B; // 0x10(0x4)
		float A; // 0x14(0x4)
		FLinearColor Result; // 0x18(0x10)
	};


	// Struct RigVM.RigVMFunction_MathColorFromFloat
	// Inherited from FRigVMFunction_MathColorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathColorFromFloat : public FRigVMFunction_MathColorBase	
	{
	public:
		float Value; // 0x8(0x4)
		FLinearColor Result; // 0xC(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathColorFromDouble
	// Inherited from FRigVMFunction_MathColorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathColorFromDouble : public FRigVMFunction_MathColorBase	
	{
	public:
		double Value; // 0x8(0x8)
		FLinearColor Result; // 0x10(0x10)
	};


	// Struct RigVM.RigVMFunction_MathColorAdd
	// Inherited from FRigVMFunction_MathColorBinaryAggregateOp -> FRigVMFunction_MathColorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathColorAdd : public FRigVMFunction_MathColorBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathColorSub
	// Inherited from FRigVMFunction_MathColorBinaryOp -> FRigVMFunction_MathColorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathColorSub : public FRigVMFunction_MathColorBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathColorMul
	// Inherited from FRigVMFunction_MathColorBinaryAggregateOp -> FRigVMFunction_MathColorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathColorMul : public FRigVMFunction_MathColorBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathColorLerp
	// Inherited from FRigVMFunction_MathColorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathColorLerp : public FRigVMFunction_MathColorBase	
	{
	public:
		FLinearColor A; // 0x8(0x10)
		FLinearColor B; // 0x18(0x10)
		float T; // 0x28(0x4)
		FLinearColor Result; // 0x2C(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathDoubleBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleConstant
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathDoubleConstant : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
	};


	// Struct RigVM.RigVMFunction_MathDoubleUnaryOp
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathDoubleUnaryOp : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
		double Result; // 0x10(0x8)
	};


	// Struct RigVM.RigVMFunction_MathDoubleBinaryOp
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleBinaryOp : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		double Result; // 0x18(0x8)
	};


	// Struct RigVM.RigVMFunction_MathDoubleBinaryAggregateOp
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleBinaryAggregateOp : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		double Result; // 0x18(0x8)
	};


	// Struct RigVM.RigVMFunction_MathDoubleMake
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathDoubleMake : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
	};


	// Struct RigVM.RigVMFunction_MathDoubleConstPi
	// Inherited from FRigVMFunction_MathDoubleConstant -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathDoubleConstPi : public FRigVMFunction_MathDoubleConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleConstHalfPi
	// Inherited from FRigVMFunction_MathDoubleConstant -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathDoubleConstHalfPi : public FRigVMFunction_MathDoubleConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleConstTwoPi
	// Inherited from FRigVMFunction_MathDoubleConstant -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathDoubleConstTwoPi : public FRigVMFunction_MathDoubleConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleConstE
	// Inherited from FRigVMFunction_MathDoubleConstant -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathDoubleConstE : public FRigVMFunction_MathDoubleConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleAdd
	// Inherited from FRigVMFunction_MathDoubleBinaryAggregateOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x20 - 0x20)
	struct FRigVMFunction_MathDoubleAdd : public FRigVMFunction_MathDoubleBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleSub
	// Inherited from FRigVMFunction_MathDoubleBinaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x20 - 0x20)
	struct FRigVMFunction_MathDoubleSub : public FRigVMFunction_MathDoubleBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleMul
	// Inherited from FRigVMFunction_MathDoubleBinaryAggregateOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x20 - 0x20)
	struct FRigVMFunction_MathDoubleMul : public FRigVMFunction_MathDoubleBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleDiv
	// Inherited from FRigVMFunction_MathDoubleBinaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x20 - 0x20)
	struct FRigVMFunction_MathDoubleDiv : public FRigVMFunction_MathDoubleBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleMod
	// Inherited from FRigVMFunction_MathDoubleBinaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x20 - 0x20)
	struct FRigVMFunction_MathDoubleMod : public FRigVMFunction_MathDoubleBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleMin
	// Inherited from FRigVMFunction_MathDoubleBinaryAggregateOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x20 - 0x20)
	struct FRigVMFunction_MathDoubleMin : public FRigVMFunction_MathDoubleBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleMax
	// Inherited from FRigVMFunction_MathDoubleBinaryAggregateOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x20 - 0x20)
	struct FRigVMFunction_MathDoubleMax : public FRigVMFunction_MathDoubleBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoublePow
	// Inherited from FRigVMFunction_MathDoubleBinaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x20 - 0x20)
	struct FRigVMFunction_MathDoublePow : public FRigVMFunction_MathDoubleBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleSqrt
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleSqrt : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleNegate
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleNegate : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleAbs
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleAbs : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleFloor
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleFloor : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
		double Result; // 0x10(0x8)
		int32_t int; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleCeil
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleCeil : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
		double Result; // 0x10(0x8)
		int32_t int; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleRound
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleRound : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
		double Result; // 0x10(0x8)
		int32_t int; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleToInt
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathDoubleToInt : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
		int32_t Result; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleSign
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleSign : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleClamp
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathDoubleClamp : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
		double Minimum; // 0x10(0x8)
		double Maximum; // 0x18(0x8)
		double Result; // 0x20(0x8)
	};


	// Struct RigVM.RigVMFunction_MathDoubleLerp
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathDoubleLerp : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		double T; // 0x18(0x8)
		double Result; // 0x20(0x8)
	};


	// Struct RigVM.RigVMFunction_MathDoubleRemap
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathDoubleRemap : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
		double SourceMinimum; // 0x10(0x8)
		double SourceMaximum; // 0x18(0x8)
		double TargetMinimum; // 0x20(0x8)
		double TargetMaximum; // 0x28(0x8)
		bool bClamp; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		double Result; // 0x38(0x8)
	};


	// Struct RigVM.RigVMFunction_MathDoubleEquals
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleEquals : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleNotEquals
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleNotEquals : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleGreater
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleGreater : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleLess
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleLess : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleGreaterEqual
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleGreaterEqual : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleLessEqual
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleLessEqual : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleIsNearlyZero
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleIsNearlyZero : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double Value; // 0x8(0x8)
		double Tolerance; // 0x10(0x8)
		bool Result; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleIsNearlyEqual
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathDoubleIsNearlyEqual : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		double Tolerance; // 0x18(0x8)
		bool Result; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleDeg
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleDeg : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleRad
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleRad : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleSin
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleSin : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleCos
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleCos : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleTan
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleTan : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleAsin
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleAsin : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleAcos
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleAcos : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleAtan
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleAtan : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleAtan2
	// Inherited from FRigVMFunction_MathDoubleBinaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x20 - 0x20)
	struct FRigVMFunction_MathDoubleAtan2 : public FRigVMFunction_MathDoubleBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleLawOfCosine
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathDoubleLawOfCosine : public FRigVMFunction_MathDoubleBase	
	{
	public:
		double A; // 0x8(0x8)
		double B; // 0x10(0x8)
		double C; // 0x18(0x8)
		double AlphaAngle; // 0x20(0x8)
		double BetaAngle; // 0x28(0x8)
		double GammaAngle; // 0x30(0x8)
		bool bValid; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDoubleExponential
	// Inherited from FRigVMFunction_MathDoubleUnaryOp -> FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathDoubleExponential : public FRigVMFunction_MathDoubleUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathDoubleArraySum
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleArraySum : public FRigVMFunction_MathDoubleBase	
	{
	public:
		TArray Array; // 0x8(0x10)
		double Sum; // 0x18(0x8)
	};


	// Struct RigVM.RigVMFunction_MathDoubleArrayAverage
	// Inherited from FRigVMFunction_MathDoubleBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathDoubleArrayAverage : public FRigVMFunction_MathDoubleBase	
	{
	public:
		TArray Array; // 0x8(0x10)
		double Average; // 0x18(0x8)
	};


	// Struct RigVM.RigVMFunction_MathFloatBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathFloatBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatConstant
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathFloatConstant : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatUnaryOp
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathFloatUnaryOp : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Result; // 0xC(0x4)
	};


	// Struct RigVM.RigVMFunction_MathFloatBinaryOp
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatBinaryOp : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		float Result; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatBinaryAggregateOp
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatBinaryAggregateOp : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		float Result; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatMake
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathFloatMake : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatConstPi
	// Inherited from FRigVMFunction_MathFloatConstant -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatConstPi : public FRigVMFunction_MathFloatConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatConstHalfPi
	// Inherited from FRigVMFunction_MathFloatConstant -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatConstHalfPi : public FRigVMFunction_MathFloatConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatConstTwoPi
	// Inherited from FRigVMFunction_MathFloatConstant -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatConstTwoPi : public FRigVMFunction_MathFloatConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatConstE
	// Inherited from FRigVMFunction_MathFloatConstant -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatConstE : public FRigVMFunction_MathFloatConstant	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatAdd
	// Inherited from FRigVMFunction_MathFloatBinaryAggregateOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathFloatAdd : public FRigVMFunction_MathFloatBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatSub
	// Inherited from FRigVMFunction_MathFloatBinaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathFloatSub : public FRigVMFunction_MathFloatBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatMul
	// Inherited from FRigVMFunction_MathFloatBinaryAggregateOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathFloatMul : public FRigVMFunction_MathFloatBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatDiv
	// Inherited from FRigVMFunction_MathFloatBinaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathFloatDiv : public FRigVMFunction_MathFloatBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatMod
	// Inherited from FRigVMFunction_MathFloatBinaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathFloatMod : public FRigVMFunction_MathFloatBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatMin
	// Inherited from FRigVMFunction_MathFloatBinaryAggregateOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathFloatMin : public FRigVMFunction_MathFloatBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatMax
	// Inherited from FRigVMFunction_MathFloatBinaryAggregateOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathFloatMax : public FRigVMFunction_MathFloatBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatPow
	// Inherited from FRigVMFunction_MathFloatBinaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathFloatPow : public FRigVMFunction_MathFloatBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatSqrt
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatSqrt : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatNegate
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatNegate : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatAbs
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatAbs : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatFloor
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatFloor : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Result; // 0xC(0x4)
		int32_t int; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatCeil
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatCeil : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Result; // 0xC(0x4)
		int32_t int; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatRound
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatRound : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Result; // 0xC(0x4)
		int32_t int; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatToInt
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathFloatToInt : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		int32_t Result; // 0xC(0x4)
	};


	// Struct RigVM.RigVMFunction_MathFloatSign
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatSign : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatClamp
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatClamp : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Minimum; // 0xC(0x4)
		float Maximum; // 0x10(0x4)
		float Result; // 0x14(0x4)
	};


	// Struct RigVM.RigVMFunction_MathFloatLerp
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatLerp : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		float T; // 0x10(0x4)
		float Result; // 0x14(0x4)
	};


	// Struct RigVM.RigVMFunction_MathFloatRemap
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathFloatRemap : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		float SourceMinimum; // 0xC(0x4)
		float SourceMaximum; // 0x10(0x4)
		float TargetMinimum; // 0x14(0x4)
		float TargetMaximum; // 0x18(0x4)
		bool bClamp; // 0x1C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		float Result; // 0x20(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatEquals
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatEquals : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatNotEquals
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatNotEquals : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatGreater
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatGreater : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatLess
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatLess : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatGreaterEqual
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatGreaterEqual : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatLessEqual
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatLessEqual : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatIsNearlyZero
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatIsNearlyZero : public FRigVMFunction_MathFloatBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Tolerance; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatIsNearlyEqual
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatIsNearlyEqual : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		float Tolerance; // 0x10(0x4)
		bool Result; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatSelectBool
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathFloatSelectBool : public FRigVMFunction_MathFloatBase	
	{
	public:
		bool Condition; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float IfTrue; // 0xC(0x4)
		float IfFalse; // 0x10(0x4)
		float Result; // 0x14(0x4)
	};


	// Struct RigVM.RigVMFunction_MathFloatDeg
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatDeg : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatRad
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatRad : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatSin
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatSin : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatCos
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatCos : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatTan
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatTan : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatAsin
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatAsin : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatAcos
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatAcos : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatAtan
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatAtan : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatAtan2
	// Inherited from FRigVMFunction_MathFloatBinaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathFloatAtan2 : public FRigVMFunction_MathFloatBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatLawOfCosine
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathFloatLawOfCosine : public FRigVMFunction_MathFloatBase	
	{
	public:
		float A; // 0x8(0x4)
		float B; // 0xC(0x4)
		float C; // 0x10(0x4)
		float AlphaAngle; // 0x14(0x4)
		float BetaAngle; // 0x18(0x4)
		float GammaAngle; // 0x1C(0x4)
		bool bValid; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatExponential
	// Inherited from FRigVMFunction_MathFloatUnaryOp -> FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathFloatExponential : public FRigVMFunction_MathFloatUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathFloatArraySum
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathFloatArraySum : public FRigVMFunction_MathFloatBase	
	{
	public:
		TArray Array; // 0x8(0x10)
		float Sum; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathFloatArrayAverage
	// Inherited from FRigVMFunction_MathFloatBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathFloatArrayAverage : public FRigVMFunction_MathFloatBase	
	{
	public:
		TArray Array; // 0x8(0x10)
		float Average; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathIntBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntUnaryOp
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathIntUnaryOp : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t Value; // 0x8(0x4)
		int32_t Result; // 0xC(0x4)
	};


	// Struct RigVM.RigVMFunction_MathIntBinaryOp
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntBinaryOp : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t A; // 0x8(0x4)
		int32_t B; // 0xC(0x4)
		int32_t Result; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntBinaryAggregateOp
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntBinaryAggregateOp : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t A; // 0x8(0x4)
		int32_t B; // 0xC(0x4)
		int32_t Result; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntMake
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathIntMake : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t Value; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntAdd
	// Inherited from FRigVMFunction_MathIntBinaryAggregateOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathIntAdd : public FRigVMFunction_MathIntBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntSub
	// Inherited from FRigVMFunction_MathIntBinaryOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathIntSub : public FRigVMFunction_MathIntBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntMul
	// Inherited from FRigVMFunction_MathIntBinaryAggregateOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathIntMul : public FRigVMFunction_MathIntBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntDiv
	// Inherited from FRigVMFunction_MathIntBinaryOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathIntDiv : public FRigVMFunction_MathIntBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntMod
	// Inherited from FRigVMFunction_MathIntBinaryOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathIntMod : public FRigVMFunction_MathIntBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntMin
	// Inherited from FRigVMFunction_MathIntBinaryAggregateOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathIntMin : public FRigVMFunction_MathIntBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntMax
	// Inherited from FRigVMFunction_MathIntBinaryAggregateOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathIntMax : public FRigVMFunction_MathIntBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntPow
	// Inherited from FRigVMFunction_MathIntBinaryOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x18 - 0x18)
	struct FRigVMFunction_MathIntPow : public FRigVMFunction_MathIntBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntNegate
	// Inherited from FRigVMFunction_MathIntUnaryOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathIntNegate : public FRigVMFunction_MathIntUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntAbs
	// Inherited from FRigVMFunction_MathIntUnaryOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathIntAbs : public FRigVMFunction_MathIntUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntToFloat
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathIntToFloat : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t Value; // 0x8(0x4)
		float Result; // 0xC(0x4)
	};


	// Struct RigVM.RigVMFunction_MathIntToDouble
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntToDouble : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t Value; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		double Result; // 0x10(0x8)
	};


	// Struct RigVM.RigVMFunction_MathIntSign
	// Inherited from FRigVMFunction_MathIntUnaryOp -> FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x10 - 0x10)
	struct FRigVMFunction_MathIntSign : public FRigVMFunction_MathIntUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathIntClamp
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntClamp : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t Value; // 0x8(0x4)
		int32_t Minimum; // 0xC(0x4)
		int32_t Maximum; // 0x10(0x4)
		int32_t Result; // 0x14(0x4)
	};


	// Struct RigVM.RigVMFunction_MathIntEquals
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntEquals : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t A; // 0x8(0x4)
		int32_t B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntNotEquals
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntNotEquals : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t A; // 0x8(0x4)
		int32_t B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntGreater
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntGreater : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t A; // 0x8(0x4)
		int32_t B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntLess
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntLess : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t A; // 0x8(0x4)
		int32_t B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntGreaterEqual
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntGreaterEqual : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t A; // 0x8(0x4)
		int32_t B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntLessEqual
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntLessEqual : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t A; // 0x8(0x4)
		int32_t B; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntArraySum
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathIntArraySum : public FRigVMFunction_MathIntBase	
	{
	public:
		TArray Array; // 0x8(0x10)
		int32_t Sum; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntArrayAverage
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathIntArrayAverage : public FRigVMFunction_MathIntBase	
	{
	public:
		TArray Array; // 0x8(0x10)
		int32_t Average; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathIntToString
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_MathIntToString : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t Number; // 0x8(0x4)
		int32_t PaddedSize; // 0xC(0x4)
		FString Result; // 0x10(0x10)
	};


	// Struct RigVM.RigVMFunction_MathIntToName
	// Inherited from FRigVMFunction_MathIntBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_MathIntToName : public FRigVMFunction_MathIntBase	
	{
	public:
		int32_t Number; // 0x8(0x4)
		int32_t PaddedSize; // 0xC(0x4)
		FName Result; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathMatrixBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathMatrixBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathMatrixUnaryOp
	// Inherited from FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x108 (0x110 - 0x8)
	struct FRigVMFunction_MathMatrixUnaryOp : public FRigVMFunction_MathMatrixBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FMatrix Value; // 0x10(0x80)
		FMatrix Result; // 0x90(0x80)
	};


	// Struct RigVM.RigVMFunction_MathMatrixBinaryOp
	// Inherited from FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x188 (0x190 - 0x8)
	struct FRigVMFunction_MathMatrixBinaryOp : public FRigVMFunction_MathMatrixBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FMatrix A; // 0x10(0x80)
		FMatrix B; // 0x90(0x80)
		FMatrix Result; // 0x110(0x80)
	};


	// Struct RigVM.RigVMFunction_MathMatrixBinaryAggregateOp
	// Inherited from FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x188 (0x190 - 0x8)
	struct FRigVMFunction_MathMatrixBinaryAggregateOp : public FRigVMFunction_MathMatrixBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FMatrix A; // 0x10(0x80)
		FMatrix B; // 0x90(0x80)
		FMatrix Result; // 0x110(0x80)
	};


	// Struct RigVM.RigVMFunction_MathMatrixToTransform
	// Inherited from FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xE8 (0xF0 - 0x8)
	struct FRigVMFunction_MathMatrixToTransform : public FRigVMFunction_MathMatrixBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FMatrix Value; // 0x10(0x80)
		FTransform Result; // 0x90(0x60)
	};


	// Struct RigVM.RigVMFunction_MathMatrixFromTransform
	// Inherited from FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xE8 (0xF0 - 0x8)
	struct FRigVMFunction_MathMatrixFromTransform : public FRigVMFunction_MathMatrixBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FMatrix Result; // 0x70(0x80)
	};


	// Struct RigVM.RigVMFunction_MathMatrixFromTransformV2
	// Inherited from FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xE8 (0xF0 - 0x8)
	struct FRigVMFunction_MathMatrixFromTransformV2 : public FRigVMFunction_MathMatrixBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		FMatrix Result; // 0x70(0x80)
	};


	// Struct RigVM.RigVMFunction_MathMatrixToVectors
	// Inherited from FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xE8 (0xF0 - 0x8)
	struct FRigVMFunction_MathMatrixToVectors : public FRigVMFunction_MathMatrixBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FMatrix Value; // 0x10(0x80)
		FVector Origin; // 0x90(0x18)
		FVector X; // 0xA8(0x18)
		FVector Y; // 0xC0(0x18)
		FVector Z; // 0xD8(0x18)
	};


	// Struct RigVM.RigVMFunction_MathMatrixFromVectors
	// Inherited from FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xE8 (0xF0 - 0x8)
	struct FRigVMFunction_MathMatrixFromVectors : public FRigVMFunction_MathMatrixBase	
	{
	public:
		FVector Origin; // 0x8(0x18)
		FVector X; // 0x20(0x18)
		FVector Y; // 0x38(0x18)
		FVector Z; // 0x50(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		FMatrix Result; // 0x70(0x80)
	};


	// Struct RigVM.RigVMFunction_MathMatrixMul
	// Inherited from FRigVMFunction_MathMatrixBinaryAggregateOp -> FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x190 - 0x190)
	struct FRigVMFunction_MathMatrixMul : public FRigVMFunction_MathMatrixBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathMatrixInverse
	// Inherited from FRigVMFunction_MathMatrixUnaryOp -> FRigVMFunction_MathMatrixBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x110 - 0x110)
	struct FRigVMFunction_MathMatrixInverse : public FRigVMFunction_MathMatrixUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathQuaternionBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathQuaternionBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathQuaternionUnaryOp
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathQuaternionUnaryOp : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		FQuat Result; // 0x30(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionBinaryOp
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigVMFunction_MathQuaternionBinaryOp : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat A; // 0x10(0x20)
		FQuat B; // 0x30(0x20)
		FQuat Result; // 0x50(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionBinaryAggregateOp
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigVMFunction_MathQuaternionBinaryAggregateOp : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat A; // 0x10(0x20)
		FQuat B; // 0x30(0x20)
		FQuat Result; // 0x50(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionMake
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathQuaternionMake : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		float X; // 0x8(0x4)
		float Y; // 0xC(0x4)
		float Z; // 0x10(0x4)
		float W; // 0x14(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FQuat Result; // 0x20(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionFromAxisAndAngle
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathQuaternionFromAxisAndAngle : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		FVector Axis; // 0x8(0x18)
		float Angle; // 0x20(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
		FQuat Result; // 0x30(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionFromEuler
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathQuaternionFromEuler : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		FVector Euler; // 0x8(0x18)
		EEulerRotationOrder RotationOrder; // 0x20(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x21(0xF) UNKNOWN PROPERTY
		FQuat Result; // 0x30(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionFromRotator
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathQuaternionFromRotator : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		FRotator Rotator; // 0x8(0x18)
		FQuat Result; // 0x20(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionFromRotatorV2
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathQuaternionFromRotatorV2 : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		FRotator Value; // 0x8(0x18)
		FQuat Result; // 0x20(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionFromTwoVectors
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x58 (0x60 - 0x8)
	struct FRigVMFunction_MathQuaternionFromTwoVectors : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FQuat Result; // 0x40(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionToAxisAndAngle
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathQuaternionToAxisAndAngle : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		FVector Axis; // 0x30(0x18)
		float Angle; // 0x48(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathQuaternionToVectors
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x78 (0x80 - 0x8)
	struct FRigVMFunction_MathQuaternionToVectors : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		FVector Forward; // 0x30(0x18)
		FVector Right; // 0x48(0x18)
		FVector Up; // 0x60(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathQuaternionScale
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathQuaternionScale : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		float Scale; // 0x30(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x34(0xC) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathQuaternionScaleV2
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x58 (0x60 - 0x8)
	struct FRigVMFunction_MathQuaternionScaleV2 : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		float Factor; // 0x30(0x4)
		unsigned char UnknownData03_6[0xC]; // 0x34(0xC) UNKNOWN PROPERTY
		FQuat Result; // 0x40(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionToEuler
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathQuaternionToEuler : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		EEulerRotationOrder RotationOrder; // 0x30(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FVector Result; // 0x38(0x18)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionToRotator
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathQuaternionToRotator : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		FRotator Result; // 0x30(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathQuaternionMul
	// Inherited from FRigVMFunction_MathQuaternionBinaryAggregateOp -> FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMFunction_MathQuaternionMul : public FRigVMFunction_MathQuaternionBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathQuaternionInverse
	// Inherited from FRigVMFunction_MathQuaternionUnaryOp -> FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathQuaternionInverse : public FRigVMFunction_MathQuaternionUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathQuaternionSlerp
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x78 (0x80 - 0x8)
	struct FRigVMFunction_MathQuaternionSlerp : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat A; // 0x10(0x20)
		FQuat B; // 0x30(0x20)
		float T; // 0x50(0x4)
		unsigned char UnknownData03_6[0xC]; // 0x54(0xC) UNKNOWN PROPERTY
		FQuat Result; // 0x60(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionEquals
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x58 (0x60 - 0x8)
	struct FRigVMFunction_MathQuaternionEquals : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat A; // 0x10(0x20)
		FQuat B; // 0x30(0x20)
		bool Result; // 0x50(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x51(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathQuaternionNotEquals
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x58 (0x60 - 0x8)
	struct FRigVMFunction_MathQuaternionNotEquals : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat A; // 0x10(0x20)
		FQuat B; // 0x30(0x20)
		bool Result; // 0x50(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x51(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathQuaternionSelectBool
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigVMFunction_MathQuaternionSelectBool : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		bool Condition; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FQuat IfTrue; // 0x10(0x20)
		FQuat IfFalse; // 0x30(0x20)
		FQuat Result; // 0x50(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionDot
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x58 (0x60 - 0x8)
	struct FRigVMFunction_MathQuaternionDot : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat A; // 0x10(0x20)
		FQuat B; // 0x30(0x20)
		float Result; // 0x50(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x54(0xC) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathQuaternionUnit
	// Inherited from FRigVMFunction_MathQuaternionUnaryOp -> FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathQuaternionUnit : public FRigVMFunction_MathQuaternionUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathQuaternionRotateVector
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x58 (0x60 - 0x8)
	struct FRigVMFunction_MathQuaternionRotateVector : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Transform; // 0x10(0x20)
		FVector Vector; // 0x30(0x18)
		FVector Result; // 0x48(0x18)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionGetAxis
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathQuaternionGetAxis : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Quaternion; // 0x10(0x20)
		TEnumAsByte Axis; // 0x30(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FVector Result; // 0x38(0x18)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionSwingTwist
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigVMFunction_MathQuaternionSwingTwist : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Input; // 0x10(0x20)
		FVector TwistAxis; // 0x30(0x18)
		unsigned char UnknownData03_6[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		FQuat Swing; // 0x50(0x20)
		FQuat Twist; // 0x70(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionRotationOrder
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x8 (0x10 - 0x8)
	struct FRigVMFunction_MathQuaternionRotationOrder : public FRigVMFunction_MathBase	
	{
	public:
		EEulerRotationOrder RotationOrder; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathQuaternionMakeRelative
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigVMFunction_MathQuaternionMakeRelative : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Global; // 0x10(0x20)
		FQuat Parent; // 0x30(0x20)
		FQuat Local; // 0x50(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionMakeAbsolute
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigVMFunction_MathQuaternionMakeAbsolute : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Local; // 0x10(0x20)
		FQuat Parent; // 0x30(0x20)
		FQuat Global; // 0x50(0x20)
	};


	// Struct RigVM.RigVMFunction_MathQuaternionMirrorTransform
	// Inherited from FRigVMFunction_MathQuaternionBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRigVMFunction_MathQuaternionMirrorTransform : public FRigVMFunction_MathQuaternionBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		TEnumAsByte MirrorAxis; // 0x30(0x1)
		TEnumAsByte AxisToFlip; // 0x31(0x1)
		unsigned char UnknownData03_6[0xE]; // 0x32(0xE) UNKNOWN PROPERTY
		FTransform CentralTransform; // 0x40(0x60)
		FQuat Result; // 0xA0(0x20)
	};


	// Struct RigVM.RigVMFunction_MathRayBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathRayBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathRayIntersectRay
	// Inherited from FRigVMFunction_MathRayBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigVMFunction_MathRayIntersectRay : public FRigVMFunction_MathRayBase	
	{
	public:
		FRay A; // 0x8(0x30)
		FRay B; // 0x38(0x30)
		FVector Result; // 0x68(0x18)
		float Distance; // 0x80(0x4)
		float RatioA; // 0x84(0x4)
		float RatioB; // 0x88(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathRayIntersectPlane
	// Inherited from FRigVMFunction_MathRayBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x80 (0x88 - 0x8)
	struct FRigVMFunction_MathRayIntersectPlane : public FRigVMFunction_MathRayBase	
	{
	public:
		FRay Ray; // 0x8(0x30)
		FVector PlanePoint; // 0x38(0x18)
		FVector PlaneNormal; // 0x50(0x18)
		FVector Result; // 0x68(0x18)
		float Distance; // 0x80(0x4)
		float Ratio; // 0x84(0x4)
	};


	// Struct RigVM.RigVMFunction_MathRayGetAt
	// Inherited from FRigVMFunction_MathRayBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x50 (0x58 - 0x8)
	struct FRigVMFunction_MathRayGetAt : public FRigVMFunction_MathRayBase	
	{
	public:
		FRay Ray; // 0x8(0x30)
		float Ratio; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x40(0x18)
	};


	// Struct RigVM.RigVMFunction_MathRayTransform
	// Inherited from FRigVMFunction_MathRayBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xC8 (0xD0 - 0x8)
	struct FRigVMFunction_MathRayTransform : public FRigVMFunction_MathRayBase	
	{
	public:
		FRay Ray; // 0x8(0x30)
		unsigned char UnknownData01_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x40(0x60)
		FRay Result; // 0xA0(0x30)
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateQuatWorkData
	// Size: 0x90 (0x90 - 0x0)
	struct FRigVMFunction_MathRBFInterpolateQuatWorkData	
	{
	public:
		unsigned char UnknownData01_2[0x90]; // 0x0(0x90) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateVectorWorkData
	// Size: 0x90 (0x90 - 0x0)
	struct FRigVMFunction_MathRBFInterpolateVectorWorkData	
	{
	public:
		unsigned char UnknownData01_2[0x90]; // 0x0(0x90) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathRBFInterpolateBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateQuatBase
	// Inherited from FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xE8 (0xF0 - 0x8)
	struct FRigVMFunction_MathRBFInterpolateQuatBase : public FRigVMFunction_MathRBFInterpolateBase	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Input; // 0x10(0x20)
		ERBFQuatDistanceType DistanceFunction; // 0x30(0x1)
		ERBFKernelType SmoothingFunction; // 0x31(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		float SmoothingAngle; // 0x34(0x4)
		bool bNormalizeOutput; // 0x38(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FVector TwistAxis; // 0x40(0x18)
		unsigned char UnknownData07_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FRigVMFunction_MathRBFInterpolateQuatWorkData WorkData; // 0x60(0x90)
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateVectorBase
	// Inherited from FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRigVMFunction_MathRBFInterpolateVectorBase : public FRigVMFunction_MathRBFInterpolateBase	
	{
	public:
		FVector Input; // 0x8(0x18)
		ERBFVectorDistanceType DistanceFunction; // 0x20(0x1)
		ERBFKernelType SmoothingFunction; // 0x21(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x22(0x2) UNKNOWN PROPERTY
		float SmoothingRadius; // 0x24(0x4)
		bool bNormalizeOutput; // 0x28(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FRigVMFunction_MathRBFInterpolateVectorWorkData WorkData; // 0x30(0x90)
	};


	// Struct RigVM.MathRBFInterpolateQuatFloat_Target
	// Size: 0x30 (0x30 - 0x0)
	struct FMathRBFInterpolateQuatFloat_Target	
	{
	public:
		FQuat Target; // 0x0(0x20)
		float Value; // 0x20(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateQuatFloat
	// Inherited from FRigVMFunction_MathRBFInterpolateQuatBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x110 - 0xF0)
	struct FRigVMFunction_MathRBFInterpolateQuatFloat : public FRigVMFunction_MathRBFInterpolateQuatBase	
	{
	public:
		TArray Targets; // 0xF0(0x10)
		float Output; // 0x100(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x104(0xC) UNKNOWN PROPERTY
	};


	// Struct RigVM.MathRBFInterpolateQuatVector_Target
	// Size: 0x40 (0x40 - 0x0)
	struct FMathRBFInterpolateQuatVector_Target	
	{
	public:
		FQuat Target; // 0x0(0x20)
		FVector Value; // 0x20(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateQuatVector
	// Inherited from FRigVMFunction_MathRBFInterpolateQuatBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x30 (0x120 - 0xF0)
	struct FRigVMFunction_MathRBFInterpolateQuatVector : public FRigVMFunction_MathRBFInterpolateQuatBase	
	{
	public:
		TArray Targets; // 0xF0(0x10)
		FVector Output; // 0x100(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.MathRBFInterpolateQuatColor_Target
	// Size: 0x30 (0x30 - 0x0)
	struct FMathRBFInterpolateQuatColor_Target	
	{
	public:
		FQuat Target; // 0x0(0x20)
		FLinearColor Value; // 0x20(0x10)
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateQuatColor
	// Inherited from FRigVMFunction_MathRBFInterpolateQuatBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x110 - 0xF0)
	struct FRigVMFunction_MathRBFInterpolateQuatColor : public FRigVMFunction_MathRBFInterpolateQuatBase	
	{
	public:
		TArray Targets; // 0xF0(0x10)
		FLinearColor Output; // 0x100(0x10)
	};


	// Struct RigVM.MathRBFInterpolateQuatQuat_Target
	// Size: 0x40 (0x40 - 0x0)
	struct FMathRBFInterpolateQuatQuat_Target	
	{
	public:
		FQuat Target; // 0x0(0x20)
		FQuat Value; // 0x20(0x20)
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateQuatQuat
	// Inherited from FRigVMFunction_MathRBFInterpolateQuatBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x30 (0x120 - 0xF0)
	struct FRigVMFunction_MathRBFInterpolateQuatQuat : public FRigVMFunction_MathRBFInterpolateQuatBase	
	{
	public:
		TArray Targets; // 0xF0(0x10)
		FQuat Output; // 0x100(0x20)
	};


	// Struct RigVM.MathRBFInterpolateQuatXform_Target
	// Size: 0x80 (0x80 - 0x0)
	struct FMathRBFInterpolateQuatXform_Target	
	{
	public:
		FQuat Target; // 0x0(0x20)
		FTransform Value; // 0x20(0x60)
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateQuatXform
	// Inherited from FRigVMFunction_MathRBFInterpolateQuatBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x70 (0x160 - 0xF0)
	struct FRigVMFunction_MathRBFInterpolateQuatXform : public FRigVMFunction_MathRBFInterpolateQuatBase	
	{
	public:
		TArray Targets; // 0xF0(0x10)
		FTransform Output; // 0x100(0x60)
	};


	// Struct RigVM.MathRBFInterpolateVectorFloat_Target
	// Size: 0x20 (0x20 - 0x0)
	struct FMathRBFInterpolateVectorFloat_Target	
	{
	public:
		FVector Target; // 0x0(0x18)
		float Value; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateVectorFloat
	// Inherited from FRigVMFunction_MathRBFInterpolateVectorBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0xE0 - 0xC0)
	struct FRigVMFunction_MathRBFInterpolateVectorFloat : public FRigVMFunction_MathRBFInterpolateVectorBase	
	{
	public:
		TArray Targets; // 0xC0(0x10)
		float Output; // 0xD0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xD4(0xC) UNKNOWN PROPERTY
	};


	// Struct RigVM.MathRBFInterpolateVectorVector_Target
	// Size: 0x30 (0x30 - 0x0)
	struct FMathRBFInterpolateVectorVector_Target	
	{
	public:
		FVector Target; // 0x0(0x18)
		FVector Value; // 0x18(0x18)
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateVectorVector
	// Inherited from FRigVMFunction_MathRBFInterpolateVectorBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x30 (0xF0 - 0xC0)
	struct FRigVMFunction_MathRBFInterpolateVectorVector : public FRigVMFunction_MathRBFInterpolateVectorBase	
	{
	public:
		TArray Targets; // 0xC0(0x10)
		FVector Output; // 0xD0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.MathRBFInterpolateVectorColor_Target
	// Size: 0x28 (0x28 - 0x0)
	struct FMathRBFInterpolateVectorColor_Target	
	{
	public:
		FVector Target; // 0x0(0x18)
		FLinearColor Value; // 0x18(0x10)
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateVectorColor
	// Inherited from FRigVMFunction_MathRBFInterpolateVectorBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0xE0 - 0xC0)
	struct FRigVMFunction_MathRBFInterpolateVectorColor : public FRigVMFunction_MathRBFInterpolateVectorBase	
	{
	public:
		TArray Targets; // 0xC0(0x10)
		FLinearColor Output; // 0xD0(0x10)
	};


	// Struct RigVM.MathRBFInterpolateVectorQuat_Target
	// Size: 0x40 (0x40 - 0x0)
	struct FMathRBFInterpolateVectorQuat_Target	
	{
	public:
		FVector Target; // 0x0(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x20(0x20)
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateVectorQuat
	// Inherited from FRigVMFunction_MathRBFInterpolateVectorBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x30 (0xF0 - 0xC0)
	struct FRigVMFunction_MathRBFInterpolateVectorQuat : public FRigVMFunction_MathRBFInterpolateVectorBase	
	{
	public:
		TArray Targets; // 0xC0(0x10)
		FQuat Output; // 0xD0(0x20)
	};


	// Struct RigVM.MathRBFInterpolateVectorXform_Target
	// Size: 0x80 (0x80 - 0x0)
	struct FMathRBFInterpolateVectorXform_Target	
	{
	public:
		FVector Target; // 0x0(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x20(0x60)
	};


	// Struct RigVM.RigVMFunction_MathRBFInterpolateVectorXform
	// Inherited from FRigVMFunction_MathRBFInterpolateVectorBase -> FRigVMFunction_MathRBFInterpolateBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x70 (0x130 - 0xC0)
	struct FRigVMFunction_MathRBFInterpolateVectorXform : public FRigVMFunction_MathRBFInterpolateVectorBase	
	{
	public:
		TArray Targets; // 0xC0(0x10)
		FTransform Output; // 0xD0(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathTransformBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathTransformMutableBase
	// Inherited from FRigVMFunction_MathMutableBase -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0x0 (0x100 - 0x100)
	struct FRigVMFunction_MathTransformMutableBase : public FRigVMFunction_MathMutableBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathTransformUnaryOp
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xC8 (0xD0 - 0x8)
	struct FRigVMFunction_MathTransformUnaryOp : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		FTransform Result; // 0x70(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformBinaryOp
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x128 (0x130 - 0x8)
	struct FRigVMFunction_MathTransformBinaryOp : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform A; // 0x10(0x60)
		FTransform B; // 0x70(0x60)
		FTransform Result; // 0xD0(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformBinaryAggregateOp
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x128 (0x130 - 0x8)
	struct FRigVMFunction_MathTransformBinaryAggregateOp : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform A; // 0x10(0x60)
		FTransform B; // 0x70(0x60)
		FTransform Result; // 0xD0(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformMake
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRigVMFunction_MathTransformMake : public FRigVMFunction_MathTransformBase	
	{
	public:
		FVector Translation; // 0x8(0x18)
		FQuat Rotation; // 0x20(0x20)
		FVector Scale; // 0x40(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FTransform Result; // 0x60(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformFromEulerTransform
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigVMFunction_MathTransformFromEulerTransform : public FRigVMFunction_MathTransformBase	
	{
	public:
		FEulerTransform EulerTransform; // 0x8(0x48)
		FTransform Result; // 0x50(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformFromEulerTransformV2
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigVMFunction_MathTransformFromEulerTransformV2 : public FRigVMFunction_MathTransformBase	
	{
	public:
		FEulerTransform Value; // 0x8(0x48)
		FTransform Result; // 0x50(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformToEulerTransform
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRigVMFunction_MathTransformToEulerTransform : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		FEulerTransform Result; // 0x70(0x48)
		unsigned char UnknownData03_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathTransformToVectors
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRigVMFunction_MathTransformToVectors : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		FVector Forward; // 0x70(0x18)
		FVector Right; // 0x88(0x18)
		FVector Up; // 0xA0(0x18)
		unsigned char UnknownData03_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathTransformMul
	// Inherited from FRigVMFunction_MathTransformBinaryAggregateOp -> FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x130 - 0x130)
	struct FRigVMFunction_MathTransformMul : public FRigVMFunction_MathTransformBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathTransformMakeRelative
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x128 (0x130 - 0x8)
	struct FRigVMFunction_MathTransformMakeRelative : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Global; // 0x10(0x60)
		FTransform Parent; // 0x70(0x60)
		FTransform Local; // 0xD0(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformMakeAbsolute
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x128 (0x130 - 0x8)
	struct FRigVMFunction_MathTransformMakeAbsolute : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Local; // 0x10(0x60)
		FTransform Parent; // 0x70(0x60)
		FTransform Global; // 0xD0(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformAccumulateArray
	// Inherited from FRigVMFunction_MathTransformMutableBase -> FRigVMFunction_MathMutableBase -> FRigVMStructMutable -> FRigVMStruct
	// Size: 0x90 (0x190 - 0x100)
	struct FRigVMFunction_MathTransformAccumulateArray : public FRigVMFunction_MathTransformMutableBase	
	{
	public:
		TArray Transforms; // 0x100(0x10)
		ERigVMTransformSpace TargetSpace; // 0x110(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x111(0xF) UNKNOWN PROPERTY
		FTransform Root; // 0x120(0x60)
		TArray ParentIndices; // 0x180(0x10)
	};


	// Struct RigVM.RigVMFunction_MathTransformInverse
	// Inherited from FRigVMFunction_MathTransformUnaryOp -> FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0xD0 - 0xD0)
	struct FRigVMFunction_MathTransformInverse : public FRigVMFunction_MathTransformUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathTransformLerp
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x138 (0x140 - 0x8)
	struct FRigVMFunction_MathTransformLerp : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform A; // 0x10(0x60)
		FTransform B; // 0x70(0x60)
		float T; // 0xD0(0x4)
		unsigned char UnknownData03_6[0xC]; // 0xD4(0xC) UNKNOWN PROPERTY
		FTransform Result; // 0xE0(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformSelectBool
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x128 (0x130 - 0x8)
	struct FRigVMFunction_MathTransformSelectBool : public FRigVMFunction_MathTransformBase	
	{
	public:
		bool Condition; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FTransform IfTrue; // 0x10(0x60)
		FTransform IfFalse; // 0x70(0x60)
		FTransform Result; // 0xD0(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformRotateVector
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigVMFunction_MathTransformRotateVector : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FVector Vector; // 0x70(0x18)
		FVector Result; // 0x88(0x18)
	};


	// Struct RigVM.RigVMFunction_MathTransformTransformVector
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigVMFunction_MathTransformTransformVector : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FVector Location; // 0x70(0x18)
		FVector Result; // 0x88(0x18)
	};


	// Struct RigVM.RigVMFunction_MathTransformFromSRT
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x108 (0x110 - 0x8)
	struct FRigVMFunction_MathTransformFromSRT : public FRigVMFunction_MathTransformBase	
	{
	public:
		FVector Location; // 0x8(0x18)
		FVector Rotation; // 0x20(0x18)
		EEulerRotationOrder RotationOrder; // 0x38(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FVector Scale; // 0x40(0x18)
		unsigned char UnknownData04_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x60(0x60)
		FEulerTransform EulerTransform; // 0xC0(0x48)
		unsigned char UnknownData05_7[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathTransformArrayToSRT
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x40 (0x48 - 0x8)
	struct FRigVMFunction_MathTransformArrayToSRT : public FRigVMFunction_MathTransformBase	
	{
	public:
		TArray Transforms; // 0x8(0x10)
		TArray Translations; // 0x18(0x10)
		TArray Rotations; // 0x28(0x10)
		TArray Scales; // 0x38(0x10)
	};


	// Struct RigVM.RigVMFunction_MathTransformClampSpatially
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x158 (0x160 - 0x8)
	struct FRigVMFunction_MathTransformClampSpatially : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		TEnumAsByte Axis; // 0x70(0x1)
		TEnumAsByte Type; // 0x71(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x72(0x2) UNKNOWN PROPERTY
		float Minimum; // 0x74(0x4)
		float Maximum; // 0x78(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FTransform Space; // 0x80(0x60)
		bool bDrawDebug; // 0xE0(0x1)
		unsigned char UnknownData08_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		FLinearColor DebugColor; // 0xE4(0x10)
		float DebugThickness; // 0xF4(0x4)
		unsigned char UnknownData09_6[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		FTransform Result; // 0x100(0x60)
	};


	// Struct RigVM.RigVMFunction_MathTransformMirrorTransform
	// Inherited from FRigVMFunction_MathTransformBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x138 (0x140 - 0x8)
	struct FRigVMFunction_MathTransformMirrorTransform : public FRigVMFunction_MathTransformBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		TEnumAsByte MirrorAxis; // 0x70(0x1)
		TEnumAsByte AxisToFlip; // 0x71(0x1)
		unsigned char UnknownData03_6[0xE]; // 0x72(0xE) UNKNOWN PROPERTY
		FTransform CentralTransform; // 0x80(0x60)
		FTransform Result; // 0xE0(0x60)
	};


	// Struct RigVM.RigVMFunction_MathVectorBase
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_MathVectorBase : public FRigVMFunction_MathBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorUnaryOp
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigVMFunction_MathVectorUnaryOp : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		FVector Result; // 0x20(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorBinaryOp
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathVectorBinaryOp : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		FVector Result; // 0x38(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorBinaryAggregateOp
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathVectorBinaryAggregateOp : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		FVector Result; // 0x38(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorMake
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_MathVectorMake : public FRigVMFunction_MathVectorBase	
	{
	public:
		float X; // 0x8(0x4)
		float Y; // 0xC(0x4)
		float Z; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x18(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorFromFloat
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathVectorFromFloat : public FRigVMFunction_MathVectorBase	
	{
	public:
		float Value; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x10(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorFromDouble
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathVectorFromDouble : public FRigVMFunction_MathVectorBase	
	{
	public:
		double Value; // 0x8(0x8)
		FVector Result; // 0x10(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorAdd
	// Inherited from FRigVMFunction_MathVectorBinaryAggregateOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathVectorAdd : public FRigVMFunction_MathVectorBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorSub
	// Inherited from FRigVMFunction_MathVectorBinaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathVectorSub : public FRigVMFunction_MathVectorBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorMul
	// Inherited from FRigVMFunction_MathVectorBinaryAggregateOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathVectorMul : public FRigVMFunction_MathVectorBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorScale
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorScale : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		float Factor; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x28(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorDiv
	// Inherited from FRigVMFunction_MathVectorBinaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathVectorDiv : public FRigVMFunction_MathVectorBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorMod
	// Inherited from FRigVMFunction_MathVectorBinaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathVectorMod : public FRigVMFunction_MathVectorBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorMin
	// Inherited from FRigVMFunction_MathVectorBinaryAggregateOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathVectorMin : public FRigVMFunction_MathVectorBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorMax
	// Inherited from FRigVMFunction_MathVectorBinaryAggregateOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathVectorMax : public FRigVMFunction_MathVectorBinaryAggregateOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorNegate
	// Inherited from FRigVMFunction_MathVectorUnaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathVectorNegate : public FRigVMFunction_MathVectorUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorAbs
	// Inherited from FRigVMFunction_MathVectorUnaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathVectorAbs : public FRigVMFunction_MathVectorUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorFloor
	// Inherited from FRigVMFunction_MathVectorUnaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathVectorFloor : public FRigVMFunction_MathVectorUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorCeil
	// Inherited from FRigVMFunction_MathVectorUnaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathVectorCeil : public FRigVMFunction_MathVectorUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorRound
	// Inherited from FRigVMFunction_MathVectorUnaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathVectorRound : public FRigVMFunction_MathVectorUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorSign
	// Inherited from FRigVMFunction_MathVectorUnaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathVectorSign : public FRigVMFunction_MathVectorUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorClamp
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x60 (0x68 - 0x8)
	struct FRigVMFunction_MathVectorClamp : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		FVector Minimum; // 0x20(0x18)
		FVector Maximum; // 0x38(0x18)
		FVector Result; // 0x50(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorLerp
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x50 (0x58 - 0x8)
	struct FRigVMFunction_MathVectorLerp : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		float T; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x40(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorRemap
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigVMFunction_MathVectorRemap : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		FVector SourceMinimum; // 0x20(0x18)
		FVector SourceMaximum; // 0x38(0x18)
		FVector TargetMinimum; // 0x50(0x18)
		FVector TargetMaximum; // 0x68(0x18)
		bool bClamp; // 0x80(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		FVector Result; // 0x88(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorEquals
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorEquals : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		bool Result; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorNotEquals
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorNotEquals : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		bool Result; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorIsNearlyZero
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathVectorIsNearlyZero : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		float Tolerance; // 0x20(0x4)
		bool Result; // 0x24(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorIsNearlyEqual
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorIsNearlyEqual : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		float Tolerance; // 0x38(0x4)
		bool Result; // 0x3C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorSelectBool
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x50 (0x58 - 0x8)
	struct FRigVMFunction_MathVectorSelectBool : public FRigVMFunction_MathVectorBase	
	{
	public:
		bool Condition; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FVector IfTrue; // 0x10(0x18)
		FVector IfFalse; // 0x28(0x18)
		FVector Result; // 0x40(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorDeg
	// Inherited from FRigVMFunction_MathVectorUnaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathVectorDeg : public FRigVMFunction_MathVectorUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorRad
	// Inherited from FRigVMFunction_MathVectorUnaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathVectorRad : public FRigVMFunction_MathVectorUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorLengthSquared
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathVectorLengthSquared : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		float Result; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorLength
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_MathVectorLength : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		float Result; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorDistance
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorDistance : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		float Result; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorCross
	// Inherited from FRigVMFunction_MathVectorBinaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x50 - 0x50)
	struct FRigVMFunction_MathVectorCross : public FRigVMFunction_MathVectorBinaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorDot
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorDot : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		float Result; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorUnit
	// Inherited from FRigVMFunction_MathVectorUnaryOp -> FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x0 (0x38 - 0x38)
	struct FRigVMFunction_MathVectorUnit : public FRigVMFunction_MathVectorUnaryOp	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_MathVectorSetLength
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorSetLength : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		float Length; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x28(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorClampLength
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorClampLength : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		float MinimumLength; // 0x20(0x4)
		float MaximumLength; // 0x24(0x4)
		FVector Result; // 0x28(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorMirror
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathVectorMirror : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		FVector Normal; // 0x20(0x18)
		FVector Result; // 0x38(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorAngle
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorAngle : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		float Result; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorParallel
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorParallel : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		bool Result; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorOrthogonal
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_MathVectorOrthogonal : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector A; // 0x8(0x18)
		FVector B; // 0x20(0x18)
		bool Result; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorBezierFourPoint
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigVMFunction_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase	
	{
	public:
		FRigVMFourPointBezier Bezier; // 0x8(0x60)
		float T; // 0x68(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x70(0x18)
		FVector Tangent; // 0x88(0x18)
	};


	// Struct RigVM.RigVMFourPointBezier
	// Size: 0x60 (0x60 - 0x0)
	struct FRigVMFourPointBezier	
	{
	public:
		FVector A; // 0x0(0x18)
		FVector B; // 0x18(0x18)
		FVector C; // 0x30(0x18)
		FVector D; // 0x48(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorMakeBezierFourPoint
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x60 (0x68 - 0x8)
	struct FRigVMFunction_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase	
	{
	public:
		FRigVMFourPointBezier Bezier; // 0x8(0x60)
	};


	// Struct RigVM.RigVMFunction_MathVectorClampSpatially
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRigVMFunction_MathVectorClampSpatially : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		TEnumAsByte Axis; // 0x20(0x1)
		TEnumAsByte Type; // 0x21(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x22(0x2) UNKNOWN PROPERTY
		float Minimum; // 0x24(0x4)
		float Maximum; // 0x28(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FTransform Space; // 0x30(0x60)
		bool bDrawDebug; // 0x90(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x91(0x3) UNKNOWN PROPERTY
		FLinearColor DebugColor; // 0x94(0x10)
		float DebugThickness; // 0xA4(0x4)
		FVector Result; // 0xA8(0x18)
	};


	// Struct RigVM.RigVMFunction_MathIntersectPlane
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x80 (0x88 - 0x8)
	struct FRigVMFunction_MathIntersectPlane : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Start; // 0x8(0x18)
		FVector Direction; // 0x20(0x18)
		FVector PlanePoint; // 0x38(0x18)
		FVector PlaneNormal; // 0x50(0x18)
		FVector Result; // 0x68(0x18)
		float Distance; // 0x80(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathDistanceToPlane
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigVMFunction_MathDistanceToPlane : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Point; // 0x8(0x18)
		FVector PlanePoint; // 0x20(0x18)
		FVector PlaneNormal; // 0x38(0x18)
		FVector ClosestPointOnPlane; // 0x50(0x18)
		float SignedDistance; // 0x68(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorMakeRelative
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathVectorMakeRelative : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Global; // 0x8(0x18)
		unsigned char UnknownData01_7[0x30]; // 0x20(0x30) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorMakeAbsolute
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x48 (0x50 - 0x8)
	struct FRigVMFunction_MathVectorMakeAbsolute : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Local; // 0x8(0x18)
		FVector Parent; // 0x20(0x18)
		FVector Global; // 0x38(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorMirrorTransform
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigVMFunction_MathVectorMirrorTransform : public FRigVMFunction_MathVectorBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		TEnumAsByte MirrorAxis; // 0x20(0x1)
		TEnumAsByte AxisToFlip; // 0x21(0x1)
		unsigned char UnknownData02_6[0xE]; // 0x22(0xE) UNKNOWN PROPERTY
		FTransform CentralTransform; // 0x30(0x60)
		FVector Result; // 0x90(0x18)
		unsigned char UnknownData03_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_MathVectorArraySum
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_MathVectorArraySum : public FRigVMFunction_MathVectorBase	
	{
	public:
		TArray Array; // 0x8(0x10)
		FVector Sum; // 0x18(0x18)
	};


	// Struct RigVM.RigVMFunction_MathVectorArrayAverage
	// Inherited from FRigVMFunction_MathVectorBase -> FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_MathVectorArrayAverage : public FRigVMFunction_MathVectorBase	
	{
	public:
		TArray Array; // 0x8(0x10)
		FVector Average; // 0x18(0x18)
	};


	// Struct RigVM.RigVMFunction_NoiseFloat
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_NoiseFloat : public FRigVMFunction_MathBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Speed; // 0xC(0x4)
		float Frequency; // 0x10(0x4)
		float Minimum; // 0x14(0x4)
		float Maximum; // 0x18(0x4)
		float Result; // 0x1C(0x4)
		float Time; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_NoiseDouble
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_NoiseDouble : public FRigVMFunction_MathBase	
	{
	public:
		double Value; // 0x8(0x8)
		double Speed; // 0x10(0x8)
		double Frequency; // 0x18(0x8)
		double Minimum; // 0x20(0x8)
		double Maximum; // 0x28(0x8)
		double Result; // 0x30(0x8)
		double Time; // 0x38(0x8)
	};


	// Struct RigVM.RigVMFunction_NoiseVector
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x80 (0x88 - 0x8)
	struct FRigVMFunction_NoiseVector : public FRigVMFunction_MathBase	
	{
	public:
		FVector Position; // 0x8(0x18)
		FVector Speed; // 0x20(0x18)
		FVector Frequency; // 0x38(0x18)
		float Minimum; // 0x50(0x4)
		float Maximum; // 0x54(0x4)
		FVector Result; // 0x58(0x18)
		FVector Time; // 0x70(0x18)
	};


	// Struct RigVM.RigVMFunction_NoiseVector2
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigVMFunction_NoiseVector2 : public FRigVMFunction_MathBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		FVector Speed; // 0x20(0x18)
		FVector Frequency; // 0x38(0x18)
		double Minimum; // 0x50(0x8)
		double Maximum; // 0x58(0x8)
		FVector Result; // 0x60(0x18)
		FVector Time; // 0x78(0x18)
	};


	// Struct RigVM.RigVMFunction_RandomFloat
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_RandomFloat : public FRigVMFunction_MathBase	
	{
	public:
		int32_t Seed; // 0x8(0x4)
		float Minimum; // 0xC(0x4)
		float Maximum; // 0x10(0x4)
		float duration; // 0x14(0x4)
		float Result; // 0x18(0x4)
		float LastResult; // 0x1C(0x4)
		int32_t LastSeed; // 0x20(0x4)
		int32_t BaseSeed; // 0x24(0x4)
		float TimeLeft; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_RandomVector
	// Inherited from FRigVMFunction_MathBase -> FRigVMStruct
	// Size: 0x50 (0x58 - 0x8)
	struct FRigVMFunction_RandomVector : public FRigVMFunction_MathBase	
	{
	public:
		int32_t Seed; // 0x8(0x4)
		float Minimum; // 0xC(0x4)
		float Maximum; // 0x10(0x4)
		float duration; // 0x14(0x4)
		FVector Result; // 0x18(0x18)
		FVector LastResult; // 0x30(0x18)
		int32_t LastSeed; // 0x48(0x4)
		int32_t BaseSeed; // 0x4C(0x4)
		float TimeLeft; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMMirrorSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FRigVMMirrorSettings	
	{
	public:
		TEnumAsByte MirrorAxis; // 0x0(0x1)
		TEnumAsByte AxisToFlip; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FString SearchString; // 0x8(0x10)
		FString ReplaceString; // 0x18(0x10)
	};


	// Struct RigVM.RigVMSimPoint
	// Size: 0x40 (0x40 - 0x0)
	struct FRigVMSimPoint	
	{
	public:
		float Mass; // 0x0(0x4)
		float Size; // 0x4(0x4)
		float LinearDamping; // 0x8(0x4)
		float InheritMotion; // 0xC(0x4)
		FVector Position; // 0x10(0x18)
		FVector LinearVelocity; // 0x28(0x18)
	};


	// Struct RigVM.RigVMDispatch_CoreBase
	// Inherited from FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_CoreBase : public FRigVMDispatchFactory	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayBase
	// Inherited from FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayBase : public FRigVMDispatch_CoreBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayBaseMutable
	// Inherited from FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayBaseMutable : public FRigVMDispatch_ArrayBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayMake
	// Inherited from FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayMake : public FRigVMDispatch_ArrayBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayReset
	// Inherited from FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayReset : public FRigVMDispatch_ArrayBaseMutable	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayGetNum
	// Inherited from FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayGetNum : public FRigVMDispatch_ArrayBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArraySetNum
	// Inherited from FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArraySetNum : public FRigVMDispatch_ArrayBaseMutable	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayGetAtIndex
	// Inherited from FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayGetAtIndex : public FRigVMDispatch_ArrayBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArraySetAtIndex
	// Inherited from FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArraySetAtIndex : public FRigVMDispatch_ArrayBaseMutable	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayAdd
	// Inherited from FRigVMDispatch_ArraySetAtIndex -> FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayAdd : public FRigVMDispatch_ArraySetAtIndex	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayInsert
	// Inherited from FRigVMDispatch_ArraySetAtIndex -> FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayInsert : public FRigVMDispatch_ArraySetAtIndex	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayRemove
	// Inherited from FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayRemove : public FRigVMDispatch_ArrayBaseMutable	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayReverse
	// Inherited from FRigVMDispatch_ArrayReset -> FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayReverse : public FRigVMDispatch_ArrayReset	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayFind
	// Inherited from FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayFind : public FRigVMDispatch_ArrayBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayAppend
	// Inherited from FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayAppend : public FRigVMDispatch_ArrayBaseMutable	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayClone
	// Inherited from FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayClone : public FRigVMDispatch_ArrayBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayUnion
	// Inherited from FRigVMDispatch_ArrayAppend -> FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayUnion : public FRigVMDispatch_ArrayAppend	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayDifference
	// Inherited from FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayDifference : public FRigVMDispatch_ArrayBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayIntersection
	// Inherited from FRigVMDispatch_ArrayDifference -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayIntersection : public FRigVMDispatch_ArrayDifference	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_ArrayIterator
	// Inherited from FRigVMDispatch_ArrayBaseMutable -> FRigVMDispatch_ArrayBase -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_ArrayIterator : public FRigVMDispatch_ArrayBaseMutable	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_Constant
	// Inherited from FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_Constant : public FRigVMDispatch_CoreBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_CoreEquals
	// Inherited from FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_CoreEquals : public FRigVMDispatch_CoreBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_CoreNotEquals
	// Inherited from FRigVMDispatch_CoreEquals -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_CoreNotEquals : public FRigVMDispatch_CoreEquals	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_If
	// Inherited from FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_If : public FRigVMDispatch_CoreBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_MakeStruct
	// Inherited from FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_MakeStruct : public FRigVMDispatch_CoreBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_BreakStruct
	// Inherited from FRigVMDispatch_MakeStruct -> FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_BreakStruct : public FRigVMDispatch_MakeStruct	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_Print
	// Inherited from FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_Print : public FRigVMDispatchFactory	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_SelectInt32
	// Inherited from FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_SelectInt32 : public FRigVMDispatch_CoreBase	
	{
	public:
	};


	// Struct RigVM.RigVMDispatch_SwitchInt32
	// Inherited from FRigVMDispatch_CoreBase -> FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigVMDispatch_SwitchInt32 : public FRigVMDispatch_CoreBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_ControlFlowBase
	// Inherited from FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_ControlFlowBase : public FRigVMStruct	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_ControlFlowBranch
	// Inherited from FRigVMFunction_ControlFlowBase -> FRigVMStruct
	// Size: 0x3E8 (0x3F0 - 0x8)
	struct FRigVMFunction_ControlFlowBranch : public FRigVMFunction_ControlFlowBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FRigVMExecuteContext ExecuteContext; // 0x10(0xF0)
		bool Condition; // 0x100(0x1)
		unsigned char UnknownData04_6[0xF]; // 0x101(0xF) UNKNOWN PROPERTY
		FRigVMExecuteContext TRUE; // 0x110(0xF0)
		FRigVMExecuteContext FALSE; // 0x200(0xF0)
		FRigVMExecuteContext Completed; // 0x2F0(0xF0)
		FName BlockToRun; // 0x3E0(0x4)
		unsigned char UnknownData05_7[0xC]; // 0x3E4(0xC) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_NameBase
	// Inherited from FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_NameBase : public FRigVMStruct	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_NameConcat
	// Inherited from FRigVMFunction_NameBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_NameConcat : public FRigVMFunction_NameBase	
	{
	public:
		FName A; // 0x8(0x4)
		FName B; // 0xC(0x4)
		FName Result; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_NameTruncate
	// Inherited from FRigVMFunction_NameBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_NameTruncate : public FRigVMFunction_NameBase	
	{
	public:
		FName Name; // 0x8(0x4)
		int32_t Count; // 0xC(0x4)
		bool FromEnd; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName Remainder; // 0x14(0x4)
		FName Chopped; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_NameReplace
	// Inherited from FRigVMFunction_NameBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_NameReplace : public FRigVMFunction_NameBase	
	{
	public:
		FName Name; // 0x8(0x4)
		FName Old; // 0xC(0x4)
		FName New; // 0x10(0x4)
		FName Result; // 0x14(0x4)
	};


	// Struct RigVM.RigVMFunction_EndsWith
	// Inherited from FRigVMFunction_NameBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_EndsWith : public FRigVMFunction_NameBase	
	{
	public:
		FName Name; // 0x8(0x4)
		FName Ending; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_StartsWith
	// Inherited from FRigVMFunction_NameBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_StartsWith : public FRigVMFunction_NameBase	
	{
	public:
		FName Name; // 0x8(0x4)
		FName Start; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_Contains
	// Inherited from FRigVMFunction_NameBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_Contains : public FRigVMFunction_NameBase	
	{
	public:
		FName Name; // 0x8(0x4)
		FName Search; // 0xC(0x4)
		bool Result; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_StringBase
	// Inherited from FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_StringBase : public FRigVMStruct	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_StringConcat
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigVMFunction_StringConcat : public FRigVMFunction_StringBase	
	{
	public:
		FString A; // 0x8(0x10)
		FString B; // 0x18(0x10)
		FString Result; // 0x28(0x10)
	};


	// Struct RigVM.RigVMFunction_StringTruncate
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigVMFunction_StringTruncate : public FRigVMFunction_StringBase	
	{
	public:
		FString Name; // 0x8(0x10)
		int32_t Count; // 0x18(0x4)
		bool FromEnd; // 0x1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		FString Remainder; // 0x20(0x10)
		FString Chopped; // 0x30(0x10)
	};


	// Struct RigVM.RigVMFunction_StringReplace
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x40 (0x48 - 0x8)
	struct FRigVMFunction_StringReplace : public FRigVMFunction_StringBase	
	{
	public:
		FString Name; // 0x8(0x10)
		FString Old; // 0x18(0x10)
		FString New; // 0x28(0x10)
		FString Result; // 0x38(0x10)
	};


	// Struct RigVM.RigVMFunction_StringEndsWith
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_StringEndsWith : public FRigVMFunction_StringBase	
	{
	public:
		FString Name; // 0x8(0x10)
		FString Ending; // 0x18(0x10)
		bool Result; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_StringStartsWith
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_StringStartsWith : public FRigVMFunction_StringBase	
	{
	public:
		FString Name; // 0x8(0x10)
		FString Start; // 0x18(0x10)
		bool Result; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_StringContains
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_StringContains : public FRigVMFunction_StringBase	
	{
	public:
		FString Name; // 0x8(0x10)
		FString Search; // 0x18(0x10)
		bool Result; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_StringLength
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_StringLength : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		int32_t Length; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_StringTrimWhitespace
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_StringTrimWhitespace : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		FString Result; // 0x18(0x10)
	};


	// Struct RigVM.RigVMFunction_StringToUppercase
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_StringToUppercase : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		FString Result; // 0x18(0x10)
	};


	// Struct RigVM.RigVMFunction_StringToLowercase
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_StringToLowercase : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		FString Result; // 0x18(0x10)
	};


	// Struct RigVM.RigVMFunction_StringReverse
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_StringReverse : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		FString Reverse; // 0x18(0x10)
	};


	// Struct RigVM.RigVMFunction_StringLeft
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_StringLeft : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		int32_t Count; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FString Result; // 0x20(0x10)
	};


	// Struct RigVM.RigVMFunction_StringRight
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_StringRight : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		int32_t Count; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FString Result; // 0x20(0x10)
	};


	// Struct RigVM.RigVMFunction_StringMiddle
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_StringMiddle : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		int32_t Start; // 0x18(0x4)
		int32_t Count; // 0x1C(0x4)
		FString Result; // 0x20(0x10)
	};


	// Struct RigVM.RigVMFunction_StringFind
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_StringFind : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		FString Search; // 0x18(0x10)
		bool Found; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t Index; // 0x2C(0x4)
	};


	// Struct RigVM.RigVMFunction_StringSplit
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigVMFunction_StringSplit : public FRigVMFunction_StringBase	
	{
	public:
		FString Value; // 0x8(0x10)
		FString Separator; // 0x18(0x10)
		TArray Result; // 0x28(0x10)
	};


	// Struct RigVM.RigVMFunction_StringJoin
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigVMFunction_StringJoin : public FRigVMFunction_StringBase	
	{
	public:
		TArray Values; // 0x8(0x10)
		FString Separator; // 0x18(0x10)
		FString Result; // 0x28(0x10)
	};


	// Struct RigVM.RigVMFunction_StringPadInteger
	// Inherited from FRigVMFunction_StringBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_StringPadInteger : public FRigVMFunction_StringBase	
	{
	public:
		int32_t Value; // 0x8(0x4)
		int32_t Digits; // 0xC(0x4)
		FString Result; // 0x10(0x10)
	};


	// Struct RigVM.RigDispatch_ToString
	// Inherited from FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigDispatch_ToString : public FRigVMDispatchFactory	
	{
	public:
	};


	// Struct RigVM.RigDispatch_FromString
	// Inherited from FRigVMDispatchFactory
	// Size: 0x0 (0x70 - 0x70)
	struct FRigDispatch_FromString : public FRigVMDispatchFactory	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_AccumulateBase
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigVMFunction_AccumulateBase : public FRigVMFunction_SimBase	
	{
	public:
	};


	// Struct RigVM.RigVMFunction_AccumulateFloatAdd
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_AccumulateFloatAdd : public FRigVMFunction_AccumulateBase	
	{
	public:
		float Increment; // 0x8(0x4)
		float InitialValue; // 0xC(0x4)
		bool bIntegrateDeltaTime; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float Result; // 0x14(0x4)
		float AccumulatedValue; // 0x18(0x4)
		bool bIsInitialized; // 0x1C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateVectorAdd
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x70 (0x78 - 0x8)
	struct FRigVMFunction_AccumulateVectorAdd : public FRigVMFunction_AccumulateBase	
	{
	public:
		FVector Increment; // 0x8(0x18)
		FVector InitialValue; // 0x20(0x18)
		bool bIntegrateDeltaTime; // 0x38(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FVector Result; // 0x40(0x18)
		FVector AccumulatedValue; // 0x58(0x18)
		bool bIsInitialized; // 0x70(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateFloatMul
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_AccumulateFloatMul : public FRigVMFunction_AccumulateBase	
	{
	public:
		float Multiplier; // 0x8(0x4)
		float InitialValue; // 0xC(0x4)
		bool bIntegrateDeltaTime; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float Result; // 0x14(0x4)
		float AccumulatedValue; // 0x18(0x4)
		bool bIsInitialized; // 0x1C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateVectorMul
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x70 (0x78 - 0x8)
	struct FRigVMFunction_AccumulateVectorMul : public FRigVMFunction_AccumulateBase	
	{
	public:
		FVector Multiplier; // 0x8(0x18)
		FVector InitialValue; // 0x20(0x18)
		bool bIntegrateDeltaTime; // 0x38(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FVector Result; // 0x40(0x18)
		FVector AccumulatedValue; // 0x58(0x18)
		bool bIsInitialized; // 0x70(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateQuatMul
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigVMFunction_AccumulateQuatMul : public FRigVMFunction_AccumulateBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Multiplier; // 0x10(0x20)
		FQuat InitialValue; // 0x30(0x20)
		bool bFlipOrder; // 0x50(0x1)
		bool bIntegrateDeltaTime; // 0x51(0x1)
		unsigned char UnknownData04_6[0xE]; // 0x52(0xE) UNKNOWN PROPERTY
		FQuat Result; // 0x60(0x20)
		FQuat AccumulatedValue; // 0x80(0x20)
		bool bIsInitialized; // 0xA0(0x1)
		unsigned char UnknownData05_7[0xF]; // 0xA1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateTransformMul
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x1A8 (0x1B0 - 0x8)
	struct FRigVMFunction_AccumulateTransformMul : public FRigVMFunction_AccumulateBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Multiplier; // 0x10(0x60)
		FTransform InitialValue; // 0x70(0x60)
		bool bFlipOrder; // 0xD0(0x1)
		bool bIntegrateDeltaTime; // 0xD1(0x1)
		unsigned char UnknownData04_6[0xE]; // 0xD2(0xE) UNKNOWN PROPERTY
		FTransform Result; // 0xE0(0x60)
		FTransform AccumulatedValue; // 0x140(0x60)
		bool bIsInitialized; // 0x1A0(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x1A1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateFloatLerp
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigVMFunction_AccumulateFloatLerp : public FRigVMFunction_AccumulateBase	
	{
	public:
		float TargetValue; // 0x8(0x4)
		float InitialValue; // 0xC(0x4)
		float Blend; // 0x10(0x4)
		bool bIntegrateDeltaTime; // 0x14(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float Result; // 0x18(0x4)
		float AccumulatedValue; // 0x1C(0x4)
		bool bIsInitialized; // 0x20(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateVectorLerp
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x70 (0x78 - 0x8)
	struct FRigVMFunction_AccumulateVectorLerp : public FRigVMFunction_AccumulateBase	
	{
	public:
		FVector TargetValue; // 0x8(0x18)
		FVector InitialValue; // 0x20(0x18)
		float Blend; // 0x38(0x4)
		bool bIntegrateDeltaTime; // 0x3C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		FVector Result; // 0x40(0x18)
		FVector AccumulatedValue; // 0x58(0x18)
		bool bIsInitialized; // 0x70(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateQuatLerp
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0xA8 (0xB0 - 0x8)
	struct FRigVMFunction_AccumulateQuatLerp : public FRigVMFunction_AccumulateBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat TargetValue; // 0x10(0x20)
		FQuat InitialValue; // 0x30(0x20)
		float Blend; // 0x50(0x4)
		bool bIntegrateDeltaTime; // 0x54(0x1)
		unsigned char UnknownData04_6[0xB]; // 0x55(0xB) UNKNOWN PROPERTY
		FQuat Result; // 0x60(0x20)
		FQuat AccumulatedValue; // 0x80(0x20)
		bool bIsInitialized; // 0xA0(0x1)
		unsigned char UnknownData05_7[0xF]; // 0xA1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateTransformLerp
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x1A8 (0x1B0 - 0x8)
	struct FRigVMFunction_AccumulateTransformLerp : public FRigVMFunction_AccumulateBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform TargetValue; // 0x10(0x60)
		FTransform InitialValue; // 0x70(0x60)
		float Blend; // 0xD0(0x4)
		bool bIntegrateDeltaTime; // 0xD4(0x1)
		unsigned char UnknownData04_6[0xB]; // 0xD5(0xB) UNKNOWN PROPERTY
		FTransform Result; // 0xE0(0x60)
		FTransform AccumulatedValue; // 0x140(0x60)
		bool bIsInitialized; // 0x1A0(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x1A1(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateFloatRange
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_AccumulateFloatRange : public FRigVMFunction_AccumulateBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Minimum; // 0xC(0x4)
		float Maximum; // 0x10(0x4)
		float AccumulatedMinimum; // 0x14(0x4)
		float AccumulatedMaximum; // 0x18(0x4)
		bool bIsInitialized; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AccumulateVectorRange
	// Inherited from FRigVMFunction_AccumulateBase -> FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x80 (0x88 - 0x8)
	struct FRigVMFunction_AccumulateVectorRange : public FRigVMFunction_AccumulateBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		FVector Minimum; // 0x20(0x18)
		FVector Maximum; // 0x38(0x18)
		FVector AccumulatedMinimum; // 0x50(0x18)
		FVector AccumulatedMaximum; // 0x68(0x18)
		bool bIsInitialized; // 0x80(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AlphaInterp
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x70 (0x78 - 0x8)
	struct FRigVMFunction_AlphaInterp : public FRigVMFunction_SimBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Scale; // 0xC(0x4)
		float Bias; // 0x10(0x4)
		bool bMapRange; // 0x14(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FInputRange InRange; // 0x18(0x8)
		FInputRange OutRange; // 0x20(0x8)
		bool bClampResult; // 0x28(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float ClampMin; // 0x2C(0x4)
		float ClampMax; // 0x30(0x4)
		bool bInterpResult; // 0x34(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		float InterpSpeedIncreasing; // 0x38(0x4)
		float InterpSpeedDecreasing; // 0x3C(0x4)
		float Result; // 0x40(0x4)
		FInputScaleBiasClamp ScaleBiasClamp; // 0x44(0x30)
		unsigned char UnknownData07_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_AlphaInterpVector
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigVMFunction_AlphaInterpVector : public FRigVMFunction_SimBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		float Scale; // 0x20(0x4)
		float Bias; // 0x24(0x4)
		bool bMapRange; // 0x28(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FInputRange InRange; // 0x2C(0x8)
		FInputRange OutRange; // 0x34(0x8)
		bool bClampResult; // 0x3C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		float ClampMin; // 0x40(0x4)
		float ClampMax; // 0x44(0x4)
		bool bInterpResult; // 0x48(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		float InterpSpeedIncreasing; // 0x4C(0x4)
		float InterpSpeedDecreasing; // 0x50(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x58(0x18)
		FInputScaleBiasClamp ScaleBiasClamp; // 0x70(0x30)
	};


	// Struct RigVM.RigVMFunction_AlphaInterpQuat
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRigVMFunction_AlphaInterpQuat : public FRigVMFunction_SimBase	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		float Scale; // 0x30(0x4)
		float Bias; // 0x34(0x4)
		bool bMapRange; // 0x38(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FInputRange InRange; // 0x3C(0x8)
		FInputRange OutRange; // 0x44(0x8)
		bool bClampResult; // 0x4C(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		float ClampMin; // 0x50(0x4)
		float ClampMax; // 0x54(0x4)
		bool bInterpResult; // 0x58(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		float InterpSpeedIncreasing; // 0x5C(0x4)
		float InterpSpeedDecreasing; // 0x60(0x4)
		unsigned char UnknownData09_6[0xC]; // 0x64(0xC) UNKNOWN PROPERTY
		FQuat Result; // 0x70(0x20)
		FInputScaleBiasClamp ScaleBiasClamp; // 0x90(0x30)
	};


	// Struct RigVM.RigVMFunction_DeltaFromPreviousFloat
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x18 (0x20 - 0x8)
	struct FRigVMFunction_DeltaFromPreviousFloat : public FRigVMFunction_SimBase	
	{
	public:
		float Value; // 0x8(0x4)
		float Delta; // 0xC(0x4)
		float PreviousValue; // 0x10(0x4)
		float Cache; // 0x14(0x4)
		bool bIsInitialized; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DeltaFromPreviousVector
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigVMFunction_DeltaFromPreviousVector : public FRigVMFunction_SimBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		FVector Delta; // 0x20(0x18)
		FVector PreviousValue; // 0x38(0x18)
		FVector Cache; // 0x50(0x18)
		bool bIsInitialized; // 0x68(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DeltaFromPreviousQuat
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigVMFunction_DeltaFromPreviousQuat : public FRigVMFunction_SimBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FQuat Value; // 0x10(0x20)
		FQuat Delta; // 0x30(0x20)
		FQuat PreviousValue; // 0x50(0x20)
		FQuat Cache; // 0x70(0x20)
		bool bIsInitialized; // 0x90(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x91(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_DeltaFromPreviousTransform
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x198 (0x1A0 - 0x8)
	struct FRigVMFunction_DeltaFromPreviousTransform : public FRigVMFunction_SimBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		FTransform Delta; // 0x70(0x60)
		FTransform PreviousValue; // 0xD0(0x60)
		FTransform Cache; // 0x130(0x60)
		bool bIsInitialized; // 0x190(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x191(0xF) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_KalmanFloat
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FRigVMFunction_KalmanFloat : public FRigVMFunction_SimBase	
	{
	public:
		float Value; // 0x8(0x4)
		int32_t BufferSize; // 0xC(0x4)
		float Result; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray Buffer; // 0x18(0x10)
		int32_t LastInsertIndex; // 0x28(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_KalmanVector
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x50 (0x58 - 0x8)
	struct FRigVMFunction_KalmanVector : public FRigVMFunction_SimBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		int32_t BufferSize; // 0x20(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x28(0x18)
		TArray Buffer; // 0x40(0x10)
		int32_t LastInsertIndex; // 0x50(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_KalmanTransform
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0xF8 (0x100 - 0x8)
	struct FRigVMFunction_KalmanTransform : public FRigVMFunction_SimBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		int32_t BufferSize; // 0x70(0x4)
		unsigned char UnknownData04_6[0xC]; // 0x74(0xC) UNKNOWN PROPERTY
		FTransform Result; // 0x80(0x60)
		TArray Buffer; // 0xE0(0x10)
		int32_t LastInsertIndex; // 0xF0(0x4)
		unsigned char UnknownData05_7[0xC]; // 0xF4(0xC) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_Timeline
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigVMFunction_Timeline : public FRigVMFunction_SimBase	
	{
	public:
		float Speed; // 0x8(0x4)
		float Time; // 0xC(0x4)
		float AccumulatedValue; // 0x10(0x4)
		bool bIsInitialized; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_TimeLoop
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FRigVMFunction_TimeLoop : public FRigVMFunction_SimBase	
	{
	public:
		float Speed; // 0x8(0x4)
		float duration; // 0xC(0x4)
		bool Normalize; // 0x10(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float Absolute; // 0x14(0x4)
		float Relative; // 0x18(0x4)
		float FlipFlop; // 0x1C(0x4)
		bool Even; // 0x20(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		float AccumulatedAbsolute; // 0x24(0x4)
		float AccumulatedRelative; // 0x28(0x4)
		int32_t NumIterations; // 0x2C(0x4)
		bool bIsInitialized; // 0x30(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_TimeOffsetFloat
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x40 (0x48 - 0x8)
	struct FRigVMFunction_TimeOffsetFloat : public FRigVMFunction_SimBase	
	{
	public:
		float Value; // 0x8(0x4)
		float SecondsAgo; // 0xC(0x4)
		int32_t BufferSize; // 0x10(0x4)
		float TimeRange; // 0x14(0x4)
		float Result; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray Buffer; // 0x20(0x10)
		TArray DeltaTimes; // 0x30(0x10)
		int32_t LastInsertIndex; // 0x40(0x4)
		int32_t UpperBound; // 0x44(0x4)
	};


	// Struct RigVM.RigVMFunction_TimeOffsetVector
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x68 (0x70 - 0x8)
	struct FRigVMFunction_TimeOffsetVector : public FRigVMFunction_SimBase	
	{
	public:
		FVector Value; // 0x8(0x18)
		float SecondsAgo; // 0x20(0x4)
		int32_t BufferSize; // 0x24(0x4)
		float TimeRange; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FVector Result; // 0x30(0x18)
		TArray Buffer; // 0x48(0x10)
		TArray DeltaTimes; // 0x58(0x10)
		int32_t LastInsertIndex; // 0x68(0x4)
		int32_t UpperBound; // 0x6C(0x4)
	};


	// Struct RigVM.RigVMFunction_TimeOffsetTransform
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0x108 (0x110 - 0x8)
	struct FRigVMFunction_TimeOffsetTransform : public FRigVMFunction_SimBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Value; // 0x10(0x60)
		float SecondsAgo; // 0x70(0x4)
		int32_t BufferSize; // 0x74(0x4)
		float TimeRange; // 0x78(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FTransform Result; // 0x80(0x60)
		TArray Buffer; // 0xE0(0x10)
		TArray DeltaTimes; // 0xF0(0x10)
		int32_t LastInsertIndex; // 0x100(0x4)
		int32_t UpperBound; // 0x104(0x4)
		unsigned char UnknownData05_7[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
	};


	// Struct RigVM.RigVMFunction_VerletIntegrateVector
	// Inherited from FRigVMFunction_SimBase -> FRigVMStruct
	// Size: 0xD0 (0xD8 - 0x8)
	struct FRigVMFunction_VerletIntegrateVector : public FRigVMFunction_SimBase	
	{
	public:
		FVector Target; // 0x8(0x18)
		float Strength; // 0x20(0x4)
		float Damp; // 0x24(0x4)
		float Blend; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FVector Force; // 0x30(0x18)
		FVector Position; // 0x48(0x18)
		FVector Velocity; // 0x60(0x18)
		FVector Acceleration; // 0x78(0x18)
		FRigVMSimPoint Point; // 0x90(0x40)
		bool bInitialized; // 0xD0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
	};

}
