#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ComputeFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ComputeFramework.ComputeGraphEdge
	// Size: 0x38 (0x38 - 0x0)
	struct FComputeGraphEdge	
	{
	public:
		int32_t KernelIndex; // 0x0(0x4)
		int32_t KernelBindingIndex; // 0x4(0x4)
		int32_t DataInterfaceIndex; // 0x8(0x4)
		int32_t DataInterfaceBindingIndex; // 0xC(0x4)
		bool bKernelInput; // 0x10(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FString BindingFunctionNameOverride; // 0x18(0x10)
		FString BindingFunctionNamespace; // 0x28(0x10)
	};


	// Struct ComputeFramework.ComputeGraphInstance
	// Size: 0x18 (0x18 - 0x0)
	struct FComputeGraphInstance	
	{
	public:
		TArray DataProviders; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct ComputeFramework.ComputeKernelPermutationBool
	// Size: 0x18 (0x18 - 0x0)
	struct FComputeKernelPermutationBool	
	{
	public:
		FString Name; // 0x0(0x10)
		bool Value; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct ComputeFramework.ComputeKernelPermutationSet
	// Size: 0x10 (0x10 - 0x0)
	struct FComputeKernelPermutationSet	
	{
	public:
		TArray BooleanOptions; // 0x0(0x10)
	};


	// Struct ComputeFramework.ComputeKernelDefinition
	// Size: 0x20 (0x20 - 0x0)
	struct FComputeKernelDefinition	
	{
	public:
		FString Symbol; // 0x0(0x10)
		FString Define; // 0x10(0x10)
	};


	// Struct ComputeFramework.ComputeKernelDefinitionSet
	// Size: 0x10 (0x10 - 0x0)
	struct FComputeKernelDefinitionSet	
	{
	public:
		TArray Defines; // 0x0(0x10)
	};


	// Struct ComputeFramework.ComputeKernelPermutationVector
	// Size: 0x58 (0x58 - 0x0)
	struct FComputeKernelPermutationVector	
	{
	public:
		TMap Permutations; // 0x0(0x50)
		uint32_t BitCount; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct ComputeFramework.ShaderValueTypeHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FShaderValueTypeHandle	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct ComputeFramework.ArrayShaderValue
	// Size: 0x10 (0x10 - 0x0)
	struct FArrayShaderValue	
	{
	public:
		TArray ArrayOfValues; // 0x0(0x10)
	};


	// Struct ComputeFramework.ShaderValueContainer
	// Size: 0x20 (0x20 - 0x0)
	struct FShaderValueContainer	
	{
	public:
		TArray ShaderValue; // 0x0(0x10)
		TArray ArrayList; // 0x10(0x10)
	};


	// Struct ComputeFramework.ShaderValueType
	// Size: 0x20 (0x20 - 0x0)
	struct FShaderValueType	
	{
	public:
		EShaderFundamentalType Type; // 0x0(0x1)
		EShaderFundamentalDimensionType DimensionType; // 0x1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FName Name; // 0x4(0x4)
		bool bIsDynamicArray; // 0x8(0x1)
		unsigned char UnknownData03_7[0x17]; // 0x9(0x17) UNKNOWN PROPERTY
	};


	// Struct ComputeFramework.ShaderParamTypeDefinition
	// Size: 0x30 (0x30 - 0x0)
	struct FShaderParamTypeDefinition	
	{
	public:
		FString TypeDeclaration; // 0x0(0x10)
		FString Name; // 0x10(0x10)
		FShaderValueTypeHandle ValueType; // 0x20(0x8)
		uint16_t ArrayElementCount; // 0x28(0x2)
		EShaderParamBindingType BindingType; // 0x2A(0x1)
		EShaderResourceType ResourceType; // 0x2B(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct ComputeFramework.ShaderFunctionDefinition
	// Size: 0x28 (0x28 - 0x0)
	struct FShaderFunctionDefinition	
	{
	public:
		FString Name; // 0x0(0x10)
		TArray ParamTypes; // 0x10(0x10)
		bool bHasReturnType; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};

}
