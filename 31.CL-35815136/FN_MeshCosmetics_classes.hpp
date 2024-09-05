#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MeshCosmetics
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MeshCosmetics.MeshCosmeticsOption_ApplyAssembledMeshSchema
	// Inherited from UFortCosmeticFlowOption -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UMeshCosmeticsOption_ApplyAssembledMeshSchema : public UFortCosmeticFlowOption	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsOption_ApplyAssembledMeshSchema");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject
	// Inherited from UFortCosmeticFlowOption -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UMeshCosmeticsOption_ApplyCustomizableObject : public UFortCosmeticFlowOption	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsStep_ChooseParameters
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsStep_ChooseParameters : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsStep_ChooseParameters");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsStep_CommitChosenParams
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsStep_CommitChosenParams : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsStep_CommitChosenParams");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsStep_CompileCustomizableObjects
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsStep_CompileCustomizableObjects : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsStep_CompileCustomizableObjects");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsStep_ComponentRemoval
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsStep_ComponentRemoval : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsStep_ComponentRemoval");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams
	// Inherited from UFortCosmeticItemAdditionalData -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams : public UFortCosmeticItemAdditionalData	
	{
	public:
		TArray<FName> MaterialOnlyParameterNames; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsStep_HandleGeneratedMesh : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsStep_PlaceComponent
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsStep_PlaceComponent : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsStep_PlaceComponent");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsVariance_ApplyParameters
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsVariance_ApplyParameters : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsVariance_ApplyParameters");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsVariance_CompileObjects
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsVariance_CompileObjects : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsVariance_CompileObjects");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsVariance_ManageComponents
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsVariance_ManageComponents : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsVariance_ManageComponents");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsVariance_ProcessVariantAssets
	// Inherited from UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UMeshCosmeticsVariance_ProcessVariantAssets : public UFortCosmeticStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsVariance_ProcessVariantAssets");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsApparelItemDefinition
	// Inherited from UFortApparelItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x4C0 - 0x498)
	class UMeshCosmeticsApparelItemDefinition : public UFortApparelItemDefinition	
	{
	public:
		FCosmeticSlotSelector SlotValidWithin; // 0x498(0x2)
		unsigned char UnknownData00_6[0x6]; // 0x49A(0x6) UNKNOWN PROPERTY
		FApparelCustomizableItemReference Parameter; // 0x4A0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsApparelItemDefinition");
			return ret;
		}
	};


	// Class MeshCosmetics.FortCustomizableObjectParameterVariant
	// Inherited from UFortCosmeticVariantBackedByArray -> UFortCosmeticVariant -> UObject
	// Size: 0x10 (0x88 - 0x78)
	class UFortCustomizableObjectParameterVariant : public UFortCosmeticVariantBackedByArray	
	{
	public:
		TArray<FCustomizableObjectParamsVariantDef> ParameterOptions; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.FortCustomizableObjectParameterVariant");
			return ret;
		}

		void ApplyVariants(AActor* Actor, FFortAthenaLoadout& Loadout); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FC217C4(relative to base address)
	};


	// Class MeshCosmetics.FortCustomizableObjectSprayVariant
	// Inherited from UFortCosmeticVariant -> UObject
	// Size: 0x248 (0x2C0 - 0x78)
	class UFortCustomizableObjectSprayVariant : public UFortCosmeticVariant	
	{
	public:
		FGameplayTag ActiveSelectionTag; // 0x78(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FString EnabledParamName; // 0x80(0x10)
		FString ProjectorParamName; // 0x90(0x10)
		FString TextureParamName; // 0xA0(0x10)
		FString SaturationParamName; // 0xB0(0x10)
		FString WearParamName; // 0xC0(0x10)
		FString ScaleParamName; // 0xD0(0x10)
		FGameplayTagQuery TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters; // 0xE0(0x48)
		FCustomizableObjectSprayVariantFixedProperties FixedSprayLocation; // 0x128(0x68)
		FCustomizableObjectSprayVariantSelectablePayload DefaultSprayCustomization; // 0x190(0xA8)
		FCustomizableObjectSprayVariantPayloadClamps SprayNumericConstraints; // 0x238(0x30)
		float TextureBaseScale; // 0x268(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		FCustomizableObjectSprayVariantSlotImageProperties SpraySlotImageProperties; // 0x270(0x40)
		unsigned char UnknownData02_7[0x10]; // 0x2B0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.FortCustomizableObjectSprayVariant");
			return ret;
		}
	};


	// Class MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies : public UGameFeatureAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticTagInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshCosmeticTagInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticTagInterface");
			return ret;
		}

		void OnPostCustomizationAnimGameplayTags_BP(FGameplayTagContainer& GameplayTags); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MeshCosmetics.FortCustomizableInstanceLODManagement
	// Inherited from UCustomizableInstanceLODManagementBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.FortCustomizableInstanceLODManagement");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsLayoutSchema
	// Inherited from UFortApparelLayoutItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xA0 (0x148 - 0xA8)
	class UMeshCosmeticsLayoutSchema : public UFortApparelLayoutItemDefinition	
	{
	public:
		TMap<FCosmeticSlotSelector, FCosmeticsLayoutSlot> SlotDataConfig; // 0xA8(0x50)
		TMap<FCosmeticSlotSelector, TWeakObjectPtr> SlottedCustomizableObjects; // 0xF8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsLayoutSchema");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsAppliedSchemaData
	// Inherited from UFortCosmeticItemAdditionalData -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UMeshCosmeticsAppliedSchemaData : public UFortCosmeticItemAdditionalData	
	{
	public:
		TWeakObjectPtr<UMeshCosmeticsLayoutSchema*> SchemaAsset; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsAppliedSchemaData");
			return ret;
		}
	};


	// Class MeshCosmetics.MeshCosmeticsSupportedSchemaData
	// Inherited from UFortCosmeticItemAdditionalData -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMeshCosmeticsSupportedSchemaData : public UFortCosmeticItemAdditionalData	
	{
	public:
		TArray<TWeakObjectPtr> SupportedSchemas; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmetics.MeshCosmeticsSupportedSchemaData");
			return ret;
		}
	};

}
