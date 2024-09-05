#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoProceduralLandscape
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoProceduralLandscape.JunoLandscapeCachedComponentData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xC0 (0xF0 - 0x30)
	class UJunoLandscapeCachedComponentData : public UPrimaryDataAsset	
	{
	public:
		FJunoLandscapeComponentPrecachSettings PrecacheSettings; // 0x30(0x20)
		TMap<FJunoLandscapeCachedComponentKey, FJunoLandscapeComponentPrecachedData> PrecachedData; // 0x50(0x50)
		unsigned char UnknownData00_7[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeCachedComponentData");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.JunoLandscapeCombinedMaterial
	// Inherited from UObject
	// Size: 0xB0 (0xD8 - 0x28)
	class UJunoLandscapeCombinedMaterial : public UObject	
	{
	public:
		TArray<FName> LayerNames; // 0x28(0x10)
		TArray<ULandscapeLayerInfoObject*> LandscapeInfos; // 0x38(0x10)
		UMaterialInstanceConstant* MaterialBase; // 0x48(0x8)
		UJunoLandscapeMaterialInstanceConstant* CPUReadbackMaterialBase; // 0x50(0x8)
		TMap<FJunoLandscapeMaterialInstanceCacheKey, FJunoLandscapeCombinedMaterialInstance> MaterialInstances; // 0x58(0x50)
		TArray<FJunoLandscapeGrassAndPhysics> GrassAndPhysicsTypes; // 0xA8(0x10)
		bool bAllowRenderMaterials; // 0xB8(0x1)
		unsigned char UnknownData00_7[0x1F]; // 0xB9(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeCombinedMaterial");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.JunoLandscapeExternalMaterialsCollector
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoLandscapeExternalMaterialsCollector : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeExternalMaterialsCollector");
			return ret;
		}

		void CollectExternalMaterials(UJunoLandscapeLayersData* LayerData, bool bInlcudeMobile, bool bIncludeStandard); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B2499C(relative to base address)
	};


	// Class JunoProceduralLandscape.JunoLandscapeGeneratorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoLandscapeGeneratorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeGeneratorInterface");
			return ret;
		}

		void Initialize(UJunoLandscapeRenderer* LandscapeRenderer); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E2463B0(relative to base address)
		TArray GetAffectedWeightmapLayers(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B25BD8(relative to base address)
		UJunoLandscapeRenderTarget GenerateLandscape(bool bRenderHeightmap, FName WeightmapName); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B25B00(relative to base address)
	};


	// Class JunoProceduralLandscape.JunoLandscapeMaterial
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UJunoLandscapeMaterial : public UObject	
	{
	public:
		UMaterialInterface* Parent; // 0x28(0x8)
		UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x30(0x8)
		TMap<FName, UJunoLandscapeRenderTarget*> TextureProperties; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeMaterial");
			return ret;
		}

		void SetVectorParameterValue(FName ParameterName, FLinearColor Value); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B264BC(relative to base address)
		void SetTextureParameterValue(FName ParameterName, UTexture* Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B25F8C(relative to base address)
		void SetScalarParameterValue(FName ParameterName, float Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B263F8(relative to base address)
		void SetRenderTargetParameterValue(FName ParameterName, UJunoLandscapeRenderTarget* Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B26334(relative to base address)
		void SetJunoTextureParameterValue(FName ParameterName, UTextureRenderTarget2D* Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B25F8C(relative to base address)
		void SetDoubleVectorParameterValue(FName ParameterName, FVector4 Value); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B25E18(relative to base address)
		FLinearColor K2_GetVectorParameterValue(FName ParameterName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B25D7C(relative to base address)
		float K2_GetScalarParameterValue(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B25CEC(relative to base address)
	};


	// Class JunoProceduralLandscape.JunoLandscapeMaterialInstanceConstant
	// Inherited from UMaterialInstanceConstant -> UMaterialInstance -> UMaterialInterface -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UJunoLandscapeMaterialInstanceConstant : public UMaterialInstanceConstant	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeMaterialInstanceConstant");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.JunoLandscapeCustomMaterial
	// Inherited from UMaterial -> UMaterialInterface -> UObject
	// Size: 0x58 (0x288 - 0x230)
	class UJunoLandscapeCustomMaterial : public UMaterial	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x230(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeCustomMaterial");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.JunoLandscapeDynamicCustomMaterial
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UJunoLandscapeDynamicCustomMaterial : public UObject	
	{
	public:
		UMaterialInstanceDynamic* WrappedMaterial; // 0x28(0x8)
		UTexture* Heightmap; // 0x30(0x8)
		TMap<FString, UTexture*> WeightMaps; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeDynamicCustomMaterial");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.JunoLandscapeComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x210 (0x430 - 0x220)
	class UJunoLandscapeComponent : public USceneComponent	
	{
	public:
		UMaterialInstanceDynamic* RenderMaterial; // 0x220(0x8)
		ALandscapeProxy* PairedLandscape; // 0x228(0x8)
		ULandscapeComponent* LandscapeComponent; // 0x230(0x8)
		ULandscapeHeightfieldCollisionComponent* LandscapeCollisionComponent; // 0x238(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x240(0x8) UNKNOWN PROPERTY
		FBox CachedLocalBox; // 0x248(0x38)
		FIntPoint ComponentKey; // 0x280(0x8)
		FIntPoint ComponentBase; // 0x288(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FJunoLandscapeComponentPrecachSettings PrecacheSettings; // 0x298(0x20)
		unsigned char UnknownData02_6[0x38]; // 0x2B8(0x38) UNKNOWN PROPERTY
		FJunoLandscapeMaterialInstanceCacheKey DefaultMaterialKey; // 0x2F0(0x18)
		FJunoLandscapeComponentPrecachedData PrecachedData; // 0x308(0xE0)
		unsigned char UnknownData03_6[0x18]; // 0x3E8(0x18) UNKNOWN PROPERTY
		bool bIsSerializedWithDeprecatedPrecacheData; // 0x400(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x401(0x3) UNKNOWN PROPERTY
		FIntPoint SubTextureOffset; // 0x404(0x8)
		FIntPoint SubTextureSize; // 0x40C(0x8)
		int32_t ComponentQuadSize; // 0x414(0x4)
		int32_t ComponentVertSize; // 0x418(0x4)
		unsigned char UnknownData05_7[0x14]; // 0x41C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeComponent");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.JunoLandscapeLayersData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x1F0 (0x220 - 0x30)
	class UJunoLandscapeLayersData : public UPrimaryDataAsset	
	{
	public:
		UClass* ExternalMaterialGatherer; // 0x30(0x8)
		UMaterialInterface* LandscapeMaterial; // 0x38(0x8)
		TMap<FName, ULandscapeLayerInfoObject*> AllLayerInfos; // 0x40(0x50)
		TArray<FString> LayerInfoDirectories; // 0x90(0x10)
		TArray<FName> Biomes; // 0xA0(0x10)
		TArray<FJunoLandscapeLayersGroup> LayerGroups; // 0xB0(0x10)
		TArray<FName> SortedLayerNames; // 0xC0(0x10)
		TArray<ULandscapeLayerInfoObject*> SortedLayerInfos; // 0xD0(0x10)
		FJunoLandscapeMaterialCache AllMaterials; // 0xE0(0xA0)
		TMap<FName, uint32_t> LayerNameToIndex; // 0x180(0x50)
		unsigned char UnknownData00_7[0x50]; // 0x1D0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeLayersData");
			return ret;
		}

		void UpdateExternalMaterials(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class JunoProceduralLandscape.JunoLandscapeManager
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x468 (0x4A8 - 0x40)
	class UJunoLandscapeManager : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0xC8]; // 0x40(0xC8) UNKNOWN PROPERTY
		ALandscape* Landscape; // 0x108(0x8)
		unsigned char UnknownData01_6[0x20]; // 0x110(0x20) UNKNOWN PROPERTY
		TMap<FIntPoint, UJunoLandscapeComponent*> ExistingComponents; // 0x130(0x50)
		TMap<FIntPoint, UJunoLandscapeComponent*> ExternalComponents; // 0x180(0x50)
		UMaterialInterface* DebugMaterial; // 0x1D0(0x8)
		unsigned char UnknownData02_6[0x290]; // 0x1D8(0x290) UNKNOWN PROPERTY
		UMaterialInterface* LandscapeMaterial; // 0x468(0x8)
		UJunoLandscapeLayersData* LayersData; // 0x470(0x8)
		unsigned char UnknownData03_7[0x30]; // 0x478(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeManager");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.JunoLandscapeGenerationItems
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UJunoLandscapeGenerationItems : public UPrimaryDataAsset	
	{
	public:
		TArray<FJunoLandscapeGenerationData> GenerationData; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeGenerationItems");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionIsPreviousTileLocation_Juno
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x28 (0xD8 - 0xB0)
	class UMaterialExpressionIsPreviousTileLocation_Juno : public UMaterialExpression	
	{
	public:
		FExpressionInput TileMipSize; // 0xB0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionIsPreviousTileLocation_Juno");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionGetTileMin_Juno
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x78 (0x128 - 0xB0)
	class UMaterialExpressionGetTileMin_Juno : public UMaterialExpression	
	{
	public:
		FExpressionInput TileSize; // 0xB0(0x28)
		FExpressionInput TileMin; // 0xD8(0x28)
		FExpressionInput TileMipSize; // 0x100(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionGetTileMin_Juno");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionGetUV_Juno
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x28 (0xD8 - 0xB0)
	class UMaterialExpressionGetUV_Juno : public UMaterialExpression	
	{
	public:
		FExpressionInput TileMipSize; // 0xB0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionGetUV_Juno");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionGetGlobalKey_Juno
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x78 (0x128 - 0xB0)
	class UMaterialExpressionGetGlobalKey_Juno : public UMaterialExpression	
	{
	public:
		FExpressionInput TileSize; // 0xB0(0x28)
		FExpressionInput TileMin; // 0xD8(0x28)
		FExpressionInput TileMipSize; // 0x100(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionGetGlobalKey_Juno");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionGetGlobalKeyScaled_Juno
	// Inherited from UMaterialExpression -> UObject
	// Size: 0xA0 (0x150 - 0xB0)
	class UMaterialExpressionGetGlobalKeyScaled_Juno : public UMaterialExpression	
	{
	public:
		FExpressionInput TileSize; // 0xB0(0x28)
		FExpressionInput TileMin; // 0xD8(0x28)
		FExpressionInput TileMipSize; // 0x100(0x28)
		FExpressionInput LandscapeScale; // 0x128(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionGetGlobalKeyScaled_Juno");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionLandscapeOutputPassPreInit
	// Inherited from UMaterialExpressionCustomOutput -> UMaterialExpression -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UMaterialExpressionLandscapeOutputPassPreInit : public UMaterialExpressionCustomOutput	
	{
	public:
		UMaterialExpressionLandscapeOutputPass* OutputPassExpressions; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionLandscapeOutputPassPreInit");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionLandscapeOutputPass
	// Inherited from UMaterialExpressionCustomOutput -> UMaterialExpression -> UObject
	// Size: 0x58 (0x108 - 0xB0)
	class UMaterialExpressionLandscapeOutputPass : public UMaterialExpressionCustomOutput	
	{
	public:
		UMaterialExpressionCustomOutput* GrassMaterialExpression; // 0xB0(0x8)
		UMaterialExpressionCustomOutput* PhysicsMaterialExpression; // 0xB8(0x8)
		unsigned char UnknownData00_7[0x48]; // 0xC0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionLandscapeOutputPass");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionJunoLandscapeDynamicLayerSample
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x18 (0xC8 - 0xB0)
	class UMaterialExpressionJunoLandscapeDynamicLayerSample : public UMaterialExpression	
	{
	public:
		FName ParameterName; // 0xB0(0x4)
		float PreviewWeight; // 0xB4(0x4)
		unsigned char UnknownData00_6[0xC]; // 0xB8(0xC) UNKNOWN PROPERTY
		int32_t PreviewMip; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeDynamicLayerSample");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionJunoLandscapeDynamicHeightSample
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x30 (0xE0 - 0xB0)
	class UMaterialExpressionJunoLandscapeDynamicHeightSample : public UMaterialExpression	
	{
	public:
		FExpressionInput XYOffset; // 0xB0(0x28)
		int32_t PreviewMip; // 0xD8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeDynamicHeightSample");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomOutput
	// Inherited from UMaterialExpressionCustomOutput -> UMaterialExpression -> UObject
	// Size: 0x50 (0x100 - 0xB0)
	class UMaterialExpressionJunoLandscapeCustomOutput : public UMaterialExpressionCustomOutput	
	{
	public:
		FExpressionInput Result; // 0xB0(0x28)
		FExpressionInput CustomMipResult; // 0xD8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomOutput");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomOutputProxy
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UMaterialExpressionJunoLandscapeCustomOutputProxy : public UMaterialExpression	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomOutputProxy");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomMaterialSampleParentMIP
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x30 (0xE0 - 0xB0)
	class UMaterialExpressionJunoLandscapeCustomMaterialSampleParentMIP : public UMaterialExpression	
	{
	public:
		FExpressionInput UV; // 0xB0(0x28)
		UMaterialExpressionCustom* CustomExpression; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomMaterialSampleParentMIP");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomMaterialGetUVOffset
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x58 (0x108 - 0xB0)
	class UMaterialExpressionJunoLandscapeCustomMaterialGetUVOffset : public UMaterialExpression	
	{
	public:
		FExpressionInput UV; // 0xB0(0x28)
		FExpressionInput ScaledOffset; // 0xD8(0x28)
		UMaterialExpressionCustom* CustomExpression; // 0x100(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomMaterialGetUVOffset");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.JunoLandscapeRenderer
	// Inherited from UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UJunoLandscapeRenderer : public UObject	
	{
	public:
		UJunoLandscapeMaterial* LandscapeMaterial; // 0x28(0x8)
		unsigned char UnknownData00_6[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		UWorld* World; // 0x48(0x8)
		TMap<FName, UJunoLandscapeRenderTarget*> RenderTargets; // 0x50(0x50)
		unsigned char UnknownData01_7[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeRenderer");
			return ret;
		}

		void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B261D4(relative to base address)
		void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UJunoLandscapeRenderTarget* Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B26114(relative to base address)
		void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B26050(relative to base address)
		FVector4 GetUVWorldTransform(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C67B230(relative to base address)
		UJunoLandscapeRenderTarget GetOutputHeightmapRenderTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B25CA0(relative to base address)
		UJunoLandscapeRenderTarget FindOrCreateNamedRenderTarget(FName Name, TEnumAsByte<ETextureRenderTargetFormat> Format); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B25A3C(relative to base address)
		void EndDrawCanvasToRenderTarget(FDrawToRenderTargetContext_JunoLandscape& Context); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E226444(relative to base address)
		void DrawMaterialToRenderTargetUV(UJunoLandscapeRenderTarget* RenderTarget, UJunoLandscapeMaterial* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B25568(relative to base address)
		void DrawMaterialToRenderTarget(UJunoLandscapeRenderTarget* TextureRenderTarget, UJunoLandscapeMaterial* Material); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B25294(relative to base address)
		UJunoLandscapeRenderTarget CreateRenderTarget2D(int32_t Width, int32_t Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B24B8C(relative to base address)
		UJunoLandscapeMaterial CreateMaterial(UMaterialInterface* Parent, FName OptionalName, EMIDCreationFlags CreationFlags); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B24A9C(relative to base address)
		void ClearRenderTarget2D(UJunoLandscapeRenderTarget* TextureRenderTarget, FLinearColor ClearColor); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B247FC(relative to base address)
		FBox2D CalculateRenderArea(FTransform Transform, FVector2D HalfExtents); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B24560(relative to base address)
		void BeginDrawCanvasToRenderTarget(UJunoLandscapeRenderTarget* TextureRenderTarget, UJunoLandscapeCanvas* Canvas, FVector2D& Size, FDrawToRenderTargetContext_JunoLandscape& Context); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B243A0(relative to base address)
	};


	// Class JunoProceduralLandscape.JunoLandscapeRenderTarget
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoLandscapeRenderTarget : public UObject	
	{
	public:
		FName ID; // 0x28(0x4)
		TEnumAsByte<ETextureRenderTargetFormat> Format; // 0x2C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeRenderTarget");
			return ret;
		}
	};


	// Class JunoProceduralLandscape.JunoLandscapeCanvas
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoLandscapeCanvas : public UObject	
	{
	public:
		UJunoLandscapeRenderTarget* RenderTarget; // 0x28(0x8)
		UJunoLandscapeRenderer* Renderer; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralLandscape.JunoLandscapeCanvas");
			return ret;
		}

		FName GetNameReplacement(FName NameIn); // Flags: Final|Native|Static|Public, Memory Exec: 0x7FF751B25C1C(relative to base address)
		void DrawMaterial(UJunoLandscapeMaterial* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B24DF8(relative to base address)
	};

}
