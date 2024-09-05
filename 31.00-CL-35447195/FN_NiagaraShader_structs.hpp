#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NiagaraShader
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NiagaraShader.SimulationStageMetaData
	// Size: 0x80 (0x80 - 0x0)
	struct FSimulationStageMetaData	
	{
	public:
		FName SimulationStageName; // 0x0(0x4)
		FName EnabledBinding; // 0x4(0x4)
		FIntVector ElementCount; // 0x8(0xC)
		FName ElementCountXBinding; // 0x14(0x4)
		FName ElementCountYBinding; // 0x18(0x4)
		FName ElementCountZBinding; // 0x1C(0x4)
		ENiagaraIterationSource IterationSourceType; // 0x20(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FName IterationDataInterface; // 0x24(0x4)
		FName IterationDirectBinding; // 0x28(0x4)
		ENiagaraSimStageExecuteBehavior ExecuteBehavior; // 0x2C(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		bool bWritesParticles : 1; // 0x30:0(0x1)
		bool bPartialParticleUpdate : 1; // 0x30:1(0x1)
		bool bParticleIterationStateEnabled : 1; // 0x30:2(0x1)
		bool bGpuIndirectDispatch : 1; // 0x30:3(0x1)
		unsigned char UnknownData08_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FName ParticleIterationStateBinding; // 0x34(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x38(0x4) UNKNOWN PROPERTY
		FIntPoint ParticleIterationStateRange; // 0x3C(0x8)
		unsigned char UnknownData10_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TArray OutputDestinations; // 0x48(0x10)
		TArray InputDataInterfaces; // 0x58(0x10)
		int32_t NumIterations; // 0x68(0x4)
		FName NumIterationsBinding; // 0x6C(0x4)
		ENiagaraGpuDispatchType GpuDispatchType; // 0x70(0x1)
		ENiagaraDirectDispatchElementType GpuDirectDispatchElementType; // 0x71(0x1)
		unsigned char UnknownData11_6[0x2]; // 0x72(0x2) UNKNOWN PROPERTY
		FIntVector GpuDispatchNumThreads; // 0x74(0xC)
	};


	// Struct NiagaraShader.NiagaraCompileEvent
	// Size: 0x60 (0x60 - 0x0)
	struct FNiagaraCompileEvent	
	{
	public:
		FNiagaraCompileEventSeverity Severity; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString Message; // 0x8(0x10)
		FString ShortDescription; // 0x18(0x10)
		FGuid NodeGUID; // 0x28(0x10)
		FGuid PinGuid; // 0x38(0x10)
		TArray StackGuids; // 0x48(0x10)
		FNiagaraCompileEventSource Source; // 0x58(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
	};


	// Struct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
	// Size: 0x50 (0x50 - 0x0)
	struct FNiagaraDataInterfaceGeneratedFunction	
	{
	public:
		unsigned char UnknownData01_7[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
		TArray VariadicInputs; // 0x30(0x10)
		TArray VariadicOutputs; // 0x40(0x10)
	};


	// Struct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FNiagaraDataInterfaceGPUParamInfo	
	{
	public:
		FString DataInterfaceHLSLSymbol; // 0x0(0x10)
		FString DIClassName; // 0x10(0x10)
		uint32_t ShaderParametersOffset; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray GeneratedFunctions; // 0x28(0x10)
	};


	// Struct NiagaraShader.NiagaraShaderScriptExternalConstant
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraShaderScriptExternalConstant	
	{
	public:
		FName Type; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Name; // 0x8(0x10)
	};


	// Struct NiagaraShader.NiagaraShaderScriptParametersMetadata
	// Size: 0x58 (0x58 - 0x0)
	struct FNiagaraShaderScriptParametersMetadata	
	{
	public:
		TArray DataInterfaceParamInfo; // 0x0(0x10)
		TArray LooseMetadataNames; // 0x10(0x10)
		bool bExternalConstantsInterpolated; // 0x20(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		TArray ExternalConstants; // 0x28(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x38(0x20) UNKNOWN PROPERTY
	};

}
