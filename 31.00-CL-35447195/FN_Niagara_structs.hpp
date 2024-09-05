#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Niagara
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Niagara.NiagaraSimCacheCaptureParameters
	// Size: 0x1C (0x1C - 0x0)
	struct FNiagaraSimCacheCaptureParameters	
	{
	public:
		bool bAppendToSimCache : 1; // 0x0:0(0x1)
		bool bCaptureFixedNumberOfFrames : 1; // 0x0:1(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t NumFrames; // 0x4(0x4)
		int32_t CaptureRate; // 0x8(0x4)
		bool bUseTimeout : 1; // 0xC:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		int32_t TimeoutFrameCount; // 0x10(0x4)
		bool bCaptureAllFramesImmediatly : 1; // 0x14:0(0x1)
		unsigned char UnknownData05_5[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float ImmediateCaptureDeltaTime; // 0x18(0x4)
	};


	// Struct Niagara.NiagaraSimCacheCreateParameters
	// Size: 0x58 (0x58 - 0x0)
	struct FNiagaraSimCacheCreateParameters	
	{
	public:
		ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		bool bAllowRebasing : 1; // 0x4:0(0x1)
		bool bAllowDataInterfaceCaching : 1; // 0x4:1(0x1)
		bool bAllowInterpolation : 1; // 0x4:2(0x1)
		bool bAllowVelocityExtrapolation : 1; // 0x4:3(0x1)
		bool bAllowSerializeLargeCache : 1; // 0x4:4(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray RebaseIncludeAttributes; // 0x8(0x10)
		TArray RebaseExcludeAttributes; // 0x18(0x10)
		TArray InterpolationIncludeAttributes; // 0x28(0x10)
		TArray InterpolationExcludeAttributes; // 0x38(0x10)
		TArray ExplicitCaptureAttributes; // 0x48(0x10)
	};


	// Struct Niagara.NDIRenderTargetVolumeSimCacheFrame
	// Size: 0x48 (0x48 - 0x0)
	struct FNDIRenderTargetVolumeSimCacheFrame	
	{
	public:
		FIntVector Size; // 0x0(0xC)
		TEnumAsByte Format; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		int32_t UncompressedSize; // 0x10(0x4)
		int32_t CompressedSize; // 0x14(0x4)
		unsigned char UnknownData03_7[0x30]; // 0x18(0x30) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraAssetTagDefinition
	// Size: 0x50 (0x50 - 0x0)
	struct FNiagaraAssetTagDefinition	
	{
	public:
		FText AssetTag; // 0x0(0x10)
		int32_t AssetFlags; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FText Description; // 0x18(0x10)
		ENiagaraAssetTagDefinitionImportance DisplayType; // 0x28(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x2C(0x10)
		FGuid TagGuid; // 0x3C(0x10)
		unsigned char UnknownData05_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraAssetTagDefinitionReference
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraAssetTagDefinitionReference	
	{
	public:
		FGuid AssetTagDefinitionGuid; // 0x0(0x10)
	};


	// Struct Niagara.NiagaraDataSetID
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraDataSetID	
	{
	public:
		FName Name; // 0x0(0x4)
		ENiagaraDataSetType Type; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraDataSetProperties
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraDataSetProperties	
	{
	public:
		FNiagaraDataSetID ID; // 0x0(0x8)
		TArray Variables; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraVariableBase
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraVariableBase	
	{
	public:
		FName Name; // 0x0(0x4)
		FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraTypeDefinitionHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FNiagaraTypeDefinitionHandle	
	{
	public:
		int32_t RegisteredTypeIndex; // 0x0(0x4)
	};


	// Struct Niagara.NiagaraScriptDataUsageInfo
	// Size: 0x1 (0x1 - 0x0)
	struct FNiagaraScriptDataUsageInfo	
	{
	public:
		bool bReadsAttributeData; // 0x0(0x1)
	};


	// Struct Niagara.NiagaraFunctionSignature
	// Size: 0x90 (0x90 - 0x0)
	struct FNiagaraFunctionSignature	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Inputs; // 0x8(0x10)
		TArray Outputs; // 0x18(0x10)
		FName OwnerName; // 0x28(0x4)
		bool bRequiresContext : 1; // 0x2C:0(0x1)
		bool bRequiresExecPin : 1; // 0x2C:1(0x1)
		bool bMemberFunction : 1; // 0x2C:2(0x1)
		bool bExperimental : 1; // 0x2C:3(0x1)
		bool bSupportsCPU : 1; // 0x2C:4(0x1)
		bool bSupportsGPU : 1; // 0x2C:5(0x1)
		bool bWriteFunction : 1; // 0x2C:6(0x1)
		bool bReadFunction : 1; // 0x2C:7(0x1)
		bool bSoftDeprecatedFunction : 1; // 0x2D:0(0x1)
		bool bIsCompileTagGenerator : 1; // 0x2D:1(0x1)
		bool bHidden : 1; // 0x2D:2(0x1)
		unsigned char UnknownData04_5[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
		int32_t ModuleUsageBitmask; // 0x30(0x4)
		uint16_t MiscUsageBitMask; // 0x34(0x2)
		unsigned char UnknownData05_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		int32_t ContextStageIndex; // 0x38(0x4)
		int16_t RequiredInputs; // 0x3C(0x2)
		int16_t RequiredOutputs; // 0x3E(0x2)
		TMap FunctionSpecifiers; // 0x40(0x50)
	};


	// Struct Niagara.NiagaraVariable
	// Inherited from FNiagaraVariableBase
	// Size: 0x10 (0x18 - 0x8)
	struct FNiagaraVariable : public FNiagaraVariableBase	
	{
	public:
		TArray VarData; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraScriptUObjectCompileInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraScriptUObjectCompileInfo	
	{
	public:
		FNiagaraVariableBase Variable; // 0x0(0x8)
		UObject Object; // 0x8(0x8)
		FSoftObjectPath ObjectPath; // 0x10(0x18)
		FName RegisteredParameterMapRead; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray RegisteredParameterMapWrites; // 0x30(0x10)
	};


	// Struct Niagara.NiagaraResolvedUObjectInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraResolvedUObjectInfo	
	{
	public:
		FName ReadVariableName; // 0x0(0x4)
		FNiagaraVariableBase ResolvedVariable; // 0x4(0x8)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UObject Object; // 0x10(0x8)
	};


	// Struct Niagara.NiagaraExternalUObjectInfo
	// Size: 0xC (0xC - 0x0)
	struct FNiagaraExternalUObjectInfo	
	{
	public:
		FNiagaraVariableBase Variable; // 0x0(0x8)
		FName ExternalName; // 0x8(0x4)
	};


	// Struct Niagara.NiagaraScriptDataInterfaceInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraScriptDataInterfaceInfo	
	{
	public:
		UNiagaraDataInterface DataInterface; // 0x0(0x8)
		FName Name; // 0x8(0x4)
		FName CompileName; // 0xC(0x4)
		int32_t UserPtrIdx; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FNiagaraTypeDefinition Type; // 0x18(0x10)
		FName RegisteredParameterMapRead; // 0x28(0x4)
		FName RegisteredParameterMapWrite; // 0x2C(0x4)
		FString SourceEmitterName; // 0x30(0x10)
	};


	// Struct Niagara.NiagaraTypeDefinition
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraTypeDefinition	
	{
	public:
		UObject ClassStructOrEnum; // 0x0(0x8)
		uint16_t UnderlyingType; // 0x8(0x2)
		char Flags; // 0xA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraResolvedUserDataInterfaceBinding
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraResolvedUserDataInterfaceBinding	
	{
	public:
		int32_t UserParameterStoreDataInterfaceIndex; // 0x0(0x4)
		int32_t ScriptParameterStoreDataInterfaceIndex; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraScriptResolvedDataInterfaceInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraScriptResolvedDataInterfaceInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		FName CompileName; // 0x4(0x4)
		FString ResolvedSourceEmitterName; // 0x8(0x10)
		FNiagaraVariableBase ResolvedVariable; // 0x18(0x8)
		FNiagaraVariableBase ParameterStoreVariable; // 0x20(0x8)
		bool bIsInternal; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		UNiagaraDataInterface ResolvedDataInterface; // 0x30(0x8)
		int32_t UserPtrIdx; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraScriptDataInterfaceCompileInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FNiagaraScriptDataInterfaceCompileInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t UserPtrIdx; // 0x4(0x4)
		FNiagaraTypeDefinition Type; // 0x8(0x10)
		FName RegisteredParameterMapRead; // 0x18(0x4)
		FName RegisteredParameterMapWrite; // 0x1C(0x4)
		bool bIsPlaceholder; // 0x20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FString SourceEmitterName; // 0x28(0x10)
	};


	// Struct Niagara.NiagaraStatScope
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraStatScope	
	{
	public:
		FName FullName; // 0x0(0x4)
		FName FriendlyName; // 0x4(0x4)
	};


	// Struct Niagara.VMFunctionSpecifier
	// Size: 0x8 (0x8 - 0x0)
	struct FVMFunctionSpecifier	
	{
	public:
		FName Key; // 0x0(0x4)
		FName Value; // 0x4(0x4)
	};


	// Struct Niagara.VMExternalFunctionBindingInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FVMExternalFunctionBindingInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		FName OwnerName; // 0x4(0x4)
		TArray InputParamLocations; // 0x8(0x10)
		int32_t NumOutputs; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray FunctionSpecifiers; // 0x20(0x10)
		TArray VariadicInputs; // 0x30(0x10)
		TArray VariadicOutputs; // 0x40(0x10)
	};


	// Struct Niagara.NiagaraSystemUpdateContext
	// Size: 0x88 (0x88 - 0x0)
	struct FNiagaraSystemUpdateContext	
	{
	public:
		TArray ComponentsToReset; // 0x0(0x10)
		TArray ComponentsToReInit; // 0x10(0x10)
		TArray ComponentsToNotifySimDestroy; // 0x20(0x10)
		TArray ComponentsToDestroyInstance; // 0x30(0x10)
		TArray SystemSimsToDestroy; // 0x40(0x10)
		TArray SystemSimsToRecache; // 0x50(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x60(0x28) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraVariableInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FNiagaraVariableInfo	
	{
	public:
		FNiagaraVariable Variable; // 0x0(0x18)
		FText Definition; // 0x18(0x10)
		UNiagaraDataInterface DataInterface; // 0x28(0x8)
	};


	// Struct Niagara.NiagaraVariableAttributeBinding
	// Size: 0x28 (0x28 - 0x0)
	struct FNiagaraVariableAttributeBinding	
	{
	public:
		FNiagaraVariable RootVariable; // 0x0(0x18)
		FNiagaraVariableBase ParamMapVariable; // 0x18(0x8)
		FName DataSetName; // 0x20(0x4)
		TEnumAsByte BindingSourceMode; // 0x24(0x1)
		bool bBindingExistsOnSource : 1; // 0x25:0(0x1)
		bool bIsCachedParticleValue : 1; // 0x25:1(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraMaterialAttributeBinding
	// Size: 0x1C (0x1C - 0x0)
	struct FNiagaraMaterialAttributeBinding	
	{
	public:
		FName MaterialParameterName; // 0x0(0x4)
		FNiagaraVariableBase NiagaraVariable; // 0x4(0x8)
		FNiagaraVariableBase ResolvedNiagaraVariable; // 0xC(0x8)
		FNiagaraVariableBase NiagaraChildVariable; // 0x14(0x8)
	};


	// Struct Niagara.NiagaraVariableDataInterfaceBinding
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraVariableDataInterfaceBinding	
	{
	public:
		FNiagaraVariable BoundVariable; // 0x0(0x18)
	};


	// Struct Niagara.NiagaraScriptVariableBinding
	// Size: 0x4 (0x4 - 0x0)
	struct FNiagaraScriptVariableBinding	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct Niagara.NiagaraUserParameterBinding
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraUserParameterBinding	
	{
	public:
		FNiagaraVariable Parameter; // 0x0(0x18)
	};


	// Struct Niagara.NiagaraCompileDependency
	// Size: 0x50 (0x50 - 0x0)
	struct FNiagaraCompileDependency	
	{
	public:
		FString LinkerErrorMessage; // 0x0(0x10)
		FGuid NodeGUID; // 0x10(0x10)
		FGuid PinGuid; // 0x20(0x10)
		TArray StackGuids; // 0x30(0x10)
		FNiagaraVariableBase DependentVariable; // 0x40(0x8)
		bool bDependentVariableFromCustomIterationNamespace; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraScriptAsyncCompileData
	// Size: 0x110 (0x110 - 0x0)
	struct FNiagaraScriptAsyncCompileData	
	{
	public:
		unsigned char UnknownData01_7[0xB0]; // 0x0(0xB0) UNKNOWN PROPERTY
		TArray RapidIterationParameters; // 0xB0(0x10)
		TMap NamedDataInterfaces; // 0xC0(0x50)
	};


	// Struct Niagara.NiagaraSystemAsyncCompileResults
	// Size: 0x88 (0x88 - 0x0)
	struct FNiagaraSystemAsyncCompileResults	
	{
	public:
		TArray RootObjects; // 0x0(0x10)
		unsigned char UnknownData02_6[0x58]; // 0x10(0x58) UNKNOWN PROPERTY
		TArray ExposedVariables; // 0x68(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraCompileHashVisitorDebugInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FNiagaraCompileHashVisitorDebugInfo	
	{
	public:
		FString Object; // 0x0(0x10)
		TArray PropertyKeys; // 0x10(0x10)
		TArray PropertyValues; // 0x20(0x10)
	};


	// Struct Niagara.NiagaraDataChannelVariable
	// Inherited from FNiagaraVariableBase
	// Size: 0x0 (0x8 - 0x8)
	struct FNiagaraDataChannelVariable : public FNiagaraVariableBase	
	{
	public:
	};


	// Struct Niagara.NiagaraDataChannelSearchParameters
	// Size: 0x28 (0x28 - 0x0)
	struct FNiagaraDataChannelSearchParameters	
	{
	public:
		USceneComponent OwningComponent; // 0x0(0x8)
		FVector Location; // 0x8(0x18)
		bool bOverrideLocation : 1; // 0x20:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraDataChannelGameDataLayout
	// Size: 0x60 (0x60 - 0x0)
	struct FNiagaraDataChannelGameDataLayout	
	{
	public:
		TMap VariableIndices; // 0x0(0x50)
		TArray LwcConverters; // 0x50(0x10)
	};


	// Struct Niagara.NiagaraLwcStructConverter
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraLwcStructConverter	
	{
	public:
		int32_t LWCSize; // 0x0(0x4)
		int32_t SWCSize; // 0x4(0x4)
		TArray ConversionSteps; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraStructConversionStep
	// Size: 0x14 (0x14 - 0x0)
	struct FNiagaraStructConversionStep	
	{
	public:
		int32_t LWCBytes; // 0x0(0x4)
		int32_t LWCOffset; // 0x4(0x4)
		int32_t SimulationBytes; // 0x8(0x4)
		int32_t SimulationOffset; // 0xC(0x4)
		ENiagaraStructConversionType ConversionType; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct Niagara.NDCIsland
	// Size: 0x70 (0x70 - 0x0)
	struct FNDCIsland	
	{
	public:
		UNiagaraDataChannelHandler_Islands Owner; // 0x0(0x8)
		FBoxSphereBounds Bounds; // 0x8(0x38)
		TArray NiagaraSystems; // 0x40(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x50(0x20) UNKNOWN PROPERTY
	};


	// Struct Niagara.NDCIslandDebugDrawSettings
	// Size: 0x4 (0x4 - 0x0)
	struct FNDCIslandDebugDrawSettings	
	{
	public:
		bool bEnabled : 1; // 0x0:0(0x1)
		bool bShowIslandBounds : 1; // 0x0:1(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
	};


	// Struct Niagara.NDIDataChannelFunctionInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FNDIDataChannelFunctionInfo	
	{
	public:
		FName FunctionName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Inputs; // 0x8(0x10)
		TArray Outputs; // 0x18(0x10)
	};


	// Struct Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FNDIDataChannel_GPUScriptParameterAccessInfo	
	{
	public:
		TArray SortedParameters; // 0x0(0x10)
	};


	// Struct Niagara.NDIDataChannelCompiledData
	// Size: 0x68 (0x68 - 0x0)
	struct FNDIDataChannelCompiledData	
	{
	public:
		TArray FunctionInfo; // 0x0(0x10)
		TMap GPUScriptParameterInfos; // 0x10(0x50)
		uint32_t TotalParams; // 0x60(0x4)
		bool bUsedByCPU; // 0x64(0x1)
		bool bUsedByGPU; // 0x65(0x1)
		bool bNeedsSpawnDataTable; // 0x66(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x67(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NDIDataChannelWriteCompiledData
	// Inherited from FNDIDataChannelCompiledData
	// Size: 0x40 (0xA8 - 0x68)
	struct FNDIDataChannelWriteCompiledData : public FNDIDataChannelCompiledData	
	{
	public:
		FNiagaraDataSetCompiledData DataLayout; // 0x68(0x40)
	};


	// Struct Niagara.NiagaraDataSetCompiledData
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraDataSetCompiledData	
	{
	public:
		TArray Variables; // 0x0(0x10)
		TArray VariableLayouts; // 0x10(0x10)
		FNiagaraDataSetID ID; // 0x20(0x8)
		uint32_t TotalFloatComponents; // 0x28(0x4)
		uint32_t TotalInt32Components; // 0x2C(0x4)
		uint32_t TotalHalfComponents; // 0x30(0x4)
		bool bRequiresPersistentIDs : 1; // 0x34:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		ENiagaraSimTarget SimTarget; // 0x38(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraVariableLayoutInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraVariableLayoutInfo	
	{
	public:
		uint16_t FloatComponentStart; // 0x0(0x2)
		uint16_t Int32ComponentStart; // 0x2(0x2)
		uint16_t HalfComponentStart; // 0x4(0x2)
		unsigned char UnknownData01_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FNiagaraTypeLayoutInfo LayoutInfo; // 0x8(0x18)
	};


	// Struct Niagara.NiagaraTypeLayoutInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraTypeLayoutInfo	
	{
	public:
		uint16_t NumFloatComponents; // 0x0(0x2)
		uint16_t NumInt32Components; // 0x2(0x2)
		uint16_t NumHalfComponents; // 0x4(0x2)
		unsigned char UnknownData01_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		TArray ComponentsOffsets; // 0x8(0x10)
	};


	// Struct Niagara.NDIDataChannelWriteSimCacheFrameBuffer
	// Size: 0x20 (0x20 - 0x0)
	struct FNDIDataChannelWriteSimCacheFrameBuffer	
	{
	public:
		TArray Data; // 0x0(0x10)
		int32_t Size; // 0x10(0x4)
		FNiagaraVariableBase SourceVar; // 0x14(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NDIDataChannelWriteSimCacheFrame
	// Size: 0x20 (0x20 - 0x0)
	struct FNDIDataChannelWriteSimCacheFrame	
	{
	public:
		int32_t NumElements; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray VariableData; // 0x8(0x10)
		bool bVisibleToGame; // 0x18(0x1)
		bool bVisibleToCPUSims; // 0x19(0x1)
		bool bVisibleToGPUSims; // 0x1A(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraMessageStore
	// Size: 0x1 (0x1 - 0x0)
	struct FNiagaraMessageStore	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraParameterBinding
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraParameterBinding	
	{
	public:
		FNiagaraVariableBase ResolvedParameter; // 0x0(0x8)
	};


	// Struct Niagara.NiagaraParameterBindingWithValue
	// Inherited from FNiagaraParameterBinding
	// Size: 0x10 (0x18 - 0x8)
	struct FNiagaraParameterBindingWithValue : public FNiagaraParameterBinding	
	{
	public:
		TArray DefaultValue; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraScalabilityState
	// Size: 0xC (0xC - 0x0)
	struct FNiagaraScalabilityState	
	{
	public:
		float Significance; // 0x0(0x4)
		float LastVisibleTime; // 0x4(0x4)
		unsigned char UnknownData02_6[0x2]; // 0x8(0x2) UNKNOWN PROPERTY
		bool bNewlyRegistered : 1; // 0xA:0(0x1)
		bool bNewlyRegisteredDirty : 1; // 0xA:1(0x1)
		bool bCulled : 1; // 0xA:2(0x1)
		bool bPreviousCulled : 1; // 0xA:3(0x1)
		bool bCulledByDistance : 1; // 0xA:4(0x1)
		bool bCulledByInstanceCount : 1; // 0xA:5(0x1)
		bool bCulledByVisibility : 1; // 0xA:6(0x1)
		bool bCulledByGlobalBudget : 1; // 0xA:7(0x1)
		unsigned char UnknownData03_7[0x1]; // 0xB(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraSimStageExecutionLoopEditorData
	// Size: 0x1 (0x1 - 0x0)
	struct FNiagaraSimStageExecutionLoopEditorData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraSimStageExecutionLoopData
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraSimStageExecutionLoopData	
	{
	public:
		FName NumLoopsBinding; // 0x0(0x4)
		int32_t NumLoops; // 0x4(0x4)
		int32_t StartStageIndex; // 0x8(0x4)
		int32_t EndStageIndex; // 0xC(0x4)
	};


	// Struct Niagara.NiagaraStackSection
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraStackSection	
	{
	public:
		FName SectionIdentifier; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText SectionDisplayName; // 0x8(0x10)
		TArray Categories; // 0x18(0x10)
		FText ToolTip; // 0x28(0x10)
		bool bEnabled; // 0x38(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraDistributionBase
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraDistributionBase	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		ENiagaraDistributionMode Mode; // 0x8(0x4)
		FNiagaraVariableBase ParameterBinding; // 0xC(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraDistributionRangeInt
	// Size: 0x14 (0x14 - 0x0)
	struct FNiagaraDistributionRangeInt	
	{
	public:
		ENiagaraDistributionMode Mode; // 0x0(0x4)
		FNiagaraVariableBase ParameterBinding; // 0x4(0x8)
		int32_t Min; // 0xC(0x4)
		int32_t Max; // 0x10(0x4)
	};


	// Struct Niagara.NiagaraDistributionRangeFloat
	// Inherited from FNiagaraDistributionBase
	// Size: 0x8 (0x20 - 0x18)
	struct FNiagaraDistributionRangeFloat : public FNiagaraDistributionBase	
	{
	public:
		float Min; // 0x18(0x4)
		float Max; // 0x1C(0x4)
	};


	// Struct Niagara.NiagaraDistributionRangeVector2
	// Inherited from FNiagaraDistributionBase
	// Size: 0x10 (0x28 - 0x18)
	struct FNiagaraDistributionRangeVector2 : public FNiagaraDistributionBase	
	{
	public:
		FVector2f Min; // 0x18(0x8)
		FVector2f Max; // 0x20(0x8)
	};


	// Struct Niagara.NiagaraDistributionRangeVector3
	// Inherited from FNiagaraDistributionBase
	// Size: 0x18 (0x30 - 0x18)
	struct FNiagaraDistributionRangeVector3 : public FNiagaraDistributionBase	
	{
	public:
		FVector3f Min; // 0x18(0xC)
		FVector3f Max; // 0x24(0xC)
	};


	// Struct Niagara.NiagaraDistributionRangeColor
	// Inherited from FNiagaraDistributionBase
	// Size: 0x20 (0x38 - 0x18)
	struct FNiagaraDistributionRangeColor : public FNiagaraDistributionBase	
	{
	public:
		FLinearColor Min; // 0x18(0x10)
		FLinearColor Max; // 0x28(0x10)
	};


	// Struct Niagara.NiagaraDistributionFloat
	// Inherited from FNiagaraDistributionBase
	// Size: 0x18 (0x30 - 0x18)
	struct FNiagaraDistributionFloat : public FNiagaraDistributionBase	
	{
	public:
		TArray Values; // 0x18(0x10)
		FVector2f ValuesTimeRange; // 0x28(0x8)
	};


	// Struct Niagara.NiagaraDistributionVector2
	// Inherited from FNiagaraDistributionBase
	// Size: 0x18 (0x30 - 0x18)
	struct FNiagaraDistributionVector2 : public FNiagaraDistributionBase	
	{
	public:
		TArray Values; // 0x18(0x10)
		FVector2f ValuesTimeRange; // 0x28(0x8)
	};


	// Struct Niagara.NiagaraDistributionVector3
	// Inherited from FNiagaraDistributionBase
	// Size: 0x18 (0x30 - 0x18)
	struct FNiagaraDistributionVector3 : public FNiagaraDistributionBase	
	{
	public:
		TArray Values; // 0x18(0x10)
		FVector2f ValuesTimeRange; // 0x28(0x8)
	};


	// Struct Niagara.NiagaraDistributionPosition
	// Inherited from FNiagaraDistributionVector3 -> FNiagaraDistributionBase
	// Size: 0x0 (0x30 - 0x30)
	struct FNiagaraDistributionPosition : public FNiagaraDistributionVector3	
	{
	public:
	};


	// Struct Niagara.NiagaraDistributionColor
	// Inherited from FNiagaraDistributionBase
	// Size: 0x18 (0x30 - 0x18)
	struct FNiagaraDistributionColor : public FNiagaraDistributionBase	
	{
	public:
		TArray Values; // 0x18(0x10)
		FVector2f ValuesTimeRange; // 0x28(0x8)
	};


	// Struct Niagara.NiagaraStatelessDynamicParameterSet
	// Size: 0xC8 (0xC8 - 0x0)
	struct FNiagaraStatelessDynamicParameterSet	
	{
	public:
		bool bXChannelEnabled : 1; // 0x0:0(0x1)
		bool bYChannelEnabled : 1; // 0x0:1(0x1)
		bool bZChannelEnabled : 1; // 0x0:2(0x1)
		bool bWChannelEnabled : 1; // 0x0:3(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FNiagaraDistributionFloat XChannelDistribution; // 0x8(0x30)
		FNiagaraDistributionFloat YChannelDistribution; // 0x38(0x30)
		FNiagaraDistributionFloat ZChannelDistribution; // 0x68(0x30)
		FNiagaraDistributionFloat WChannelDistribution; // 0x98(0x30)
	};


	// Struct Niagara.NiagaraStatelessSpawnInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FNiagaraStatelessSpawnInfo	
	{
	public:
		ENiagaraStatelessSpawnInfoType Type; // 0x0(0x4)
		float SpawnTime; // 0x4(0x4)
		FNiagaraDistributionRangeInt Amount; // 0x8(0x14)
		unsigned char UnknownData02_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionRangeFloat Rate; // 0x20(0x20)
		bool bEnabled : 1; // 0x40:0(0x1)
		bool bSpawnProbabilityEnabled : 1; // 0x40:1(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float SpawnProbability; // 0x44(0x4)
	};


	// Struct Niagara.NiagaraSystemStateData
	// Size: 0x58 (0x58 - 0x0)
	struct FNiagaraSystemStateData	
	{
	public:
		bool bRunSpawnScript : 1; // 0x0:0(0x1)
		bool bRunUpdateScript : 1; // 0x0:1(0x1)
		bool bIgnoreSystemState : 1; // 0x0:2(0x1)
		bool bRecalculateDurationEachLoop : 1; // 0x0:3(0x1)
		bool bDelayFirstLoopOnly : 1; // 0x0:4(0x1)
		bool bRecalculateDelayEachLoop : 1; // 0x0:5(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		ENiagaraSystemInactiveResponse InactiveResponse; // 0x4(0x4)
		ENiagaraLoopBehavior LoopBehavior; // 0x8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionRangeFloat LoopDuration; // 0x10(0x20)
		int32_t LoopCount; // 0x30(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionRangeFloat LoopDelay; // 0x38(0x20)
	};


	// Struct Niagara.NiagaraEmitterStateData
	// Size: 0x70 (0x70 - 0x0)
	struct FNiagaraEmitterStateData	
	{
	public:
		ENiagaraEmitterInactiveResponse InactiveResponse; // 0x0(0x4)
		ENiagaraLoopBehavior LoopBehavior; // 0x4(0x4)
		int32_t LoopCount; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionRangeFloat LoopDuration; // 0x10(0x20)
		FNiagaraDistributionRangeFloat LoopDelay; // 0x30(0x20)
		bool bRecalculateDurationEachLoop : 1; // 0x50:0(0x1)
		bool bDelayFirstLoopOnly : 1; // 0x50:1(0x1)
		bool bRecalculateDelayEachLoop : 1; // 0x50:2(0x1)
		bool bEnableDistanceCulling : 1; // 0x50:3(0x1)
		bool bEnableVisibilityCulling : 1; // 0x50:4(0x1)
		bool bMinDistanceEnabled : 1; // 0x50:5(0x1)
		bool bMaxDistanceEnabled : 1; // 0x50:6(0x1)
		bool bResetAgeOnAwaken : 1; // 0x50:7(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		float MinDistance; // 0x54(0x4)
		ENiagaraExecutionStateManagement MinDistanceReaction; // 0x58(0x4)
		float MaxDistance; // 0x5C(0x4)
		ENiagaraExecutionStateManagement MaxDistanceReaction; // 0x60(0x4)
		ENiagaraExecutionStateManagement VisibilityCullReaction; // 0x64(0x4)
		float VisibilityCullDelay; // 0x68(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraInputConditionMetadata
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraInputConditionMetadata	
	{
	public:
		FName InputName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray TargetValues; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraEnumParameterMetaData
	// Size: 0x28 (0x28 - 0x0)
	struct FNiagaraEnumParameterMetaData	
	{
	public:
		FName OverrideName; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UTexture2D IconOverride; // 0x8(0x8)
		bool bUseColorOverride; // 0x10(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FLinearColor ColorOverride; // 0x14(0x10)
		unsigned char UnknownData05_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.WidgetNamedInputValue
	// Size: 0x28 (0x28 - 0x0)
	struct FWidgetNamedInputValue	
	{
	public:
		float Value; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText DisplayName; // 0x8(0x10)
		FText ToolTip; // 0x18(0x10)
	};


	// Struct Niagara.WidgetSegmentValueOverride
	// Size: 0x20 (0x20 - 0x0)
	struct FWidgetSegmentValueOverride	
	{
	public:
		int32_t EnumIndexToOverride; // 0x0(0x4)
		bool bOverrideDisplayName; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FText DisplayNameOverride; // 0x8(0x10)
		UTexture2D DisplayIcon; // 0x18(0x8)
	};


	// Struct Niagara.NiagaraWidgetNamedIntegerInputValue
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraWidgetNamedIntegerInputValue	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		FText ToolTip; // 0x10(0x10)
	};


	// Struct Niagara.NiagaraInputParameterCustomization
	// Size: 0x58 (0x58 - 0x0)
	struct FNiagaraInputParameterCustomization	
	{
	public:
		ENiagaraInputWidgetType WidgetType; // 0x0(0x1)
		bool bHasMinValue; // 0x1(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float MinValue; // 0x4(0x4)
		bool bHasMaxValue; // 0x8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float MaxValue; // 0xC(0x4)
		bool bHasStepWidth; // 0x10(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float StepWidth; // 0x14(0x4)
		TArray InputDropdownValues; // 0x18(0x10)
		TArray EnumStyleDropdownValues; // 0x28(0x10)
		int32_t MaxSegmentsPerRow; // 0x38(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray SegmentValueOverrides; // 0x40(0x10)
		bool bBroadcastValueChangesOnCommitOnly; // 0x50(0x1)
		unsigned char UnknownData09_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraBoolParameterMetaData
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraBoolParameterMetaData	
	{
	public:
		ENiagaraBoolDisplayMode DisplayMode; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName OverrideNameTrue; // 0x4(0x4)
		FName OverrideNameFalse; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UTexture2D IconOverrideTrue; // 0x10(0x8)
		UTexture2D IconOverrideFalse; // 0x18(0x8)
	};


	// Struct Niagara.NiagaraVariableMetaData
	// Size: 0x188 (0x188 - 0x0)
	struct FNiagaraVariableMetaData	
	{
	public:
		FText Description; // 0x0(0x10)
		FText CategoryName; // 0x10(0x10)
		EUnit DisplayUnit; // 0x20(0x1)
		bool bAdvancedDisplay; // 0x21(0x1)
		bool bDisplayInOverviewStack; // 0x22(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x23(0x1) UNKNOWN PROPERTY
		int32_t InlineParameterSortPriority; // 0x24(0x4)
		bool bOverrideColor; // 0x28(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FLinearColor InlineParameterColorOverride; // 0x2C(0x10)
		unsigned char UnknownData09_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray InlineParameterEnumOverrides; // 0x40(0x10)
		bool bEnableBoolOverride; // 0x50(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		FNiagaraBoolParameterMetaData InlineParameterBoolOverride; // 0x58(0x20)
		int32_t EditorSortPriority; // 0x78(0x4)
		bool bInlineEditConditionToggle; // 0x7C(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		FNiagaraInputConditionMetadata EditCondition; // 0x80(0x18)
		FNiagaraInputConditionMetadata VisibleCondition; // 0x98(0x18)
		TMap PropertyMetaData; // 0xB0(0x50)
		FName ParentAttribute; // 0x100(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		TArray AlternateAliases; // 0x108(0x10)
		FNiagaraInputParameterCustomization WidgetCustomization; // 0x118(0x58)
		FGuid VariableGuid; // 0x170(0x10)
		bool bIsStaticSwitch; // 0x180(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x181(0x3) UNKNOWN PROPERTY
		int32_t StaticSwitchDefaultValue; // 0x184(0x4)
	};


	// Struct Niagara.NiagaraDynamicMeshSection
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraDynamicMeshSection	
	{
	public:
		int32_t NumTriangles; // 0x0(0x4)
		int32_t MaterialIndex; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraDynamicMeshMaterial
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraDynamicMeshMaterial	
	{
	public:
		UMaterialInterface Material; // 0x0(0x8)
		FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x8(0x18)
	};


	// Struct Niagara.NDIMemoryBufferSimCacheDataFrame
	// Size: 0x10 (0x10 - 0x0)
	struct FNDIMemoryBufferSimCacheDataFrame	
	{
	public:
		int32_t CpuBufferSize; // 0x0(0x4)
		int32_t CpuDataOffset; // 0x4(0x4)
		int32_t GpuBufferSize; // 0x8(0x4)
		int32_t GpuDataOffset; // 0xC(0x4)
	};


	// Struct Niagara.NDIStaticMeshSectionFilter
	// Size: 0x10 (0x10 - 0x0)
	struct FNDIStaticMeshSectionFilter	
	{
	public:
		TArray AllowedMaterialSlots; // 0x0(0x10)
	};


	// Struct Niagara.NiagaraUObjectPropertyReaderRemap
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraUObjectPropertyReaderRemap	
	{
	public:
		FName GraphName; // 0x0(0x4)
		FName RemapName; // 0x4(0x4)
	};


	// Struct Niagara.MovieSceneNiagaraSystemTrackTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x0 (0x20 - 0x20)
	struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate	
	{
	public:
	};


	// Struct Niagara.MovieSceneNiagaraSystemTrackImplementation
	// Inherited from FMovieSceneTrackImplementation -> FMovieSceneEvalTemplateBase
	// Size: 0x18 (0x28 - 0x10)
	struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation	
	{
	public:
		FFrameNumber SpawnSectionStartFrame; // 0x10(0x4)
		FFrameNumber SpawnSectionEndFrame; // 0x14(0x4)
		ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18(0x4)
		ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1C(0x4)
		ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20(0x4)
		ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24(0x1)
		bool bAllowScalability; // 0x25(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
	};


	// Struct Niagara.MovieSceneNiagaraParameterSectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x18 (0x38 - 0x20)
	struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		FNiagaraVariable Parameter; // 0x20(0x18)
	};


	// Struct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
	// Inherited from FMovieSceneNiagaraParameterSectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x108 (0x140 - 0x38)
	struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate	
	{
	public:
		FMovieSceneBoolChannel BoolChannel; // 0x38(0x108)
	};


	// Struct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
	// Inherited from FMovieSceneNiagaraParameterSectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x440 (0x478 - 0x38)
	struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate	
	{
	public:
		FMovieSceneFloatChannel RedChannel; // 0x38(0x110)
		FMovieSceneFloatChannel GreenChannel; // 0x148(0x110)
		FMovieSceneFloatChannel BlueChannel; // 0x258(0x110)
		FMovieSceneFloatChannel AlphaChannel; // 0x368(0x110)
	};


	// Struct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
	// Inherited from FMovieSceneNiagaraParameterSectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x110 (0x148 - 0x38)
	struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate	
	{
	public:
		FMovieSceneFloatChannel FloatChannel; // 0x38(0x110)
	};


	// Struct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
	// Inherited from FMovieSceneNiagaraParameterSectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x108 (0x140 - 0x38)
	struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate	
	{
	public:
		FMovieSceneIntegerChannel IntegerChannel; // 0x38(0x108)
	};


	// Struct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
	// Inherited from FMovieSceneNiagaraParameterSectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x448 (0x480 - 0x38)
	struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate	
	{
	public:
		FMovieSceneFloatChannel VectorChannels; // 0x38(0x440)
		int32_t ChannelsUsed; // 0x478(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x47C(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.EmitterCompiledScriptPair
	// Size: 0xA0 (0xA0 - 0x0)
	struct FEmitterCompiledScriptPair	
	{
	public:
		unsigned char UnknownData01_2[0xA0]; // 0x0(0xA0) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraBakerTextureSource
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraBakerTextureSource	
	{
	public:
		FString DisplayString; // 0x0(0x10)
		FName SourceName; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraBakerCameraSettings
	// Size: 0x50 (0x50 - 0x0)
	struct FNiagaraBakerCameraSettings	
	{
	public:
		ENiagaraBakerViewMode ViewMode; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector ViewportLocation; // 0x8(0x18)
		FRotator ViewportRotation; // 0x20(0x18)
		float OrbitDistance; // 0x38(0x4)
		float FOV; // 0x3C(0x4)
		float OrthoWidth; // 0x40(0x4)
		bool bUseAspectRatio; // 0x44(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		float AspectRatio; // 0x48(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraBakerTextureSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraBakerTextureSettings	
	{
	public:
		FName OutputName; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FNiagaraBakerTextureSource SourceBinding; // 0x8(0x18)
		bool bUseFrameSize : 1; // 0x20:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FIntPoint FrameSize; // 0x24(0x8)
		FIntPoint TextureSize; // 0x2C(0x8)
		unsigned char UnknownData05_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UTexture2D GeneratedTexture; // 0x38(0x8)
	};


	// Struct Niagara.NCPoolElement
	// Size: 0x10 (0x10 - 0x0)
	struct FNCPoolElement	
	{
	public:
		UNiagaraComponent Component; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct Niagara.NCPool
	// Size: 0x10 (0x10 - 0x0)
	struct FNCPool	
	{
	public:
		TArray FreeElements; // 0x0(0x10)
	};


	// Struct Niagara.NiagaraComponentPropertyBinding
	// Size: 0x98 (0x98 - 0x0)
	struct FNiagaraComponentPropertyBinding	
	{
	public:
		FNiagaraVariableAttributeBinding AttributeBinding; // 0x0(0x28)
		FName PropertyName; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FNiagaraTypeDefinition PropertyType; // 0x30(0x10)
		FName MetadataSetterName; // 0x40(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TMap PropertySetterParameterDefaults; // 0x48(0x50)
	};


	// Struct Niagara.NiagaraCulledComponentInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraCulledComponentInfo	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Niagara.NDIArraySimCacheDataFrame
	// Size: 0x8 (0x8 - 0x0)
	struct FNDIArraySimCacheDataFrame	
	{
	public:
		int32_t NumElements; // 0x0(0x4)
		int32_t DataOffset; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraDataInterfaceEmitterBinding
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraDataInterfaceEmitterBinding	
	{
	public:
		ENiagaraDataInterfaceEmitterBindingMode BindingMode; // 0x0(0x4)
		FName EmitterName; // 0x4(0x4)
	};


	// Struct Niagara.BasicParticleData
	// Size: 0x38 (0x38 - 0x0)
	struct FBasicParticleData	
	{
	public:
		FVector Position; // 0x0(0x18)
		float Size; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FVector Velocity; // 0x20(0x18)
	};


	// Struct Niagara.MeshTriCoordinate
	// Size: 0x10 (0x10 - 0x0)
	struct FMeshTriCoordinate	
	{
	public:
		int32_t Tri; // 0x0(0x4)
		FVector3f BaryCoord; // 0x4(0xC)
	};


	// Struct Niagara.NiagaraDataInterfaceSplineLUT
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraDataInterfaceSplineLUT	
	{
	public:
		TArray Positions; // 0x0(0x10)
		TArray Scales; // 0x10(0x10)
		TArray Rotations; // 0x20(0x10)
		float SplineLength; // 0x30(0x4)
		float SplineDistanceStep; // 0x34(0x4)
		float InvSplineDistanceStep; // 0x38(0x4)
		int32_t MaxIndex; // 0x3C(0x4)
	};


	// Struct Niagara.NiagaraOutlinerTimingData
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraOutlinerTimingData	
	{
	public:
		float GameThread; // 0x0(0x4)
		float RenderThread; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraOutlinerEmitterInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraOutlinerEmitterInstanceData	
	{
	public:
		FString EmitterName; // 0x0(0x10)
		ENiagaraSimTarget SimTarget; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		ENiagaraExecutionState ExecState; // 0x14(0x4)
		int32_t NumParticles; // 0x18(0x4)
		bool bRequiresPersistentIDs : 1; // 0x1C:0(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraOutlinerSystemInstanceData
	// Size: 0x68 (0x68 - 0x0)
	struct FNiagaraOutlinerSystemInstanceData	
	{
	public:
		FString ComponentName; // 0x0(0x10)
		FVector3f LWCTile; // 0x10(0xC)
		unsigned char UnknownData05_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray Emitters; // 0x20(0x10)
		ENiagaraExecutionState ActualExecutionState; // 0x30(0x4)
		ENiagaraExecutionState RequestedExecutionState; // 0x34(0x4)
		FNiagaraScalabilityState ScalabilityState; // 0x38(0xC)
		bool bPendingKill : 1; // 0x44:0(0x1)
		bool bUsingCullProxy : 1; // 0x44:1(0x1)
		unsigned char UnknownData06_5[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		ENCPoolMethod PoolMethod; // 0x48(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		FNiagaraOutlinerTimingData AverageTime; // 0x4C(0x8)
		FNiagaraOutlinerTimingData MaxTime; // 0x54(0x8)
		TEnumAsByte TickGroup; // 0x5C(0x1)
		TEnumAsByte GpuTickStage; // 0x5D(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x5E(0x2) UNKNOWN PROPERTY
		bool bIsSolo : 1; // 0x60:0(0x1)
		bool bRequiresGlobalDistanceField : 1; // 0x60:1(0x1)
		bool bRequiresDepthBuffer : 1; // 0x60:2(0x1)
		bool bRequiresEarlyViewData : 1; // 0x60:3(0x1)
		bool bRequiresViewUniformBuffer : 1; // 0x60:4(0x1)
		bool bRequiresRayTracingScene : 1; // 0x60:5(0x1)
		unsigned char UnknownData09_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraOutlinerSystemData
	// Size: 0x30 (0x30 - 0x0)
	struct FNiagaraOutlinerSystemData	
	{
	public:
		TArray SystemInstances; // 0x0(0x10)
		FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x10(0x8)
		FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x18(0x8)
		FNiagaraOutlinerTimingData AveragePerInstanceTime; // 0x20(0x8)
		FNiagaraOutlinerTimingData MaxPerInstanceTime; // 0x28(0x8)
	};


	// Struct Niagara.NiagaraOutlinerWorldData
	// Size: 0x68 (0x68 - 0x0)
	struct FNiagaraOutlinerWorldData	
	{
	public:
		TMap Systems; // 0x0(0x50)
		bool bHasBegunPlay; // 0x50(0x1)
		char WorldType; // 0x51(0x1)
		char NetMode; // 0x52(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x53(0x1) UNKNOWN PROPERTY
		FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x54(0x8)
		FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x5C(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraOutlinerData
	// Size: 0x50 (0x50 - 0x0)
	struct FNiagaraOutlinerData	
	{
	public:
		TMap WorldData; // 0x0(0x50)
	};


	// Struct Niagara.NiagaraDebuggerRequestConnection
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraDebuggerRequestConnection	
	{
	public:
		FGuid SessionId; // 0x0(0x10)
		FGuid InstanceID; // 0x10(0x10)
	};


	// Struct Niagara.NiagaraDebuggerAcceptConnection
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraDebuggerAcceptConnection	
	{
	public:
		FGuid SessionId; // 0x0(0x10)
		FGuid InstanceID; // 0x10(0x10)
	};


	// Struct Niagara.NiagaraDebuggerConnectionClosed
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraDebuggerConnectionClosed	
	{
	public:
		FGuid SessionId; // 0x0(0x10)
		FGuid InstanceID; // 0x10(0x10)
	};


	// Struct Niagara.NiagaraDebuggerExecuteConsoleCommand
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraDebuggerExecuteConsoleCommand	
	{
	public:
		FString Command; // 0x0(0x10)
		bool bRequiresWorld; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraDebuggerOutlinerUpdate
	// Size: 0x50 (0x50 - 0x0)
	struct FNiagaraDebuggerOutlinerUpdate	
	{
	public:
		FNiagaraOutlinerData OutlinerData; // 0x0(0x50)
	};


	// Struct Niagara.NiagaraDebugHudTextOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraDebugHudTextOptions	
	{
	public:
		ENiagaraDebugHudFont Font; // 0x0(0x4)
		ENiagaraDebugHudHAlign HorizontalAlignment; // 0x4(0x1)
		ENiagaraDebugHudVAlign VerticalAlignment; // 0x5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FVector2D ScreenOffset; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraDebugHUDVariable
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraDebugHUDVariable	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString Name; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraDebugHUDSettingsData
	// Size: 0x240 (0x240 - 0x0)
	struct FNiagaraDebugHUDSettingsData	
	{
	public:
		bool bHudEnabled; // 0x0(0x1)
		bool bHudRenderingEnabled; // 0x1(0x1)
		bool bValidationEnabled; // 0x2(0x1)
		bool bOverviewEnabled; // 0x3(0x1)
		bool bSystemShowBounds; // 0x4(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		ENiagaraDebugHUDOverviewMode OverviewMode; // 0x8(0x4)
		ENiagaraDebugHUDDOverviewSort OverviewSortMode; // 0xC(0x4)
		bool bIncludeCascade; // 0x10(0x1)
		bool bShowRegisteredComponents; // 0x11(0x1)
		bool bOverviewShowFilteredSystemOnly; // 0x12(0x1)
		bool bShowGlobalBudgetInfo; // 0x13(0x1)
		bool bSystemFilterEnabled; // 0x14(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FString SystemFilter; // 0x18(0x10)
		bool bEmitterFilterEnabled; // 0x28(0x1)
		unsigned char UnknownData18_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FString EmitterFilter; // 0x30(0x10)
		bool bActorFilterEnabled; // 0x40(0x1)
		unsigned char UnknownData19_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FString ActorFilter; // 0x48(0x10)
		bool bComponentFilterEnabled; // 0x58(0x1)
		unsigned char UnknownData20_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		FString ComponentFilter; // 0x60(0x10)
		bool bValidateSystemSimulationDataBuffers; // 0x70(0x1)
		bool bValidateParticleDataBuffers; // 0x71(0x1)
		bool bValidationLogErrors; // 0x72(0x1)
		unsigned char UnknownData21_6[0x1]; // 0x73(0x1) UNKNOWN PROPERTY
		int32_t ValidationAttributeDisplayTruncate; // 0x74(0x4)
		ENiagaraDebugHudVerbosity SystemDebugVerbosity; // 0x78(0x4)
		ENiagaraDebugHudVerbosity SystemEmitterVerbosity; // 0x7C(0x4)
		ENiagaraDebugHudVerbosity DataInterfaceVerbosity; // 0x80(0x4)
		unsigned char UnknownData22_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		TArray SystemVariables; // 0x88(0x10)
		bool bSystemShowActiveOnlyInWorld; // 0x98(0x1)
		bool bShowParticleVariables; // 0x99(0x1)
		unsigned char UnknownData23_6[0x6]; // 0x9A(0x6) UNKNOWN PROPERTY
		TArray ParticlesVariables; // 0xA0(0x10)
		bool bEnableGpuParticleReadback; // 0xB0(0x1)
		bool bShowParticleIndex; // 0xB1(0x1)
		bool bShowParticlesVariablesWithSystem; // 0xB2(0x1)
		bool bShowParticleVariablesVertical; // 0xB3(0x1)
		bool bUseMaxParticlesToDisplay; // 0xB4(0x1)
		unsigned char UnknownData24_6[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		int32_t MaxParticlesToDisplay; // 0xB8(0x4)
		bool bUseParticleDisplayClip; // 0xBC(0x1)
		unsigned char UnknownData25_6[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY
		FVector2D ParticleDisplayClip; // 0xC0(0x10)
		bool bUseParticleDisplayCenterRadius; // 0xD0(0x1)
		unsigned char UnknownData26_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		float ParticleDisplayCenterRadius; // 0xD4(0x4)
		int32_t PerfReportFrames; // 0xD8(0x4)
		ENiagaraDebugHUDPerfSampleMode PerfSampleMode; // 0xDC(0x4)
		ENiagaraDebugHUDPerfUnits PerfUnits; // 0xE0(0x4)
		bool bShowPerfColumGameThreadOnly; // 0xE4(0x1)
		unsigned char UnknownData27_6[0x3]; // 0xE5(0x3) UNKNOWN PROPERTY
		ENiagaraDebugHUDPerfGraphMode PerfGraphMode; // 0xE8(0x4)
		int32_t PerfHistoryFrames; // 0xEC(0x4)
		bool bUsePerfGraphTimeRange; // 0xF0(0x1)
		unsigned char UnknownData28_6[0x3]; // 0xF1(0x3) UNKNOWN PROPERTY
		float PerfGraphTimeRange; // 0xF4(0x4)
		FVector2D PerfGraphSize; // 0xF8(0x10)
		FLinearColor PerfGraphAxisColor; // 0x108(0x10)
		int32_t SmoothingWidth; // 0x118(0x4)
		ENiagaraDebugHudFont OverviewFont; // 0x11C(0x4)
		FVector2D OverviewLocation; // 0x120(0x10)
		FNiagaraDebugHudTextOptions SystemTextOptions; // 0x130(0x18)
		FNiagaraDebugHudTextOptions ParticleTextOptions; // 0x148(0x18)
		float SystemBoundsSolidBoxAlpha; // 0x160(0x4)
		FLinearColor DefaultBackgroundColor; // 0x164(0x10)
		FLinearColor OverviewHeadingColor; // 0x174(0x10)
		FLinearColor OverviewDetailColor; // 0x184(0x10)
		FLinearColor OverviewDetailHighlightColor; // 0x194(0x10)
		FLinearColor InWorldErrorTextColor; // 0x1A4(0x10)
		FLinearColor InWorldTextColor; // 0x1B4(0x10)
		FLinearColor MessageInfoTextColor; // 0x1C4(0x10)
		FLinearColor MessageWarningTextColor; // 0x1D4(0x10)
		FLinearColor MessageErrorTextColor; // 0x1E4(0x10)
		float SystemColorTableOpacity; // 0x1F4(0x4)
		uint32_t SystemColorSeed; // 0x1F8(0x4)
		unsigned char UnknownData29_6[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY
		FVector SystemColorHSVMin; // 0x200(0x18)
		FVector SystemColorHSVMax; // 0x218(0x18)
		ENiagaraDebugPlaybackMode PlaybackMode; // 0x230(0x1)
		bool bPlaybackRateEnabled; // 0x231(0x1)
		unsigned char UnknownData30_6[0x2]; // 0x232(0x2) UNKNOWN PROPERTY
		float PlaybackRate; // 0x234(0x4)
		bool bLoopTimeEnabled; // 0x238(0x1)
		unsigned char UnknownData31_6[0x3]; // 0x239(0x3) UNKNOWN PROPERTY
		float LoopTime; // 0x23C(0x4)
	};


	// Struct Niagara.NiagaraRequestSimpleClientInfoMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FNiagaraRequestSimpleClientInfoMessage	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraOutlinerCaptureSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraOutlinerCaptureSettings	
	{
	public:
		bool bTriggerCapture; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		uint32_t CaptureDelayFrames; // 0x4(0x4)
		bool bGatherPerfData; // 0x8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		uint32_t SimCacheCaptureFrames; // 0xC(0x4)
	};


	// Struct Niagara.NiagaraSimpleClientInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraSimpleClientInfo	
	{
	public:
		TArray Systems; // 0x0(0x10)
		TArray Actors; // 0x10(0x10)
		TArray Components; // 0x20(0x10)
		TArray Emitters; // 0x30(0x10)
	};


	// Struct Niagara.NiagaraSystemSimCacheCaptureRequest
	// Size: 0xC (0xC - 0x0)
	struct FNiagaraSystemSimCacheCaptureRequest	
	{
	public:
		FName ComponentName; // 0x0(0x4)
		uint32_t CaptureDelayFrames; // 0x4(0x4)
		uint32_t CaptureFrames; // 0x8(0x4)
	};


	// Struct Niagara.NiagaraSystemSimCacheCaptureReply
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraSystemSimCacheCaptureReply	
	{
	public:
		FName ComponentName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray SimCacheData; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraGraphViewSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraGraphViewSettings	
	{
	public:
		FVector2D Location; // 0x0(0x10)
		float Zoom; // 0x10(0x4)
		bool bIsValid; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraLinearRamp
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraLinearRamp	
	{
	public:
		float StartX; // 0x0(0x4)
		float StartY; // 0x4(0x4)
		float EndX; // 0x8(0x4)
		float EndY; // 0xC(0x4)
	};


	// Struct Niagara.NiagaraGlobalBudgetScaling
	// Size: 0x38 (0x38 - 0x0)
	struct FNiagaraGlobalBudgetScaling	
	{
	public:
		bool bCullByGlobalBudget : 1; // 0x0:0(0x1)
		bool bScaleMaxDistanceByGlobalBudgetUse : 1; // 0x0:1(0x1)
		bool bScaleMaxInstanceCountByGlobalBudgetUse : 1; // 0x0:2(0x1)
		bool bScaleSystemInstanceCountByGlobalBudgetUse : 1; // 0x0:3(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MaxGlobalBudgetUsage; // 0x4(0x4)
		FNiagaraLinearRamp MaxDistanceScaleByGlobalBudgetUse; // 0x8(0x10)
		FNiagaraLinearRamp MaxInstanceCountScaleByGlobalBudgetUse; // 0x18(0x10)
		FNiagaraLinearRamp MaxSystemInstanceCountScaleByGlobalBudgetUse; // 0x28(0x10)
	};


	// Struct Niagara.NiagaraSystemVisibilityCullingSettings
	// Size: 0xC (0xC - 0x0)
	struct FNiagaraSystemVisibilityCullingSettings	
	{
	public:
		bool bCullWhenNotRendered : 1; // 0x0:0(0x1)
		bool bCullByViewFrustum : 1; // 0x0:1(0x1)
		bool bAllowPreCullingByViewFrustum : 1; // 0x0:2(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MaxTimeOutsideViewFrustum; // 0x4(0x4)
		float MaxTimeWithoutRender; // 0x8(0x4)
	};


	// Struct Niagara.NiagaraSystemScalabilitySettings
	// Size: 0x98 (0x98 - 0x0)
	struct FNiagaraSystemScalabilitySettings	
	{
	public:
		FNiagaraPlatformSet Platforms; // 0x0(0x30)
		bool bCullByDistance : 1; // 0x30:0(0x1)
		bool bCullMaxInstanceCount : 1; // 0x30:1(0x1)
		bool bCullPerSystemMaxInstanceCount : 1; // 0x30:2(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float MaxDistance; // 0x34(0x4)
		bool bCullByMaxTimeWithoutRender : 1; // 0x38:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t MaxInstances; // 0x3C(0x4)
		int32_t MaxSystemInstances; // 0x40(0x4)
		float MaxTimeWithoutRender; // 0x44(0x4)
		ENiagaraCullProxyMode CullProxyMode; // 0x48(0x4)
		int32_t MaxSystemProxies; // 0x4C(0x4)
		FNiagaraSystemVisibilityCullingSettings VisibilityCulling; // 0x50(0xC)
		FNiagaraGlobalBudgetScaling BudgetScaling; // 0x5C(0x38)
		unsigned char UnknownData05_7[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraPlatformSet
	// Size: 0x30 (0x30 - 0x0)
	struct FNiagaraPlatformSet	
	{
	public:
		TArray DeviceProfileStates; // 0x0(0x10)
		TArray CVarConditions; // 0x10(0x10)
		int32_t QualityLevelMask; // 0x20(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraPlatformSetCVarCondition
	// Size: 0x30 (0x30 - 0x0)
	struct FNiagaraPlatformSetCVarCondition	
	{
	public:
		FName CVarName; // 0x0(0x4)
		ENiagaraCVarConditionResponse PassResponse; // 0x4(0x1)
		ENiagaraCVarConditionResponse FailResponse; // 0x5(0x1)
		bool Value; // 0x6(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
		int32_t MinInt; // 0x8(0x4)
		int32_t MaxInt; // 0xC(0x4)
		float MinFloat; // 0x10(0x4)
		float MaxFloat; // 0x14(0x4)
		bool bUseMinInt : 1; // 0x18:0(0x1)
		bool bUseMaxInt : 1; // 0x18:1(0x1)
		bool bUseMinFloat : 1; // 0x18:2(0x1)
		bool bUseMaxFloat : 1; // 0x18:3(0x1)
		unsigned char UnknownData03_7[0x17]; // 0x19(0x17) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraDeviceProfileStateEntry
	// Size: 0xC (0xC - 0x0)
	struct FNiagaraDeviceProfileStateEntry	
	{
	public:
		FName ProfileName; // 0x0(0x4)
		uint32_t QualityLevelMask; // 0x4(0x4)
		uint32_t SetQualityLevelMask; // 0x8(0x4)
	};


	// Struct Niagara.NiagaraSystemScalabilitySettingsArray
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraSystemScalabilitySettingsArray	
	{
	public:
		TArray Settings; // 0x0(0x10)
	};


	// Struct Niagara.NiagaraSystemScalabilityOverride
	// Inherited from FNiagaraSystemScalabilitySettings
	// Size: 0x8 (0xA0 - 0x98)
	struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings	
	{
	public:
		bool bOverrideDistanceSettings : 1; // 0x98:0(0x1)
		bool bOverrideInstanceCountSettings : 1; // 0x98:1(0x1)
		bool bOverridePerSystemInstanceCountSettings : 1; // 0x98:2(0x1)
		bool bOverrideVisibilitySettings : 1; // 0x98:3(0x1)
		bool bOverrideGlobalBudgetScalingSettings : 1; // 0x98:4(0x1)
		bool bOverrideCullProxySettings : 1; // 0x98:5(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraEmitterScalabilitySettings
	// Size: 0x38 (0x38 - 0x0)
	struct FNiagaraEmitterScalabilitySettings	
	{
	public:
		FNiagaraPlatformSet Platforms; // 0x0(0x30)
		bool bScaleSpawnCount : 1; // 0x30:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float SpawnCountScale; // 0x34(0x4)
	};


	// Struct Niagara.NiagaraEmitterScalabilitySettingsArray
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraEmitterScalabilitySettingsArray	
	{
	public:
		TArray Settings; // 0x0(0x10)
	};


	// Struct Niagara.NiagaraEmitterScalabilityOverride
	// Inherited from FNiagaraEmitterScalabilitySettings
	// Size: 0x8 (0x40 - 0x38)
	struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings	
	{
	public:
		bool bOverrideSpawnCountScale : 1; // 0x38:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraEmitterScalabilityOverrides
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraEmitterScalabilityOverrides	
	{
	public:
		TArray Overrides; // 0x0(0x10)
	};


	// Struct Niagara.NiagaraEventReceiverProperties
	// Size: 0xC (0xC - 0x0)
	struct FNiagaraEventReceiverProperties	
	{
	public:
		FName Name; // 0x0(0x4)
		FName SourceEventGenerator; // 0x4(0x4)
		FName SourceEmitter; // 0x8(0x4)
	};


	// Struct Niagara.NiagaraEventGeneratorProperties
	// Size: 0x48 (0x48 - 0x0)
	struct FNiagaraEventGeneratorProperties	
	{
	public:
		int32_t MaxEventsPerFrame; // 0x0(0x4)
		FName ID; // 0x4(0x4)
		FNiagaraDataSetCompiledData DataSetCompiledData; // 0x8(0x40)
	};


	// Struct Niagara.NiagaraEmitterScriptProperties
	// Size: 0x28 (0x28 - 0x0)
	struct FNiagaraEmitterScriptProperties	
	{
	public:
		UNiagaraScript Script; // 0x0(0x8)
		TArray EventReceivers; // 0x8(0x10)
		TArray EventGenerators; // 0x18(0x10)
	};


	// Struct Niagara.NiagaraEventScriptProperties
	// Inherited from FNiagaraEmitterScriptProperties
	// Size: 0x30 (0x58 - 0x28)
	struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties	
	{
	public:
		EScriptExecutionMode ExecutionMode; // 0x28(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		uint32_t SpawnNumber; // 0x2C(0x4)
		uint32_t MaxEventsPerFrame; // 0x30(0x4)
		FGuid SourceEmitterID; // 0x34(0x10)
		FName SourceEventName; // 0x44(0x4)
		bool bRandomSpawnNumber; // 0x48(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		uint32_t MinSpawnNumber; // 0x4C(0x4)
		bool UpdateAttributeInitialValues; // 0x50(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraDetailsLevelScaleOverrides
	// Size: 0x14 (0x14 - 0x0)
	struct FNiagaraDetailsLevelScaleOverrides	
	{
	public:
		float Low; // 0x0(0x4)
		float Medium; // 0x4(0x4)
		float High; // 0x8(0x4)
		float Epic; // 0xC(0x4)
		float Cine; // 0x10(0x4)
	};


	// Struct Niagara.VersionedNiagaraEmitterData
	// Size: 0x368 (0x368 - 0x0)
	struct FVersionedNiagaraEmitterData	
	{
	public:
		FNiagaraAssetVersion Version; // 0x0(0x1C)
		bool bDeprecated; // 0x1C(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		FText DeprecationMessage; // 0x20(0x10)
		bool bLocalspace; // 0x30(0x1)
		bool bDeterminism; // 0x31(0x1)
		unsigned char UnknownData10_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		int32_t RandomSeed; // 0x34(0x4)
		bool bInterpolatedSpawning : 1; // 0x38:0(0x1)
		unsigned char UnknownData11_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		ENiagaraSimTarget SimTarget; // 0x3C(0x1)
		ENiagaraEmitterCalculateBoundMode CalculateBoundsMode; // 0x3D(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x3E(0x2) UNKNOWN PROPERTY
		FBox FixedBounds; // 0x40(0x38)
		bool bRequiresPersistentIDs : 1; // 0x78:0(0x1)
		unsigned char UnknownData13_5[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		TArray EventHandlerScriptProps; // 0x80(0x10)
		FNiagaraPlatformSet Platforms; // 0x90(0x30)
		FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0xC0(0x10)
		int32_t MaxGPUParticlesSpawnPerFrame; // 0xD0(0x4)
		EParticleAllocationMode AllocationMode; // 0xD4(0x1)
		unsigned char UnknownData14_6[0x3]; // 0xD5(0x3) UNKNOWN PROPERTY
		int32_t PreAllocationCount; // 0xD8(0x4)
		unsigned char UnknownData15_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray EmitterDependencies; // 0xE0(0x10)
		FNiagaraEmitterScriptProperties UpdateScriptProps; // 0xF0(0x28)
		FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x118(0x28)
		FNiagaraParameterStore RendererBindings; // 0x140(0x88)
		TArray RendererBindingsExternalObjects; // 0x1C8(0x10)
		TMap ResolvedDIBindings; // 0x1D8(0x50)
		TArray RendererProperties; // 0x228(0x10)
		TArray SimulationStages; // 0x238(0x10)
		TArray SimStageExecutionLoops; // 0x248(0x10)
		unsigned char UnknownData16_6[0x10]; // 0x258(0x10) UNKNOWN PROPERTY
		UNiagaraScript GPUComputeScript; // 0x268(0x8)
		TArray SharedEventGeneratorIds; // 0x270(0x10)
		FNiagaraEmitterScalabilitySettings CurrentScalabilitySettings; // 0x280(0x38)
		unsigned char UnknownData17_7[0xB0]; // 0x2B8(0xB0) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraParameterStore
	// Size: 0x88 (0x88 - 0x0)
	struct FNiagaraParameterStore	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr Owner; // 0x8(0x8)
		TArray SortedParameterOffsets; // 0x10(0x10)
		TArray ParameterData; // 0x20(0x10)
		TArray DataInterfaces; // 0x30(0x10)
		TArray UObjects; // 0x40(0x10)
		TArray OriginalPositionData; // 0x50(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x60(0x28) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraPositionSource
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraPositionSource	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Value; // 0x8(0x18)
	};


	// Struct Niagara.NiagaraVariableWithOffset
	// Inherited from FNiagaraVariableBase
	// Size: 0x20 (0x28 - 0x8)
	struct FNiagaraVariableWithOffset : public FNiagaraVariableBase	
	{
	public:
		int32_t Offset; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FNiagaraLwcStructConverter StructConverter; // 0x10(0x18)
	};


	// Struct Niagara.NiagaraAssetVersion
	// Size: 0x1C (0x1C - 0x0)
	struct FNiagaraAssetVersion	
	{
	public:
		int32_t MajorVersion; // 0x0(0x4)
		int32_t MinorVersion; // 0x4(0x4)
		FGuid VersionGuid; // 0x8(0x10)
		bool bIsVisibleInVersionSelector; // 0x18(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraEmitterHandle
	// Size: 0x48 (0x48 - 0x0)
	struct FNiagaraEmitterHandle	
	{
	public:
		FName Name; // 0x0(0x4)
		FGuid ID; // 0x4(0x10)
		FName IdName; // 0x14(0x4)
		bool bIsEnabled; // 0x18(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FVersionedNiagaraEmitter VersionedInstance; // 0x20(0x18)
		UNiagaraStatelessEmitter StatelessEmitter; // 0x38(0x8)
		ENiagaraEmitterMode EmitterMode; // 0x40(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.VersionedNiagaraEmitter
	// Size: 0x18 (0x18 - 0x0)
	struct FVersionedNiagaraEmitter	
	{
	public:
		UNiagaraEmitter Emitter; // 0x0(0x8)
		FGuid Version; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraCollisionEventPayload
	// Size: 0x50 (0x50 - 0x0)
	struct FNiagaraCollisionEventPayload	
	{
	public:
		FVector CollisionPos; // 0x0(0x18)
		FVector CollisionNormal; // 0x18(0x18)
		FVector CollisionVelocity; // 0x30(0x18)
		int32_t ParticleIndex; // 0x48(0x4)
		int32_t PhysicalMaterialIndex; // 0x4C(0x4)
	};


	// Struct Niagara.NiagaraMeshMICOverride
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraMeshMICOverride	
	{
	public:
		UMaterialInterface OriginalMaterial; // 0x0(0x8)
		UMaterialInstanceConstant ReplacementMaterial; // 0x8(0x8)
	};


	// Struct Niagara.NiagaraMeshMaterialOverride
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraMeshMaterialOverride	
	{
	public:
		UMaterialInterface ExplicitMat; // 0x0(0x8)
		FNiagaraUserParameterBinding UserParamBinding; // 0x8(0x18)
	};


	// Struct Niagara.NiagaraMeshRendererMeshProperties
	// Size: 0x80 (0x80 - 0x0)
	struct FNiagaraMeshRendererMeshProperties	
	{
	public:
		UStaticMesh Mesh; // 0x0(0x8)
		FNiagaraParameterBinding MeshParameterBinding; // 0x8(0x8)
		ENiagaraMeshLODMode LODMode; // 0x10(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t LODLevel; // 0x14(0x4)
		int32_t LODBias; // 0x18(0x4)
		float LODDistanceFactor; // 0x1C(0x4)
		bool bUseLODRange; // 0x20(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FIntVector2 LODRange; // 0x24(0x8)
		unsigned char UnknownData06_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FVector Scale; // 0x30(0x18)
		FRotator Rotation; // 0x48(0x18)
		FVector PivotOffset; // 0x60(0x18)
		ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x78(0x1)
		unsigned char UnknownData07_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.ParameterDefinitionsSubscription
	// Size: 0x1 (0x1 - 0x0)
	struct FParameterDefinitionsSubscription	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraParameters
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraParameters	
	{
	public:
		TArray Parameters; // 0x0(0x10)
	};


	// Struct Niagara.NiagaraBoundParameter
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraBoundParameter	
	{
	public:
		FNiagaraVariableBase Parameter; // 0x0(0x8)
		int32_t SrcOffset; // 0x8(0x4)
		int32_t DestOffset; // 0xC(0x4)
	};


	// Struct Niagara.NiagaraPerfBaselineStats
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraPerfBaselineStats	
	{
	public:
		float PerInstanceAvg_GT; // 0x0(0x4)
		float PerInstanceAvg_RT; // 0x4(0x4)
		float PerInstanceMax_GT; // 0x8(0x4)
		float PerInstanceMax_RT; // 0xC(0x4)
	};


	// Struct Niagara.NiagaraPlatformSetConflictEntry
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraPlatformSetConflictEntry	
	{
	public:
		FName ProfileName; // 0x0(0x4)
		int32_t QualityLevelMask; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraPlatformSetConflictInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraPlatformSetConflictInfo	
	{
	public:
		int32_t SetAIndex; // 0x0(0x4)
		int32_t SetBIndex; // 0x4(0x4)
		TArray Conflicts; // 0x8(0x10)
	};


	// Struct Niagara.NiagaraPlatformSetRedirect
	// Size: 0x78 (0x78 - 0x0)
	struct FNiagaraPlatformSetRedirect	
	{
	public:
		TArray ProfileNames; // 0x0(0x10)
		ENiagaraDeviceProfileRedirectMode Mode; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName RedirectProfileName; // 0x14(0x4)
		FNiagaraPlatformSetCVarCondition CVarConditionEnabled; // 0x18(0x30)
		FNiagaraPlatformSetCVarCondition CVarConditionDisabled; // 0x48(0x30)
	};


	// Struct Niagara.NiagaraRendererMaterialScalarParameter
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraRendererMaterialScalarParameter	
	{
	public:
		FName MaterialParameterName; // 0x0(0x4)
		float Value; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraRendererMaterialVectorParameter
	// Size: 0x14 (0x14 - 0x0)
	struct FNiagaraRendererMaterialVectorParameter	
	{
	public:
		FName MaterialParameterName; // 0x0(0x4)
		FLinearColor Value; // 0x4(0x10)
	};


	// Struct Niagara.NiagaraRendererMaterialTextureParameter
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraRendererMaterialTextureParameter	
	{
	public:
		FName MaterialParameterName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UTexture Texture; // 0x8(0x8)
	};


	// Struct Niagara.NiagaraRendererMaterialStaticBoolParameter
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraRendererMaterialStaticBoolParameter	
	{
	public:
		FName MaterialParameterName; // 0x0(0x4)
		FName StaticVariableName; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraRendererMaterialParameters
	// Size: 0x50 (0x50 - 0x0)
	struct FNiagaraRendererMaterialParameters	
	{
	public:
		TArray AttributeBindings; // 0x0(0x10)
		TArray ScalarParameters; // 0x10(0x10)
		TArray VectorParameters; // 0x20(0x10)
		TArray TextureParameters; // 0x30(0x10)
		TArray StaticBoolParameters; // 0x40(0x10)
	};


	// Struct Niagara.NiagaraRibbonShapeCustomVertex
	// Size: 0x14 (0x14 - 0x0)
	struct FNiagaraRibbonShapeCustomVertex	
	{
	public:
		FVector2f Position; // 0x0(0x8)
		FVector2f Normal; // 0x8(0x8)
		float TextureV; // 0x10(0x4)
	};


	// Struct Niagara.NiagaraRibbonUVSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FNiagaraRibbonUVSettings	
	{
	public:
		ENiagaraRibbonUVDistributionMode DistributionMode; // 0x0(0x1)
		ENiagaraRibbonUVEdgeMode LeadingEdgeMode; // 0x1(0x1)
		ENiagaraRibbonUVEdgeMode TrailingEdgeMode; // 0x2(0x1)
		bool bEnablePerParticleUOverride : 1; // 0x3:0(0x1)
		bool bEnablePerParticleVRangeOverride : 1; // 0x3:1(0x1)
		float TilingLength; // 0x4(0x4)
		FVector2D Offset; // 0x8(0x10)
		FVector2D Scale; // 0x18(0x10)
	};


	// Struct Niagara.NiagaraScalabilityManager
	// Size: 0xE0 (0xE0 - 0x0)
	struct FNiagaraScalabilityManager	
	{
	public:
		UNiagaraEffectType EffectType; // 0x0(0x8)
		TArray ManagedComponents; // 0x8(0x10)
		unsigned char UnknownData01_7[0xC8]; // 0x18(0xC8) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraModuleDependency
	// Size: 0x58 (0x58 - 0x0)
	struct FNiagaraModuleDependency	
	{
	public:
		FName ID; // 0x0(0x4)
		ENiagaraModuleDependencyType Type; // 0x4(0x1)
		ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x5(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FString RequiredVersion; // 0x8(0x10)
		int32_t OnlyEvaluateInScriptUsage; // 0x18(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FText Description; // 0x20(0x10)
		unsigned char UnknownData05_7[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraCompilerTag
	// Size: 0x28 (0x28 - 0x0)
	struct FNiagaraCompilerTag	
	{
	public:
		FNiagaraVariable Variable; // 0x0(0x18)
		FString StringValue; // 0x18(0x10)
	};


	// Struct Niagara.NiagaraVMExecutableDataId
	// Size: 0x58 (0x58 - 0x0)
	struct FNiagaraVMExecutableDataId	
	{
	public:
		FGuid CompilerVersionID; // 0x0(0x10)
		ENiagaraScriptUsage ScriptUsageType; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FGuid ScriptUsageTypeID; // 0x14(0x10)
		bool bUsesRapidIterationParams : 1; // 0x24:0(0x1)
		bool bDisableDebugSwitches : 1; // 0x24:1(0x1)
		bool bInterpolatedSpawn : 1; // 0x24:2(0x1)
		bool bRequiresPersistentIDs : 1; // 0x24:3(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		FGuid BaseScriptID; // 0x28(0x10)
		FNiagaraCompileHash BaseScriptCompileHash; // 0x38(0x10)
		FGuid ScriptVersionID; // 0x48(0x10)
	};


	// Struct Niagara.NiagaraVMExecutableByteCode
	// Size: 0x18 (0x18 - 0x0)
	struct FNiagaraVMExecutableByteCode	
	{
	public:
		TArray Data; // 0x0(0x10)
		int32_t UncompressedSize; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraVMExecutableData
	// Size: 0x1A0 (0x1A0 - 0x0)
	struct FNiagaraVMExecutableData	
	{
	public:
		FNiagaraVMExecutableByteCode ByteCode; // 0x0(0x18)
		FNiagaraVMExecutableByteCode OptimizedByteCode; // 0x18(0x18)
		unsigned char UnknownData05_6[0x38]; // 0x30(0x38) UNKNOWN PROPERTY
		int32_t NumTempRegisters; // 0x68(0x4)
		int32_t NumUserPtrs; // 0x6C(0x4)
		TArray CompileTags; // 0x70(0x10)
		TArray ScriptLiterals; // 0x80(0x10)
		TArray Attributes; // 0x90(0x10)
		FNiagaraScriptDataUsageInfo DataUsage; // 0xA0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		TArray UObjectInfos; // 0xA8(0x10)
		TArray DataInterfaceInfo; // 0xB8(0x10)
		TArray CalledVMExternalFunctions; // 0xC8(0x10)
		unsigned char UnknownData07_6[0x10]; // 0xD8(0x10) UNKNOWN PROPERTY
		TArray ReadDataSets; // 0xE8(0x10)
		TArray WriteDataSets; // 0xF8(0x10)
		TArray StatScopes; // 0x108(0x10)
		FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata; // 0x118(0x58)
		ENiagaraScriptCompileStatus LastCompileStatus; // 0x170(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x171(0x7) UNKNOWN PROPERTY
		TArray SimulationStageMetaData; // 0x178(0x10)
		TArray ExperimentalContextData; // 0x188(0x10)
		bool bReadsSignificanceIndex : 1; // 0x198:0(0x1)
		bool bNeedsGPUContextInit : 1; // 0x198:1(0x1)
		unsigned char UnknownData09_7[0x7]; // 0x199(0x7) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraInlineDynamicInputFormatToken
	// Size: 0x1 (0x1 - 0x0)
	struct FNiagaraInlineDynamicInputFormatToken	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.VersionedNiagaraScriptData
	// Size: 0x1 (0x1 - 0x0)
	struct FVersionedNiagaraScriptData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraScriptExecutionPaddingInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraScriptExecutionPaddingInfo	
	{
	public:
		uint16_t SrcOffset; // 0x0(0x2)
		uint16_t DestOffset; // 0x2(0x2)
		uint16_t SrcSize; // 0x4(0x2)
		uint16_t DestSize; // 0x6(0x2)
	};


	// Struct Niagara.NiagaraScriptExecutionParameterStore
	// Inherited from FNiagaraParameterStore
	// Size: 0x8 (0x90 - 0x88)
	struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore	
	{
	public:
		int32_t ParameterSize; // 0x88(0x4)
		bool bInitialized : 1; // 0x8C:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x8D(0x3) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraScriptInstanceParameterStore
	// Inherited from FNiagaraParameterStore
	// Size: 0x10 (0x98 - 0x88)
	struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x88(0x10) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraScriptHighlight
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraScriptHighlight	
	{
	public:
		FLinearColor Color; // 0x0(0x10)
		FText DisplayName; // 0x10(0x10)
	};


	// Struct Niagara.NiagaraSimCacheDataBuffers
	// Size: 0x98 (0x98 - 0x0)
	struct FNiagaraSimCacheDataBuffers	
	{
	public:
		uint32_t NumInstances; // 0x0(0x4)
		uint32_t IDAcquireTag; // 0x4(0x4)
		uint32_t IDToIndexTableElements; // 0x8(0x4)
		unsigned char UnknownData01_7[0x8C]; // 0xC(0x8C) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraSimCacheEmitterFrame
	// Size: 0xD8 (0xD8 - 0x0)
	struct FNiagaraSimCacheEmitterFrame	
	{
	public:
		FBox LocalBounds; // 0x0(0x38)
		int32_t TotalSpawnedParticles; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FNiagaraSimCacheDataBuffers ParticleDataBuffers; // 0x40(0x98)
	};


	// Struct Niagara.NiagaraSimCacheSystemFrame
	// Size: 0xD0 (0xD0 - 0x0)
	struct FNiagaraSimCacheSystemFrame	
	{
	public:
		FBox LocalBounds; // 0x0(0x38)
		FNiagaraSimCacheDataBuffers SystemDataBuffers; // 0x38(0x98)
	};


	// Struct Niagara.NiagaraSimCacheFrame
	// Size: 0x160 (0x160 - 0x0)
	struct FNiagaraSimCacheFrame	
	{
	public:
		FTransform LocalToWorld; // 0x0(0x60)
		FVector3f LWCTile; // 0x60(0xC)
		float SimulationAge; // 0x6C(0x4)
		int32_t SimulationTickCount; // 0x70(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FNiagaraSimCacheSystemFrame SystemData; // 0x78(0xD0)
		TArray EmitterData; // 0x148(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraSimCacheVariable
	// Size: 0x14 (0x14 - 0x0)
	struct FNiagaraSimCacheVariable	
	{
	public:
		FNiagaraVariableBase Variable; // 0x0(0x8)
		uint16_t FloatOffset; // 0x8(0x2)
		uint16_t FloatCount; // 0xA(0x2)
		uint16_t HalfOffset; // 0xC(0x2)
		uint16_t HalfCount; // 0xE(0x2)
		uint16_t Int32Offset; // 0x10(0x2)
		uint16_t Int32Count; // 0x12(0x2)
	};


	// Struct Niagara.NiagaraSimCacheDataBuffersLayout
	// Size: 0xB0 (0xB0 - 0x0)
	struct FNiagaraSimCacheDataBuffersLayout	
	{
	public:
		FName LayoutName; // 0x0(0x4)
		ENiagaraSimTarget SimTarget; // 0x4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray Variables; // 0x8(0x10)
		uint16_t FloatCount; // 0x18(0x2)
		uint16_t HalfCount; // 0x1A(0x2)
		uint16_t Int32Count; // 0x1C(0x2)
		bool bLocalspace; // 0x1E(0x1)
		bool bAllowInterpolation; // 0x1F(0x1)
		bool bAllowVelocityExtrapolation; // 0x20(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		TArray RebaseVariableNames; // 0x28(0x10)
		TArray InterpVariableNames; // 0x38(0x10)
		uint16_t ComponentVelocity; // 0x48(0x2)
		unsigned char UnknownData05_7[0x66]; // 0x4A(0x66) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraSimCacheLayout
	// Size: 0xC0 (0xC0 - 0x0)
	struct FNiagaraSimCacheLayout	
	{
	public:
		FNiagaraSimCacheDataBuffersLayout SystemLayout; // 0x0(0xB0)
		TArray EmitterLayouts; // 0xB0(0x10)
	};


	// Struct Niagara.NiagaraEmitterCompiledData
	// Size: 0xF8 (0xF8 - 0x0)
	struct FNiagaraEmitterCompiledData	
	{
	public:
		TArray SpawnAttributes; // 0x0(0x10)
		FNiagaraVariable EmitterSpawnIntervalVar; // 0x10(0x18)
		FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x28(0x18)
		FNiagaraVariable EmitterSpawnGroupVar; // 0x40(0x18)
		FNiagaraVariable EmitterAgeVar; // 0x58(0x18)
		FNiagaraVariable EmitterRandomSeedVar; // 0x70(0x18)
		FNiagaraVariable EmitterInstanceSeedVar; // 0x88(0x18)
		FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xA0(0x18)
		FNiagaraDataSetCompiledData DataSetCompiledData; // 0xB8(0x40)
	};


	// Struct Niagara.NiagaraParameterDataSetBinding
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraParameterDataSetBinding	
	{
	public:
		int32_t ParameterOffset; // 0x0(0x4)
		int32_t DataSetComponentOffset; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraParameterDataSetBindingCollection
	// Size: 0x20 (0x20 - 0x0)
	struct FNiagaraParameterDataSetBindingCollection	
	{
	public:
		TArray FloatOffsets; // 0x0(0x10)
		TArray Int32Offsets; // 0x10(0x10)
	};


	// Struct Niagara.NiagaraSystemCompiledData
	// Size: 0x228 (0x228 - 0x0)
	struct FNiagaraSystemCompiledData	
	{
	public:
		FNiagaraParameterStore InstanceParamStore; // 0x0(0x88)
		FNiagaraDataSetCompiledData DataSetCompiledData; // 0x88(0x40)
		FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xC8(0x40)
		FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0x108(0x40)
		FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x148(0x20)
		FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x168(0x20)
		FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x188(0x20)
		TArray SpawnInstanceEmitterBindings; // 0x1A8(0x10)
		FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1B8(0x20)
		FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x1D8(0x20)
		FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x1F8(0x20)
		TArray UpdateInstanceEmitterBindings; // 0x218(0x10)
	};


	// Struct Niagara.NiagaraSystemScalabilityOverrides
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraSystemScalabilityOverrides	
	{
	public:
		TArray Overrides; // 0x0(0x10)
	};


	// Struct Niagara.NiagaraWildcard
	// Size: 0x1 (0x1 - 0x0)
	struct FNiagaraWildcard	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraFloat
	// Size: 0x4 (0x4 - 0x0)
	struct FNiagaraFloat	
	{
	public:
		float Value; // 0x0(0x4)
	};


	// Struct Niagara.NiagaraInt32
	// Size: 0x4 (0x4 - 0x0)
	struct FNiagaraInt32	
	{
	public:
		int32_t Value; // 0x0(0x4)
	};


	// Struct Niagara.NiagaraBool
	// Size: 0x4 (0x4 - 0x0)
	struct FNiagaraBool	
	{
	public:
		int32_t Value; // 0x0(0x4)
	};


	// Struct Niagara.NiagaraPosition
	// Inherited from FVector3f
	// Size: 0x0 (0xC - 0xC)
	struct FNiagaraPosition : public FVector3f	
	{
	public:
	};


	// Struct Niagara.NiagaraHalf
	// Size: 0x2 (0x2 - 0x0)
	struct FNiagaraHalf	
	{
	public:
		uint16_t Value; // 0x0(0x2)
	};


	// Struct Niagara.NiagaraHalfVector2
	// Size: 0x4 (0x4 - 0x0)
	struct FNiagaraHalfVector2	
	{
	public:
		uint16_t X; // 0x0(0x2)
		uint16_t Y; // 0x2(0x2)
	};


	// Struct Niagara.NiagaraHalfVector3
	// Size: 0x6 (0x6 - 0x0)
	struct FNiagaraHalfVector3	
	{
	public:
		uint16_t X; // 0x0(0x2)
		uint16_t Y; // 0x2(0x2)
		uint16_t Z; // 0x4(0x2)
	};


	// Struct Niagara.NiagaraHalfVector4
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraHalfVector4	
	{
	public:
		uint16_t X; // 0x0(0x2)
		uint16_t Y; // 0x2(0x2)
		uint16_t Z; // 0x4(0x2)
		uint16_t W; // 0x6(0x2)
	};


	// Struct Niagara.NiagaraNumeric
	// Size: 0x1 (0x1 - 0x0)
	struct FNiagaraNumeric	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraParameterMap
	// Size: 0x1 (0x1 - 0x0)
	struct FNiagaraParameterMap	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraDouble
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraDouble	
	{
	public:
		double Value; // 0x0(0x8)
	};


	// Struct Niagara.NiagaraMatrix
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraMatrix	
	{
	public:
		FVector4f Row0; // 0x0(0x10)
		FVector4f Row1; // 0x10(0x10)
		FVector4f Row2; // 0x20(0x10)
		FVector4f Row3; // 0x30(0x10)
	};


	// Struct Niagara.NiagaraEmitterID
	// Size: 0x4 (0x4 - 0x0)
	struct FNiagaraEmitterID	
	{
	public:
		int32_t ID; // 0x0(0x4)
	};


	// Struct Niagara.NiagaraSpawnInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraSpawnInfo	
	{
	public:
		int32_t Count; // 0x0(0x4)
		float InterpStartDt; // 0x4(0x4)
		float IntervalDt; // 0x8(0x4)
		int32_t SpawnGroup; // 0xC(0x4)
	};


	// Struct Niagara.NiagaraID
	// Size: 0x8 (0x8 - 0x0)
	struct FNiagaraID	
	{
	public:
		int32_t Index; // 0x0(0x4)
		int32_t AcquireTag; // 0x4(0x4)
	};


	// Struct Niagara.NiagaraRandInfo
	// Size: 0xC (0xC - 0x0)
	struct FNiagaraRandInfo	
	{
	public:
		int32_t Seed1; // 0x0(0x4)
		int32_t Seed2; // 0x4(0x4)
		int32_t Seed3; // 0x8(0x4)
	};


	// Struct Niagara.NiagaraUserRedirectionParameterStore
	// Inherited from FNiagaraParameterStore
	// Size: 0x50 (0xD8 - 0x88)
	struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore	
	{
	public:
		TMap UserParameterRedirects; // 0x88(0x50)
	};


	// Struct Niagara.NiagaraVariant
	// Size: 0x28 (0x28 - 0x0)
	struct FNiagaraVariant	
	{
	public:
		UObject Object; // 0x0(0x8)
		UNiagaraDataInterface DataInterface; // 0x8(0x8)
		TArray Bytes; // 0x10(0x10)
		ENiagaraVariantMode CurrentMode; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct Niagara.NiagaraWorldManagerTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FNiagaraWorldManagerTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};

}
