#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMInWorldKnobsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMInWorldKnobsRuntime.FabricChildActorTickSubsystem
	// Inherited from UFortManagedTickSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0xE8 - 0xD0)
	class UFabricChildActorTickSubsystem : public UFortManagedTickSubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		TArray ChildActorComponentsPendingSpawn; // 0xD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricChildActorTickSubsystem");
			return ret;
		}
	};


	// Class FMInWorldKnobsRuntime.FabricChildActorComponent
	// Inherited from UChildActorComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x2F0 - 0x270)
	class UFabricChildActorComponent : public UChildActorComponent	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x270(0x10) UNKNOWN PROPERTY
		UFMDeviceCableModulatorPortComponent InWorldKnobModulatorPort; // 0x280(0x8)
		bool bUseScreenGrid; // 0x288(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x289(0x7) UNKNOWN PROPERTY
		FVector2D ScreenGridPosition; // 0x290(0x10)
		FModulatorPortSaveData ModulatorPortSaveData; // 0x2A0(0x20)
		unsigned char UnknownData06_6[0x20]; // 0x2C0(0x20) UNKNOWN PROPERTY
		UClass CableManagerClassForModulatorPorts; // 0x2E0(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricChildActorComponent");
			return ret;
		}

		void OnModulatorPortDisconnected(UFMDeviceCablePortComponent DisconnectedPort); // Flags: Final|Native|Private 0x7FF414D80D58
		void OnModulatorPortConnected(UFMDeviceCablePortComponent ConnectedPort); // Flags: Final|Native|Private 0x7FF414D80C78
		FString GetKnobOptionKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D80B98
		AFMInWorldKnobActorBase GetChildActorAsInWorldKnobActorBase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D80AB8
		TScriptInterface GetChildActorAsFabricInteractable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D809D8
		AFabricButtonBase GetChildActorAsFabricButton(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D808F8
		UFMDeviceCableModulatorPortComponent CreateModulatorPortIfNeeded(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D80818
	};


	// Class FMInWorldKnobsRuntime.FabricScreenComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x2C0 - 0x220)
	class UFabricScreenComponent : public USceneComponent	
	{
	public:
		FMulticastInlineDelegate OnWidgetCreated; // 0x220(0x10)
		FMulticastInlineDelegate OnWidgetAdded; // 0x230(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x240(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr ScreenWidget; // 0x258(0x8)
		TWeakObjectPtr ScreenWidgetComponent; // 0x260(0x8)
		TMap CopyComponentsToWidget; // 0x268(0x50)
		unsigned char UnknownData03_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricScreenComponent");
			return ret;
		}

		FVector SnapUnrealLocationToScreenGrid(FVector UnrealPosition); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D81458
		void SetScreenSize(int32_t InWidth, int32_t InHeight); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D81378
		void OnCopiedKnobActorSet(UFMInWorldKnobActorCopyComponent CopyComponent, AFMInWorldKnobActorBase NewKnobActor); // Flags: Final|Native|Private 0x7FF414D81298
		void Initialize(UWidgetComponent InScreenWidgetComponent, int32_t InWidth, int32_t InHeight, UFabricScreenLayoutDataAsset ScreenLayout); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D811B8
		int32_t GetScreenGridWidth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D810D8
		int32_t GetScreenGridHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D80FF8
		FVector2D ConvertUnrealLocationToGridPosition(FVector UnrealPosition); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D80F18
		FVector ConvertGridPositionToUnrealLocation(FVector2D GridPosition); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D80E38
	};


	// Class FMInWorldKnobsRuntime.FabricScreenLayoutDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UFabricScreenLayoutDataAsset : public UDataAsset	
	{
	public:
		TArray Layout; // 0x30(0x10)
		TArray AdditionalWidgetLayout; // 0x40(0x10)
		UClass FabricScreenWidgetClass; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricScreenLayoutDataAsset");
			return ret;
		}
	};


	// Class FMInWorldKnobsRuntime.FabricUserOptionPresetAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricUserOptionPresetAsset : public UDataAsset	
	{
	public:
		FFabricUserOptionPresetCollection UserOptionPreset; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricUserOptionPresetAsset");
			return ret;
		}
	};


	// Class FMInWorldKnobsRuntime.FabricUserOptionSaveModulatable
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x30 (0x358 - 0x328)
	class UFabricUserOptionSaveModulatable : public UFabricModulatable	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x328(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricUserOptionSaveModulatable");
			return ret;
		}
	};


	// Class FMInWorldKnobsRuntime.FabricUserOptionSaveComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x168 (0x208 - 0xA0)
	class UFabricUserOptionSaveComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TArray UserOptionsToSave; // 0xA8(0x10)
		int32_t MaxSaveSlots; // 0xB8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		FString SaveIndexParam; // 0xC0(0x10)
		TArray PresetAssets; // 0xD0(0x10)
		FString PresetIndexParam; // 0xE0(0x10)
		FString ApplyIndexImmediatelyToggleParam; // 0xF0(0x10)
		FMulticastInlineDelegate OnActiveOverridesChanged; // 0x100(0x10)
		ABuildingActor Owner; // 0x110(0x8)
		UFabricUserOptionSaveModulatable UserOptionSaveModulatable; // 0x118(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		TArray Presets; // 0x128(0x10)
		TArray Saves; // 0x138(0x10)
		TSet FloatUserOptions; // 0x148(0x50)
		int32_t ActiveSaveIndex; // 0x198(0x4)
		int32_t ActivePresetIndex; // 0x19C(0x4)
		unsigned char UnknownData07_7[0x68]; // 0x1A0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent");
			return ret;
		}

		void SetSaveSlot(int32_t SaveSlotIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144303B8
		void SetPreset(int32_t PresetIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144302D8
		void SetMusicClock(UMusicClockComponent MusicClockComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144301F8
		void OnAnyOptionUpdated(); // Flags: Final|Native|Private 0x7FF414430118
		void OnActiveOverridesChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF414430038
		bool IsApplyingOverrides(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF41442FF58
		bool HasOverrideForParam(FString Param); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41442FE78
		FString GetOverrideForParam(FString Param); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41442FD98
	};


	// Class FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UFMInWorldCableOptionsComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x80]; // 0xA0(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent");
			return ret;
		}

		void OnOptionsLoaded(); // Flags: Final|Native|Protected 0x7FF414D817D8
		void OnCableDisconncted(UFMDeviceCablePortComponent SourcePort, UFMDeviceCablePortComponent DisconnectedPort); // Flags: Final|Native|Protected 0x7FF414D816F8
		void OnCableConnected(UFMDeviceCablePortComponent SourcePort, UFMDeviceCablePortComponent ConnectedPort); // Flags: Final|Native|Protected 0x7FF414D81618
		void OnAnyOptionChanged(); // Flags: Final|Native|Protected 0x7FF414D81538
	};


	// Class FMInWorldKnobsRuntime.FMInWorldKnobActorBase
	// Inherited from AActor -> UObject
	// Size: 0x1E8 (0x478 - 0x290)
	class AFMInWorldKnobActorBase : public AActor	
	{
	public:
		unsigned char UnknownData09_3[0x20]; // 0x290(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnModulatedPropertyValueChanged; // 0x2B0(0x10)
		FMulticastInlineDelegate OnKnobRuntimeValueChanged; // 0x2C0(0x10)
		FMulticastInlineDelegate OnKnobSerializedValueChanged; // 0x2D0(0x10)
		FMulticastInlineDelegate OnFloatProviderConnectionChanged; // 0x2E0(0x10)
		FString OptionKey; // 0x2F0(0x10)
		FText OverriddenTitle; // 0x300(0x10)
		FText OverriddenDescription; // 0x310(0x10)
		bool bCanBeModulated; // 0x320(0x1)
		bool bKnobEnabled; // 0x321(0x1)
		bool bKnobDisplayOnly; // 0x322(0x1)
		unsigned char UnknownData10_6[0x5]; // 0x323(0x5) UNKNOWN PROPERTY
		USceneComponent ModulatorPortParent; // 0x328(0x8)
		UFMDeviceCableModulatorPortComponent ModulatorPort; // 0x330(0x8)
		unsigned char UnknownData11_6[0x8]; // 0x338(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x340(0x20)
		unsigned char UnknownData12_6[0x8]; // 0x360(0x8) UNKNOWN PROPERTY
		UPlaylistUserOptionBase MyUserOption; // 0x368(0x8)
		unsigned char UnknownData13_6[0x40]; // 0x370(0x40) UNKNOWN PROPERTY
		TArray CurrentFloatProviders; // 0x3B0(0x10)
		unsigned char UnknownData14_6[0x50]; // 0x3C0(0x50) UNKNOWN PROPERTY
		USceneComponent HitComponent; // 0x410(0x8)
		TWeakObjectPtr InteractingController; // 0x418(0x8)
		EFabricInteractableType InteractableType; // 0x420(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x421(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr WidgetViewModel; // 0x424(0x8)
		unsigned char UnknownData16_6[0x4]; // 0x42C(0x4) UNKNOWN PROPERTY
		TArray OverrideLabels; // 0x430(0x10)
		TArray OptionLabels; // 0x440(0x10)
		TArray OptionValues; // 0x450(0x10)
		int32_t SerializedOptionIndex; // 0x460(0x4)
		int32_t CurrentOptionIndex; // 0x464(0x4)
		float CurrentAlpha; // 0x468(0x4)
		float ClampedKnobValue; // 0x46C(0x4)
		bool bTrackingInput; // 0x470(0x1)
		bool bIsVisibilityBound; // 0x471(0x1)
		unsigned char UnknownData17_7[0x6]; // 0x472(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase");
			return ret;
		}

		void UpdateInteractableVisuals(bool bInteractable); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D840F8
		void UpdateFocusVisuals(bool bFocused); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D84018
		void UpdateEnabledVisuals(bool bEnabled); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D83F38
		void UpdateDisplayOnlyVisuals(bool bDisplayOnly); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D83E58
		void StopTrackingInput(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D83D78
		void StartTrackingInput(APlayerController PlayerController); // Flags: Event|Protected|BlueprintEvent 0x7FF414D83C98
		void SetWidgetViewModel(UFabricInteractableViewModel ViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D83BB8
		void SetTitle(FText& Title); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D83AD8
		void SetSelectedIndex(int32_t Index, bool SnapToSelection); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D839F8
		void SetOverrideOptionLabels(TArray& Labels); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D83918
		void SetNumberOptions(int32_t NumberOptions); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D83838
		void SetModulatorPortCablesHidden(bool bNewHidden); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D83758
		void SetKnobEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D83678
		void SetKnobDisplayOnly(bool bDisplayOnly); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D83598
		void SetCurrentKnobPosition(float KnobPosition); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D834B8
		void ResetToDefaultValue(APlayerController PlayerController); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D833D8
		void ReceiveOnWidgetViewModelSet(); // Flags: Event|Public|BlueprintEvent 0x7FF414D832F8
		void RecalculateModulation(); // Flags: Final|Native|Private 0x7FF414D83218
		void OnReceiveFloatProvidersFromPort(TArray& FloatProvider); // Flags: Final|Native|Private|HasOutParms 0x7FF414D83138
		void OnKnobIsVisible(bool bInIsVisible); // Flags: Final|Native|Protected 0x7FF414D83058
		void OnFloatProviderFloatUpdated(float NewFloat, UFabricFloatProviderBase FloatProvider); // Flags: Final|Native|Private 0x7FF414D82F78
		void OnFloatProviderEnabledChanged(bool bEnabled, UFabricFloatProviderBase FloatProvider); // Flags: Final|Native|Private 0x7FF414D82E98
		void KnobValueChanged(int32_t NewIndex, bool SnapToSelection, APlayerController PlayerController); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D82DB8
		bool IsOverriddenByPort(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D82CD8
		void HitComponentUpdated(USceneComponent NewHitComponent); // Flags: Event|Protected|BlueprintEvent 0x7FF414D82BF8
		bool HasEnabledFloatProvider(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D82B18
		bool HasActiveFloatProvider(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D82A38
		bool HasActiveContinuousFloatProvider(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D82958
		UFabricInteractableViewModel GetWidgetViewModel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D82878
		int32_t GetNumberOptions(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D82798
		APlayerController GetInteractingController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D826B8
		USceneComponent GetHitComponent(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D825D8
		FText GetCurrentValueLabel(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF414D824F8
		FString GetCurrentValueAsString(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D82418
		FName GetCurrentValueAsName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D82338
		int32_t GetCurrentValueAsInt(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D82258
		float GetCurrentValueAsFloat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D82178
		char GetCurrentValueAsEnum(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D82098
		bool GetCurrentValueAsBool(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D81FB8
		int32_t GetCurrentOptionIndex(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D81ED8
		UClass GetCopyWidgetClassInternal(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D81DF8
		UClass GetCopyClassInternal(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D81D18
		bool GetConsumeInteractionFromChildInteractable(APlayerController PlayerController); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D81C38
		void FindAndChangeKnobValue(FString Value, bool SnapToSelection, APlayerController PlayerController); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D81B58
		void EnsureProperCollision(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D81A78
		void CopyAttributesFromOtherKnobInternal(AFMInWorldKnobActorBase OtherKnob); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D81998
		void CopyAttributesFromOtherKnob(AFMInWorldKnobActorBase OtherKnob); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D818B8
	};


	// Class FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent
	// Inherited from UFabricChildActorComponent -> UChildActorComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x140 (0x430 - 0x2F0)
	class UFMInWorldKnobActorCopyComponent : public UFabricChildActorComponent	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x2F0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnModulatedPropertyValueChanged; // 0x300(0x10)
		FMulticastInlineDelegate OnKnobRuntimeValueChanged; // 0x310(0x10)
		FMulticastInlineDelegate OnKnobSerializedValueChanged; // 0x320(0x10)
		FMulticastInlineDelegate OnFloatProviderConnectionChanged; // 0x330(0x10)
		FMulticastInlineDelegate OnKnobActorSet; // 0x340(0x10)
		UClass DefaultKnobActorClass; // 0x350(0x8)
		AFMInWorldKnobActorBase InWorldKnobActor; // 0x358(0x8)
		FString OptionKey; // 0x360(0x10)
		FText OverriddenTitle; // 0x370(0x10)
		bool bCanBeModulated; // 0x380(0x1)
		bool bKnobEnabled; // 0x381(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x382(0x6) UNKNOWN PROPERTY
		UPlaylistUserOptionBase OuterUserOption; // 0x388(0x8)
		FFabricUserOption OuterFabricUserOption; // 0x390(0x38)
		unsigned char UnknownData06_6[0x30]; // 0x3C8(0x30) UNKNOWN PROPERTY
		UPlaylistUserOptionBase CopiedUserOption; // 0x3F8(0x8)
		unsigned char UnknownData07_7[0x30]; // 0x400(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent");
			return ret;
		}

		void SetCopiedInWorldKnob(UObject InWorldKnobObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D84718
		void OnInWorldKnobSerializedValueChanged(FString Value, UPlaylistUserOptionBase Option, APlayerController PlayerController); // Flags: Final|Native|Private 0x7FF414D84638
		void OnInWorldKnobRuntimeValueChanged(FString Value, UPlaylistUserOptionBase Option); // Flags: Final|Native|Private 0x7FF414D84558
		void OnInWorldKnobModulatedPropertyValueChanged(FString Value, UObject ModulatorObject); // Flags: Final|Native|Private 0x7FF414D84478
		void OnInWorldKnobFloatProviderConnectionChanged(bool bConnected, UObject ModulatorObject); // Flags: Final|Native|Private 0x7FF414D84398
		FString GetCurrentKnobValueBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D842B8
		void ClearCopiedInWorldKnob(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D841D8
	};


	// Class FMInWorldKnobsRuntime.InWorldKnobInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInWorldKnobInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.InWorldKnobInterface");
			return ret;
		}
	};


	// Class FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x208 (0x2A8 - 0xA0)
	class UFMInWorldKnobOptionsComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnInitialKnobValuesLoaded; // 0xA8(0x10)
		FMulticastInlineDelegate OnAllKnobsLoaded; // 0xB8(0x10)
		FMulticastInlineDelegate OnAnyKnobRuntimeValueChanged; // 0xC8(0x10)
		FMulticastInlineDelegate OnAnyKnobSerializedValueChanged; // 0xD8(0x10)
		TSet InWorldKnobInterfaceObjects; // 0xE8(0x50)
		TArray ReplicatedInWorldKnobInterfaceObjects; // 0x138(0x10)
		TArray ReplicatedFabricInteractableObjects; // 0x148(0x10)
		TArray ReplicatedModulatorPorts; // 0x158(0x10)
		ABuildingActor BuildingActorOwner; // 0x168(0x8)
		UClass OwnerClass; // 0x170(0x8)
		UFabricUserOptionSaveComponent SaveComponent; // 0x178(0x8)
		TMap PropertiesEditedByUserOptions; // 0x180(0x50)
		TMap OptionKeyToInWorldKnobObject; // 0x1D0(0x50)
		TMap OptionKeyToModulatorPort; // 0x220(0x50)
		TArray PendingFabricModulatables; // 0x270(0x10)
		FTimerHandle ActorSaveRequestTimer; // 0x280(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x288(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent");
			return ret;
		}

		bool OwnsInWorldKnobObject(UObject InWorldKnobObject); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414431338
		void OnSaveOverridesChanged(); // Flags: Final|Native|Private 0x7FF414431258
		void OnRep_ReplicatedModulatorPorts(); // Flags: Final|Native|Private 0x7FF414431178
		void OnRep_ReplicatedInWorldKnobInterfaceObjects(); // Flags: Final|Native|Private 0x7FF414431098
		void OnRep_ReplicatedFabricInteractableObjects(); // Flags: Final|Native|Private 0x7FF414430FB8
		void OnOptionsLoaded(); // Flags: Final|Native|Private 0x7FF414430ED8
		void OnInWorldKnobSerializedOptionChanged(FString Value, UPlaylistUserOptionBase Option, APlayerController PlayerController); // Flags: Final|Native|Private 0x7FF414430DF8
		void OnInWorldKnobRuntimeOptionChanged(FString Value, UPlaylistUserOptionBase Option); // Flags: Final|Native|Private 0x7FF414430D18
		void OnInitialKnobValuesLoaded__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF414430C38
		void OnAnyOptionUpdated(); // Flags: Final|Native|Private 0x7FF414430B58
		void OnAnyKnobSerializedValueChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF414430A78
		void OnAnyKnobRuntimeValueChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF414430998
		void OnAllKnobsLoaded__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4144308B8
		bool CanMakeUserOptionChanges(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144307D8
		bool AreAllKnobsLoadedForNotify(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144306F8
		bool ActorHasValidControllerBP(AActor Actor, AFortPlayerPawn& OutFortPlayerPawn, APlayerController& OutPlayerController); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414430618
	};


	// Class FMInWorldKnobsRuntime.PlaylistUserOptionFMOutgoingCableConnection
	// Inherited from UPlaylistUserOptionBase -> UDataAsset -> UObject
	// Size: 0x30 (0x1E8 - 0x1B8)
	class UPlaylistUserOptionFMOutgoingCableConnection : public UPlaylistUserOptionBase	
	{
	public:
		FFMOutgoingCableConnection DefaultValue; // 0x1B8(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.PlaylistUserOptionFMOutgoingCableConnection");
			return ret;
		}
	};

}
