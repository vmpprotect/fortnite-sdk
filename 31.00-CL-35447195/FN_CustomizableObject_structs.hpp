#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CustomizableObject
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CustomizableObject.CustomizableObjectInstanceBakeOutput
	// Size: 0x18 (0x18 - 0x0)
	struct FCustomizableObjectInstanceBakeOutput	
	{
	public:
		bool bWasBakeSuccessful; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray SavedPackages; // 0x8(0x10)
	};


	// Struct CustomizableObject.BakedResourceData
	// Size: 0x18 (0x18 - 0x0)
	struct FBakedResourceData	
	{
	public:
		EPackageSaveResolutionType SaveType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString AssetPath; // 0x8(0x10)
	};


	// Struct CustomizableObject.UpdateContext
	// Size: 0x1 (0x1 - 0x0)
	struct FUpdateContext	
	{
	public:
		EUpdateResult UpdateResult; // 0x0(0x1)
	};


	// Struct CustomizableObject.CustomizableObjectClothConfigData
	// Size: 0x28 (0x28 - 0x0)
	struct FCustomizableObjectClothConfigData	
	{
	public:
		FString ClassPath; // 0x0(0x10)
		FName ConfigName; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray ConfigBytes; // 0x18(0x10)
	};


	// Struct CustomizableObject.CustomizableObjectClothingAssetData
	// Size: 0x70 (0x70 - 0x0)
	struct FCustomizableObjectClothingAssetData	
	{
	public:
		TArray LODData; // 0x0(0x10)
		TArray LodMap; // 0x10(0x10)
		TArray UsedBoneNames; // 0x20(0x10)
		TArray UsedBoneIndices; // 0x30(0x10)
		int32_t ReferenceBoneIndex; // 0x40(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TArray ConfigsData; // 0x48(0x10)
		FName Name; // 0x58(0x4)
		FGuid OriginalAssetGuid; // 0x5C(0x10)
		unsigned char UnknownData03_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.CustomizableObjectAnimationSlot
	// Size: 0x28 (0x28 - 0x0)
	struct FCustomizableObjectAnimationSlot	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr AnimInstance; // 0x8(0x20)
	};


	// Struct CustomizableObject.ReferencedPhysicsAssets
	// Size: 0x40 (0x40 - 0x0)
	struct FReferencedPhysicsAssets	
	{
	public:
		unsigned char UnknownData02_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		TArray PhysicsAssetsToMerge; // 0x10(0x10)
		unsigned char UnknownData03_6[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
		TArray AdditionalPhysicsAssets; // 0x30(0x10)
	};


	// Struct CustomizableObject.ReferencedSkeletons
	// Size: 0x28 (0x28 - 0x0)
	struct FReferencedSkeletons	
	{
	public:
		USkeleton Skeleton; // 0x0(0x8)
		TArray SkeletonIds; // 0x8(0x10)
		TArray SkeletonsToMerge; // 0x18(0x10)
	};


	// Struct CustomizableObject.CustomizableInstanceComponentData
	// Size: 0x148 (0x148 - 0x0)
	struct FCustomizableInstanceComponentData	
	{
	public:
		TMap AnimSlotToBP; // 0x0(0x50)
		TSet AssetUserDataArray; // 0x50(0x50)
		unsigned char UnknownData02_6[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		FReferencedSkeletons Skeletons; // 0xB0(0x28)
		FReferencedPhysicsAssets PhysicsAssets; // 0xD8(0x40)
		unsigned char UnknownData03_6[0x20]; // 0x118(0x20) UNKNOWN PROPERTY
		TArray OverrideMaterials; // 0x138(0x10)
	};


	// Struct CustomizableObject.AnimInstanceOverridePhysicsAsset
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimInstanceOverridePhysicsAsset	
	{
	public:
		int32_t PropertyIndex; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UPhysicsAsset PhysicsAsset; // 0x8(0x8)
	};


	// Struct CustomizableObject.AnimBpGeneratedPhysicsAssets
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimBpGeneratedPhysicsAssets	
	{
	public:
		TArray AnimInstancePropertyIndexAndPhysicsAssets; // 0x0(0x10)
	};


	// Struct CustomizableObject.CustomizableObjectBoolParameterValue
	// Size: 0x28 (0x28 - 0x0)
	struct FCustomizableObjectBoolParameterValue	
	{
	public:
		FString ParameterName; // 0x0(0x10)
		bool ParameterValue; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FGuid ID; // 0x14(0x10)
		unsigned char UnknownData03_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.CustomizableObjectIntParameterValue
	// Size: 0x40 (0x40 - 0x0)
	struct FCustomizableObjectIntParameterValue	
	{
	public:
		FString ParameterName; // 0x0(0x10)
		FString ParameterValueName; // 0x10(0x10)
		FGuid ID; // 0x20(0x10)
		TArray ParameterRangeValueNames; // 0x30(0x10)
	};


	// Struct CustomizableObject.CustomizableObjectFloatParameterValue
	// Size: 0x38 (0x38 - 0x0)
	struct FCustomizableObjectFloatParameterValue	
	{
	public:
		FString ParameterName; // 0x0(0x10)
		float ParameterValue; // 0x10(0x4)
		FGuid ID; // 0x14(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray ParameterRangeValues; // 0x28(0x10)
	};


	// Struct CustomizableObject.CustomizableObjectTextureParameterValue
	// Size: 0x38 (0x38 - 0x0)
	struct FCustomizableObjectTextureParameterValue	
	{
	public:
		FString ParameterName; // 0x0(0x10)
		FName ParameterValue; // 0x10(0x4)
		FGuid ID; // 0x14(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray ParameterRangeValues; // 0x28(0x10)
	};


	// Struct CustomizableObject.CustomizableObjectVectorParameterValue
	// Size: 0x30 (0x30 - 0x0)
	struct FCustomizableObjectVectorParameterValue	
	{
	public:
		FString ParameterName; // 0x0(0x10)
		FLinearColor ParameterValue; // 0x10(0x10)
		FGuid ID; // 0x20(0x10)
	};


	// Struct CustomizableObject.CustomizableObjectProjector
	// Size: 0x38 (0x38 - 0x0)
	struct FCustomizableObjectProjector	
	{
	public:
		FVector3f Position; // 0x0(0xC)
		FVector3f Direction; // 0xC(0xC)
		FVector3f Up; // 0x18(0xC)
		FVector3f Scale; // 0x24(0xC)
		ECustomizableObjectProjectorType ProjectionType; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float Angle; // 0x34(0x4)
	};


	// Struct CustomizableObject.CustomizableObjectProjectorParameterValue
	// Size: 0x68 (0x68 - 0x0)
	struct FCustomizableObjectProjectorParameterValue	
	{
	public:
		FString ParameterName; // 0x0(0x10)
		FCustomizableObjectProjector Value; // 0x10(0x38)
		FGuid ID; // 0x48(0x10)
		TArray RangeValues; // 0x58(0x10)
	};


	// Struct CustomizableObject.MutableRemappedBone
	// Size: 0x8 (0x8 - 0x0)
	struct FMutableRemappedBone	
	{
	public:
		FName Name; // 0x0(0x4)
		uint32_t Hash; // 0x4(0x4)
	};


	// Struct CustomizableObject.MutableModelParameterValue
	// Size: 0x18 (0x18 - 0x0)
	struct FMutableModelParameterValue	
	{
	public:
		FString Name; // 0x0(0x10)
		int32_t Value; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.MutableModelParameterProperties
	// Size: 0x28 (0x28 - 0x0)
	struct FMutableModelParameterProperties	
	{
	public:
		unsigned char UnknownData02_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		EMutableParameterType Type; // 0x10(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TArray PossibleValues; // 0x18(0x10)
	};


	// Struct CustomizableObject.MutableModelImageProperties
	// Size: 0x20 (0x20 - 0x0)
	struct FMutableModelImageProperties	
	{
	public:
		FString TextureParameterName; // 0x0(0x10)
		TEnumAsByte Filter; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		bool SRGB : 1; // 0x14:0(0x1)
		bool FlipGreenChannel : 1; // 0x14:1(0x1)
		bool IsPassThrough : 1; // 0x14:2(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		int32_t LODBias; // 0x18(0x4)
		TEnumAsByte MipGenSettings; // 0x1C(0x1)
		TEnumAsByte LODGroup; // 0x1D(0x1)
		TEnumAsByte AddressX; // 0x1E(0x1)
		TEnumAsByte AddressY; // 0x1F(0x1)
	};


	// Struct CustomizableObject.MutableRefSocket
	// Size: 0x58 (0x58 - 0x0)
	struct FMutableRefSocket	
	{
	public:
		FName SocketName; // 0x0(0x4)
		FName BoneName; // 0x4(0x4)
		FVector RelativeLocation; // 0x8(0x18)
		FRotator RelativeRotation; // 0x20(0x18)
		FVector RelativeScale; // 0x38(0x18)
		bool bForceAlwaysAnimated; // 0x50(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		int32_t Priority; // 0x54(0x4)
	};


	// Struct CustomizableObject.MutableRefLODInfo
	// Size: 0xC (0xC - 0x0)
	struct FMutableRefLODInfo	
	{
	public:
		float ScreenSize; // 0x0(0x4)
		float LODHysteresis; // 0x4(0x4)
		bool bSupportUniformlyDistributedSampling; // 0x8(0x1)
		bool bAllowCPUAccess; // 0x9(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.MutableRefLODRenderData
	// Size: 0x2 (0x2 - 0x0)
	struct FMutableRefLODRenderData	
	{
	public:
		bool bIsLODOptional; // 0x0(0x1)
		bool bStreamedDataInlined; // 0x1(0x1)
	};


	// Struct CustomizableObject.MutableRefLODData
	// Size: 0x10 (0x10 - 0x0)
	struct FMutableRefLODData	
	{
	public:
		FMutableRefLODInfo LODInfo; // 0x0(0xC)
		FMutableRefLODRenderData RenderData; // 0xC(0x2)
		unsigned char UnknownData01_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.MutableRefSkeletalMeshSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FMutableRefSkeletalMeshSettings	
	{
	public:
		bool bEnablePerPolyCollision; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float DefaultUVChannelDensity; // 0x4(0x4)
	};


	// Struct CustomizableObject.MutableRefAssetUserData
	// Size: 0x8 (0x8 - 0x0)
	struct FMutableRefAssetUserData	
	{
	public:
		UCustomizableObjectResourceDataContainer AssetUserData; // 0x0(0x8)
	};


	// Struct CustomizableObject.MutableRefSkeletalMeshData
	// Size: 0xD8 (0xD8 - 0x0)
	struct FMutableRefSkeletalMeshData	
	{
	public:
		USkeletalMesh SkeletalMesh; // 0x0(0x8)
		TWeakObjectPtr SoftSkeletalMesh; // 0x8(0x20)
		USkeletalMeshLODSettings SkeletalMeshLODSettings; // 0x28(0x8)
		TArray LODData; // 0x30(0x10)
		TArray Sockets; // 0x40(0x10)
		FBoxSphereBounds Bounds; // 0x50(0x38)
		FMutableRefSkeletalMeshSettings Settings; // 0x88(0x8)
		USkeleton Skeleton; // 0x90(0x8)
		UPhysicsAsset PhysicsAsset; // 0x98(0x8)
		TWeakObjectPtr PostProcessAnimInst; // 0xA0(0x20)
		UPhysicsAsset ShadowPhysicsAsset; // 0xC0(0x8)
		TArray AssetUserData; // 0xC8(0x10)
	};


	// Struct CustomizableObject.AnimBpOverridePhysicsAssetsInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FAnimBpOverridePhysicsAssetsInfo	
	{
	public:
		TWeakObjectPtr AnimInstanceClass; // 0x0(0x20)
		TWeakObjectPtr SourceAsset; // 0x20(0x20)
		int32_t PropertyIndex; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.MutableSkinWeightProfileInfo
	// Size: 0xC (0xC - 0x0)
	struct FMutableSkinWeightProfileInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		uint32_t NameId; // 0x4(0x4)
		bool DefaultProfile; // 0x8(0x1)
		int8_t DefaultProfileFromLODIndex; // 0x9(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.RealTimeMorphStreamable
	// Size: 0x28 (0x28 - 0x0)
	struct FRealTimeMorphStreamable	
	{
	public:
		TArray NameResolutionMap; // 0x0(0x10)
		FMutableStreamableBlock bLock; // 0x10(0x10)
		uint32_t Size; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.MutableStreamableBlock
	// Size: 0x10 (0x10 - 0x0)
	struct FMutableStreamableBlock	
	{
	public:
		uint32_t FileId; // 0x0(0x4)
		uint32_t Flags; // 0x4(0x4)
		uint64_t Offset; // 0x8(0x8)
	};


	// Struct CustomizableObject.MutableMeshMetadata
	// Size: 0x8 (0x8 - 0x0)
	struct FMutableMeshMetadata	
	{
	public:
		uint32_t MorphMetadataId; // 0x0(0x4)
		uint32_t ClothingMetadataId; // 0x4(0x4)
	};


	// Struct CustomizableObject.MutableSurfaceMetadata
	// Size: 0x1 (0x1 - 0x0)
	struct FMutableSurfaceMetadata	
	{
	public:
		bool bCastShadow; // 0x0(0x1)
	};


	// Struct CustomizableObject.ClothingStreamable
	// Size: 0x20 (0x20 - 0x0)
	struct FClothingStreamable	
	{
	public:
		int32_t ClothingAssetIndex; // 0x0(0x4)
		int32_t ClothingAssetLOD; // 0x4(0x4)
		int32_t PhysicsAssetIndex; // 0x8(0x4)
		uint32_t Size; // 0xC(0x4)
		FMutableStreamableBlock bLock; // 0x10(0x10)
	};


	// Struct CustomizableObject.MorphTargetVertexData
	// Size: 0x1C (0x1C - 0x0)
	struct FMorphTargetVertexData	
	{
	public:
		FVector3f PositionDelta; // 0x0(0xC)
		FVector3f TangentZDelta; // 0xC(0xC)
		uint32_t MorphNameIndex; // 0x18(0x4)
	};


	// Struct CustomizableObject.IntegerParameterUIData
	// Size: 0xF0 (0xF0 - 0x0)
	struct FIntegerParameterUIData	
	{
	public:
		FMutableParamUIMetadata ParamUIMetadata; // 0x0(0xF0)
	};


	// Struct CustomizableObject.MutableUIMetadata
	// Size: 0xE8 (0xE8 - 0x0)
	struct FMutableUIMetadata	
	{
	public:
		FString ObjectFriendlyName; // 0x0(0x10)
		FString UISectionName; // 0x10(0x10)
		int32_t UIOrder; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr UIThumbnail; // 0x28(0x20)
		TMap ExtraInformation; // 0x48(0x50)
		TMap ExtraAssets; // 0x98(0x50)
	};


	// Struct CustomizableObject.MutableParamUIMetadata
	// Inherited from FMutableUIMetadata
	// Size: 0x8 (0xF0 - 0xE8)
	struct FMutableParamUIMetadata : public FMutableUIMetadata	
	{
	public:
		float MinimumValue; // 0xE8(0x4)
		float MaximumValue; // 0xEC(0x4)
	};


	// Struct CustomizableObject.MutableParameterData
	// Size: 0x150 (0x150 - 0x0)
	struct FMutableParameterData	
	{
	public:
		FMutableParamUIMetadata ParamUIMetadata; // 0x0(0xF0)
		EMutableParameterType Type; // 0xF0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		TMap ArrayIntegerParameterOption; // 0xF8(0x50)
		ECustomizableObjectGroupType IntegerParameterGroupType; // 0x148(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x149(0x7) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.MutableStateData
	// Size: 0x140 (0x140 - 0x0)
	struct FMutableStateData	
	{
	public:
		FMutableStateUIMetadata StateUIMetadata; // 0x0(0xE8)
		bool bLiveUpdateMode; // 0xE8(0x1)
		bool bDisableTextureStreaming; // 0xE9(0x1)
		bool bReuseInstanceTextures; // 0xEA(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xEB(0x5) UNKNOWN PROPERTY
		TMap ForcedParameterValues; // 0xF0(0x50)
	};


	// Struct CustomizableObject.MutableStateUIMetadata
	// Inherited from FMutableUIMetadata
	// Size: 0x0 (0xE8 - 0xE8)
	struct FMutableStateUIMetadata : public FMutableUIMetadata	
	{
	public:
	};


	// Struct CustomizableObject.ModelResources
	// Size: 0x370 (0x370 - 0x0)
	struct FModelResources	
	{
	public:
		TArray ReferenceSkeletalMeshesData; // 0x0(0x10)
		TArray Skeletons; // 0x10(0x10)
		TArray Materials; // 0x20(0x10)
		TArray PassThroughTextures; // 0x30(0x10)
		TArray PassThroughMeshes; // 0x40(0x10)
		TArray PhysicsAssets; // 0x50(0x10)
		TArray AnimBPs; // 0x60(0x10)
		TArray AnimBpOverridePhysiscAssetsInfo; // 0x70(0x10)
		TArray MaterialSlotNames; // 0x80(0x10)
		TMap BoneNamesMap; // 0x90(0x50)
		TArray SocketArray; // 0xE0(0x10)
		TArray SkinWeightProfilesInfo; // 0xF0(0x10)
		TArray ImageProperties; // 0x100(0x10)
		TMap MeshMetadata; // 0x110(0x50)
		TMap SurfaceMetadata; // 0x160(0x50)
		TMap ParameterUIDataMap; // 0x1B0(0x50)
		TMap StateUIDataMap; // 0x200(0x50)
		TMap RealTimeMorphStreamables; // 0x250(0x50)
		TArray ClothSharedConfigsData; // 0x2A0(0x10)
		TArray ClothingAssetsData; // 0x2B0(0x10)
		TMap ClothingStreamables; // 0x2C0(0x50)
		bool bAllowClothingPhysicsEditsPropagation; // 0x310(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x311(0x7) UNKNOWN PROPERTY
		TMap HashToStreamableBlock; // 0x318(0x50)
		char NumComponents; // 0x368(0x1)
		char NumLODs; // 0x369(0x1)
		char NumLODsToStream; // 0x36A(0x1)
		char FirstLODAvailable; // 0x36B(0x1)
		unsigned char UnknownData03_7[0x4]; // 0x36C(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.MutableMeshComponentData
	// Size: 0x10 (0x10 - 0x0)
	struct FMutableMeshComponentData	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		USkeletalMesh ReferenceSkeletalMesh; // 0x8(0x8)
	};


	// Struct CustomizableObject.CustomizableObjectResourceData
	// Size: 0x18 (0x18 - 0x0)
	struct FCustomizableObjectResourceData	
	{
	public:
		ECOResourceDataType Type; // 0x0(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FInstancedStruct Data; // 0x8(0x10)
	};


	// Struct CustomizableObject.CustomizableObjectAssetUserData
	// Size: 0x8 (0x8 - 0x0)
	struct FCustomizableObjectAssetUserData	
	{
	public:
		UAssetUserData AssetUserData; // 0x0(0x8)
	};


	// Struct CustomizableObject.GeneratedTexture
	// Size: 0x28 (0x28 - 0x0)
	struct FGeneratedTexture	
	{
	public:
		unsigned char UnknownData01_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		FString Name; // 0x10(0x10)
		UTexture Texture; // 0x20(0x8)
	};


	// Struct CustomizableObject.GeneratedMaterial
	// Size: 0x20 (0x20 - 0x0)
	struct FGeneratedMaterial	
	{
	public:
		UMaterialInterface MaterialInterface; // 0x0(0x8)
		TArray Textures; // 0x8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.PendingReleaseSkeletalMeshInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FPendingReleaseSkeletalMeshInfo	
	{
	public:
		USkeletalMesh SkeletalMesh; // 0x0(0x8)
		double Timestamp; // 0x8(0x8)
	};


	// Struct CustomizableObject.CompilationOptions_DEPRECATED
	// Size: 0x20 (0x20 - 0x0)
	struct FCompilationOptions_DEPRECATED	
	{
	public:
		ECustomizableObjectTextureCompression TextureCompression; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t OptimizationLevel; // 0x4(0x4)
		bool bUseDiskCompilation; // 0x8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		uint64_t PackagedDataBytesLimit; // 0x10(0x8)
		uint64_t EmbeddedDataBytesLimit; // 0x18(0x8)
	};


	// Struct CustomizableObject.FParameterOptionsTags
	// Size: 0x10 (0x10 - 0x0)
	struct FFParameterOptionsTags	
	{
	public:
		TArray Tags; // 0x0(0x10)
	};


	// Struct CustomizableObject.ParameterTags
	// Size: 0x60 (0x60 - 0x0)
	struct FParameterTags	
	{
	public:
		TArray Tags; // 0x0(0x10)
		TMap ParameterOptions; // 0x10(0x50)
	};


	// Struct CustomizableObject.ProfileParameterDat
	// Size: 0x70 (0x70 - 0x0)
	struct FProfileParameterDat	
	{
	public:
		FString ProfileName; // 0x0(0x10)
		TArray BoolParameters; // 0x10(0x10)
		TArray IntParameters; // 0x20(0x10)
		TArray FloatParameters; // 0x30(0x10)
		TArray TextureParameters; // 0x40(0x10)
		TArray VectorParameters; // 0x50(0x10)
		TArray ProjectorParameters; // 0x60(0x10)
	};


	// Struct CustomizableObject.CustomizableObjectMeshToMeshVertData
	// Size: 0x40 (0x40 - 0x0)
	struct FCustomizableObjectMeshToMeshVertData	
	{
	public:
		float PositionBaryCoordsAndDist; // 0x0(0x10)
		float NormalBaryCoordsAndDist; // 0x10(0x10)
		float TangentBaryCoordsAndDist; // 0x20(0x10)
		uint16_t SourceMeshVertIndices; // 0x30(0x8)
		float Weight; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.MutableLODSettings
	// Size: 0x70 (0x70 - 0x0)
	struct FMutableLODSettings	
	{
	public:
		FPerPlatformInt MinLOD; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FPerQualityLevelInt MinQualityLevelLOD; // 0x8(0x68)
	};


	// Struct CustomizableObject.CustomizableObjectIdPair
	// Size: 0x20 (0x20 - 0x0)
	struct FCustomizableObjectIdPair	
	{
	public:
		FString CustomizableObjectGroupName; // 0x0(0x10)
		FString CustomizableObjectName; // 0x10(0x10)
	};


	// Struct CustomizableObject.CustomizableObjectIdentifier
	// Size: 0x30 (0x30 - 0x0)
	struct FCustomizableObjectIdentifier	
	{
	public:
		FString CustomizableObjectGroupName; // 0x0(0x10)
		FString CustomizableObjectName; // 0x10(0x10)
		FString Guid; // 0x20(0x10)
	};


	// Struct CustomizableObject.BakingConfiguration
	// Size: 0x30 (0x30 - 0x0)
	struct FBakingConfiguration	
	{
	public:
		FString OutputPath; // 0x0(0x10)
		FString OutputFilesBaseName; // 0x10(0x10)
		bool bExportAllResourcesOnBake; // 0x20(0x1)
		bool bGenerateConstantMaterialInstancesOnBake; // 0x21(0x1)
		bool bAllowOverridingOfFiles; // 0x22(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x23(0x1) UNKNOWN PROPERTY
		FDelegateProperty OnBakeOperationCompletedCallback; // 0x24(0xC)
	};


	// Struct CustomizableObject.CustomizableObjectInstanceDescriptor
	// Size: 0xD8 (0xD8 - 0x0)
	struct FCustomizableObjectInstanceDescriptor	
	{
	public:
		UCustomizableObject CustomizableObject; // 0x0(0x8)
		TArray BoolParameters; // 0x8(0x10)
		TArray IntParameters; // 0x18(0x10)
		TArray FloatParameters; // 0x28(0x10)
		TArray TextureParameters; // 0x38(0x10)
		TArray VectorParameters; // 0x48(0x10)
		TArray ProjectorParameters; // 0x58(0x10)
		int32_t State; // 0x68(0x4)
		unsigned char UnknownData01_6[0x1C]; // 0x6C(0x1C) UNKNOWN PROPERTY
		TMap MultilayerProjectors; // 0x88(0x50)
	};


	// Struct CustomizableObject.MultilayerProjector
	// Size: 0xF8 (0xF8 - 0x0)
	struct FMultilayerProjector	
	{
	public:
		FName ParamName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TMap VirtualLayersMapping; // 0x8(0x50)
		TMap VirtualLayersOrder; // 0x58(0x50)
		TMap DisableVirtualLayers; // 0xA8(0x50)
	};


	// Struct CustomizableObject.MultilayerProjectorLayer
	// Size: 0x80 (0x80 - 0x0)
	struct FMultilayerProjectorLayer	
	{
	public:
		unsigned char UnknownData01_2[0x80]; // 0x0(0x80) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.CustomizableObjectStreamedResourceData
	// Size: 0x28 (0x28 - 0x0)
	struct FCustomizableObjectStreamedResourceData	
	{
	public:
		TWeakObjectPtr ContainerPath; // 0x0(0x20)
		UCustomizableObjectResourceDataContainer Container; // 0x20(0x8)
	};


	// Struct CustomizableObject.PendingReleaseMaterialsInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FPendingReleaseMaterialsInfo	
	{
	public:
		TArray Materials; // 0x0(0x10)
		int32_t TicksUntilRelease; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomizableObject.MultilayerProjectorVirtualLayer
	// Inherited from FMultilayerProjectorLayer
	// Size: 0x8 (0x88 - 0x80)
	struct FMultilayerProjectorVirtualLayer : public FMultilayerProjectorLayer	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x80(0x8) UNKNOWN PROPERTY
	};

}
