#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: USDClasses
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class USDClasses.UsdAssetCache
	// Inherited from UObject
	// Size: 0x1C0 (0x1E8 - 0x28)
	class UUsdAssetCache : public UObject	
	{
	public:
		TMap TransientStorage; // 0x28(0x50)
		TMap PersistentStorage; // 0x78(0x50)
		bool bAllowPersistentStorage; // 0xC8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		TSet OwnedAssets; // 0xD0(0x50)
		TMap PrimPathToAssets; // 0x120(0x50)
		unsigned char UnknownData03_7[0x78]; // 0x170(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdAssetCache");
			return ret;
		}
	};


	// Class USDClasses.UsdAssetCache2
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UUsdAssetCache2 : public UObject	
	{
	public:
		double UnreferencedAssetStorageSizeMB; // 0x28(0x8)
		double PersistentAssetStorageSizeMB; // 0x30(0x8)
		TMap AssetStorage; // 0x38(0x50)
		unsigned char UnknownData01_7[0x118]; // 0x88(0x118) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdAssetCache2");
			return ret;
		}

		bool TouchAsset(UObject Asset, UObject Referencer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF9960
		void Reset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF9880
		bool RemoveAssetReference(UObject Asset, UObject Referencer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF97A0
		UObject RemoveAsset(FString Hash); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF96C0
		bool RemoveAllAssetReferences(UObject Referencer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF95E0
		void RefreshStorage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF9500
		bool IsAssetOwnedByCache(FString AssetPath); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF9420
		int32_t GetNumAssets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF9340
		FString GetHashForAsset(UObject Asset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF9260
		UObject GetCachedAsset(FString Hash); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF9180
		TArray GetAllLoadedAssets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF90A0
		TArray GetAllCachedAssetPaths(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF8FC0
		TArray GetAllAssetHashes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF8EE0
		bool CanRemoveAsset(FString Hash); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8E00
		void CacheAsset(FString Hash, UObject Asset, UObject Referencer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8D20
		bool AddAssetReference(UObject Asset, UObject Referencer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF8C40
	};


	// Class USDClasses.UsdAssetCache3
	// Inherited from UObject
	// Size: 0x268 (0x290 - 0x28)
	class UUsdAssetCache3 : public UObject	
	{
	public:
		FDirectoryPath AssetDirectory; // 0x28(0x10)
		bool bOnlyHandleAssetsWithinAssetDirectory; // 0x38(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TMap HashToAssetPaths; // 0x40(0x50)
		bool bCleanUpUnreferencedAssets; // 0x90(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		TMap AssetPathToHashes; // 0x98(0x50)
		TMap TransientObjectStorage; // 0xE8(0x50)
		unsigned char UnknownData05_7[0x158]; // 0x138(0x158) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdAssetCache3");
			return ret;
		}

		FSoftObjectPath StopTrackingAsset(FString Hash); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414EFAAE0
		void SetAssetDeletable(UObject Asset, bool bIsDeletable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFAA00
		void RescanAssetDirectory(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFA920
		bool RemoveAssetReferencer(UObject Asset, UObject Referencer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFA840
		bool RemoveAllReferencersForAsset(UObject Asset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFA760
		bool RemoveAllReferencerAssets(UObject Referencer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFA680
		bool RemoveAllAssetReferencers(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFA5A0
		TMap LoadAndGetAllTrackedAssets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EFA4C0
		bool IsAssetTrackedByCache(FSoftObjectPath& AssetPath); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EFA3E0
		bool IsAssetDeletable(UObject Asset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EFA300
		UObject GetOrCreateCachedAsset(FString Hash, UClass Class, FString DesiredName, int32_t DesiredFlags, bool& bOutCreatedAsset, UObject Referencer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EFA220
		int32_t GetNumAssets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EFA140
		FString GetHashForAsset(FSoftObjectPath& AssetPath); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EFA060
		FSoftObjectPath GetCachedAssetPath(FString Hash); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EF9F80
		UObject GetCachedAsset(FString Hash); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF9EA0
		TMap GetAllTrackedAssets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EF9DC0
		void DeleteUnreferencedAssetsWithConfirmation(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF9CE0
		void DeleteUnreferencedAssets(bool bShowConfirmation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF9C00
		void CacheAsset(FString Hash, FSoftObjectPath& AssetPath, UObject Referencer); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EF9B20
		bool AddAssetReferencer(UObject Asset, UObject Referencer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EF9A40
	};


	// Class USDClasses.UsdAssetImportData
	// Inherited from UAssetImportData -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UUsdAssetImportData : public UAssetImportData	
	{
	public:
		FString PrimPath; // 0x28(0x10)
		UObject ImportOptions; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdAssetImportData");
			return ret;
		}
	};


	// Class USDClasses.UsdAnimSequenceAssetImportData
	// Inherited from UUsdAssetImportData -> UAssetImportData -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UUsdAnimSequenceAssetImportData : public UUsdAssetImportData	
	{
	public:
		float LayerStartOffsetSeconds; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdAnimSequenceAssetImportData");
			return ret;
		}
	};


	// Class USDClasses.UsdMeshAssetImportData
	// Inherited from UUsdAssetImportData -> UAssetImportData -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UUsdMeshAssetImportData : public UUsdAssetImportData	
	{
	public:
		TMap MaterialSlotToPrimPaths; // 0x40(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdMeshAssetImportData");
			return ret;
		}
	};


	// Class USDClasses.UsdAssetUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0x70 (0x98 - 0x28)
	class UUsdAssetUserData : public UAssetUserData	
	{
	public:
		TArray PrimPaths; // 0x28(0x10)
		TMap StageIdentifierToMetadata; // 0x38(0x50)
		FString OriginalHash; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdAssetUserData");
			return ret;
		}
	};


	// Class USDClasses.UsdAnimSequenceAssetUserData
	// Inherited from UUsdAssetUserData -> UAssetUserData -> UObject
	// Size: 0x8 (0xA0 - 0x98)
	class UUsdAnimSequenceAssetUserData : public UUsdAssetUserData	
	{
	public:
		float LayerStartOffsetSeconds; // 0x98(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdAnimSequenceAssetUserData");
			return ret;
		}
	};


	// Class USDClasses.UsdMaterialAssetUserData
	// Inherited from UUsdAssetUserData -> UAssetUserData -> UObject
	// Size: 0xA0 (0x138 - 0x98)
	class UUsdMaterialAssetUserData : public UUsdAssetUserData	
	{
	public:
		TMap ParameterToPrimvar; // 0x98(0x50)
		TMap PrimvarToUVIndex; // 0xE8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdMaterialAssetUserData");
			return ret;
		}
	};


	// Class USDClasses.UsdMeshAssetUserData
	// Inherited from UUsdAssetUserData -> UAssetUserData -> UObject
	// Size: 0xA0 (0x138 - 0x98)
	class UUsdMeshAssetUserData : public UUsdAssetUserData	
	{
	public:
		TMap MaterialSlotToPrimPaths; // 0x98(0x50)
		TMap PrimvarToUVIndex; // 0xE8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdMeshAssetUserData");
			return ret;
		}
	};


	// Class USDClasses.UsdGeometryCacheAssetUserData
	// Inherited from UUsdMeshAssetUserData -> UUsdAssetUserData -> UAssetUserData -> UObject
	// Size: 0x8 (0x140 - 0x138)
	class UUsdGeometryCacheAssetUserData : public UUsdMeshAssetUserData	
	{
	public:
		float LayerStartOffsetSeconds; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdGeometryCacheAssetUserData");
			return ret;
		}
	};


	// Class USDClasses.UsdLevelSequenceAssetUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UUsdLevelSequenceAssetUserData : public UAssetUserData	
	{
	public:
		FGuid LastCheckedSignature; // 0x28(0x10)
		TSet HandledBindingGuids; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdLevelSequenceAssetUserData");
			return ret;
		}
	};


	// Class USDClasses.UsdSparseVolumeTextureAssetUserData
	// Inherited from UUsdAssetUserData -> UAssetUserData -> UObject
	// Size: 0x40 (0xD8 - 0x98)
	class UUsdSparseVolumeTextureAssetUserData : public UUsdAssetUserData	
	{
	public:
		TArray SourceOpenVDBAssetPrimPaths; // 0x98(0x10)
		TArray TimeSamplePathTimeCodes; // 0xA8(0x10)
		TArray TimeSamplePathIndices; // 0xB8(0x10)
		TArray TimeSamplePaths; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdSparseVolumeTextureAssetUserData");
			return ret;
		}
	};


	// Class USDClasses.UsdDrawModeComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x560 - 0x4C8)
	class UUsdDrawModeComponent : public UPrimitiveComponent	
	{
	public:
		FVector BoundsMin; // 0x4C8(0x18)
		FVector BoundsMax; // 0x4E0(0x18)
		EUsdDrawMode DrawMode; // 0x4F8(0x4)
		FLinearColor BoundsColor; // 0x4FC(0x10)
		EUsdModelCardGeometry CardGeometry; // 0x50C(0x4)
		UTexture2D CardTextureXPos; // 0x510(0x8)
		UTexture2D CardTextureYPos; // 0x518(0x8)
		UTexture2D CardTextureZPos; // 0x520(0x8)
		UTexture2D CardTextureXNeg; // 0x528(0x8)
		UTexture2D CardTextureYNeg; // 0x530(0x8)
		UTexture2D CardTextureZNeg; // 0x538(0x8)
		TArray MaterialInstances; // 0x540(0x10)
		int32_t AuthoredFaces; // 0x550(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x554(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdDrawModeComponent");
			return ret;
		}

		void SetTextureForFace(EUsdModelCardFace Face, UTexture2D Texture); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFB640
		void SetDrawMode(EUsdDrawMode NewDrawMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFB560
		void SetCardTextureZPos(UTexture2D NewTexture); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFB480
		void SetCardTextureZNeg(UTexture2D NewTexture); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFB3A0
		void SetCardTextureYPos(UTexture2D NewTexture); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFB2C0
		void SetCardTextureYNeg(UTexture2D NewTexture); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFB1E0
		void SetCardTextureXPos(UTexture2D NewTexture); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFB100
		void SetCardTextureXNeg(UTexture2D NewTexture); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFB020
		void SetCardGeometry(EUsdModelCardGeometry NewGeometry); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFAF40
		void SetBoundsMin(FVector& NewMin); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EFAE60
		void SetBoundsMax(FVector& NewMax); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EFAD80
		void SetBoundsColor(FLinearColor NewColor); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414EFACA0
		UTexture2D GetTextureForFace(EUsdModelCardFace Face); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EFABC0
	};


	// Class USDClasses.UsdProjectSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x1C0 (0x1F0 - 0x30)
	class UUsdProjectSettings : public UDeveloperSettings	
	{
	public:
		TArray AdditionalPluginDirectories; // 0x30(0x10)
		TArray DefaultResolverSearchPath; // 0x40(0x10)
		TArray AdditionalMaterialPurposes; // 0x50(0x10)
		FSoftObjectPath DefaultAssetCache; // 0x60(0x18)
		bool bShowCreateDefaultAssetCacheDialog; // 0x78(0x1)
		bool bShowConfirmationWhenClearingLayers; // 0x79(0x1)
		bool bShowConfirmationWhenMutingDirtyLayers; // 0x7A(0x1)
		bool bShowOverriddenOpinionsWarning; // 0x7B(0x1)
		EUsdEditInInstanceBehavior EditInInstanceableBehavior; // 0x7C(0x1)
		bool bShowWarningOnIncompleteDuplication; // 0x7D(0x1)
		bool bShowTransformOnCameraComponentWarning; // 0x7E(0x1)
		bool bShowTransformTrackOnCameraComponentWarning; // 0x7F(0x1)
		EUsdSaveDialogBehavior ShowSaveLayersDialogWhenSaving; // 0x80(0x1)
		EUsdSaveDialogBehavior ShowSaveLayersDialogWhenClosing; // 0x81(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x82(0x6) UNKNOWN PROPERTY
		FSoftObjectPath DefaultSoundAttenuation; // 0x88(0x18)
		FSoftObjectPath ReferenceDefaultSVTMaterial; // 0xA0(0x18)
		FSoftObjectPath ReferenceModelCardTextureMaterial; // 0xB8(0x18)
		FSoftObjectPath ReferencePreviewSurfaceMaterial; // 0xD0(0x18)
		FSoftObjectPath ReferencePreviewSurfaceTranslucentMaterial; // 0xE8(0x18)
		FSoftObjectPath ReferencePreviewSurfaceTwoSidedMaterial; // 0x100(0x18)
		FSoftObjectPath ReferencePreviewSurfaceTranslucentTwoSidedMaterial; // 0x118(0x18)
		FSoftObjectPath ReferencePreviewSurfaceVTMaterial; // 0x130(0x18)
		FSoftObjectPath ReferencePreviewSurfaceTranslucentVTMaterial; // 0x148(0x18)
		FSoftObjectPath ReferencePreviewSurfaceTwoSidedVTMaterial; // 0x160(0x18)
		FSoftObjectPath ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial; // 0x178(0x18)
		FSoftObjectPath ReferenceDisplayColorMaterial; // 0x190(0x18)
		FSoftObjectPath ReferenceDisplayColorAndOpacityMaterial; // 0x1A8(0x18)
		FSoftObjectPath ReferenceDisplayColorTwoSidedMaterial; // 0x1C0(0x18)
		FSoftObjectPath ReferenceDisplayColorAndOpacityTwoSidedMaterial; // 0x1D8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdProjectSettings");
			return ret;
		}
	};


	// Class USDClasses.UsdReferenceOptions
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UUsdReferenceOptions : public UObject	
	{
	public:
		bool bInternalReference; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FFilePath TargetFile; // 0x30(0x10)
		bool bUseDefaultPrim; // 0x40(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FString TargetPrimPath; // 0x48(0x10)
		float TimeCodeOffset; // 0x58(0x4)
		float TimeCodeScale; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/USDClasses.UsdReferenceOptions");
			return ret;
		}
	};

}
