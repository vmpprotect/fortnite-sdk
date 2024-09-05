#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Sounds
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C
	// Inherited from UFortAIComponent_Voice -> UActorComponent -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UNPC_VoiceComponent_C : public UFortAIComponent_Voice	
	{
	public:
		UFortTaggedSoundBank* DeprecatedBPSoundBank; // 0xA8(0x8)
		USceneComponent* AttachComponent; // 0xB0(0x8)
		double TriggerTimeThreshold; // 0xB8(0x8)
		double LastTriggerTime; // 0xC0(0x8)
		UAudioComponent* Audio_Component; // 0xC8(0x8)
		USoundEffectSourcePresetChain* SourceChainToApply; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C");
			return ret;
		}

		void PlaySoundCue(USoundCue* SoundToPlay, UAudioComponent* AudioComponent, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSourceEffectChainToApply(USoundEffectSourcePresetChain* SourceEffectChain); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Internal Get Voice Sound Bank(UFortTaggedSoundBank* Sound Bank); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Deprecated Set Sound Bank(UFortTaggedSoundBank* SoundBank); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayVoiceLine(FGameplayTag& Gameplay Tag, UAudioComponent* AudioComponent, bool& Success); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/DefaultAppActivationSoundMixManager.DefaultAppActivationSoundMixManager_C
	// Inherited from UFortAppActivationSoundMixManager -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UDefaultAppActivationSoundMixManager_C : public UFortAppActivationSoundMixManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/DefaultAppActivationSoundMixManager.DefaultAppActivationSoundMixManager_C");
			return ret;
		}
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/Foley/BP_AnimPreviewFoleyComponent.BP_AnimPreviewFoleyComponent_C
	// Inherited from USoundLibraryComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x158 - 0x158)
	class UBP_AnimPreviewFoleyComponent_C : public USoundLibraryComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Foley/BP_AnimPreviewFoleyComponent.BP_AnimPreviewFoleyComponent_C");
			return ret;
		}
	};


	// Class /Game/Sounds/Fort_Audio_Blueprints/Utilities/FunctionLibraries/AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioGameplay_FunctionLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/Utilities/FunctionLibraries/AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C");
			return ret;
		}

		void GetAudioForPlayerEvent(AActor* Target, USoundBase* 1P Sound, USoundBase* 3P Sound, UObject* __WorldContext, USoundBase* AudioAsset); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsActorLocal(AActor* Actor, UObject* __WorldContext); // Flags: Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetAudioForDamageEvent(AActor* Receiver, AActor* Instigator, USoundBase* ReceiverSound, USoundBase* InstigatorSound, USoundBase* ObserverSound, UObject* __WorldContext, USoundBase* AudioAsset); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/Creatures/B_CreatureSoundLibraryContext.B_CreatureSoundLibraryContext_C
	// Inherited from USoundLibrarySimpleContext -> USoundLibraryContext -> UObject
	// Size: 0x0 (0xB8 - 0xB8)
	class UB_CreatureSoundLibraryContext_C : public USoundLibrarySimpleContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Creatures/B_CreatureSoundLibraryContext.B_CreatureSoundLibraryContext_C");
			return ret;
		}

		bool Play(FSoundLibraryContextEventInput& InEventData, TArray<UAudioComponent*>& OutComponents); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/Fort_GamePlay_Sounds/Explosives/Athena_Grenade_Base_WhipTracker.Athena_Grenade_Base_WhipTracker_C
	// Inherited from UBulletWhipTrackerComponent_Default_C -> UBulletWhipTrackerComponentBase -> UActorComponent -> UObject
	// Size: 0x0 (0xF8 - 0xF8)
	class UAthena_Grenade_Base_WhipTracker_C : public UBulletWhipTrackerComponent_Default_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_GamePlay_Sounds/Explosives/Athena_Grenade_Base_WhipTracker.Athena_Grenade_Base_WhipTracker_C");
			return ret;
		}
	};


	// Class /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
	// Inherited from UActorComponent -> UObject
	// Size: 0x79 (0x119 - 0xA0)
	class UBP_SurfaceTypeSoundComponent_C : public UActorComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		TEnumAsByte<EPhysicalSurface> SurfaceType; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		TMap<TEnumAsByte, USoundBase*> SoundMap; // 0xB0(0x50)
		FVector Location; // 0x100(0x18)
		bool IsSurfaceTypeSet; // 0x118(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C");
			return ret;
		}

		void ActuallyPlaySound(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType, AActor* Actor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySound(FVector Location); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Test Delay(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2D8 - 0x2B0)
	class UB_MusicEventInstanceWidget_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UUEFN_TextBlock_C* Text; // 0x2B8(0x8)
		UMusicEventInstance* EventInstance; // 0x2C0(0x8)
		double Distance; // 0x2C8(0x8)
		UB_MusicEventDebugWidget_C* DebugWidget; // 0x2D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C");
			return ret;
		}

		FSlateColor GetTextColor(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetFormatText(FText& Result); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Tick(FGeometry MyGeometry, float InDeltaTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_MusicEventInstanceWidget(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C
	// Inherited from UMusicEventSubsystemDebugWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x3C (0x2EC - 0x2B0)
	class UB_MusicEventDebugWidget_C : public UMusicEventSubsystemDebugWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UBackgroundBlur* Background; // 0x2B8(0x8)
		UCommonListView* EventInstances; // 0x2C0(0x8)
		FString AssetFilter; // 0x2C8(0x10)
		TArray<UMusicEventInstance*> Instances; // 0x2D8(0x10)
		int32_t FontSize; // 0x2E8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C");
			return ret;
		}

		void FilterInstances(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEventInstances(TArray<UMusicEventInstance*>& Instances); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMusicEventPos(double X, double Y); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMusicEventAssetFilter(FString Filter); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMusicEventFontSize(int32_t Size); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_MusicEventDebugWidget(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C
	// Inherited from UFortWeaponSoundLibraryComponent -> UFortSoundLibraryComponent -> USoundLibraryComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x3A (0x272 - 0x238)
	class UB_WeaponSoundLibraryComponent_C : public UFortWeaponSoundLibraryComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x8)
		FGameplayTag FireEvent; // 0x240(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		UMetaSoundSource* BaseGunfireMS; // 0x248(0x8)
		TArray<UMetaSoundPatch*> ModMS; // 0x250(0x10)
		USoundLibrary* ModSoundLibrary; // 0x260(0x8)
		UObject* ModDistanceCurveBank; // 0x268(0x8)
		bool bSuppressorAtt; // 0x270(0x1)
		bool bEnableSuppressor; // 0x271(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C");
			return ret;
		}

		void GetIsRetrigger(bool& bIsRetrigger); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopFireEventsOnUnequip(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopFireEventsOnDeath(AActor* DeadActor, float Damage, AFortPawn* InstigatedBy, FVector HitLocation, AActor* DamageCauser); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BuiltSoundFireRateInit(UMetaSoundBuilderBase* BuilderRef); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ValidateModMetasounds(UObject* 1pMetaSoundPatch, UObject* 3pMetaSoundPatch, bool& bShouldBuild); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckIfSuppressor(UMetaSoundBuilderBase* BuilderRef, FMetaSoundNodeHandle& BaseNodeHandle, FMetaSoundNodeHandle ModNodeHandle, UObject* ModRef); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConnectInterfaceInputs(UMetaSoundBuilderBase* BuilderRef, FMetaSoundNodeHandle& BaseWeaponNodeHandle, FName InputName); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConnectNodesIO(UMetaSoundBuilderBase* BuilderRef, FName InputName, FName OutputName, FMetaSoundNodeHandle BaseNodeHandle, FMetaSoundNodeHandle ModNodeHandle); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddConnectedGraphInput(FName InputName, FName DataType, UMetaSoundSourceBuilder* BuilderRef, FMetaSoundNodeHandle BaseWeaponNodeHandleRef); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateModSoundLibrary(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetModMS(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBaseMS(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateModMetaSound(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSoundsFromEvent(FGameplayTag InEventName, TArray<USoundBase*>& Out Sounds); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSoundPlayed(FGameplayTag InEventName, UAudioComponent* InComponent); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSoundStopped(FGameplayTag InEventName, UAudioComponent* InComponent, bool& bStopped); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TryHandleFireEvent(FGameplayTag Event, UAudioComponent* Component); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModRemoved(UFortWeaponModAudioData* InModAudioData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModApplied(UFortWeaponModAudioData* InModAudioData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_WeaponSoundLibraryComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C
	// Inherited from UFortWeaponSoundLibraryContext -> UFortSoundLibraryContext -> USoundLibraryContext -> UObject
	// Size: 0x49 (0x101 - 0xB8)
	class UB_WeaponSoundLibraryContext_C : public UFortWeaponSoundLibraryContext	
	{
	public:
		bool bGatherSounds; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		TArray<USoundBase*> GatheredSounds; // 0xC0(0x10)
		TArray<UAudioComponent*> FireAudioComponents; // 0xD0(0x10)
		TArray<int32_t> IndexToClear; // 0xE0(0x10)
		TArray<UAudioComponent*> NeedRespawnComponent; // 0xF0(0x10)
		bool bAlmostFinished; // 0x100(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C");
			return ret;
		}

		void Setup Audio Component(USceneComponent* AttachmentComponent, AActor* Actor, USoundBase* Sound, UAudioComponent* AudioComponent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAlmostFinished(FName OutputName, FMetaSoundOutput& Output); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CleanFireAudioComponents(bool& bParamRetriggered); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableSoundRetrieval(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearRetrievedSounds(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRetrievedSounds(TArray<USoundBase*>& GatheredSounds); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRootComponent(AActor* Actor, FGameplayTag EventTag, USceneComponent* RootComponent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Play(FSoundLibraryContextEventInput& InEventData, TArray<UAudioComponent*>& OutComponents); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryComponent_FortAthenaVehicle.BP_HitNotifySoundLibraryComponent_FortAthenaVehicle_C
	// Inherited from UBP_HitNotifySoundLibraryComponent_C -> UFortHitNotifySoundLibraryComponent -> UFortSoundLibraryComponent -> USoundLibraryComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UBP_HitNotifySoundLibraryComponent_FortAthenaVehicle_C : public UBP_HitNotifySoundLibraryComponent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryComponent_FortAthenaVehicle.BP_HitNotifySoundLibraryComponent_FortAthenaVehicle_C");
			return ret;
		}
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryComponent.BP_HitNotifySoundLibraryComponent_C
	// Inherited from UFortHitNotifySoundLibraryComponent -> UFortSoundLibraryComponent -> USoundLibraryComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UBP_HitNotifySoundLibraryComponent_C : public UFortHitNotifySoundLibraryComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryComponent.BP_HitNotifySoundLibraryComponent_C");
			return ret;
		}
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryContext.BP_HitNotifySoundLibraryContext_C
	// Inherited from UFortHitNotifySoundLibraryContext -> UFortSoundLibraryContext -> USoundLibraryContext -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class UBP_HitNotifySoundLibraryContext_C : public UFortHitNotifySoundLibraryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryContext.BP_HitNotifySoundLibraryContext_C");
			return ret;
		}
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C
	// Inherited from UFortSkydiveSoundLibraryComponent -> UFortSoundLibraryComponent -> USoundLibraryComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x1F0 - 0x1C0)
	class UBP_SkydiveSoundLibraryComponent_C : public UFortSkydiveSoundLibraryComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1C0(0x8)
		FGameplayTag SkydiveEventTag; // 0x1C8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray<UAudioComponent*> Components; // 0x1D0(0x10)
		bool bIsSubmixRegistered; // 0x1E0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1E1(0x7) UNKNOWN PROPERTY
		USoundControlBusMix* Contrail_CBM; // 0x1E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C");
			return ret;
		}

		void OnSoundStopped(FGameplayTag InEventName, UAudioComponent* InComponent, bool& bStopped); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventPlayed(FGameplayTag InEventName); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSoundPlayed(FGameplayTag InEventName, UAudioComponent* InComponent); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateCBM(FGameplayTag EventName); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_SkydiveSoundLibraryComponent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryContext.BP_SkydiveSoundLibraryContext_C
	// Inherited from UFortSkydiveSoundLibraryContext -> UFortSoundLibraryContext -> USoundLibraryContext -> UObject
	// Size: 0x0 (0xB8 - 0xB8)
	class UBP_SkydiveSoundLibraryContext_C : public UFortSkydiveSoundLibraryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryContext.BP_SkydiveSoundLibraryContext_C");
			return ret;
		}
	};


	// Class /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C
	// Inherited from UFortAudioParameterComponent_Pawn -> UAudioParameterComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x3B (0x12B - 0xF0)
	class UBP_AudioParameterComponent_Pawn_C : public UFortAudioParameterComponent_Pawn	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xF0(0x8)
		AActor* LocalViewTarget; // 0xF8(0x8)
		TArray<FAudioParameterQueryData> QueryAudioParams; // 0x100(0x10)
		bool bDebugEnabled; // 0x110(0x1)
		bool IsInWater; // 0x111(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x112(0x6) UNKNOWN PROPERTY
		AFortPlayerPawn* LocalPlayerPawnTarget; // 0x118(0x8)
		double WaterDepthValue; // 0x120(0x8)
		TEnumAsByte<PlayerWaterDepthEnum> PlayerWaterDepth; // 0x128(0x1)
		TEnumAsByte<PlayerWaterDepthEnum> CurrentWaterDepth; // 0x129(0x1)
		bool WaterDepthChanged; // 0x12A(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C");
			return ret;
		}

		void OnWaterDepthSwitch(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWaterUpdate(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Movement Mode Change(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitWater(AFortPlayerPawn* FortPlayerPawn, bool bPawnIsOutsideOfAllWaterBodies); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnterWater(AFortPlayerPawn* FortPlayerPawn); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetWaterDepthValue(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PrintParameter(FAudioParameterQueryData& Parameter, bool Condition); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnViewTargetSet(AActor* Actor); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_AudioParameterComponent_Pawn(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/Fort_Audio_Blueprints/AudioFadeOverride/AudioFadeOverrideComponent.AudioFadeOverrideComponent_C
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UAudioFadeOverrideComponent_C : public UFortGameStateComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		APlayerCameraManager* CameraManagerRef; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/AudioFadeOverride/AudioFadeOverrideComponent.AudioFadeOverrideComponent_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Audio Fade Change Event(bool bFadeOut, float FadeTime); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_AudioFadeOverrideComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/Fort_Audio_Blueprints/UnderwaterAudioComponent/UnderwaterAudioComponent.UnderwaterAudioComponent_C
	// Inherited from UActorComponent -> UObject
	// Size: 0x31 (0xD1 - 0xA0)
	class UUnderwaterAudioComponent_C : public UActorComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		USoundMix* CamUnderwaterSoundMix; // 0xA8(0x8)
		USoundBase* CamUnderwaterStartSound; // 0xB0(0x8)
		UAudioComponent* CamUnderwaterAudio; // 0xB8(0x8)
		USoundBase* CamUnderwaterLoopSound; // 0xC0(0x8)
		USoundBase* CamUnderwaterStopSound; // 0xC8(0x8)
		bool bEnabled; // 0xD0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/UnderwaterAudioComponent/UnderwaterAudioComponent.UnderwaterAudioComponent_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Camera Underwater State Changed(bool bIsUnderWater, float DepthUnderwater); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_UnderwaterAudioComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/Apollo/Weather/Storm/AGV_Storm.AGV_Storm_C
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class AAGV_Storm_C : public AActor	
	{
	public:
		UFilterVolumeComponent* FilterVolume; // 0x290(0x8)
		UAudioGameplayVolumeComponent* AudioGameplayVolumeProxy; // 0x298(0x8)
		UAudioShapeCylinderComponent* AudioShapeCylinder; // 0x2A0(0x8)
		USceneComponent* DefaultSceneRoot; // 0x2A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Apollo/Weather/Storm/AGV_Storm.AGV_Storm_C");
			return ret;
		}
	};


	// Class /SunRoseFlyingGameplay/Sounds/SunRose_AnimationContext.SunRose_AnimationContext_C
	// Inherited from USoundLibraryAnimContext -> USoundLibraryContext -> UObject
	// Size: 0x2 (0xA2 - 0xA0)
	class USunRose_AnimationContext_C : public USoundLibraryAnimContext	
	{
	public:
		bool IncludeAffiliationIntParam_; // 0xA0(0x1)
		bool IncludeEnergyLevel; // 0xA1(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/Sounds/SunRose_AnimationContext.SunRose_AnimationContext_C");
			return ret;
		}

		void PassPlayerAffiliation(AActor* Owner, UAudioComponent* AudioComponent); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PassNormalizedEnergy(AActor* Owner, UAudioComponent* AudioComponent); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Play(FSoundLibraryContextEventInput& InEventData, TArray<UAudioComponent*>& OutComponents); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/Sounds/BP_ScoutDroneAnimSoundLibContext.BP_ScoutDroneAnimSoundLibContext_C
	// Inherited from USoundLibraryAnimContext -> USoundLibraryContext -> UObject
	// Size: 0x1 (0xA1 - 0xA0)
	class UBP_ScoutDroneAnimSoundLibContext_C : public USoundLibraryAnimContext	
	{
	public:
		EFortFootstepPlayerRelation PreviewPlayerRelation; // 0xA0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/Sounds/BP_ScoutDroneAnimSoundLibContext.BP_ScoutDroneAnimSoundLibContext_C");
			return ret;
		}

		bool Play(FSoundLibraryContextEventInput& InEventData, TArray<UAudioComponent*>& OutComponents); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseZeusGameplay/Sounds/Ability/BulletWhipTrackerComponent_ZeusLightning.BulletWhipTrackerComponent_ZeusLightning_C
	// Inherited from UBulletWhipTrackerComponentBase -> UActorComponent -> UObject
	// Size: 0x0 (0xF8 - 0xF8)
	class UBulletWhipTrackerComponent_ZeusLightning_C : public UBulletWhipTrackerComponentBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseZeusGameplay/Sounds/Ability/BulletWhipTrackerComponent_ZeusLightning.BulletWhipTrackerComponent_ZeusLightning_C");
			return ret;
		}
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/Creatures/B_CreatureAnimSoundLibraryContext.B_CreatureAnimSoundLibraryContext_C
	// Inherited from USoundLibraryAnimContext -> USoundLibraryContext -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UB_CreatureAnimSoundLibraryContext_C : public USoundLibraryAnimContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Creatures/B_CreatureAnimSoundLibraryContext.B_CreatureAnimSoundLibraryContext_C");
			return ret;
		}

		bool Play(FSoundLibraryContextEventInput& InEventData, TArray<UAudioComponent*>& OutComponents); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
	// Inherited from UFortAudioAnalysisDebugWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D0 - 0x2B0)
	class UWB_AudioAnalysis_UI_C : public UFortAudioAnalysisDebugWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UVerticalBox* GraphBox; // 0x2B8(0x8)
		TArray<UWB_AudioAnalysis_FloatGraph_C*> Widgets; // 0x2C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C");
			return ret;
		}

		void AddScalarParameter(FAudioAnalysisParameterScalar& Param); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddVectorParameter(FAudioAnalysisParameterVector& Param); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearParameters(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WB_AudioAnalysis_UI(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x330 - 0x2B0)
	class UWB_AudioAnalysis_FloatGraph_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UCanvasPanel* CanvasPanel; // 0x2B8(0x8)
		UTextBlock* Label_; // 0x2C0(0x8)
		UProgressBar* ProgressBar; // 0x2C8(0x8)
		UTextBlock* Value; // 0x2D0(0x8)
		FVector2D Position; // 0x2D8(0x10)
		FVector2D Size; // 0x2E8(0x10)
		bool calculated; // 0x2F8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2F9(0x3) UNKNOWN PROPERTY
		FName Parameter; // 0x2FC(0x4)
		TArray<FVector2D> Points; // 0x300(0x10)
		int32_t NumPoints; // 0x310(0x4)
		FLinearColor Color; // 0x314(0x10)
		int32_t VectorIndex; // 0x324(0x4)
		UMaterialParameterCollection* Collection; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C");
			return ret;
		}

		void OnPaint(FPaintContext& Context); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void calcWidgetSize(FGeometry geom); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Value(double Value); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Tick(FGeometry MyGeometry, float InDeltaTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Initialize MPC(FName Parameter, UMaterialParameterCollection* Collection, int32_t VectorIndex); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
	// Inherited from AFortEntryMusicController -> AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AFort_Entry_Music_Controller_BP_C : public AFortEntryMusicController	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent* SceneComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C");
			return ret;
		}

		void OnFailure_20ED3FB643A85AED53700DB5CB181419(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSuccess_20ED3FB643A85AED53700DB5CB181419(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ListenToMusicPacks(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMusicPackChanged(UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayEquippedMusicPack(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Change Music(USoundBase* New Music, double StartTime, FGameplayTag Event Tag); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAudioComponentReady(TScriptInterface<Class> NewMusicPack, UAudioComponent* AudioComponent); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SubGameReady(ESubGame SubGame); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RegisterAudioAnalysisSubmix(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
