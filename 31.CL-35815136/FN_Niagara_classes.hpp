#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Niagara
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Niagara.NDIRenderTargetVolumeSimCacheData
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UNDIRenderTargetVolumeSimCacheData : public UObject	
	{
	public:
		FName CompressionType; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray<FNDIRenderTargetVolumeSimCacheFrame> Frames; // 0x30(0x10)

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
		TArray<FNiagaraAssetTagDefinition> TagDefinitions; // 0x48(0x10)
		bool bDisplayTagsAsFlatList; // 0x58(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		UNiagaraDataChannelHandler* Owner; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelReader");
			return ret;
		}

		FVector4 ReadVector4(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1479A4(relative to base address)
		FVector2D ReadVector2D(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D147828(relative to base address)
		FVector ReadVector(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D147AFC(relative to base address)
		FNiagaraSpawnInfo ReadSpawnInfo(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D147714(relative to base address)
		FQuat ReadQuat(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1475B8(relative to base address)
		FVector ReadPosition(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D147460(relative to base address)
		FLinearColor ReadLinearColor(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1472EC(relative to base address)
		int32_t ReadInt(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1471E8(relative to base address)
		FNiagaraID ReadID(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1470AC(relative to base address)
		double ReadFloat(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D146FA4(relative to base address)
		char ReadEnum(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D146EA0(relative to base address)
		bool ReadBool(FName VarName, int32_t Index, bool& IsValid); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D146D9C(relative to base address)
		int32_t Num(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D146D58(relative to base address)
		bool InitAccess(FNiagaraDataChannelSearchParameters SearchParams, bool bReadPrevFrameData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D146454(relative to base address)
	};


	// Class Niagara.NiagaraDataChannelWriter
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UNiagaraDataChannelWriter : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UNiagaraDataChannelHandler* Owner; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelWriter");
			return ret;
		}

		void WriteVector4(FName VarName, int32_t Index, FVector4 InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D14895C(relative to base address)
		void WriteVector2D(FName VarName, int32_t Index, FVector2D InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1487DC(relative to base address)
		void WriteVector(FName VarName, int32_t Index, FVector InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D148AF8(relative to base address)
		void WriteSpawnInfo(FName VarName, int32_t Index, FNiagaraSpawnInfo InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D148650(relative to base address)
		void WriteQuat(FName VarName, int32_t Index, FQuat InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1484C8(relative to base address)
		void WritePosition(FName VarName, int32_t Index, FVector InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D14833C(relative to base address)
		void WriteLinearColor(FName VarName, int32_t Index, FLinearColor InData); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1481BC(relative to base address)
		void WriteInt(FName VarName, int32_t Index, int32_t InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1480C8(relative to base address)
		void WriteID(FName VarName, int32_t Index, FNiagaraID InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D147F48(relative to base address)
		void WriteFloat(FName VarName, int32_t Index, double InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D147E4C(relative to base address)
		void WriteEnum(FName VarName, int32_t Index, char InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D147D54(relative to base address)
		void WriteBool(FName VarName, int32_t Index, bool InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D147C5C(relative to base address)
		int32_t Num(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D146D78(relative to base address)
		bool InitWrite(FNiagaraDataChannelSearchParameters SearchParams, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU, FString DebugSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D146664(relative to base address)
	};


	// Class Niagara.NiagaraDataChannelHandler
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UNiagaraDataChannelHandler : public UObject	
	{
	public:
		TWeakObjectPtr<UNiagaraDataChannel*> DataChannel; // 0x28(0x8)
		UNiagaraDataChannelWriter* Writer; // 0x30(0x8)
		UNiagaraDataChannelReader* Reader; // 0x38(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataChannelHandler");
			return ret;
		}

		UNiagaraDataChannelWriter GetDataChannelWriter(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D14A728(relative to base address)
		UNiagaraDataChannelReader GetDataChannelReader(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D14A704(relative to base address)
	};


	// Class Niagara.NiagaraDataChannelAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNiagaraDataChannelAsset : public UObject	
	{
	public:
		UNiagaraDataChannel* DataChannel; // 0x28(0x8)

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
		TArray<FNiagaraDataChannelVariable> ChannelVariables; // 0x28(0x10)
		bool bKeepPreviousFrameData; // 0x38(0x1)
		bool bEnforceTickGroupReadWriteOrder; // 0x39(0x1)
		TEnumAsByte<ETickingGroup> FinalWriteTickGroup; // 0x3A(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x3B(0x5) UNKNOWN PROPERTY
		FNiagaraDataSetCompiledData CompiledData; // 0x40(0x40)
		FNiagaraDataSetCompiledData CompiledDataGPU; // 0x80(0x40)
		unsigned char UnknownData01_7[0x60]; // 0xC0(0x60) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		FVector InitialExtents; // 0x128(0x18)
		FVector MaxExtents; // 0x140(0x18)
		FVector PerElementExtents; // 0x158(0x18)
		TArray<TWeakObjectPtr> Systems; // 0x170(0x10)
		int32_t IslandPoolSize; // 0x180(0x4)
		FNDCIslandDebugDrawSettings DebugDrawSettings; // 0x184(0x4)
		TArray<UNiagaraSystem*> SystemsInternal; // 0x188(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x198(0x10) UNKNOWN PROPERTY

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
		TArray<int32_t> ActiveIslands; // 0x48(0x10)
		TArray<int32_t> FreeIslands; // 0x58(0x10)
		TArray<FNDCIsland> IslandPool; // 0x68(0x10)

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
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

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
		UNiagaraDataChannelAsset* Channel; // 0x38(0x8)
		bool bReadCurrentFrame; // 0x40(0x1)
		bool bUpdateSourceDataEveryTick; // 0x41(0x1)
		bool bOverrideSpawnGroupToDataChannelIndex; // 0x42(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x43(0x5) UNKNOWN PROPERTY
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
		TArray<FNDIDataChannelWriteSimCacheFrame> FrameData; // 0x28(0x10)
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
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		ENiagaraDataChannelAllocationMode AllocationMode; // 0x40(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		uint32_t AllocationCount; // 0x44(0x4)
		bool bPublishToGame; // 0x48(0x1)
		bool bPublishToCPU; // 0x49(0x1)
		bool bPublishToGPU; // 0x4A(0x1)
		bool bUpdateDestinationDataEveryTick; // 0x4B(0x1)
		unsigned char UnknownData02_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UNiagaraDataChannelAsset* Channel; // 0x50(0x8)
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
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		float MaxDeltaTimePerTick; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FSoftObjectPath DefaultEffectType; // 0x40(0x18)
		bool bAllowCreateActorFromSystemWithNoEffectType; // 0x58(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		FLinearColor PositionPinTypeColor; // 0x5C(0x10)
		ENiagaraStripScriptByteCodeOption ByteCodeStripOption; // 0x6C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		TArray<FText> QualityLevels; // 0x70(0x10)
		TMap<FString, FText> ComponentRendererWarningsPerClass; // 0x80(0x50)
		TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat; // 0xD0(0x1)
		ENiagaraGpuBufferFormat DefaultGridFormat; // 0xD1(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xD2(0x2) UNKNOWN PROPERTY
		ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xD4(0x4)
		ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode; // 0xD8(0x1)
		ENiagaraDefaultSortPrecision DefaultSortPrecision; // 0xD9(0x1)
		ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency; // 0xDA(0x1)
		unsigned char UnknownData05_6[0x1]; // 0xDB(0x1) UNKNOWN PROPERTY
		float DefaultLightInverseExposureBlend; // 0xDC(0x4)
		bool NDISkelMesh_SupportReadingDeformedGeometry; // 0xE0(0x1)
		bool NDISkelMesh_Support16BitIndexWeight; // 0xE1(0x1)
		TEnumAsByte<ENDISkelMesh_GpuMaxInfluences> NDISkelMesh_GpuMaxInfluences; // 0xE2(0x1)
		TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMesh_GpuUniformSamplingFormat; // 0xE3(0x1)
		TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMesh_AdjacencyTriangleIndexFormat; // 0xE4(0x1)
		bool NDIStaticMesh_AllowDistanceFields; // 0xE5(0x1)
		unsigned char UnknownData06_6[0x2]; // 0xE6(0x2) UNKNOWN PROPERTY
		TArray<TEnumAsByte> NDICollisionQuery_AsyncGpuTraceProviderOrder; // 0xE8(0x10)
		FString SimCacheAuxiliaryFileBasePath; // 0xF8(0x10)
		int64_t SimCacheMaxCPUMemoryVolumetrics; // 0x108(0x8)
		TArray<FNiagaraPlatformSetRedirect> PlatformSetRedirects; // 0x110(0x10)

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
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FString UniqueEmitterName; // 0x38(0x10)
		UClass* EmitterTemplateClass; // 0x48(0x8)
		bool bDeterministic; // 0x50(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		uint32_t AllowedFeatureMask; // 0x54(0x4)
		int32_t RandomSeed; // 0x58(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FBox FixedBounds; // 0x60(0x38)
		FNiagaraEmitterStateData EmitterState; // 0x98(0x70)
		TArray<FNiagaraStatelessSpawnInfo> SpawnInfos; // 0x108(0x10)
		TArray<UNiagaraStatelessModule*> Modules; // 0x118(0x10)
		TArray<UNiagaraRendererProperties*> RendererProperties; // 0x128(0x10)
		FNiagaraPlatformSet Platforms; // 0x138(0x30)
		FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x168(0x10)
		FNiagaraDataSetCompiledData ParticleDataSetCompiledData; // 0x178(0x40)
		TArray<int32_t> ComponentOffsets; // 0x1B8(0x10)
		TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x1C8(0x10)

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
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionRangeVector3 LinearVelocityDistribution; // 0x38(0x30)
		float LinearVelocityScale; // 0x68(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FNiagaraDistributionRangeFloat ConeVelocityDistribution; // 0x70(0x20)
		FRotator ConeRotation; // 0x90(0x18)
		float ConeAngle; // 0xA8(0x4)
		float InnerCone; // 0xAC(0x4)
		FNiagaraDistributionRangeFloat PointVelocityDistribution; // 0xB0(0x20)
		FVector3f PointOrigin; // 0xD0(0xC)
		bool bSpeedFalloffFromConeAxisEnabled; // 0xDC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		float SpeedFalloffFromConeAxis; // 0xE0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		UObject* NoiseTexture; // 0x40(0x8)

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
		unsigned char UnknownData00_5[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TArray<float> MeshIndexWeight; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraStatelessModule_MeshIndex");
			return ret;
		}

		bool NeedsMeshIndexWeights(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74D14E3A0(relative to base address)
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

		bool UseScaleCurveRange(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74D14E3C0(relative to base address)
	};


	// Class Niagara.NiagaraStatelessModule_ScaleMeshSizeBySpeed
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UNiagaraStatelessModule_ScaleMeshSizeBySpeed : public UNiagaraStatelessModule	
	{
	public:
		float VelocityThreshold; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
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

		bool UseScaleCurveRange(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74D14E3C0(relative to base address)
	};


	// Class Niagara.NiagaraStatelessModule_ScaleSpriteSizeBySpeed
	// Inherited from UNiagaraStatelessModule -> UNiagaraMergeable -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed : public UNiagaraStatelessModule	
	{
	public:
		float VelocityThreshold; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		FVector3f SpriteFacing; // 0x34(0xC)
		FVector3f SpriteAlignment; // 0x40(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		int32_t StartFrameRangeOverride; // 0x38(0x4)
		int32_t EndFrameRangeOverride; // 0x3C(0x4)
		ENSMSubUVAnimation_Mode AnimationMode; // 0x40(0x4)
		float LoopsPerSecond; // 0x44(0x4)
		float RandomChangeInterval; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

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
		TArray<UNiagaraValidationRule*> ValidationRules; // 0x28(0x10)

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
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t LocalPlayerIndex; // 0x3C(0x4)
		TLazyObjectPtr<AActor*> SourceActor; // 0x40(0x18)
		FNiagaraUserParameterBinding ActorOrComponentParameter; // 0x58(0x18)
		bool bRequireCurrentFrameData; // 0x70(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

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
		TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider> TraceProvider; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		TArray<FNiagaraDynamicMeshSection> Sections; // 0x40(0x10)
		TArray<FNiagaraDynamicMeshMaterial> Materials; // 0x50(0x10)
		int32_t NumVertices; // 0x60(0x4)
		int32_t NumTexCoords; // 0x64(0x4)
		bool bHasColors; // 0x68(0x1)
		bool bHasTangentBasis; // 0x69(0x1)
		bool bClearTrianglesPerFrame; // 0x6A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x6B(0x5) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
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
		TArray<FNDIMemoryBufferSimCacheDataFrame> FrameData; // 0x28(0x10)
		TArray<uint32_t> BufferData; // 0x38(0x10)

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
		UPhysicsAsset* DefaultSource; // 0x38(0x8)
		TWeakObjectPtr<AActor*> SoftSourceActor; // 0x40(0x20)
		FNiagaraUserParameterBinding MeshUserParameter; // 0x60(0x18)
		unsigned char UnknownData00_7[0x20]; // 0x78(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding SceneCaptureUserParameter; // 0x40(0x18)
		bool bAutoMoveWithComponent; // 0x58(0x1)
		ENDISceneCapture2DOffsetMode AutoMoveOffsetLocationMode; // 0x59(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY
		FVector AutoMoveOffsetLocation; // 0x60(0x18)
		ENDISceneCapture2DOffsetMode AutoMoveOffsetRotationMode; // 0x78(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		FRotator AutoMoveOffsetRotation; // 0x80(0x18)
		TEnumAsByte<ESceneCaptureSource> ManagedCaptureSource; // 0x98(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		FIntPoint ManagedTextureSize; // 0x9C(0x8)
		TEnumAsByte<ETextureRenderTargetFormat> ManagedTextureFormat; // 0xA4(0x1)
		TEnumAsByte<ECameraProjectionMode> ManagedProjectionType; // 0xA5(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xA6(0x2) UNKNOWN PROPERTY
		float ManagedFOVAngle; // 0xA8(0x4)
		float ManagedOrthoWidth; // 0xAC(0x4)
		bool bManagedCaptureEveryFrame; // 0xB0(0x1)
		bool bManagedCaptureOnMovement; // 0xB1(0x1)
		unsigned char UnknownData05_6[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY
		TArray<AActor*> ManagedShowOnlyActors; // 0xB8(0x10)
		unsigned char UnknownData06_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		TMap<uint64_t, USceneCaptureComponent2D*> ManagedCaptureComponents; // 0xD0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSceneCapture2D");
			return ret;
		}

		void SetSceneCapture2DManagedShowOnlyActors(UNiagaraComponent* NiagaraSystem, FName ParameterName, TArray<AActor*> ShowOnlyActors); // Flags: Final|RequiredAPI|Native|Static|Protected|BlueprintCallable, Memory Exec: 0x7FF74D19BEBC(relative to base address)
	};


	// Class Niagara.NiagaraDataInterfaceSimCacheReader
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface	
	{
	public:
		FNiagaraUserParameterBinding SimCacheBinding; // 0x38(0x18)
		UNiagaraSimCache* SimCache; // 0x50(0x8)
		FName EmitterBinding; // 0x58(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
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
		TArray<int32_t> Values; // 0x28(0x10)

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
		unsigned char UnknownData00_7[0x67]; // 0x39(0x67) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UStaticMesh* DefaultMesh; // 0x40(0x8)
		TWeakObjectPtr<AActor*> SoftSourceActor; // 0x48(0x20)
		UStaticMeshComponent* SourceComponent; // 0x68(0x8)
		FNDIStaticMeshSectionFilter SectionFilter; // 0x70(0x10)
		bool bCaptureTransformsPerFrame; // 0x80(0x1)
		bool bUsePhysicsBodyVelocity; // 0x81(0x1)
		bool bAllowSamplingFromStreamingLODs; // 0x82(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x83(0x1) UNKNOWN PROPERTY
		int32_t LODIndex; // 0x84(0x4)
		FNiagaraUserParameterBinding LODIndexUserParameter; // 0x88(0x18)
		FNiagaraUserParameterBinding MeshParameterBinding; // 0xA0(0x18)
		int32_t InstanceIndex; // 0xB8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		TArray<FName> FilteredSockets; // 0xC0(0x10)
		unsigned char UnknownData03_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceStaticMesh");
			return ret;
		}

		void SetNiagaraStaticMeshDIInstanceIndex(UNiagaraComponent* NiagaraSystem, FName UserParameterName, int32_t NewInstanceIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D19BDA0(relative to base address)
		void OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason> Reason); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF748CDD2D8(relative to base address)
	};


	// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x60 (0x98 - 0x38)
	class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface	
	{
	public:
		ENDIObjectPropertyReaderSourceMode SourceMode; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding UObjectParameterBinding; // 0x40(0x18)
		TArray<FNiagaraUObjectPropertyReaderRemap> PropertyRemap; // 0x58(0x10)
		TWeakObjectPtr<AActor*> SourceActor; // 0x68(0x20)
		UClass* SourceActorComponentClass; // 0x88(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x90(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader");
			return ret;
		}

		void SetUObjectReaderPropertyRemap(UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D19C088(relative to base address)
	};


	// Class Niagara.NiagaraDataInterfaceVirtualTexture
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface	
	{
	public:
		URuntimeVirtualTexture* Texture; // 0x38(0x8)
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
		unsigned char UnknownData00_7[0x2]; // 0xFE(0x2) UNKNOWN PROPERTY

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
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)

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
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY
		int32_t ChannelsUsed; // 0xC8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

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
		UNiagaraComponent* NiagaraComponent; // 0x290(0x8)
		bool bDestroyOnSystemFinish : 1; // 0x298:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x299(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraActor");
			return ret;
		}

		void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4C10(relative to base address)
		void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent); // Flags: Final|RequiredAPI|Native|Private, Memory Exec: 0x7FF7490C5910(relative to base address)
		bool GetDestroyOnSystemFinish(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4630(relative to base address)
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
		unsigned char UnknownData00_5[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		FIntPoint FrameSize; // 0x54(0x8)
		FIntPoint AtlasTextureSize; // 0x5C(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x64(0x8) UNKNOWN PROPERTY
		TEnumAsByte<TextureAddress> TextureAddressX; // 0x6C(0x1)
		TEnumAsByte<TextureAddress> TextureAddressY; // 0x6D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_5[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_5[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		FIntPoint FramesPerDimension; // 0x38(0x8)
		TArray<UNiagaraBakerOutput*> Outputs; // 0x40(0x10)
		TArray<FNiagaraBakerCameraSettings> CameraSettings; // 0x50(0x10)
		int32_t CurrentCameraIndex; // 0x60(0x4)
		FName BakeQualityLevel; // 0x64(0x4)
		bool bRenderComponentOnly : 1; // 0x68:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		TArray<FNiagaraBakerTextureSettings> OutputTextures; // 0x70(0x10)
		ENiagaraBakerViewMode CameraViewportMode; // 0x80(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FVector CameraViewportLocation; // 0x88(0xA8)
		FRotator CameraViewportRotation; // 0x130(0xA8)
		float CameraOrbitDistance; // 0x1D8(0x4)
		float CameraFOV; // 0x1DC(0x4)
		float CameraOrthoWidth; // 0x1E0(0x4)
		bool bUseCameraAspectRatio : 1; // 0x1E4:0(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x1E5(0x3) UNKNOWN PROPERTY
		float CameraAspectRatio; // 0x1E8(0x4)
		unsigned char UnknownData04_7[0x4]; // 0x1EC(0x4) UNKNOWN PROPERTY

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
		UNiagaraSystem* Asset; // 0x4C8(0x8)
		ENiagaraTickBehavior TickBehavior; // 0x4D0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x4D1(0x3) UNKNOWN PROPERTY
		int32_t RandomSeedOffset; // 0x4D4(0x4)
		FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x4D8(0xD8)
		bool bForceSolo : 1; // 0x5B0:0(0x1)
		bool bEnableGpuComputeDebug : 1; // 0x5B0:1(0x1)
		bool bOverrideWarmupSettings : 1; // 0x5B0:2(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x5B1(0x3) UNKNOWN PROPERTY
		int32_t WarmupTickCount; // 0x5B4(0x4)
		float WarmupTickDelta; // 0x5B8(0x4)
		unsigned char UnknownData02_6[0x34]; // 0x5BC(0x34) UNKNOWN PROPERTY
		bool bAutoDestroy : 1; // 0x5F0:0(0x1)
		bool bRenderingEnabled : 1; // 0x5F0:1(0x1)
		bool bAutoManageAttachment : 1; // 0x5F0:2(0x1)
		bool bAutoAttachWeldSimulatedBodies : 1; // 0x5F0:3(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x5F1(0x3) UNKNOWN PROPERTY
		float MaxTimeBeforeForceUpdateTransform; // 0x5F4(0x4)
		unsigned char UnknownData04_6[0x1]; // 0x5F8(0x1) UNKNOWN PROPERTY
		ENiagaraOcclusionQueryMode OcclusionQueryMode; // 0x5F9(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x5FA(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSystemFinished; // 0x600(0x10)
		TWeakObjectPtr<USceneComponent*> AutoAttachParent; // 0x610(0x8)
		FName AutoAttachSocketName; // 0x618(0x4)
		EAttachmentRule AutoAttachLocationRule; // 0x61C(0x1)
		EAttachmentRule AutoAttachRotationRule; // 0x61D(0x1)
		EAttachmentRule AutoAttachScaleRule; // 0x61E(0x1)
		unsigned char UnknownData06_6[0x9]; // 0x61F(0x9) UNKNOWN PROPERTY
		unsigned char UnknownBit07 : 1; // 0x628:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit08 : 1; // 0x628:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit09 : 1; // 0x628:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit10 : 1; // 0x628:3(0x1) UNKNOWN PROPERTY
		bool bAllowScalability : 1; // 0x628:4(0x1)
		unsigned char UnknownData11_5[0xEF]; // 0x629(0xEF) UNKNOWN PROPERTY
		UNiagaraSimCache* SimCache; // 0x718(0x8)
		UNiagaraCullProxyComponent* CullProxy; // 0x720(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraComponent");
			return ret;
		}

		void SetVariableVec4(FName InVariableName, FVector4& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B6938(relative to base address)
		void SetVariableVec3(FName InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF748A6D7CC(relative to base address)
		void SetVariableVec2(FName InVariableName, FVector2D InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B67E4(relative to base address)
		void SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B6720(relative to base address)
		void SetVariableTexture(FName InVariableName, UTexture* Texture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B665C(relative to base address)
		void SetVariableStaticMesh(FName InVariableName, UStaticMesh* InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748FC93E0(relative to base address)
		void SetVariableQuat(FName InVariableName, FQuat& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B6594(relative to base address)
		void SetVariablePosition(FName InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B6430(relative to base address)
		void SetVariableObject(FName InVariableName, UObject* Object); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B6278(relative to base address)
		void SetVariableMatrix(FName InVariableName, FMatrix& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B633C(relative to base address)
		void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748CDB300(relative to base address)
		void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7472D775C(relative to base address)
		void SetVariableInt(FName InVariableName, int32_t InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747A0A210(relative to base address)
		void SetVariableFloat(FName InVariableName, float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7489A4468(relative to base address)
		void SetVariableBool(FName InVariableName, bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748B47600(relative to base address)
		void SetVariableActor(FName InVariableName, AActor* Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B6278(relative to base address)
		void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B61F8(relative to base address)
		void SetSystemFixedBounds(FBox LocalBounds); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B60B8(relative to base address)
		void SetSimCache(UNiagaraSimCache* SimCache, bool bResetSystem); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B5FF0(relative to base address)
		void SetSeekDelta(float InSeekDelta); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B5F70(relative to base address)
		void SetRenderingEnabled(bool bInRenderingEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B5EE0(relative to base address)
		void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B5E58(relative to base address)
		void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B5D58(relative to base address)
		void SetPaused(bool bInPaused); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B5CD8(relative to base address)
		void SetOcclusionQueryMode(ENiagaraOcclusionQueryMode Mode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B5C4C(relative to base address)
		void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B5B58(relative to base address)
		void SetNiagaraVariableVec3(FString InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B59DC(relative to base address)
		void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B5868(relative to base address)
		void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B575C(relative to base address)
		void SetNiagaraVariablePosition(FString InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B55E0(relative to base address)
		void SetNiagaraVariableObject(FString InVariableName, UObject* Object); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748F14DD0(relative to base address)
		void SetNiagaraVariableMatrix(FString InVariableName, FMatrix& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B54C0(relative to base address)
		void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B5378(relative to base address)
		void SetNiagaraVariableInt(FString InVariableName, int32_t InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747A0B0A8(relative to base address)
		void SetNiagaraVariableFloat(FString InVariableName, float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B52A4(relative to base address)
		void SetNiagaraVariableBool(FString InVariableName, bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B51B0(relative to base address)
		void SetNiagaraVariableActor(FString InVariableName, AActor* Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B50B8(relative to base address)
		void SetMaxSimTime(float InMaxTime); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B5038(relative to base address)
		void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4FB8(relative to base address)
		void SetGpuComputeDebug(bool bEnableDebug); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4F1C(relative to base address)
		void SetForceSolo(bool bInForceSolo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4E9C(relative to base address)
		void SetForceLocalPlayerEffect(bool bIsPlayerEffect); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4E1C(relative to base address)
		void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1B4C9C(relative to base address)
		void SetDesiredAge(float InDesiredAge); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4B90(relative to base address)
		void SetCustomTimeDilation(float Dilation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74878334C(relative to base address)
		void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4B10(relative to base address)
		void SetAutoDestroy(bool bInAutoDestroy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4A90(relative to base address)
		void SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748BD5F6C(relative to base address)
		void SetAllowScalability(bool bAllow); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4A10(relative to base address)
		void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4994(relative to base address)
		void SeekToDesiredAge(float InDesiredAge); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B490C(relative to base address)
		void ResetSystem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749C97850(relative to base address)
		void ReinitializeSystem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B48F8(relative to base address)
		bool IsPaused(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B48DC(relative to base address)
		void InitForPerformanceBaseline(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B48A0(relative to base address)
		ENiagaraTickBehavior GetTickBehavior(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4888(relative to base address)
		FBox GetSystemFixedBounds(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4848(relative to base address)
		UNiagaraSimCache GetSimCache(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4830(relative to base address)
		float GetSeekDelta(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4818(relative to base address)
		int32_t GetRandomSeedOffset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4800(relative to base address)
		bool GetPreviewLODDistanceEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B47E4(relative to base address)
		float GetPreviewLODDistance(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B47B8(relative to base address)
		ENiagaraOcclusionQueryMode GetOcclusionQueryMode(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B47A0(relative to base address)
		float GetMaxSimTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4788(relative to base address)
		bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4770(relative to base address)
		bool GetForceSolo(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4754(relative to base address)
		bool GetForceLocalPlayerEffect(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4738(relative to base address)
		FBox GetEmitterFixedBounds(FName EmitterName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B464C(relative to base address)
		float GetDesiredAge(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4618(relative to base address)
		UNiagaraDataInterface GetDataInterface(FString Name); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4550(relative to base address)
		float GetCustomTimeDilation(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4538(relative to base address)
		UNiagaraSystem GetAsset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749041028(relative to base address)
		bool GetAllowScalability(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B451C(relative to base address)
		ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4504(relative to base address)
		void ClearSystemFixedBounds(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B44F0(relative to base address)
		void ClearSimCache(bool bResetSystem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B446C(relative to base address)
		void ClearEmitterFixedBounds(FName EmitterName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B43EC(relative to base address)
		void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4328(relative to base address)
		void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1B4264(relative to base address)
	};


	// Class Niagara.NiagaraComponentPool
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UNiagaraComponentPool : public UObject	
	{
	public:
		TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x28(0x50)
		unsigned char UnknownData00_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x2]; // 0x8A(0x2) UNKNOWN PROPERTY
		FGuid OuterEmitterVersion; // 0x8C(0x10)
		unsigned char UnknownData01_7[0x14]; // 0x9C(0x14) UNKNOWN PROPERTY

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
		UClass* ComponentType; // 0xB0(0x8)
		uint32_t ComponentCountLimit; // 0xB8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding EnabledBinding; // 0xC0(0x28)
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0xE8(0x28)
		bool bAssignComponentsOnParticleID; // 0x110(0x1)
		bool bCreateComponentFirstParticleFrame; // 0x111(0x1)
		bool bOnlyActivateNewlyAquiredComponents; // 0x112(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x113(0x1) UNKNOWN PROPERTY
		int32_t RendererVisibility; // 0x114(0x4)
		USceneComponent* TemplateComponent; // 0x118(0x8)
		TArray<FNiagaraComponentPropertyBinding> PropertyBindings; // 0x120(0x10)
		unsigned char UnknownData02_7[0x58]; // 0x130(0x58) UNKNOWN PROPERTY

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
		TArray<FNiagaraCulledComponentInfo> Instances; // 0x728(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x738(0x8) UNKNOWN PROPERTY

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

		void WriteToNiagaraDataChannelSingle(UObject* WorldContextObject, UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bVisibleToBlueprint, bool bVisibleToNiagaraCPU, bool bVisibleToNiagaraGPU); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D1EB7AC(relative to base address)
		UNiagaraDataChannelWriter WriteToNiagaraDataChannel(UObject* WorldContextObject, UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU, FString DebugSource); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1EAE40(relative to base address)
		void ReadFromNiagaraDataChannelSingle(UObject* WorldContextObject, UNiagaraDataChannelAsset* Channel, int32_t Index, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame, ENiagartaDataChannelReadResult& ReadResult); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74D1E8964(relative to base address)
		UNiagaraDataChannelReader ReadFromNiagaraDataChannel(UObject* WorldContextObject, UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E8680(relative to base address)
		UNiagaraDataChannelHandler GetNiagaraDataChannel(UObject* WorldContextObject, UNiagaraDataChannelAsset* Channel); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF74D1E8584(relative to base address)
		int32_t GetDataChannelElementCount(UObject* WorldContextObject, UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E6B70(relative to base address)
	};


	// Class Niagara.NiagaraDataInterface2DArrayTexture
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface	
	{
	public:
		UTexture* Texture; // 0x38(0x8)
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
		unsigned char UnknownData00_3[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
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
		TArray<FNDIArraySimCacheDataFrame> CpuFrameData; // 0x28(0x10)
		TArray<FNDIArraySimCacheDataFrame> GpuFrameData; // 0x38(0x10)
		TArray<char> BufferData; // 0x48(0x10)

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
		TArray<float> FloatData; // 0x50(0x10)

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
		TArray<FVector2f> InternalFloatData; // 0x50(0x10)

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
		TArray<FVector3f> InternalFloatData; // 0x50(0x10)

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
		TArray<FNiagaraPosition> PositionData; // 0x50(0x10)

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
		TArray<FVector4f> InternalFloatData; // 0x50(0x10)

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
		TArray<FLinearColor> ColorData; // 0x50(0x10)

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
		TArray<FQuat4f> InternalQuatData; // 0x50(0x10)

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
		TArray<FMatrix44f> InternalMatrixData; // 0x50(0x10)

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

		void SetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1EAC1C(relative to base address)
		void SetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector4& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1EA90C(relative to base address)
		void SetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74879B564(relative to base address)
		void SetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector2D& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1EA728(relative to base address)
		void SetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1EA5E8(relative to base address)
		void SetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1EAB04(relative to base address)
		void SetNiagaraArrayUInt8Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1EA45C(relative to base address)
		void SetNiagaraArrayUInt8(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1EA31C(relative to base address)
		void SetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FQuat& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1EA110(relative to base address)
		void SetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1E9FD0(relative to base address)
		void SetNiagaraArrayPositionValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E9DD0(relative to base address)
		void SetNiagaraArrayPosition(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1E9CB8(relative to base address)
		void SetNiagaraArrayMatrixValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FMatrix& Value, bool bSizeToFit, bool bApplyLWCRebase); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E99EC(relative to base address)
		void SetNiagaraArrayMatrix(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FMatrix>& ArrayData, bool bApplyLWCRebase); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1E9818(relative to base address)
		void SetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E968C(relative to base address)
		void SetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1E9574(relative to base address)
		void SetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E93D8(relative to base address)
		void SetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1E9284(relative to base address)
		void SetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FLinearColor& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E9064(relative to base address)
		void SetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1E8F24(relative to base address)
		void SetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1E8D3C(relative to base address)
		void SetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1E8C24(relative to base address)
		FVector GetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E8464(relative to base address)
		FVector4 GetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E824C(relative to base address)
		TArray GetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E8154(relative to base address)
		FVector2D GetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E8044(relative to base address)
		TArray GetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7F4C(relative to base address)
		TArray GetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E836C(relative to base address)
		int32_t GetNiagaraArrayUInt8Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7E58(relative to base address)
		TArray GetNiagaraArrayUInt8(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7D60(relative to base address)
		FQuat GetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E7C44(relative to base address)
		TArray GetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7B4C(relative to base address)
		FVector GetNiagaraArrayPositionValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E79FC(relative to base address)
		TArray GetNiagaraArrayPosition(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7924(relative to base address)
		FMatrix GetNiagaraArrayMatrixValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool bApplyLWCRebase); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E7784(relative to base address)
		TArray GetNiagaraArrayMatrix(UNiagaraComponent* NiagaraSystem, FName OverrideName, bool bApplyLWCRebase); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E764C(relative to base address)
		int32_t GetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7558(relative to base address)
		TArray GetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7460(relative to base address)
		float GetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7358(relative to base address)
		TArray GetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7260(relative to base address)
		FLinearColor GetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D1E7150(relative to base address)
		TArray GetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E7058(relative to base address)
		bool GetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E6F64(relative to base address)
		TArray GetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D1E6E6C(relative to base address)
	};


	// Class Niagara.NiagaraDataInterfaceArrayInt32
	// Inherited from UNiagaraDataInterfaceArray -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray	
	{
	public:
		TArray<int32_t> IntData; // 0x50(0x10)

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
		TArray<char> InternalIntData; // 0x50(0x10)

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
		TArray<bool> BoolData; // 0x50(0x10)

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
		TArray<FNiagaraID> IntData; // 0x50(0x10)

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
		USoundSubmix* Submix; // 0x38(0x8)

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
		USoundSubmix* Submix; // 0x38(0x8)
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
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		USoundConcurrency* Concurrency; // 0x30(0x8)
		bool bOverrideAttenuationSettings; // 0x38(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
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
		USoundBase* SoundToPlay; // 0x38(0x8)
		USoundAttenuation* Attenuation; // 0x40(0x8)
		USoundConcurrency* Concurrency; // 0x48(0x8)
		TArray<FName> ParameterNames; // 0x50(0x10)
		FNiagaraUserParameterBinding ConfigurationUserParameter; // 0x60(0x18)
		bool bLimitPlaysPerTick; // 0x78(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		int32_t MaxPlaysPerTick; // 0x7C(0x4)
		bool bStopWhenComponentIsDestroyed; // 0x80(0x1)
		bool bAllowLoopingOneShotSounds; // 0x81(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x82(0x6) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

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
		TArray<float> ShaderLUT; // 0x38(0x10)
		float LUTMinTime; // 0x48(0x4)
		float LUTMaxTime; // 0x4C(0x4)
		float LUTInvTimeRange; // 0x50(0x4)
		float LUTNumSamplesMinusOne; // 0x54(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x58(0x4) UNKNOWN PROPERTY
		bool bUseLUT : 1; // 0x5C:0(0x1)
		bool bExposeCurve : 1; // 0x5C:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		FName ExposedName; // 0x60(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		UTexture2D* ExposedTexture; // 0x68(0x8)

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
		UTexture* Texture; // 0x38(0x8)
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
		unsigned char UnknownData00_7[0xC]; // 0x3C(0xC) UNKNOWN PROPERTY

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

		void ReceiveParticleData(TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74D1FDA2C(relative to base address)
	};


	// Class Niagara.NiagaraDataInterfaceExport
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UNiagaraDataInterfaceExport : public UNiagaraDataInterface	
	{
	public:
		FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38(0x18)
		ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x50(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		int32_t GPUAllocationFixedSize; // 0x54(0x4)
		float GPUAllocationPerParticleSize; // 0x58(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t NumCellsX; // 0x3C(0x4)
		int32_t NumCellsY; // 0x40(0x4)
		int32_t NumCellsMaxAxis; // 0x44(0x4)
		int32_t NumAttributes; // 0x48(0x4)
		bool SetGridFromMaxAxis; // 0x4C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_5[0x56]; // 0x7A(0x56) UNKNOWN PROPERTY
		TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0xD0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceGrid2DCollection");
			return ret;
		}

		void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1FD67C(relative to base address)
		void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1FD2CC(relative to base address)
		bool FillTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1FD1CC(relative to base address)
		bool FillRawTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1FCD7C(relative to base address)
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
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FIntVector NumCells; // 0x3C(0xC)
		float CellSize; // 0x48(0x4)
		int32_t NumCellsMaxAxis; // 0x4C(0x4)
		ESetResolutionMethod SetResolutionMethod; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x78(0x18)
		ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x90(0x1)
		bool bOverrideFormat : 1; // 0x91:0(0x1)
		unsigned char UnknownData01_7[0x56]; // 0x92(0x56) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceGrid3DCollection");
			return ret;
		}

		void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1FD808(relative to base address)
		void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1FD458(relative to base address)
		bool FillVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t AttributeIndex); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D1FD1CC(relative to base address)
		bool FillRawVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D1FCF58(relative to base address)
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
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		AActor* SourceLandscape; // 0x40(0x8)
		ENDILandscape_SourceMode SourceMode; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		TArray<UPhysicalMaterial*> PhysicalMaterials; // 0x50(0x10)
		bool bVirtualTexturesSupported; // 0x60(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

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
		TArray<UTexture2D*> HeightFieldTextures; // 0x28(0x10)

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
		UNiagaraMeshRendererProperties* MeshRenderer; // 0x38(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FIntPoint Size; // 0x40(0x8)
		ENiagaraMipMapGeneration MipMapGeneration; // 0x48(0x1)
		ENiagaraMipMapGenerationType MipMapGenerationType; // 0x49(0x1)
		TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat; // 0x4A(0x1)
		TEnumAsByte<TextureFilter> OverrideRenderTargetFilter; // 0x4B(0x1)
		bool bInheritUserParameterSettings : 1; // 0x4C:0(0x1)
		bool bOverrideFormat : 1; // 0x4C:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x50(0x18)
		unsigned char UnknownData02_7[0x50]; // 0x68(0x50) UNKNOWN PROPERTY

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
		TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat; // 0x44(0x1)
		TEnumAsByte<TextureFilter> OverrideRenderTargetFilter; // 0x45(0x1)
		bool bInheritUserParameterSettings : 1; // 0x46:0(0x1)
		bool bOverrideFormat : 1; // 0x46:1(0x1)
		unsigned char UnknownData00_5[0x1]; // 0x47(0x1) UNKNOWN PROPERTY
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
		TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat; // 0x3C(0x1)
		TEnumAsByte<TextureFilter> OverrideRenderTargetFilter; // 0x3D(0x1)
		bool bInheritUserParameterSettings : 1; // 0x3E:0(0x1)
		bool bOverrideFormat : 1; // 0x3E:1(0x1)
		unsigned char UnknownData00_5[0x1]; // 0x3F(0x1) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FIntVector Size; // 0x40(0xC)
		TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat; // 0x4C(0x1)
		TEnumAsByte<TextureFilter> OverrideRenderTargetFilter; // 0x4D(0x1)
		bool bInheritUserParameterSettings : 1; // 0x4E:0(0x1)
		bool bOverrideFormat : 1; // 0x4E:1(0x1)
		unsigned char UnknownData01_5[0x1]; // 0x4F(0x1) UNKNOWN PROPERTY
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
		TArray<FName> ActorTags; // 0x38(0x10)
		TArray<FName> ComponentTags; // 0x48(0x10)
		TArray<TWeakObjectPtr> SourceActors; // 0x58(0x10)
		bool OnlyUseMoveable; // 0x68(0x1)
		bool UseComplexCollisions; // 0x69(0x1)
		bool bFilterByObjectType; // 0x6A(0x1)
		bool GlobalSearchAllowed; // 0x6B(0x1)
		bool GlobalSearchForced; // 0x6C(0x1)
		bool GlobalSearchFallback_Unscripted; // 0x6D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
		int32_t MaxNumPrimitives; // 0x70(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

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

		void SetSourceActors(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<AActor*>& SourceActors); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D21BBE8(relative to base address)
	};


	// Class Niagara.NiagaraDataInterfaceSkeletalMesh
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0xB8 (0xF0 - 0x38)
	class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface	
	{
	public:
		ENDISkeletalMesh_SourceMode SourceMode; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		USkeletalMesh* DefaultMesh; // 0x40(0x8)
		TWeakObjectPtr<AActor*> SoftSourceActor; // 0x48(0x20)
		TArray<FName> ComponentTags; // 0x68(0x10)
		USkeletalMeshComponent* SourceComponent; // 0x78(0x8)
		FNiagaraUserParameterBinding MeshUserParameter; // 0x80(0x18)
		ENDISkeletalMesh_SkinningMode SkinningMode; // 0x98(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		TArray<FName> SamplingRegions; // 0xA0(0x10)
		int32_t WholeMeshLOD; // 0xB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		TArray<FName> FilteredBones; // 0xB8(0x10)
		TArray<FName> FilteredSockets; // 0xC8(0x10)
		FName ExcludeBoneName; // 0xD8(0x4)
		bool bExcludeBone : 1; // 0xDC:0(0x1)
		unsigned char UnknownData03_5[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		int32_t UvSetIndex; // 0xE0(0x4)
		bool bRequireCurrentFrameData; // 0xE4(0x1)
		bool bReadDeformedGeometry; // 0xE5(0x1)
		unsigned char UnknownData04_7[0xA]; // 0xE6(0xA) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraDataInterfaceSkeletalMesh");
			return ret;
		}

		void OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason> Reason); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF748CDD1B4(relative to base address)
	};


	// Class Niagara.NiagaraDataInterfaceSparseVolumeTexture
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UNiagaraDataInterfaceSparseVolumeTexture : public UNiagaraDataInterface	
	{
	public:
		USparseVolumeTexture* SparseVolumeTexture; // 0x38(0x8)
		FNiagaraUserParameterBinding SparseVolumeTextureUserParameter; // 0x40(0x18)
		bool BlockingStreamingRequests; // 0x58(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

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
		TWeakObjectPtr<AActor*> SoftSourceActor; // 0x38(0x20)
		FNiagaraUserParameterBinding SplineUserParameter; // 0x58(0x18)
		bool bUseLUT; // 0x70(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		int32_t NumLUTSteps; // 0x74(0x4)
		unsigned char UnknownData01_7[0x50]; // 0x78(0x50) UNKNOWN PROPERTY

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
		UNiagaraSpriteRendererProperties* SpriteRenderer; // 0x38(0x8)

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
		UTexture* Texture; // 0x38(0x8)
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
		UVectorField* Field; // 0x38(0x8)
		bool bTileX; // 0x40(0x1)
		bool bTileY; // 0x41(0x1)
		bool bTileZ; // 0x42(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x43(0x5) UNKNOWN PROPERTY

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
		UVolumeCache* VolumeCache; // 0x38(0x8)
		unsigned char UnknownData00_7[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

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
		UTexture* Texture; // 0x38(0x8)
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
		unsigned char UnknownData00_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
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
		UMaterialInterface* Material; // 0xB0(0x8)
		FNiagaraParameterBinding MaterialParameterBinding; // 0xB8(0x8)
		ENiagaraRendererSourceDataMode SourceMode; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		int32_t RendererVisibility; // 0xC4(0x4)
		float DecalScreenSizeFade; // 0xC8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding PositionBinding; // 0xD0(0x28)
		FNiagaraVariableAttributeBinding DecalOrientationBinding; // 0xF8(0x28)
		FNiagaraVariableAttributeBinding DecalSizeBinding; // 0x120(0x28)
		FNiagaraVariableAttributeBinding DecalFadeBinding; // 0x148(0x28)
		FNiagaraVariableAttributeBinding DecalSortOrderBinding; // 0x170(0x28)
		FNiagaraVariableAttributeBinding DecalColorBinding; // 0x198(0x28)
		FNiagaraVariableAttributeBinding DecalVisibleBinding; // 0x1C0(0x28)
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x1E8(0x28)
		FNiagaraRendererMaterialParameters MaterialParameters; // 0x210(0x50)
		unsigned char UnknownData02_7[0x38]; // 0x260(0x38) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x2C(0x4)
		ENiagaraCullReaction CullReaction; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UNiagaraSignificanceHandler* SignificanceHandler; // 0x38(0x8)
		TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x40(0x10)
		FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x50(0x10)
		FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x60(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
		UNiagaraBaselineController* PerformanceBaselineController; // 0x78(0x8)
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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FGuid ExposedVersion; // 0x30(0x10)
		bool bVersioningEnabled; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		TArray<FVersionedNiagaraEmitterData> VersionData; // 0x48(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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

		UNiagaraComponent SpawnSystemAttachedWithParams(FFXSystemSpawnParameters& SpawnParams); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2374B4(relative to base address)
		UNiagaraComponent SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF746ED98F4(relative to base address)
		UNiagaraComponent SpawnSystemAtLocationWithParams(FFXSystemSpawnParameters& SpawnParams); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D23741C(relative to base address)
		UNiagaraComponent SpawnSystemAtLocation(UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF746ED9C40(relative to base address)
		void SetVolumeTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UVolumeTexture* Texture); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D237310(relative to base address)
		void SetTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture* Texture); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D237310(relative to base address)
		void SetTexture2DArrayObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture2DArray* Texture); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D237310(relative to base address)
		void SetSkeletalMeshDataInterfaceSamplingRegions(UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D23700C(relative to base address)
		void SetSkeletalMeshDataInterfaceFilteredSockets(UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& FilteredSockets); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D236D08(relative to base address)
		void SetSkeletalMeshDataInterfaceFilteredBones(UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& FilteredBones); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D236A04(relative to base address)
		void SetSceneCapture2DDataInterfaceManagedMode(UNiagaraComponent* NiagaraSystem, FName& DIName, TEnumAsByte<ESceneCaptureSource> ManagedCaptureSource, FIntPoint ManagedTextureSize, TEnumAsByte<ETextureRenderTargetFormat> ManagedTextureFormat, TEnumAsByte<ECameraProjectionMode> ManagedProjectionType, float ManagedFOVAngle, float ManagedOrthoWidth, bool bManagedCaptureEveryFrame, bool bManagedCaptureOnMovement, TArray<AActor*>& ShowOnlyActors); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2361D8(relative to base address)
		void SetComponentNiagaraGPURayTracedCollisionGroup(UObject* WorldContextObject, UPrimitiveComponent* Primitive, int32_t CollisionGroup); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D235E84(relative to base address)
		void SetActorNiagaraGPURayTracedCollisionGroup(UObject* WorldContextObject, AActor* Actor, int32_t CollisionGroup); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D235D1C(relative to base address)
		void ReleaseNiagaraGPURayTracedCollisionGroup(UObject* WorldContextObject, int32_t CollisionGroup); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D235C14(relative to base address)
		void OverrideSystemUserVariableStaticMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMeshComponent* StaticMeshComponent); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D235B08(relative to base address)
		void OverrideSystemUserVariableStaticMesh(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMesh* StaticMesh); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2359FC(relative to base address)
		void OverrideSystemUserVariableSkeletalMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, USkeletalMeshComponent* SkeletalMeshComponent); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF747A0ACDC(relative to base address)
		UNiagaraParameterCollectionInstance GetNiagaraParameterCollection(UObject* WorldContextObject, UNiagaraParameterCollection* Collection); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D235938(relative to base address)
		int32_t AcquireNiagaraGPURayTracedCollisionGroup(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D235868(relative to base address)
	};


	// Class Niagara.NiagaraLensEffectBase
	// Inherited from ANiagaraActor -> AActor -> UObject
	// Size: 0x90 (0x330 - 0x2A0)
	class ANiagaraLensEffectBase : public ANiagaraActor	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2A0(0x10) UNKNOWN PROPERTY
		FTransform DesiredRelativeTransform; // 0x2B0(0x60)
		float BaseAuthoredFOV; // 0x310(0x4)
		bool bAllowMultipleInstances : 1; // 0x314:0(0x1)
		bool bResetWhenRetriggered : 1; // 0x314:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x315(0x3) UNKNOWN PROPERTY
		TArray<UClass*> EmittersToTreatAsSame; // 0x318(0x10)
		APlayerCameraManager* OwningCameraManager; // 0x328(0x8)

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
		unsigned char UnknownData00_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		bool bUseInverseSquaredFalloff : 1; // 0xB4:0(0x1)
		bool bAffectsTranslucency : 1; // 0xB4:1(0x1)
		bool bAlphaScalesBrightness : 1; // 0xB4:2(0x1)
		bool bOverrideInverseExposureBlend : 1; // 0xB4:3(0x1)
		unsigned char UnknownData01_5[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		float RadiusScale; // 0xB8(0x4)
		float DefaultExponent; // 0xBC(0x4)
		float SpecularScale; // 0xC0(0x4)
		float DiffuseScale; // 0xC4(0x4)
		FVector3f ColorAdd; // 0xC8(0xC)
		float InverseExposureBlend; // 0xD4(0x4)
		int32_t RendererVisibility; // 0xD8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0xE0(0x28)
		FNiagaraVariableAttributeBinding LightExponentBinding; // 0x108(0x28)
		FNiagaraVariableAttributeBinding PositionBinding; // 0x130(0x28)
		FNiagaraVariableAttributeBinding ColorBinding; // 0x158(0x28)
		FNiagaraVariableAttributeBinding RadiusBinding; // 0x180(0x28)
		FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x1A8(0x28)
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x1D0(0x28)
		FNiagaraVariableAttributeBinding SpecularScaleBinding; // 0x1F8(0x28)
		FNiagaraVariableAttributeBinding DiffuseScaleBinding; // 0x220(0x28)
		unsigned char UnknownData03_7[0x40]; // 0x248(0x40) UNKNOWN PROPERTY

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
		TArray<FNiagaraMeshRendererMeshProperties> Meshes; // 0xB0(0x10)
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
		unsigned char UnknownData00_3[0x2]; // 0xC6(0x2) UNKNOWN PROPERTY
		bool bCastShadows : 1; // 0xC8:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		TArray<FNiagaraMeshMaterialOverride> OverrideMaterials; // 0xD0(0x10)
		TArray<FNiagaraMeshMICOverride> MICOverrideMaterials; // 0xE0(0x10)
		FVector2D SubImageSize; // 0xF0(0x10)
		FVector LockedAxis; // 0x100(0x18)
		FVector MeshBoundsScale; // 0x118(0x18)
		ENiagaraMeshFacingMode FacingMode; // 0x130(0x1)
		ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x131(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x132(0x2) UNKNOWN PROPERTY
		float MinCameraDistance; // 0x134(0x4)
		float MaxCameraDistance; // 0x138(0x4)
		uint32_t RendererVisibility; // 0x13C(0x4)
		FNiagaraVariableAttributeBinding PositionBinding; // 0x140(0x28)
		FNiagaraVariableAttributeBinding ColorBinding; // 0x168(0x28)
		FNiagaraVariableAttributeBinding VelocityBinding; // 0x190(0x28)
		FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1B8(0x28)
		FNiagaraVariableAttributeBinding ScaleBinding; // 0x1E0(0x28)
		FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x208(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x230(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x258(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x280(0x28)
		FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x2A8(0x28)
		FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x2D0(0x28)
		FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x2F8(0x28)
		FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x320(0x28)
		FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x348(0x28)
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x370(0x28)
		FNiagaraVariableAttributeBinding MeshIndexBinding; // 0x398(0x28)
		FNiagaraRendererMaterialParameters MaterialParameters; // 0x3C0(0x50)
		FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x410(0x28)
		FNiagaraVariableAttributeBinding PrevScaleBinding; // 0x438(0x28)
		FNiagaraVariableAttributeBinding PrevMeshOrientationBinding; // 0x460(0x28)
		FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x488(0x28)
		FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x4B0(0x28)
		uint32_t MaterialParamValidMask; // 0x4D8(0x4)
		unsigned char UnknownData03_7[0x54]; // 0x4DC(0x54) UNKNOWN PROPERTY

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
		UNiagaraParameterCollection* Collection; // 0x28(0x8)
		TArray<FNiagaraVariable> OverridenParameters; // 0x30(0x10)
		FNiagaraParameterStore ParameterStorage; // 0x40(0x88)
		UMaterialParameterCollectionInstance* SourceMaterialCollectionInstance; // 0xC8(0x8)
		unsigned char UnknownData00_7[0x28]; // 0xD0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraParameterCollectionInstance");
			return ret;
		}

		void SetVectorParameter(FString InVariableName, FVector InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23DF44(relative to base address)
		void SetVector4Parameter(FString InVariableName, FVector4& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23DE50(relative to base address)
		void SetVector2DParameter(FString InVariableName, FVector2D InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23DCDC(relative to base address)
		void SetQuatParameter(FString InVariableName, FQuat& InValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23DBFC(relative to base address)
		void SetIntParameter(FString InVariableName, int32_t InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D23DB28(relative to base address)
		void SetFloatParameter(FString InVariableName, float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D23DA54(relative to base address)
		void SetColorParameter(FString InVariableName, FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23D8E0(relative to base address)
		void SetBoolParameter(FString InVariableName, bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D23D808(relative to base address)
		FVector GetVectorParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23D5B4(relative to base address)
		FVector4 GetVector4Parameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23D504(relative to base address)
		FVector2D GetVector2DParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23D45C(relative to base address)
		FQuat GetQuatParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23D3AC(relative to base address)
		int32_t GetIntParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D23D310(relative to base address)
		float GetFloatParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D23D270(relative to base address)
		FLinearColor GetColorParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D23D1C8(relative to base address)
		bool GetBoolParameter(FString InVariableName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D23D12C(relative to base address)
	};


	// Class Niagara.NiagaraParameterCollection
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UNiagaraParameterCollection : public UObject	
	{
	public:
		FName NameSpace; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray<FNiagaraVariable> Parameters; // 0x30(0x10)
		UMaterialParameterCollection* SourceMaterialCollection; // 0x40(0x8)
		UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48(0x8)
		FGuid CompileId; // 0x50(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x60(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UNiagaraEffectType* EffectType; // 0x30(0x8)
		ANiagaraPerfBaselineActor* Owner; // 0x38(0x8)
		TWeakObjectPtr<UNiagaraSystem*> System; // 0x40(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraBaselineController");
			return ret;
		}

		bool OnTickTest(); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C5D1DC4(relative to base address)
		void OnOwnerTick(float DeltaTime); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D23D784(relative to base address)
		void OnEndTest(FNiagaraPerfBaselineStats Stats); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D23D664(relative to base address)
		void OnBeginTest(); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7494B08D8(relative to base address)
		UNiagaraSystem GetSystem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C6345FC(relative to base address)
	};


	// Class Niagara.NiagaraBaselineController_Basic
	// Inherited from UNiagaraBaselineController -> UObject
	// Size: 0x18 (0x78 - 0x60)
	class UNiagaraBaselineController_Basic : public UNiagaraBaselineController	
	{
	public:
		int32_t NumInstances; // 0x60(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		TArray<UNiagaraComponent*> SpawnedComponents; // 0x68(0x10)

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
		UNiagaraBaselineController* Controller; // 0x290(0x8)
		UTextRenderComponent* Label; // 0x298(0x8)

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
		TArray<UNiagaraScript*> Scripts; // 0x28(0x10)
		UNiagaraSystem* System; // 0x38(0x8)

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

		void SetSystem(UNiagaraSystem* InSystem); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLabelText(FText& InXAxisText, FText& InYAxisText); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		int32_t Num(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C388678(relative to base address)
		void ApplyToPreview(UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74D24F5D4(relative to base address)
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
		UNiagaraSystem* System; // 0x290(0x8)
		ENiagaraPreviewGridResetMode ResetMode; // 0x298(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		UNiagaraPreviewAxis* PreviewAxisX; // 0x2A0(0x8)
		UNiagaraPreviewAxis* PreviewAxisY; // 0x2A8(0x8)
		UClass* PreviewClass; // 0x2B0(0x8)
		float SpacingX; // 0x2B8(0x4)
		float SpacingY; // 0x2BC(0x4)
		int32_t NumX; // 0x2C0(0x4)
		int32_t NumY; // 0x2C4(0x4)
		TArray<UChildActorComponent*> PreviewComponents; // 0x2C8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraPreviewGrid");
			return ret;
		}

		void SetPaused(bool bPaused); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D24F7EC(relative to base address)
		void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D24F750(relative to base address)
		void DeactivatePreviews(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D24F73C(relative to base address)
		void ActivatePreviews(bool bReset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D24F558(relative to base address)
	};


	// Class Niagara.NiagaraRibbonRendererProperties
	// Inherited from UNiagaraRendererProperties -> UNiagaraMergeable -> UObject
	// Size: 0x530 (0x5E0 - 0xB0)
	class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties	
	{
	public:
		UMaterialInterface* Material; // 0xB0(0x8)
		FNiagaraUserParameterBinding MaterialUserParamBinding; // 0xB8(0x18)
		FNiagaraRibbonUVSettings UV0Settings; // 0xD0(0x28)
		FNiagaraRibbonUVSettings UV1Settings; // 0xF8(0x28)
		ENiagaraRibbonFacingMode FacingMode; // 0x120(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x121(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_5[0x1]; // 0x12B(0x1) UNKNOWN PROPERTY
		int32_t WidthSegmentationCount; // 0x12C(0x4)
		int32_t MultiPlaneCount; // 0x130(0x4)
		int32_t TubeSubdivisions; // 0x134(0x4)
		TArray<FNiagaraRibbonShapeCustomVertex> CustomVertices; // 0x138(0x10)
		ENiagaraRibbonTessellationMode TessellationMode; // 0x148(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x149(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData03_7[0x9C]; // 0x544(0x9C) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		ENiagaraScriptUsage Usage; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FGuid UsageId; // 0x34(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FNiagaraParameterStore RapidIterationParameters; // 0x48(0x88)
		FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xD0(0x90)
		TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x160(0x10)
		FNiagaraVMExecutableDataId CachedScriptVMId; // 0x170(0x58)
		unsigned char UnknownData03_6[0x10]; // 0x1C8(0x10) UNKNOWN PROPERTY
		FNiagaraVMExecutableData CachedScriptVM; // 0x1D8(0x1A0)
		TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x378(0x10)
		TArray<FNiagaraScriptResolvedDataInterfaceInfo> ResolvedDataInterfaces; // 0x388(0x10)
		TArray<FNiagaraResolvedUserDataInterfaceBinding> ResolvedUserDataInterfaceBindings; // 0x398(0x10)
		TArray<FNiagaraResolvedUObjectInfo> ResolvedUObjectInfos; // 0x3A8(0x10)
		unsigned char UnknownData04_7[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraScript");
			return ret;
		}

		void RaiseOnGPUCompilationComplete(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class Niagara.NiagaraSimCache
	// Inherited from UObject
	// Size: 0x1D0 (0x1F8 - 0x28)
	class UNiagaraSimCache : public UObject	
	{
	public:
		FGuid CacheGuid; // 0x28(0x10)
		TWeakObjectPtr<UNiagaraSystem*> SoftNiagaraSystem; // 0x38(0x20)
		float StartSeconds; // 0x58(0x4)
		float DurationSeconds; // 0x5C(0x4)
		FNiagaraSimCacheCreateParameters CreateParameters; // 0x60(0x58)
		bool bNeedsReadComponentMappingRecache; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FNiagaraSimCacheLayout CacheLayout; // 0xC0(0xC0)
		TArray<FNiagaraSimCacheFrame> CacheFrames; // 0x180(0x10)
		TMap<FNiagaraVariableBase, UObject*> DataInterfaceStorage; // 0x190(0x50)
		unsigned char UnknownData01_7[0x18]; // 0x1E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.NiagaraSimCache");
			return ret;
		}

		void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D266CFC(relative to base address)
		void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D266ACC(relative to base address)
		void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D2667DC(relative to base address)
		void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D266418(relative to base address)
		void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D26605C(relative to base address)
		void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D265C00(relative to base address)
		void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D265844(relative to base address)
		void ReadIntAttribute(TArray<int32_t>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D265554(relative to base address)
		void ReadIDAttribute(TArray<FNiagaraID>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D265264(relative to base address)
		void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264F38(relative to base address)
		UObject ReadDataInterfaceAs(UClass* RequestedType, FName AttributeName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264E38(relative to base address)
		void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264B48(relative to base address)
		bool IsEmpty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264B30(relative to base address)
		bool IsCacheValid(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264B18(relative to base address)
		float GetStartSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D04(relative to base address)
		int32_t GetNumFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264B00(relative to base address)
		int32_t GetNumEmitters(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264AE8(relative to base address)
		TArray GetEmitterNames(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264AA8(relative to base address)
		FName GetEmitterName(int32_t EmitterIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264A00(relative to base address)
		ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3C1498(relative to base address)
	};


	// Class Niagara.AsyncNiagaraCaptureSimCache
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x100 (0x130 - 0x30)
	class UAsyncNiagaraCaptureSimCache : public UCancellableAsyncAction	
	{
	public:
		UNiagaraSimCache* CaptureSimCache; // 0x30(0x8)
		UNiagaraComponent* CaptureComponent; // 0x38(0x8)
		FMulticastInlineDelegate CaptureComplete; // 0x40(0x10)
		unsigned char UnknownData00_7[0xE0]; // 0x50(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.AsyncNiagaraCaptureSimCache");
			return ret;
		}

		void OnCaptureComplete__DelegateSignature(bool bSuccess); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UAsyncNiagaraCaptureSimCache CaptureNiagaraSimCacheUntilComplete(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache* OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D264424(relative to base address)
		UAsyncNiagaraCaptureSimCache CaptureNiagaraSimCacheMultiFrame(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache* OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D263E20(relative to base address)
		UAsyncNiagaraCaptureSimCache CaptureNiagaraSimCache(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, FNiagaraSimCacheCaptureParameters CaptureParameters, UNiagaraSimCache* OutSimCache); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2635D0(relative to base address)
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

		UNiagaraSimCache CreateNiagaraSimCache(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D264964(relative to base address)
		bool CaptureNiagaraSimCacheImmediate(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache* OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2639BC(relative to base address)
	};


	// Class Niagara.NiagaraSimulationStageBase
	// Inherited from UNiagaraMergeable -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNiagaraSimulationStageBase : public UNiagaraMergeable	
	{
	public:
		UNiagaraScript* Script; // 0x28(0x8)
		FName SimulationStageName; // 0x30(0x4)
		bool bEnabled : 1; // 0x34:0(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FNiagaraParameterBindingWithValue NumIterations; // 0x68(0x18)
		ENiagaraSimStageExecuteBehavior ExecuteBehavior; // 0x80(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
		bool bDisablePartialParticleUpdate : 1; // 0x84:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		FNiagaraVariableDataInterfaceBinding DataInterface; // 0x88(0x18)
		bool bParticleIterationStateEnabled : 1; // 0xA0:0(0x1)
		unsigned char UnknownData03_5[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding ParticleIterationStateBinding; // 0xA8(0x28)
		FIntPoint ParticleIterationStateRange; // 0xD0(0x8)
		bool bGpuDispatchForceLinear : 1; // 0xD8:0(0x1)
		bool bOverrideGpuDispatchNumThreads : 1; // 0xD8:1(0x1)
		unsigned char UnknownData04_5[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY
		FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsX; // 0xE0(0x18)
		FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsY; // 0xF8(0x18)
		FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsZ; // 0x110(0x18)
		ENiagaraGpuDispatchType DirectDispatchType; // 0x128(0x1)
		ENiagaraDirectDispatchElementType DirectDispatchElementType; // 0x129(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x12A(0x6) UNKNOWN PROPERTY
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
		UMaterialInterface* Material; // 0xB0(0x8)
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
		unsigned char UnknownData00_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_7[0x64]; // 0x5A4(0x64) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x1]; // 0x53(0x1) UNKNOWN PROPERTY
		int32_t CustomDepthStencilValue; // 0x54(0x4)
		int32_t TranslucencySortPriority; // 0x58(0x4)
		float TranslucencySortDistanceOffset; // 0x5C(0x4)
		bool bDumpDebugSystemInfo; // 0x60(0x1)
		bool bDumpDebugEmitterInfo; // 0x61(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x62(0x1) UNKNOWN PROPERTY
		bool bRequireCurrentFrameData; // 0x63(0x1)
		bool bFixedBounds : 1; // 0x64:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		UNiagaraEffectType* EffectType; // 0x68(0x8)
		bool bOverrideScalabilitySettings; // 0x70(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		bool bOverrideAllowCullingForLocalPlayers : 1; // 0x74:0(0x1)
		bool bAllowCullingForLocalPlayersOverride : 1; // 0x74:1(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x78(0x10)
		FNiagaraPlatformSet Platforms; // 0x88(0x30)
		TArray<FNiagaraEmitterHandle> EmitterHandles; // 0xB8(0x10)
		TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0xC8(0x10)
		UNiagaraScript* SystemSpawnScript; // 0xD8(0x8)
		UNiagaraScript* SystemUpdateScript; // 0xE0(0x8)
		unsigned char UnknownData05_6[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY
		FNiagaraSystemCompiledData SystemCompiledData; // 0xF8(0x228)
		FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x320(0xD8)
		FBox FixedBounds; // 0x3F8(0x38)
		bool bDeterminism; // 0x430(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x431(0x3) UNKNOWN PROPERTY
		int32_t RandomSeed; // 0x434(0x4)
		float WarmupTime; // 0x438(0x4)
		int32_t WarmupTickCount; // 0x43C(0x4)
		float WarmupTickDelta; // 0x440(0x4)
		bool bFixedTickDelta; // 0x444(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x445(0x3) UNKNOWN PROPERTY
		float FixedTickDeltaTime; // 0x448(0x4)
		bool bNeedsGPUContextInitForDataInterfaces; // 0x44C(0x1)
		unsigned char UnknownData08_6[0xA3]; // 0x44D(0xA3) UNKNOWN PROPERTY
		unsigned char UnknownBit09 : 1; // 0x4F0:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit10 : 1; // 0x4F0:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit11 : 1; // 0x4F0:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit12 : 1; // 0x4F0:3(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit13 : 1; // 0x4F0:4(0x1) UNKNOWN PROPERTY
		bool bAllowSystemStateFastPath : 1; // 0x4F0:5(0x1)
		bool bSystemStateFastPathEnabled : 1; // 0x4F0:6(0x1)
		unsigned char UnknownData14_5[0xF]; // 0x4F1(0xF) UNKNOWN PROPERTY
		FNiagaraSystemStateData SystemStateData; // 0x500(0x58)
		unsigned char UnknownData15_7[0x8]; // 0x558(0x8) UNKNOWN PROPERTY

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
		UMaterialInterface* Material; // 0xB0(0x8)
		FNiagaraParameterBinding MaterialParameterBinding; // 0xB8(0x8)
		unsigned char UnknownData00_6[0x4]; // 0xC0(0x4) UNKNOWN PROPERTY
		int32_t RendererVisibility; // 0xC4(0x4)
		float StepFactor; // 0xC8(0x4)
		float LightingDownsampleFactor; // 0xCC(0x4)
		float ShadowStepFactor; // 0xD0(0x4)
		float ShadowBiasFactor; // 0xD4(0x4)
		unsigned char UnknownData01_6[0x78]; // 0xD8(0x78) UNKNOWN PROPERTY
		FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x150(0x28)
		FNiagaraVariableAttributeBinding VolumeResolutionMaxAxisBinding; // 0x178(0x28)
		FNiagaraVariableAttributeBinding VolumeWorldSpaceSizeBinding; // 0x1A0(0x28)
		FNiagaraRendererMaterialParameters MaterialParameters; // 0x1C8(0x50)
		unsigned char UnknownData02_7[0x28]; // 0x218(0x28) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FIntVector Resolution; // 0x3C(0xC)
		int32_t FrameRangeStart; // 0x48(0x4)
		int32_t FrameRangeEnd; // 0x4C(0x4)
		unsigned char UnknownData01_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Niagara.VolumeCache");
			return ret;
		}
	};

}
