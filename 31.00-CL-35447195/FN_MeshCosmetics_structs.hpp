#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshCosmetics
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MeshCosmetics.PartHandleControllers
	// Size: 0x20 (0x20 - 0x0)
	struct FPartHandleControllers	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.ApparelCustomizableItemReference
	// Size: 0x20 (0x20 - 0x0)
	struct FApparelCustomizableItemReference	
	{
	public:
		FString GroupName; // 0x0(0x10)
		FString ValueName; // 0x10(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectSprayVariantFixedProperties
	// Size: 0x68 (0x68 - 0x0)
	struct FCustomizableObjectSprayVariantFixedProperties	
	{
	public:
		FVector Position; // 0x0(0x18)
		FVector Direction; // 0x18(0x18)
		FVector UpDirection; // 0x30(0x18)
		FVector BaseScale; // 0x48(0x18)
		float BaseRotation; // 0x60(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.CustomizableObjectSprayVariantSelectablePayload
	// Inherited from FBaseVariantDef
	// Size: 0x18 (0xA8 - 0x90)
	struct FCustomizableObjectSprayVariantSelectablePayload : public FBaseVariantDef	
	{
	public:
		FPrimaryAssetId TextureSource; // 0x90(0x8)
		float Saturation; // 0x98(0x4)
		float Wear; // 0x9C(0x4)
		float Scale; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.CustomizableObjectSprayVariantMCPPayload
	// Size: 0x10 (0x10 - 0x0)
	struct FCustomizableObjectSprayVariantMCPPayload	
	{
	public:
		FPrimaryAssetId TextureAssetID; // 0x0(0x8)
		uint16_t CompactSaturation; // 0x8(0x2)
		uint16_t CompactWear; // 0xA(0x2)
		uint16_t CompactScale; // 0xC(0x2)
		unsigned char UnknownData01_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.CustomizableObjectSprayVariantPayloadClamps
	// Size: 0x30 (0x30 - 0x0)
	struct FCustomizableObjectSprayVariantPayloadClamps	
	{
	public:
		FFloatRange Saturation; // 0x0(0x10)
		FFloatRange Wear; // 0x10(0x10)
		FFloatRange Scale; // 0x20(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectSprayVariantSlotImageProperties
	// Size: 0x40 (0x40 - 0x0)
	struct FCustomizableObjectSprayVariantSlotImageProperties	
	{
	public:
		TWeakObjectPtr SprayNotAssignedImage; // 0x0(0x20)
		TWeakObjectPtr SprayAssignedImage; // 0x20(0x20)
	};


	// Struct MeshCosmetics.CustomizableObjectParamVariantBase
	// Size: 0x20 (0x20 - 0x0)
	struct FCustomizableObjectParamVariantBase	
	{
	public:
		TWeakObjectPtr ObjectToModify; // 0x0(0x20)
	};


	// Struct MeshCosmetics.CustomizableObjectValueBase
	// Size: 0x18 (0x18 - 0x0)
	struct FCustomizableObjectValueBase	
	{
	public:
		FString ParameterName; // 0x0(0x10)
		int32_t RangeIndex; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.CustomizableObjectIntValue
	// Inherited from FCustomizableObjectValueBase
	// Size: 0x18 (0x30 - 0x18)
	struct FCustomizableObjectIntValue : public FCustomizableObjectValueBase	
	{
	public:
		int32_t NumericValue; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FString NamedValue; // 0x20(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectFloatValue
	// Inherited from FCustomizableObjectValueBase
	// Size: 0x8 (0x20 - 0x18)
	struct FCustomizableObjectFloatValue : public FCustomizableObjectValueBase	
	{
	public:
		float Value; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.CustomizableObjectBoolValue
	// Inherited from FCustomizableObjectValueBase
	// Size: 0x8 (0x20 - 0x18)
	struct FCustomizableObjectBoolValue : public FCustomizableObjectValueBase	
	{
	public:
		bool Value; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.CustomizableObjectVectorValue
	// Inherited from FCustomizableObjectValueBase
	// Size: 0x10 (0x28 - 0x18)
	struct FCustomizableObjectVectorValue : public FCustomizableObjectValueBase	
	{
	public:
		FLinearColor Value; // 0x18(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectTextureValue
	// Inherited from FCustomizableObjectValueBase
	// Size: 0x8 (0x20 - 0x18)
	struct FCustomizableObjectTextureValue : public FCustomizableObjectValueBase	
	{
	public:
		UTexture2D Value; // 0x18(0x8)
	};


	// Struct MeshCosmetics.CustomizableObjectProjectorValue
	// Inherited from FCustomizableObjectValueBase
	// Size: 0x68 (0x80 - 0x18)
	struct FCustomizableObjectProjectorValue : public FCustomizableObjectValueBase	
	{
	public:
		FVector Position; // 0x18(0x18)
		FVector Direction; // 0x30(0x18)
		FVector UpDirection; // 0x48(0x18)
		FVector Scale; // 0x60(0x18)
		float Angle; // 0x78(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.CustomizableObjectStateValue
	// Inherited from FCustomizableObjectValueBase
	// Size: 0x10 (0x28 - 0x18)
	struct FCustomizableObjectStateValue : public FCustomizableObjectValueBase	
	{
	public:
		FString NewState; // 0x18(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectIntParamVariant
	// Inherited from FCustomizableObjectParamVariantBase
	// Size: 0x10 (0x30 - 0x20)
	struct FCustomizableObjectIntParamVariant : public FCustomizableObjectParamVariantBase	
	{
	public:
		TArray Parameters; // 0x20(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectFloatParamVariant
	// Inherited from FCustomizableObjectParamVariantBase
	// Size: 0x10 (0x30 - 0x20)
	struct FCustomizableObjectFloatParamVariant : public FCustomizableObjectParamVariantBase	
	{
	public:
		TArray Parameters; // 0x20(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectBoolParamVariant
	// Inherited from FCustomizableObjectParamVariantBase
	// Size: 0x10 (0x30 - 0x20)
	struct FCustomizableObjectBoolParamVariant : public FCustomizableObjectParamVariantBase	
	{
	public:
		TArray Parameters; // 0x20(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectVectorParamVariant
	// Inherited from FCustomizableObjectParamVariantBase
	// Size: 0x10 (0x30 - 0x20)
	struct FCustomizableObjectVectorParamVariant : public FCustomizableObjectParamVariantBase	
	{
	public:
		TArray Parameters; // 0x20(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectTextureParamVariant
	// Inherited from FCustomizableObjectParamVariantBase
	// Size: 0x10 (0x30 - 0x20)
	struct FCustomizableObjectTextureParamVariant : public FCustomizableObjectParamVariantBase	
	{
	public:
		TArray Parameters; // 0x20(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectProjectorVariant
	// Inherited from FCustomizableObjectParamVariantBase
	// Size: 0x10 (0x30 - 0x20)
	struct FCustomizableObjectProjectorVariant : public FCustomizableObjectParamVariantBase	
	{
	public:
		TArray Parameters; // 0x20(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectMultilayerProjectsVirtualLayer
	// Size: 0x90 (0x90 - 0x0)
	struct FCustomizableObjectMultilayerProjectsVirtualLayer	
	{
	public:
		bool bModifyEnabled; // 0x0(0x1)
		bool bEnabled; // 0x1(0x1)
		bool bModifyProjection; // 0x2(0x1)
		unsigned char UnknownData04_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FVector Position; // 0x8(0x18)
		FVector Direction; // 0x20(0x18)
		FVector UpDirection; // 0x38(0x18)
		FVector Scale; // 0x50(0x18)
		float Angle; // 0x68(0x4)
		bool bModifyImage; // 0x6C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		FString Image; // 0x70(0x10)
		bool bModifyOpacity; // 0x80(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
		float Opacity; // 0x84(0x4)
		bool bModifyOrder; // 0x88(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		int32_t Order; // 0x8C(0x4)
	};


	// Struct MeshCosmetics.CustomizableObjectMultilayerProjectors
	// Size: 0x50 (0x50 - 0x0)
	struct FCustomizableObjectMultilayerProjectors	
	{
	public:
		TMap VirtualLayers; // 0x0(0x50)
	};


	// Struct MeshCosmetics.CustomizableObjectMultilayerProjectorVariant
	// Inherited from FCustomizableObjectParamVariantBase
	// Size: 0x50 (0x70 - 0x20)
	struct FCustomizableObjectMultilayerProjectorVariant : public FCustomizableObjectParamVariantBase	
	{
	public:
		TMap MultilayerProjectors; // 0x20(0x50)
	};


	// Struct MeshCosmetics.CustomizableObjectStateVariant
	// Inherited from FCustomizableObjectParamVariantBase
	// Size: 0x10 (0x30 - 0x20)
	struct FCustomizableObjectStateVariant : public FCustomizableObjectParamVariantBase	
	{
	public:
		TArray States; // 0x20(0x10)
	};


	// Struct MeshCosmetics.CustomizableObjectParamsVariantDef
	// Inherited from FBaseVariantDef
	// Size: 0x80 (0x110 - 0x90)
	struct FCustomizableObjectParamsVariantDef : public FBaseVariantDef	
	{
	public:
		TArray IntParams; // 0x90(0x10)
		TArray FloatParams; // 0xA0(0x10)
		TArray BoolParams; // 0xB0(0x10)
		TArray VectorParams; // 0xC0(0x10)
		TArray TextureParams; // 0xD0(0x10)
		TArray ProjectorParams; // 0xE0(0x10)
		TArray MultilayerProjectorParams; // 0xF0(0x10)
		TArray StateVariants; // 0x100(0x10)
	};


	// Struct MeshCosmetics.MeshCosmeticsCustomizationPerSlotData
	// Size: 0x8 (0x8 - 0x0)
	struct FMeshCosmeticsCustomizationPerSlotData	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.MeshCosmeticsCustomizableObjectEntry
	// Size: 0x50 (0x50 - 0x0)
	struct FMeshCosmeticsCustomizableObjectEntry	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.MeshCosmeticsCustomizationCCV2Data
	// Size: 0x20 (0x20 - 0x0)
	struct FMeshCosmeticsCustomizationCCV2Data	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.MeshCosmeticsImageProviderWrapper
	// Size: 0x10 (0x10 - 0x0)
	struct FMeshCosmeticsImageProviderWrapper	
	{
	public:
		UDefaultImageProvider ImageProvider; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.PendingCustomizationComponentsList
	// Size: 0x30 (0x30 - 0x0)
	struct FPendingCustomizationComponentsList	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.LoadedAthenaCosmeticAssets
	// Size: 0x20 (0x20 - 0x0)
	struct FLoadedAthenaCosmeticAssets	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.PendingVariantAssetsToLoad
	// Size: 0x58 (0x58 - 0x0)
	struct FPendingVariantAssetsToLoad	
	{
	public:
		unsigned char UnknownData01_2[0x58]; // 0x0(0x58) UNKNOWN PROPERTY
	};


	// Struct MeshCosmetics.SkeletalComponentData
	// Size: 0x18 (0x18 - 0x0)
	struct FSkeletalComponentData	
	{
	public:
		UMeshCosmeticsLayoutSchema LayoutSchema; // 0x0(0x8)
		FCosmeticSlotSelector Slot; // 0x8(0x2)
		unsigned char UnknownData01_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		UCustomizableObject CustomizableObject; // 0x10(0x8)
	};


	// Struct MeshCosmetics.CosmeticSlotSelector
	// Size: 0x2 (0x2 - 0x0)
	struct FCosmeticSlotSelector	
	{
	public:
		TEnumAsByte LegacyPartType; // 0x0(0x1)
		EAthenaCustomizationCategory SourceCategory; // 0x1(0x1)
	};


	// Struct MeshCosmetics.MeshCosmeticsPassDataCommon
	// Size: 0x110 (0x110 - 0x0)
	struct FMeshCosmeticsPassDataCommon	
	{
	public:
		TMap AllSlotDataConfigs; // 0x0(0x50)
		TMap ProvidedSlotsToSchemaData; // 0x50(0x50)
		TArray MeshCosmeticsItemDefs; // 0xA0(0x10)
		TArray KeepLoadedObjects; // 0xB0(0x10)
		TMap SkeletalComponentData; // 0xC0(0x50)
	};


	// Struct MeshCosmetics.CosmeticsLayoutSlot
	// Size: 0x98 (0x98 - 0x0)
	struct FCosmeticsLayoutSlot	
	{
	public:
		TWeakObjectPtr SlottedObject; // 0x0(0x20)
		int32_t ComponentIndex; // 0x20(0x4)
		FCosmeticSlotSelector RequiredCosmeticPart; // 0x24(0x2)
		unsigned char UnknownData01_6[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr ProportionalLayerAnimBP; // 0x28(0x20)
		TMap LinkedAnimGraphTag; // 0x48(0x50)
	};

}
