#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCoreCosmeticsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksCoreCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp
	// Inherited from UFortAnimNotifyState_SpawnProp -> UAnimNotifyState -> UObject
	// Size: 0x60 (0x230 - 0x1D0)
	class UFortAnimNotifyState_SpawnSparksProp : public UFortAnimNotifyState_SpawnProp	
	{
	public:
		UNiagaraComponent SpawnedNiagaraComponent; // 0x1D0(0x8)
		ESparksInstrumentType InstrumentType; // 0x1D8(0x1)
		bool ShouldUseLeftHandMesh; // 0x1D9(0x1)
		bool ShouldUseAuxiliaryMesh; // 0x1DA(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x1DB(0x5) UNKNOWN PROPERTY
		FGameplayTagQuery SkipActorsWithTag; // 0x1E0(0x48)
		unsigned char UnknownData03_7[0x8]; // 0x228(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp");
			return ret;
		}

		void InitNewNotify(ESparksInstrumentType InType, bool InLeftHand, bool InAuxMesh, FName InSocketName, FGameplayTagQuery InSkipActorsWithTag, int32_t InPropId, USkeletalMesh InDefaultMesh); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414C07418
	};


	// Class SparksCoreCosmeticsRuntime.SparksAccountItemDefinition
	// Inherited from UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x4B0 - 0x4A0)
	class USparksAccountItemDefinition : public UAthenaCosmeticItemDefinition	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x4A0(0x8) UNKNOWN PROPERTY
		ESparksAccountItemSubtype Subtype; // 0x4A8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x4A9(0x3) UNKNOWN PROPERTY
		FGameplayTag Slot; // 0x4AC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksAccountItemDefinition");
			return ret;
		}

		void GetVariantChannelTags(TArray& OutChannelTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C07798
		void GetVariantChannelOptionNames(FGameplayTag ChannelTag, FText& OutChannelName, TArray& OutNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C076B8
		ESparksAccountItemSubtype GetItemSubtype(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C075D8
		ESparksInstrumentType GetInstrumentType(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C074F8
	};


	// Class SparksCoreCosmeticsRuntime.SparksAuraItemDefinition
	// Inherited from USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x78 (0x528 - 0x4B0)
	class USparksAuraItemDefinition : public USparksAccountItemDefinition	
	{
	public:
		TWeakObjectPtr StartSystem; // 0x4B0(0x20)
		FName StartSystemAttachPoint; // 0x4D0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4D4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr SustainSystem; // 0x4D8(0x20)
		FName SustainSystemAttachPoint; // 0x4F8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x4FC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr StopSystem; // 0x500(0x20)
		FName StopSystemAttachPoint; // 0x520(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x524(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksAuraItemDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksCosmeticCatalog
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class USparksCosmeticCatalog : public UGameStateComponent	
	{
	public:
		bool bDefsAreInitialized; // 0xA0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		TMap ItemDefinitionMap; // 0xA8(0x50)
		TMap AssetIDMap; // 0xF8(0x50)
		unsigned char UnknownData03_7[0x50]; // 0x148(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksCosmeticCatalog");
			return ret;
		}

		USparksCosmeticCatalog GetSparksCosmeticCatalog(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C07BF8
		USparksAccountItemDefinition GetItemDefFromAssetID(FPrimaryAssetId& AssetId); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C07B18
		USparksAccountItemDefinition GetItemDef(FName InItemName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C07A38
		TArray GetActiveItemDefNamesForSubtypeAndInstrument(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C07958
		TArray GetActiveItemDefNamesForSubtype(ESparksAccountItemSubtype Subtype); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C07878
	};


	// Class SparksCoreCosmeticsRuntime.SparksCosmeticComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x3D0 (0x470 - 0xA0)
	class USparksCosmeticComponent : public UPawnComponent	
	{
	public:
		FMulticastInlineDelegate CosmeticItemChanged; // 0xA0(0x10)
		FMulticastInlineDelegate CosmeticChoiceChanged; // 0xB0(0x10)
		FMulticastInlineDelegate OnLoadoutFilled; // 0xC0(0x10)
		bool bIsLoadoutFilled; // 0xD0(0x1)
		unsigned char UnknownData05_6[0x57]; // 0xD1(0x57) UNKNOWN PROPERTY
		FSparksCosmeticLoadoutData CurrentLoadout; // 0x128(0xF0)
		unsigned char UnknownData06_6[0x8]; // 0x218(0x8) UNKNOWN PROPERTY
		UNiagaraComponent ActiveAura; // 0x220(0x8)
		FPrimaryAssetId DefaultAuraItemDefID; // 0x228(0x8)
		USparksAuraItemDefinition AuraItemDef; // 0x230(0x8)
		TMap DefaultInstrumentDefIDs; // 0x238(0x50)
		TMap InstrumentDefs; // 0x288(0x50)
		unsigned char UnknownData07_6[0x80]; // 0x2D8(0x80) UNKNOWN PROPERTY
		TMap DefaultSpotlightAnimDefIDs; // 0x358(0x50)
		TMap SpotlightAnimDefs; // 0x3A8(0x50)
		unsigned char UnknownData08_6[0x60]; // 0x3F8(0x60) UNKNOWN PROPERTY
		TArray AllValidJamTracksShortNameCache; // 0x458(0x10)
		bool HasCachedValidJamTracks; // 0x468(0x1)
		unsigned char UnknownData09_7[0x7]; // 0x469(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksCosmeticComponent");
			return ret;
		}

		void SetVariantChoice(ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel, FString Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C09478
		void SetAuraState(bool bShouldBeActive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C09398
		void SetActiveSpotlightAnimDef(USparksSpotlightAnimDefinition NewSpotlightDef); // Flags: Final|Native|Private 0x7FF414C092B8
		void SetActiveItemDef(USparksAccountItemDefinition NewItemDef); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C091D8
		void SetActiveInstrumentItemDef(USparksInstrumentItemDefBase InstrumentItemDef); // Flags: Final|Native|Private 0x7FF414C090F8
		void SetActiveAuraItemDef(USparksAuraItemDefinition NewAuraItemDef); // Flags: Final|Native|Private 0x7FF414C09018
		void RefreshMCP(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C08F38
		void OnWeaponChanged(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Protected 0x7FF414C08E58
		void OnMaterialOverridesCleared(AFortPlayerPawn Pawn); // Flags: Final|Native|Protected 0x7FF414C08D78
		ULevelSequence GetSpotlightAnim(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C08C98
		int32_t GetOwnedJamTracksCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C08BB8
		FName GetOwnedJamSongShortnameForIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C08AD8
		bool GetInstrumentVFX(ESparksInstrumentType InstrumentType, UFXSystemAsset& OutFX, UFXSystemAsset& OutLHFX, FName& OutMainFXSocket, FName& OutLHFXSocket); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C089F8
		bool GetInstrumentCosmetics(ESparksInstrumentType InstrumentType, USkeletalMesh& OutMesh, UMaterialInstance& OutMaterial, USkeletalMesh& OutLHMesh, UMaterialInstance& OutLHMaterial); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C08918
		bool GetInstrumentAuxiliaryVFX(ESparksInstrumentType InstrumentType, UFXSystemAsset& OutFX, FName& OutAuxFXSocket); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C08838
		bool GetInstrumentAuxiliaryCosmetics(ESparksInstrumentType InstrumentType, USkeletalMesh& OutMesh, UMaterialInstance& OutMaterial, UMaterialInstance& OutMaterial2); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C08758
		int32_t GetEquippedJamTracksCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C08678
		FString GetEquippedJamSongUIDForIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C08598
		FName GetEquippedJamSongShortnameForIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C084B8
		void GetCosmeticItems(TArray& ItemDefs); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414C083D8
		USparksAccountItemDefinition GetCosmeticItem(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414C082F8
		bool GetChoice(FSparksVariantChoice& OutChoice, ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C08218
		ESparksAccountItemSubtype GetAccountItemTypeFromInstrumentType(ESparksInstrumentType Instrument); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414C08138
		void DoCacheValidJamTracks(); // Flags: Final|Native|Private 0x7FF414C08058
		void DebugForceAuraState(bool bShouldBeActive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C07F78
		void Debug_BP_ShowCosmeticPicker(bool bShow); // Flags: Event|Protected|BlueprintEvent 0x7FF414C07E98
		void AuraStop(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C07DB8
		void AuraStart(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C07CD8
	};


	// Class SparksCoreCosmeticsRuntime.SparksCosmeticsSettings
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xD0 (0x100 - 0x30)
	class USparksCosmeticsSettings : public UPrimaryDataAsset	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		UClass SparksCosmeticPreviewActorClass; // 0x38(0x8)
		UClass SparksPreviewCameraActorClass; // 0x40(0x8)
		UClass SparksAuraPreviewActorClass; // 0x48(0x8)
		UClass SparksAuraDisplayActorClass; // 0x50(0x8)
		UClass SparksSongPreviewActorClass; // 0x58(0x8)
		UClass SparksSongPrefabActorClass; // 0x60(0x8)
		UCosmeticLoadoutSchema SparksLoadoutSchema; // 0x68(0x8)
		FFortUICameraFrameTargetBounds GuitarCameraFramingBounds; // 0x70(0x20)
		FFortUICameraFrameTargetBounds BassCameraFramingBounds; // 0x90(0x20)
		FFortUICameraFrameTargetBounds DrumCameraFramingBounds; // 0xB0(0x20)
		FFortUICameraFrameTargetBounds MicCameraFramingBounds; // 0xD0(0x20)
		TArray RandomCharacters; // 0xF0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksCosmeticsSettings");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksCosmetics_BPFL
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksCosmetics_BPFL : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksCosmetics_BPFL");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksInstrumentComponentBase
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class USparksInstrumentComponentBase : public UActorComponent	
	{
	public:
		TArray SpawnedCosmeticVFX; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksInstrumentComponentBase");
			return ret;
		}

		ESparksInstrumentType GetInstrumentType(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414C09638
		void DestroySpawnedVFX(); // Flags: Final|Native|Public 0x7FF414C09558
	};


	// Class SparksCoreCosmeticsRuntime.SparksInstrumentItemDefBase
	// Inherited from USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x150 (0x600 - 0x4B0)
	class USparksInstrumentItemDefBase : public USparksAccountItemDefinition	
	{
	public:
		TWeakObjectPtr Mesh; // 0x4B0(0x20)
		TWeakObjectPtr LeftHandMesh; // 0x4D0(0x20)
		TWeakObjectPtr AuxiliaryMesh; // 0x4F0(0x20)
		TWeakObjectPtr Material; // 0x510(0x20)
		TWeakObjectPtr LeftHandMaterial; // 0x530(0x20)
		TWeakObjectPtr AuxiliaryMaterial; // 0x550(0x20)
		TWeakObjectPtr AuxiliaryMaterial2; // 0x570(0x20)
		TWeakObjectPtr MainFXSystem; // 0x590(0x20)
		TWeakObjectPtr LHFXSystem; // 0x5B0(0x20)
		TWeakObjectPtr AuxFXSystem; // 0x5D0(0x20)
		FName MainFXSocket; // 0x5F0(0x4)
		FName LHFXSocket; // 0x5F4(0x4)
		FName AuxFXSocket; // 0x5F8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x5FC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksInstrumentItemDefBase");
			return ret;
		}

		USkeletalMesh GetMesh(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C09EF8
		UMaterialInstance GetMaterial(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C09E18
		UFXSystemAsset GetMainFXSystem(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C09D38
		UFXSystemAsset GetLHFXSystem(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C09C58
		USkeletalMesh GetLeftHandMesh(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C09B78
		UMaterialInstance GetLeftHandMaterial(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C09A98
		USkeletalMesh GetAuxiliaryMesh(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C099B8
		UMaterialInstance GetAuxiliaryMaterial2(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C098D8
		UMaterialInstance GetAuxiliaryMaterial(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C097F8
		UFXSystemAsset GetAuxFXSystem(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C09718
	};


	// Class SparksCoreCosmeticsRuntime.SparksGuitarItemDefinition
	// Inherited from USparksInstrumentItemDefBase -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x600 - 0x600)
	class USparksGuitarItemDefinition : public USparksInstrumentItemDefBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksGuitarItemDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksBassItemDefinition
	// Inherited from USparksInstrumentItemDefBase -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x600 - 0x600)
	class USparksBassItemDefinition : public USparksInstrumentItemDefBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksBassItemDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksDrumItemDefinition
	// Inherited from USparksInstrumentItemDefBase -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x600 - 0x600)
	class USparksDrumItemDefinition : public USparksInstrumentItemDefBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksDrumItemDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksMicItemDefinition
	// Inherited from USparksInstrumentItemDefBase -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x600 - 0x600)
	class USparksMicItemDefinition : public USparksInstrumentItemDefBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksMicItemDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksKeyboardItemDefinition
	// Inherited from USparksInstrumentItemDefBase -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x600 - 0x600)
	class USparksKeyboardItemDefinition : public USparksInstrumentItemDefBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksKeyboardItemDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksJamEmoteItemDefinition
	// Inherited from UAthenaDanceItemDefinition -> UFortMontageItemDefinitionBase -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x6D8 - 0x6C8)
	class USparksJamEmoteItemDefinition : public UAthenaDanceItemDefinition	
	{
	public:
		USparksSongItemDefinition SongItemDef; // 0x6C8(0x8)
		EFMJamLoopType LoopType; // 0x6D0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x6D1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksJamEmoteItemDefinition");
			return ret;
		}

		bool IsJamLoopEnabled(AFortPlayerController PlayerController); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0A358
		USparksSongItemDefinition GetSongItemDef(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0A278
		FName GetJamSongShortName(UObject WorldContextObject); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0A198
		UCatalogData GetJamSongMetaData(UObject WorldContextObject); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0A0B8
		EFMJamLoopType GetJamLoopType(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C09FD8
	};


	// Class SparksCoreCosmeticsRuntime.SparksSongItemDefinition
	// Inherited from USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x88 (0x538 - 0x4B0)
	class USparksSongItemDefinition : public USparksAccountItemDefinition	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x4B0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr JamEmote_Vox; // 0x4B8(0x20)
		TWeakObjectPtr JamEmote_Lead; // 0x4D8(0x20)
		TWeakObjectPtr JamEmote_Bass; // 0x4F8(0x20)
		TWeakObjectPtr JamEmote_Drum; // 0x518(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksSongItemDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksSpotlightAnimDefinition
	// Inherited from USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x4D8 - 0x4B0)
	class USparksSpotlightAnimDefinition : public USparksAccountItemDefinition	
	{
	public:
		TWeakObjectPtr SpotlightSequence; // 0x4B0(0x20)
		ESparksInstrumentType InstrumentType; // 0x4D0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x4D1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksSpotlightAnimDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksGuitarSpotlightDefinition
	// Inherited from USparksSpotlightAnimDefinition -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x4D8 - 0x4D8)
	class USparksGuitarSpotlightDefinition : public USparksSpotlightAnimDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksGuitarSpotlightDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksDrumSpotlightDefinition
	// Inherited from USparksSpotlightAnimDefinition -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x4D8 - 0x4D8)
	class USparksDrumSpotlightDefinition : public USparksSpotlightAnimDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksDrumSpotlightDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksBassSpotlightDefinition
	// Inherited from USparksSpotlightAnimDefinition -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x4D8 - 0x4D8)
	class USparksBassSpotlightDefinition : public USparksSpotlightAnimDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksBassSpotlightDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksMicSpotlightDefinition
	// Inherited from USparksSpotlightAnimDefinition -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x4D8 - 0x4D8)
	class USparksMicSpotlightDefinition : public USparksSpotlightAnimDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksMicSpotlightDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksKeyboardSpotlightDefinition
	// Inherited from USparksSpotlightAnimDefinition -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x4D8 - 0x4D8)
	class USparksKeyboardSpotlightDefinition : public USparksSpotlightAnimDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksKeyboardSpotlightDefinition");
			return ret;
		}
	};

}
