#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Sounds
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

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

		void GetAudioForPlayerEvent(AActor Target, USoundBase 1P Sound, USoundBase 3P Sound, UObject __WorldContext, USoundBase& AudioAsset); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D766DAF00
		bool IsActorLocal(AActor Actor, UObject __WorldContext); // Flags: Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D766DAE00
		void GetAudioForDamageEvent(AActor Receiver, AActor Instigator, USoundBase ReceiverSound, USoundBase InstigatorSound, USoundBase ObserverSound, UObject __WorldContext, USoundBase& AudioAsset); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D766DB000
	};


	// Class /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C
	// Inherited from UFortAIComponent_Voice -> UActorComponent -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UNPC_VoiceComponent_C : public UFortAIComponent_Voice	
	{
	public:
		UFortTaggedSoundBank DeprecatedBPSoundBank; // 0xA8(0x8)
		USceneComponent AttachComponent; // 0xB0(0x8)
		double TriggerTimeThreshold; // 0xB8(0x8)
		double LastTriggerTime; // 0xC0(0x8)
		UAudioComponent Audio_Component; // 0xC8(0x8)
		USoundEffectSourcePresetChain SourceChainToApply; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C");
			return ret;
		}

		void PlaySoundCue(USoundCue SoundToPlay, UAudioComponent AudioComponent, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D82E27F00
		void SetSourceEffectChainToApply(USoundEffectSourcePresetChain SourceEffectChain); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D82E27D00
		void Internal Get Voice Sound Bank(UFortTaggedSoundBank& Sound Bank); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82E28000
		void Deprecated Set Sound Bank(UFortTaggedSoundBank SoundBank); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D82E28100
		void PlayVoiceLine(FGameplayTag& Gameplay Tag, UAudioComponent AudioComponent, bool& Success); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D82E27E00
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

		bool Play(FSoundLibraryContextEventInput& InEventData, TArray& OutComponents); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D1B072700
	};


	// Class /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
	// Inherited from UActorComponent -> UObject
	// Size: 0x79 (0x119 - 0xA0)
	class UBP_SurfaceTypeSoundComponent_C : public UActorComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		TEnumAsByte SurfaceType; // 0xA8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		TMap SoundMap; // 0xB0(0x50)
		FVector Location; // 0x100(0x18)
		bool IsSurfaceTypeSet; // 0x118(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C");
			return ret;
		}

		void ActuallyPlaySound(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D811AEA00
		void SetSurfaceType(TEnumAsByte SurfaceType, AActor Actor); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D68805F00
		void PlaySound(FVector Location); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D68806000
		void Test Delay(); // Flags: BlueprintCallable|BlueprintEvent 0x15D68805E00
		void ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32_t EntryPoint); // Flags: Final 0x15D68806100
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


	// Class /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
	// Inherited from AFortEntryMusicController -> AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AFort_Entry_Music_Controller_BP_C : public AFortEntryMusicController	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent SceneComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C");
			return ret;
		}

		void OnFailure_20ED3FB643A85AED53700DB5CB181419(); // Flags: BlueprintCallable|BlueprintEvent 0x15D60B54D00
		void OnSuccess_20ED3FB643A85AED53700DB5CB181419(); // Flags: BlueprintCallable|BlueprintEvent 0x15D83524400
		void ListenToMusicPacks(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8352AA00
		void OnMusicPackChanged(UAthenaMusicPackItemDefinition NewMusicPack, float StartTimeOffset); // Flags: BlueprintCallable|BlueprintEvent 0x15D84EBA300
		void PlayEquippedMusicPack(); // Flags: BlueprintCallable|BlueprintEvent 0x15D84EBA400
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D83521200
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Protected|BlueprintEvent 0x15D83521100
		void Change Music(USoundBase New Music, double StartTime, FGameplayTag Event Tag); // Flags: BlueprintCallable|BlueprintEvent 0x15D84EB9600
		void OnAudioComponentReady(TScriptInterface NewMusicPack, UAudioComponent AudioComponent); // Flags: BlueprintCallable|BlueprintEvent 0x15D84EB9700
		void SubGameReady(ESubGame SubGame); // Flags: BlueprintCallable|BlueprintEvent 0x15D863FB000
		void RegisterAudioAnalysisSubmix(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66EDCC00
		void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D8352A900
	};


	// Class /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x338 - 0x2B8)
	class UWB_AudioAnalysis_FloatGraph_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UCanvasPanel CanvasPanel; // 0x2C0(0x8)
		UTextBlock Label_; // 0x2C8(0x8)
		UProgressBar ProgressBar; // 0x2D0(0x8)
		UTextBlock Value; // 0x2D8(0x8)
		FVector2D Position; // 0x2E0(0x10)
		FVector2D Size; // 0x2F0(0x10)
		bool calculated; // 0x300(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x301(0x3) UNKNOWN PROPERTY
		FName Parameter; // 0x304(0x4)
		TArray Points; // 0x308(0x10)
		int32_t NumPoints; // 0x318(0x4)
		FLinearColor Color; // 0x31C(0x10)
		int32_t VectorIndex; // 0x32C(0x4)
		UMaterialParameterCollection Collection; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C");
			return ret;
		}

		void OnPaint(FPaintContext& Context); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D4E998800
		void calcWidgetSize(FGeometry geom); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4E998C00
		void Set Value(double Value); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4E998600
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D4E998700
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D4E998B00
		void Tick(FGeometry MyGeometry, float InDeltaTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D4E998500
		void Initialize MPC(FName Parameter, UMaterialParameterCollection Collection, int32_t VectorIndex); // Flags: BlueprintCallable|BlueprintEvent 0x15D4E998900
		void ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D4E998A00
	};


	// Class /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
	// Inherited from UFortAudioAnalysisDebugWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D8 - 0x2B8)
	class UWB_AudioAnalysis_UI_C : public UFortAudioAnalysisDebugWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UVerticalBox GraphBox; // 0x2C0(0x8)
		TArray Widgets; // 0x2C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C");
			return ret;
		}

		void AddScalarParameter(FAudioAnalysisParameterScalar& Param); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D49DCA700
		void AddVectorParameter(FAudioAnalysisParameterVector& Param); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D49DCA600
		void ClearParameters(); // Flags: Event|Public|BlueprintEvent 0x15D49DCA500
		void ExecuteUbergraph_WB_AudioAnalysis_UI(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D49DCA400
	};


	// Class /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2E0 - 0x2B8)
	class UB_MusicEventInstanceWidget_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UUEFN_TextBlock_C Text; // 0x2C0(0x8)
		UMusicEventInstance EventInstance; // 0x2C8(0x8)
		double Distance; // 0x2D0(0x8)
		UB_MusicEventDebugWidget_C DebugWidget; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C");
			return ret;
		}

		FSlateColor GetTextColor(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D49DC9800
		void GetFormatText(FText& Result); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D49DC9900
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D49DC9D00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15D49DC9C00
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15D49DC9B00
		void Tick(FGeometry MyGeometry, float InDeltaTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D49DC9600
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15D49DC9700
		void ExecuteUbergraph_B_MusicEventInstanceWidget(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D49DC9A00
	};


	// Class /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C
	// Inherited from UMusicEventSubsystemDebugWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x3C (0x2F4 - 0x2B8)
	class UB_MusicEventDebugWidget_C : public UMusicEventSubsystemDebugWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UBackgroundBlur Background; // 0x2C0(0x8)
		UCommonListView EventInstances; // 0x2C8(0x8)
		FString AssetFilter; // 0x2D0(0x10)
		TArray Instances; // 0x2E0(0x10)
		int32_t FontSize; // 0x2F0(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C");
			return ret;
		}

		void FilterInstances(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D49DC9400
		void SetEventInstances(TArray& Instances); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D49DC9300
		void SetMusicEventPos(double X, double Y); // Flags: BlueprintCallable|BlueprintEvent 0x15D49DC9000
		void SetMusicEventAssetFilter(FString Filter); // Flags: BlueprintCallable|BlueprintEvent 0x15D49DC9200
		void SetMusicEventFontSize(int32_t Size); // Flags: BlueprintCallable|BlueprintEvent 0x15D49DC9100
		void ExecuteUbergraph_B_MusicEventDebugWidget(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D49DC9500
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

		bool Play(FSoundLibraryContextEventInput& InEventData, TArray& OutComponents); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D80430600
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C
	// Inherited from UFortWeaponSoundLibraryComponent -> UFortSoundLibraryComponent -> USoundLibraryComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x3A (0x272 - 0x238)
	class UB_WeaponSoundLibraryComponent_C : public UFortWeaponSoundLibraryComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x8)
		FGameplayTag FireEvent; // 0x240(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		UMetaSoundSource BaseGunfireMS; // 0x248(0x8)
		TArray ModMS; // 0x250(0x10)
		USoundLibrary ModSoundLibrary; // 0x260(0x8)
		UObject ModDistanceCurveBank; // 0x268(0x8)
		bool bSuppressorAtt; // 0x270(0x1)
		bool bEnableSuppressor; // 0x271(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C");
			return ret;
		}

		void GetIsRetrigger(bool& bIsRetrigger); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6CD18400
		void StopFireEventsOnUnequip(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6CD14C00
		void StopFireEventsOnDeath(AActor DeadActor, float Damage, AFortPawn InstigatedBy, FVector HitLocation, AActor DamageCauser); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6CD14B00
		void BuiltSoundFireRateInit(UMetaSoundBuilderBase BuilderRef); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD13500
		void ValidateModMetasounds(UObject 1pMetaSoundPatch, UObject 3pMetaSoundPatch, bool& bShouldBuild); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6CD1B600
		void CheckIfSuppressor(UMetaSoundBuilderBase BuilderRef, FMetaSoundNodeHandle& BaseNodeHandle, FMetaSoundNodeHandle ModNodeHandle, UObject ModRef); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD13600
		void ConnectInterfaceInputs(UMetaSoundBuilderBase BuilderRef, FMetaSoundNodeHandle& BaseWeaponNodeHandle, FName InputName); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD13700
		void ConnectNodesIO(UMetaSoundBuilderBase BuilderRef, FName InputName, FName OutputName, FMetaSoundNodeHandle BaseNodeHandle, FMetaSoundNodeHandle ModNodeHandle); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD13800
		void AddConnectedGraphInput(FName InputName, FName DataType, UMetaSoundSourceBuilder BuilderRef, FMetaSoundNodeHandle BaseWeaponNodeHandleRef); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6CD13400
		void CreateModSoundLibrary(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD13A00
		void SetModMS(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD15700
		void SetBaseMS(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD14A00
		void CreateModMetaSound(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD13900
		void GetSoundsFromEvent(FGameplayTag InEventName, TArray& Out Sounds); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD14300
		void OnSoundPlayed(FGameplayTag InEventName, UAudioComponent InComponent); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D6CD14600
		void OnSoundStopped(FGameplayTag InEventName, UAudioComponent InComponent, bool& bStopped); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6CD14700
		void TryHandleFireEvent(FGameplayTag Event, UAudioComponent Component); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6CD15800
		void OnModRemoved(UFortWeaponModAudioData InModAudioData); // Flags: Event|Protected|BlueprintEvent 0x15D6CD14500
		void OnModApplied(UFortWeaponModAudioData InModAudioData); // Flags: Event|Protected|BlueprintEvent 0x15D6CD14400
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D6CD14800
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Public|BlueprintEvent 0x15D6CD14900
		void ExecuteUbergraph_B_WeaponSoundLibraryComponent(int32_t EntryPoint); // Flags: Final 0x15D6CD13B00
	};


	// Class /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C
	// Inherited from UFortWeaponSoundLibraryContext -> UFortSoundLibraryContext -> USoundLibraryContext -> UObject
	// Size: 0x49 (0x101 - 0xB8)
	class UB_WeaponSoundLibraryContext_C : public UFortWeaponSoundLibraryContext	
	{
	public:
		bool bGatherSounds; // 0xB8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		TArray GatheredSounds; // 0xC0(0x10)
		TArray FireAudioComponents; // 0xD0(0x10)
		TArray IndexToClear; // 0xE0(0x10)
		TArray NeedRespawnComponent; // 0xF0(0x10)
		bool bAlmostFinished; // 0x100(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C");
			return ret;
		}

		void Setup Audio Component(USceneComponent AttachmentComponent, AActor Actor, USoundBase Sound, UAudioComponent& AudioComponent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD13200
		void OnAlmostFinished(FName OutputName, FMetaSoundOutput& Output); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6CD13000
		void CleanFireAudioComponents(bool& bParamRetriggered); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D31E5E300
		void EnableSoundRetrieval(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D31E56C00
		void ClearRetrievedSounds(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D31E56B00
		void GetRetrievedSounds(TArray& GatheredSounds); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6CD16F00
		void GetRootComponent(AActor Actor, FGameplayTag EventTag, USceneComponent& RootComponent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6CD17900
		bool Play(FSoundLibraryContextEventInput& InEventData, TArray& OutComponents); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6CD13100
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
		unsigned char UnknownData02_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray Components; // 0x1D0(0x10)
		bool bIsSubmixRegistered; // 0x1E0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1E1(0x7) UNKNOWN PROPERTY
		USoundControlBusMix Contrail_CBM; // 0x1E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C");
			return ret;
		}

		void OnSoundStopped(FGameplayTag InEventName, UAudioComponent InComponent, bool& bStopped); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6CD16300
		void OnEventPlayed(FGameplayTag InEventName); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D6CD13C00
		void OnSoundPlayed(FGameplayTag InEventName, UAudioComponent InComponent); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D6CD16200
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D6CD12200
		void ActivateCBM(FGameplayTag EventName); // Flags: BlueprintCallable|BlueprintEvent 0x15D6CD10700
		void ExecuteUbergraph_BP_SkydiveSoundLibraryComponent(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D19007400
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
		AActor LocalViewTarget; // 0xF8(0x8)
		TArray QueryAudioParams; // 0x100(0x10)
		bool bDebugEnabled; // 0x110(0x1)
		bool IsInWater; // 0x111(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x112(0x6) UNKNOWN PROPERTY
		AFortPlayerPawn LocalPlayerPawnTarget; // 0x118(0x8)
		double WaterDepthValue; // 0x120(0x8)
		TEnumAsByte PlayerWaterDepth; // 0x128(0x1)
		TEnumAsByte CurrentWaterDepth; // 0x129(0x1)
		bool WaterDepthChanged; // 0x12A(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C");
			return ret;
		}

		void OnWaterDepthSwitch(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D31E58D00
		void OnWaterUpdate(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D31E58E00
		void Movement Mode Change(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D31E59200
		void OnExitWater(AFortPlayerPawn FortPlayerPawn, bool bPawnIsOutsideOfAllWaterBodies); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D31E58600
		void OnEnterWater(AFortPlayerPawn FortPlayerPawn); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D31E59300
		float GetWaterDepthValue(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D3F513A00
		void PrintParameter(FAudioParameterQueryData& Parameter, bool Condition); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D31E5EC00
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D19007000
		void OnViewTargetSet(AActor Actor); // Flags: Event|Public|BlueprintEvent 0x15D31E5EB00
		void ExecuteUbergraph_BP_AudioParameterComponent_Pawn(int32_t EntryPoint); // Flags: Final 0x15D44634F00
	};


	// Class /Game/Sounds/Fort_Audio_Blueprints/AudioFadeOverride/AudioFadeOverrideComponent.AudioFadeOverrideComponent_C
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UAudioFadeOverrideComponent_C : public UFortGameStateComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		APlayerCameraManager CameraManagerRef; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Audio_Blueprints/AudioFadeOverride/AudioFadeOverrideComponent.AudioFadeOverrideComponent_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D31E56D00
		void On Audio Fade Change Event(bool bFadeOut, float FadeTime); // Flags: BlueprintCallable|BlueprintEvent 0x15D31E56E00
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Public|BlueprintEvent 0x15D31E56700
		void ExecuteUbergraph_AudioFadeOverrideComponent(int32_t EntryPoint); // Flags: Final 0x15D31E57000
	};


	// Class /Game/Sounds/Fort_Music/MusicController/Quartz/BP_QuartzMusicController.BP_QuartzMusicController_C
	// Inherited from AFortTimeSynthController -> AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ABP_QuartzMusicController_C : public AFortTimeSynthController	
	{
	public:
		USceneComponent DefaultSceneRoot; // 0x290(0x8)
		UQuartzMusicTrackComponent_C CurrentTrack; // 0x298(0x8)
		FMulticastInlineDelegate OnClockCreated; // 0x2A0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Music/MusicController/Quartz/BP_QuartzMusicController.BP_QuartzMusicController_C");
			return ret;
		}

		void GetCurrentTrack(UQuartzMusicTrackComponent_C& CurrentTrack); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D4B1A3B00
		void StopCurrentTrack(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F2DF00
		void PlayTrack(UQuartzMusicTrackComponent_C Track Component); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F2E100
		void RequestTrackPlayback(UQuartzMusicTrackComponent_C Requesting Track, bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D60F2E000
		void OnClockCreated__DelegateSignature(FName Clock Name, UQuartzClockHandle Clock Handle); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D60F2E200
	};


	// Class /Game/Sounds/Fort_Music/MusicController/Quartz/QuartzMusicTrackComponent.QuartzMusicTrackComponent_C
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xDC (0x17C - 0xA0)
	class UQuartzMusicTrackComponent_C : public UGameFrameworkComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		USoundCue TrackSoundCue; // 0xA8(0x8)
		UMetaSoundSource TrackMetaSound; // 0xB0(0x8)
		double TrackPriority; // 0xB8(0x8)
		UQuartzClockHandle ClockInst; // 0xC0(0x8)
		FName ClockName; // 0xC8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		double ClockBPM; // 0xD0(0x8)
		FQuartzClockSettings ClockSettings; // 0xD8(0x20)
		ABP_QuartzMusicController_C ControllerActor; // 0xF8(0x8)
		FQuartzQuantizationBoundary ClockQuantizationBoundary; // 0x100(0x20)
		bool bDebugEnabled; // 0x120(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		UAudioComponent AudioComponent; // 0x128(0x8)
		bool bQueueStop; // 0x130(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
		double TrackFadeInTime; // 0x138(0x8)
		double TrackFadeOutTime; // 0x140(0x8)
		TArray TrackParameters; // 0x148(0x10)
		FGameplayTagContainer TrackDisableTags; // 0x158(0x20)
		FGameplayTag MusicEventTag; // 0x178(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Music/MusicController/Quartz/QuartzMusicTrackComponent.QuartzMusicTrackComponent_C");
			return ret;
		}

		void Is Enabled(bool& Enabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60F2D600
		void GetTrackSound(USoundBase& Sound); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60F2D700
		void GetClockHandle(UQuartzClockHandle& Clock Handle); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60F2DB00
		void SetTrackParameter(int32_t ParameterIndex, double InFloat); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F2CD00
		void GetAudioComponent(UAudioComponent& AudioComponent); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60F2DC00
		EAudioComponentPlayState GetPlayState(); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60F2D900
		void GetIsPlaying(bool& Is Playing); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60F2DA00
		void OnQuartzQuantizationEvent(FName ClockName, EQuartzCommandQuantization QuantizationType, int32_t NumBars, int32_t Beat, float BeatFraction); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F2D400
		void OnQuartzClockDelegate(EQuartzCommandDelegateSubType EventType, FName Name); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D60F2D500
		void QueueTrackStop(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F2D200
		void QueueTrackStart(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D60F2D300
		void GetTrackPriority(double& Priority); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60F2D800
		void SetDebugEnabled(bool Debug); // Flags: BlueprintCallable|BlueprintEvent 0x15D60F2CF00
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D60F2D100
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Public|BlueprintEvent 0x15D60F2D000
		void SetStemVolume(int32_t Index, double Value); // Flags: BlueprintCallable|BlueprintEvent 0x15D60F2CE00
		void ExecuteUbergraph_QuartzMusicTrackComponent(int32_t EntryPoint); // Flags: Final 0x15D60F2DD00
	};


	// Class /Game/Sounds/Fort_Music/Seasonal/Battlepass_MusicController_Quartz.Battlepass_MusicController_Quartz_C
	// Inherited from ABP_QuartzMusicController_C -> AFortTimeSynthController -> AActor -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class ABattlepass_MusicController_Quartz_C : public ABP_QuartzMusicController_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UQuartzMusicTrackComponent_C QuartzMusicTrackComponent; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Sounds/Fort_Music/Seasonal/Battlepass_MusicController_Quartz.Battlepass_MusicController_Quartz_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D87D24300
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent 0x15D87D28400
		void ExecuteUbergraph_Battlepass_MusicController_Quartz(int32_t EntryPoint); // Flags: Final 0x15D87D24400
	};

}
