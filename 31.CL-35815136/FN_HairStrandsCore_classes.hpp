#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HairStrandsCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		UGroomComponent* GroomComponent; // 0x290(0x8)

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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		EGroomLODMode LODMode; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float AutoLODBias; // 0x34(0x4)
		TArray<FHairGroupInfoWithVisibility> HairGroupsInfo; // 0x38(0x10)
		TArray<FHairGroupsRendering> HairGroupsRendering; // 0x48(0x10)
		TArray<FHairGroupsPhysics> HairGroupsPhysics; // 0x58(0x10)
		TArray<FHairGroupsInterpolation> HairGroupsInterpolation; // 0x68(0x10)
		TArray<FHairGroupsLOD> HairGroupsLOD; // 0x78(0x10)
		TArray<FHairGroupsCardsSourceDescription> HairGroupsCards; // 0x88(0x10)
		TArray<FHairGroupsMeshesSourceDescription> HairGroupsMeshes; // 0x98(0x10)
		TArray<FHairGroupsMaterial> HairGroupsMaterials; // 0xA8(0x10)
		bool EnableGlobalInterpolation; // 0xB8(0x1)
		bool EnableSimulationCache; // 0xB9(0x1)
		EGroomInterpolationType HairInterpolationType; // 0xBA(0x1)
		unsigned char UnknownData02_6[0x5]; // 0xBB(0x5) UNKNOWN PROPERTY
		USkeletalMesh* RiggedSkeletalMesh; // 0xC0(0x8)
		TArray<int32_t> DeformedGroupSections; // 0xC8(0x10)
		FPerPlatformInt MinLOD; // 0xD8(0x4)
		FPerPlatformBool DisableBelowMinLodStripping; // 0xDC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		TArray<float> EffectiveLODBias; // 0xE0(0x10)
		unsigned char UnknownData04_6[0x20]; // 0xF0(0x20) UNKNOWN PROPERTY
		TArray<UAssetUserData*> AssetUserData; // 0x110(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x120(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomAsset");
			return ret;
		}

		void SetRiggedSkeletalMesh(USkeletalMesh* In); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751985B7C(relative to base address)
		void SetHairInterpolationType(EGroomInterpolationType In); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751985A10(relative to base address)
		void SetHairGroupsRendering(TArray<FHairGroupsRendering>& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751985970(relative to base address)
		void SetHairGroupsPhysics(TArray<FHairGroupsPhysics>& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519858D4(relative to base address)
		void SetHairGroupsMeshes(TArray<FHairGroupsMeshesSourceDescription>& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751985838(relative to base address)
		void SetHairGroupsMaterials(TArray<FHairGroupsMaterial>& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751985798(relative to base address)
		void SetHairGroupsLOD(TArray<FHairGroupsLOD>& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519856FC(relative to base address)
		void SetHairGroupsInterpolation(TArray<FHairGroupsInterpolation>& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75198565C(relative to base address)
		void SetHairGroupsCards(TArray<FHairGroupsCardsSourceDescription>& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519855C0(relative to base address)
		void SetEnableSimulationCache(bool In); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75198539C(relative to base address)
		void SetEnableGlobalInterpolation(bool In); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75198531C(relative to base address)
		void SetDeformedGroupSections(TArray<int32_t>& In); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75198527C(relative to base address)
		USkeletalMesh GetRiggedSkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C75D448(relative to base address)
		EGroomInterpolationType GetHairInterpolationType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E9D4C48(relative to base address)
		TArray GetHairGroupsRendering(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7519851B4(relative to base address)
		TArray GetHairGroupsPhysics(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751985198(relative to base address)
		TArray GetHairGroupsMeshes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75198517C(relative to base address)
		TArray GetHairGroupsMaterials(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751985160(relative to base address)
		TArray GetHairGroupsLOD(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751985144(relative to base address)
		TArray GetHairGroupsInterpolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751985128(relative to base address)
		TArray GetHairGroupsCards(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75198510C(relative to base address)
		bool GetEnableSimulationCache(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519850D8(relative to base address)
		bool GetEnableGlobalInterpolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1248(relative to base address)
		TArray GetDeformedGroupSections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7519850BC(relative to base address)
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
		UGroomImportOptions* ImportOptions; // 0x28(0x8)

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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		EGroomBindingMeshType GroomBindingType; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		UGroomAsset* Groom; // 0x38(0x8)
		USkeletalMesh* SourceSkeletalMesh; // 0x40(0x8)
		USkeletalMesh* TargetSkeletalMesh; // 0x48(0x8)
		UGeometryCache* SourceGeometryCache; // 0x50(0x8)
		UGeometryCache* TargetGeometryCache; // 0x58(0x8)
		int32_t NumInterpolationPoints; // 0x60(0x4)
		int32_t MatchingSection; // 0x64(0x4)
		TArray<FGoomBindingGroupInfo> GroupInfos; // 0x68(0x10)
		unsigned char UnknownData02_7[0x48]; // 0x78(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomBindingAsset");
			return ret;
		}

		void SetTargetSkeletalMesh(USkeletalMesh* InSkeletalMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751985D18(relative to base address)
		void SetTargetGeometryCache(UGeometryCache* InGeometryCache); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751985C90(relative to base address)
		void SetSourceSkeletalMesh(USkeletalMesh* InSkeletalMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75046384C(relative to base address)
		void SetSourceGeometryCache(UGeometryCache* InGeometryCache); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751985C08(relative to base address)
		void SetNumInterpolationPoints(int32_t InNumInterpolationPoints); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751985B04(relative to base address)
		void SetMatchingSection(int32_t InMatchingSection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751985A8C(relative to base address)
		void SetGroupInfos(TArray<FGoomBindingGroupInfo>& InGroupInfos); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751985520(relative to base address)
		void SetGroomBindingType(EGroomBindingMeshType InGroomBindingType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519854A4(relative to base address)
		void SetGroom(UGroomAsset* InGroom); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75198541C(relative to base address)
		USkeletalMesh GetTargetSkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F67B48C(relative to base address)
		UGeometryCache GetTargetGeometryCache(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519851E4(relative to base address)
		USkeletalMesh GetSourceSkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFB98(relative to base address)
		UGeometryCache GetSourceGeometryCache(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034578(relative to base address)
		int32_t GetNumInterpolationPoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6D398C(relative to base address)
		int32_t GetMatchingSection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519851D0(relative to base address)
		TArray GetGroupInfos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519850F0(relative to base address)
		EGroomBindingMeshType GetGroomBindingType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EE883E4(relative to base address)
		UGroomAsset GetGroom(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750323D88(relative to base address)
	};


	// Class HairStrandsCore.GroomBindingAssetList
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGroomBindingAssetList : public UObject	
	{
	public:
		TArray<UGroomBindingAsset*> Bindings; // 0x28(0x10)

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

		bool IsHairStrandsSupportedInWorld(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7519851FC(relative to base address)
		UGroomBindingAsset CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751984F0C(relative to base address)
		UGroomBindingAsset CreateNewGroomBindingAsset(UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751984DAC(relative to base address)
		UGroomBindingAsset CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751984F0C(relative to base address)
		UGroomBindingAsset CreateNewGeometryCacheGroomBindingAsset(UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751984DAC(relative to base address)
	};


	// Class HairStrandsCore.GroomCache
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGroomCache : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		TArray<UAssetUserData*> AssetUserData; // 0x40(0x10)
		FGroomCacheInfo GroomCacheInfo; // 0x50(0x28)
		unsigned char UnknownData01_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x10]; // 0x4F8(0x10) UNKNOWN PROPERTY
		UGroomAsset* GroomAsset; // 0x508(0x8)
		UGroomCache* GroomCache; // 0x510(0x8)
		TArray<UNiagaraComponent*> NiagaraComponents; // 0x518(0x10)
		USkeletalMesh* SourceSkeletalMesh; // 0x528(0x8)
		UGroomBindingAsset* BindingAsset; // 0x530(0x8)
		UPhysicsAsset* PhysicsAsset; // 0x538(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x540(0x10) UNKNOWN PROPERTY
		FHairSimulationSettings SimulationSettings; // 0x550(0x90)
		UMeshDeformer* MeshDeformer; // 0x5E0(0x8)
		UMeshDeformerInstance* MeshDeformerInstance; // 0x5E8(0x8)
		UMeshDeformerInstanceSettings* MeshDeformerInstanceSettings; // 0x5F0(0x8)
		UMaterialInterface* Strands_DebugMaterial; // 0x5F8(0x8)
		UMaterialInterface* Strands_DefaultMaterial; // 0x600(0x8)
		UMaterialInterface* Cards_DefaultMaterial; // 0x608(0x8)
		UMaterialInterface* Meshes_DefaultMaterial; // 0x610(0x8)
		UNiagaraSystem* AngularSpringsSystem; // 0x618(0x8)
		UNiagaraSystem* CosseratRodsSystem; // 0x620(0x8)
		FString AttachmentName; // 0x628(0x10)
		unsigned char UnknownData02_6[0x88]; // 0x638(0x88) UNKNOWN PROPERTY
		TArray<FHairGroupDesc> GroomGroupsDesc; // 0x6C0(0x10)
		bool bUseCards; // 0x6D0(0x1)
		bool bRunning; // 0x6D1(0x1)
		bool bLooping; // 0x6D2(0x1)
		bool bManualTick; // 0x6D3(0x1)
		float ElapsedTime; // 0x6D4(0x4)
		unsigned char UnknownData03_7[0x48]; // 0x6D8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsCore.GroomComponent");
			return ret;
		}

		void SetPhysicsAsset(UPhysicsAsset* InPhysicsAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A72C0(relative to base address)
		void SetMeshDeformer(UMeshDeformer* InMeshDeformer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A71EC(relative to base address)
		void SetHairLengthScaleEnable(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A713C(relative to base address)
		void SetHairLengthScale(float Scale); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A7094(relative to base address)
		void SetGroomCache(UGroomCache* InGroomCache); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A7014(relative to base address)
		void SetGroomAsset(UGroomAsset* Asset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A6F88(relative to base address)
		void SetEnableSimulation(bool bInEnableSimulation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A6F08(relative to base address)
		void SetBindingAsset(UGroomBindingAsset* InBinding); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A6E24(relative to base address)
		void ResetSimulation(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A6E0C(relative to base address)
		void ResetCollisionComponents(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A6DDC(relative to base address)
		UNiagaraComponent GetNiagaraComponent(int32_t GroupIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A6D38(relative to base address)
		bool GetIsHairLengthScaleEnabled(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A6CF8(relative to base address)
		void AddCollisionComponent(USkeletalMeshComponent* SkeletalMeshComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519A6B24(relative to base address)
	};


	// Class HairStrandsCore.GroomCreateBindingOptions
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UGroomCreateBindingOptions : public UObject	
	{
	public:
		TWeakObjectPtr<UGroomAsset*> GroomAsset; // 0x28(0x8)
		EGroomBindingMeshType GroomBindingType; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		USkeletalMesh* SourceSkeletalMesh; // 0x38(0x8)
		USkeletalMesh* TargetSkeletalMesh; // 0x40(0x8)
		UGeometryCache* SourceGeometryCache; // 0x48(0x8)
		UGeometryCache* TargetGeometryCache; // 0x50(0x8)
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
		TArray<FFollicleMaskOptions> Grooms; // 0x30(0x10)

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
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t Resolution; // 0x2C(0x4)
		EStrandsTexturesTraceType TraceType; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float TraceDistance; // 0x34(0x4)
		EStrandsTexturesMeshType MeshType; // 0x38(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UStaticMesh* StaticMesh; // 0x40(0x8)
		USkeletalMesh* SkeletalMesh; // 0x48(0x8)
		int32_t LODIndex; // 0x50(0x4)
		int32_t SectionIndex; // 0x54(0x4)
		int32_t UVChannelIndex; // 0x58(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		TArray<int32_t> GroupIndex; // 0x60(0x10)

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
		TArray<FHairGroupsInterpolation> InterpolationSettings; // 0x58(0x10)

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
		TArray<FGroomHairGroupPreview> Groups; // 0x28(0x10)

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
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> AnimationSections; // 0xA0(0x10)

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
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		UGroomAsset* DefaultSource; // 0x40(0x8)
		AActor* SourceActor; // 0x48(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

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
