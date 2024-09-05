#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangePipelines
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class InterchangePipelines.InterchangeGenericCommonMeshesProperties
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0x18 (0x140 - 0x128)
	class UInterchangeGenericCommonMeshesProperties : public UInterchangePipelineBase	
	{
	public:
		EInterchangeForceMeshType ForceAllMeshAsType; // 0x128(0x1)
		bool bAutoDetectMeshType; // 0x129(0x1)
		bool bImportLods; // 0x12A(0x1)
		bool bBakeMeshes; // 0x12B(0x1)
		bool bBakePivotMeshes; // 0x12C(0x1)
		bool bKeepSectionsSeparate; // 0x12D(0x1)
		EInterchangeVertexColorImportOption VertexColorImportOption; // 0x12E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x12F(0x1) UNKNOWN PROPERTY
		FColor VertexOverrideColor; // 0x130(0x4)
		bool bRecomputeNormals; // 0x134(0x1)
		bool bRecomputeTangents; // 0x135(0x1)
		bool bUseMikkTSpace; // 0x136(0x1)
		bool bComputeWeightedNormals; // 0x137(0x1)
		bool bUseHighPrecisionTangentBasis; // 0x138(0x1)
		bool bUseFullPrecisionUVs; // 0x139(0x1)
		bool bUseBackwardsCompatibleF16TruncUVs; // 0x13A(0x1)
		bool bRemoveDegenerates; // 0x13B(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeGenericCommonMeshesProperties");
			return ret;
		}
	};


	// Class InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0x10 (0x138 - 0x128)
	class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : public UInterchangePipelineBase	
	{
	public:
		bool bImportOnlyAnimations; // 0x128(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x129(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<USkeleton*> Skeleton; // 0x12C(0x8)
		bool bImportMeshesInBoneHierarchy; // 0x134(0x1)
		bool bUseT0AsRefPose; // 0x135(0x1)
		bool bConvertStaticsWithMorphTargetsToSkeletals; // 0x136(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x137(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties");
			return ret;
		}
	};


	// Class InterchangePipelines.GLTFPipelineSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UGLTFPipelineSettings : public UDeveloperSettings	
	{
	public:
		TMap<FString, FSoftObjectPath> MaterialParents; // 0x30(0x50)
		unsigned char UnknownData00_7[0x8]; // 0x80(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.GLTFPipelineSettings");
			return ret;
		}
	};


	// Class InterchangePipelines.InterchangeGLTFPipeline
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0x18 (0x140 - 0x128)
	class UInterchangeGLTFPipeline : public UInterchangePipelineBase	
	{
	public:
		FString PipelineDisplayName; // 0x128(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x138(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeGLTFPipeline");
			return ret;
		}
	};


	// Class InterchangePipelines.MaterialXPipelineSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x140 (0x170 - 0x30)
	class UMaterialXPipelineSettings : public UDeveloperSettings	
	{
	public:
		TMap<EInterchangeMaterialXShaders, FSoftObjectPath> PredefinedSurfaceShaders; // 0x30(0x50)
		TMap<EInterchangeMaterialXBSDF, FSoftObjectPath> PredefinedBSDF; // 0x80(0x50)
		TMap<EInterchangeMaterialXEDF, FSoftObjectPath> PredefinedEDF; // 0xD0(0x50)
		TMap<EInterchangeMaterialXVDF, FSoftObjectPath> PredefinedVDF; // 0x120(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.MaterialXPipelineSettings");
			return ret;
		}
	};


	// Class InterchangePipelines.InterchangeMaterialXPipeline
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0x8 (0x130 - 0x128)
	class UInterchangeMaterialXPipeline : public UInterchangePipelineBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x128(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeMaterialXPipeline");
			return ret;
		}
	};


	// Class InterchangePipelines.InterchangeGenericAnimationPipeline
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0x70 (0x198 - 0x128)
	class UInterchangeGenericAnimationPipeline : public UInterchangePipelineBase	
	{
	public:
		TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*> CommonSkeletalMeshesAndAnimationsProperties; // 0x128(0x8)
		TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*> CommonMeshesProperties; // 0x130(0x8)
		bool bImportAnimations; // 0x138(0x1)
		bool bImportBoneTracks; // 0x139(0x1)
		EInterchangeAnimationRange AnimationRange; // 0x13A(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x13B(0x1) UNKNOWN PROPERTY
		FInt32Interval FrameImportRange; // 0x13C(0x8)
		bool bUse30HzToBakeBoneAnimation; // 0x144(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x145(0x3) UNKNOWN PROPERTY
		int32_t CustomBoneAnimationSampleRate; // 0x148(0x4)
		bool bSnapToClosestFrameBoundary; // 0x14C(0x1)
		bool bImportCustomAttribute; // 0x14D(0x1)
		bool bAddCurveMetadataToSkeleton; // 0x14E(0x1)
		bool bSetMaterialDriveParameterOnCustomAttribute; // 0x14F(0x1)
		TArray<FString> MaterialCurveSuffixes; // 0x150(0x10)
		bool bRemoveCurveRedundantKeys; // 0x160(0x1)
		bool bDoNotImportCurveWithZero; // 0x161(0x1)
		bool bDeleteExistingNonCurveCustomAttributes; // 0x162(0x1)
		bool bDeleteExistingCustomAttributeCurves; // 0x163(0x1)
		bool bDeleteExistingMorphTargetCurves; // 0x164(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x165(0x3) UNKNOWN PROPERTY
		FString SourceAnimationName; // 0x168(0x10)
		bool bSceneImport; // 0x178(0x1)
		unsigned char UnknownData03_7[0x1F]; // 0x179(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeGenericAnimationPipeline");
			return ret;
		}
	};


	// Class InterchangePipelines.InterchangeGenericAssetsPipeline
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0x180 (0x2A8 - 0x128)
	class UInterchangeGenericAssetsPipeline : public UInterchangePipelineBase	
	{
	public:
		FString PipelineDisplayName; // 0x128(0x10)
		EReimportStrategyFlags ReimportStrategy; // 0x138(0x1)
		bool bUseSourceNameForAsset; // 0x139(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x13A(0x6) UNKNOWN PROPERTY
		FString AssetName; // 0x140(0x10)
		FVector ImportOffsetTranslation; // 0x150(0x18)
		FRotator ImportOffsetRotation; // 0x168(0x18)
		float ImportOffsetUniformScale; // 0x180(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x184(0x4) UNKNOWN PROPERTY
		UInterchangeGenericCommonMeshesProperties* CommonMeshesProperties; // 0x188(0x8)
		UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties* CommonSkeletalMeshesAndAnimationsProperties; // 0x190(0x8)
		UInterchangeGenericMeshPipeline* MeshPipeline; // 0x198(0x8)
		UInterchangeGenericAnimationPipeline* AnimationPipeline; // 0x1A0(0x8)
		UInterchangeGenericMaterialPipeline* MaterialPipeline; // 0x1A8(0x8)
		FSoftObjectPath ContentPathExistingSkeleton; // 0x1B0(0x18)
		bool bImportOnlyAnimationAdjusted; // 0x1C8(0x1)
		unsigned char UnknownData02_7[0xDF]; // 0x1C9(0xDF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeGenericAssetsPipeline");
			return ret;
		}
	};


	// Class InterchangePipelines.InterchangeGenericMaterialPipeline
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0xA8 (0x1D0 - 0x128)
	class UInterchangeGenericMaterialPipeline : public UInterchangePipelineBase	
	{
	public:
		FString PipelineDisplayName; // 0x128(0x10)
		bool bImportMaterials; // 0x138(0x1)
		EInterchangeMaterialSearchLocation SearchLocation; // 0x139(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x13A(0x6) UNKNOWN PROPERTY
		FString AssetName; // 0x140(0x10)
		EInterchangeMaterialImportOption MaterialImport; // 0x150(0x1)
		bool bIdentifyDuplicateMaterials; // 0x151(0x1)
		bool bCreateMaterialInstanceForParent; // 0x152(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x153(0x5) UNKNOWN PROPERTY
		FSoftObjectPath ParentMaterial; // 0x158(0x18)
		UInterchangeGenericTexturePipeline* TexturePipeline; // 0x170(0x8)
		UInterchangeBaseNodeContainer* BaseNodeContainer; // 0x178(0x8)
		unsigned char UnknownData02_7[0x50]; // 0x180(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeGenericMaterialPipeline");
			return ret;
		}
	};


	// Class InterchangePipelines.InterchangeGenericMeshPipeline
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0xD8 (0x200 - 0x128)
	class UInterchangeGenericMeshPipeline : public UInterchangePipelineBase	
	{
	public:
		TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*> CommonMeshesProperties; // 0x128(0x8)
		TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*> CommonSkeletalMeshesAndAnimationsProperties; // 0x130(0x8)
		bool bImportStaticMeshes; // 0x138(0x1)
		bool bCombineStaticMeshes; // 0x139(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x13A(0x2) UNKNOWN PROPERTY
		FName LODGroup; // 0x13C(0x4)
		bool bImportCollision; // 0x140(0x1)
		bool bImportCollisionAccordingToMeshName; // 0x141(0x1)
		bool bOneConvexHullPerUCX; // 0x142(0x1)
		bool bBuildNanite; // 0x143(0x1)
		bool bBuildReversedIndexBuffer; // 0x144(0x1)
		bool bGenerateLightmapUVs; // 0x145(0x1)
		bool bGenerateDistanceFieldAsIfTwoSided; // 0x146(0x1)
		bool bSupportFaceRemap; // 0x147(0x1)
		int32_t MinLightmapResolution; // 0x148(0x4)
		int32_t SrcLightmapIndex; // 0x14C(0x4)
		int32_t DstLightmapIndex; // 0x150(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
		FVector BuildScale3D; // 0x158(0x18)
		float DistanceFieldResolutionScale; // 0x170(0x4)
		TWeakObjectPtr<UStaticMesh*> DistanceFieldReplacementMesh; // 0x174(0x8)
		int32_t MaxLumenMeshCards; // 0x17C(0x4)
		bool bImportSkeletalMeshes; // 0x180(0x1)
		EInterchangeSkeletalMeshContentType SkeletalMeshImportContentType; // 0x181(0x1)
		EInterchangeSkeletalMeshContentType LastSkeletalMeshImportContentType; // 0x182(0x1)
		bool bCombineSkeletalMeshes; // 0x183(0x1)
		bool bImportMorphTargets; // 0x184(0x1)
		bool bMergeMorphTargetsWithSameName; // 0x185(0x1)
		bool bImportVertexAttributes; // 0x186(0x1)
		bool bUpdateSkeletonReferencePose; // 0x187(0x1)
		bool bCreatePhysicsAsset; // 0x188(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x189(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UPhysicsAsset*> PhysicsAsset; // 0x18C(0x8)
		bool bUseHighPrecisionSkinWeights; // 0x194(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x195(0x3) UNKNOWN PROPERTY
		float ThresholdPosition; // 0x198(0x4)
		float ThresholdTangentNormal; // 0x19C(0x4)
		float ThresholdUV; // 0x1A0(0x4)
		float MorphThresholdPosition; // 0x1A4(0x4)
		int32_t BoneInfluenceLimit; // 0x1A8(0x4)
		unsigned char UnknownData04_7[0x54]; // 0x1AC(0x54) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeGenericMeshPipeline");
			return ret;
		}

		void SetCombineSkeletalMeshes(bool InbCombineSkeletalMeshes); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C079284(relative to base address)
		bool GetCombineSkeletalMeshes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752385438(relative to base address)
	};


	// Class InterchangePipelines.InterchangeGenericLevelPipeline
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0x20 (0x148 - 0x128)
	class UInterchangeGenericLevelPipeline : public UInterchangePipelineBase	
	{
	public:
		FString PipelineDisplayName; // 0x128(0x10)
		EReimportStrategyFlags ReimportPropertyStrategy; // 0x138(0x1)
		bool bDeleteMissingActors; // 0x139(0x1)
		bool bForceReimportDeletedActors; // 0x13A(0x1)
		bool bForceReimportDeletedAssets; // 0x13B(0x1)
		bool bDeleteMissingAssets; // 0x13C(0x1)
		bool bUsePhysicalInsteadOfStandardPerspectiveCamera; // 0x13D(0x1)
		unsigned char UnknownData00_7[0xA]; // 0x13E(0xA) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeGenericLevelPipeline");
			return ret;
		}
	};


	// Class InterchangePipelines.InterchangeGenericTexturePipeline
	// Inherited from UInterchangePipelineBase -> UObject
	// Size: 0x68 (0x190 - 0x128)
	class UInterchangeGenericTexturePipeline : public UInterchangePipelineBase	
	{
	public:
		FString PipelineDisplayName; // 0x128(0x10)
		bool bImportTextures; // 0x138(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x139(0x7) UNKNOWN PROPERTY
		FString AssetName; // 0x140(0x10)
		bool bAllowNonPowerOfTwo; // 0x150(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x151(0x7) UNKNOWN PROPERTY
		UInterchangeBaseNodeContainer* BaseNodeContainer; // 0x158(0x8)
		unsigned char UnknownData02_7[0x30]; // 0x160(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangeGenericTexturePipeline");
			return ret;
		}
	};


	// Class InterchangePipelines.InterchangePipelineMeshesUtilities
	// Inherited from UObject
	// Size: 0x100 (0x128 - 0x28)
	class UInterchangePipelineMeshesUtilities : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x100]; // 0x28(0x100) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangePipelines.InterchangePipelineMeshesUtilities");
			return ret;
		}

		void SetContext(FInterchangePipelineMeshesUtilitiesContext& Context); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7523858E0(relative to base address)
		bool IsValidMeshInstanceUid(FString MeshInstanceUid); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752385844(relative to base address)
		bool IsValidMeshGeometryUid(FString MeshGeometryUid); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7523857A8(relative to base address)
		FString GetMeshInstanceSkeletonRootUid(FString MeshInstanceUid); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7523856A4(relative to base address)
		FInterchangeMeshInstance GetMeshInstanceByUid(FString MeshInstanceUid); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7523855FC(relative to base address)
		FString GetMeshGeometrySkeletonRootUid(FString MeshGeometryUid); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7523854F8(relative to base address)
		FInterchangeMeshGeometry GetMeshGeometryByUid(FString MeshGeometryUid); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752385450(relative to base address)
		void GetAllStaticMeshInstance(TArray<FString>& MeshInstanceUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752385374(relative to base address)
		void GetAllStaticMeshGeometry(TArray<FString>& MeshGeometryUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7523852B0(relative to base address)
		void GetAllSkinnedMeshInstance(TArray<FString>& MeshInstanceUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7523851EC(relative to base address)
		void GetAllSkinnedMeshGeometry(TArray<FString>& MeshGeometryUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752385128(relative to base address)
		void GetAllMeshInstanceUidsUsingMeshGeometryUid(FString MeshGeometryUid, TArray<FString>& MeshInstanceUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752385008(relative to base address)
		void GetAllMeshInstanceUids(TArray<FString>& MeshInstanceUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752384F44(relative to base address)
		void GetAllMeshGeometryNotInstanced(TArray<FString>& MeshGeometryUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752384E80(relative to base address)
		void GetAllMeshGeometry(TArray<FString>& MeshGeometryUids); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752384DBC(relative to base address)
		UInterchangePipelineMeshesUtilities CreateInterchangePipelineMeshesUtilities(UInterchangeBaseNodeContainer* BaseNodeContainer); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF752384D3C(relative to base address)
	};

}
