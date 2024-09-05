#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Niagara
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Niagara.NDIRenderTargetVolumeSimCacheData
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UNDIRenderTargetVolumeSimCacheData : public UObject	
	{
	public:
		FName CompressionType; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray Frames; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NDIRenderTargetVolumeSimCacheData");
			return ret;
		}
	};


	// Class Niagara.NiagaraAssetTagDefinitions
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UNiagaraAssetTagDefinitions : public UObject	
	{
	public:
		FText DisplayName; // 0x28(0x10)
		FText Description; // 0x38(0x10)
		TArray TagDefinitions; // 0x48(0x10)
		bool bDisplayTagsAsFlatList; // 0x58(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		int32_t SortOrder; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraAssetTagDefinitions");
			return ret;
		}
	};


	// Class Niagara.NiagaraConvertInPlaceUtilityBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraConvertInPlaceUtilityBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraConvertInPlaceUtilityBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataChannelReader
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UNiagaraDataChannelReader : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		UNiagaraDataChannelHandler Owner; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelReader");
			return ret;
		}

		FVector4 ReadVector4(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145C3298
		FVector2D ReadVector2D(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145C31B8
		FVector ReadVector(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145C30D8
		FNiagaraSpawnInfo ReadSpawnInfo(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145C2FF8
		FQuat ReadQuat(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145C2F18
		FVector ReadPosition(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145C2E38
		FLinearColor ReadLinearColor(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145C2D58
		int32_t ReadInt(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145C2C78
		FNiagaraID ReadID(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145C2B98
		double ReadFloat(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145C2AB8
		char ReadEnum(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145C29D8
		bool ReadBool(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145C28F8
		int32_t Num(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C2818
		bool InitAccess(FNiagaraDataChannelSearchParameters SearchParams, bool bReadPrevFrameData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C2738
	};


	// Class Niagara.NiagaraDataChannelWriter
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UNiagaraDataChannelWriter : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UNiagaraDataChannelHandler Owner; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelWriter");
			return ret;
		}

		void WriteVector4(FName VarName, int32_t Index, FVector4 InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C3ED8
		void WriteVector2D(FName VarName, int32_t Index, FVector2D InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C3DF8
		void WriteVector(FName VarName, int32_t Index, FVector InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C3D18
		void WriteSpawnInfo(FName VarName, int32_t Index, FNiagaraSpawnInfo InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C3C38
		void WriteQuat(FName VarName, int32_t Index, FQuat InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C3B58
		void WritePosition(FName VarName, int32_t Index, FVector InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C3A78
		void WriteLinearColor(FName VarName, int32_t Index, FLinearColor InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C3998
		void WriteInt(FName VarName, int32_t Index, int32_t InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C38B8
		void WriteID(FName VarName, int32_t Index, FNiagaraID InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C37D8
		void WriteFloat(FName VarName, int32_t Index, double InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C36F8
		void WriteEnum(FName VarName, int32_t Index, char InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C3618
		void WriteBool(FName VarName, int32_t Index, bool InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C3538
		int32_t Num(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C3458
		bool InitWrite(FNiagaraDataChannelSearchParameters SearchParams, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU, FString DebugSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C3378
	};


	// Class Niagara.NiagaraDataChannelHandler
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UNiagaraDataChannelHandler : public UObject	
	{
	public:
		TWeakObjectPtr DataChannel; // 0x28(0x8)
		UNiagaraDataChannelWriter Writer; // 0x30(0x8)
		UNiagaraDataChannelReader Reader; // 0x38(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelHandler");
			return ret;
		}

		UNiagaraDataChannelWriter GetDataChannelWriter(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C4098
		UNiagaraDataChannelReader GetDataChannelReader(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C3FB8
	};


	// Class Niagara.NiagaraDataChannelAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNiagaraDataChannelAsset : public UObject	
	{
	public:
		UNiagaraDataChannel DataChannel; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelAsset");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataChannel
	// Inherited from UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UNiagaraDataChannel : public UObject	
	{
	public:
		TArray ChannelVariables; // 0x28(0x10)
		bool bKeepPreviousFrameData; // 0x38(0x1)
		bool bEnforceTickGroupReadWriteOrder; // 0x39(0x1)
		TEnumAsByte FinalWriteTickGroup; // 0x3A(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x3B(0x5) UNKNOWN PROPERTY
		FNiagaraDataSetCompiledData CompiledData; // 0x40(0x40)
		FNiagaraDataSetCompiledData CompiledDataGPU; // 0x80(0x40)
		unsigned char UnknownData03_7[0x60]; // 0xC0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannel");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataChannel_Global
	// Inherited from UNiagaraDataChannel -> UObject
	// Size: 0x0 (0x120 - 0x120)
	class UNiagaraDataChannel_Global : public UNiagaraDataChannel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannel_Global");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataChannelHandler_Global
	// Inherited from UNiagaraDataChannelHandler -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelHandler_Global");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataChannel_Islands
	// Inherited from UNiagaraDataChannel -> UObject
	// Size: 0x88 (0x1A8 - 0x120)
	class UNiagaraDataChannel_Islands : public UNiagaraDataChannel	
	{
	public:
		ENiagraDataChannel_IslandMode Mode; // 0x120(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		FVector InitialExtents; // 0x128(0x18)
		FVector MaxExtents; // 0x140(0x18)
		FVector PerElementExtents; // 0x158(0x18)
		TArray Systems; // 0x170(0x10)
		int32_t IslandPoolSize; // 0x180(0x4)
		FNDCIslandDebugDrawSettings DebugDrawSettings; // 0x184(0x4)
		TArray SystemsInternal; // 0x188(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x198(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannel_Islands");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataChannelHandler_Islands
	// Inherited from UNiagaraDataChannelHandler -> UObject
	// Size: 0x30 (0x78 - 0x48)
	class UNiagaraDataChannelHandler_Islands : public UNiagaraDataChannelHandler	
	{
	public:
		TArray ActiveIslands; // 0x48(0x10)
		TArray FreeIslands; // 0x58(0x10)
		TArray IslandPool; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelHandler_Islands");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterface
	// Inherited from UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNiagaraDataInterface : public UNiagaraDataInterfaceBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterface");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceRWBase
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceRWBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceDataChannelRead
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x78 (0xB0 - 0x38)
	class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterfaceRWBase	
	{
	public:
		UNiagaraDataChannelAsset Channel; // 0x38(0x8)
		bool bReadCurrentFrame; // 0x40(0x1)
		bool bUpdateSourceDataEveryTick; // 0x41(0x1)
		bool bOverrideSpawnGroupToDataChannelIndex; // 0x42(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x43(0x5) UNKNOWN PROPERTY
		FNDIDataChannelCompiledData CompiledData; // 0x48(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceDataChannelRead");
			return ret;
		}
	};


	// Class Niagara.NDIDataChannelWriteSimCacheData
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UNDIDataChannelWriteSimCacheData : public UObject	
	{
	public:
		TArray FrameData; // 0x28(0x10)
		FSoftObjectPath DataChannelReference; // 0x38(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NDIDataChannelWriteSimCacheData");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceDataChannelWrite
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0xC8 (0x100 - 0x38)
	class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		ENiagaraDataChannelAllocationMode AllocationMode; // 0x40(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		uint32_t AllocationCount; // 0x44(0x4)
		bool bPublishToGame; // 0x48(0x1)
		bool bPublishToCPU; // 0x49(0x1)
		bool bPublishToGPU; // 0x4A(0x1)
		bool bUpdateDestinationDataEveryTick; // 0x4B(0x1)
		unsigned char UnknownData05_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UNiagaraDataChannelAsset Channel; // 0x50(0x8)
		FNDIDataChannelWriteCompiledData CompiledData; // 0x58(0xA8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceDataChannelWrite");
			return ret;
		}
	};


	// Class Niagara.NiagaraMessageDataBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraMessageDataBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraMessageDataBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraParameterDefinitionsBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraParameterDefinitionsBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraParameterDefinitionsBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraRenderableMeshInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraRenderableMeshInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraRenderableMeshInterface");
			return ret;
		}
	};


	// Class Niagara.NiagaraScriptSourceBase
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UNiagaraScriptSourceBase : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraScriptSourceBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0xF0 (0x120 - 0x30)
	class UNiagaraSettings : public UDeveloperSettings	
	{
	public:
		bool bSystemsSupportLargeWorldCoordinates; // 0x30(0x1)
		bool bEnforceStrictStackTypes; // 0x31(0x1)
		bool bExperimentalVMEnabled; // 0x32(0x1)
		bool bAccurateQuatInterpolation; // 0x33(0x1)
		ENiagaraCompileErrorSeverity InvalidNamespaceWriteSeverity; // 0x34(0x1)
		bool bLimitDeltaTime; // 0x35(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		float MaxDeltaTimePerTick; // 0x38(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FSoftObjectPath DefaultEffectType; // 0x40(0x18)
		bool bAllowCreateActorFromSystemWithNoEffectType; // 0x58(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		FLinearColor PositionPinTypeColor; // 0x5C(0x10)
		ENiagaraStripScriptByteCodeOption ByteCodeStripOption; // 0x6C(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		TArray QualityLevels; // 0x70(0x10)
		TMap ComponentRendererWarningsPerClass; // 0x80(0x50)
		TEnumAsByte DefaultRenderTargetFormat; // 0xD0(0x1)
		ENiagaraGpuBufferFormat DefaultGridFormat; // 0xD1(0x1)
		unsigned char UnknownData11_6[0x2]; // 0xD2(0x2) UNKNOWN PROPERTY
		ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xD4(0x4)
		ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode; // 0xD8(0x1)
		ENiagaraDefaultSortPrecision DefaultSortPrecision; // 0xD9(0x1)
		ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency; // 0xDA(0x1)
		unsigned char UnknownData12_6[0x1]; // 0xDB(0x1) UNKNOWN PROPERTY
		float DefaultLightInverseExposureBlend; // 0xDC(0x4)
		bool NDISkelMesh_SupportReadingDeformedGeometry; // 0xE0(0x1)
		bool NDISkelMesh_Support16BitIndexWeight; // 0xE1(0x1)
		TEnumAsByte NDISkelMesh_GpuMaxInfluences; // 0xE2(0x1)
		TEnumAsByte NDISkelMesh_GpuUniformSamplingFormat; // 0xE3(0x1)
		TEnumAsByte NDISkelMesh_AdjacencyTriangleIndexFormat; // 0xE4(0x1)
		bool NDIStaticMesh_AllowDistanceFields; // 0xE5(0x1)
		unsigned char UnknownData13_6[0x2]; // 0xE6(0x2) UNKNOWN PROPERTY
		TArray NDICollisionQuery_AsyncGpuTraceProviderOrder; // 0xE8(0x10)
		FString SimCacheAuxiliaryFileBasePath; // 0xF8(0x10)
		int64_t SimCacheMaxCPUMemoryVolumetrics; // 0x108(0x8)
		TArray PlatformSetRedirects; // 0x110(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSettings");
			return ret;
		}
	};


	// Class Niagara.NiagaraSimCacheCustomStorageInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraSimCacheCustomStorageInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSimCacheCustomStorageInterface");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessEmitter
	// Inherited from UObject
	// Size: 0x1B0 (0x1D8 - 0x28)
	class UNiagaraStatelessEmitter : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FString UniqueEmitterName; // 0x38(0x10)
		UClass EmitterTemplateClass; // 0x48(0x8)
		bool bDeterministic; // 0x50(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		uint32_t AllowedFeatureMask; // 0x54(0x4)
		int32_t RandomSeed; // 0x58(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FBox FixedBounds; // 0x60(0x38)
		FNiagaraEmitterStateData EmitterState; // 0x98(0x70)
		TArray SpawnInfos; // 0x108(0x10)
		TArray Modules; // 0x118(0x10)
		TArray RendererProperties; // 0x128(0x10)
		FNiagaraPlatformSet Platforms; // 0x138(0x30)
		FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x168(0x10)
		FNiagaraDataSetCompiledData ParticleDataSetCompiledData; // 0x178(0x40)
		TArray ComponentOffsets; // 0x1B8(0x10)
		TArray CachedParameterCollectionReferences; // 0x1C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessEmitter");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessEmitterTemplate
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraStatelessEmitterTemplate : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessEmitterTemplate");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessEmitterDefault
	// Inherited from UNiagaraStatelessEmitterTemplate -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraStatelessEmitterDefault : public UNiagaraStatelessEmitterTemplate	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessEmitterDefault");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessEmitterExample1
	// Inherited from UNiagaraStatelessEmitterTemplate -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraStatelessEmitterExample1 : public UNiagaraStatelessEmitterTemplate	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessEmitterExample1");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule
	// Inherited from UNiagaraMergeable -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNiagaraStatelessModule : public UNiagaraMergeable	
	{
	public:
		bool bModuleEnabled : 1; // 0x28:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_AccelerationForce
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UNiagaraStatelessModule_AccelerationForce : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionRangeVector3 AccelerationDistribution; // 0x30(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_AccelerationForce");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_AddVelocity
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0xB8 (0xE8 - 0x30)
	class UNiagaraStatelessModule_AddVelocity : public UNiagaraStatelessModule	
	{
	public:
		ENSM_VelocityType VelocityType; // 0x30(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionRangeVector3 LinearVelocityDistribution; // 0x38(0x30)
		float LinearVelocityScale; // 0x68(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionRangeFloat ConeVelocityDistribution; // 0x70(0x20)
		FRotator ConeRotation; // 0x90(0x18)
		float ConeAngle; // 0xA8(0x4)
		float InnerCone; // 0xAC(0x4)
		FNiagaraDistributionRangeFloat PointVelocityDistribution; // 0xB0(0x20)
		FVector3f PointOrigin; // 0xD0(0xC)
		bool bSpeedFalloffFromConeAxisEnabled; // 0xDC(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		float SpeedFalloffFromConeAxis; // 0xE0(0x4)
		unsigned char UnknownData07_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_AddVelocity");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_CalculateAccurateVelocity
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UNiagaraStatelessModule_CalculateAccurateVelocity : public UNiagaraStatelessModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_CalculateAccurateVelocity");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_CameraOffset
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UNiagaraStatelessModule_CameraOffset : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionFloat CameraOffsetDistribution; // 0x30(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_CameraOffset");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_CurlNoiseForce
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UNiagaraStatelessModule_CurlNoiseForce : public UNiagaraStatelessModule	
	{
	public:
		float NoiseAmplitude; // 0x30(0x4)
		float NoiseFrequency; // 0x34(0x4)
		ENSM_NoiseMode NoiseMode; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		UObject NoiseTexture; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_CurlNoiseForce");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_Drag
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UNiagaraStatelessModule_Drag : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionRangeFloat DragDistribution; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_Drag");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_DynamicMaterialParameters
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x328 (0x358 - 0x30)
	class UNiagaraStatelessModule_DynamicMaterialParameters : public UNiagaraStatelessModule	
	{
	public:
		bool bParameter0Enabled : 1; // 0x30:0(0x1)
		bool bParameter1Enabled : 1; // 0x30:1(0x1)
		bool bParameter2Enabled : 1; // 0x30:2(0x1)
		bool bParameter3Enabled : 1; // 0x30:3(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FNiagaraStatelessDynamicParameterSet Parameter0; // 0x38(0xC8)
		FNiagaraStatelessDynamicParameterSet Parameter1; // 0x100(0xC8)
		FNiagaraStatelessDynamicParameterSet Parameter2; // 0x1C8(0xC8)
		FNiagaraStatelessDynamicParameterSet Parameter3; // 0x290(0xC8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_DynamicMaterialParameters");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_GravityForce
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UNiagaraStatelessModule_GravityForce : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionRangeVector3 GravityDistribution; // 0x30(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_GravityForce");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_InitializeParticle
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x148 (0x178 - 0x30)
	class UNiagaraStatelessModule_InitializeParticle : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionRangeFloat LifetimeDistribution; // 0x30(0x20)
		FNiagaraDistributionRangeColor ColorDistribution; // 0x50(0x38)
		FNiagaraDistributionRangeFloat MassDistribution; // 0x88(0x20)
		FNiagaraDistributionRangeVector2 SpriteSizeDistribution; // 0xA8(0x28)
		FNiagaraDistributionRangeFloat SpriteRotationDistribution; // 0xD0(0x20)
		FNiagaraDistributionRangeVector3 MeshScaleDistribution; // 0xF0(0x30)
		bool bWriteRibbonWidth; // 0x120(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		FNiagaraDistributionRangeFloat RibbonWidthDistribution; // 0x128(0x20)
		FNiagaraDistributionPosition InitialPositionDistribution; // 0x148(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_InitializeParticle");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_InitialMeshOrientation
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UNiagaraStatelessModule_InitialMeshOrientation : public UNiagaraStatelessModule	
	{
	public:
		FVector3f Rotation; // 0x30(0xC)
		FVector3f RandomRotationRange; // 0x3C(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_InitialMeshOrientation");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_MeshIndex
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UNiagaraStatelessModule_MeshIndex : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionRangeInt MeshIndex; // 0x30(0x14)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TArray MeshIndexWeight; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_MeshIndex");
			return ret;
		}

		bool NeedsMeshIndexWeights(); // Flags: Final|Native|Public|Const 0x7FF4145C4178
	};


	// Class Niagara.NiagaraStatelessModule_MeshRotationRate
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UNiagaraStatelessModule_MeshRotationRate : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionRangeVector3 RotationRateDistribution; // 0x30(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_MeshRotationRate");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_RotateAroundPoint
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UNiagaraStatelessModule_RotateAroundPoint : public UNiagaraStatelessModule	
	{
	public:
		float RateMin; // 0x30(0x4)
		float RateMax; // 0x34(0x4)
		float RadiusMin; // 0x38(0x4)
		float RadiusMax; // 0x3C(0x4)
		float InitialPhaseMin; // 0x40(0x4)
		float InitialPhaseMax; // 0x44(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_RotateAroundPoint");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_ScaleColor
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UNiagaraStatelessModule_ScaleColor : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionColor ScaleDistribution; // 0x30(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_ScaleColor");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_ScaleMeshSize
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UNiagaraStatelessModule_ScaleMeshSize : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionVector3 ScaleDistribution; // 0x30(0x30)
		FNiagaraParameterBindingWithValue ScaleCurveRange; // 0x60(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_ScaleMeshSize");
			return ret;
		}

		bool UseScaleCurveRange(); // Flags: Final|Native|Public|Const 0x7FF4145C4258
	};


	// Class Niagara.NiagaraStatelessModule_ScaleMeshSizeBySpeed
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UNiagaraStatelessModule_ScaleMeshSizeBySpeed : public UNiagaraStatelessModule	
	{
	public:
		float VelocityThreshold; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionVector3 ScaleDistribution; // 0x38(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_ScaleMeshSizeBySpeed");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_ScaleSpriteSize
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UNiagaraStatelessModule_ScaleSpriteSize : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionVector2 ScaleDistribution; // 0x30(0x30)
		FNiagaraParameterBindingWithValue ScaleCurveRange; // 0x60(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_ScaleSpriteSize");
			return ret;
		}

		bool UseScaleCurveRange(); // Flags: Final|Native|Public|Const 0x7FF4145C4338
	};


	// Class Niagara.NiagaraStatelessModule_ScaleSpriteSizeBySpeed
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed : public UNiagaraStatelessModule	
	{
	public:
		float VelocityThreshold; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionVector2 ScaleDistribution; // 0x38(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_ScaleSpriteSizeBySpeed");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_ShapeLocation
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UNiagaraStatelessModule_ShapeLocation : public UNiagaraStatelessModule	
	{
	public:
		ENSM_ShapePrimitive ShapePrimitive; // 0x30(0x4)
		FVector3f BoxSize; // 0x34(0xC)
		bool bBoxSurfaceOnly; // 0x40(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float BoxSurfaceThicknessMin; // 0x44(0x4)
		float BoxSurfaceThicknessMax; // 0x48(0x4)
		FVector2f PlaneSize; // 0x4C(0x8)
		float CylinderHeight; // 0x54(0x4)
		float CylinderRadius; // 0x58(0x4)
		float CylinderHeightMidpoint; // 0x5C(0x4)
		float RingRadius; // 0x60(0x4)
		float DiscCoverage; // 0x64(0x4)
		float RingUDistribution; // 0x68(0x4)
		float SphereMin; // 0x6C(0x4)
		float SphereMax; // 0x70(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_ShapeLocation");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_SolveVelocitiesAndForces
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UNiagaraStatelessModule_SolveVelocitiesAndForces : public UNiagaraStatelessModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_SolveVelocitiesAndForces");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_SpriteFacingAndAlignment
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UNiagaraStatelessModule_SpriteFacingAndAlignment : public UNiagaraStatelessModule	
	{
	public:
		bool bSpriteFacingEnabled; // 0x30(0x1)
		bool bSpriteAlignmentEnabled; // 0x31(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		FVector3f SpriteFacing; // 0x34(0xC)
		FVector3f SpriteAlignment; // 0x40(0xC)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_SpriteFacingAndAlignment");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_SpriteRotationRate
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UNiagaraStatelessModule_SpriteRotationRate : public UNiagaraStatelessModule	
	{
	public:
		FNiagaraDistributionRangeFloat RotationRateDistribution; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_SpriteRotationRate");
			return ret;
		}
	};


	// Class Niagara.NiagaraStatelessModule_SubUVAnimation
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UNiagaraStatelessModule_SubUVAnimation : public UNiagaraStatelessModule	
	{
	public:
		int32_t NumFrames; // 0x30(0x4)
		bool bStartFrameRangeOverride_Enabled; // 0x34(0x1)
		bool bEndFrameRangeOverride_Enabled; // 0x35(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		int32_t StartFrameRangeOverride; // 0x38(0x4)
		int32_t EndFrameRangeOverride; // 0x3C(0x4)
		ENSMSubUVAnimation_Mode AnimationMode; // 0x40(0x4)
		float LoopsPerSecond; // 0x44(0x4)
		float RandomChangeInterval; // 0x48(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_SubUVAnimation");
			return ret;
		}
	};


	// Class Niagara.NiagaraValidationRuleSet
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNiagaraValidationRuleSet : public UObject	
	{
	public:
		TArray ValidationRules; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraValidationRuleSet");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceActorComponent
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x40 (0x78 - 0x38)
	class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface	
	{
	public:
		ENDIActorComponentSourceMode SourceMode; // 0x38(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t LocalPlayerIndex; // 0x3C(0x4)
		TLazyObjectPtr SourceActor; // 0x40(0x18)
		FNiagaraUserParameterBinding ActorOrComponentParameter; // 0x58(0x18)
		bool bRequireCurrentFrameData; // 0x70(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceActorComponent");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface	
	{
	public:
		int32_t MaxTracesPerParticle; // 0x38(0x4)
		int32_t MaxRetraces; // 0x3C(0x4)
		TEnumAsByte TraceProvider; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceAsyncGpuTrace");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceConsoleVariable
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UNiagaraDataInterfaceConsoleVariable : public UNiagaraDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceConsoleVariable");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceDebugDraw
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface	
	{
	public:
		uint32_t OverrideMaxLineInstances; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceDebugDraw");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceDynamicMesh
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x70 (0xA8 - 0x38)
	class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		TArray Sections; // 0x40(0x10)
		TArray Materials; // 0x50(0x10)
		int32_t NumVertices; // 0x60(0x4)
		int32_t NumTexCoords; // 0x64(0x4)
		bool bHasColors; // 0x68(0x1)
		bool bHasTangentBasis; // 0x69(0x1)
		bool bClearTrianglesPerFrame; // 0x6A(0x1)
		unsigned char UnknownData03_6[0x5]; // 0x6B(0x5) UNKNOWN PROPERTY
		FBox DefaultBounds; // 0x70(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceDynamicMesh");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceEmitterProperties
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface	
	{
	public:
		FNiagaraDataInterfaceEmitterBinding EmitterBinding; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceEmitterProperties");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceGBuffer
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceGBuffer");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceMemoryBuffer
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UNiagaraDataInterfaceMemoryBuffer : public UNiagaraDataInterface	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		int32_t DefaultNumElements; // 0x40(0x4)
		ENiagaraGpuSyncMode GpuSyncMode; // 0x44(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceMemoryBuffer");
			return ret;
		}
	};


	// Class Niagara.NDIMemoryBufferSimCacheData
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UNDIMemoryBufferSimCacheData : public UObject	
	{
	public:
		TArray FrameData; // 0x28(0x10)
		TArray BufferData; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NDIMemoryBufferSimCacheData");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfacePhysicsAsset
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x60 (0x98 - 0x38)
	class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface	
	{
	public:
		UPhysicsAsset DefaultSource; // 0x38(0x8)
		TWeakObjectPtr SoftSourceActor; // 0x40(0x20)
		FNiagaraUserParameterBinding MeshUserParameter; // 0x60(0x18)
		unsigned char UnknownData01_7[0x20]; // 0x78(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfacePhysicsAsset");
			return ret;
		}
	};


	// Class Niagara.NiagaraPhysicsAssetDICollectorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraPhysicsAssetDICollectorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPhysicsAssetDICollectorInterface");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceSceneCapture2D
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0xE8 (0x120 - 0x38)
	class UNiagaraDataInterfaceSceneCapture2D : public UNiagaraDataInterface	
	{
	public:
		ENDISceneCapture2DSourceMode SourceMode; // 0x38(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding SceneCaptureUserParameter; // 0x40(0x18)
		bool bAutoMoveWithComponent; // 0x58(0x1)
		ENDISceneCapture2DOffsetMode AutoMoveOffsetLocationMode; // 0x59(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY
		FVector AutoMoveOffsetLocation; // 0x60(0x18)
		ENDISceneCapture2DOffsetMode AutoMoveOffsetRotationMode; // 0x78(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		FRotator AutoMoveOffsetRotation; // 0x80(0x18)
		TEnumAsByte ManagedCaptureSource; // 0x98(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		FIntPoint ManagedTextureSize; // 0x9C(0x8)
		TEnumAsByte ManagedTextureFormat; // 0xA4(0x1)
		TEnumAsByte ManagedProjectionType; // 0xA5(0x1)
		unsigned char UnknownData11_6[0x2]; // 0xA6(0x2) UNKNOWN PROPERTY
		float ManagedFOVAngle; // 0xA8(0x4)
		float ManagedOrthoWidth; // 0xAC(0x4)
		bool bManagedCaptureEveryFrame; // 0xB0(0x1)
		bool bManagedCaptureOnMovement; // 0xB1(0x1)
		unsigned char UnknownData12_6[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY
		TArray ManagedShowOnlyActors; // 0xB8(0x10)
		unsigned char UnknownData13_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		TMap ManagedCaptureComponents; // 0xD0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSceneCapture2D");
			return ret;
		}

		void SetSceneCapture2DManagedShowOnlyActors(UNiagaraComponent NiagaraSystem, FName ParameterName, TArray ShowOnlyActors); // Flags: Final|RequiredAPI|Native|Static|Protected|BlueprintCallable 0x7FF4145C4418
	};


	// Class Niagara.NiagaraDataInterfaceSimCacheReader
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface	
	{
	public:
		FNiagaraUserParameterBinding SimCacheBinding; // 0x38(0x18)
		UNiagaraSimCache SimCache; // 0x50(0x8)
		FName EmitterBinding; // 0x58(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSimCacheReader");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceSimpleCounter
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterfaceRWBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		ENiagaraGpuSyncMode GpuSyncMode; // 0x40(0x4)
		int32_t InitialValue; // 0x44(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSimpleCounter");
			return ret;
		}
	};


	// Class Niagara.NDISimpleCounterSimCacheData
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNDISimpleCounterSimCacheData : public UObject	
	{
	public:
		TArray Values; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NDISimpleCounterSimCacheData");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceSocketReader
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x68 (0xA0 - 0x38)
	class UNiagaraDataInterfaceSocketReader : public UNiagaraDataInterface	
	{
	public:
		ENDISocketReaderSourceMode SourceMode; // 0x38(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TArray FilteredSockets; // 0x40(0x10)
		TLazyObjectPtr SourceActor; // 0x50(0x18)
		UObject SourceAsset; // 0x68(0x8)
		UClass AttachComponentClass; // 0x70(0x8)
		FName AttachComponentTag; // 0x78(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding ObjectParameterBinding; // 0x80(0x18)
		bool bUpdateSocketsPerFrame; // 0x98(0x1)
		bool bRequireCurrentFrameData; // 0x99(0x1)
		unsigned char UnknownData05_7[0x6]; // 0x9A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSocketReader");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceStaticMesh
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0xA0 (0xD8 - 0x38)
	class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface	
	{
	public:
		ENDIStaticMesh_SourceMode SourceMode; // 0x38(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UStaticMesh DefaultMesh; // 0x40(0x8)
		TWeakObjectPtr SoftSourceActor; // 0x48(0x20)
		UStaticMeshComponent SourceComponent; // 0x68(0x8)
		FNDIStaticMeshSectionFilter SectionFilter; // 0x70(0x10)
		bool bCaptureTransformsPerFrame; // 0x80(0x1)
		bool bUsePhysicsBodyVelocity; // 0x81(0x1)
		bool bAllowSamplingFromStreamingLODs; // 0x82(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x83(0x1) UNKNOWN PROPERTY
		int32_t LODIndex; // 0x84(0x4)
		FNiagaraUserParameterBinding LODIndexUserParameter; // 0x88(0x18)
		FNiagaraUserParameterBinding MeshParameterBinding; // 0xA0(0x18)
		int32_t InstanceIndex; // 0xB8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		TArray FilteredSockets; // 0xC0(0x10)
		unsigned char UnknownData07_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceStaticMesh");
			return ret;
		}

		void SetNiagaraStaticMeshDIInstanceIndex(UNiagaraComponent NiagaraSystem, FName UserParameterName, int32_t NewInstanceIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C45D8
		void OnSourceEndPlay(AActor InSource, TEnumAsByte Reason); // Flags: Final|RequiredAPI|Native|Protected 0x7FF4145C44F8
	};


	// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x60 (0x98 - 0x38)
	class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface	
	{
	public:
		ENDIObjectPropertyReaderSourceMode SourceMode; // 0x38(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding UObjectParameterBinding; // 0x40(0x18)
		TArray PropertyRemap; // 0x58(0x10)
		TWeakObjectPtr SourceActor; // 0x68(0x20)
		UClass SourceActorComponentClass; // 0x88(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x90(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader");
			return ret;
		}

		void SetUObjectReaderPropertyRemap(UNiagaraComponent NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145C46B8
	};


	// Class Niagara.NiagaraDataInterfaceVirtualTexture
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface	
	{
	public:
		URuntimeVirtualTexture Texture; // 0x38(0x8)
		FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceVirtualTexture");
			return ret;
		}
	};


	// Class Niagara.MovieSceneNiagaraSystemSpawnSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0x100 - 0xF0)
	class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection	
	{
	public:
		ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xF0(0x4)
		ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xF4(0x4)
		ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xF8(0x4)
		ENiagaraAgeUpdateMode AgeUpdateMode; // 0xFC(0x1)
		bool bAllowScalability; // 0xFD(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xFE(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.MovieSceneNiagaraSystemSpawnSection");
			return ret;
		}
	};


	// Class Niagara.MovieSceneNiagaraTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray Sections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.MovieSceneNiagaraTrack");
			return ret;
		}
	};


	// Class Niagara.MovieSceneNiagaraSystemTrack
	// Inherited from UMovieSceneNiagaraTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.MovieSceneNiagaraSystemTrack");
			return ret;
		}
	};


	// Class Niagara.MovieSceneNiagaraParameterTrack
	// Inherited from UMovieSceneNiagaraTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack	
	{
	public:
		FNiagaraVariable Parameter; // 0xA8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.MovieSceneNiagaraParameterTrack");
			return ret;
		}
	};


	// Class Niagara.MovieSceneNiagaraBoolParameterTrack
	// Inherited from UMovieSceneNiagaraParameterTrack -> UMovieSceneNiagaraTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.MovieSceneNiagaraBoolParameterTrack");
			return ret;
		}
	};


	// Class Niagara.MovieSceneNiagaraColorParameterTrack
	// Inherited from UMovieSceneNiagaraParameterTrack -> UMovieSceneNiagaraTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.MovieSceneNiagaraColorParameterTrack");
			return ret;
		}
	};


	// Class Niagara.MovieSceneNiagaraFloatParameterTrack
	// Inherited from UMovieSceneNiagaraParameterTrack -> UMovieSceneNiagaraTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.MovieSceneNiagaraFloatParameterTrack");
			return ret;
		}
	};


	// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
	// Inherited from UMovieSceneNiagaraParameterTrack -> UMovieSceneNiagaraTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x8 (0xC8 - 0xC0)
	class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.MovieSceneNiagaraIntegerParameterTrack");
			return ret;
		}
	};


	// Class Niagara.MovieSceneNiagaraVectorParameterTrack
	// Inherited from UMovieSceneNiagaraParameterTrack -> UMovieSceneNiagaraTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xD0 - 0xC0)
	class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY
		int32_t ChannelsUsed; // 0xC8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.MovieSceneNiagaraVectorParameterTrack");
			return ret;
		}
	};


	// Class Niagara.NiagaraActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ANiagaraActor : public AActor	
	{
	public:
		UNiagaraComponent NiagaraComponent; // 0x290(0x8)
		bool bDestroyOnSystemFinish : 1; // 0x298:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x299(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraActor");
			return ret;
		}

		void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C4958
		void OnNiagaraSystemFinished(UNiagaraComponent FinishedComponent); // Flags: Final|RequiredAPI|Native|Private 0x7FF4145C4878
		bool GetDestroyOnSystemFinish(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C4798
	};


	// Class Niagara.NiagaraBakerOutput
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNiagaraBakerOutput : public UObject	
	{
	public:
		FString OutputName; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraBakerOutput");
			return ret;
		}
	};


	// Class Niagara.NiagaraBakerOutputSimCache
	// Inherited from UNiagaraBakerOutput -> UObject
	// Size: 0x68 (0xA0 - 0x38)
	class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput	
	{
	public:
		FString SimCacheAssetPathFormat; // 0x38(0x10)
		FNiagaraSimCacheCreateParameters CreateParameters; // 0x48(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraBakerOutputSimCache");
			return ret;
		}
	};


	// Class Niagara.NiagaraBakerOutputSparseVolumeTexture
	// Inherited from UNiagaraBakerOutput -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UNiagaraBakerOutputSparseVolumeTexture : public UNiagaraBakerOutput	
	{
	public:
		FNiagaraBakerTextureSource SourceBinding; // 0x38(0x18)
		FString SparseVolumeTextureAssetPathFormat; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraBakerOutputSparseVolumeTexture");
			return ret;
		}
	};


	// Class Niagara.NiagaraBakerOutputTexture2D
	// Inherited from UNiagaraBakerOutput -> UObject
	// Size: 0x68 (0xA0 - 0x38)
	class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput	
	{
	public:
		FNiagaraBakerTextureSource SourceBinding; // 0x38(0x18)
		bool bGenerateAtlas : 1; // 0x50:0(0x1)
		bool bGenerateFrames : 1; // 0x50:1(0x1)
		bool bExportFrames : 1; // 0x50:2(0x1)
		bool bSetTextureAddressX : 1; // 0x50:3(0x1)
		bool bSetTextureAddressY : 1; // 0x50:4(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		FIntPoint FrameSize; // 0x54(0x8)
		FIntPoint AtlasTextureSize; // 0x5C(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x64(0x8) UNKNOWN PROPERTY
		TEnumAsByte TextureAddressX; // 0x6C(0x1)
		TEnumAsByte TextureAddressY; // 0x6D(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
		FString AtlasAssetPathFormat; // 0x70(0x10)
		FString FramesAssetPathFormat; // 0x80(0x10)
		FString FramesExportPathFormat; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraBakerOutputTexture2D");
			return ret;
		}
	};


	// Class Niagara.NiagaraBakerOutputVolumeTexture
	// Inherited from UNiagaraBakerOutput -> UObject
	// Size: 0x50 (0x88 - 0x38)
	class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput	
	{
	public:
		FNiagaraBakerTextureSource SourceBinding; // 0x38(0x18)
		bool bGenerateAtlas : 1; // 0x50:0(0x1)
		bool bGenerateFrames : 1; // 0x50:1(0x1)
		bool bExportFrames : 1; // 0x50:2(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		FString AtlasAssetPathFormat; // 0x58(0x10)
		FString FramesAssetPathFormat; // 0x68(0x10)
		FString FramesExportPathFormat; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraBakerOutputVolumeTexture");
			return ret;
		}
	};


	// Class Niagara.NiagaraBakerSettings
	// Inherited from UObject
	// Size: 0x1C8 (0x1F0 - 0x28)
	class UNiagaraBakerSettings : public UObject	
	{
	public:
		float StartSeconds; // 0x28(0x4)
		float DurationSeconds; // 0x2C(0x4)
		int32_t FramesPerSecond; // 0x30(0x4)
		bool bLockToSimulationFrameRate : 1; // 0x34:0(0x1)
		bool bPreviewLooping : 1; // 0x34:1(0x1)
		unsigned char UnknownData05_5[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		FIntPoint FramesPerDimension; // 0x38(0x8)
		TArray Outputs; // 0x40(0x10)
		TArray CameraSettings; // 0x50(0x10)
		int32_t CurrentCameraIndex; // 0x60(0x4)
		FName BakeQualityLevel; // 0x64(0x4)
		bool bRenderComponentOnly : 1; // 0x68:0(0x1)
		unsigned char UnknownData06_5[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		TArray OutputTextures; // 0x70(0x10)
		ENiagaraBakerViewMode CameraViewportMode; // 0x80(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FVector CameraViewportLocation; // 0x88(0xA8)
		FRotator CameraViewportRotation; // 0x130(0xA8)
		float CameraOrbitDistance; // 0x1D8(0x4)
		float CameraFOV; // 0x1DC(0x4)
		float CameraOrthoWidth; // 0x1E0(0x4)
		bool bUseCameraAspectRatio : 1; // 0x1E4:0(0x1)
		unsigned char UnknownData08_5[0x3]; // 0x1E5(0x3) UNKNOWN PROPERTY
		float CameraAspectRatio; // 0x1E8(0x4)
		unsigned char UnknownData09_7[0x4]; // 0x1EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraBakerSettings");
			return ret;
		}
	};


	// Class Niagara.NiagaraComponent
	// Inherited from UFXSystemComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x268 (0x730 - 0x4C8)
	class UNiagaraComponent : public UFXSystemComponent	
	{
	public:
		UNiagaraSystem Asset; // 0x4C8(0x8)
		ENiagaraTickBehavior TickBehavior; // 0x4D0(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x4D1(0x3) UNKNOWN PROPERTY
		int32_t RandomSeedOffset; // 0x4D4(0x4)
		FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x4D8(0xD8)
		bool bForceSolo : 1; // 0x5B0:0(0x1)
		bool bEnableGpuComputeDebug : 1; // 0x5B0:1(0x1)
		bool bOverrideWarmupSettings : 1; // 0x5B0:2(0x1)
		unsigned char UnknownData13_5[0x3]; // 0x5B1(0x3) UNKNOWN PROPERTY
		int32_t WarmupTickCount; // 0x5B4(0x4)
		float WarmupTickDelta; // 0x5B8(0x4)
		unsigned char UnknownData14_6[0x34]; // 0x5BC(0x34) UNKNOWN PROPERTY
		bool bAutoDestroy : 1; // 0x5F0:0(0x1)
		bool bRenderingEnabled : 1; // 0x5F0:1(0x1)
		bool bAutoManageAttachment : 1; // 0x5F0:2(0x1)
		bool bAutoAttachWeldSimulatedBodies : 1; // 0x5F0:3(0x1)
		unsigned char UnknownData15_5[0x3]; // 0x5F1(0x3) UNKNOWN PROPERTY
		float MaxTimeBeforeForceUpdateTransform; // 0x5F4(0x4)
		unsigned char UnknownData16_6[0x1]; // 0x5F8(0x1) UNKNOWN PROPERTY
		ENiagaraOcclusionQueryMode OcclusionQueryMode; // 0x5F9(0x1)
		unsigned char UnknownData17_6[0x6]; // 0x5FA(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSystemFinished; // 0x600(0x10)
		TWeakObjectPtr AutoAttachParent; // 0x610(0x8)
		FName AutoAttachSocketName; // 0x618(0x4)
		EAttachmentRule AutoAttachLocationRule; // 0x61C(0x1)
		EAttachmentRule AutoAttachRotationRule; // 0x61D(0x1)
		EAttachmentRule AutoAttachScaleRule; // 0x61E(0x1)
		unsigned char UnknownData18_6[0x9]; // 0x61F(0x9) UNKNOWN PROPERTY
		unsigned char UnknownBit19 : 1; // 0x628:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit20 : 1; // 0x628:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit21 : 1; // 0x628:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit22 : 1; // 0x628:3(0x1) UNKNOWN PROPERTY
		bool bAllowScalability : 1; // 0x628:4(0x1)
		unsigned char UnknownData23_5[0xEF]; // 0x629(0xEF) UNKNOWN PROPERTY
		UNiagaraSimCache SimCache; // 0x718(0x8)
		UNiagaraCullProxyComponent CullProxy; // 0x720(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraComponent");
			return ret;
		}

		void SetVariableVec4(FName InVariableName, FVector4& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145C8E78
		void SetVariableVec3(FName InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C8D98
		void SetVariableVec2(FName InVariableName, FVector2D InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C8CB8
		void SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget TextureRenderTarget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C8BD8
		void SetVariableTexture(FName InVariableName, UTexture Texture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C8AF8
		void SetVariableStaticMesh(FName InVariableName, UStaticMesh InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C8A18
		void SetVariableQuat(FName InVariableName, FQuat& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145C8938
		void SetVariablePosition(FName InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C8858
		void SetVariableObject(FName InVariableName, UObject Object); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C8778
		void SetVariableMatrix(FName InVariableName, FMatrix& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145C8698
		void SetVariableMaterial(FName InVariableName, UMaterialInterface Object); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C85B8
		void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145C84D8
		void SetVariableInt(FName InVariableName, int32_t InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C83F8
		void SetVariableFloat(FName InVariableName, float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C8318
		void SetVariableBool(FName InVariableName, bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C8238
		void SetVariableActor(FName InVariableName, AActor Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C8158
		void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C8078
		void SetSystemFixedBounds(FBox LocalBounds); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C7F98
		void SetSimCache(UNiagaraSimCache SimCache, bool bResetSystem); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C7EB8
		void SetSeekDelta(float InSeekDelta); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C7DD8
		void SetRenderingEnabled(bool bInRenderingEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C7CF8
		void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C7C18
		void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C7B38
		void SetPaused(bool bInPaused); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C7A58
		void SetOcclusionQueryMode(ENiagaraOcclusionQueryMode Mode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C7978
		void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145C7898
		void SetNiagaraVariableVec3(FString InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C77B8
		void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C76D8
		void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145C75F8
		void SetNiagaraVariablePosition(FString InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C7518
		void SetNiagaraVariableObject(FString InVariableName, UObject Object); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C7438
		void SetNiagaraVariableMatrix(FString InVariableName, FMatrix& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145C7358
		void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145C7278
		void SetNiagaraVariableInt(FString InVariableName, int32_t InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C7198
		void SetNiagaraVariableFloat(FString InVariableName, float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C70B8
		void SetNiagaraVariableBool(FString InVariableName, bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6FD8
		void SetNiagaraVariableActor(FString InVariableName, AActor Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6EF8
		void SetMaxSimTime(float InMaxTime); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6E18
		void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6D38
		void SetGpuComputeDebug(bool bEnableDebug); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6C58
		void SetForceSolo(bool bInForceSolo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6B78
		void SetForceLocalPlayerEffect(bool bIsPlayerEffect); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6A98
		void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145C69B8
		void SetDesiredAge(float InDesiredAge); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C68D8
		void SetCustomTimeDilation(float Dilation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C67F8
		void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6718
		void SetAutoDestroy(bool bInAutoDestroy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6638
		void SetAsset(UNiagaraSystem InAsset, bool bResetExistingOverrideParameters); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6558
		void SetAllowScalability(bool bAllow); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6478
		void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C6398
		void SeekToDesiredAge(float InDesiredAge); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C62B8
		void ResetSystem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C61D8
		void ReinitializeSystem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C60F8
		bool IsPaused(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C6018
		void InitForPerformanceBaseline(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C5F38
		ENiagaraTickBehavior GetTickBehavior(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5E58
		FBox GetSystemFixedBounds(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5D78
		UNiagaraSimCache GetSimCache(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5C98
		float GetSeekDelta(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5BB8
		int32_t GetRandomSeedOffset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5AD8
		bool GetPreviewLODDistanceEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C59F8
		float GetPreviewLODDistance(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5918
		ENiagaraOcclusionQueryMode GetOcclusionQueryMode(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5838
		float GetMaxSimTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5758
		bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5678
		bool GetForceSolo(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5598
		bool GetForceLocalPlayerEffect(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C54B8
		FBox GetEmitterFixedBounds(FName EmitterName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145C53D8
		float GetDesiredAge(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C52F8
		UNiagaraDataInterface GetDataInterface(FString Name); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C5218
		float GetCustomTimeDilation(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5138
		UNiagaraSystem GetAsset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C5058
		bool GetAllowScalability(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C4F78
		ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145C4E98
		void ClearSystemFixedBounds(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C4DB8
		void ClearSimCache(bool bResetSystem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145C4CD8
		void ClearEmitterFixedBounds(FName EmitterName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C4BF8
		void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C4B18
		void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145C4A38
	};


	// Class Niagara.NiagaraComponentPool
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UNiagaraComponentPool : public UObject	
	{
	public:
		TMap WorldParticleSystemPools; // 0x28(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraComponentPool");
			return ret;
		}
	};


	// Class Niagara.NiagaraRendererProperties
	// Inherited from UNiagaraMergeable -> UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UNiagaraRendererProperties : public UNiagaraMergeable	
	{
	public:
		FNiagaraPlatformSet Platforms; // 0x28(0x30)
		int32_t SortOrderHint; // 0x58(0x4)
		ENiagaraRendererMotionVectorSetting MotionVectorSetting; // 0x5C(0x4)
		FNiagaraVariableAttributeBinding RendererEnabledBinding; // 0x60(0x28)
		bool bIsEnabled; // 0x88(0x1)
		bool bAllowInCullProxies; // 0x89(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x8A(0x2) UNKNOWN PROPERTY
		FGuid OuterEmitterVersion; // 0x8C(0x10)
		unsigned char UnknownData03_7[0x14]; // 0x9C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraRendererProperties");
			return ret;
		}
	};


	// Class Niagara.NiagaraComponentRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0xD8 (0x188 - 0xB0)
	class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		UClass ComponentType; // 0xB0(0x8)
		uint32_t ComponentCountLimit; // 0xB8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding EnabledBinding; // 0xC0(0x28)
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0xE8(0x28)
		bool bAssignComponentsOnParticleID; // 0x110(0x1)
		bool bCreateComponentFirstParticleFrame; // 0x111(0x1)
		bool bOnlyActivateNewlyAquiredComponents; // 0x112(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x113(0x1) UNKNOWN PROPERTY
		int32_t RendererVisibility; // 0x114(0x4)
		USceneComponent TemplateComponent; // 0x118(0x8)
		TArray PropertyBindings; // 0x120(0x10)
		unsigned char UnknownData05_7[0x58]; // 0x130(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraComponentRendererProperties");
			return ret;
		}
	};


	// Class Niagara.NiagaraCullProxyComponent
	// Inherited from UNiagaraComponent -> UFXSystemComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x740 - 0x728)
	class UNiagaraCullProxyComponent : public UNiagaraComponent	
	{
	public:
		TArray Instances; // 0x728(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x738(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraCullProxyComponent");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataChannelLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelLibrary");
			return ret;
		}

		void WriteToNiagaraDataChannelSingle(UObject WorldContextObject, UNiagaraDataChannelAsset Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bVisibleToBlueprint, bool bVisibleToNiagaraCPU, bool bVisibleToNiagaraGPU); // Flags: Final|Native|Static|Public 0x7FF4145C93B8
		UNiagaraDataChannelWriter WriteToNiagaraDataChannel(UObject WorldContextObject, UNiagaraDataChannelAsset Channel, FNiagaraDataChannelSearchParameters SearchParams, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU, FString DebugSource); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145C92D8
		void ReadFromNiagaraDataChannelSingle(UObject WorldContextObject, UNiagaraDataChannelAsset Channel, int32_t Index, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame, ENiagartaDataChannelReadResult& ReadResult); // Flags: Final|Native|Static|Public|HasOutParms 0x7FF4145C91F8
		UNiagaraDataChannelReader ReadFromNiagaraDataChannel(UObject WorldContextObject, UNiagaraDataChannelAsset Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145C9118
		UNiagaraDataChannelHandler GetNiagaraDataChannel(UObject WorldContextObject, UNiagaraDataChannelAsset Channel); // Flags: Final|Native|Static|Public 0x7FF4145C9038
		int32_t GetDataChannelElementCount(UObject WorldContextObject, UNiagaraDataChannelAsset Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145C8F58
	};


	// Class Niagara.NiagaraDataInterface2DArrayTexture
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface	
	{
	public:
		UTexture Texture; // 0x38(0x8)
		FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterface2DArrayTexture");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArray
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		ENiagaraGpuSyncMode GpuSyncMode; // 0x48(0x4)
		int32_t MaxElements; // 0x4C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArray");
			return ret;
		}
	};


	// Class Niagara.NDIArraySimCacheData
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UNDIArraySimCacheData : public UObject	
	{
	public:
		TArray CpuFrameData; // 0x28(0x10)
		TArray GpuFrameData; // 0x38(0x10)
		TArray BufferData; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NDIArraySimCacheData");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayFloat
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray FloatData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayFloat");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayFloat2
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray InternalFloatData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayFloat2");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayFloat3
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray InternalFloatData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayFloat3");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayPosition
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray PositionData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayPosition");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayFloat4
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray InternalFloatData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayFloat4");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayColor
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray ColorData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayColor");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayQuat
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray InternalQuatData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayQuat");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayMatrix
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayMatrix : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray InternalMatrixData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayMatrix");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary");
			return ret;
		}

		void SetNiagaraArrayVectorValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145CBA38
		void SetNiagaraArrayVector4Value(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, FVector4& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145CB958
		void SetNiagaraArrayVector4(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CB878
		void SetNiagaraArrayVector2DValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, FVector2D& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145CB798
		void SetNiagaraArrayVector2D(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CB6B8
		void SetNiagaraArrayVector(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CB5D8
		void SetNiagaraArrayUInt8Value(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CB4F8
		void SetNiagaraArrayUInt8(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CB418
		void SetNiagaraArrayQuatValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, FQuat& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145CB338
		void SetNiagaraArrayQuat(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CB258
		void SetNiagaraArrayPositionValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145CB178
		void SetNiagaraArrayPosition(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CB098
		void SetNiagaraArrayMatrixValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, FMatrix& Value, bool bSizeToFit, bool bApplyLWCRebase); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145CAFB8
		void SetNiagaraArrayMatrix(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData, bool bApplyLWCRebase); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CAED8
		void SetNiagaraArrayInt32Value(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CADF8
		void SetNiagaraArrayInt32(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CAD18
		void SetNiagaraArrayFloatValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CAC38
		void SetNiagaraArrayFloat(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CAB58
		void SetNiagaraArrayColorValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, FLinearColor& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145CAA78
		void SetNiagaraArrayColor(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CA998
		void SetNiagaraArrayBoolValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CA8B8
		void SetNiagaraArrayBool(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CA7D8
		FVector GetNiagaraArrayVectorValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145CA6F8
		FVector4 GetNiagaraArrayVector4Value(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145CA618
		TArray GetNiagaraArrayVector4(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CA538
		FVector2D GetNiagaraArrayVector2DValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145CA458
		TArray GetNiagaraArrayVector2D(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CA378
		TArray GetNiagaraArrayVector(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CA298
		int32_t GetNiagaraArrayUInt8Value(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CA1B8
		TArray GetNiagaraArrayUInt8(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CA0D8
		FQuat GetNiagaraArrayQuatValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145C9FF8
		TArray GetNiagaraArrayQuat(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C9F18
		FVector GetNiagaraArrayPositionValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145C9E38
		TArray GetNiagaraArrayPosition(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C9D58
		FMatrix GetNiagaraArrayMatrixValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index, bool bApplyLWCRebase); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145C9C78
		TArray GetNiagaraArrayMatrix(UNiagaraComponent NiagaraSystem, FName OverrideName, bool bApplyLWCRebase); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C9B98
		int32_t GetNiagaraArrayInt32Value(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C9AB8
		TArray GetNiagaraArrayInt32(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C99D8
		float GetNiagaraArrayFloatValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C98F8
		TArray GetNiagaraArrayFloat(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C9818
		FLinearColor GetNiagaraArrayColorValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145C9738
		TArray GetNiagaraArrayColor(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C9658
		bool GetNiagaraArrayBoolValue(UNiagaraComponent NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C9578
		TArray GetNiagaraArrayBool(UNiagaraComponent NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145C9498
	};


	// Class Niagara.NiagaraDataInterfaceArrayInt32
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray IntData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayInt32");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayUInt8
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray InternalIntData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayUInt8");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayBool
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray BoolData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayBool");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray IntData; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceArrayNiagaraID");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceAudioSubmix
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface	
	{
	public:
		USoundSubmix Submix; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceAudioSubmix");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface	
	{
	public:
		USoundSubmix Submix; // 0x38(0x8)
		int32_t Resolution; // 0x40(0x4)
		float ScopeInMilliseconds; // 0x44(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceAudioOscilloscope");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceAudioPlayerSettings
	// Inherited from UObject
	// Size: 0x3E8 (0x410 - 0x28)
	class UNiagaraDataInterfaceAudioPlayerSettings : public UObject	
	{
	public:
		bool bOverrideConcurrency; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		USoundConcurrency Concurrency; // 0x30(0x8)
		bool bOverrideAttenuationSettings; // 0x38(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FSoundAttenuationSettings AttenuationSettings; // 0x40(0x3D0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceAudioPlayerSettings");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceAudioPlayer
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x50 (0x88 - 0x38)
	class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface	
	{
	public:
		USoundBase SoundToPlay; // 0x38(0x8)
		USoundAttenuation Attenuation; // 0x40(0x8)
		USoundConcurrency Concurrency; // 0x48(0x8)
		TArray ParameterNames; // 0x50(0x10)
		FNiagaraUserParameterBinding ConfigurationUserParameter; // 0x60(0x18)
		bool bLimitPlaysPerTick; // 0x78(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		int32_t MaxPlaysPerTick; // 0x7C(0x4)
		bool bStopWhenComponentIsDestroyed; // 0x80(0x1)
		bool bAllowLoopingOneShotSounds; // 0x81(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x82(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceAudioPlayer");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceAudioSpectrum
	// Inherited from UNiagaraDataInterfaceAudioSubmix -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix	
	{
	public:
		int32_t Resolution; // 0x40(0x4)
		float MinimumFrequency; // 0x44(0x4)
		float MaximumFrequency; // 0x48(0x4)
		float NoiseFloorDb; // 0x4C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceAudioSpectrum");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceCamera
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface	
	{
	public:
		int32_t PlayerControllerIndex; // 0x38(0x4)
		bool bRequireCurrentFrameData; // 0x3C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceCamera");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceCollisionQuery
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceCollisionQuery");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceCurveBase
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x38 (0x70 - 0x38)
	class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface	
	{
	public:
		TArray ShaderLUT; // 0x38(0x10)
		float LUTMinTime; // 0x48(0x4)
		float LUTMaxTime; // 0x4C(0x4)
		float LUTInvTimeRange; // 0x50(0x4)
		float LUTNumSamplesMinusOne; // 0x54(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x58(0x4) UNKNOWN PROPERTY
		bool bUseLUT : 1; // 0x5C:0(0x1)
		bool bExposeCurve : 1; // 0x5C:1(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		FName ExposedName; // 0x60(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		UTexture2D ExposedTexture; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceCurveBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceColorCurve
	// Inherited from UNiagaraDataInterfaceCurveBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x200 (0x270 - 0x70)
	class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase	
	{
	public:
		FRichCurve RedCurve; // 0x70(0x80)
		FRichCurve GreenCurve; // 0xF0(0x80)
		FRichCurve BlueCurve; // 0x170(0x80)
		FRichCurve AlphaCurve; // 0x1F0(0x80)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceColorCurve");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceCubeTexture
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface	
	{
	public:
		UTexture Texture; // 0x38(0x8)
		FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceCubeTexture");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceCurlNoise
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface	
	{
	public:
		uint32_t Seed; // 0x38(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x3C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceCurlNoise");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceCurve
	// Inherited from UNiagaraDataInterfaceCurveBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x80 (0xF0 - 0x70)
	class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase	
	{
	public:
		FRichCurve Curve; // 0x70(0x80)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceCurve");
			return ret;
		}
	};


	// Class Niagara.NiagaraParticleCallbackHandler
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraParticleCallbackHandler : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraParticleCallbackHandler");
			return ret;
		}

		void ReceiveParticleData(TArray& Data, UNiagaraSystem NiagaraSystem, FVector& SimulationPositionOffset); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x7FF4145CBB18
	};


	// Class Niagara.NiagaraDataInterfaceExport
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UNiagaraDataInterfaceExport : public UNiagaraDataInterface	
	{
	public:
		FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38(0x18)
		ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x50(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		int32_t GPUAllocationFixedSize; // 0x54(0x4)
		float GPUAllocationPerParticleSize; // 0x58(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceExport");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceGrid2D
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase	
	{
	public:
		bool ClearBeforeNonIterationStage; // 0x38(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t NumCellsX; // 0x3C(0x4)
		int32_t NumCellsY; // 0x40(0x4)
		int32_t NumCellsMaxAxis; // 0x44(0x4)
		int32_t NumAttributes; // 0x48(0x4)
		bool SetGridFromMaxAxis; // 0x4C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		FVector2D WorldBBoxSize; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceGrid2D");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceGrid2DCollection
	// Inherited from UNiagaraDataInterfaceGrid2D -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0xC0 (0x120 - 0x60)
	class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D	
	{
	public:
		FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x60(0x18)
		ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x78(0x1)
		bool bOverrideFormat : 1; // 0x79:0(0x1)
		unsigned char UnknownData01_5[0x56]; // 0x7A(0x56) UNKNOWN PROPERTY
		TMap ManagedRenderTargets; // 0xD0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceGrid2DCollection");
			return ret;
		}

		void GetTextureSize(UNiagaraComponent Component, int32_t& SizeX, int32_t& SizeY); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145CBE98
		void GetRawTextureSize(UNiagaraComponent Component, int32_t& SizeX, int32_t& SizeY); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145CBDB8
		bool FillTexture2D(UNiagaraComponent Component, UTextureRenderTarget2D Dest, int32_t AttributeIndex); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145CBCD8
		bool FillRawTexture2D(UNiagaraComponent Component, UTextureRenderTarget2D Dest, int32_t& TilesX, int32_t& TilesY); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145CBBF8
	};


	// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
	// Inherited from UNiagaraDataInterfaceGrid2DCollection -> UNiagaraDataInterfaceGrid2D -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x140 - 0x120)
	class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection	
	{
	public:
		FString EmitterName; // 0x120(0x10)
		FString DIName; // 0x130(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceGrid3D
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x38 (0x70 - 0x38)
	class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase	
	{
	public:
		bool ClearBeforeNonIterationStage; // 0x38(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FIntVector NumCells; // 0x3C(0xC)
		float CellSize; // 0x48(0x4)
		int32_t NumCellsMaxAxis; // 0x4C(0x4)
		ESetResolutionMethod SetResolutionMethod; // 0x50(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FVector WorldBBoxSize; // 0x58(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceGrid3D");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceGrid3DCollection
	// Inherited from UNiagaraDataInterfaceGrid3D -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x78 (0xE8 - 0x70)
	class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D	
	{
	public:
		int32_t NumAttributes; // 0x70(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x78(0x18)
		ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x90(0x1)
		bool bOverrideFormat : 1; // 0x91:0(0x1)
		unsigned char UnknownData03_7[0x56]; // 0x92(0x56) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceGrid3DCollection");
			return ret;
		}

		void GetTextureSize(UNiagaraComponent Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145CC218
		void GetRawTextureSize(UNiagaraComponent Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145CC138
		bool FillVolumeTexture(UNiagaraComponent Component, UVolumeTexture Dest, int32_t AttributeIndex); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145CC058
		bool FillRawVolumeTexture(UNiagaraComponent Component, UVolumeTexture Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145CBF78
	};


	// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
	// Inherited from UNiagaraDataInterfaceGrid3DCollection -> UNiagaraDataInterfaceGrid3D -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x108 - 0xE8)
	class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection	
	{
	public:
		FString EmitterName; // 0xE8(0x10)
		FString DIName; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceGrid3DCollectionReader");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase	
	{
	public:
		FIntPoint Size; // 0x38(0x8)
		FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceLandscape
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x30 (0x68 - 0x38)
	class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		AActor SourceLandscape; // 0x40(0x8)
		ENDILandscape_SourceMode SourceMode; // 0x48(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		TArray PhysicalMaterials; // 0x50(0x10)
		bool bVirtualTexturesSupported; // 0x60(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceLandscape");
			return ret;
		}
	};


	// Class Niagara.NDILandscapeSimCacheData
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNDILandscapeSimCacheData : public UObject	
	{
	public:
		TArray HeightFieldTextures; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NDILandscapeSimCacheData");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface	
	{
	public:
		UNiagaraMeshRendererProperties MeshRenderer; // 0x38(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceMeshRendererInfo");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
	// Inherited from UNiagaraDataInterfaceGrid3D -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D	
	{
	public:
		uint32_t MaxNeighborsPerCell; // 0x70(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceNeighborGrid3D");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceOcclusion
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceOcclusion");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceParticleRead
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase	
	{
	public:
		FNiagaraDataInterfaceEmitterBinding EmitterBinding; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceParticleRead");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfacePlatformSet
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x30 (0x68 - 0x38)
	class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface	
	{
	public:
		FNiagaraPlatformSet Platforms; // 0x38(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfacePlatformSet");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
	// Inherited from UNiagaraDataInterfaceGrid3D -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D	
	{
	public:
		int32_t NumAttributes; // 0x70(0x4)
		float Precision; // 0x74(0x4)
		int32_t ResetValue; // 0x78(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceRasterizationGrid3D");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceRenderTarget2D
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x80 (0xB8 - 0x38)
	class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FIntPoint Size; // 0x40(0x8)
		ENiagaraMipMapGeneration MipMapGeneration; // 0x48(0x1)
		ENiagaraMipMapGenerationType MipMapGenerationType; // 0x49(0x1)
		TEnumAsByte OverrideRenderTargetFormat; // 0x4A(0x1)
		TEnumAsByte OverrideRenderTargetFilter; // 0x4B(0x1)
		bool bInheritUserParameterSettings : 1; // 0x4C:0(0x1)
		bool bOverrideFormat : 1; // 0x4C:1(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x50(0x18)
		unsigned char UnknownData05_7[0x50]; // 0x68(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceRenderTarget2D");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase	
	{
	public:
		FIntVector Size; // 0x38(0xC)
		TEnumAsByte OverrideRenderTargetFormat; // 0x44(0x1)
		TEnumAsByte OverrideRenderTargetFilter; // 0x45(0x1)
		bool bInheritUserParameterSettings : 1; // 0x46:0(0x1)
		bool bOverrideFormat : 1; // 0x46:1(0x1)
		unsigned char UnknownData01_5[0x1]; // 0x47(0x1) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x48(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceRenderTargetCube
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase	
	{
	public:
		int32_t Size; // 0x38(0x4)
		TEnumAsByte OverrideRenderTargetFormat; // 0x3C(0x1)
		TEnumAsByte OverrideRenderTargetFilter; // 0x3D(0x1)
		bool bInheritUserParameterSettings : 1; // 0x3E:0(0x1)
		bool bOverrideFormat : 1; // 0x3E:1(0x1)
		unsigned char UnknownData01_5[0x1]; // 0x3F(0x1) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceRenderTargetCube");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x30 (0x68 - 0x38)
	class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FIntVector Size; // 0x40(0xC)
		TEnumAsByte OverrideRenderTargetFormat; // 0x4C(0x1)
		TEnumAsByte OverrideRenderTargetFilter; // 0x4D(0x1)
		bool bInheritUserParameterSettings : 1; // 0x4E:0(0x1)
		bool bOverrideFormat : 1; // 0x4E:1(0x1)
		unsigned char UnknownData03_5[0x1]; // 0x4F(0x1) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x50(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceRenderTargetVolume");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x40 (0x78 - 0x38)
	class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface	
	{
	public:
		TArray ActorTags; // 0x38(0x10)
		TArray ComponentTags; // 0x48(0x10)
		TArray SourceActors; // 0x58(0x10)
		bool OnlyUseMoveable; // 0x68(0x1)
		bool UseComplexCollisions; // 0x69(0x1)
		bool bFilterByObjectType; // 0x6A(0x1)
		bool GlobalSearchAllowed; // 0x6B(0x1)
		bool GlobalSearchForced; // 0x6C(0x1)
		bool GlobalSearchFallback_Unscripted; // 0x6D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
		int32_t MaxNumPrimitives; // 0x70(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery");
			return ret;
		}
	};


	// Class Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary");
			return ret;
		}

		void SetSourceActors(UNiagaraComponent NiagaraSystem, FName OverrideName, TArray& SourceActors); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CC2F8
	};


	// Class Niagara.NiagaraDataInterfaceSkeletalMesh
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0xB8 (0xF0 - 0x38)
	class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface	
	{
	public:
		ENDISkeletalMesh_SourceMode SourceMode; // 0x38(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		USkeletalMesh DefaultMesh; // 0x40(0x8)
		TWeakObjectPtr SoftSourceActor; // 0x48(0x20)
		TArray ComponentTags; // 0x68(0x10)
		USkeletalMeshComponent SourceComponent; // 0x78(0x8)
		FNiagaraUserParameterBinding MeshUserParameter; // 0x80(0x18)
		ENDISkeletalMesh_SkinningMode SkinningMode; // 0x98(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		TArray SamplingRegions; // 0xA0(0x10)
		int32_t WholeMeshLOD; // 0xB0(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		TArray FilteredBones; // 0xB8(0x10)
		TArray FilteredSockets; // 0xC8(0x10)
		FName ExcludeBoneName; // 0xD8(0x4)
		bool bExcludeBone : 1; // 0xDC:0(0x1)
		unsigned char UnknownData08_5[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		int32_t UvSetIndex; // 0xE0(0x4)
		bool bRequireCurrentFrameData; // 0xE4(0x1)
		bool bReadDeformedGeometry; // 0xE5(0x1)
		unsigned char UnknownData09_7[0xA]; // 0xE6(0xA) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSkeletalMesh");
			return ret;
		}

		void OnSourceEndPlay(AActor InSource, TEnumAsByte Reason); // Flags: Final|RequiredAPI|Native|Protected 0x7FF4145CC3D8
	};


	// Class Niagara.NiagaraDataInterfaceSparseVolumeTexture
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UNiagaraDataInterfaceSparseVolumeTexture : public UNiagaraDataInterface	
	{
	public:
		USparseVolumeTexture SparseVolumeTexture; // 0x38(0x8)
		FNiagaraUserParameterBinding SparseVolumeTextureUserParameter; // 0x40(0x18)
		bool BlockingStreamingRequests; // 0x58(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSparseVolumeTexture");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceSpline
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x90 (0xC8 - 0x38)
	class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface	
	{
	public:
		TWeakObjectPtr SoftSourceActor; // 0x38(0x20)
		FNiagaraUserParameterBinding SplineUserParameter; // 0x58(0x18)
		bool bUseLUT; // 0x70(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		int32_t NumLUTSteps; // 0x74(0x4)
		unsigned char UnknownData03_7[0x50]; // 0x78(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSpline");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceSpriteRendererInfo
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface	
	{
	public:
		UNiagaraSpriteRendererProperties SpriteRenderer; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSpriteRendererInfo");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceTexture
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface	
	{
	public:
		UTexture Texture; // 0x38(0x8)
		FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceTexture");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceVector2DCurve
	// Inherited from UNiagaraDataInterfaceCurveBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x100 (0x170 - 0x70)
	class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase	
	{
	public:
		FRichCurve XCurve; // 0x70(0x80)
		FRichCurve YCurve; // 0xF0(0x80)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceVector2DCurve");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceVector4Curve
	// Inherited from UNiagaraDataInterfaceCurveBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x200 (0x270 - 0x70)
	class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase	
	{
	public:
		FRichCurve XCurve; // 0x70(0x80)
		FRichCurve YCurve; // 0xF0(0x80)
		FRichCurve ZCurve; // 0x170(0x80)
		FRichCurve WCurve; // 0x1F0(0x80)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceVector4Curve");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceVectorCurve
	// Inherited from UNiagaraDataInterfaceCurveBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x180 (0x1F0 - 0x70)
	class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase	
	{
	public:
		FRichCurve XCurve; // 0x70(0x80)
		FRichCurve YCurve; // 0xF0(0x80)
		FRichCurve ZCurve; // 0x170(0x80)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceVectorCurve");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceVectorField
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface	
	{
	public:
		UVectorField Field; // 0x38(0x8)
		bool bTileX; // 0x40(0x1)
		bool bTileY; // 0x41(0x1)
		bool bTileZ; // 0x42(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x43(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceVectorField");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceVolumeCache
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x58 (0x90 - 0x38)
	class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface	
	{
	public:
		UVolumeCache VolumeCache; // 0x38(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceVolumeCache");
			return ret;
		}
	};


	// Class Niagara.NiagaraDataInterfaceVolumeTexture
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface	
	{
	public:
		UTexture Texture; // 0x38(0x8)
		FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceVolumeTexture");
			return ret;
		}
	};


	// Class Niagara.NiagaraDebugHUDSettings
	// Inherited from UObject
	// Size: 0x260 (0x288 - 0x28)
	class UNiagaraDebugHUDSettings : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		FNiagaraDebugHUDSettingsData Data; // 0x48(0x240)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDebugHUDSettings");
			return ret;
		}
	};


	// Class Niagara.NiagaraDecalRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0x1E8 (0x298 - 0xB0)
	class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		UMaterialInterface Material; // 0xB0(0x8)
		FNiagaraParameterBinding MaterialParameterBinding; // 0xB8(0x8)
		ENiagaraRendererSourceDataMode SourceMode; // 0xC0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		int32_t RendererVisibility; // 0xC4(0x4)
		float DecalScreenSizeFade; // 0xC8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding PositionBinding; // 0xD0(0x28)
		FNiagaraVariableAttributeBinding DecalOrientationBinding; // 0xF8(0x28)
		FNiagaraVariableAttributeBinding DecalSizeBinding; // 0x120(0x28)
		FNiagaraVariableAttributeBinding DecalFadeBinding; // 0x148(0x28)
		FNiagaraVariableAttributeBinding DecalSortOrderBinding; // 0x170(0x28)
		FNiagaraVariableAttributeBinding DecalColorBinding; // 0x198(0x28)
		FNiagaraVariableAttributeBinding DecalVisibleBinding; // 0x1C0(0x28)
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x1E8(0x28)
		FNiagaraRendererMaterialParameters MaterialParameters; // 0x210(0x50)
		unsigned char UnknownData05_7[0x38]; // 0x260(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDecalRendererProperties");
			return ret;
		}
	};


	// Class Niagara.NiagaraEditorDataBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraEditorDataBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraEditorDataBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraEditorParametersAdapterBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraEditorParametersAdapterBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraEditorParametersAdapterBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraSignificanceHandler
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraSignificanceHandler : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSignificanceHandler");
			return ret;
		}
	};


	// Class Niagara.NiagaraSignificanceHandlerDistance
	// Inherited from UNiagaraSignificanceHandler -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSignificanceHandlerDistance");
			return ret;
		}
	};


	// Class Niagara.NiagaraSignificanceHandlerAge
	// Inherited from UNiagaraSignificanceHandler -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSignificanceHandlerAge");
			return ret;
		}
	};


	// Class Niagara.NiagaraEffectType
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UNiagaraEffectType : public UObject	
	{
	public:
		bool bAllowCullingForLocalPlayers; // 0x28(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x2C(0x4)
		ENiagaraCullReaction CullReaction; // 0x30(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UNiagaraSignificanceHandler SignificanceHandler; // 0x38(0x8)
		TArray DetailLevelScalabilitySettings; // 0x40(0x10)
		FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x50(0x10)
		FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x60(0x10)
		unsigned char UnknownData05_6[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
		UNiagaraBaselineController PerformanceBaselineController; // 0x78(0x8)
		FNiagaraPerfBaselineStats PerfBaselineStats; // 0x80(0x10)
		FGuid PerfBaselineVersion; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraEffectType");
			return ret;
		}
	};


	// Class Niagara.NiagaraEmitter
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UNiagaraEmitter : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FGuid ExposedVersion; // 0x30(0x10)
		bool bVersioningEnabled; // 0x40(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		TArray VersionData; // 0x48(0x10)
		unsigned char UnknownData05_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FString UniqueEmitterName; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraEmitter");
			return ret;
		}
	};


	// Class Niagara.NiagaraEventReceiverEmitterAction
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraEventReceiverEmitterAction : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraEventReceiverEmitterAction");
			return ret;
		}
	};


	// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
	// Inherited from UNiagaraEventReceiverEmitterAction -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction	
	{
	public:
		uint32_t NumParticles; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
			return ret;
		}
	};


	// Class Niagara.NiagaraFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraFunctionLibrary");
			return ret;
		}

		UNiagaraComponent SpawnSystemAttachedWithParams(FFXSystemSpawnParameters& SpawnParams); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CD478
		UNiagaraComponent SpawnSystemAttached(UNiagaraSystem SystemTemplate, USceneComponent AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145CD398
		UNiagaraComponent SpawnSystemAtLocationWithParams(FFXSystemSpawnParameters& SpawnParams); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CD2B8
		UNiagaraComponent SpawnSystemAtLocation(UObject WorldContextObject, UNiagaraSystem SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145CD1D8
		void SetVolumeTextureObject(UNiagaraComponent NiagaraSystem, FString OverrideName, UVolumeTexture Texture); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CD0F8
		void SetTextureObject(UNiagaraComponent NiagaraSystem, FString OverrideName, UTexture Texture); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CD018
		void SetTexture2DArrayObject(UNiagaraComponent NiagaraSystem, FString OverrideName, UTexture2DArray Texture); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CCF38
		void SetSkeletalMeshDataInterfaceSamplingRegions(UNiagaraComponent NiagaraSystem, FString OverrideName, TArray& SamplingRegions); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CCE58
		void SetSkeletalMeshDataInterfaceFilteredSockets(UNiagaraComponent NiagaraSystem, FString OverrideName, TArray& FilteredSockets); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CCD78
		void SetSkeletalMeshDataInterfaceFilteredBones(UNiagaraComponent NiagaraSystem, FString OverrideName, TArray& FilteredBones); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145CCC98
		void SetSceneCapture2DDataInterfaceManagedMode(UNiagaraComponent NiagaraSystem, FName& DIName, TEnumAsByte ManagedCaptureSource, FIntPoint ManagedTextureSize, TEnumAsByte ManagedTextureFormat, TEnumAsByte ManagedProjectionType, float ManagedFOVAngle, float ManagedOrthoWidth, bool bManagedCaptureEveryFrame, bool bManagedCaptureOnMovement, TArray& ShowOnlyActors); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145CCBB8
		void SetComponentNiagaraGPURayTracedCollisionGroup(UObject WorldContextObject, UPrimitiveComponent Primitive, int32_t CollisionGroup); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CCAD8
		void SetActorNiagaraGPURayTracedCollisionGroup(UObject WorldContextObject, AActor Actor, int32_t CollisionGroup); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CC9F8
		void ReleaseNiagaraGPURayTracedCollisionGroup(UObject WorldContextObject, int32_t CollisionGroup); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CC918
		void OverrideSystemUserVariableStaticMeshComponent(UNiagaraComponent NiagaraSystem, FString OverrideName, UStaticMeshComponent StaticMeshComponent); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CC838
		void OverrideSystemUserVariableStaticMesh(UNiagaraComponent NiagaraSystem, FString OverrideName, UStaticMesh StaticMesh); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CC758
		void OverrideSystemUserVariableSkeletalMeshComponent(UNiagaraComponent NiagaraSystem, FString OverrideName, USkeletalMeshComponent SkeletalMeshComponent); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CC678
		UNiagaraParameterCollectionInstance GetNiagaraParameterCollection(UObject WorldContextObject, UNiagaraParameterCollection Collection); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CC598
		int32_t AcquireNiagaraGPURayTracedCollisionGroup(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145CC4B8
	};


	// Class Niagara.NiagaraLensEffectBase
	// Inherited from ANiagaraActor -> AActor -> UObject
	// Size: 0x90 (0x330 - 0x2A0)
	class ANiagaraLensEffectBase : public ANiagaraActor	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x2A0(0x10) UNKNOWN PROPERTY
		FTransform DesiredRelativeTransform; // 0x2B0(0x60)
		float BaseAuthoredFOV; // 0x310(0x4)
		bool bAllowMultipleInstances : 1; // 0x314:0(0x1)
		bool bResetWhenRetriggered : 1; // 0x314:1(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x315(0x3) UNKNOWN PROPERTY
		TArray EmittersToTreatAsSame; // 0x318(0x10)
		APlayerCameraManager OwningCameraManager; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraLensEffectBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraLightRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0x1D8 (0x288 - 0xB0)
	class UNiagaraLightRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		ENiagaraRendererSourceDataMode SourceMode; // 0xB0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		bool bUseInverseSquaredFalloff : 1; // 0xB4:0(0x1)
		bool bAffectsTranslucency : 1; // 0xB4:1(0x1)
		bool bAlphaScalesBrightness : 1; // 0xB4:2(0x1)
		bool bOverrideInverseExposureBlend : 1; // 0xB4:3(0x1)
		unsigned char UnknownData05_5[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		float RadiusScale; // 0xB8(0x4)
		float DefaultExponent; // 0xBC(0x4)
		float SpecularScale; // 0xC0(0x4)
		float DiffuseScale; // 0xC4(0x4)
		FVector3f ColorAdd; // 0xC8(0xC)
		float InverseExposureBlend; // 0xD4(0x4)
		int32_t RendererVisibility; // 0xD8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0xE0(0x28)
		FNiagaraVariableAttributeBinding LightExponentBinding; // 0x108(0x28)
		FNiagaraVariableAttributeBinding PositionBinding; // 0x130(0x28)
		FNiagaraVariableAttributeBinding ColorBinding; // 0x158(0x28)
		FNiagaraVariableAttributeBinding RadiusBinding; // 0x180(0x28)
		FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x1A8(0x28)
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x1D0(0x28)
		FNiagaraVariableAttributeBinding SpecularScaleBinding; // 0x1F8(0x28)
		FNiagaraVariableAttributeBinding DiffuseScaleBinding; // 0x220(0x28)
		unsigned char UnknownData07_7[0x40]; // 0x248(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraLightRendererProperties");
			return ret;
		}
	};


	// Class Niagara.NiagaraMeshRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0x480 (0x530 - 0xB0)
	class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		TArray Meshes; // 0xB0(0x10)
		ENiagaraRendererSourceDataMode SourceMode; // 0xC0(0x1)
		ENiagaraSortMode SortMode; // 0xC1(0x1)
		ENiagaraRendererSortPrecision SortPrecision; // 0xC2(0x1)
		ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency; // 0xC3(0x1)
		bool bOverrideMaterials : 1; // 0xC4:0(0x1)
		bool bUseHeterogeneousVolumes : 1; // 0xC4:1(0x1)
		bool bSortOnlyWhenTranslucent : 1; // 0xC4:2(0x1)
		bool bSubImageBlend : 1; // 0xC4:3(0x1)
		bool bEnableFrustumCulling : 1; // 0xC4:4(0x1)
		bool bEnableCameraDistanceCulling : 1; // 0xC4:5(0x1)
		bool bEnableMeshFlipbook : 1; // 0xC4:6(0x1)
		bool bLockedAxisEnable : 1; // 0xC4:7(0x1)
		unsigned char UnknownData03_3[0x2]; // 0xC6(0x2) UNKNOWN PROPERTY
		bool bCastShadows : 1; // 0xC8:0(0x1)
		unsigned char UnknownData04_5[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		TArray OverrideMaterials; // 0xD0(0x10)
		unsigned char UnknownData05_7[0x450]; // 0xE0(0x450) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraMeshRendererProperties");
			return ret;
		}
	};


	// Class Niagara.NiagaraParameterCollectionInstance
	// Inherited from UObject
	// Size: 0xD0 (0xF8 - 0x28)
	class UNiagaraParameterCollectionInstance : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xD0]; // 0x28(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraParameterCollectionInstance");
			return ret;
		}

		void SetVectorParameter(FString InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145EE278
		void SetVector4Parameter(FString InVariableName, FVector4& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145EE198
		void SetVector2DParameter(FString InVariableName, FVector2D InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145EE0B8
		void SetQuatParameter(FString InVariableName, FQuat& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145EDFD8
		void SetIntParameter(FString InVariableName, int32_t InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145EDEF8
		void SetFloatParameter(FString InVariableName, float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145EDE18
		void SetColorParameter(FString InVariableName, FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145EDD38
		void SetBoolParameter(FString InVariableName, bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145EDC58
		FVector GetVectorParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145EDB78
		FVector4 GetVector4Parameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145EDA98
		FVector2D GetVector2DParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145ED9B8
		FQuat GetQuatParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145ED8D8
		int32_t GetIntParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145ED7F8
		float GetFloatParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145ED718
		FLinearColor GetColorParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145ED638
		bool GetBoolParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145ED558
	};


	// Class Niagara.NiagaraParameterCollection
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UNiagaraParameterCollection : public UObject	
	{
	public:
		FName NameSpace; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray Parameters; // 0x30(0x10)
		UMaterialParameterCollection SourceMaterialCollection; // 0x40(0x8)
		UNiagaraParameterCollectionInstance DefaultInstance; // 0x48(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x50(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraParameterCollection");
			return ret;
		}
	};


	// Class Niagara.NiagaraBaselineController
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UNiagaraBaselineController : public UObject	
	{
	public:
		float TestDuration; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UNiagaraEffectType EffectType; // 0x30(0x8)
		ANiagaraPerfBaselineActor Owner; // 0x38(0x8)
		TWeakObjectPtr System; // 0x40(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraBaselineController");
			return ret;
		}

		bool OnTickTest(); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent 0x7FF4145EE6D8
		void OnOwnerTick(float DeltaTime); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent 0x7FF4145EE5F8
		void OnEndTest(FNiagaraPerfBaselineStats Stats); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent 0x7FF4145EE518
		void OnBeginTest(); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent 0x7FF4145EE438
		UNiagaraSystem GetSystem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145EE358
	};


	// Class Niagara.NiagaraBaselineController_Basic
	// Inherited from UNiagaraBaselineController -> UObject
	// Size: 0x18 (0x78 - 0x60)
	class UNiagaraBaselineController_Basic : public UNiagaraBaselineController	
	{
	public:
		int32_t NumInstances; // 0x60(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		TArray SpawnedComponents; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraBaselineController_Basic");
			return ret;
		}
	};


	// Class Niagara.NiagaraPerfBaselineActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ANiagaraPerfBaselineActor : public AActor	
	{
	public:
		UNiagaraBaselineController Controller; // 0x290(0x8)
		UTextRenderComponent Label; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPerfBaselineActor");
			return ret;
		}
	};


	// Class Niagara.NiagaraPrecompileContainer
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UNiagaraPrecompileContainer : public UObject	
	{
	public:
		TArray Scripts; // 0x28(0x10)
		UNiagaraSystem System; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPrecompileContainer");
			return ret;
		}
	};


	// Class Niagara.NiagaraPreviewBase
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class ANiagaraPreviewBase : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewBase");
			return ret;
		}

		void SetSystem(UNiagaraSystem InSystem); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4145EE898
		void SetLabelText(FText& InXAxisText, FText& InYAxisText); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF4145EE7B8
	};


	// Class Niagara.NiagaraPreviewAxis
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraPreviewAxis : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewAxis");
			return ret;
		}

		int32_t Num(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4145EEA58
		void ApplyToPreview(UNiagaraComponent PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4145EE978
	};


	// Class Niagara.NiagaraPreviewAxis_InterpParamBase
	// Inherited from UNiagaraPreviewAxis -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis	
	{
	public:
		FName Param; // 0x28(0x4)
		int32_t Count; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewAxis_InterpParamBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
	// Inherited from UNiagaraPreviewAxis_InterpParamBase -> UNiagaraPreviewAxis -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase	
	{
	public:
		int32_t Min; // 0x30(0x4)
		int32_t Max; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewAxis_InterpParamInt32");
			return ret;
		}
	};


	// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
	// Inherited from UNiagaraPreviewAxis_InterpParamBase -> UNiagaraPreviewAxis -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase	
	{
	public:
		float Min; // 0x30(0x4)
		float Max; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewAxis_InterpParamFloat");
			return ret;
		}
	};


	// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
	// Inherited from UNiagaraPreviewAxis_InterpParamBase -> UNiagaraPreviewAxis -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase	
	{
	public:
		FVector2D Min; // 0x30(0x10)
		FVector2D Max; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D");
			return ret;
		}
	};


	// Class Niagara.NiagaraPreviewAxis_InterpParamVector
	// Inherited from UNiagaraPreviewAxis_InterpParamBase -> UNiagaraPreviewAxis -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase	
	{
	public:
		FVector Min; // 0x30(0x18)
		FVector Max; // 0x48(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewAxis_InterpParamVector");
			return ret;
		}
	};


	// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
	// Inherited from UNiagaraPreviewAxis_InterpParamBase -> UNiagaraPreviewAxis -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase	
	{
	public:
		FVector4 Min; // 0x30(0x20)
		FVector4 Max; // 0x50(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewAxis_InterpParamVector4");
			return ret;
		}
	};


	// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
	// Inherited from UNiagaraPreviewAxis_InterpParamBase -> UNiagaraPreviewAxis -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase	
	{
	public:
		FLinearColor Min; // 0x30(0x10)
		FLinearColor Max; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
			return ret;
		}
	};


	// Class Niagara.NiagaraPreviewGrid
	// Inherited from AActor -> UObject
	// Size: 0x50 (0x2E0 - 0x290)
	class ANiagaraPreviewGrid : public AActor	
	{
	public:
		UNiagaraSystem System; // 0x290(0x8)
		ENiagaraPreviewGridResetMode ResetMode; // 0x298(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		UNiagaraPreviewAxis PreviewAxisX; // 0x2A0(0x8)
		UNiagaraPreviewAxis PreviewAxisY; // 0x2A8(0x8)
		UClass PreviewClass; // 0x2B0(0x8)
		float SpacingX; // 0x2B8(0x4)
		float SpacingY; // 0x2BC(0x4)
		int32_t NumX; // 0x2C0(0x4)
		int32_t NumY; // 0x2C4(0x4)
		TArray PreviewComponents; // 0x2C8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewGrid");
			return ret;
		}

		void SetPaused(bool bPaused); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145EEDD8
		void GetPreviews(TArray& OutPreviews); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145EECF8
		void DeactivatePreviews(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145EEC18
		void ActivatePreviews(bool bReset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145EEB38
	};


	// Class Niagara.NiagaraRibbonRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0x530 (0x5E0 - 0xB0)
	class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		UMaterialInterface Material; // 0xB0(0x8)
		FNiagaraUserParameterBinding MaterialUserParamBinding; // 0xB8(0x18)
		FNiagaraRibbonUVSettings UV0Settings; // 0xD0(0x28)
		FNiagaraRibbonUVSettings UV1Settings; // 0xF8(0x28)
		ENiagaraRibbonFacingMode FacingMode; // 0x120(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x121(0x3) UNKNOWN PROPERTY
		int32_t MaxNumRibbons; // 0x124(0x4)
		ENiagaraRibbonDrawDirection DrawDirection; // 0x128(0x1)
		ENiagaraRibbonShapeMode Shape; // 0x129(0x1)
		bool bEnableAccurateGeometry : 1; // 0x12A:0(0x1)
		bool bUseMaterialBackfaceCulling : 1; // 0x12A:1(0x1)
		bool bUseGeometryNormals : 1; // 0x12A:2(0x1)
		bool bUseGPUInit : 1; // 0x12A:3(0x1)
		bool bUseConstantFactor : 1; // 0x12A:4(0x1)
		bool bScreenSpaceTessellation : 1; // 0x12A:5(0x1)
		bool bLinkOrderUseUniqueID : 1; // 0x12A:6(0x1)
		bool bCastShadows : 1; // 0x12A:7(0x1)
		unsigned char UnknownData05_5[0x1]; // 0x12B(0x1) UNKNOWN PROPERTY
		int32_t WidthSegmentationCount; // 0x12C(0x4)
		int32_t MultiPlaneCount; // 0x130(0x4)
		int32_t TubeSubdivisions; // 0x134(0x4)
		TArray CustomVertices; // 0x138(0x10)
		ENiagaraRibbonTessellationMode TessellationMode; // 0x148(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x149(0x3) UNKNOWN PROPERTY
		float CurveTension; // 0x14C(0x4)
		int32_t TessellationFactor; // 0x150(0x4)
		float TessellationAngle; // 0x154(0x4)
		FNiagaraVariableAttributeBinding PositionBinding; // 0x158(0x28)
		FNiagaraVariableAttributeBinding ColorBinding; // 0x180(0x28)
		FNiagaraVariableAttributeBinding VelocityBinding; // 0x1A8(0x28)
		FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x1D0(0x28)
		FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x1F8(0x28)
		FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x220(0x28)
		FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x248(0x28)
		FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x270(0x28)
		FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x298(0x28)
		FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x2C0(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2E8(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x310(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x338(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x360(0x28)
		FNiagaraVariableAttributeBinding RibbonUVDistance; // 0x388(0x28)
		FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x3B0(0x28)
		FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x3D8(0x28)
		FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x400(0x28)
		FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x428(0x28)
		FNiagaraRendererMaterialParameters MaterialParameters; // 0x450(0x50)
		FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x4A0(0x28)
		FNiagaraVariableAttributeBinding PrevRibbonWidthBinding; // 0x4C8(0x28)
		FNiagaraVariableAttributeBinding PrevRibbonFacingBinding; // 0x4F0(0x28)
		FNiagaraVariableAttributeBinding PrevRibbonTwistBinding; // 0x518(0x28)
		uint32_t MaterialParamValidMask; // 0x540(0x4)
		unsigned char UnknownData07_7[0x9C]; // 0x544(0x9C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraRibbonRendererProperties");
			return ret;
		}
	};


	// Class Niagara.NiagaraScratchPadContainer
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraScratchPadContainer : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraScratchPadContainer");
			return ret;
		}
	};


	// Class Niagara.NiagaraScript
	// Inherited from UNiagaraScriptBase -> UObject
	// Size: 0x398 (0x3C0 - 0x28)
	class UNiagaraScript : public UNiagaraScriptBase	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		ENiagaraScriptUsage Usage; // 0x30(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FGuid UsageId; // 0x34(0x10)
		unsigned char UnknownData07_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FNiagaraParameterStore RapidIterationParameters; // 0x48(0x88)
		FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xD0(0x90)
		TArray ScriptExecutionBoundParameters; // 0x160(0x10)
		FNiagaraVMExecutableDataId CachedScriptVMId; // 0x170(0x58)
		unsigned char UnknownData08_6[0x10]; // 0x1C8(0x10) UNKNOWN PROPERTY
		FNiagaraVMExecutableData CachedScriptVM; // 0x1D8(0x1A0)
		TArray CachedParameterCollectionReferences; // 0x378(0x10)
		TArray ResolvedDataInterfaces; // 0x388(0x10)
		TArray ResolvedUserDataInterfaceBindings; // 0x398(0x10)
		TArray ResolvedUObjectInfos; // 0x3A8(0x10)
		unsigned char UnknownData09_7[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraScript");
			return ret;
		}

		void RaiseOnGPUCompilationComplete(); // Flags: Final|Native|Public 0x7FF4145EEEB8
	};


	// Class Niagara.NiagaraSimCache
	// Inherited from UObject
	// Size: 0x1D0 (0x1F8 - 0x28)
	class UNiagaraSimCache : public UObject	
	{
	public:
		FGuid CacheGuid; // 0x28(0x10)
		TWeakObjectPtr SoftNiagaraSystem; // 0x38(0x20)
		float StartSeconds; // 0x58(0x4)
		float DurationSeconds; // 0x5C(0x4)
		FNiagaraSimCacheCreateParameters CreateParameters; // 0x60(0x58)
		bool bNeedsReadComponentMappingRecache; // 0xB8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FNiagaraSimCacheLayout CacheLayout; // 0xC0(0xC0)
		TArray CacheFrames; // 0x180(0x10)
		TMap DataInterfaceStorage; // 0x190(0x50)
		unsigned char UnknownData03_7[0x18]; // 0x1E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSimCache");
			return ret;
		}

		void ReadVectorAttribute(TArray& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145F0038
		void ReadVector4Attribute(TArray& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145EFF58
		void ReadVector2Attribute(TArray& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145EFE78
		void ReadQuatAttributeWithRebase(TArray& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145EFD98
		void ReadQuatAttribute(TArray& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145EFCB8
		void ReadPositionAttributeWithRebase(TArray& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145EFBD8
		void ReadPositionAttribute(TArray& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145EFAF8
		void ReadIntAttribute(TArray& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145EFA18
		void ReadIDAttribute(TArray& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF938
		void ReadFloatAttribute(TArray& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF858
		UObject ReadDataInterfaceAs(UClass RequestedType, FName AttributeName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF778
		void ReadColorAttribute(TArray& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF698
		bool IsEmpty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF5B8
		bool IsCacheValid(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF4D8
		float GetStartSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF3F8
		int32_t GetNumFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF318
		int32_t GetNumEmitters(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF238
		TArray GetEmitterNames(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF158
		FName GetEmitterName(int32_t EmitterIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145EF078
		ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145EEF98
	};


	// Class Niagara.AsyncNiagaraCaptureSimCache
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x100 (0x130 - 0x30)
	class UAsyncNiagaraCaptureSimCache : public UCancellableAsyncAction	
	{
	public:
		UNiagaraSimCache CaptureSimCache; // 0x30(0x8)
		UNiagaraComponent CaptureComponent; // 0x38(0x8)
		FMulticastInlineDelegate CaptureComplete; // 0x40(0x10)
		unsigned char UnknownData01_7[0xE0]; // 0x50(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.AsyncNiagaraCaptureSimCache");
			return ret;
		}

		void OnCaptureComplete__DelegateSignature(bool bSuccess); // Flags: MulticastDelegate|Public|Delegate 0x7FF4116EC978
		UAsyncNiagaraCaptureSimCache CaptureNiagaraSimCacheUntilComplete(UNiagaraSimCache SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent NiagaraComponent, UNiagaraSimCache& OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4116EC898
		UAsyncNiagaraCaptureSimCache CaptureNiagaraSimCacheMultiFrame(UNiagaraSimCache SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent NiagaraComponent, UNiagaraSimCache& OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4116EC7B8
		UAsyncNiagaraCaptureSimCache CaptureNiagaraSimCache(UNiagaraSimCache SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent NiagaraComponent, FNiagaraSimCacheCaptureParameters CaptureParameters, UNiagaraSimCache& OutSimCache); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4116AC4F0
	};


	// Class Niagara.NiagaraSimCacheFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSimCacheFunctionLibrary");
			return ret;
		}

		UNiagaraSimCache CreateNiagaraSimCache(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4145F01F8
		bool CaptureNiagaraSimCacheImmediate(UNiagaraSimCache SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent NiagaraComponent, UNiagaraSimCache& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145F0118
	};


	// Class Niagara.NiagaraSimulationStageBase
	// Inherited from UNiagaraMergeable -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNiagaraSimulationStageBase : public UNiagaraMergeable	
	{
	public:
		UNiagaraScript Script; // 0x28(0x8)
		FName SimulationStageName; // 0x30(0x4)
		bool bEnabled : 1; // 0x34:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSimulationStageBase");
			return ret;
		}
	};


	// Class Niagara.NiagaraSimulationStageGeneric
	// Inherited from UNiagaraSimulationStageBase -> UNiagaraMergeable -> UObject
	// Size: 0x140 (0x178 - 0x38)
	class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase	
	{
	public:
		FNiagaraVariableAttributeBinding EnabledBinding; // 0x38(0x28)
		ENiagaraIterationSource IterationSource; // 0x60(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FNiagaraParameterBindingWithValue NumIterations; // 0x68(0x18)
		ENiagaraSimStageExecuteBehavior ExecuteBehavior; // 0x80(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
		bool bDisablePartialParticleUpdate : 1; // 0x84:0(0x1)
		unsigned char UnknownData08_5[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		FNiagaraVariableDataInterfaceBinding DataInterface; // 0x88(0x18)
		bool bParticleIterationStateEnabled : 1; // 0xA0:0(0x1)
		unsigned char UnknownData09_5[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding ParticleIterationStateBinding; // 0xA8(0x28)
		FIntPoint ParticleIterationStateRange; // 0xD0(0x8)
		bool bGpuDispatchForceLinear : 1; // 0xD8:0(0x1)
		bool bOverrideGpuDispatchNumThreads : 1; // 0xD8:1(0x1)
		unsigned char UnknownData10_5[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY
		FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsX; // 0xE0(0x18)
		FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsY; // 0xF8(0x18)
		FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsZ; // 0x110(0x18)
		ENiagaraGpuDispatchType DirectDispatchType; // 0x128(0x1)
		ENiagaraDirectDispatchElementType DirectDispatchElementType; // 0x129(0x1)
		unsigned char UnknownData11_6[0x6]; // 0x12A(0x6) UNKNOWN PROPERTY
		FNiagaraParameterBindingWithValue ElementCountX; // 0x130(0x18)
		FNiagaraParameterBindingWithValue ElementCountY; // 0x148(0x18)
		FNiagaraParameterBindingWithValue ElementCountZ; // 0x160(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSimulationStageGeneric");
			return ret;
		}
	};


	// Class Niagara.NiagaraSpriteRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0x558 (0x608 - 0xB0)
	class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		UMaterialInterface Material; // 0xB0(0x8)
		FNiagaraUserParameterBinding MaterialUserParamBinding; // 0xB8(0x18)
		ENiagaraRendererSourceDataMode SourceMode; // 0xD0(0x1)
		ENiagaraSpriteAlignment Alignment; // 0xD1(0x1)
		ENiagaraSpriteFacingMode FacingMode; // 0xD2(0x1)
		ENiagaraSortMode SortMode; // 0xD3(0x1)
		float MacroUVRadius; // 0xD4(0x4)
		FVector2D PivotInUVSpace; // 0xD8(0x10)
		FVector2D SubImageSize; // 0xE8(0x10)
		bool bSubImageBlend : 1; // 0xF8:0(0x1)
		bool bRemoveHMDRollInVR : 1; // 0xF8:1(0x1)
		bool bSortOnlyWhenTranslucent : 1; // 0xF8:2(0x1)
		bool bEnableCameraDistanceCulling : 1; // 0xF8:3(0x1)
		bool bCastShadows : 1; // 0xF8:4(0x1)
		ENiagaraRendererSortPrecision SortPrecision; // 0xF9(0x1)
		ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency; // 0xFA(0x1)
		ENiagaraRendererPixelCoverageMode PixelCoverageMode; // 0xFB(0x1)
		float PixelCoverageBlend; // 0xFC(0x4)
		float MinFacingCameraBlendDistance; // 0x100(0x4)
		float MaxFacingCameraBlendDistance; // 0x104(0x4)
		float MinCameraDistance; // 0x108(0x4)
		float MaxCameraDistance; // 0x10C(0x4)
		uint32_t RendererVisibility; // 0x110(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding PositionBinding; // 0x118(0x28)
		FNiagaraVariableAttributeBinding ColorBinding; // 0x140(0x28)
		FNiagaraVariableAttributeBinding VelocityBinding; // 0x168(0x28)
		FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x190(0x28)
		FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x1B8(0x28)
		FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x1E0(0x28)
		FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x208(0x28)
		FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x230(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x258(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x280(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x2A8(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x2D0(0x28)
		FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x2F8(0x28)
		FNiagaraVariableAttributeBinding UVScaleBinding; // 0x320(0x28)
		FNiagaraVariableAttributeBinding PivotOffsetBinding; // 0x348(0x28)
		FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x370(0x28)
		FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x398(0x28)
		FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x3C0(0x28)
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x3E8(0x28)
		FNiagaraRendererMaterialParameters MaterialParameters; // 0x410(0x50)
		FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x460(0x28)
		FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x488(0x28)
		FNiagaraVariableAttributeBinding PrevSpriteRotationBinding; // 0x4B0(0x28)
		FNiagaraVariableAttributeBinding PrevSpriteSizeBinding; // 0x4D8(0x28)
		FNiagaraVariableAttributeBinding PrevSpriteFacingBinding; // 0x500(0x28)
		FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding; // 0x528(0x28)
		FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x550(0x28)
		FNiagaraVariableAttributeBinding PrevPivotOffsetBinding; // 0x578(0x28)
		uint32_t MaterialParamValidMask; // 0x5A0(0x4)
		unsigned char UnknownData03_7[0x64]; // 0x5A4(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSpriteRendererProperties");
			return ret;
		}
	};


	// Class Niagara.NiagaraSystem
	// Inherited from UFXSystemAsset -> UObject
	// Size: 0x510 (0x560 - 0x50)
	class UNiagaraSystem : public UFXSystemAsset	
	{
	public:
		bool bSupportLargeWorldCoordinates : 1; // 0x50:0(0x1)
		bool bOverrideCastShadow : 1; // 0x50:1(0x1)
		bool bOverrideReceivesDecals : 1; // 0x50:2(0x1)
		bool bOverrideRenderCustomDepth : 1; // 0x50:3(0x1)
		bool bOverrideCustomDepthStencilValue : 1; // 0x50:4(0x1)
		bool bOverrideCustomDepthStencilWriteMask : 1; // 0x50:5(0x1)
		bool bOverrideTranslucencySortPriority : 1; // 0x50:6(0x1)
		bool bOverrideTranslucencySortDistanceOffset : 1; // 0x50:7(0x1)
		bool bCastShadow : 1; // 0x51:0(0x1)
		bool bReceivesDecals : 1; // 0x51:1(0x1)
		bool bRenderCustomDepth : 1; // 0x51:2(0x1)
		bool bDisableExperimentalVM : 1; // 0x51:3(0x1)
		bool bInitialOwnerVelocityFromActor : 1; // 0x51:4(0x1)
		ERendererStencilMask CustomDepthStencilWriteMask; // 0x52(0x1)
		unsigned char UnknownData16_6[0x1]; // 0x53(0x1) UNKNOWN PROPERTY
		int32_t CustomDepthStencilValue; // 0x54(0x4)
		int32_t TranslucencySortPriority; // 0x58(0x4)
		float TranslucencySortDistanceOffset; // 0x5C(0x4)
		bool bDumpDebugSystemInfo; // 0x60(0x1)
		bool bDumpDebugEmitterInfo; // 0x61(0x1)
		unsigned char UnknownData17_6[0x1]; // 0x62(0x1) UNKNOWN PROPERTY
		bool bRequireCurrentFrameData; // 0x63(0x1)
		bool bFixedBounds : 1; // 0x64:0(0x1)
		unsigned char UnknownData18_5[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		UNiagaraEffectType EffectType; // 0x68(0x8)
		bool bOverrideScalabilitySettings; // 0x70(0x1)
		unsigned char UnknownData19_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		bool bOverrideAllowCullingForLocalPlayers : 1; // 0x74:0(0x1)
		bool bAllowCullingForLocalPlayersOverride : 1; // 0x74:1(0x1)
		unsigned char UnknownData20_5[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x78(0x10)
		FNiagaraPlatformSet Platforms; // 0x88(0x30)
		TArray EmitterHandles; // 0xB8(0x10)
		TArray ParameterCollectionOverrides; // 0xC8(0x10)
		UNiagaraScript SystemSpawnScript; // 0xD8(0x8)
		UNiagaraScript SystemUpdateScript; // 0xE0(0x8)
		unsigned char UnknownData21_6[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY
		FNiagaraSystemCompiledData SystemCompiledData; // 0xF8(0x228)
		FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x320(0xD8)
		FBox FixedBounds; // 0x3F8(0x38)
		bool bDeterminism; // 0x430(0x1)
		unsigned char UnknownData22_6[0x3]; // 0x431(0x3) UNKNOWN PROPERTY
		int32_t RandomSeed; // 0x434(0x4)
		float WarmupTime; // 0x438(0x4)
		int32_t WarmupTickCount; // 0x43C(0x4)
		float WarmupTickDelta; // 0x440(0x4)
		bool bFixedTickDelta; // 0x444(0x1)
		unsigned char UnknownData23_6[0x3]; // 0x445(0x3) UNKNOWN PROPERTY
		float FixedTickDeltaTime; // 0x448(0x4)
		bool bNeedsGPUContextInitForDataInterfaces; // 0x44C(0x1)
		unsigned char UnknownData24_6[0xA3]; // 0x44D(0xA3) UNKNOWN PROPERTY
		unsigned char UnknownBit25 : 1; // 0x4F0:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit26 : 1; // 0x4F0:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit27 : 1; // 0x4F0:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit28 : 1; // 0x4F0:3(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit29 : 1; // 0x4F0:4(0x1) UNKNOWN PROPERTY
		bool bAllowSystemStateFastPath : 1; // 0x4F0:5(0x1)
		bool bSystemStateFastPathEnabled : 1; // 0x4F0:6(0x1)
		unsigned char UnknownData30_5[0xF]; // 0x4F1(0xF) UNKNOWN PROPERTY
		FNiagaraSystemStateData SystemStateData; // 0x500(0x58)
		unsigned char UnknownData31_7[0x8]; // 0x558(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSystem");
			return ret;
		}
	};


	// Class Niagara.NiagaraValidationRule
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraValidationRule : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraValidationRule");
			return ret;
		}
	};


	// Class Niagara.NiagaraVolumeRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0x190 (0x240 - 0xB0)
	class UNiagaraVolumeRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		UMaterialInterface Material; // 0xB0(0x8)
		FNiagaraParameterBinding MaterialParameterBinding; // 0xB8(0x8)
		unsigned char UnknownData03_6[0x4]; // 0xC0(0x4) UNKNOWN PROPERTY
		int32_t RendererVisibility; // 0xC4(0x4)
		float StepFactor; // 0xC8(0x4)
		float LightingDownsampleFactor; // 0xCC(0x4)
		float ShadowStepFactor; // 0xD0(0x4)
		float ShadowBiasFactor; // 0xD4(0x4)
		unsigned char UnknownData04_6[0x78]; // 0xD8(0x78) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x150(0x28)
		FNiagaraVariableAttributeBinding VolumeResolutionMaxAxisBinding; // 0x178(0x28)
		FNiagaraVariableAttributeBinding VolumeWorldSpaceSizeBinding; // 0x1A0(0x28)
		FNiagaraRendererMaterialParameters MaterialParameters; // 0x1C8(0x50)
		unsigned char UnknownData05_7[0x28]; // 0x218(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraVolumeRendererProperties");
			return ret;
		}
	};


	// Class Niagara.VolumeCache
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UVolumeCache : public UObject	
	{
	public:
		FString FilePath; // 0x28(0x10)
		EVolumeCacheType CacheType; // 0x38(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FIntVector Resolution; // 0x3C(0xC)
		int32_t FrameRangeStart; // 0x48(0x4)
		int32_t FrameRangeEnd; // 0x4C(0x4)
		unsigned char UnknownData03_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.VolumeCache");
			return ret;
		}
	};

}
