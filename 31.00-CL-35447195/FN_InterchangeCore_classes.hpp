#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class InterchangeCore.InterchangeFactoryBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInterchangeFactoryBase : public UObject	
	{
	public:
		UInterchangeResultsContainer Results; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeFactoryBase");
			return ret;
		}

		UClass GetFactoryClass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECA100
	};


	// Class InterchangeCore.InterchangeSourceData
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UInterchangeSourceData : public UObject	
	{
	public:
		FString Filename; // 0x28(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeSourceData");
			return ret;
		}

		bool SetFilename(FString InFilename); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ECA2C0
		FString GetFilename(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECA1E0
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
		unsigned char UnknownData03_6[0x3]; // 0x48(0x3) UNKNOWN PROPERTY
		bool bFromReimportOrOverride; // 0x4B(0x1)
		unsigned char UnknownData04_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UInterchangeResultsContainer Results; // 0x50(0x8)
		TMap PropertiesStates; // 0x58(0x50)
		unsigned char UnknownData05_7[0x80]; // 0xA8(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangePipelineBase");
			return ret;
		}

		void ScriptedSetReimportSourceIndex(UClass ReimportObjectClass, int32_t SourceFileIndex); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414ECA9C0
		FString ScriptedGetPipelineDisplayName(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414ECA8E0
		void ScriptedExecutePostImportPipeline(UInterchangeBaseNodeContainer BaseNodeContainer, FString FactoryNodeKey, UObject CreatedAsset, bool bIsAReimport); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414ECA800
		void ScriptedExecutePostFactoryPipeline(UInterchangeBaseNodeContainer BaseNodeContainer, FString FactoryNodeKey, UObject CreatedAsset, bool bIsAReimport); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414ECA720
		void ScriptedExecutePipeline(UInterchangeBaseNodeContainer BaseNodeContainer, TArray& SourceDatas, FString ContentBasePath); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414ECA640
		void ScriptedExecuteExportPipeline(UInterchangeBaseNodeContainer BaseNodeContainer); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414ECA560
		FInterchangePipelinePropertyStates FindOrAddPropertyStates(FName PropertyPath); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECA480
		bool DoesPropertyStatesExist(FName PropertyPath); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECA3A0
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
		UClass AssetType; // 0x58(0x8)
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
		unsigned char UnknownData01_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		TArray Results; // 0x50(0x10)

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
		UInterchangeResultsContainer Results; // 0x28(0x8)
		UInterchangeSourceData SourceData; // 0x30(0x8)

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
		unsigned char UnknownData01_1[0x38]; // 0x28(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeBaseNode");
			return ret;
		}

		bool SetParentUid(FString ParentUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECC5C0
		bool SetEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECC4E0
		bool SetDisplayLabel(FString DisplayName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECC400
		bool SetAssetName(FString AssetName); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECC320
		bool RemoveTargetNodeUid(FString AssetUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECC240
		bool RemoveAttribute(FString NodeAttributeKey); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECC160
		bool IsEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECC080
		void InitializeNode(FString UniqueID, FString DisplayLabel, EInterchangeNodeContainerType NodeContainerType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECBFA0
		bool GetVector2Attribute(FString NodeAttributeKey, FVector2f& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ECBEC0
		FString GetUniqueID(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECBDE0
		void GetTargetNodeUids(TArray& OutTargetAssets); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECBD00
		int32_t GetTargetNodeCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECBC20
		bool GetStringAttribute(FString NodeAttributeKey, FString& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECBB40
		FString GetParentUid(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECBA60
		EInterchangeNodeContainerType GetNodeContainerType(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB980
		bool GetLinearColorAttribute(FString NodeAttributeKey, FLinearColor& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB8A0
		bool GetInt32Attribute(FString NodeAttributeKey, int32_t& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB7C0
		bool GetGuidAttribute(FString NodeAttributeKey, FGuid& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB6E0
		bool GetFloatAttribute(FString NodeAttributeKey, float& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB600
		bool GetDoubleAttribute(FString NodeAttributeKey, double& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB520
		FString GetDisplayLabel(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB440
		bool GetBooleanAttribute(FString NodeAttributeKey, bool& OutValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB360
		FString GetAssetName(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB280
		bool AddVector2Attribute(FString NodeAttributeKey, FVector2f& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ECB1A0
		bool AddTargetNodeUid(FString AssetUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECB0C0
		bool AddStringAttribute(FString NodeAttributeKey, FString Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECAFE0
		bool AddLinearColorAttribute(FString NodeAttributeKey, FLinearColor& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ECAF00
		bool AddInt32Attribute(FString NodeAttributeKey, int32_t& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECAE20
		bool AddGuidAttribute(FString NodeAttributeKey, FGuid& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ECAD40
		bool AddFloatAttribute(FString NodeAttributeKey, float& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECAC60
		bool AddDoubleAttribute(FString NodeAttributeKey, double& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECAB80
		bool AddBooleanAttribute(FString NodeAttributeKey, bool& Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECAAA0
	};


	// Class InterchangeCore.InterchangeBaseNodeContainer
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class UInterchangeBaseNodeContainer : public UObject	
	{
	public:
		TMap Nodes; // 0x28(0x50)
		unsigned char UnknownData01_7[0x50]; // 0x78(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeBaseNodeContainer");
			return ret;
		}

		bool SetNodeParentUid(FString NodeUniqueID, FString NewParentNodeUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECD4A0
		void SaveToFile(FString Filename); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECD3C0
		void ResetChildrenCache(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414ECD2E0
		void Reset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECD200
		void ReplaceNode(FString NodeUniqueID, UInterchangeFactoryBaseNode NewNode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECD120
		void LoadFromFile(FString Filename); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECD040
		bool IsNodeUidValid(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECCF60
		void GetRoots(TArray& RootNodes); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECCE80
		void GetNodes(UClass ClassNode, TArray& OutNodes); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECCDA0
		TArray GetNodeChildrenUids(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECCCC0
		int32_t GetNodeChildrenCount(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECCBE0
		UInterchangeBaseNode GetNodeChildren(FString NodeUniqueID, int32_t ChildIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECCB00
		UInterchangeBaseNode GetNode(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECCA20
		bool GetIsAncestor(FString NodeUniqueID, FString AncestorUID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECC940
		UInterchangeFactoryBaseNode GetFactoryNode(FString NodeUniqueID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECC860
		void ComputeChildrenCache(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECC780
		FString AddNode(UInterchangeBaseNode Node); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECC6A0
	};


	// Class InterchangeCore.InterchangeFactoryBaseNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0xE0 (0x140 - 0x60)
	class UInterchangeFactoryBaseNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0xE0]; // 0x60(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeFactoryBaseNode");
			return ret;
		}

		bool UnsetSkipNodeImport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECE380
		bool UnsetForceNodeReimport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECE2A0
		bool ShouldSkipNodeImport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECE1C0
		bool ShouldForceNodeReimport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECE0E0
		bool SetSkipNodeImport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECE000
		bool SetReimportStrategyFlags(EReimportStrategyFlags& ReimportStrategyFlags); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECDF20
		bool SetForceNodeReimport(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECDE40
		bool SetCustomSubPath(FString AttributeValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECDD60
		void SetCustomReferenceObject(); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414ECDC80
		bool RemoveFactoryDependencyUid(FString DependencyUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECDBA0
		EReimportStrategyFlags GetReimportStrategyFlags(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECDAC0
		void GetFactoryDependency(int32_t Index, FString& OutDependency); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECD9E0
		int32_t GetFactoryDependenciesCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414ECD900
		void GetFactoryDependencies(TArray& OutDependencies); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECD820
		bool GetCustomSubPath(FString& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECD740
		bool GetCustomReferenceObject(FSoftObjectPath& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414ECD660
		bool AddFactoryDependencyUid(FString DependencyUid); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECD580
	};


	// Class InterchangeCore.InterchangeSourceNode
	// Inherited from UInterchangeBaseNode -> UObject
	// Size: 0xE8 (0x148 - 0x60)
	class UInterchangeSourceNode : public UInterchangeBaseNode	
	{
	public:
		unsigned char UnknownData01_1[0xE8]; // 0x60(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeCore.InterchangeSourceNode");
			return ret;
		}

		bool SetExtraInformation(FString Name, FString Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECF340
		bool SetCustomSourceTimelineStart(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECF260
		bool SetCustomSourceTimelineEnd(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECF180
		bool SetCustomSourceFrameRateNumerator(int32_t& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECF0A0
		bool SetCustomSourceFrameRateDenominator(int32_t& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECEFC0
		bool SetCustomImportUnusedMaterial(bool& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECEEE0
		bool SetCustomAnimatedTimeStart(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECEE00
		bool SetCustomAnimatedTimeEnd(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414ECED20
		bool RemoveExtraInformation(FString Name); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECEC40
		void InitializeSourceNode(FString UniqueID, FString DisplayLabel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414ECEB60
		void GetExtraInformation(TMap& OutExtraInformation); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECEA80
		bool GetCustomSourceTimelineStart(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECE9A0
		bool GetCustomSourceTimelineEnd(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECE8C0
		bool GetCustomSourceFrameRateNumerator(int32_t& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECE7E0
		bool GetCustomSourceFrameRateDenominator(int32_t& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECE700
		bool GetCustomImportUnusedMaterial(bool& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECE620
		bool GetCustomAnimatedTimeStart(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECE540
		bool GetCustomAnimatedTimeEnd(double& AttributeValue); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414ECE460
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

		bool RemoveUserDefinedAttribute(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414ECFEA0
		void GetUserDefinedAttributeInfos(UInterchangeBaseNode InterchangeNode, TArray& UserDefinedAttributeInfos); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECFDC0
		bool GetUserDefinedAttribute_Int32(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, int32_t& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECFCE0
		bool GetUserDefinedAttribute_FString(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, FString& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECFC00
		bool GetUserDefinedAttribute_Float(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, float& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECFB20
		bool GetUserDefinedAttribute_Double(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, double& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECFA40
		bool GetUserDefinedAttribute_Boolean(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, bool& OutValue, FString& OutPayloadKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECF960
		void DuplicateAllUserDefinedAttribute(UInterchangeBaseNode InterchangeSourceNode, UInterchangeBaseNode InterchangeDestinationNode, bool bAddSourceNodeName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414ECF880
		bool CreateUserDefinedAttribute_Int32(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, int32_t& Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECF7A0
		bool CreateUserDefinedAttribute_FString(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, FString Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414ECF6C0
		bool CreateUserDefinedAttribute_Float(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, float& Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECF5E0
		bool CreateUserDefinedAttribute_Double(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, double& Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECF500
		bool CreateUserDefinedAttribute_Boolean(UInterchangeBaseNode InterchangeNode, FString UserDefinedAttributeName, bool& Value, FString PayloadKey, bool RequiresDelegate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414ECF420
	};

}
