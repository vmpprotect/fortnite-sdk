#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class InterchangeCore.InterchangeFactoryBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInterchangeFactoryBase : public UObject	
	{
	public:
		UInterchangeResultsContainer* Results; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeFactoryBase");
			return ret;
		}

		UClass GetFactoryClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748E00E28(relative to base address)
	};


	// Class InterchangeCore.InterchangeSourceData
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UInterchangeSourceData : public UObject	
	{
	public:
		FString Filename; // 0x28(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeSourceData");
			return ret;
		}

		bool SetFilename(FString InFilename); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752255244(relative to base address)
		FString GetFilename(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75225250C(relative to base address)
	};


	// Class InterchangeCore.InterchangeWriterBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeWriterBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeWriterBase");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangePipelineBase
	// Inherited from UObject
	// Size: 0x100 (0x128 - 0x28)
	class UInterchangePipelineBase : public UObject	
	{
	public:
		FString DestinationName; // 0x28(0x10)
		FString ContentImportPath; // 0x38(0x10)
		unsigned char UnknownData00_6[0x3]; // 0x48(0x3) UNKNOWN PROPERTY
		bool bFromReimportOrOverride; // 0x4B(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UInterchangeResultsContainer* Results; // 0x50(0x8)
		TMap<FName, FInterchangePipelinePropertyStates> PropertiesStates; // 0x58(0x50)
		unsigned char UnknownData02_7[0x80]; // 0xA8(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangePipelineBase");
			return ret;
		}

		void ScriptedSetReimportSourceIndex(UClass* ReimportObjectClass, int32_t SourceFileIndex); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7522548B0(relative to base address)
		FString ScriptedGetPipelineDisplayName(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF752254868(relative to base address)
		void ScriptedExecutePostImportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF752254710(relative to base address)
		void ScriptedExecutePostFactoryPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7522545B8(relative to base address)
		void ScriptedExecutePipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*>& SourceDatas, FString ContentBasePath); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7522543F4(relative to base address)
		void ScriptedExecuteExportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74D8BB810(relative to base address)
		FInterchangePipelinePropertyStates FindOrAddPropertyStates(FName PropertyPath); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75225186C(relative to base address)
		bool DoesPropertyStatesExist(FName PropertyPath); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522516C4(relative to base address)
	};


	// Class InterchangeCore.InterchangeResult
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UInterchangeResult : public UObject	
	{
	public:
		FString SourceAssetName; // 0x28(0x10)
		FString DestinationAssetName; // 0x38(0x10)
		FString AssetFriendlyName; // 0x48(0x10)
		UClass* AssetType; // 0x58(0x8)
		FString InterchangeKey; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeResult");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeResultSuccess
	// Inherited from UInterchangeResult -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UInterchangeResultSuccess : public UInterchangeResult	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeResultSuccess");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeResultWarning
	// Inherited from UInterchangeResult -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UInterchangeResultWarning : public UInterchangeResult	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeResultWarning");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeResultError
	// Inherited from UInterchangeResult -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UInterchangeResultError : public UInterchangeResult	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeResultError");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeResultWarning_Generic
	// Inherited from UInterchangeResultWarning -> UInterchangeResult -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UInterchangeResultWarning_Generic : public UInterchangeResultWarning	
	{
	public:
		FText Text; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeResultWarning_Generic");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeResultError_Generic
	// Inherited from UInterchangeResultError -> UInterchangeResult -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UInterchangeResultError_Generic : public UInterchangeResultError	
	{
	public:
		FText Text; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeResultError_Generic");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeResultError_ReimportFail
	// Inherited from UInterchangeResultError -> UInterchangeResult -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UInterchangeResultError_ReimportFail : public UInterchangeResultError	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeResultError_ReimportFail");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeResultDisplay_Generic
	// Inherited from UInterchangeResultSuccess -> UInterchangeResult -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UInterchangeResultDisplay_Generic : public UInterchangeResultSuccess	
	{
	public:
		FText Text; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeResultDisplay_Generic");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeResultsContainer
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UInterchangeResultsContainer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		TArray<UInterchangeResult*> Results; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeResultsContainer");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeTranslatorSettings
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeTranslatorSettings : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeTranslatorSettings");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeTranslatorBase
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UInterchangeTranslatorBase : public UObject	
	{
	public:
		UInterchangeResultsContainer* Results; // 0x28(0x8)
		UInterchangeSourceData* SourceData; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeTranslatorBase");
			return ret;
		}
	};


	// Class InterchangeCore.InterchangeBaseNode
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UInterchangeBaseNode : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x28(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeBaseNode");
			return ret;
		}

		bool SetParentUid(FString ParentUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752255428(relative to base address)
		bool SetEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522550B4(relative to base address)
		bool SetDisplayLabel(FString DisplayName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752255018(relative to base address)
		bool SetAssetName(FString AssetName); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752254978(relative to base address)
		bool RemoveTargetNodeUid(FString AssetUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522540F4(relative to base address)
		bool RemoveAttribute(FString NodeAttributeKey); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752253F18(relative to base address)
		bool IsEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752253DC8(relative to base address)
		void InitializeNode(FString UniqueID, FString DisplayLabel, EInterchangeNodeContainerType NodeContainerType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752253BA8(relative to base address)
		bool GetVector2Attribute(FString NodeAttributeKey, FVector2f& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752253ABC(relative to base address)
		FString GetUniqueID(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522531B0(relative to base address)
		void GetTargetNodeUids(TArray<FString>& OutTargetAssets); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522530EC(relative to base address)
		int32_t GetTargetNodeCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522530C4(relative to base address)
		bool GetStringAttribute(FString NodeAttributeKey, FString& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252FB8(relative to base address)
		FString GetParentUid(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252E90(relative to base address)
		EInterchangeNodeContainerType GetNodeContainerType(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252D60(relative to base address)
		bool GetLinearColorAttribute(FString NodeAttributeKey, FLinearColor& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252964(relative to base address)
		bool GetInt32Attribute(FString NodeAttributeKey, int32_t& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252738(relative to base address)
		bool GetGuidAttribute(FString NodeAttributeKey, FGuid& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252644(relative to base address)
		bool GetFloatAttribute(FString NodeAttributeKey, float& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252554(relative to base address)
		bool GetDoubleAttribute(FString NodeAttributeKey, double& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252084(relative to base address)
		FString GetDisplayLabel(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252044(relative to base address)
		bool GetBooleanAttribute(FString NodeAttributeKey, bool& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251944(relative to base address)
		FString GetAssetName(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251900(relative to base address)
		bool AddVector2Attribute(FString NodeAttributeKey, FVector2f& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7522509CC(relative to base address)
		bool AddTargetNodeUid(FString AssetUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75225092C(relative to base address)
		bool AddStringAttribute(FString NodeAttributeKey, FString Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752250830(relative to base address)
		bool AddLinearColorAttribute(FString NodeAttributeKey, FLinearColor& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF752250664(relative to base address)
		bool AddInt32Attribute(FString NodeAttributeKey, int32_t& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752250534(relative to base address)
		bool AddGuidAttribute(FString NodeAttributeKey, FGuid& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF752250440(relative to base address)
		bool AddFloatAttribute(FString NodeAttributeKey, float& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752250350(relative to base address)
		bool AddDoubleAttribute(FString NodeAttributeKey, double& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522501BC(relative to base address)
		bool AddBooleanAttribute(FString NodeAttributeKey, bool& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522500CC(relative to base address)
	};


	// Class InterchangeCore.InterchangeBaseNodeContainer
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class UInterchangeBaseNodeContainer : public UObject	
	{
	public:
		TMap<FString, UInterchangeBaseNode*> Nodes; // 0x28(0x50)
		unsigned char UnknownData00_7[0x50]; // 0x78(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeBaseNodeContainer");
			return ret;
		}

		bool SetNodeParentUid(FString NodeUniqueID, FString NewParentNodeUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75225532C(relative to base address)
		void SaveToFile(FString Filename); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752254364(relative to base address)
		void ResetChildrenCache(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752254350(relative to base address)
		void Reset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75225433C(relative to base address)
		void ReplaceNode(FString NodeUniqueID, UInterchangeFactoryBaseNode* NewNode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752254268(relative to base address)
		void LoadFromFile(FString Filename); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752253E88(relative to base address)
		bool IsNodeUidValid(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752253DEC(relative to base address)
		void GetRoots(TArray<FString>& RootNodes); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252EF4(relative to base address)
		void GetNodes(UClass* ClassNode, TArray<FString>& OutNodes); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252D84(relative to base address)
		TArray GetNodeChildrenUids(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252CAC(relative to base address)
		int32_t GetNodeChildrenCount(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252C10(relative to base address)
		UInterchangeBaseNode GetNodeChildren(FString NodeUniqueID, int32_t ChildIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752252B2C(relative to base address)
		UInterchangeBaseNode GetNode(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252A8C(relative to base address)
		bool GetIsAncestor(FString NodeUniqueID, FString AncestorUID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252868(relative to base address)
		UInterchangeFactoryBaseNode GetFactoryNode(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75225246C(relative to base address)
		void ComputeChildrenCache(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752250B14(relative to base address)
		FString AddNode(UInterchangeBaseNode* Node); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75225078C(relative to base address)
	};


	// Class InterchangeCore.InterchangeFactoryBaseNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0xE0 (0x140 - 0x60)
	class UInterchangeFactoryBaseNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0xE0]; // 0x60(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeFactoryBaseNode");
			return ret;
		}

		bool UnsetSkipNodeImport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522555EC(relative to base address)
		bool UnsetForceNodeReimport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522555C8(relative to base address)
		bool ShouldSkipNodeImport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7522555A4(relative to base address)
		bool ShouldForceNodeReimport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752255580(relative to base address)
		bool SetSkipNodeImport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75225555C(relative to base address)
		bool SetReimportStrategyFlags(EReimportStrategyFlags& ReimportStrategyFlags); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522554C4(relative to base address)
		bool SetForceNodeReimport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752255308(relative to base address)
		bool SetCustomSubPath(FString AttributeValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752254F7C(relative to base address)
		bool SetCustomReferenceObject(FSoftObjectPath& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF752254BE8(relative to base address)
		bool RemoveFactoryDependencyUid(FString DependencyUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752254054(relative to base address)
		EReimportStrategyFlags GetReimportStrategyFlags(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252ED0(relative to base address)
		void GetFactoryDependency(int32_t Index, FString& OutDependency); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252388(relative to base address)
		int32_t GetFactoryDependenciesCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252360(relative to base address)
		void GetFactoryDependencies(TArray<FString>& OutDependencies); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75225229C(relative to base address)
		bool GetCustomSubPath(FString& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251F98(relative to base address)
		bool GetCustomReferenceObject(FSoftObjectPath& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251C04(relative to base address)
		bool AddFactoryDependencyUid(FString DependencyUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7522502B0(relative to base address)
	};


	// Class InterchangeCore.InterchangeSourceNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0xE8 (0x148 - 0x60)
	class UInterchangeSourceNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData00_1[0xE8]; // 0x60(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeSourceNode");
			return ret;
		}

		bool SetExtraInformation(FString Name, FString Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752255144(relative to base address)
		bool SetCustomSourceTimelineStart(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752254EE0(relative to base address)
		bool SetCustomSourceTimelineEnd(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752254E44(relative to base address)
		bool SetCustomSourceFrameRateNumerator(int32_t& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752254D70(relative to base address)
		bool SetCustomSourceFrameRateDenominator(int32_t& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752254C9C(relative to base address)
		bool SetCustomImportUnusedMaterial(bool& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752254B50(relative to base address)
		bool SetCustomAnimatedTimeStart(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752254AB4(relative to base address)
		bool SetCustomAnimatedTimeEnd(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752254A18(relative to base address)
		bool RemoveExtraInformation(FString Name); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752253FB4(relative to base address)
		void InitializeSourceNode(FString UniqueID, FString DisplayLabel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752253CD8(relative to base address)
		void GetExtraInformation(TMap<FString, FString>& OutExtraInformation); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752252178(relative to base address)
		bool GetCustomSourceTimelineStart(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251EFC(relative to base address)
		bool GetCustomSourceTimelineEnd(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251E60(relative to base address)
		bool GetCustomSourceFrameRateNumerator(int32_t& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251D8C(relative to base address)
		bool GetCustomSourceFrameRateDenominator(int32_t& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251CB8(relative to base address)
		bool GetCustomImportUnusedMaterial(bool& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251B6C(relative to base address)
		bool GetCustomAnimatedTimeStart(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251AD0(relative to base address)
		bool GetCustomAnimatedTimeEnd(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752251A34(relative to base address)
	};


	// Class InterchangeCore.InterchangeUserDefinedAttributesAPI
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeUserDefinedAttributesAPI : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeUserDefinedAttributesAPI");
			return ret;
		}

		bool RemoveUserDefinedAttribute(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF752254194(relative to base address)
		void GetUserDefinedAttributeInfos(UInterchangeBaseNode* InterchangeNode, TArray<FInterchangeUserDefinedAttributeInfo>& UserDefinedAttributeInfos); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522531F0(relative to base address)
		bool GetUserDefinedAttribute_Int32(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522538F8(relative to base address)
		bool GetUserDefinedAttribute_FString(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522535D4(relative to base address)
		bool GetUserDefinedAttribute_Float(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752253770(relative to base address)
		bool GetUserDefinedAttribute_Double(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752253448(relative to base address)
		bool GetUserDefinedAttribute_Boolean(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522532C0(relative to base address)
		void DuplicateAllUserDefinedAttribute(UInterchangeBaseNode* InterchangeSourceNode, UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF752251770(relative to base address)
		bool CreateUserDefinedAttribute_Int32(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75225140C(relative to base address)
		bool CreateUserDefinedAttribute_FString(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF752250FE0(relative to base address)
		bool CreateUserDefinedAttribute_Float(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7522511D8(relative to base address)
		bool CreateUserDefinedAttribute_Double(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752250DA8(relative to base address)
		bool CreateUserDefinedAttribute_Boolean(UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF752250B28(relative to base address)
	};

}
