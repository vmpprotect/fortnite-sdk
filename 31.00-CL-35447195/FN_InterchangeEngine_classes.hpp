#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		bool ScriptedFilePickerForTranslatorType(EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray& OutFilenames); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414EDD260
		bool ScriptedFilePickerForTranslatorAssetType(EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray& OutFilenames); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414EDD180
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

		EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray& PipelineStacks, TArray& OutPipelines, UInterchangeSourceData SourceData, UInterchangeTranslatorBase Translator, UInterchangeBaseNodeContainer BaseNodeContainer); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414EDD500
		EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray& PipelineStacks, TArray& OutPipelines, UInterchangeSourceData SourceData, UInterchangeTranslatorBase Translator, UInterchangeBaseNodeContainer BaseNodeContainer, UObject ReimportAsset); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414EDD420
		EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray& PipelineStacks, TArray& OutPipelines, UInterchangeSourceData SourceData, UInterchangeTranslatorBase Translator, UInterchangeBaseNodeContainer BaseNodeContainer); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414EDD340
	};


	// Class InterchangeEngine.InterchangeProjectSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x200 (0x230 - 0x30)
	class UInterchangeProjectSettings : public UDeveloperSettings	
	{
	public:
		FInterchangeContentImportSettings ContentImportSettings; // 0x30(0x120)
		FInterchangeImportSettings SceneImportSettings; // 0x150(0x80)
		TWeakObjectPtr FilePickerClass; // 0x1D0(0x20)
		bool bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing; // 0x1F0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1F1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr GenericPipelineClass; // 0x1F8(0x20)
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
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		TWeakObjectPtr PythonClass; // 0x28(0x20)
		UInterchangePythonPipelineBase GeneratedPipeline; // 0x48(0x8)
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
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		UInterchangeBaseNodeContainer NodeContainer; // 0x50(0x8)
		TArray Pipelines; // 0x58(0x10)
		UInterchangeBaseNodeContainer TransientNodeContainer; // 0x68(0x8)
		TArray TransientPipelines; // 0x70(0x10)
		UInterchangeTranslatorSettings TransientTranslatorSettings; // 0x80(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x88(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeAssetImportData");
			return ret;
		}

		void SetTranslatorSettings(UInterchangeTranslatorSettings TranslatorSettings); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF414EDDF80
		void SetPipelines(TArray& InPipelines); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414EDDEA0
		void SetNodeContainer(UInterchangeBaseNodeContainer InNodeContainer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF414EDDDC0
		FString ScriptGetFirstFilename(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDDCE0
		TArray ScriptExtractFilenames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDDC00
		TArray ScriptExtractDisplayLabels(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDDB20
		UInterchangeTranslatorSettings GetTranslatorSettings(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDDA40
		UInterchangeBaseNode GetStoredNode(FString InNodeUniqueId); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDD960
		UInterchangeFactoryBaseNode GetStoredFactoryNode(FString InNodeUniqueId); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDD880
		TArray GetPipelines(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDD7A0
		int32_t GetNumberOfPipelines(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDD6C0
		UInterchangeBaseNodeContainer GetNodeContainer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDD5E0
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
		TArray OverridePipelines; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangePipelineStackOverride");
			return ret;
		}

		void AddPythonPipeline(UInterchangePythonPipelineBase PipelineBase); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414EDE220
		void AddPipeline(UInterchangePipelineBase PipelineBase); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414EDE140
		void AddBlueprintPipeline(UInterchangeBlueprintPipelineBase PipelineBase); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414EDE060
	};


	// Class InterchangeEngine.InterchangeManager
	// Inherited from UObject
	// Size: 0x3A8 (0x3D0 - 0x28)
	class UInterchangeManager : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x1E8]; // 0x28(0x1E8) UNKNOWN PROPERTY
		TSet RegisteredTranslatorsClass; // 0x210(0x50)
		TMap RegisteredFactoryClasses; // 0x260(0x50)
		TMap RegisteredWriters; // 0x2B0(0x50)
		TMap RegisteredConverters; // 0x300(0x50)
		unsigned char UnknownData03_7[0x80]; // 0x350(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeEngine.InterchangeManager");
			return ret;
		}

		bool ScriptedImportSceneAsync(FString ContentPath, UInterchangeSourceData SourceData, FImportAssetParameters& ImportAssetParameters); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDEA00
		bool ScriptedImportAssetAsync(FString ContentPath, UInterchangeSourceData SourceData, FImportAssetParameters& ImportAssetParameters); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDE920
		bool ImportScene(FString ContentPath, UInterchangeSourceData SourceData, FImportAssetParameters& ImportAssetParameters); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDE840
		bool ImportAsset(FString ContentPath, UInterchangeSourceData SourceData, FImportAssetParameters& ImportAssetParameters, TArray& OutImportedObjects); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EDE760
		UClass GetRegisteredFactoryClass(UClass ClassToMake); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDE680
		UInterchangeManager GetInterchangeManagerScripted(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EDE5A0
		bool ExportScene(UObject World, bool bIsAutomated); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414EDE4C0
		bool ExportAsset(UObject Asset, bool bIsAutomated); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414EDE3E0
		UInterchangeSourceData CreateSourceData(FString InFilename); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414EDE300
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

		bool ScriptedImportMorphTarget(USkeletalMesh SkeletalMesh, int32_t LODIndex, UInterchangeSourceData SourceData, FString MorphTargetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EDEAE0
	};

}
