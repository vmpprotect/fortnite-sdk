#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HairStrandsCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HairStrandsCore.GroomCacheImportOptions
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGroomCacheImportOptions : public UObject	
	{
	public:
		FGroomCacheImportSettings ImportSettings; // 0x28(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomCacheImportOptions");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomCacheImportData
	// Inherited from UAssetImportData -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGroomCacheImportData : public UAssetImportData	
	{
	public:
		FGroomCacheImportSettings Settings; // 0x28(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomCacheImportData");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AGroomActor : public AActor	
	{
	public:
		UGroomComponent GroomComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomActor");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomAsset
	// Inherited from UObject
	// Size: 0x100 (0x128 - 0x28)
	class UGroomAsset : public UObject	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		EGroomLODMode LODMode; // 0x30(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float AutoLODBias; // 0x34(0x4)
		TArray HairGroupsInfo; // 0x38(0x10)
		TArray HairGroupsRendering; // 0x48(0x10)
		TArray HairGroupsPhysics; // 0x58(0x10)
		TArray HairGroupsInterpolation; // 0x68(0x10)
		TArray HairGroupsLOD; // 0x78(0x10)
		TArray HairGroupsCards; // 0x88(0x10)
		TArray HairGroupsMeshes; // 0x98(0x10)
		TArray HairGroupsMaterials; // 0xA8(0x10)
		bool EnableGlobalInterpolation; // 0xB8(0x1)
		bool EnableSimulationCache; // 0xB9(0x1)
		EGroomInterpolationType HairInterpolationType; // 0xBA(0x1)
		unsigned char UnknownData08_6[0x5]; // 0xBB(0x5) UNKNOWN PROPERTY
		USkeletalMesh RiggedSkeletalMesh; // 0xC0(0x8)
		TArray DeformedGroupSections; // 0xC8(0x10)
		FPerPlatformInt MinLOD; // 0xD8(0x4)
		FPerPlatformBool DisableBelowMinLodStripping; // 0xDC(0x1)
		unsigned char UnknownData09_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		TArray EffectiveLODBias; // 0xE0(0x10)
		unsigned char UnknownData10_6[0x20]; // 0xF0(0x20) UNKNOWN PROPERTY
		TArray AssetUserData; // 0x110(0x10)
		unsigned char UnknownData11_7[0x8]; // 0x120(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomAsset");
			return ret;
		}

		void SetRiggedSkeletalMesh(USkeletalMesh In); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE47A0
		void SetHairInterpolationType(EGroomInterpolationType In); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE46C0
		void SetHairGroupsRendering(TArray& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE45E0
		void SetHairGroupsPhysics(TArray& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE4500
		void SetHairGroupsMeshes(TArray& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE4420
		void SetHairGroupsMaterials(TArray& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE4340
		void SetHairGroupsLOD(TArray& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE4260
		void SetHairGroupsInterpolation(TArray& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE4180
		void SetHairGroupsCards(TArray& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE40A0
		void SetEnableSimulationCache(bool In); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE3FC0
		void SetEnableGlobalInterpolation(bool In); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE3EE0
		void SetDeformedGroupSections(TArray& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE3E00
		USkeletalMesh GetRiggedSkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE3D20
		EGroomInterpolationType GetHairInterpolationType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE3C40
		TArray GetHairGroupsRendering(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DE3B60
		TArray GetHairGroupsPhysics(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DE3A80
		TArray GetHairGroupsMeshes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DE39A0
		TArray GetHairGroupsMaterials(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DE38C0
		TArray GetHairGroupsLOD(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DE37E0
		TArray GetHairGroupsInterpolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DE3700
		TArray GetHairGroupsCards(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DE3620
		bool GetEnableSimulationCache(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE3540
		bool GetEnableGlobalInterpolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE3460
		TArray GetDeformedGroupSections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DE3380
	};


	// Class HairStrandsCore.HairCardGenerationSettings
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHairCardGenerationSettings : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.HairCardGenerationSettings");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomAssetImportData
	// Inherited from UAssetImportData -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGroomAssetImportData : public UAssetImportData	
	{
	public:
		UGroomImportOptions ImportOptions; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomAssetImportData");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomBindingAsset
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UGroomBindingAsset : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		EGroomBindingMeshType GroomBindingType; // 0x30(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		UGroomAsset Groom; // 0x38(0x8)
		USkeletalMesh SourceSkeletalMesh; // 0x40(0x8)
		USkeletalMesh TargetSkeletalMesh; // 0x48(0x8)
		UGeometryCache SourceGeometryCache; // 0x50(0x8)
		UGeometryCache TargetGeometryCache; // 0x58(0x8)
		int32_t NumInterpolationPoints; // 0x60(0x4)
		int32_t MatchingSection; // 0x64(0x4)
		TArray GroupInfos; // 0x68(0x10)
		unsigned char UnknownData05_7[0x48]; // 0x78(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomBindingAsset");
			return ret;
		}

		void SetTargetSkeletalMesh(USkeletalMesh InSkeletalMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE5760
		void SetTargetGeometryCache(UGeometryCache InGeometryCache); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE5680
		void SetSourceSkeletalMesh(USkeletalMesh InSkeletalMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE55A0
		void SetSourceGeometryCache(UGeometryCache InGeometryCache); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE54C0
		void SetNumInterpolationPoints(int32_t InNumInterpolationPoints); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE53E0
		void SetMatchingSection(int32_t InMatchingSection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE5300
		void SetGroupInfos(TArray& InGroupInfos); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE5220
		void SetGroomBindingType(EGroomBindingMeshType InGroomBindingType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE5140
		void SetGroom(UGroomAsset InGroom); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE5060
		USkeletalMesh GetTargetSkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE4F80
		UGeometryCache GetTargetGeometryCache(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE4EA0
		USkeletalMesh GetSourceSkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE4DC0
		UGeometryCache GetSourceGeometryCache(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE4CE0
		int32_t GetNumInterpolationPoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE4C00
		int32_t GetMatchingSection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE4B20
		TArray GetGroupInfos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE4A40
		EGroomBindingMeshType GetGroomBindingType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE4960
		UGroomAsset GetGroom(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE4880
	};


	// Class HairStrandsCore.GroomBindingAssetList
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGroomBindingAssetList : public UObject	
	{
	public:
		TArray Bindings; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomBindingAssetList");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomBlueprintLibrary");
			return ret;
		}

		bool IsHairStrandsSupportedInWorld(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DE5BC0
		UGroomBindingAsset CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, UGroomAsset InGroomAsset, USkeletalMesh InSkeletalMesh, int32_t InNumInterpolationPoints, USkeletalMesh InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DE5AE0
		UGroomBindingAsset CreateNewGroomBindingAsset(UGroomAsset InGroomAsset, USkeletalMesh InSkeletalMesh, int32_t InNumInterpolationPoints, USkeletalMesh InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DE5A00
		UGroomBindingAsset CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, UGroomAsset GroomAsset, UGeometryCache GeometryCache, int32_t NumInterpolationPoints, UGeometryCache SourceGeometryCacheForTransfer, int32_t MatchingSection); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DE5920
		UGroomBindingAsset CreateNewGeometryCacheGroomBindingAsset(UGroomAsset GroomAsset, UGeometryCache GeometryCache, int32_t NumInterpolationPoints, UGeometryCache SourceGeometryCacheForTransfer, int32_t MatchingSection); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DE5840
	};


	// Class HairStrandsCore.GroomCache
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGroomCache : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		TArray AssetUserData; // 0x40(0x10)
		FGroomCacheInfo GroomCacheInfo; // 0x50(0x28)
		unsigned char UnknownData03_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomCache");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x228 (0x720 - 0x4F8)
	class UGroomComponent : public UMeshComponent	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x4F8(0x10) UNKNOWN PROPERTY
		UGroomAsset GroomAsset; // 0x508(0x8)
		UGroomCache GroomCache; // 0x510(0x8)
		TArray NiagaraComponents; // 0x518(0x10)
		USkeletalMesh SourceSkeletalMesh; // 0x528(0x8)
		UGroomBindingAsset BindingAsset; // 0x530(0x8)
		UPhysicsAsset PhysicsAsset; // 0x538(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x540(0x10) UNKNOWN PROPERTY
		FHairSimulationSettings SimulationSettings; // 0x550(0x90)
		UMeshDeformer MeshDeformer; // 0x5E0(0x8)
		UMeshDeformerInstance MeshDeformerInstance; // 0x5E8(0x8)
		UMeshDeformerInstanceSettings MeshDeformerInstanceSettings; // 0x5F0(0x8)
		UMaterialInterface Strands_DebugMaterial; // 0x5F8(0x8)
		UMaterialInterface Strands_DefaultMaterial; // 0x600(0x8)
		UMaterialInterface Cards_DefaultMaterial; // 0x608(0x8)
		UMaterialInterface Meshes_DefaultMaterial; // 0x610(0x8)
		UNiagaraSystem AngularSpringsSystem; // 0x618(0x8)
		UNiagaraSystem CosseratRodsSystem; // 0x620(0x8)
		FString AttachmentName; // 0x628(0x10)
		unsigned char UnknownData06_6[0x88]; // 0x638(0x88) UNKNOWN PROPERTY
		TArray GroomGroupsDesc; // 0x6C0(0x10)
		bool bUseCards; // 0x6D0(0x1)
		bool bRunning; // 0x6D1(0x1)
		bool bLooping; // 0x6D2(0x1)
		bool bManualTick; // 0x6D3(0x1)
		float ElapsedTime; // 0x6D4(0x4)
		unsigned char UnknownData07_7[0x48]; // 0x6D8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomComponent");
			return ret;
		}

		void SetPhysicsAsset(UPhysicsAsset InPhysicsAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE6720
		void SetMeshDeformer(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE6640
		void SetHairLengthScaleEnable(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE6560
		void SetHairLengthScale(float Scale); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE6480
		void SetGroomCache(UGroomCache InGroomCache); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE63A0
		void SetGroomAsset(UGroomAsset Asset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE62C0
		void SetEnableSimulation(bool bInEnableSimulation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE61E0
		void SetBindingAsset(UGroomBindingAsset InBinding); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE6100
		void ResetSimulation(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE6020
		void ResetCollisionComponents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE5F40
		UNiagaraComponent GetNiagaraComponent(int32_t GroupIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE5E60
		bool GetIsHairLengthScaleEnabled(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE5D80
		void AddCollisionComponent(USkeletalMeshComponent SkeletalMeshComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE5CA0
	};


	// Class HairStrandsCore.GroomCreateBindingOptions
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UGroomCreateBindingOptions : public UObject	
	{
	public:
		TWeakObjectPtr GroomAsset; // 0x28(0x8)
		EGroomBindingMeshType GroomBindingType; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		USkeletalMesh SourceSkeletalMesh; // 0x38(0x8)
		USkeletalMesh TargetSkeletalMesh; // 0x40(0x8)
		UGeometryCache SourceGeometryCache; // 0x48(0x8)
		UGeometryCache TargetGeometryCache; // 0x50(0x8)
		int32_t NumInterpolationPoints; // 0x58(0x4)
		int32_t MatchingSection; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomCreateBindingOptions");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomCreateFollicleMaskOptions
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGroomCreateFollicleMaskOptions : public UObject	
	{
	public:
		int32_t Resolution; // 0x28(0x4)
		int32_t RootRadius; // 0x2C(0x4)
		TArray Grooms; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomCreateFollicleMaskOptions");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UGroomCreateStrandsTexturesOptions : public UObject	
	{
	public:
		EHairTextureLayout Layout; // 0x28(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t Resolution; // 0x2C(0x4)
		EStrandsTexturesTraceType TraceType; // 0x30(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float TraceDistance; // 0x34(0x4)
		EStrandsTexturesMeshType MeshType; // 0x38(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UStaticMesh StaticMesh; // 0x40(0x8)
		USkeletalMesh SkeletalMesh; // 0x48(0x8)
		int32_t LODIndex; // 0x50(0x4)
		int32_t SectionIndex; // 0x54(0x4)
		int32_t UVChannelIndex; // 0x58(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		TArray GroupIndex; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomCreateStrandsTexturesOptions");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomImportOptions
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UGroomImportOptions : public UObject	
	{
	public:
		FGroomConversionSettings ConversionSettings; // 0x28(0x30)
		TArray InterpolationSettings; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomImportOptions");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomHairGroupsPreview
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGroomHairGroupsPreview : public UObject	
	{
	public:
		TArray Groups; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomHairGroupsPreview");
			return ret;
		}
	};


	// Class HairStrandsCore.GroomPluginSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGroomPluginSettings : public UObject	
	{
	public:
		float GroomCacheLookAheadBuffer; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomPluginSettings");
			return ret;
		}
	};


	// Class HairStrandsCore.MovieSceneGroomCacheSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x20 (0x110 - 0xF0)
	class UMovieSceneGroomCacheSection : public UMovieSceneSection	
	{
	public:
		FMovieSceneGroomCacheParams Params; // 0xF0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.MovieSceneGroomCacheSection");
			return ret;
		}
	};


	// Class HairStrandsCore.MovieSceneGroomCacheTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0xB0 - 0x98)
	class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray AnimationSections; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.MovieSceneGroomCacheTrack");
			return ret;
		}
	};


	// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		UGroomAsset DefaultSource; // 0x40(0x8)
		AActor SourceActor; // 0x48(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.NiagaraDataInterfaceHairStrands");
			return ret;
		}
	};


	// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
	// Inherited from UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase	
	{
	public:
		FIntVector GridSize; // 0x38(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid");
			return ret;
		}
	};


	// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
	// Inherited from UNiagaraDataInterfaceVelocityGrid -> UNiagaraDataInterfaceRWBase -> UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.NiagaraDataInterfacePressureGrid");
			return ret;
		}
	};

}
