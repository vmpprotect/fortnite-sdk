#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class InterchangeEngine.InterchangeBlueprintPipelineBase
	// Inherited from UBlueprint -> UBlueprintCore -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UInterchangeBlueprintPipelineBase : public UBlueprint	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeBlueprintPipelineBase");
			return ret;
		}
	};


	// Class InterchangeEngine.InterchangeFilePickerBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeFilePickerBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeFilePickerBase");
			return ret;
		}

		bool ScriptedFilePickerForTranslatorType(EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7522AF3A0(relative to base address)
		bool ScriptedFilePickerForTranslatorAssetType(EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7522AF224(relative to base address)
	};


	// Class InterchangeEngine.InterchangePipelineConfigurationBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangePipelineConfigurationBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangePipelineConfigurationBase");
			return ret;
		}

		EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7522B012C(relative to base address)
		EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer, UObject* ReimportAsset); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7522AFCFC(relative to base address)
		EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7522AF998(relative to base address)
	};


	// Class InterchangeEngine.InterchangeProjectSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x200 (0x230 - 0x30)
	class UInterchangeProjectSettings : public UDeveloperSettings	
	{
	public:
		FInterchangeContentImportSettings ContentImportSettings; // 0x30(0x120)
		FInterchangeImportSettings SceneImportSettings; // 0x150(0x80)
		TWeakObjectPtr<UClass*> FilePickerClass; // 0x1D0(0x20)
		bool bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing; // 0x1F0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1F1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> GenericPipelineClass; // 0x1F8(0x20)
		FSoftObjectPath ConverterDefaultPipeline; // 0x218(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeProjectSettings");
			return ret;
		}
	};


	// Class InterchangeEngine.InterchangeEditorSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UInterchangeEditorSettings : public UDeveloperSettings	
	{
	public:
		bool bShowImportDialogAtReimport; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeEditorSettings");
			return ret;
		}
	};


	// Class InterchangeEngine.InterchangePythonPipelineBase
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0x0 (0x128 - 0x128)
	class UInterchangePythonPipelineBase : public UInterchangePipelineBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangePythonPipelineBase");
			return ret;
		}
	};


	// Class InterchangeEngine.InterchangePythonPipelineAsset
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UInterchangePythonPipelineAsset : public UObject	
	{
	public:
		TWeakObjectPtr<UClass*> PythonClass; // 0x28(0x20)
		UInterchangePythonPipelineBase* GeneratedPipeline; // 0x48(0x8)
		FString JsonDefaultProperties; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangePythonPipelineAsset");
			return ret;
		}
	};


	// Class InterchangeEngine.InterchangeSceneImportAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInterchangeSceneImportAsset : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeSceneImportAsset");
			return ret;
		}
	};


	// Class InterchangeEngine.InterchangeAssetImportData
	// Inherited from UAssetImportData -> UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UInterchangeAssetImportData : public UAssetImportData	
	{
	public:
		FSoftObjectPath SceneImportAsset; // 0x28(0x18)
		FString NodeUniqueID; // 0x40(0x10)
		UInterchangeBaseNodeContainer* NodeContainer; // 0x50(0x8)
		TArray<UObject*> Pipelines; // 0x58(0x10)
		UInterchangeBaseNodeContainer* TransientNodeContainer; // 0x68(0x8)
		TArray<UObject*> TransientPipelines; // 0x70(0x10)
		UInterchangeTranslatorSettings* TransientTranslatorSettings; // 0x80(0x8)
		unsigned char UnknownData00_7[0x48]; // 0x88(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeAssetImportData");
			return ret;
		}

		void SetTranslatorSettings(UInterchangeTranslatorSettings* TranslatorSettings); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7522B05AC(relative to base address)
		void SetPipelines(TArray<UObject*>& InPipelines); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522B0510(relative to base address)
		void SetNodeContainer(UInterchangeBaseNodeContainer* InNodeContainer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7522B0490(relative to base address)
		FString ScriptGetFirstFilename(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C642A74(relative to base address)
		TArray ScriptExtractFilenames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3803DC(relative to base address)
		TArray ScriptExtractDisplayLabels(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3803DC(relative to base address)
		UInterchangeTranslatorSettings GetTranslatorSettings(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522AEE7C(relative to base address)
		UInterchangeBaseNode GetStoredNode(FString InNodeUniqueId); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522AEDCC(relative to base address)
		UInterchangeFactoryBaseNode GetStoredFactoryNode(FString InNodeUniqueId); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522AED1C(relative to base address)
		TArray GetPipelines(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522AEC4C(relative to base address)
		int32_t GetNumberOfPipelines(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522AEC18(relative to base address)
		UInterchangeBaseNodeContainer GetNodeContainer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522AEBF4(relative to base address)
	};


	// Class InterchangeEngine.InterchangeAssetImportDataConverterBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeAssetImportDataConverterBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeAssetImportDataConverterBase");
			return ret;
		}
	};


	// Class InterchangeEngine.InterchangePipelineStackOverride
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UInterchangePipelineStackOverride : public UObject	
	{
	public:
		TArray<FSoftObjectPath> OverridePipelines; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangePipelineStackOverride");
			return ret;
		}

		void AddPythonPipeline(UInterchangePythonPipelineBase* PipelineBase); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522AEAC0(relative to base address)
		void AddPipeline(UInterchangePipelineBase* PipelineBase); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522AEAC0(relative to base address)
		void AddBlueprintPipeline(UInterchangeBlueprintPipelineBase* PipelineBase); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522AEAC0(relative to base address)
	};


	// Class InterchangeEngine.InterchangeManager
	// Inherited from UObject
	// Size: 0x3A8 (0x3D0 - 0x28)
	class UInterchangeManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x1E8]; // 0x28(0x1E8) UNKNOWN PROPERTY
		TSet<UClass*> RegisteredTranslatorsClass; // 0x210(0x50)
		TMap<UClass*, UClass*> RegisteredFactoryClasses; // 0x260(0x50)
		TMap<UClass*, UInterchangeWriterBase*> RegisteredWriters; // 0x2B0(0x50)
		TMap<UClass*, UInterchangeAssetImportDataConverterBase*> RegisteredConverters; // 0x300(0x50)
		unsigned char UnknownData01_7[0x80]; // 0x350(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeManager");
			return ret;
		}

		bool ScriptedImportSceneAsync(FString ContentPath, UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522AF80C(relative to base address)
		bool ScriptedImportAssetAsync(FString ContentPath, UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522AF51C(relative to base address)
		bool ImportScene(FString ContentPath, UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522AF078(relative to base address)
		bool ImportAsset(FString ContentPath, UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters, TArray<UObject*>& OutImportedObjects); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522AEEB4(relative to base address)
		UClass GetRegisteredFactoryClass(UClass* ClassToMake); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522AEC8C(relative to base address)
		UInterchangeManager GetInterchangeManagerScripted(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7522AEBD0(relative to base address)
		bool ExportScene(UObject* World, bool bIsAutomated); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6EB40(relative to base address)
		bool ExportAsset(UObject* Asset, bool bIsAutomated); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6EB40(relative to base address)
		UInterchangeSourceData CreateSourceData(FString InFilename); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7522AEB40(relative to base address)
	};


	// Class InterchangeEngine.InterchangeMeshUtilities
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeMeshUtilities : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeMeshUtilities");
			return ret;
		}

		bool ScriptedImportMorphTarget(USkeletalMesh* SkeletalMesh, int32_t LODIndex, UInterchangeSourceData* SourceData, FString MorphTargetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522AF6B8(relative to base address)
	};

}
