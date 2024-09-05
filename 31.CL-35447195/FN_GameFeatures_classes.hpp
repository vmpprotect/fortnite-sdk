#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameFeatures
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameFeatures.GameFeatureStateChangeObserver
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameFeatureStateChangeObserver : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureStateChangeObserver");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureVersePathMapperCommandlet
	// Inherited from UCommandlet -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UGameFeatureVersePathMapperCommandlet : public UCommandlet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureVersePathMapperCommandlet");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameFeatureAction : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction_AddActorFactory
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameFeatureAction_AddActorFactory : public UGameFeatureAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction_AddActorFactory");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction_AddCheats
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class UGameFeatureAction_AddCheats : public UGameFeatureAction	
	{
	public:
		TArray CheatManagers; // 0x28(0x10)
		bool bLoadCheatManagersAsync; // 0x38(0x1)
		unsigned char UnknownData02_6[0xF]; // 0x39(0xF) UNKNOWN PROPERTY
		TArray SpawnedCheatManagers; // 0x48(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction_AddCheats");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction_AddChunkOverride
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameFeatureAction_AddChunkOverride : public UGameFeatureAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction_AddChunkOverride");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction_AddComponents
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGameFeatureAction_AddComponents : public UGameFeatureAction	
	{
	public:
		TArray ComponentList; // 0x28(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x38(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction_AddComponents");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction_AddWorldPartitionContent
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGameFeatureAction_AddWorldPartitionContent : public UGameFeatureAction	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UExternalDataLayerAsset ExternalDataLayerAsset; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction_AddWorldPartitionContent");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction_AddWPContent
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGameFeatureAction_AddWPContent : public UGameFeatureAction	
	{
	public:
		UContentBundleDescriptor ContentBundleDescriptor; // 0x28(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction_AddWPContent");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction_AudioActionBase
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameFeatureAction_AudioActionBase : public UGameFeatureAction	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction_AudioActionBase");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction_DataRegistry
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGameFeatureAction_DataRegistry : public UGameFeatureAction	
	{
	public:
		TArray RegistriesToAdd; // 0x28(0x10)
		bool bPreloadInEditor; // 0x38(0x1)
		bool bPreloadInCommandlets; // 0x39(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction_DataRegistry");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureAction_DataRegistrySource
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction	
	{
	public:
		TArray SourcesToAdd; // 0x28(0x10)
		bool bPreloadInEditor; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureAction_DataRegistrySource");
			return ret;
		}
	};


	// Class GameFeatures.GameFeatureData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UGameFeatureData : public UPrimaryDataAsset	
	{
	public:
		TArray Actions; // 0x30(0x10)
		TArray PrimaryAssetTypesToScan; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureData");
			return ret;
		}

		void GetPluginName(UGameFeatureData GFD, FString& PluginName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414592A78
	};


	// Class GameFeatures.GameFeatureOptionalContentInstaller
	// Inherited from UObject
	// Size: 0x108 (0x130 - 0x28)
	class UGameFeatureOptionalContentInstaller : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x108]; // 0x28(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeatureOptionalContentInstaller");
			return ret;
		}
	};


	// Class GameFeatures.GameFeaturePluginStateMachine
	// Inherited from UObject
	// Size: 0x218 (0x240 - 0x28)
	class UGameFeaturePluginStateMachine : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FGameFeaturePluginStateMachineProperties StateProperties; // 0x30(0xE0)
		unsigned char UnknownData03_7[0x130]; // 0x110(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeaturePluginStateMachine");
			return ret;
		}
	};


	// Class GameFeatures.GameFeaturesProjectPolicies
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameFeaturesProjectPolicies : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeaturesProjectPolicies");
			return ret;
		}
	};


	// Class GameFeatures.DefaultGameFeaturesProjectPolicies
	// Inherited from UGameFeaturesProjectPolicies -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.DefaultGameFeaturesProjectPolicies");
			return ret;
		}
	};


	// Class GameFeatures.GameFeaturesSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x128 (0x158 - 0x30)
	class UGameFeaturesSubsystem : public UEngineSubsystem	
	{
	public:
		TMap GameFeaturePluginStateMachines; // 0x30(0x50)
		TArray TerminalGameFeaturePluginStateMachines; // 0x80(0x10)
		unsigned char UnknownData02_6[0xA0]; // 0x90(0xA0) UNKNOWN PROPERTY
		TArray Observers; // 0x130(0x10)
		UGameFeaturesProjectPolicies GameSpecificPolicies; // 0x140(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x148(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeaturesSubsystem");
			return ret;
		}
	};


	// Class GameFeatures.GameFeaturesSubsystemSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UGameFeaturesSubsystemSettings : public UDeveloperSettings	
	{
	public:
		FSoftClassPath GameFeaturesManagerClassName; // 0x30(0x18)
		TArray EnabledPlugins; // 0x48(0x10)
		TArray DisabledPlugins; // 0x58(0x10)
		TArray AdditionalPluginMetadataKeys; // 0x68(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x78(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatures.GameFeaturesSubsystemSettings");
			return ret;
		}
	};

}
