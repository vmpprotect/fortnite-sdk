#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Procedural
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Procedural.ProceduralParameterModifier
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UProceduralParameterModifier : public UObject	
	{
	public:
		bool bEnabled; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float Contribution; // 0x2C(0x4)
		EProceduralParameterModifierBlendMode BlendMode; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralParameterModifier");
			return ret;
		}

		float GetContribution(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75216FD80(relative to base address)
	};


	// Class Procedural.ProceduralDensityModifier
	// Inherited from UProceduralParameterModifier -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UProceduralDensityModifier : public UProceduralParameterModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralDensityModifier");
			return ret;
		}
	};


	// Class Procedural.ProceduralDataMap
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UProceduralDataMap : public UObject	
	{
	public:
		bool bUseRemapCurve; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralDataMap");
			return ret;
		}
	};


	// Class Procedural.ProceduralFloatDataMap
	// Inherited from UProceduralDataMap -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UProceduralFloatDataMap : public UProceduralDataMap	
	{
	public:
		FProceduralRemapFloatCurve RemapCurve; // 0x30(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralFloatDataMap");
			return ret;
		}
	};


	// Class Procedural.ProceduralLandscapeLayerMap
	// Inherited from UProceduralFloatDataMap -> UProceduralDataMap -> UObject
	// Size: 0x8 (0xC0 - 0xB8)
	class UProceduralLandscapeLayerMap : public UProceduralFloatDataMap	
	{
	public:
		FName LandscapeLayerName; // 0xB8(0x4)
		FName LandscapeEditLayerName; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralLandscapeLayerMap");
			return ret;
		}
	};


	// Class Procedural.ProceduralRotationModifier
	// Inherited from UProceduralParameterModifier -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UProceduralRotationModifier : public UProceduralParameterModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralRotationModifier");
			return ret;
		}
	};


	// Class Procedural.ProceduralScaleModifier
	// Inherited from UProceduralParameterModifier -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UProceduralScaleModifier : public UProceduralParameterModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScaleModifier");
			return ret;
		}
	};


	// Class Procedural.ProceduralTextureFloatMap
	// Inherited from UProceduralFloatDataMap -> UProceduralDataMap -> UObject
	// Size: 0x40 (0xF8 - 0xB8)
	class UProceduralTextureFloatMap : public UProceduralFloatDataMap	
	{
	public:
		EProceduralTextureColorChannel Channel; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FProceduralTextureSource Source; // 0xC0(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralTextureFloatMap");
			return ret;
		}
	};


	// Class Procedural.ProceduralVectorDataMap
	// Inherited from UProceduralDataMap -> UObject
	// Size: 0x208 (0x238 - 0x30)
	class UProceduralVectorDataMap : public UProceduralDataMap	
	{
	public:
		FProceduralRemapVectorCurve RemapCurve; // 0x30(0x208)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralVectorDataMap");
			return ret;
		}
	};


	// Class Procedural.ProceduralTextureVectorMap
	// Inherited from UProceduralVectorDataMap -> UProceduralDataMap -> UObject
	// Size: 0x38 (0x270 - 0x238)
	class UProceduralTextureVectorMap : public UProceduralVectorDataMap	
	{
	public:
		FProceduralTextureSource Source; // 0x238(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralTextureVectorMap");
			return ret;
		}
	};


	// Class Procedural.ProceduralVertexColorMap
	// Inherited from UProceduralFloatDataMap -> UProceduralDataMap -> UObject
	// Size: 0x8 (0xC0 - 0xB8)
	class UProceduralVertexColorMap : public UProceduralFloatDataMap	
	{
	public:
		EProceduralTextureColorChannel Channel; // 0xB8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralVertexColorMap");
			return ret;
		}
	};


	// Class Procedural.HISMBuilderSettings
	// Inherited from UObject
	// Size: 0x1C0 (0x1E8 - 0x28)
	class UHISMBuilderSettings : public UObject	
	{
	public:
		TEnumAsByte<EComponentMobility> Mobility; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FInt32Interval CullDistance; // 0x2C(0x8)
		float LODDistanceScale; // 0x34(0x4)
		bool bCastShadow : 1; // 0x38:0(0x1)
		bool bAffectDynamicIndirectLighting : 1; // 0x38:1(0x1)
		bool bAffectDistanceFieldLighting : 1; // 0x38:2(0x1)
		bool bCastDynamicShadow : 1; // 0x38:3(0x1)
		bool bCastStaticShadow : 1; // 0x38:4(0x1)
		bool bCastShadowAsTwoSided : 1; // 0x38:5(0x1)
		bool bReceivesDecals : 1; // 0x38:6(0x1)
		bool bOverrideLightMapRes : 1; // 0x38:7(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t OverriddenLightMapRes; // 0x3C(0x4)
		ELightmapType LightmapType; // 0x40(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		bool bUseAsOccluder : 1; // 0x44:0(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		FBodyInstance BodyInstance; // 0x48(0x170)
		TEnumAsByte<EHasCustomNavigableGeometry> CustomNavigableGeometry; // 0x1B8(0x1)
		FLightingChannels LightingChannels; // 0x1B9(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x1BA(0x2) UNKNOWN PROPERTY
		bool bRenderCustomDepth : 1; // 0x1BC:0(0x1)
		unsigned char UnknownData05_5[0x3]; // 0x1BD(0x3) UNKNOWN PROPERTY
		ERendererStencilMask CustomDepthStencilWriteMask; // 0x1C0(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x1C1(0x3) UNKNOWN PROPERTY
		int32_t CustomDepthStencilValue; // 0x1C4(0x4)
		int32_t TranslucencySortPriority; // 0x1C8(0x4)
		bool bEnableDensityScaling : 1; // 0x1CC:0(0x1)
		unsigned char UnknownData07_5[0x3]; // 0x1CD(0x3) UNKNOWN PROPERTY
		TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x1D0(0x10)
		int32_t VirtualTextureCullMips; // 0x1E0(0x4)
		ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x1E4(0x1)
		unsigned char UnknownData08_7[0x3]; // 0x1E5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.HISMBuilderSettings");
			return ret;
		}

		void SetOverriddenLightMapRes(int32_t Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170240(relative to base address)
		int32_t GetOverriddenLightMapRes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7495769CC(relative to base address)
	};


	// Class Procedural.ProceduralContentVariationsWeightsModifier
	// Inherited from UProceduralParameterModifier -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UProceduralContentVariationsWeightsModifier : public UProceduralParameterModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralContentVariationsWeightsModifier");
			return ret;
		}
	};


	// Class Procedural.ProceduralContentVariationsWeightsMapModifier
	// Inherited from UProceduralContentVariationsWeightsModifier -> UProceduralParameterModifier -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UProceduralContentVariationsWeightsMapModifier : public UProceduralContentVariationsWeightsModifier	
	{
	public:
		TArray<FProceduralContentVariationMap> VariationsMaps; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralContentVariationsWeightsMapModifier");
			return ret;
		}
	};


	// Class Procedural.ProceduralGenerator
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UProceduralGenerator : public UObject	
	{
	public:
		FProceduralDebugSettings DebugSettings; // 0x28(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralGenerator");
			return ret;
		}
	};


	// Class Procedural.ProceduralCustomGenerator
	// Inherited from UProceduralGenerator -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UProceduralCustomGenerator : public UProceduralGenerator	
	{
	public:
		UClass* GeneratorContextClass; // 0x38(0x8)
		UProceduralGeneratorContext* GeneratorContext; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralCustomGenerator");
			return ret;
		}
	};


	// Class Procedural.ProceduralDensityMapModifier
	// Inherited from UProceduralDensityModifier -> UProceduralParameterModifier -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UProceduralDensityMapModifier : public UProceduralDensityModifier	
	{
	public:
		UProceduralFloatDataMap* Map; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralDensityMapModifier");
			return ret;
		}
	};


	// Class Procedural.ProceduralGenerationBlockingVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x10 (0x2D8 - 0x2C8)
	class AProceduralGenerationBlockingVolume : public AVolume	
	{
	public:
		TArray<AProceduralGenerationVolume*> BlockedVolumes; // 0x2C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralGenerationBlockingVolume");
			return ret;
		}
	};


	// Class Procedural.ProceduralGenerationComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UProceduralGenerationComponent : public UActorComponent	
	{
	public:
		UProceduralGenerator* Generator; // 0xA0(0x8)
		bool bShowDebugVisualization; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		FGuid ProceduralGenerationGuid; // 0xAC(0x10)
		unsigned char UnknownData01_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		AVolume* GenerationVolume; // 0xC0(0x8)
		UProceduralGenerationContext* GenerationContext; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralGenerationComponent");
			return ret;
		}
	};


	// Class Procedural.ProceduralGenerationContext
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UProceduralGenerationContext : public UObject	
	{
	public:
		UProceduralGeneratorContext* GeneratorContext; // 0x28(0x8)
		TArray<UProceduralGeneratorContext*> GeneratedContexts; // 0x30(0x10)
		TArray<UProceduralGeneratorContext*> RegisteredContexts; // 0x40(0x10)
		TMap<FGuid, UProceduralGeneratorContext*> GeneratorContexts; // 0x50(0x50)
		unsigned char UnknownData00_7[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralGenerationContext");
			return ret;
		}

		AVolume GetGenerationVolume(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75216FE64(relative to base address)
		UProceduralGenerationComponent GetGenerationComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75216FE40(relative to base address)
	};


	// Class Procedural.ProceduralGenerationVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x8 (0x2D0 - 0x2C8)
	class AProceduralGenerationVolume : public AVolume	
	{
	public:
		UProceduralGenerationComponent* ProceduralComponent; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralGenerationVolume");
			return ret;
		}

		void Generate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75216FD40(relative to base address)
		void ClearGeneratedContent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75216FCFC(relative to base address)
	};


	// Class Procedural.ProceduralGeneratorContext
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UProceduralGeneratorContext : public UObject	
	{
	public:
		UProceduralGenerator* Generator; // 0x28(0x8)
		UProceduralGenerationContext* GenerationContext; // 0x30(0x8)
		UProceduralGeneratorContext* OwnerContext; // 0x38(0x8)
		TArray<UObject*> GeneratedObjects; // 0x40(0x10)
		UProceduralPointCloud* ExportedPointCloud; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralGeneratorContext");
			return ret;
		}

		bool OnGenerate(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7493F5558(relative to base address)
		void OnDrawVisualization(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClearGeneratedContent(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF746F37328(relative to base address)
		void GetOrCreateGeneratorContext(UProceduralGenerator* Generator, UProceduralGeneratorContext* Context); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75216FE88(relative to base address)
		TArray GetGeneratedContexts(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75216FDA0(relative to base address)
		bool Generate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75216FD5C(relative to base address)
		void ClearGeneratedContent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75216FD18(relative to base address)
	};


	// Class Procedural.ProceduralGeneratorStack
	// Inherited from UProceduralGenerator -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UProceduralGeneratorStack : public UProceduralGenerator	
	{
	public:
		TArray<FProceduralGenerationStackElement> Generators; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralGeneratorStack");
			return ret;
		}
	};


	// Class Procedural.ProceduralGeneratorStackContext
	// Inherited from UProceduralGeneratorContext -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UProceduralGeneratorStackContext : public UProceduralGeneratorContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralGeneratorStackContext");
			return ret;
		}
	};


	// Class Procedural.ProceduralPointCloud
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UProceduralPointCloud : public UObject	
	{
	public:
		TArray<FProceduralPointCloudPoint> Points; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralPointCloud");
			return ret;
		}

		TArray GetPointsByTag(FName InTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75216FF68(relative to base address)
		void Empty(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75216FD2C(relative to base address)
	};


	// Class Procedural.ProceduralRotationMapModifier
	// Inherited from UProceduralRotationModifier -> UProceduralParameterModifier -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UProceduralRotationMapModifier : public UProceduralRotationModifier	
	{
	public:
		UProceduralVectorDataMap* Map; // 0x38(0x8)
		EProceduralRotationFormat RotationFormat; // 0x40(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		FFloatInterval Roll; // 0x44(0x8)
		FFloatInterval pitch; // 0x4C(0x8)
		FFloatInterval Yaw; // 0x54(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralRotationMapModifier");
			return ret;
		}

		void SetYawMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75217069C(relative to base address)
		void SetYawMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170610(relative to base address)
		void SetRollMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521707B4(relative to base address)
		void SetRollMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170728(relative to base address)
		void SetPitchMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170354(relative to base address)
		void SetPitchMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521702C8(relative to base address)
		float GetYawMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D18CC(relative to base address)
		float GetYawMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D04(relative to base address)
		float GetRollMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7499B6EAC(relative to base address)
		float GetRollMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1AC8(relative to base address)
		float GetPitchMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D3C(relative to base address)
		float GetPitchMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748BA0724(relative to base address)
	};


	// Class Procedural.ProceduralRotationNoiseModifier
	// Inherited from UProceduralRotationModifier -> UProceduralParameterModifier -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UProceduralRotationNoiseModifier : public UProceduralRotationModifier	
	{
	public:
		bool bRandomRoll : 1; // 0x38:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FFloatInterval RandomRoll; // 0x3C(0x8)
		bool bRandomPitch : 1; // 0x44:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		FFloatInterval RandomPitch; // 0x48(0x8)
		bool bRandomYaw : 1; // 0x50:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		FFloatInterval RandomYaw; // 0x54(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralRotationNoiseModifier");
			return ret;
		}

		void SetRandomYawMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75217069C(relative to base address)
		void SetRandomYawMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170610(relative to base address)
		void SetRandomRollMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170584(relative to base address)
		void SetRandomRollMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521704F8(relative to base address)
		void SetRandomPitchMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75217046C(relative to base address)
		void SetRandomPitchMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521703E0(relative to base address)
		float GetRandomYawMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D18CC(relative to base address)
		float GetRandomYawMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D04(relative to base address)
		float GetRandomRollMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7495769CC(relative to base address)
		float GetRandomRollMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7496973C8(relative to base address)
		float GetRandomPitchMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1AC8(relative to base address)
		float GetRandomPitchMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D3C(relative to base address)
	};


	// Class Procedural.ProceduralScaleMapModifier
	// Inherited from UProceduralScaleModifier -> UProceduralParameterModifier -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UProceduralScaleMapModifier : public UProceduralScaleModifier	
	{
	public:
		bool bRemapScale; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FFloatInterval RemapScale; // 0x3C(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UProceduralFloatDataMap* Map; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScaleMapModifier");
			return ret;
		}

		void SetRemapScaleMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170584(relative to base address)
		void SetRemapScaleMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521704F8(relative to base address)
		float GetRemapScaleMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7495769CC(relative to base address)
		float GetRemapScaleMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7496973C8(relative to base address)
	};


	// Class Procedural.ProceduralScaleNoiseModifier
	// Inherited from UProceduralScaleModifier -> UProceduralParameterModifier -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UProceduralScaleNoiseModifier : public UProceduralScaleModifier	
	{
	public:
		FFloatInterval Scale; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScaleNoiseModifier");
			return ret;
		}

		void SetScaleMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521708CC(relative to base address)
		void SetScaleMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170840(relative to base address)
		float GetScaleMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1804(relative to base address)
		float GetScaleMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7495769CC(relative to base address)
	};


	// Class Procedural.ProceduralScatterContentVariation
	// Inherited from UObject
	// Size: 0xC0 (0xE8 - 0x28)
	class UProceduralScatterContentVariation : public UObject	
	{
	public:
		float Weight; // 0x28(0x4)
		EProceduralScatterContentPivotMode PivotMode; // 0x2C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		FVector AdditionalPivotOffset; // 0x30(0x18)
		float FootprintBoundingBoxRatio; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		TArray<FName> SetActorTags; // 0x50(0x10)
		unsigned char UnknownData02_7[0x88]; // 0x60(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterContentVariation");
			return ret;
		}
	};


	// Class Procedural.ProceduralScatterActorContentVariation
	// Inherited from UProceduralScatterContentVariation -> UObject
	// Size: 0x8 (0xF0 - 0xE8)
	class UProceduralScatterActorContentVariation : public UProceduralScatterContentVariation	
	{
	public:
		UClass* ActorClass; // 0xE8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterActorContentVariation");
			return ret;
		}
	};


	// Class Procedural.ProceduralScatterContentSettings
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UProceduralScatterContentSettings : public UObject	
	{
	public:
		TArray<FName> SetActorTags; // 0x28(0x10)
		TArray<UProceduralScatterContentVariation*> Variations; // 0x38(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x48(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterContentSettings");
			return ret;
		}
	};


	// Class Procedural.ProceduralScatterActorContentSettings
	// Inherited from UProceduralScatterContentSettings -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class UProceduralScatterActorContentSettings : public UProceduralScatterContentSettings	
	{
	public:
		bool bHideFromWorldOutliner; // 0x68(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterActorContentSettings");
			return ret;
		}
	};


	// Class Procedural.ProceduralScatterGenerator
	// Inherited from UProceduralGenerator -> UObject
	// Size: 0xA0 (0xD8 - 0x38)
	class UProceduralScatterGenerator : public UProceduralGenerator	
	{
	public:
		EProceduralScatterMethod ScatterMethod; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FProceduralScatterTileSettings TileSettings; // 0x3C(0x14)
		int32_t RandomSeed; // 0x50(0x4)
		int32_t NumUniqueSourcePointPatterns; // 0x54(0x4)
		FVector2D GridSize; // 0x58(0x10)
		FVector2D GridJitter; // 0x68(0x10)
		float GridRotation; // 0x78(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FVector2D GridOffset; // 0x80(0x10)
		TArray<FProceduralScatterSettingsElement> ScatterSettingsElements; // 0x90(0x10)
		TArray<FName> BlockingActorTags; // 0xA0(0x10)
		bool bAllScatterPointsBlocking; // 0xB0(0x1)
		bool bLocalDistribution; // 0xB1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY
		TArray<FName> BlockingScatterPointTags; // 0xB8(0x10)
		FProceduralScatterDebugSettings ScatterDebugSettings; // 0xC8(0xC)
		unsigned char UnknownData03_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterGenerator");
			return ret;
		}
	};


	// Class Procedural.ProceduralScatterGeneratorContext
	// Inherited from UProceduralGeneratorContext -> UObject
	// Size: 0x328 (0x380 - 0x58)
	class UProceduralScatterGeneratorContext : public UProceduralGeneratorContext	
	{
	public:
		FScatteredPointCloud ScatteredPointCloud; // 0x58(0x10)
		TArray<UProceduralScatterGeneratorTile*> UniqueTiles; // 0x68(0x10)
		TArray<FSourcePointGenerator> SourcePointGenerators; // 0x78(0x10)
		TArray<FProceduralScatterProjectionPoint> ProjectionPointCloud; // 0x88(0x10)
		UProceduralPointCloud* SourcePointCloud; // 0x98(0x8)
		UProceduralPointCloud* BlockerPointCloud; // 0xA0(0x8)
		UMaterialInstanceDynamic* ProjectionVectorMaterial; // 0xA8(0x8)
		unsigned char UnknownData00_7[0x2D0]; // 0xB0(0x2D0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterGeneratorContext");
			return ret;
		}
	};


	// Class Procedural.ProceduralScatterGeneratorTile
	// Inherited from UObject
	// Size: 0x140 (0x168 - 0x28)
	class UProceduralScatterGeneratorTile : public UObject	
	{
	public:
		UProceduralScatterGenerator* Generator; // 0x28(0x8)
		TArray<FProceduralScatter2DPoint> GeneratedPoints; // 0x30(0x10)
		unsigned char UnknownData00_7[0x128]; // 0x40(0x128) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterGeneratorTile");
			return ret;
		}
	};


	// Class Procedural.ProceduralScatterSettings
	// Inherited from UObject
	// Size: 0x1B0 (0x1D8 - 0x28)
	class UProceduralScatterSettings : public UObject	
	{
	public:
		UProceduralScatterContentSettings* Content; // 0x28(0x8)
		bool bContentVariationsModifiersEnabled : 1; // 0x30:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FProceduralContentVariationsModifiers ContentVariationsModifiers; // 0x38(0x10)
		TArray<FName> SetPointTags; // 0x48(0x10)
		float CollisionRadius; // 0x58(0x4)
		bool bAutomaticCollisionRadius : 1; // 0x5C:0(0x1)
		bool bUseSphericalBoundsForAutomaticCollisionRadius : 1; // 0x5C:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		float AutomaticCollisionRadiusScaleFactor; // 0x60(0x4)
		int32_t DistributionSeed; // 0x64(0x4)
		bool bDensityModifiersEnabled : 1; // 0x68:0(0x1)
		unsigned char UnknownData02_5[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FProceduralDensityModifiers DensityModifiers; // 0x70(0x10)
		float Density; // 0x80(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		TArray<FName> SourcePointTagIncludes; // 0x88(0x10)
		TArray<FName> SourcePointTagExcludes; // 0x98(0x10)
		TArray<FName> SourceActorTagIncludes; // 0xA8(0x10)
		TArray<FName> SourceActorTagExcludes; // 0xB8(0x10)
		TArray<FName> SourceComponentTagIncludes; // 0xC8(0x10)
		TArray<FName> SourceComponentTagExcludes; // 0xD8(0x10)
		FFloatInterval SourcePointDistance; // 0xE8(0x8)
		bool bUseSourcePointExactNumber : 1; // 0xF0:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0xF1(0x3) UNKNOWN PROPERTY
		int32_t SourcePointExactNumber; // 0xF4(0x4)
		bool bScaleModifiersEnabled : 1; // 0xF8:0(0x1)
		unsigned char UnknownData05_5[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		FProceduralScaleModifiers ScaleModifiers; // 0x100(0x20)
		bool bRotationModifiersEnabled : 1; // 0x120:0(0x1)
		unsigned char UnknownData06_5[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		FProceduralRotationModifiers RotationModifiers; // 0x128(0x10)
		bool bAlignToNormal : 1; // 0x138:0(0x1)
		unsigned char UnknownData07_5[0x3]; // 0x139(0x3) UNKNOWN PROPERTY
		float AlignMaxAngle; // 0x13C(0x4)
		FProceduralScatterTargetSurface TargetSurface; // 0x140(0x48)
		bool bDetectOverhangingLedge : 1; // 0x188:0(0x1)
		unsigned char UnknownData08_5[0x3]; // 0x189(0x3) UNKNOWN PROPERTY
		int32_t OverhangingLedgeDetectionRayCount; // 0x18C(0x4)
		float OverhangingLedgeDetectionLength; // 0x190(0x4)
		float OverhangingLedgeDetectionVerticalThreshold; // 0x194(0x4)
		float OverhangingLedgeDetectionRadiusScale; // 0x198(0x4)
		float FilterMinimumScale; // 0x19C(0x4)
		float OverlapPriority; // 0x1A0(0x4)
		bool bCollisionWithWorld : 1; // 0x1A4:0(0x1)
		unsigned char UnknownData09_5[0x3]; // 0x1A5(0x3) UNKNOWN PROPERTY
		FVector CollisionScale; // 0x1A8(0x18)
		FColor DebugColor; // 0x1C0(0x4)
		unsigned char UnknownData10_7[0x14]; // 0x1C4(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterSettings");
			return ret;
		}

		void SetSourcePointDistanceMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521709EC(relative to base address)
		void SetSourcePointDistanceMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170958(relative to base address)
		float GetSourcePointDistanceMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3336C0(relative to base address)
		float GetSourcePointDistanceMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EC2EA34(relative to base address)
	};


	// Class Procedural.ProceduralScatterStaticMeshContentVariation
	// Inherited from UProceduralScatterContentVariation -> UObject
	// Size: 0x80 (0x168 - 0xE8)
	class UProceduralScatterStaticMeshContentVariation : public UProceduralScatterContentVariation	
	{
	public:
		EProceduralScatterStaticMeshMode StaticMeshMode; // 0xE8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		UStaticMesh* Mesh; // 0xF0(0x8)
		UClass* ActorClass; // 0xF8(0x8)
		TArray<UMaterialInterface*> OverrideMaterials; // 0x100(0x10)
		UHISMBuilderSettings* OverrideInstancingSettings; // 0x110(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x118(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterStaticMeshContentVariation");
			return ret;
		}
	};


	// Class Procedural.ProceduralScatterStaticMeshContentSettings
	// Inherited from UProceduralScatterContentSettings -> UObject
	// Size: 0x18 (0x80 - 0x68)
	class UProceduralScatterStaticMeshContentSettings : public UProceduralScatterContentSettings	
	{
	public:
		UClass* ComponentClass; // 0x68(0x8)
		FName ComponentTag; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		UHISMBuilderSettings* VariationsInstancingSettings; // 0x78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralScatterStaticMeshContentSettings");
			return ret;
		}
	};


	// Class Procedural.ProceduralSurfaceHeightMap
	// Inherited from UProceduralFloatDataMap -> UProceduralDataMap -> UObject
	// Size: 0x10 (0xC8 - 0xB8)
	class UProceduralSurfaceHeightMap : public UProceduralFloatDataMap	
	{
	public:
		bool bNormalizedHeight; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		FFloatInterval HeightRange; // 0xBC(0x8)
		unsigned char UnknownData01_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralSurfaceHeightMap");
			return ret;
		}

		void SetHeightRangeMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521701AC(relative to base address)
		void SetHeightRangeMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170118(relative to base address)
		float GetValue(float InHeight); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752170088(relative to base address)
		float GetHeightRangeMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162B96C(relative to base address)
		float GetHeightRangeMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA50438(relative to base address)
	};


	// Class Procedural.ProceduralSurfaceSlopeAngleMap
	// Inherited from UProceduralFloatDataMap -> UProceduralDataMap -> UObject
	// Size: 0x10 (0xC8 - 0xB8)
	class UProceduralSurfaceSlopeAngleMap : public UProceduralFloatDataMap	
	{
	public:
		bool bNormalizedSlopeAngle; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		FFloatInterval SlopeAngleRange; // 0xBC(0x8)
		unsigned char UnknownData01_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Procedural.ProceduralSurfaceSlopeAngleMap");
			return ret;
		}

		void SetSlopeAngleRangeMin(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521701AC(relative to base address)
		void SetSlopeAngleRangeMax(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752170118(relative to base address)
		float GetValue(float InSlopeAngle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752170088(relative to base address)
		float GetSlopeAngleRangeMin(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162B96C(relative to base address)
		float GetSlopeAngleRangeMax(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA50438(relative to base address)
	};

}