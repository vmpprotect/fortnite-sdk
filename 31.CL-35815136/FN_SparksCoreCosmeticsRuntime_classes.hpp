#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCoreCosmeticsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksCoreCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp
	// Inherited from UFortAnimNotifyState_SpawnProp -> UAnimNotifyState -> UObject
	// Size: 0x60 (0x230 - 0x1D0)
	class UFortAnimNotifyState_SpawnSparksProp : public UFortAnimNotifyState_SpawnProp	
	{
	public:
		UNiagaraComponent* SpawnedNiagaraComponent; // 0x1D0(0x8)
		ESparksInstrumentType InstrumentType; // 0x1D8(0x1)
		bool ShouldUseLeftHandMesh; // 0x1D9(0x1)
		bool ShouldUseAuxiliaryMesh; // 0x1DA(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x1DB(0x5) UNKNOWN PROPERTY
		FGameplayTagQuery SkipActorsWithTag; // 0x1E0(0x48)
		unsigned char UnknownData01_7[0x8]; // 0x228(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp");
			return ret;
		}

		void InitNewNotify(ESparksInstrumentType InType, bool InLeftHand, bool InAuxMesh, FName InSocketName, FGameplayTagQuery InSkipActorsWithTag, int32_t InPropId, USkeletalMesh* InDefaultMesh); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF750F67940(relative to base address)
	};


	// Class SparksCoreCosmeticsRuntime.SparksAccountItemDefinition
	// Inherited from UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x4A8 - 0x498)
	class USparksAccountItemDefinition : public UAthenaCosmeticItemDefinition	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x498(0x8) UNKNOWN PROPERTY
		ESparksAccountItemSubtype Subtype; // 0x4A0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x4A1(0x3) UNKNOWN PROPERTY
		FGameplayTag Slot; // 0x4A4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksAccountItemDefinition");
			return ret;
		}

		void GetVariantChannelTags(TArray<FGameplayTag>& OutChannelTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F678A4(relative to base address)
		void GetVariantChannelOptionNames(FGameplayTag ChannelTag, FText& OutChannelName, TArray<FString>& OutNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F676B0(relative to base address)
		ESparksAccountItemSubtype GetItemSubtype(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66E24(relative to base address)
		ESparksInstrumentType GetInstrumentType(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EB6C2C0(relative to base address)
	};


	// Class SparksCoreCosmeticsRuntime.SparksAuraItemDefinition
	// Inherited from USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x78 (0x520 - 0x4A8)
	class USparksAuraItemDefinition : public USparksAccountItemDefinition	
	{
	public:
		TWeakObjectPtr<UNiagaraSystem*> StartSystem; // 0x4A8(0x20)
		FName StartSystemAttachPoint; // 0x4C8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4CC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UNiagaraSystem*> SustainSystem; // 0x4D0(0x20)
		FName SustainSystemAttachPoint; // 0x4F0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4F4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UNiagaraSystem*> StopSystem; // 0x4F8(0x20)
		FName StopSystemAttachPoint; // 0x518(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x51C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		TMap<FName, USparksAccountItemDefinition*> ItemDefinitionMap; // 0xA8(0x50)
		TMap<FPrimaryAssetId, USparksAccountItemDefinition*> AssetIDMap; // 0xF8(0x50)
		unsigned char UnknownData01_7[0x50]; // 0x148(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksCosmeticCatalog");
			return ret;
		}

		USparksCosmeticCatalog GetSparksCosmeticCatalog(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F67580(relative to base address)
		USparksAccountItemDefinition GetItemDefFromAssetID(FPrimaryAssetId& AssetId); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750F66D88(relative to base address)
		USparksAccountItemDefinition GetItemDef(FName InItemName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66CFC(relative to base address)
		TArray GetActiveItemDefNamesForSubtypeAndInstrument(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F65C68(relative to base address)
		TArray GetActiveItemDefNamesForSubtype(ESparksAccountItemSubtype Subtype); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F65BD0(relative to base address)
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
		unsigned char UnknownData00_6[0x57]; // 0xD1(0x57) UNKNOWN PROPERTY
		FSparksCosmeticLoadoutData CurrentLoadout; // 0x128(0xF0)
		unsigned char UnknownData01_6[0x8]; // 0x218(0x8) UNKNOWN PROPERTY
		UNiagaraComponent* ActiveAura; // 0x220(0x8)
		FPrimaryAssetId DefaultAuraItemDefID; // 0x228(0x8)
		USparksAuraItemDefinition* AuraItemDef; // 0x230(0x8)
		TMap<ESparksInstrumentType, FPrimaryAssetId> DefaultInstrumentDefIDs; // 0x238(0x50)
		TMap<ESparksInstrumentType, USparksInstrumentItemDefBase*> InstrumentDefs; // 0x288(0x50)
		unsigned char UnknownData02_6[0x80]; // 0x2D8(0x80) UNKNOWN PROPERTY
		TMap<ESparksInstrumentType, FPrimaryAssetId> DefaultSpotlightAnimDefIDs; // 0x358(0x50)
		TMap<ESparksInstrumentType, USparksSpotlightAnimDefinition*> SpotlightAnimDefs; // 0x3A8(0x50)
		unsigned char UnknownData03_6[0x60]; // 0x3F8(0x60) UNKNOWN PROPERTY
		TArray<FName> AllValidJamTracksShortNameCache; // 0x458(0x10)
		bool HasCachedValidJamTracks; // 0x468(0x1)
		unsigned char UnknownData04_7[0x7]; // 0x469(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksCosmeticComponent");
			return ret;
		}

		void SetVariantChoice(ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel, FString Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F681EC(relative to base address)
		void SetAuraState(bool bShouldBeActive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F6816C(relative to base address)
		void SetActiveSpotlightAnimDef(USparksSpotlightAnimDefinition* NewSpotlightDef); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F68084(relative to base address)
		void SetActiveItemDef(USparksAccountItemDefinition* NewItemDef); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F67FAC(relative to base address)
		void SetActiveInstrumentItemDef(USparksInstrumentItemDefBase* InstrumentItemDef); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F67E98(relative to base address)
		void SetActiveAuraItemDef(USparksAuraItemDefinition* NewAuraItemDef); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F67DE8(relative to base address)
		void RefreshMCP(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF748A57C28(relative to base address)
		void OnMaterialOverridesCleared(AFortPlayerPawn* Pawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF748A92528(relative to base address)
		ULevelSequence GetSpotlightAnim(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F67600(relative to base address)
		int32_t GetOwnedJamTracksCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F67528(relative to base address)
		FName GetOwnedJamSongShortnameForIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F67478(relative to base address)
		bool GetInstrumentVFX(ESparksInstrumentType InstrumentType, UFXSystemAsset* OutFX, UFXSystemAsset* OutLHFX, FName& OutMainFXSocket, FName& OutLHFXSocket); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66B10(relative to base address)
		bool GetInstrumentCosmetics(ESparksInstrumentType InstrumentType, USkeletalMesh* OutMesh, UMaterialInstance* OutMaterial, USkeletalMesh* OutLHMesh, UMaterialInstance* OutLHMaterial); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66908(relative to base address)
		bool GetInstrumentAuxiliaryVFX(ESparksInstrumentType InstrumentType, UFXSystemAsset* OutFX, FName& OutAuxFXSocket); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F667DC(relative to base address)
		bool GetInstrumentAuxiliaryCosmetics(ESparksInstrumentType InstrumentType, USkeletalMesh* OutMesh, UMaterialInstance* OutMaterial, UMaterialInstance* OutMaterial2); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66644(relative to base address)
		int32_t GetEquippedJamTracksCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F6662C(relative to base address)
		FString GetEquippedJamSongUIDForIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F66588(relative to base address)
		FName GetEquippedJamSongShortnameForIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F66504(relative to base address)
		void GetCosmeticItems(TArray<USparksAccountItemDefinition*>& ItemDefs); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F66468(relative to base address)
		USparksAccountItemDefinition GetCosmeticItem(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66388(relative to base address)
		bool GetChoice(FSparksVariantChoice& OutChoice, ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F6606C(relative to base address)
		ESparksAccountItemSubtype GetAccountItemTypeFromInstrumentType(ESparksInstrumentType Instrument); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F65B50(relative to base address)
		void DoCacheValidJamTracks(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F65B3C(relative to base address)
		void DebugForceAuraState(bool bShouldBeActive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F65AA8(relative to base address)
		void Debug_BP_ShowCosmeticPicker(bool bShow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AuraStop(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750F65A94(relative to base address)
		void AuraStart(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750F65A80(relative to base address)
	};


	// Class SparksCoreCosmeticsRuntime.SparksCosmeticsSettings
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xD0 (0x100 - 0x30)
	class USparksCosmeticsSettings : public UPrimaryDataAsset	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		UClass* SparksCosmeticPreviewActorClass; // 0x38(0x8)
		UClass* SparksPreviewCameraActorClass; // 0x40(0x8)
		UClass* SparksAuraPreviewActorClass; // 0x48(0x8)
		UClass* SparksAuraDisplayActorClass; // 0x50(0x8)
		UClass* SparksSongPreviewActorClass; // 0x58(0x8)
		UClass* SparksSongPrefabActorClass; // 0x60(0x8)
		UCosmeticLoadoutSchema* SparksLoadoutSchema; // 0x68(0x8)
		FFortUICameraFrameTargetBounds GuitarCameraFramingBounds; // 0x70(0x20)
		FFortUICameraFrameTargetBounds BassCameraFramingBounds; // 0x90(0x20)
		FFortUICameraFrameTargetBounds DrumCameraFramingBounds; // 0xB0(0x20)
		FFortUICameraFrameTargetBounds MicCameraFramingBounds; // 0xD0(0x20)
		TArray<FPrimaryAssetId> RandomCharacters; // 0xF0(0x10)

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
		TArray<UNiagaraComponent*> SpawnedCosmeticVFX; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksInstrumentComponentBase");
			return ret;
		}

		ESparksInstrumentType GetInstrumentType(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroySpawnedVFX(); // Flags: Final|Native|Public, Memory Exec: 0x7FF750F65B28(relative to base address)
	};


	// Class SparksCoreCosmeticsRuntime.SparksInstrumentItemDefBase
	// Inherited from USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x150 (0x5F8 - 0x4A8)
	class USparksInstrumentItemDefBase : public USparksAccountItemDefinition	
	{
	public:
		TWeakObjectPtr<USkeletalMesh*> Mesh; // 0x4A8(0x20)
		TWeakObjectPtr<USkeletalMesh*> LeftHandMesh; // 0x4C8(0x20)
		TWeakObjectPtr<USkeletalMesh*> AuxiliaryMesh; // 0x4E8(0x20)
		TWeakObjectPtr<UMaterialInstance*> Material; // 0x508(0x20)
		TWeakObjectPtr<UMaterialInstance*> LeftHandMaterial; // 0x528(0x20)
		TWeakObjectPtr<UMaterialInstance*> AuxiliaryMaterial; // 0x548(0x20)
		TWeakObjectPtr<UMaterialInstance*> AuxiliaryMaterial2; // 0x568(0x20)
		TWeakObjectPtr<UFXSystemAsset*> MainFXSystem; // 0x588(0x20)
		TWeakObjectPtr<UFXSystemAsset*> LHFXSystem; // 0x5A8(0x20)
		TWeakObjectPtr<UFXSystemAsset*> AuxFXSystem; // 0x5C8(0x20)
		FName MainFXSocket; // 0x5E8(0x4)
		FName LHFXSocket; // 0x5EC(0x4)
		FName AuxFXSocket; // 0x5F0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x5F4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksInstrumentItemDefBase");
			return ret;
		}

		USkeletalMesh GetMesh(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F673B0(relative to base address)
		UMaterialInstance GetMaterial(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F672E0(relative to base address)
		UFXSystemAsset GetMainFXSystem(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F67210(relative to base address)
		UFXSystemAsset GetLHFXSystem(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66FA8(relative to base address)
		USkeletalMesh GetLeftHandMesh(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F67148(relative to base address)
		UMaterialInstance GetLeftHandMaterial(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F67078(relative to base address)
		USkeletalMesh GetAuxiliaryMesh(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F65FA4(relative to base address)
		UMaterialInstance GetAuxiliaryMaterial2(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F65E04(relative to base address)
		UMaterialInstance GetAuxiliaryMaterial(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F65ED4(relative to base address)
		UFXSystemAsset GetAuxFXSystem(FSparksVariantChoices& Choices); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F65D34(relative to base address)
	};


	// Class SparksCoreCosmeticsRuntime.SparksGuitarItemDefinition
	// Inherited from USparksInstrumentItemDefBase -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x5F8 - 0x5F8)
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
	// Size: 0x0 (0x5F8 - 0x5F8)
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
	// Size: 0x0 (0x5F8 - 0x5F8)
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
	// Size: 0x0 (0x5F8 - 0x5F8)
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
	// Size: 0x0 (0x5F8 - 0x5F8)
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
	// Size: 0x10 (0x6D0 - 0x6C0)
	class USparksJamEmoteItemDefinition : public UAthenaDanceItemDefinition	
	{
	public:
		USparksSongItemDefinition* SongItemDef; // 0x6C0(0x8)
		EFMJamLoopType LoopType; // 0x6C8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x6C9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksJamEmoteItemDefinition");
			return ret;
		}

		bool IsJamLoopEnabled(AFortPlayerController* PlayerController); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F67D58(relative to base address)
		USparksSongItemDefinition GetSongItemDef(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F67568(relative to base address)
		FName GetJamSongShortName(UObject* WorldContextObject); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66EE4(relative to base address)
		UCatalogData GetJamSongMetaData(UObject* WorldContextObject); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66E54(relative to base address)
		EFMJamLoopType GetJamLoopType(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F66E3C(relative to base address)
	};


	// Class SparksCoreCosmeticsRuntime.SparksSongItemDefinition
	// Inherited from USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x88 (0x530 - 0x4A8)
	class USparksSongItemDefinition : public USparksAccountItemDefinition	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x4A8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<USparksJamEmoteItemDefinition*> JamEmote_Vox; // 0x4B0(0x20)
		TWeakObjectPtr<USparksJamEmoteItemDefinition*> JamEmote_Lead; // 0x4D0(0x20)
		TWeakObjectPtr<USparksJamEmoteItemDefinition*> JamEmote_Bass; // 0x4F0(0x20)
		TWeakObjectPtr<USparksJamEmoteItemDefinition*> JamEmote_Drum; // 0x510(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksSongItemDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksSpotlightAnimDefinition
	// Inherited from USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x4D0 - 0x4A8)
	class USparksSpotlightAnimDefinition : public USparksAccountItemDefinition	
	{
	public:
		TWeakObjectPtr<ULevelSequence*> SpotlightSequence; // 0x4A8(0x20)
		ESparksInstrumentType InstrumentType; // 0x4C8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x4C9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksSpotlightAnimDefinition");
			return ret;
		}
	};


	// Class SparksCoreCosmeticsRuntime.SparksGuitarSpotlightDefinition
	// Inherited from USparksSpotlightAnimDefinition -> USparksAccountItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x4D0 - 0x4D0)
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
	// Size: 0x0 (0x4D0 - 0x4D0)
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
	// Size: 0x0 (0x4D0 - 0x4D0)
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
	// Size: 0x0 (0x4D0 - 0x4D0)
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
	// Size: 0x0 (0x4D0 - 0x4D0)
	class USparksKeyboardSpotlightDefinition : public USparksSpotlightAnimDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreCosmeticsRuntime.SparksKeyboardSpotlightDefinition");
			return ret;
		}
	};

}
