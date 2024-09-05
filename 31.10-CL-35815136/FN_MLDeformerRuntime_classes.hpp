#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MLDeformerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MLDeformerRuntime.FortMLDeformerComponent
	// Inherited from UMLDeformerComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x100 - 0xE0)
	class UFortMLDeformerComponent : public UMLDeformerComponent	
	{
	public:
		UMLDeformerAsset* RequestedMLDeformerAsset; // 0xE0(0x8)
		UMeshDeformer* RequestedMeshDeformerAsset; // 0xE8(0x8)
		unsigned char UnknownData00_7[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerRuntime.FortMLDeformerComponent");
			return ret;
		}
	};


	// Class MLDeformerRuntime.MLDeformerGameFeatureData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x8 (0x548 - 0x540)
	class UMLDeformerGameFeatureData : public UFortGameFeatureData	
	{
	public:
		bool bDisableWhenOwnerIsNotViewTarget; // 0x540(0x1)
		bool bShouldRampUpWeightWhenEnabled; // 0x541(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x542(0x2) UNKNOWN PROPERTY
		float WeightIncreasePerSecond; // 0x544(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerRuntime.MLDeformerGameFeatureData");
			return ret;
		}
	};


	// Class MLDeformerRuntime.MLDeformerAssetMapping
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x130 (0x160 - 0x30)
	class UMLDeformerAssetMapping : public UPrimaryDataAsset	
	{
	public:
		TArray<TWeakObjectPtr> CharacterItemDefinitionToMLDeformerAssetMappingKeys; // 0x30(0x10)
		TArray<TWeakObjectPtr> CharacterItemDefinitionToMLDeformerAssetMappingValues; // 0x40(0x10)
		TArray<TWeakObjectPtr> CharacterPartToMLDeformerAssetMappingKeys; // 0x50(0x10)
		TArray<TWeakObjectPtr> CharacterPartToMLDeformerAssetMappingValues; // 0x60(0x10)
		TMap<TWeakObjectPtr, TWeakObjectPtr> MLDeformerToMeshDeformerAssetMap; // 0x70(0x50)
		TMap<TWeakObjectPtr, TWeakObjectPtr> CharacterItemDefinitionToMLDeformerAssetMap; // 0xC0(0x50)
		TMap<TWeakObjectPtr, TWeakObjectPtr> CharacterPartToMLDeformerAssetMap; // 0x110(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerRuntime.MLDeformerAssetMapping");
			return ret;
		}
	};


	// Class MLDeformerRuntime.MLDeformerComponentManager
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UMLDeformerComponentManager : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MLDeformerRuntime.MLDeformerComponentManager");
			return ret;
		}
	};

}