#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMInWorldKnobsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FMInWorldKnobsRuntime.FabricChildActorTickSubsystem
	// Inherited from UFortManagedTickSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0xE8 - 0xD0)
	class UFabricChildActorTickSubsystem : public UFortManagedTickSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> ChildActorComponentsPendingSpawn; // 0xD8(0x10)

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
		unsigned char UnknownData00_3[0x10]; // 0x270(0x10) UNKNOWN PROPERTY
		UFMDeviceCableModulatorPortComponent* InWorldKnobModulatorPort; // 0x280(0x8)
		bool bUseScreenGrid; // 0x288(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x289(0x7) UNKNOWN PROPERTY
		FVector2D ScreenGridPosition; // 0x290(0x10)
		FModulatorPortSaveData ModulatorPortSaveData; // 0x2A0(0x20)
		unsigned char UnknownData02_6[0x20]; // 0x2C0(0x20) UNKNOWN PROPERTY
		UClass* CableManagerClassForModulatorPorts; // 0x2E0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricChildActorComponent");
			return ret;
		}

		void OnModulatorPortDisconnected(UFMDeviceCablePortComponent* DisconnectedPort); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516ABD20(relative to base address)
		void OnModulatorPortConnected(UFMDeviceCablePortComponent* ConnectedPort); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516ABD20(relative to base address)
		FString GetKnobOptionKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB2A4(relative to base address)
		AFMInWorldKnobActorBase GetChildActorAsInWorldKnobActorBase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AAF30(relative to base address)
		TScriptInterface GetChildActorAsFabricInteractable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AAEFC(relative to base address)
		AFabricButtonBase GetChildActorAsFabricButton(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AAED8(relative to base address)
		UFMDeviceCableModulatorPortComponent CreateModulatorPortIfNeeded(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AAD3C(relative to base address)
	};


	// Class FMInWorldKnobsRuntime.FabricScreenComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x2C0 - 0x220)
	class UFabricScreenComponent : public USceneComponent	
	{
	public:
		FMulticastInlineDelegate OnWidgetCreated; // 0x220(0x10)
		FMulticastInlineDelegate OnWidgetAdded; // 0x230(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x240(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<UFabricScreenWidget*> ScreenWidget; // 0x258(0x8)
		TWeakObjectPtr<UWidgetComponent*> ScreenWidgetComponent; // 0x260(0x8)
		TMap<UFMInWorldKnobActorCopyComponent*, FScreenWidgetLayoutInfo> CopyComponentsToWidget; // 0x268(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricScreenComponent");
			return ret;
		}

		FVector SnapUnrealLocationToScreenGrid(FVector UnrealPosition); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AC6C8(relative to base address)
		void SetScreenSize(int32_t InWidth, int32_t InHeight); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AC420(relative to base address)
		void OnCopiedKnobActorSet(UFMInWorldKnobActorCopyComponent* CopyComponent, AFMInWorldKnobActorBase* NewKnobActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516AB8FC(relative to base address)
		void Initialize(UWidgetComponent* InScreenWidgetComponent, int32_t InWidth, int32_t InHeight, UFabricScreenLayoutDataAsset* ScreenLayout); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AB4F0(relative to base address)
		int32_t GetScreenGridWidth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB3D0(relative to base address)
		int32_t GetScreenGridHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB3B8(relative to base address)
		FVector2D ConvertUnrealLocationToGridPosition(FVector UnrealPosition); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AAB80(relative to base address)
		FVector ConvertGridPositionToUnrealLocation(FVector2D GridPosition); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AAA48(relative to base address)
	};


	// Class FMInWorldKnobsRuntime.FabricScreenLayoutDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UFabricScreenLayoutDataAsset : public UDataAsset	
	{
	public:
		TArray<FFabricScreenLayout> Layout; // 0x30(0x10)
		TArray<FFabricWidgetLayout> AdditionalWidgetLayout; // 0x40(0x10)
		UClass* FabricScreenWidgetClass; // 0x50(0x8)

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
		unsigned char UnknownData00_1[0x30]; // 0x328(0x30) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TArray<FString> UserOptionsToSave; // 0xA8(0x10)
		int32_t MaxSaveSlots; // 0xB8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		FString SaveIndexParam; // 0xC0(0x10)
		TArray<UFabricUserOptionPresetAsset*> PresetAssets; // 0xD0(0x10)
		FString PresetIndexParam; // 0xE0(0x10)
		FString ApplyIndexImmediatelyToggleParam; // 0xF0(0x10)
		FMulticastInlineDelegate OnActiveOverridesChanged; // 0x100(0x10)
		ABuildingActor* Owner; // 0x110(0x8)
		UFabricUserOptionSaveModulatable* UserOptionSaveModulatable; // 0x118(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		TArray<FFabricUserOptionSaveData> Presets; // 0x128(0x10)
		TArray<FFabricUserOptionSaveData> Saves; // 0x138(0x10)
		TSet<FString> FloatUserOptions; // 0x148(0x50)
		int32_t ActiveSaveIndex; // 0x198(0x4)
		int32_t ActivePresetIndex; // 0x19C(0x4)
		unsigned char UnknownData03_7[0x68]; // 0x1A0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent");
			return ret;
		}

		void SetSaveSlot(int32_t SaveSlotIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AC3A0(relative to base address)
		void SetPreset(int32_t PresetIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AC320(relative to base address)
		void SetMusicClock(UMusicClockComponent* MusicClockComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AC0C0(relative to base address)
		void OnAnyOptionUpdated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516AB760(relative to base address)
		void OnActiveOverridesChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsApplyingOverrides(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516AB62C(relative to base address)
		bool HasOverrideForParam(FString Param); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB454(relative to base address)
		FString GetOverrideForParam(FString Param); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB2FC(relative to base address)
	};


	// Class FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UFMInWorldCableOptionsComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x80]; // 0xA0(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent");
			return ret;
		}

		void OnOptionsLoaded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516ABD9C(relative to base address)
		void OnCableDisconncted(UFMDeviceCablePortComponent* SourcePort, UFMDeviceCablePortComponent* DisconnectedPort); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516AB838(relative to base address)
		void OnCableConnected(UFMDeviceCablePortComponent* SourcePort, UFMDeviceCablePortComponent* ConnectedPort); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516AB774(relative to base address)
		void OnAnyOptionChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516AB74C(relative to base address)
	};


	// Class FMInWorldKnobsRuntime.FMInWorldKnobActorBase
	// Inherited from AActor -> UObject
	// Size: 0x1E8 (0x478 - 0x290)
	class AFMInWorldKnobActorBase : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x290(0x20) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_6[0x5]; // 0x323(0x5) UNKNOWN PROPERTY
		USceneComponent* ModulatorPortParent; // 0x328(0x8)
		UFMDeviceCableModulatorPortComponent* ModulatorPort; // 0x330(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x338(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x340(0x20)
		unsigned char UnknownData03_6[0x8]; // 0x360(0x8) UNKNOWN PROPERTY
		UPlaylistUserOptionBase* MyUserOption; // 0x368(0x8)
		unsigned char UnknownData04_6[0x40]; // 0x370(0x40) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> CurrentFloatProviders; // 0x3B0(0x10)
		unsigned char UnknownData05_6[0x50]; // 0x3C0(0x50) UNKNOWN PROPERTY
		USceneComponent* HitComponent; // 0x410(0x8)
		TWeakObjectPtr<APlayerController*> InteractingController; // 0x418(0x8)
		EFabricInteractableType InteractableType; // 0x420(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x421(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UFabricInteractableViewModel*> WidgetViewModel; // 0x424(0x8)
		unsigned char UnknownData07_6[0x4]; // 0x42C(0x4) UNKNOWN PROPERTY
		TArray<FText> OverrideLabels; // 0x430(0x10)
		TArray<FText> OptionLabels; // 0x440(0x10)
		TArray<FString> OptionValues; // 0x450(0x10)
		int32_t SerializedOptionIndex; // 0x460(0x4)
		int32_t CurrentOptionIndex; // 0x464(0x4)
		float CurrentAlpha; // 0x468(0x4)
		float ClampedKnobValue; // 0x46C(0x4)
		bool bTrackingInput; // 0x470(0x1)
		bool bIsVisibilityBound; // 0x471(0x1)
		unsigned char UnknownData08_7[0x6]; // 0x472(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase");
			return ret;
		}

		void UpdateInteractableVisuals(bool bInteractable); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7516AC990(relative to base address)
		void UpdateFocusVisuals(bool bFocused); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7516AC90C(relative to base address)
		void UpdateEnabledVisuals(bool bEnabled); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7516AC888(relative to base address)
		void UpdateDisplayOnlyVisuals(bool bDisplayOnly); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7516AC804(relative to base address)
		void StopTrackingInput(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartTrackingInput(APlayerController* PlayerController); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWidgetViewModel(UFabricInteractableViewModel* ViewModel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AC648(relative to base address)
		void SetTitle(FText& Title); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7516AC5A8(relative to base address)
		void SetSelectedIndex(int32_t Index, bool SnapToSelection); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7516AC4E0(relative to base address)
		void SetOverrideOptionLabels(TArray<FText>& Labels); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516AC244(relative to base address)
		void SetNumberOptions(int32_t NumberOptions); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7516AC1C0(relative to base address)
		void SetModulatorPortCablesHidden(bool bNewHidden); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AC038(relative to base address)
		void SetKnobEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516ABF60(relative to base address)
		void SetKnobDisplayOnly(bool bDisplayOnly); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516ABEE0(relative to base address)
		void SetCurrentKnobPosition(float KnobPosition); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74F0F49F0(relative to base address)
		void ResetToDefaultValue(APlayerController* PlayerController); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516ABE60(relative to base address)
		void ReceiveOnWidgetViewModelSet(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RecalculateModulation(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516ABE4C(relative to base address)
		void OnReceiveFloatProvidersFromPort(TArray<UFabricFloatProviderBase*>& FloatProvider); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7516ABDB0(relative to base address)
		void OnKnobIsVisible(bool bInIsVisible); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516ABCA0(relative to base address)
		void OnFloatProviderFloatUpdated(float NewFloat, UFabricFloatProviderBase* FloatProvider); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516ABBDC(relative to base address)
		void OnFloatProviderEnabledChanged(bool bEnabled, UFabricFloatProviderBase* FloatProvider); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516AB9C0(relative to base address)
		void KnobValueChanged(int32_t NewIndex, bool SnapToSelection, APlayerController* PlayerController); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516AB644(relative to base address)
		bool IsOverriddenByPort(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB410(relative to base address)
		void HitComponentUpdated(USceneComponent* NewHitComponent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasEnabledFloatProvider(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB430(relative to base address)
		bool HasActiveFloatProvider(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB410(relative to base address)
		bool HasActiveContinuousFloatProvider(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB410(relative to base address)
		UFabricInteractableViewModel GetWidgetViewModel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB3E8(relative to base address)
		int32_t GetNumberOptions(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB2E4(relative to base address)
		APlayerController GetInteractingController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513629D0(relative to base address)
		USceneComponent GetHitComponent(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB28C(relative to base address)
		FText GetCurrentValueLabel(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516AB250(relative to base address)
		FString GetCurrentValueAsString(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB210(relative to base address)
		FName GetCurrentValueAsName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB1E4(relative to base address)
		int32_t GetCurrentValueAsInt(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB188(relative to base address)
		float GetCurrentValueAsFloat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB160(relative to base address)
		char GetCurrentValueAsEnum(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB0E4(relative to base address)
		bool GetCurrentValueAsBool(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB094(relative to base address)
		int32_t GetCurrentOptionIndex(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AB07C(relative to base address)
		UClass GetCopyWidgetClassInternal(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7516AB044(relative to base address)
		UClass GetCopyClassInternal(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF748985DB4(relative to base address)
		bool GetConsumeInteractionFromChildInteractable(APlayerController* PlayerController); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516AAF54(relative to base address)
		void FindAndChangeKnobValue(FString Value, bool SnapToSelection, APlayerController* PlayerController); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516AADB0(relative to base address)
		void EnsureProperCollision(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AAD60(relative to base address)
		void CopyAttributesFromOtherKnobInternal(AFMInWorldKnobActorBase* OtherKnob); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74F0ABB50(relative to base address)
		void CopyAttributesFromOtherKnob(AFMInWorldKnobActorBase* OtherKnob); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516AACBC(relative to base address)
	};


	// Class FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent
	// Inherited from UFabricChildActorComponent -> UChildActorComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x140 (0x430 - 0x2F0)
	class UFMInWorldKnobActorCopyComponent : public UFabricChildActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2F0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnModulatedPropertyValueChanged; // 0x300(0x10)
		FMulticastInlineDelegate OnKnobRuntimeValueChanged; // 0x310(0x10)
		FMulticastInlineDelegate OnKnobSerializedValueChanged; // 0x320(0x10)
		FMulticastInlineDelegate OnFloatProviderConnectionChanged; // 0x330(0x10)
		FMulticastInlineDelegate OnKnobActorSet; // 0x340(0x10)
		UClass* DefaultKnobActorClass; // 0x350(0x8)
		AFMInWorldKnobActorBase* InWorldKnobActor; // 0x358(0x8)
		FString OptionKey; // 0x360(0x10)
		FText OverriddenTitle; // 0x370(0x10)
		bool bCanBeModulated; // 0x380(0x1)
		bool bKnobEnabled; // 0x381(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x382(0x6) UNKNOWN PROPERTY
		UPlaylistUserOptionBase* OuterUserOption; // 0x388(0x8)
		FFabricUserOption OuterFabricUserOption; // 0x390(0x38)
		unsigned char UnknownData02_6[0x30]; // 0x3C8(0x30) UNKNOWN PROPERTY
		UPlaylistUserOptionBase* CopiedUserOption; // 0x3F8(0x8)
		unsigned char UnknownData03_7[0x30]; // 0x400(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent");
			return ret;
		}

		void SetCopiedInWorldKnob(UObject* InWorldKnobObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516BD068(relative to base address)
		void OnInWorldKnobSerializedValueChanged(FString Value, UPlaylistUserOptionBase* Option, APlayerController* PlayerController); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCE24(relative to base address)
		void OnInWorldKnobRuntimeValueChanged(FString Value, UPlaylistUserOptionBase* Option); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCC14(relative to base address)
		void OnInWorldKnobModulatedPropertyValueChanged(FString Value, UObject* ModulatorObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCA44(relative to base address)
		void OnInWorldKnobFloatProviderConnectionChanged(bool bConnected, UObject* ModulatorObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BC980(relative to base address)
		FString GetCurrentKnobValueBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516BC920(relative to base address)
		void ClearCopiedInWorldKnob(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516BC90C(relative to base address)
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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnInitialKnobValuesLoaded; // 0xA8(0x10)
		FMulticastInlineDelegate OnAllKnobsLoaded; // 0xB8(0x10)
		FMulticastInlineDelegate OnAnyKnobRuntimeValueChanged; // 0xC8(0x10)
		FMulticastInlineDelegate OnAnyKnobSerializedValueChanged; // 0xD8(0x10)
		TSet<UObject*> InWorldKnobInterfaceObjects; // 0xE8(0x50)
		TArray<UObject*> ReplicatedInWorldKnobInterfaceObjects; // 0x138(0x10)
		TArray<UObject*> ReplicatedFabricInteractableObjects; // 0x148(0x10)
		TArray<UFMDeviceCableModulatorPortComponent*> ReplicatedModulatorPorts; // 0x158(0x10)
		ABuildingActor* BuildingActorOwner; // 0x168(0x8)
		UClass* OwnerClass; // 0x170(0x8)
		UFabricUserOptionSaveComponent* SaveComponent; // 0x178(0x8)
		TMap<FString, UPlaylistUserOptionBase*> PropertiesEditedByUserOptions; // 0x180(0x50)
		TMap<FString, UObject*> OptionKeyToInWorldKnobObject; // 0x1D0(0x50)
		TMap<FString, UFMDeviceCableModulatorPortComponent*> OptionKeyToModulatorPort; // 0x220(0x50)
		TArray<UFabricModulatable*> PendingFabricModulatables; // 0x270(0x10)
		FTimerHandle ActorSaveRequestTimer; // 0x280(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x288(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent");
			return ret;
		}

		bool OwnsInWorldKnobObject(UObject* InWorldKnobObject); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516BCFB0(relative to base address)
		void OnSaveOverridesChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCF9C(relative to base address)
		void OnRep_ReplicatedModulatorPorts(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCF88(relative to base address)
		void OnRep_ReplicatedInWorldKnobInterfaceObjects(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCF74(relative to base address)
		void OnRep_ReplicatedFabricInteractableObjects(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCF60(relative to base address)
		void OnOptionsLoaded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCF4C(relative to base address)
		void OnInWorldKnobSerializedOptionChanged(FString Value, UPlaylistUserOptionBase* Option, APlayerController* PlayerController); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCCFC(relative to base address)
		void OnInWorldKnobRuntimeOptionChanged(FString Value, UPlaylistUserOptionBase* Option); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BCB2C(relative to base address)
		void OnInitialKnobValuesLoaded__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAnyOptionUpdated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516BC96C(relative to base address)
		void OnAnyKnobSerializedValueChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAnyKnobRuntimeValueChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAllKnobsLoaded__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanMakeUserOptionChanges(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516BC8B0(relative to base address)
		bool AreAllKnobsLoadedForNotify(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516BC898(relative to base address)
		bool ActorHasValidControllerBP(AActor* Actor, AFortPlayerPawn* OutFortPlayerPawn, APlayerController* OutPlayerController); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
