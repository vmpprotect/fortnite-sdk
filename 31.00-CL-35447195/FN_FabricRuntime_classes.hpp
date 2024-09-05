#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FabricRuntime.FabricAnimatableButtonInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricAnimatableButtonInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricAnimatableButtonInterface");
			return ret;
		}

		void PlayOpenAnimation(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6A4D8
		void PlayCloseAnimation(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6A3F8
	};


	// Class FabricRuntime.FabricAudioBridgeComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UFabricAudioBridgeComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		UClass FabricAudioPatchWrapperClass; // 0xB8(0x8)
		UFabricMetaSoundAudioPatchWrapper FabricAudioPatchWrapperInstance; // 0xC0(0x8)
		TWeakObjectPtr FabricMetasoundManager; // 0xC8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricAudioBridgeComponent");
			return ret;
		}

		void SyncAudioToMetaSound(USoundWave InAudio, float AudioStartTime, float InitialVolume); // Flags: Native|Public|BlueprintCallable 0x7FF414D6A778
		void SetFabricMetasoundManager(UFabricMetaSoundManagerComponent InFabricMetasoundManager); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6A698
		void SetAudioStartTime(FMusicTimestamp& StartTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D6A5B8
	};


	// Class FabricRuntime.FabricButtonBase
	// Inherited from AActor -> UObject
	// Size: 0xA8 (0x338 - 0x290)
	class AFabricButtonBase : public AActor	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate ToggleStateChanged; // 0x2A8(0x10)
		double OpenTimeSeconds; // 0x2B8(0x8)
		double CloseTimeSeconds; // 0x2C0(0x8)
		bool bHasToggle; // 0x2C8(0x1)
		TEnumAsByte ClickMethod; // 0x2C9(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x2CA(0x6) UNKNOWN PROPERTY
		APlayerController InteractingController; // 0x2D0(0x8)
		FString ButtonId; // 0x2D8(0x10)
		FText ButtonLabel; // 0x2E8(0x10)
		FText ButtonDescription; // 0x2F8(0x10)
		FGameplayTagContainer GameplayTags; // 0x308(0x20)
		bool bEnabled; // 0x328(0x1)
		bool bHovered; // 0x329(0x1)
		bool bPressed; // 0x32A(0x1)
		ECheckBoxState ToggleState; // 0x32B(0x1)
		unsigned char UnknownData05_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		UFabricInteractableViewModel WidgetViewModel; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricButtonBase");
			return ret;
		}

		void ToggleStateChanged__DelegateSignature(APlayerController InteractingController, bool IsToggle); // Flags: MulticastDelegate|Public|Delegate 0x7FF41409AD20
		void SwapToggle(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41409AC40
		void SetWidgetViewModel(UFabricInteractableViewModel ViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41409AB60
		void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41409AA80
		void SetEnabled(bool bNewEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41409A9A0
		void OnUnhovered(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF41409A8C0
		void OnToggleStateChanged(bool bIsToggled); // Flags: Native|Event|Public|BlueprintEvent 0x7FF41409A7E0
		void OnHovered(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF41409A700
		void OnEnabled(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF41409A620
		void OnDisabled(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF41409A540
		void OnButtonReleased(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF41409A460
		void OnButtonPressed(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF41409A380
		void OnButtonDoubleClicked(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF41409A2A0
		void OnButtonClicked(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF41409A1C0
		bool IsToggledOn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF41409A0E0
		bool IsPressed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF41409A000
		bool IsHovered(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414099F20
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414099E40
		void HandleButtonUnhovered(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414099D60
		void HandleButtonReleased(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414099C80
		void HandleButtonPressed(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414099BA0
		void HandleButtonHovered(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414099AC0
		void HandleButtonDoubleClicked(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140999E0
		void HandleButtonClicked(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414099900
		UTimelineComponent GetOpenTimeline(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 0x7FF414099820
		UTimelineComponent GetCloseTimeline(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 0x7FF414099740
	};


	// Class FabricRuntime.FabricButtonComponentBase
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x650 - 0x590)
	class UFabricButtonComponentBase : public UStaticMeshComponent	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0x590(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate ToggleStateChanged; // 0x5A0(0x10)
		double OpenTimeSeconds; // 0x5B0(0x8)
		double CloseTimeSeconds; // 0x5B8(0x8)
		bool bHasToggle; // 0x5C0(0x1)
		TEnumAsByte ClickMethod; // 0x5C1(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x5C2(0x6) UNKNOWN PROPERTY
		APlayerController InteractingController; // 0x5C8(0x8)
		FString ButtonId; // 0x5D0(0x10)
		FText ButtonLabel; // 0x5E0(0x10)
		FText ButtonDescription; // 0x5F0(0x10)
		FGameplayTagContainer GameplayTags; // 0x600(0x20)
		bool bUseScreenGrid; // 0x620(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x621(0x7) UNKNOWN PROPERTY
		FVector2D ScreenGridPosition; // 0x628(0x10)
		bool bEnabled; // 0x638(0x1)
		bool bHovered; // 0x639(0x1)
		bool bPressed; // 0x63A(0x1)
		ECheckBoxState ToggleState; // 0x63B(0x1)
		unsigned char UnknownData08_6[0x4]; // 0x63C(0x4) UNKNOWN PROPERTY
		UFabricInteractableViewModel WidgetViewModel; // 0x640(0x8)
		unsigned char UnknownData09_7[0x8]; // 0x648(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricButtonComponentBase");
			return ret;
		}

		void ToggleStateChanged__DelegateSignature(APlayerController InteractingController, bool IsToggle); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140A7518
		void SwapToggle(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A7438
		void SetWidgetViewModel(UFabricInteractableViewModel ViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A7358
		void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A7278
		void SetEnabled(bool bNewEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A7198
		void OnUnhovered(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A70B8
		void OnToggleStateChanged(bool bIsToggled); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A6FD8
		void OnHovered(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A6EF8
		void OnEnabled(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4140A6E18
		void OnDisabled(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A6D38
		void OnButtonReleased(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A6C58
		void OnButtonPressed(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A6B78
		void OnButtonDoubleClicked(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A6A98
		void OnButtonClicked(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A69B8
		bool IsToggledOn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140A68D8
		bool IsPressed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140A67F8
		bool IsHovered(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140A6718
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140A6638
		void HandleButtonUnhovered(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A6558
		void HandleButtonReleased(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A6478
		void HandleButtonPressed(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A6398
		void HandleButtonHovered(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A62B8
		void HandleButtonDoubleClicked(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A61D8
		void HandleButtonClicked(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140A60F8
		UTimelineComponent GetOpenTimeline(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 0x7FF4140A6018
		UTimelineComponent GetCloseTimeline(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 0x7FF4140A5F38
		void ConstructButton(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4140A5E58
	};


	// Class FabricRuntime.FabricDevice
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricDevice : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricDevice");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMetaSoundPatchOwner
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricMetaSoundPatchOwner : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundPatchOwner");
			return ret;
		}

		UFabricMetaSoundPatchWrapper GetMetaSoundPatchWrapper(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D6A858
	};


	// Class FabricRuntime.FabricAudioGenerator
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricAudioGenerator : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricAudioGenerator");
			return ret;
		}

		FSourceEffectChainEntry GetAudioAnalyzer(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D6A938
	};


	// Class FabricRuntime.FabricAudioModifier
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricAudioModifier : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricAudioModifier");
			return ret;
		}

		TArray GetSourceEffectChainEntries(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D6AA18
	};


	// Class FabricRuntime.FabricAudioReceiver
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricAudioReceiver : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricAudioReceiver");
			return ret;
		}

		USoundSourceBus GetSoundSourceBus(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D6AAF8
	};


	// Class FabricRuntime.FabricFloatGenerator
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricFloatGenerator : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatGenerator");
			return ret;
		}

		UFabricFloatProviderBase GetFloatProvider(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D6ABD8
	};


	// Class FabricRuntime.FabricFloatReceiver
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricFloatReceiver : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatReceiver");
			return ret;
		}

		void SetFloatProviders(TArray& FloatProvider); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414D6ACB8
	};


	// Class FabricRuntime.FabricTextureGenerator
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricTextureGenerator : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTextureGenerator");
			return ret;
		}

		UFabricTextureProviderBase GetTextureProvider(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D6AD98
	};


	// Class FabricRuntime.FabricTextureModifier
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricTextureModifier : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTextureModifier");
			return ret;
		}

		bool IsShowingTexturePreview(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D6AF58
		UFabricTextureModifierBase GetTextureModifier(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D6AE78
	};


	// Class FabricRuntime.FabricTextureReceiver
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricTextureReceiver : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTextureReceiver");
			return ret;
		}

		void OnTexturesChanged(TArray& Texture); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414D6B038
	};


	// Class FabricRuntime.FabricMeshGenerator
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricMeshGenerator : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshGenerator");
			return ret;
		}

		UFabricMeshProviderBase GetMeshProvider(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D6B118
	};


	// Class FabricRuntime.FabricMeshModifier
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricMeshModifier : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshModifier");
			return ret;
		}

		void OnMeshesChanged(TArray& InstanceMeshReferences, bool bInstancesChanged); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414D6B3B8
		bool IsShowingMeshPreview(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D6B2D8
		UFabricMeshModifierBase GetMeshModifier(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D6B1F8
	};


	// Class FabricRuntime.FabricMeshReceiver
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricMeshReceiver : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshReceiver");
			return ret;
		}

		void OnMeshReferenceChanged(FFabricMeshProviderMeshReference& ReferenceMesh); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414D6B658
		void OnMeshInstancesChanged(TArray& Meshes); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414D6B578
		void OnMeshInstanceReferencesChanged(TArray& MeshInstanceReferences, bool bMeshChanged, bool bInstancesChanged); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414D6B498
	};


	// Class FabricRuntime.FabricModulationNode
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFabricModulationNode : public UObject	
	{
	public:
		TArray FloatProviders; // 0x28(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricModulationNode");
			return ret;
		}
	};


	// Class FabricRuntime.FabricModulatable
	// Inherited from UObject
	// Size: 0x300 (0x328 - 0x28)
	class UFabricModulatable : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x4]; // 0x28(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr ModulatedActor; // 0x2C(0x8)
		unsigned char UnknownData04_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray ModulatorParams; // 0x38(0x10)
		TSet NonModulatedParamsWithCallbacks; // 0x48(0x50)
		TMap Modulators; // 0x98(0x50)
		TMap LastBroadcastedValues; // 0xE8(0x50)
		TArray ModulatorSources; // 0x138(0x10)
		unsigned char UnknownData05_7[0x1E0]; // 0x148(0x1E0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricModulatable");
			return ret;
		}

		void OnOptionsLoaded(); // Flags: Final|Native|Protected 0x7FF4140A7EB8
		void OnModulatorFloatProviderConnectionChanged(bool bConnected, UObject ModulatorObject); // Flags: Final|Native|Private 0x7FF4140A7DD8
		void OnModulatedPropertyChanged(FString Value, UObject ModulatorObject); // Flags: Final|Native|Private 0x7FF4140A7CF8
		void OnAnyOptionUpdated(); // Flags: Final|Native|Protected 0x7FF4140A7C18
		bool IsParamModulated(FString Param); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140A7B38
		bool GetModulatedString(FString Param, FMidiSongPos& SongPos, FString& OutString); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140A7A58
		bool GetModulatedInt(FString Param, FMidiSongPos& SongPos, int32_t& OutInt); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140A7978
		bool GetModulatedFloat(FString Param, FMidiSongPos& SongPos, float& OutFloat); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140A7898
		bool GetModulatedEnum(FString Param, FMidiSongPos& SongPos, char& OutEnum); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140A77B8
		bool GetModulatedBool(FString Param, FMidiSongPos& SongPos, bool& OutBool); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140A76D8
		AActor GetModulatedActor(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140A75F8
	};


	// Class FabricRuntime.FabricFloatProviderBase
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x58 (0x380 - 0x328)
	class UFabricFloatProviderBase : public UFabricModulatable	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x328(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFloatChanged; // 0x330(0x10)
		FMulticastInlineDelegate OnFloatProviderEnabledChanged; // 0x340(0x10)
		float CurrentFloat; // 0x350(0x4)
		TWeakObjectPtr MusicClock; // 0x354(0x8)
		unsigned char UnknownData04_6[0x4]; // 0x35C(0x4) UNKNOWN PROPERTY
		UFabricMetaSoundModulatorPatchWrapper AssociatedPatchWrapper; // 0x360(0x8)
		FString EnabledParam; // 0x368(0x10)
		bool bAlwaysModulates; // 0x378(0x1)
		bool bBindBlueprintOnFloatChanged; // 0x379(0x1)
		bool bIsEnabled; // 0x37A(0x1)
		bool bModulatorValueChanged; // 0x37B(0x1)
		unsigned char UnknownData05_7[0x4]; // 0x37C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatProviderBase");
			return ret;
		}

		void SetProviderEnabled(bool bInIsEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A8A80
		void SetMusicClock(UMusicClockComponent NewMusicClock); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A89A0
		void SetAssociatedPatchWrapper(UFabricMetaSoundModulatorPatchWrapper PatchWrapper); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A88C0
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Protected|BlueprintEvent 0x7FF4140A87E0
		void OnFloatProviderEnabledChanged__DelegateSignature(bool bEnabled, UFabricFloatProviderBase FloatProvider); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140A8700
		void OnFloatChanged__DelegateSignature(float float, UFabricFloatProviderBase FloatProvider); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140A8620
		bool GetProviderEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A8540
		EFabricFloatProviderType GetFloatProviderType(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A83F8
		float GetFloatAtSongPos(FMidiSongPos& SongPos); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140A8318
		FMidiSongPos GetCurrentSongPosWithOffset(float OffsetSeconds); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140A8238
		FMidiSongPos GetCurrentSongPos(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140A8158
		float GetCurrentFloat(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A8078
		UFabricMetaSoundModulatorPatchWrapper GetAssociatedPatchWrapper(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A7F98
	};


	// Class FabricRuntime.FabricFloatProviderWave
	// Inherited from UFabricFloatProviderBase -> UFabricModulatable -> UObject
	// Size: 0x150 (0x4D0 - 0x380)
	class UFabricFloatProviderWave : public UFabricFloatProviderBase	
	{
	public:
		FString WaveShapeParam; // 0x380(0x10)
		FString FreeHzParam; // 0x390(0x10)
		FString MinParam; // 0x3A0(0x10)
		FString MaxParam; // 0x3B0(0x10)
		FString BeatDurationParam; // 0x3C0(0x10)
		FString BeatOffsetParam; // 0x3D0(0x10)
		FString ShapeParam; // 0x3E0(0x10)
		FString StyleParam; // 0x3F0(0x10)
		int32_t PhaseCPDIndex; // 0x400(0x4)
		int32_t ValueCPDIndex; // 0x404(0x4)
		unsigned char UnknownData01_6[0x78]; // 0x408(0x78) UNKNOWN PROPERTY
		TSet PreviewDisplayMeshes; // 0x480(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatProviderWave");
			return ret;
		}

		void SetRandomSeedByGuid(FGuid& InRandomGuid); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D6BE38
		void SetFreePhase(float InFreePhase); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6BD58
		void RemovePreviewDisplayMesh(UStaticMeshComponent Mesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6BC78
		int32_t GetRandomSeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6BB98
		TArray GetPreviewDisplayMeshes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D6BAB8
		float GetCurrentPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6B9D8
		float GetCurrentFreePhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6B8F8
		void ClearPreviewDisplayMeshes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6B818
		void AddPreviewDisplayMesh(UStaticMeshComponent Mesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6B738
	};


	// Class FabricRuntime.FabricFloatProviderStep
	// Inherited from UFabricFloatProviderBase -> UFabricModulatable -> UObject
	// Size: 0x78 (0x3F8 - 0x380)
	class UFabricFloatProviderStep : public UFabricFloatProviderBase	
	{
	public:
		FString StepRateParam; // 0x380(0x10)
		FString ActiveStepsParam; // 0x390(0x10)
		FString StepParamBase; // 0x3A0(0x10)
		int32_t MaxSteps; // 0x3B0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3B4(0x4) UNKNOWN PROPERTY
		FFabricStepGenerator RuntimeGenerator; // 0x3B8(0x20)
		FMulticastInlineDelegate OnFloatProviderStepInitialized; // 0x3D8(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x3E8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatProviderStep");
			return ret;
		}

		float GetStepLengthBeats(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6BF18
	};


	// Class FabricRuntime.FabricFloatProviderValueSetter
	// Inherited from UFabricFloatProviderBase -> UFabricModulatable -> UObject
	// Size: 0x80 (0x400 - 0x380)
	class UFabricFloatProviderValueSetter : public UFabricFloatProviderBase	
	{
	public:
		FString ValueParam; // 0x380(0x10)
		FString TransitionTimingParam; // 0x390(0x10)
		unsigned char UnknownData01_7[0x60]; // 0x3A0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatProviderValueSetter");
			return ret;
		}

		float GetUpdateBeat(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D6C298
		bool CanUsePredictiveBeatBroadcasting(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6C1B8
		float CalculateTransitionTiming(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6C0D8
		float BroadcastCurrentValue(float OverriddenBeat); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6BFF8
	};


	// Class FabricRuntime.FabricHoldable
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricHoldable : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricHoldable");
			return ret;
		}
	};


	// Class FabricRuntime.FabricIndicatorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UFabricIndicatorComponent : public UGameFrameworkComponent	
	{
	public:
		FMulticastInlineDelegate OnEnabledStateChanged; // 0xA0(0x10)
		UClass FabricTooltipWidgetType; // 0xB0(0x8)
		FGameplayTag TargetsChangedTag; // 0xB8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer HUDTagsToHide; // 0xC0(0x20)
		UFortInputMappingContext IndicatorShowingInputContext; // 0xE0(0x8)
		int32_t IndicatorShowingPriority; // 0xE8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		UInputAction ShowMoreAction; // 0xF0(0x8)
		unsigned char UnknownData05_7[0x28]; // 0xF8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricIndicatorComponent");
			return ret;
		}

		void TryGetFortClientSettings(); // Flags: Final|Native|Protected 0x7FF414D6C7D8
		void SetIndicatorEnabled(bool bEnabled, bool bAllowWriteToSettings); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6C6F8
		void OnShowMoreActionTriggered(FInputActionInstance& Instance); // Flags: Final|Native|Public|HasOutParms 0x7FF414D6C618
		void OnIndicatorWidgetVisibilityChanged(ESlateVisibility NewVisibility); // Flags: Final|Native|Public 0x7FF414D6C538
		bool IsIndicatorEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6C458
		void HandleTooltipsEnabledChanged(); // Flags: Final|Native|Protected 0x7FF414D6C378
	};


	// Class FabricRuntime.FabricInteractableControllerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UFabricInteractableControllerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNoInteractablesHit; // 0xA8(0x10)
		AFortPlayerController PlayerController; // 0xB8(0x8)
		TWeakObjectPtr FabricInteractionToolItemDefSoftPtr; // 0xC0(0x20)
		TWeakObjectPtr OverriddenFabricInteractionToolItemDefSoftPtr; // 0xE0(0x20)
		UFortGadgetItemDefinition FabricInteractionToolItemDef; // 0x100(0x8)
		float EnsurePlayerHasInteractionToolRetryDelay; // 0x108(0x4)
		unsigned char UnknownData03_6[0x14]; // 0x10C(0x14) UNKNOWN PROPERTY
		TWeakObjectPtr SoftFabricDeviceBaseClass; // 0x120(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricInteractableControllerComponent");
			return ret;
		}

		void ServerRequestDoesIslandContainFabricDevices(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414D6CDF8
		void ServerGivePlayerFabricInteractionTool(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414D6CD18
		void OnCreativeModeEnabledChangedDelegate(bool bCreativeEnabled); // Flags: Final|Native|Public 0x7FF414D6CC38
		void GiveBackInteractionTool(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D6CB58
		void EnsurePlayerHasInteractionTool(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6CA78
		void ClientReceiveDoesIslandContainFabricDevices(bool bIslandContainsFabricDevices); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF414D6C998
		bool CanGiveBackInteractionTool(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6C8B8
	};


	// Class FabricRuntime.FabricInteractable
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricInteractable : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricInteractable");
			return ret;
		}

		void StartSpecialInteraction(APlayerController Controller); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6E058
		void StartInteraction(APlayerController Controller); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6DF78
		bool ShouldPassInteractionToComponent(AFabricInteractionTool InteractionTool); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6DE98
		void SetInteractable(bool bInteractable); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6DDB8
		void SetHitComponent(USceneComponent HitComponent); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6DCD8
		void SetFocused(bool bIsFocused); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6DBF8
		void OnInteractionFocusTargetChanged(APlayerController Controller, UObject FocusTarget, bool bIsFocused); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6DB18
		bool IsValidToInteractWith(APlayerController Controller); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6DA38
		bool IsFocusDependentOnInteractionContext(APlayerController Controller); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6D958
		UObject GetLinkedInteractable(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6D878
		UAudioComponent GetInteractionSFX(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6D798
		EFabricInteractableType GetInteractableType(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6D6B8
		void GetInteractableName(FText& OutName); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414D6D5D8
		FVector GetInteractableForwardVector(USceneComponent Interactable); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x7FF414D6D4F8
		void GetInteractableDescription(FText& OutDescription); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414D6D418
		FVector GetInteractableComponentLocation(USceneComponent Interactable); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x7FF414D6D338
		float GetContinuousInteractableValueNormalized(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6D258
		EFabricContinuousInteractionDirection GetContinuousInteractableDirection(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6D178
		void EndInteraction(APlayerController PlayerController, bool bWasDragAndDropInteraction); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D6D098
		bool DoesInteractionRequireHoldable(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414D6CFB8
		bool CanInteractWithHoldable(TScriptInterface& Holdable); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414D6CED8
	};


	// Class FabricRuntime.FabricInteractablePlayspaceComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UFabricInteractablePlayspaceComponent : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricInteractablePlayspaceComponent");
			return ret;
		}

		void SetFabricDeviceExistsInPlayspace(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6E2F8
		void OnPlayspaceUserAdded(FPlayspaceUser& PlayspaceUser); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D6E218
		void OnDownloadOnDemandCompleteIndividualClient(FEventMessageTag Channel, FClientFinishedDownloadOnDemand& Context); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D6E138
	};


	// Class FabricRuntime.FabricInteractionTool
	// Inherited from AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x200 (0x1FA8 - 0x1DA8)
	class AFabricInteractionTool : public AFortWeaponRanged	
	{
	public:
		FMulticastInlineDelegate OnInteractionStateChanged; // 0x1DA8(0x10)
		FMulticastInlineDelegate OnCablesGrabbed; // 0x1DB8(0x10)
		FMulticastInlineDelegate OnCablesDropped; // 0x1DC8(0x10)
		FMulticastInlineDelegate OnMetasoundGeneratorCrossfadeStarted; // 0x1DD8(0x10)
		FMulticastInlineDelegate OnZoomLevelChanged; // 0x1DE8(0x10)
		UClass FITSplineMeshComponentClass; // 0x1DF8(0x8)
		USplineComponent SplineComponent; // 0x1E00(0x8)
		TArray SplineMeshComponentArray; // 0x1E08(0x10)
		UMaterialInstanceDynamic SplineMeshMaterialInstance; // 0x1E18(0x8)
		float MaxRange; // 0x1E20(0x4)
		float MinDragAndDropTriggerTime; // 0x1E24(0x4)
		float FiringRate; // 0x1E28(0x4)
		float WipeAnim; // 0x1E2C(0x4)
		float UseWipe; // 0x1E30(0x4)
		int32_t SplineMeshMaterialIndex; // 0x1E34(0x4)
		int32_t CPDUVScale; // 0x1E38(0x4)
		int32_t CPDUVPosition; // 0x1E3C(0x4)
		int32_t CPDWipeAnim; // 0x1E40(0x4)
		int32_t CPDUseWipe; // 0x1E44(0x4)
		int32_t CPDIndex_DeviceType; // 0x1E48(0x4)
		float SplineSectionLength; // 0x1E4C(0x4)
		int32_t MaxSplineSpawnedInAFrame; // 0x1E50(0x4)
		float DeviceTypeValue; // 0x1E54(0x4)
		float FITTargetingAudioPitchMultiplier; // 0x1E58(0x4)
		float FITZoomAudioPitchMultiplier; // 0x1E5C(0x4)
		float SplineEndForwardMultiplier; // 0x1E60(0x4)
		float SplineStartForwardMultiplier; // 0x1E64(0x4)
		UObject HoveredInteractable; // 0x1E68(0x8)
		USceneComponent HoveredInteractableHitComponent; // 0x1E70(0x8)
		UObject PressedInteractable; // 0x1E78(0x8)
		TWeakObjectPtr LastPressedInteractable; // 0x1E80(0x8)
		USceneComponent PressedInteractableHitComponent; // 0x1E88(0x8)
		TWeakObjectPtr InteractableOwnerDevice; // 0x1E90(0x8)
		float AccumulatedDragAndDropTriggerTime; // 0x1E98(0x4)
		FInteractionData ServerInteractionData; // 0x1E9C(0xC)
		unsigned char UnknownData04_6[0x11]; // 0x1EA8(0x11) UNKNOWN PROPERTY
		bool bServerTriggerPressed; // 0x1EB9(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x1EBA(0x1) UNKNOWN PROPERTY
		bool bServerIsHoldingCable; // 0x1EBB(0x1)
		unsigned char UnknownData06_6[0x14]; // 0x1EBC(0x14) UNKNOWN PROPERTY
		FInteractionSplinePoints ServerSplinePoints; // 0x1ED0(0x60)
		float ServerContinuousInteractableValue; // 0x1F30(0x4)
		unsigned char UnknownData07_7[0x74]; // 0x1F34(0x74) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricInteractionTool");
			return ret;
		}

		void UpdateSplineMesh(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A26F8
		void UnholsterWeapon(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140A2618
		void SetPitchMultipliersForTargetingSounds(bool bIsTargetingNow); // Flags: Final|Native|Protected 0x7FF4140A2538
		void ServerSetTriggerPressed(bool bPressed); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF4140A2458
		void ServerSetSplinePoints(FInteractionSplinePoints SplinePoints); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF4140A22B8
		void ServerSetIsHoldingCable(bool bHoldingCable); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF4140A21D8
		void ServerSetInteractionData(FInteractionData NewData); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF4140A2038
		void ServerSetContinuousInteractableValue(float Value); // Flags: Net|Native|Event|Protected|NetServer 0x7FF4140A1F58
		void ServerHandleFITFired(); // Flags: Net|Native|Event|Protected|NetServer 0x7FF4140A1E78
		void OnZoomLevelChanged__DelegateSignature(bool IsZoomed); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140A1D98
		void OnSplineUpdated(EFabricInteractionToolStates NewInteractionState); // Flags: Event|Protected|BlueprintEvent 0x7FF4140A1CB8
		void OnRep_ServerTriggerPressed(); // Flags: Final|Native|Protected 0x7FF4140A1BD8
		void OnRep_ServerIsHoldingCable(); // Flags: Final|Native|Protected 0x7FF4140A1AF8
		void OnRep_ServerInteractionData(); // Flags: Final|Native|Protected 0x7FF4140A1A18
		void OnRep_ServerContinuousInteractableValue(); // Flags: Final|Native|Protected 0x7FF4140A1938
		void OnMetasoundGeneratorCrossfadeStarted__DelegateSignature(float CrossfadeSeconds); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140A1858
		void OnInteractionStateChanged__DelegateSignature(EFabricInteractionToolStates NewState, AFortCreativeDeviceProp Device); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140A1778
		void OnCableHeldStateChanged__DelegateSignature(AFortCreativeDeviceProp Device); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140A1698
		bool IsRunningOnOwningClient(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A15B8
		bool IsHoldingCables(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140A14D8
		void HandleMetasoundGeneratorCrossfade(float CrossfadeSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A13F8
		UObject GetPressedInteractable(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140A1318
		EFabricInteractableType GetHoveredInteractableType(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140A11D0
		USceneComponent GetHoveredInteractableHitComponent(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140A10F0
		EFabricInteractionToolStates GetFabricInteractionToolState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF4140A0FA8
		int32_t GetContinuousStateValue(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF4140A0EC8
		float GetContinuousMovementValue(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF4140A0DE8
		EFabricContinuousInteractionDirection GetContinuousInteractionDirection(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140A0CA0
		float GetContinuousInteractableValueNormalized(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF4140A0BC0
		void DeactiveWeaponAndState(); // Flags: Native|Protected|BlueprintCallable 0x7FF4140A0AE0
		void ClientStopInteracting(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF4140A0A00
		void ClientDeactiveWeaponAndState(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF4140A0920
		void ClearSplineMesh(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140A0840
	};


	// Class FabricRuntime.FabricIslandSettingsInitializedInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricIslandSettingsInitializedInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricIslandSettingsInitializedInterface");
			return ret;
		}

		void OnFabricIslandSettingsInitialized(); // Flags: Event|Public|BlueprintEvent 0x7FF414D6E3D8
	};


	// Class FabricRuntime.FabricMeshModifierBase
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x8 (0x330 - 0x328)
	class UFabricMeshModifierBase : public UFabricModulatable	
	{
	public:
		EFabricCloneTransformBehavior CloneBehavior; // 0x328(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x329(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshModifierBase");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMeshModifierTranslate
	// Inherited from UFabricMeshModifierBase -> UFabricModulatable -> UObject
	// Size: 0x18 (0x348 - 0x330)
	class UFabricMeshModifierTranslate : public UFabricMeshModifierBase	
	{
	public:
		FVector PositionOffset; // 0x330(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshModifierTranslate");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMeshModifierRotate
	// Inherited from UFabricMeshModifierBase -> UFabricModulatable -> UObject
	// Size: 0x18 (0x348 - 0x330)
	class UFabricMeshModifierRotate : public UFabricMeshModifierBase	
	{
	public:
		FRotator RotationAmount; // 0x330(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshModifierRotate");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMeshModifierScale
	// Inherited from UFabricMeshModifierBase -> UFabricModulatable -> UObject
	// Size: 0x18 (0x348 - 0x330)
	class UFabricMeshModifierScale : public UFabricMeshModifierBase	
	{
	public:
		FVector ScaleFactor; // 0x330(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshModifierScale");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMeshModifierClone
	// Inherited from UFabricMeshModifierBase -> UFabricModulatable -> UObject
	// Size: 0x28 (0x358 - 0x330)
	class UFabricMeshModifierClone : public UFabricMeshModifierBase	
	{
	public:
		int32_t CloneCount; // 0x330(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		FVector PerCloneTranslation; // 0x338(0x18)
		bool bCentered; // 0x350(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x351(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshModifierClone");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMeshModifierRandomize
	// Inherited from UFabricMeshModifierBase -> UFabricModulatable -> UObject
	// Size: 0x68 (0x398 - 0x330)
	class UFabricMeshModifierRandomize : public UFabricMeshModifierBase	
	{
	public:
		float LocationRandLimit; // 0x330(0x4)
		float RotationRandLimit; // 0x334(0x4)
		float ScaleRandLimit; // 0x338(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x33C(0x4) UNKNOWN PROPERTY
		FVector LocationRandRange; // 0x340(0x18)
		FVector RotationRandRange; // 0x358(0x18)
		FVector ScaleRandRangeAdditive; // 0x370(0x18)
		float ScaleRandRangeRangeBase; // 0x388(0x4)
		bool bUniformScale; // 0x38C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x38D(0x3) UNKNOWN PROPERTY
		FRandomStream RandomStream; // 0x390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshModifierRandomize");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMeshTreeNode
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UFabricMeshTreeNode : public UObject	
	{
	public:
		UFabricMeshModifierBase MeshModifier; // 0x28(0x8)
		FFabricMeshProviderMeshReferenceParams Params; // 0x30(0x28)
		FFabricMeshProviderMeshReference MeshProviderReference; // 0x58(0x38)
		TArray Children; // 0x90(0x10)
		uint32_t LastCalculatedChecksum; // 0xA0(0x4)
		bool bAllowChecksumCalculation; // 0xA4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshTreeNode");
			return ret;
		}

		void Reset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6E678
		TArray GenerateMeshInstanceReferences(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6E598
		void CopyProperties(UFabricMeshTreeNode Other); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6E4B8
	};


	// Class FabricRuntime.FabricMeshProviderBase
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UFabricMeshProviderBase : public UObject	
	{
	public:
		FFabricMeshProviderMeshReference ReferenceMesh; // 0x28(0x38)
		TArray InstanceMeshes; // 0x60(0x10)
		float CurrentCableFloatValue; // 0x70(0x4)
		float CurrentCableFloatDirection; // 0x74(0x4)
		bool bCurrentCableFloatDirty; // 0x78(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshProviderBase");
			return ret;
		}

		void SetReferenceMesh(FFabricMeshProviderMeshReference& InMesh); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D6E758
	};


	// Class FabricRuntime.FabricMetaSoundPatchWrapper
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x460 (0x788 - 0x328)
	class UFabricMetaSoundPatchWrapper : public UFabricModulatable	
	{
	public:
		FName EnabledStateInputName; // 0x328(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr MetaSoundPatch; // 0x330(0x20)
		TMap UserOptionsToNodeInputs; // 0x350(0x50)
		TArray PerPlatformInputBools; // 0x3A0(0x10)
		TArray PerPlatformInputInts; // 0x3B0(0x10)
		TArray PerPlatformInputFloats; // 0x3C0(0x10)
		TArray DirectInputs; // 0x3D0(0x10)
		FFabricMetaSoundPatchWrapperBinding SimpleSignalOutputBinding; // 0x3E0(0x50)
		FMulticastInlineDelegate OnSimpleSignalBindingUpdate; // 0x430(0x10)
		FName VisibleInputParamName; // 0x440(0x4)
		FName AudibleInputParamName; // 0x444(0x4)
		bool bCanConsumeVisibleFlag; // 0x448(0x1)
		bool bCanConsumeAudibleFlag; // 0x449(0x1)
		bool bIsVisible; // 0x44A(0x1)
		bool bIsAudible; // 0x44B(0x1)
		unsigned char UnknownData08_6[0x24]; // 0x44C(0x24) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMetaSoundOutputIntChangedBatch; // 0x470(0x10)
		FMulticastInlineDelegate OnMetaSoundOutputFloatChangedBatch; // 0x480(0x10)
		UFabricMetaSoundManagerComponent CurrentManager; // 0x490(0x8)
		TWeakObjectPtr TickSubsystem; // 0x498(0x8)
		FFabricMetaSoundNodeInfo CurrentNode; // 0x4A0(0xF0)
		TWeakObjectPtr PositionalProxyActor; // 0x590(0x8)
		unsigned char UnknownData09_6[0x20]; // 0x598(0x20) UNKNOWN PROPERTY
		TWeakObjectPtr CurrentAudioComponent; // 0x5B8(0x8)
		TWeakObjectPtr NewAudioComponent; // 0x5C0(0x8)
		unsigned char UnknownData10_6[0x10]; // 0x5C8(0x10) UNKNOWN PROPERTY
		FName CombinerMetaSoundType; // 0x5D8(0x4)
		FName AnalyzerMetaSoundType; // 0x5DC(0x4)
		TArray MetaSoundRuntimeInputInfos; // 0x5E0(0x10)
		TArray ConnectedInputWrappers; // 0x5F0(0x10)
		TArray PendingInputWrappers; // 0x600(0x10)
		TArray PendingOutputWrappers; // 0x610(0x10)
		FFabricMetaSoundConnectionBuilder ConnectionBuilder; // 0x620(0xC0)
		unsigned char UnknownData11_6[0x50]; // 0x6E0(0x50) UNKNOWN PROPERTY
		TArray CombinersInUse; // 0x730(0x10)
		TArray ConnectedOutputWrappers; // 0x740(0x10)
		EFabricMetaSoundPatchWrapperQuality PatchWrapperQuality; // 0x750(0x1)
		unsigned char UnknownData12_6[0x17]; // 0x751(0x17) UNKNOWN PROPERTY
		UMetaSoundPatch LoadedMetaSoundPatch; // 0x768(0x8)
		unsigned char UnknownData13_7[0x18]; // 0x770(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundPatchWrapper");
			return ret;
		}

		void SetStringInput(FName& MetaSoundInputName, FString Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D6FFD8
		void SetRunsOnServer(bool bAllowRunOnServer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6FEF8
		void SetPositionalProxyActor(AActor InLocationProxyActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6FE18
		void SetNodeEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6FD38
		void SetNodeCanBePooled(bool bInNodeCanbePooled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6FC58
		void SetIsAudible(bool bInIsAudible); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D6FB78
		void SetIntInput(FName& MetaSoundInputName, int32_t Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D6FA98
		void SetFloatInput(FName& MetaSoundInputName, float Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D6F9B8
		void SetEnumInput(FName& MetaSoundInputName, char Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D6F8D8
		void SetBoolInput(FName& MetaSoundInputName, bool bValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D6F7F8
		void RemoveFromCurrentGraph(); // Flags: Native|Public|BlueprintCallable 0x7FF414D6F718
		void OnMetaSoundOutputValueChanged(FName OutputName, FMetaSoundOutput& MetaSoundOutput); // Flags: Native|Protected|HasOutParms 0x7FF414D6F638
		void OnMetaSoundOutputChanged(FName OutputName, FMetaSoundOutput& Output); // Flags: Final|Native|Private|HasOutParms 0x7FF414D6F558
		void OnMetasoundManagerEndPlay(); // Flags: Final|Native|Protected 0x7FF414D6F478
		void OnConnectedModulatorNodeCreated(UFabricMetaSoundPatchWrapper EnabledPatchWrapper); // Flags: Final|Native|Private 0x7FF414D6F398
		void OnConnectedModulatorEnabledChanged(UFabricMetaSoundPatchWrapper EnabledPatchWrapper, bool bEnabled); // Flags: Final|Native|Private 0x7FF414D6F2B8
		void OnAddedToManagerGraph(UFabricMetaSoundManagerComponent Manager); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D6F1D8
		void NeedsParameterPackUpdate(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D6F0F8
		void NeedsOutputWatcherUpdate(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D6F018
		void NeedsGeneratorHandleUpdate(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D6EF38
		void NeedsAnalyzerParameterPackUpdate(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D6EE58
		bool GetRunsOnServer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6ED78
		bool GetNodeEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6EC98
		bool GetNodeCanBePooled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6EBB8
		UMusicClockComponent GetMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6EAD8
		TSet GetMetaSoundInputNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6E9F8
		void AddToManagerGraph(UFabricMetaSoundManagerComponent Manager); // Flags: Native|Public|BlueprintCallable 0x7FF414D6E918
		bool AddToGraphOnFirstConnect(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D6E838
	};


	// Class FabricRuntime.FabricMetaSoundAudioPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x88 (0x810 - 0x788)
	class UFabricMetaSoundAudioPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x788(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr FromStartPatch; // 0x790(0x20)
		TWeakObjectPtr FromCurrentPatch; // 0x7B0(0x20)
		UMetaSoundPatch LoadedFromStartPatch; // 0x7D0(0x8)
		UMetaSoundPatch LoadedFromCurrentPatch; // 0x7D8(0x8)
		FName VolumeInputName; // 0x7E0(0x4)
		FName StartTimeInputName; // 0x7E4(0x4)
		FName StartTimestampInputName; // 0x7E8(0x4)
		unsigned char UnknownData03_7[0x24]; // 0x7EC(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundAudioPatchWrapper");
			return ret;
		}

		void SetAudio(USoundBase InAudio); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D700B8
	};


	// Class FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0xE0 (0x868 - 0x788)
	class UFabricMetaSoundDrumPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x788(0x8) UNKNOWN PROPERTY
		FName PitchSampleInputName; // 0x790(0x4)
		FName SlotKitInputName; // 0x794(0x4)
		TArray PitchSampleParams; // 0x798(0x10)
		TArray SlotLinkParams; // 0x7A8(0x10)
		TArray SlotUnlinkedKitParams; // 0x7B8(0x10)
		FString CurrentKitParam; // 0x7C8(0x10)
		int32_t NumSamplesPerKit; // 0x7D8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x7DC(0x4) UNKNOWN PROPERTY
		TArray DrumAmplitudes; // 0x7E0(0x10)
		FMulticastInlineDelegate OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate; // 0x7F0(0x10)
		FMulticastInlineDelegate OnFabricMetaSoundDrumPlayerSampleBanksLoaded; // 0x800(0x10)
		unsigned char UnknownData05_6[0x48]; // 0x810(0x48) UNKNOWN PROPERTY
		TArray CurrentKitSamples; // 0x858(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper");
			return ret;
		}

		void SlotUnlinkedKitParamChanged(int32_t PitchSampleIndex, int32_t Value); // Flags: Final|Native|Private 0x7FF414D70518
		void SlotLinkedParamChanged(int32_t PitchSampleIndex, bool Value); // Flags: Final|Native|Private 0x7FF414D70438
		void PitchSampleParamChanged(int32_t PitchSampleIndex, int32_t Value); // Flags: Final|Native|Private 0x7FF414D70358
		void LoadDrumPlayerSampleBanks(TArray& SampleBankArray, TSet& KitNumbersToLoad); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D70278
		void KitIndexChanged(FName& Param, int32_t Value); // Flags: Final|Native|Private|HasOutParms 0x7FF414D70198
	};


	// Class FabricRuntime.FabricMetaSoundWetDryPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0xB0 (0x838 - 0x788)
	class UFabricMetaSoundWetDryPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		FFabricMetaSoundPatchWrapperWetDryOutputBinding WetDryOutputBinding; // 0x788(0xA0)
		FMulticastInlineDelegate OnWetDryOutputSignalUpdate; // 0x828(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundWetDryPatchWrapper");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMetaSoundEchoPatchWrapper
	// Inherited from UFabricMetaSoundWetDryPatchWrapper -> UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x18 (0x850 - 0x838)
	class UFabricMetaSoundEchoPatchWrapper : public UFabricMetaSoundWetDryPatchWrapper	
	{
	public:
		bool bAllowWetSignalWaveformTexture; // 0x838(0x1)
		bool bAllowDrySignalWaveformTexture; // 0x839(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x83A(0x6) UNKNOWN PROPERTY
		UFabricWaveformTexture WetSignalWaveformTexture; // 0x840(0x8)
		UFabricWaveformTexture DrySignalWaveformTexture; // 0x848(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundEchoPatchWrapper");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0xE8 (0x870 - 0x788)
	class UFabricMetaSoundInstrumentPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		FMulticastInlineDelegate OnFFTResultsUpdated; // 0x788(0x10)
		FFabricMetaSoundPatchWrapperBinding FFTAnalysisOutputBinding; // 0x798(0x50)
		int32_t FFTCPDStartIndex; // 0x7E8(0x4)
		int32_t FFTLength; // 0x7EC(0x4)
		unsigned char UnknownData01_6[0x78]; // 0x7F0(0x78) UNKNOWN PROPERTY
		UFusionPatch CurrentFusionPatch; // 0x868(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper");
			return ret;
		}

		void SetFusionPatch(UFusionPatch FusionPatch); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D706D8
		void DriveFFTDataOnPrimitive(UPrimitiveComponent Primitive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D705F8
	};


	// Class FabricRuntime.FabricMetaSoundModulatorPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x20 (0x7A8 - 0x788)
	class UFabricMetaSoundModulatorPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		FMulticastInlineDelegate OnPatchWrapperVisibilityChanged; // 0x788(0x10)
		UPlaylistUserOptionBase CurrentUserOption; // 0x798(0x8)
		UFabricMetaSoundUserOption MetaSoundUserOption; // 0x7A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMetaSoundLFOPatchWrapper
	// Inherited from UFabricMetaSoundModulatorPatchWrapper -> UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x18 (0x7C0 - 0x7A8)
	class UFabricMetaSoundLFOPatchWrapper : public UFabricMetaSoundModulatorPatchWrapper	
	{
	public:
		UFabricFloatProviderWave LFOFloatProvider; // 0x7A8(0x8)
		FName FreePhaseStartName; // 0x7B0(0x4)
		FName RandomSeedInputName; // 0x7B4(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x7B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper");
			return ret;
		}

		void UpdateRandomSeed(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D707B8
	};


	// Class FabricRuntime.FabricMetaSoundManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x998 (0xA38 - 0xA0)
	class UFabricMetaSoundManagerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData13_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr HarmonixMusicProviderPatch; // 0xA8(0x20)
		TWeakObjectPtr HarmonixMetronomeClockPatch; // 0xC8(0x20)
		TWeakObjectPtr HarmonixTempoClockPatch; // 0xE8(0x20)
		TWeakObjectPtr HarmonixTransportPatch; // 0x108(0x20)
		TWeakObjectPtr UserOptionConverterNode; // 0x128(0x20)
		FFabricMetaSoundUtilityPatches MidiStreamUtilityPatches; // 0x148(0x88)
		FFabricMetaSoundUtilityPatches AudioUtilityPatches; // 0x1D0(0x88)
		FFabricMetaSoundUtilityPatches FloatUtilityPatches; // 0x258(0x88)
		FName MusicProviderVolumeName; // 0x2E0(0x4)
		FName MusicProviderRootNoteName; // 0x2E4(0x4)
		FName MusicProviderScaleName; // 0x2E8(0x4)
		FName TransportProviderPlayTriggerName; // 0x2EC(0x4)
		FName TransportProviderDelayedRestartTriggerName; // 0x2F0(0x4)
		FName TransportProviderRestartTriggerName; // 0x2F4(0x4)
		FName TransportProviderSeekTriggerName; // 0x2F8(0x4)
		FName TransportProviderPauseTriggerName; // 0x2FC(0x4)
		FName TransportProviderContinueTriggerName; // 0x300(0x4)
		FName TransportProviderStopTriggerName; // 0x304(0x4)
		FName TransportProviderSeekTargetName; // 0x308(0x4)
		FName ClockProviderTempoName; // 0x30C(0x4)
		FName ClockProviderSpeedName; // 0x310(0x4)
		FName ClockProviderTimeSigNumName; // 0x314(0x4)
		FName ClockProviderTimeSignDenomName; // 0x318(0x4)
		FName ClockProviderMidiFileInName; // 0x31C(0x4)
		FName ClockProviderLoopName; // 0x320(0x4)
		FName UserOptionConverterCountInName; // 0x324(0x4)
		float CrossfadeSeconds; // 0x328(0x4)
		float RebuildTimeOutSeconds; // 0x32C(0x4)
		float BlockRateOverride; // 0x330(0x4)
		FName QualityOverride; // 0x334(0x4)
		UMidiFile DefaultMidiFile; // 0x338(0x8)
		unsigned char UnknownData14_6[0x30]; // 0x340(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMetasoundGeneratorCrossfadeStarted; // 0x370(0x10)
		unsigned char UnknownData15_6[0x50]; // 0x380(0x50) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMetasoundClockAuthorityChanged; // 0x3D0(0x10)
		unsigned char UnknownData16_6[0x18]; // 0x3E0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPlayStateChanged; // 0x3F8(0x10)
		FMulticastInlineDelegate OnMusicEventPriorityChanged; // 0x408(0x10)
		unsigned char UnknownData17_6[0x10]; // 0x418(0x10) UNKNOWN PROPERTY
		TArray SignificanceRuntimeBuckets; // 0x428(0x10)
		UFabricSignificanceAsset SignificanceBasedUpdate; // 0x438(0x8)
		float InitialCooldownTimeInSeconds; // 0x440(0x4)
		unsigned char UnknownData18_6[0x4]; // 0x444(0x4) UNKNOWN PROPERTY
		UMetaSoundSourceBuilder SourceBuilder; // 0x448(0x8)
		UMusicClockComponent MusicClock; // 0x450(0x8)
		TArray PlaybackAudioComponents; // 0x458(0x10)
		TArray ServerPlaybackComponents; // 0x468(0x10)
		unsigned char UnknownData19_6[0x50]; // 0x478(0x50) UNKNOWN PROPERTY
		FFabricTransportRequestConfig CurrentTransportRequestLock; // 0x4C8(0xC)
		unsigned char UnknownData20_6[0xC]; // 0x4D4(0xC) UNKNOWN PROPERTY
		TWeakObjectPtr TempoMapMidiFile; // 0x4E0(0x8)
		FFabricMetaSoundNodeInfo HarmonixMusicProviderNode; // 0x4E8(0xF0)
		FFabricMetaSoundNodeInfo HarmonixMetronomeClockNode; // 0x5D8(0xF0)
		FFabricMetaSoundNodeInfo HarmonixMidiTempoClockNode; // 0x6C8(0xF0)
		FFabricMetaSoundNodeInfo HarmonixTransportNode; // 0x7B8(0xF0)
		FMetaSoundBuilderNodeOutputHandle OnPlayNodeOutput; // 0x8A8(0x20)
		FMetaSoundBuilderNodeInputHandle OnFinishedNodeInput; // 0x8C8(0x20)
		TArray AudioOutNodeInputs; // 0x8E8(0x10)
		unsigned char UnknownData21_6[0x48]; // 0x8F8(0x48) UNKNOWN PROPERTY
		TMap FreeMetaSoundNodes; // 0x940(0x50)
		TMap UtilityNodeTypesToPatches; // 0x990(0x50)
		unsigned char UnknownData22_6[0x10]; // 0x9E0(0x10) UNKNOWN PROPERTY
		bool bGraphDirty; // 0x9F0(0x1)
		bool bIsAudioless; // 0x9F1(0x1)
		bool bHasCompletedInitialCooldown; // 0x9F2(0x1)
		EFabricMetasoundClock CurrentClockType; // 0x9F3(0x1)
		EFabricMetasoundClock DefaultClockType; // 0x9F4(0x1)
		EFabricMetasoundPlayState CurrentPlayState; // 0x9F5(0x1)
		EFabricMetasoundPlayState PlayStateAfterRebuild; // 0x9F6(0x1)
		EJamFabricSyncType JamSyncType; // 0x9F7(0x1)
		EFabricMetasoundMusicEventPriority MusicEventPriority; // 0x9F8(0x1)
		unsigned char UnknownData23_6[0x3]; // 0x9F9(0x3) UNKNOWN PROPERTY
		FName ClientCurrentAudibleMusicEventGroup; // 0x9FC(0x4)
		FGameplayTag AboveEmotesTag; // 0xA00(0x4)
		FGameplayTag BelowEmotesTag; // 0xA04(0x4)
		float ReplicatedReceivedSignalBufferDuration; // 0xA08(0x4)
		unsigned char UnknownData24_6[0x26]; // 0xA0C(0x26) UNKNOWN PROPERTY
		EFabricMetasoundUtilityLoadedBroadcastBy LastBroadcastBy; // 0xA32(0x1)
		unsigned char UnknownData25_7[0x5]; // 0xA33(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundManagerComponent");
			return ret;
		}

		void UnregisterAsAudible(AActor Device); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D72C78
		bool StopMetasound(FFabricTransportRequestConfig& PlayConfig); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D72B98
		void SetTimeSignature(int32_t Numerator, int32_t Denominator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D72AB8
		void SetTempo(float Tempo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D729D8
		void SetSpeed(float Speed); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D728F8
		void SetMusicKey(EMusicKey Key, EMusicKeyMode Mode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D72818
		void SetMusicEventPriority(EFabricMetasoundMusicEventPriority InMusicEventPriority); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D72738
		void SetMusicClock(UMusicClockComponent MusicClockComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D72658
		void SetMidiFile(UMidiFile MidiFile); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D72578
		void SetCurrentJamSyncType(EJamFabricSyncType& InJamSyncType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D72498
		void SetClockAuthority(FFabricTransportRequestConfig& InFabricTransportRequest, EFabricMetasoundClock InClockType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D723B8
		void SetAudioComponents(TArray AudioComponents); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D722D8
		void SeekToTimestamp(FMusicTimestamp& Timestamp); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D721F8
		void SeekToSeconds(float Seconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D72118
		void SeekToMs(float Ms); // Flags: Final|Native|Public 0x7FF414D72038
		void RestartMetasoundPlayback(FFabricTransportRequestConfig& InFabricTransportRequest); // Flags: Final|Native|Public|HasOutParms 0x7FF414D71F58
		void ReleaseClockAuthority(FFabricTransportRequestConfig& InFabricTransportRequest); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D71E78
		void RegisterAsAudible(AActor Device, FName& AudibleEventGroup); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D71D98
		bool PlayMetasound(FFabricTransportRequestConfig& PlayConfig); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D71CB8
		bool PauseMetasound(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D71BD8
		void OnGeneratorJustStarted(int32_t ComponentIndex); // Flags: Final|Native|Private 0x7FF414D71AF8
		void NotifyGraphChanged(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D71A18
		void InvalidateMetasoundGeneratorHandle(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D71938
		bool HasClockAuthority(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D71858
		FGameplayTag GetMusicEventTag(EFabricMetasoundMusicEventPriority InMusicEventPriority); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D71778
		EFabricMetasoundMusicEventPriority GetMusicEventPriority(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D71698
		UMusicClockComponent GetMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D715B8
		FName GetMetasoundOutputNodeName(FName NodeName, FName OutputName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D714D8
		FFabricMetaSoundNodeInfo GetMetaSoundNodeForWrapper(UFabricMetaSoundPatchWrapper PatchWrapper); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D713F8
		FName GetMetasoundInputNodeName(FName NodeName, FName InputName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D71318
		EFabricMetasoundPlayState GetCurrentPlaystate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D71238
		void GetCurrentPlaybackAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D71158
		void GetCurrentMusicEventTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D71078
		EJamFabricSyncType GetCurrentJamSyncType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D70F98
		EFabricMetasoundClock GetCurrentClockType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D70EB8
		FName GetCurrentClientAudibleMusicEventGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D70DD8
		UMetaSoundSourceBuilder GetBuilder(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D70CF8
		void FreeMetaSoundNode(FFabricMetaSoundNodeInfo& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D70C18
		void ClearClockAuthorityIfStopped(FFabricTransportRequestConfig& InFabricTransportRequest); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D70B38
		bool AreAllPatchesReady(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D70A58
		void AddOutputNodeForOutputVertex(FMetaSoundBuilderNodeOutputHandle& OutputVertex, FName& NodeName, FName& OutOutputName, EMetaSoundBuilderResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D70978
		void AddInputNodeForNodeByNameBP(FFabricMetaSoundNodeInfo& InOutNode, EFabricUserOptionType UserOptionType, FName& InputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D70898
	};


	// Class FabricRuntime.FabricNoteReceivedPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x48 (0x7D0 - 0x788)
	class UFabricNoteReceivedPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		FName NoteOutputName; // 0x788(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x78C(0x4) UNKNOWN PROPERTY
		TArray TriggerNoteParams; // 0x790(0x10)
		FMulticastInlineDelegate OnMatchingMidiEventPassed; // 0x7A0(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x7B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricNoteReceivedPatchWrapper");
			return ret;
		}

		void OnTriggerNoteChanged(int32_t NoteIndex, bool bTriggerActive); // Flags: Final|Native|Protected 0x7FF414D72E38
		void OnMetaSoundMidiEventPassed(FName OutputName, FMetaSoundOutput& Output); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D72D58
	};


	// Class FabricRuntime.FabricNoteTriggerPatchWrapper
	// Inherited from UFabricNoteReceivedPatchWrapper -> UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x28 (0x7F8 - 0x7D0)
	class UFabricNoteTriggerPatchWrapper : public UFabricNoteReceivedPatchWrapper	
	{
	public:
		FString OctaveParam; // 0x7D0(0x10)
		FMulticastInlineDelegate OnAnyMidiEventPassed; // 0x7E0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x7F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricNoteTriggerPatchWrapper");
			return ret;
		}

		void OnOctaveChanged(FName& ParamName, int32_t InOctave); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D72F18
	};


	// Class FabricRuntime.FabricMetaSoundTreeNode
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFabricMetaSoundTreeNode : public UObject	
	{
	public:
		EFabricMetaSoundPinDirection PinDirection; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		UFabricMetaSoundPatchWrapper AssociatedPatchWrapper; // 0x30(0x8)
		TArray Children; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundTreeNode");
			return ret;
		}

		void Reset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D731B8
		TArray GetValidChildren(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D730D8
		void ConnectToChildNodes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D72FF8
	};


	// Class FabricRuntime.FabricMetaSoundSequencerPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x8 (0x790 - 0x788)
	class UFabricMetaSoundSequencerPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		UMidiStepSequence CurrentStepSequence; // 0x788(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper");
			return ret;
		}

		void SetMidiStepSequence(UMidiStepSequence StepSequence); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D73298
	};


	// Class FabricRuntime.FabricMetaSoundSpeakerPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x28 (0x7B0 - 0x788)
	class UFabricMetaSoundSpeakerPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		TArray EqBands; // 0x788(0x10)
		FMulticastInlineDelegate OnFabricMetaSoundSpeakerPatchEqBandUpdate; // 0x798(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x7A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper");
			return ret;
		}

		void SetAudioBusFromSourceBus(USoundSourceBus Bus); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D73378
	};


	// Class FabricRuntime.FabricMetaSoundSplitterPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x58 (0x7E0 - 0x788)
	class UFabricMetaSoundSplitterPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x788(0x8) UNKNOWN PROPERTY
		TMap SplitterNodes; // 0x790(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundSplitterPatchWrapper");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMetaSoundTickSubsystem
	// Inherited from UFortManagedTickSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1E0 (0x2B0 - 0xD0)
	class UFabricMetaSoundTickSubsystem : public UFortManagedTickSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x1E0]; // 0xD0(0x1E0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundTickSubsystem");
			return ret;
		}
	};


	// Class FabricRuntime.FabricMidiFollowComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UFabricMidiFollowComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnMidiFinished; // 0xA0(0x10)
		FMulticastInlineDelegate OnFollowSourcesSet; // 0xB0(0x10)
		unsigned char UnknownData02_6[0x48]; // 0xC0(0x48) UNKNOWN PROPERTY
		FMusicTimestamp SelectedMidiTrackStartTimestamp; // 0x108(0x8)
		FMusicTimestamp ExternalSourceStartTimestamp; // 0x110(0x8)
		FMusicTimestamp SelectedMidiTrackEndTimestamp; // 0x118(0x8)
		FMusicTimestamp ExternalSourceEndTimestamp; // 0x120(0x8)
		FMidiFollowData MidiFollowData; // 0x128(0xC)
		EFabricMidiPlayerLoopType DesiredLoopBehaviour; // 0x134(0x1)
		unsigned char UnknownData03_7[0x1B]; // 0x135(0x1B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMidiFollowComponent");
			return ret;
		}

		void StopFollowing(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D73B58
		void StartFollowing(FMusicTimestamp InStartTimestamp); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D73A78
		void SetMidiFollowData(FMidiFollowData& InMidiFollowData, int32_t InMidiTrackIndex, EFabricMidiPlayerLoopType InLoopBehaviour); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D73998
		void SetFabricMetasoundManager(UFabricMetaSoundManagerComponent InFabricMetasoundManager); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D738B8
		void SetControllingTimeline(bool bInControllingTimeline); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D737D8
		float GetFollowStartTimeSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D736F8
		FName GetFollowName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D73618
		float GetFollowLengthSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D73538
		int32_t ClampSelectedMidiIndex(UMidiFile InMidiFile, int32_t InMidiTrackIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D73458
	};


	// Class FabricRuntime.FabricMIDIPlayerPatchWrapper
	// Inherited from UFabricNoteReceivedPatchWrapper -> UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x30 (0x800 - 0x7D0)
	class UFabricMIDIPlayerPatchWrapper : public UFabricNoteReceivedPatchWrapper	
	{
	public:
		FName MidiTrackIndexUserOptionName; // 0x7D0(0x4)
		FName EnableMidiOutputName; // 0x7D4(0x4)
		FName TempoMapMidiOutName; // 0x7D8(0x4)
		FName LoopMidiName; // 0x7DC(0x4)
		UMidiFile CurrentMidiFile; // 0x7E0(0x8)
		int32_t CurrentMidiTrackIndex; // 0x7E8(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x7EC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMIDIPlayerPatchWrapper");
			return ret;
		}

		void SetMidiOutputEnabled(bool bMidiOutputEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D73ED8
		void SetMidiLooping(bool bMidiLoop); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D73DF8
		void SetMidiFile(UMidiFile MidiFile); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D73D18
		void SetControlsTempo(bool bInControlsTempo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D73C38
	};


	// Class FabricRuntime.FabricModulator
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricModulator : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricModulator");
			return ret;
		}
	};


	// Class FabricRuntime.FabricModulatorSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricModulatorSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricModulatorSource");
			return ret;
		}

		UPlaylistUserOptionBase GetUserOption(FString Property); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D74098
		void GetModulators(UFabricModulatable Modulatable); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D73FB8
	};


	// Class FabricRuntime.FabricModulatorDevice
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFabricModulatorDevice : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricModulatorDevice");
			return ret;
		}

		void SetUserOption(EFabricUserOptionType UserOptionType, UPlaylistUserOptionBase UserOption, UObject ModulatorObject); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D74178
	};


	// Class FabricRuntime.FabricProgressorManager
	// Inherited from UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UFabricProgressorManager : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGlobalProgressionChanged; // 0xA8(0x10)
		bool bHasActiveGlobalProgression; // 0xB8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t GlobalPresetNumber; // 0xBC(0x4)
		FFabricProgressionPreset GlobalProgression; // 0xC0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricProgressorManager");
			return ret;
		}

		void SetGlobalProgression(FFabricProgressionPreset& InProgression, int32_t InPresetNumber); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140A9080
		void OnProgressionChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140A8FA0
		bool IsProgressionGlobal(FFabricProgressionPreset& InProgression); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4140A8EC0
		bool HasActiveGlobalProgression(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A8DE0
		FFabricProgressionPreset GetGlobalProgression(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A8C40
		int32_t GetGlobalPresetNumber(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140A8B60
	};


	// Class FabricRuntime.FabricRegisteredPlayerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFabricRegisteredPlayerComponent : public UActorComponent	
	{
	public:
		bool bEnabled; // 0xA0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		float OnScreenMessageTime; // 0xA4(0x4)
		int32_t CurrentMessageIndex; // 0xA8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricRegisteredPlayerComponent");
			return ret;
		}

		void LogRegisteredPlayerDiagnostic(FString Diagnostic, AController Controller, bool bAsLog, bool bAsScreenMessage); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414D74258
	};


	// Class FabricRuntime.FabricSteppedPreviewFXComponent
	// Inherited from UInstancedStaticMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x950 - 0x8E0)
	class UFabricSteppedPreviewFXComponent : public UInstancedStaticMeshComponent	
	{
	public:
		int32_t NumberOfSteps; // 0x8E0(0x4)
		bool bManuallySpaceMeshInstances; // 0x8E4(0x1)
		bool bAlignToTransformCenter; // 0x8E5(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x8E6(0x2) UNKNOWN PROPERTY
		float CenterAlignmentBounds; // 0x8E8(0x4)
		float DistanceBetweenInstances; // 0x8EC(0x4)
		float DistanceBetweenTripletIntances; // 0x8F0(0x4)
		float DistanceBetweenInstanceSets; // 0x8F4(0x4)
		float DistanceBetweenTripletInstanceSets; // 0x8F8(0x4)
		EFabricNoteStyle NoteStyle; // 0x8FC(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x8FD(0x3) UNKNOWN PROPERTY
		int32_t CPDDeviceEnabled; // 0x900(0x4)
		int32_t CPDNumSteps; // 0x904(0x4)
		int32_t PICDNoteOn; // 0x908(0x4)
		int32_t PICDNoteLength; // 0x90C(0x4)
		int32_t PICDSpanLength; // 0x910(0x4)
		int32_t PICDNoteTime; // 0x914(0x4)
		int32_t PICDGenericFloatIndex; // 0x918(0x4)
		float LengthStepBeats; // 0x91C(0x4)
		float StepLengthQuarterNotes; // 0x920(0x4)
		float StepBeatScale; // 0x924(0x4)
		float StepBeatOffset; // 0x928(0x4)
		float LengthTrackBeats; // 0x92C(0x4)
		double InstanceSpace; // 0x930(0x8)
		double InstanceSetSpace; // 0x938(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x940(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricSteppedPreviewFXComponent");
			return ret;
		}

		void UpdateStepData(int32_t Index, bool bMarkRenderStateDirty); // Flags: Native|Protected|BlueprintCallable 0x7FF414D752F8
		void UpdateExistingTransforms(int32_t NumInstances, int32_t NumSteps); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D75218
		void UpdateDeviceEnabledFX(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D75138
		void UpdateAllCurrentStepData(int32_t NumSteps, float StepLengthBeats); // Flags: Native|Protected|BlueprintCallable 0x7FF414D75058
		void SetSpanLength(int32_t InstanceIndex, float SpanLengthBeats); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D74F78
		void SetNumSteps(int32_t NumSteps); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D74E98
		void SetNoteTime(int32_t InstanceIndex, float NoteTimeOffsetBeats); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D74DB8
		void SetNoteOn(int32_t InstanceIndex, float NoteOn, bool bMarkRenderStateDirty); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D74CD8
		void SetNoteLength(int32_t InstanceIndex, float NoteLengthBeats); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D74BF8
		void SetGenericFloatValue(int32_t InstanceIndex, float FloatValue, bool bMarkRenderStateDirty); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D74B18
		void OnQuarterNotesLengthChanged(float QuarterNoteLength); // Flags: Native|Protected 0x7FF414D74A38
		void OnPageChanged(int32_t CurrentPage); // Flags: Native|Protected 0x7FF414D74958
		void OnNumTracksChanged(int32_t NumTracks); // Flags: Native|Protected 0x7FF414D74878
		void OnNumStepsChanged(int32_t NumSteps); // Flags: Native|Protected 0x7FF414D74798
		void OnNoteStyleChanged(EFabricNoteStyle Style); // Flags: Native|Protected 0x7FF414D746B8
		void OnBeatScaleChanged(float BeatScale); // Flags: Native|Protected 0x7FF414D745D8
		void OnBeatOffsetChanged(float BeatOffset); // Flags: Native|Protected 0x7FF414D744F8
		float GetNoteOn(int32_t InstanceIndex); // Flags: Native|Protected|BlueprintCallable 0x7FF414D74418
		void ConstructPreviewVisuals(int32_t NumSteps, float StepBeatLength, bool bForceUpdateTransform, bool bInTestNotesOn); // Flags: Native|Public|BlueprintCallable 0x7FF414D74338
	};


	// Class FabricRuntime.FabricSequencerPreviewFXComponent
	// Inherited from UFabricSteppedPreviewFXComponent -> UInstancedStaticMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x960 - 0x948)
	class UFabricSequencerPreviewFXComponent : public UFabricSteppedPreviewFXComponent	
	{
	public:
		TWeakObjectPtr StepSequencer; // 0x948(0x8)
		TWeakObjectPtr StepSequencerGrid; // 0x950(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x958(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricSequencerPreviewFXComponent");
			return ret;
		}

		void UpdateNoteOn(int32_t Index, int32_t NumSteps, bool bMarkRenderStateDirty); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414D75838
		void SetSustainLength(int32_t InstanceIndex, float SustainLengthBeats); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414D75758
		void SetSingleTrackNoteOn(int32_t InstanceIndex, int32_t TrackPICDIndex, float NoteOn, bool bMarkRenderStateDirty); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414D75678
		void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D75598
		void OnFullTableChanged(); // Flags: Final|Native|Protected 0x7FF414D754B8
		void InitializePreviewFXComponent(UFabricStepSequencerComponent InStepSequencer, UFabricStepSequencerGridComponent InStepSequencerGrid, bool bInTestNotesOn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D753D8
	};


	// Class FabricRuntime.FabricSequencerSustainComponent
	// Inherited from UInstancedStaticMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x960 - 0x8E0)
	class UFabricSequencerSustainComponent : public UInstancedStaticMeshComponent	
	{
	public:
		TMap StepToInstanceMapping; // 0x8E0(0x50)
		int32_t PICDStartBeat; // 0x930(0x4)
		int32_t PICDEndBeat; // 0x934(0x4)
		int32_t PICDLoopBeat; // 0x938(0x4)
		int32_t CPDDeviceEnabled; // 0x93C(0x4)
		float GridSquareExtents; // 0x940(0x4)
		float SustainInstanceYLocation; // 0x944(0x4)
		float SustainInstanceYScale; // 0x948(0x4)
		float SustainInstanceZScale; // 0x94C(0x4)
		TWeakObjectPtr StepSequencer; // 0x950(0x8)
		TWeakObjectPtr StepSequencerGrid; // 0x958(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricSequencerSustainComponent");
			return ret;
		}

		void UpdateVisibilityOfInstances(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D768D8
		void UpdateSustainMaterial(int32_t InstanceIndex, int32_t HeadNoteStepIndex, int32_t TrackIndex); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D767F8
		void UpdateSustainInstance(int32_t StepIndex, int32_t TrackIndex, int32_t PageIndex, bool bEnabled, bool bContinuous, bool bStepChanged); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D76718
		void UpdatePipsOnGridChanged(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D76638
		void UpdateDeviceEnabledOnSustain(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D76558
		void SetStartBeat(int32_t InstanceIndex, float StartBeatValue); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D76478
		void SetLoopBeat(int32_t InstanceIndex, float LoopBeatValue); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D76398
		void SetEndBeat(int32_t InstanceIndex, float EndBeatValue); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D762B8
		void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D761D8
		void OnPageChanged(int32_t CurrentPage); // Flags: Native|Protected 0x7FF414D760F8
		void OnNumTracksChanged(int32_t NumTracks); // Flags: Native|Protected 0x7FF414D76018
		void OnNumStepsChanged(int32_t NumSteps); // Flags: Native|Protected 0x7FF414D75F38
		void OnFullTableChanged(); // Flags: Final|Native|Protected 0x7FF414D75E58
		void InitializeSustainComponent(UFabricStepSequencerComponent InStepSequencer, UFabricStepSequencerGridComponent InStepSequencerGrid); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D75D78
		void FindHeadNoteAndUpdateInstance(int32_t StepIndex, int32_t TrackIndex); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D75C98
		void FindAndDeleteInstance(int32_t StepIndex, int32_t TrackIndex); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D75BB8
		void ConstructSustains(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D75AD8
		float CalculateSustainLength(float NumStepsCoveredBySustain); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D759F8
		void AddSustainInstance(int32_t StepIndex, int32_t TrackIndex); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D75918
	};


	// Class FabricRuntime.FabricSignificanceAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricSignificanceAsset : public UDataAsset	
	{
	public:
		TArray UpdateBuckets; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricSignificanceAsset");
			return ret;
		}
	};


	// Class FabricRuntime.FabricStepSequencerModulatable
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x88 (0x3B0 - 0x328)
	class UFabricStepSequencerModulatable : public UFabricModulatable	
	{
	public:
		unsigned char UnknownData02_3[0x80]; // 0x328(0x80) UNKNOWN PROPERTY
		bool bIsChromatic; // 0x3A8(0x1)
		bool bModulationValueChanged; // 0x3A9(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x3AA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricStepSequencerModulatable");
			return ret;
		}
	};


	// Class FabricRuntime.FabricStepSequencerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x268 (0x308 - 0xA0)
	class UFabricStepSequencerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNumTracksChanged; // 0xA8(0x10)
		FMulticastInlineDelegate OnNumStepsChanged; // 0xB8(0x10)
		FMulticastInlineDelegate OnPageChanged; // 0xC8(0x10)
		FMulticastInlineDelegate OnQuarterNotesLengthChanged; // 0xD8(0x10)
		FMulticastInlineDelegate OnBeatScaleChanged; // 0xE8(0x10)
		FMulticastInlineDelegate OnBeatOffsetChanged; // 0xF8(0x10)
		FMulticastInlineDelegate OnStepChanged; // 0x108(0x10)
		FMulticastInlineDelegate OnNoteStyleChanged; // 0x118(0x10)
		FMulticastInlineDelegate OnFullTableChanged; // 0x128(0x10)
		FMulticastInlineDelegate OnPageCleared; // 0x138(0x10)
		FMulticastInlineDelegate OnLoopEnded; // 0x148(0x10)
		FString LengthParam; // 0x158(0x10)
		FString DurationParam; // 0x168(0x10)
		FString PageParam; // 0x178(0x10)
		FString AutoPageParam; // 0x188(0x10)
		FString OctaveParam; // 0x198(0x10)
		FString NoteStyleParam; // 0x1A8(0x10)
		FString LoopParam; // 0x1B8(0x10)
		FString AutoPagePlaysBlankPagesParam; // 0x1C8(0x10)
		bool bMonophonic; // 0x1D8(0x1)
		bool bSupportsContinuation; // 0x1D9(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x1DA(0x2) UNKNOWN PROPERTY
		float StepLengthQuarterNotes; // 0x1DC(0x4)
		float StepBeatScale; // 0x1E0(0x4)
		bool bSkipFourthStepInTriplet; // 0x1E4(0x1)
		EFabricNoteStyle NoteStyle; // 0x1E5(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x1E6(0x2) UNKNOWN PROPERTY
		int32_t MaxSteps; // 0x1E8(0x4)
		int32_t CurrentSteps; // 0x1EC(0x4)
		bool bMatchStepsToTimeSignature; // 0x1F0(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x1F1(0x3) UNKNOWN PROPERTY
		int32_t MaxPages; // 0x1F4(0x4)
		int32_t CurrentPage; // 0x1F8(0x4)
		int32_t MaxTracks; // 0x1FC(0x4)
		int32_t CurrentTracks; // 0x200(0x4)
		int32_t LocalInteractionStartTrackIndex; // 0x204(0x4)
		int32_t LocalInteractionStartStepIndex; // 0x208(0x4)
		bool bAutoPage; // 0x20C(0x1)
		bool bAutoPagePlaysBlankPages; // 0x20D(0x1)
		bool bLoop; // 0x20E(0x1)
		char RandomizationCommonSampleSize; // 0x20F(0x1)
		float RandomizationRestSelectionMaxPct; // 0x210(0x4)
		float RandomizationCommonPitchSelectionMaxPct; // 0x214(0x4)
		UClass ContinuationControlClass; // 0x218(0x8)
		FStepSequenceTable LocalStepTable; // 0x220(0x28)
		FFabricStepTablePacked PackedStepTable; // 0x248(0x28)
		UFabricStepSequencerModulatable StepSequencerModulatable; // 0x270(0x8)
		AActor CachedContinuationControl; // 0x278(0x8)
		int32_t ContinuationRowIndex; // 0x280(0x4)
		int32_t ContinuationStepIndex; // 0x284(0x4)
		unsigned char UnknownData10_6[0x8]; // 0x288(0x8) UNKNOWN PROPERTY
		UMidiStepSequence MetaSoundMidiStepSequence; // 0x290(0x8)
		unsigned char UnknownData11_7[0x70]; // 0x298(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricStepSequencerComponent");
			return ret;
		}

		void UpdatePackedStepTableSaveRecordIfChanged(FFabricStepTablePacked& InPackedStepTable); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D79818
		void ToggleStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D79738
		void ToggleStepEnabled(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D79658
		void SetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D79578
		void SetStepEnabled(int32_t Row, int32_t Column, bool bState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D79498
		void SetStepContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bIsContinuation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D793B8
		void SetStepContinuation(int32_t Row, int32_t Column, bool bIsContinuation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D792D8
		void SetQuarterNotesLength(float QuarterNotes); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D791F8
		void SetPlaying(bool bNewPlaying); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D79118
		void SetNumberTracks(int32_t NumTracks); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D79038
		void SetNumberSteps(int32_t NumSteps); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78F58
		void SetNumberPages(int32_t NumPages); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78E78
		void SetNoteStyle(EFabricNoteStyle Style); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78D98
		void SetNoteForTrack(FMidiNote Note, int32_t Track); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78CB8
		void SetMusicClock(UMusicClockComponent InMusicClock); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78BD8
		void SetMonophonic(bool bNewMonophonic); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78AF8
		void SetMaxSteps(int32_t NumSteps); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78A18
		void SetLoop(bool bNewLoop); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78938
		void SetCurrentPage(int32_t NewPage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78858
		void SetBeatScale(float BeatScale); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78778
		void RandomizePage(int32_t Page); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D78698
		void RandomizeCurrentPage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D785B8
		void OnRep_PackedStepTable(); // Flags: Final|Native|Private 0x7FF414D784D8
		bool IsStepEnabledForAnyTrackOnPage(int32_t Page, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D783F8
		bool IsStepEnabledForAnyTrack(int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D78318
		bool IsPageBlank(int32_t PageIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D78238
		bool GetSupportsContinuation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D78158
		float GetStepStartQuarterNotes(int32_t Step); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D78078
		float GetStepStartBeat(int32_t Step); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77F98
		bool GetStepIsContinuationOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77EB8
		bool GetStepIsContinuation(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77DD8
		bool GetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77CF8
		bool GetStepEnabled(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77C18
		float GetStepContinuationLengthOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77B38
		float GetStepContinuationLength(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77A58
		void GetPageData(int32_t PageIndex, FStepSequencePage& OutPageData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414D77978
		int32_t GetNumUsedSteps(int32_t TotalSteps); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77898
		int32_t GetNumberTracks(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D777B8
		int32_t GetNumberSteps(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D776D8
		UMidiStepSequence GetMidiStepSequence(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D775F8
		int32_t GetMaxTracks(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77518
		int32_t GetMaxSteps(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77438
		float GetLongestContinuationLengthForColumnOnPage(int32_t Page, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77358
		float GetLongestContinuationLengthForColumn(int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77278
		float GetLengthTrackQuarterNotes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D77198
		float GetLengthTrackBeats(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D770B8
		float GetLengthStepQuarterNotes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D76FD8
		float GetLengthStepBeats(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D76EF8
		int32_t GetCurrentPage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D76E18
		void GetContinuationFocusIndeces(int32_t& OutRowIndex, int32_t& OutStepIndex, int32_t& OutNumContinuationSteps); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D76D38
		void ClearPage(int32_t Page, bool bUpdateSaveRecord); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D76C58
		void ClearCurrentPage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D76B78
		void ApplyTemplate(UMidiStepSequence Template, int32_t StepSequencePageIndex, bool bUpdateSaveRecord); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D76A98
		void ApplyPage(int32_t PageIndex, FStepSequencePage& PageData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D769B8
	};


	// Class FabricRuntime.FabricStepSequencerGridComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x100 (0x320 - 0x220)
	class UFabricStepSequencerGridComponent : public USceneComponent	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0x220(0x10) UNKNOWN PROPERTY
		FVector2D GridExtents; // 0x230(0x10)
		FVector2D GridSpacing; // 0x240(0x10)
		int32_t SingleTrackNumItemsPerRow; // 0x250(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x254(0x4) UNKNOWN PROPERTY
		FVector2D EditorPreviewGridSize; // 0x258(0x10)
		UClass GridSquareClassPtr; // 0x268(0x8)
		TWeakObjectPtr GridSquareClass; // 0x270(0x20)
		TEnumAsByte SequencerType; // 0x290(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x291(0x3) UNKNOWN PROPERTY
		int32_t ActiveTrack; // 0x294(0x4)
		UFabricStepSequencerComponent StepSequencer; // 0x298(0x8)
		TArray GridRows; // 0x2A0(0x10)
		unsigned char UnknownData08_6[0x60]; // 0x2B0(0x60) UNKNOWN PROPERTY
		int32_t MaxTrackIndexToLoadSquares; // 0x310(0x4)
		unsigned char UnknownData09_7[0xC]; // 0x314(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricStepSequencerGridComponent");
			return ret;
		}

		void SetGridVisible(bool bInGridVisible, bool bForceRefresh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7A8B8
		void SetBypassed(bool bBypassed); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7A7D8
		void SetActiveTrackIndex(int32_t ActiveTrackIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7A6F8
		void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D7A618
		void OnRep_MaxTrackIndexToLoadSquares(); // Flags: Final|Native|Protected 0x7FF414D7A538
		void OnQuarterNotesLengthChanged(float QuarterNotesLength); // Flags: Final|Native|Protected 0x7FF414D7A458
		void OnNumTracksChanged(int32_t NumTracks); // Flags: Final|Native|Protected 0x7FF414D7A378
		void OnNumStepsChanged(int32_t NumSteps); // Flags: Final|Native|Protected 0x7FF414D7A298
		void OnNoteStyleChanged(EFabricNoteStyle Style); // Flags: Final|Native|Protected 0x7FF414D7A1B8
		void OnFullTableChanged(); // Flags: Final|Native|Protected 0x7FF414D7A0D8
		void OnCurrentPageChanged(int32_t NewPage); // Flags: Final|Native|Protected 0x7FF414D79FF8
		void OnBeatScaleChanged(float BeatScale); // Flags: Final|Native|Protected 0x7FF414D79F18
		void OnBeatOffsetChanged(float BeatOffset); // Flags: Final|Native|Protected 0x7FF414D79E38
		void NotifyInteractionFocusTargetExternallyChanged(APlayerController PlayerController, int32_t SourceRowIndex, int32_t SourceColumnIndex, int32_t FocusRowIndex, int32_t FocusColumnIndex, bool bIsFocused); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D79D58
		bool IsBypassed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D79C78
		float GetGridSquareYPosition(int32_t NumRows, int32_t RowIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D79B98
		float GetGridSquareXPosition(int32_t NumSteps, int32_t StepIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D79AB8
		FVector2D GetGridSquareSize(int32_t NumSteps, int32_t NumRows); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D799D8
		FVector GetGridSquareExtents(int32_t RowIndex, int32_t ColumnIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D798F8
	};


	// Class FabricRuntime.FabricStepSequencerGridSquareComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x5F0 - 0x590)
	class UFabricStepSequencerGridSquareComponent : public UStaticMeshComponent	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x590(0x10) UNKNOWN PROPERTY
		float ContinuationControlInteractionDelay; // 0x5A0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x5A4(0x4) UNKNOWN PROPERTY
		UFabricStepSequencerComponent AssignedStepSequencer; // 0x5A8(0x8)
		int32_t ActiveTrack; // 0x5B0(0x4)
		int32_t AssignedStep; // 0x5B4(0x4)
		int32_t PreviousFocusStepIndex; // 0x5B8(0x4)
		unsigned char UnknownData05_7[0x34]; // 0x5BC(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricStepSequencerGridSquareComponent");
			return ret;
		}

		void SetActiveTrack(int32_t Track); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7AD18
		void OnContinuationControl_StartInteraction(APlayerController Controller); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7AC38
		void OnContinuationControl_EndInteraction(APlayerController Controller); // Flags: Event|Protected|BlueprintEvent 0x7FF414D7AB58
		bool CanDoInteractionLogicOnStartInteraction(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414D7AA78
		bool CanDoInteractionLogicOnEndInteraction(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414D7A998
	};


	// Class FabricRuntime.FabricTextureModifierBase
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x18 (0x340 - 0x328)
	class UFabricTextureModifierBase : public UFabricModulatable	
	{
	public:
		FMulticastInlineDelegate OnSourceTexturesChanged; // 0x328(0x10)
		UTexture ModifiedTexture; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTextureModifierBase");
			return ret;
		}

		void OnSourceTextureChanged__DelegateSignature(TArray& Textures); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140A9160
	};


	// Class FabricRuntime.FabricTextureTreeNode
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UFabricTextureTreeNode : public UObject	
	{
	public:
		TArray Children; // 0x28(0x10)
		FFabricTextureProviderTexture Texture; // 0x38(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTextureTreeNode");
			return ret;
		}

		void Reset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7AED8
		void CopyProperties(UFabricTextureTreeNode Other); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7ADF8
	};


	// Class FabricRuntime.FabricTextureProviderBase
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UFabricTextureProviderBase : public UObject	
	{
	public:
		FMulticastInlineDelegate OnTextureChanged; // 0x28(0x10)
		FFabricTextureProviderTexture SourceTexture; // 0x38(0x18)
		float CurrentCableFloatValue; // 0x50(0x4)
		float CurrentCableFloatDirection; // 0x54(0x4)
		float TimeElapsedSinceLastCableFloatDirty; // 0x58(0x4)
		bool bCurrentCableFloatDirty; // 0x5C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTextureProviderBase");
			return ret;
		}

		void SetSourceTexture(FFabricTextureProviderTexture& InTexture); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140A93E0
		void OnTextureChanged__DelegateSignature(FFabricTextureProviderTexture& Texture); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140A9300
	};


	// Class FabricRuntime.FabricTimelinePreviewComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UFabricTimelinePreviewComponent : public UActorComponent	
	{
	public:
		UTimelineComponent CurrentTimeline; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTimelinePreviewComponent");
			return ret;
		}

		void PreviewTimeline(UTimelineComponent Timeline, float SecondsToPlay, bool bReverseAnimation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7B098
		bool GetShouldPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7AFB8
	};


	// Class FabricRuntime.FabricTimelineSyncComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UFabricTimelineSyncComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		float ThresholdForSeekMS; // 0xB0(0x4)
		float ThresholdForStartSpeedAdjustMS; // 0xB4(0x4)
		float ThresholdForEndOfSpeedAdjustMS; // 0xB8(0x4)
		float SpeedAdjustFactor; // 0xBC(0x4)
		bool bPrintToScreen; // 0xC0(0x1)
		bool bLogCorrectedServerTimeDelta; // 0xC1(0x1)
		unsigned char UnknownData05_6[0x2]; // 0xC2(0x2) UNKNOWN PROPERTY
		float SpeedSyncTimeoutLength; // 0xC4(0x4)
		float TempoDeltaThrottleSeconds; // 0xC8(0x4)
		float MassiveSyncErrorTimeThresholdMin; // 0xCC(0x4)
		float MassiveSyncErrorTimeThresholdMax; // 0xD0(0x4)
		float MassiveSyncErrorTimeThresholdMultiplier; // 0xD4(0x4)
		UFabricMetaSoundManagerComponent MetaSoundManager; // 0xD8(0x8)
		UMusicClockComponent MusicClock; // 0xE0(0x8)
		unsigned char UnknownData06_6[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
		FFabricTimelineSyncServerSongPosition ServerTimelineSyncServerSongPosition; // 0xF0(0x1C)
		unsigned char UnknownData07_7[0x34]; // 0x10C(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTimelineSyncComponent");
			return ret;
		}

		void SetFabricMetasoundManager(UFabricMetaSoundManagerComponent InMetaSoundManager); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7B338
		void OnTimelinePlayingChanged(EMusicClockState State); // Flags: Final|Native|Public 0x7FF414D7B258
		void OnRep_ServerCurrentSongPos(); // Flags: Final|Native|Public 0x7FF414D7B178
	};


	// Class FabricRuntime.FabricVFXTopperDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricVFXTopperDataAsset : public UDataAsset	
	{
	public:
		TArray VFXTopperDataEntries; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricVFXTopperDataAsset");
			return ret;
		}
	};


	// Class FabricRuntime.FabricWaveformTexture
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UFabricWaveformTexture : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		int32_t WaveformNumSamplesHeld; // 0x30(0x4)
		int32_t WaveformSmoothingDistance; // 0x34(0x4)
		float WaveformSmoothingFactor; // 0x38(0x4)
		float WaveformDecayPerSecond; // 0x3C(0x4)
		UTexture2D WaveformTexture; // 0x40(0x8)
		bool bEnableTextureRequests; // 0x48(0x1)
		unsigned char UnknownData03_7[0x2F]; // 0x49(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricWaveformTexture");
			return ret;
		}

		void Initialize(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7B6B8
		UTexture2D GetWaveformTexture(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7B5D8
		void AddNewValueToWaveformTexture(float Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7B4F8
		void AddMultipleValuesToWaveformTexture(TArray& Values); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D7B418
	};


	// Class FabricRuntime.FabricInteractableTargetPayload
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFabricInteractableTargetPayload : public UObject	
	{
	public:
		TWeakObjectPtr TargetedActor; // 0x28(0x8)
		TWeakObjectPtr TargetedComponent; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricInteractableTargetPayload");
			return ret;
		}
	};


	// Class FabricRuntime.FortGameplayAbility_FabricInteractableTargeting
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x50 (0xB90 - 0xB40)
	class UFortGameplayAbility_FabricInteractableTargeting : public UFortGameplayAbility	
	{
	public:
		UTargetingPreset TargetingPreset; // 0xB40(0x8)
		FGameplayTag TargetsChangedTag; // 0xB48(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY
		FScalableFloat TargetingInterval; // 0xB50(0x28)
		UFabricInteractableTargetPayload PayloadCache; // 0xB78(0x8)
		FTargetingRequestHandle AsyncTargetingHandle; // 0xB80(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xB84(0x4) UNKNOWN PROPERTY
		FTimerHandle TargetingTimerHandle; // 0xB88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FortGameplayAbility_FabricInteractableTargeting");
			return ret;
		}

		void StopTargeting(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D7B878
		void StartTargeting(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D7B798
	};


	// Class FabricRuntime.FabricGameFeatureAction_OverrideFabricInteractionTool
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFabricGameFeatureAction_OverrideFabricInteractionTool : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr OverriddenPatchworkInteractionTool; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricGameFeatureAction_OverrideFabricInteractionTool");
			return ret;
		}
	};


	// Class FabricRuntime.FabricIslandSettingsWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UFabricIslandSettingsWorldSubsystem : public UWorldSubsystem	
	{
	public:
		FScalableFloat UseMemoryMode; // 0x30(0x28)
		float CheckMinigameSettingsIntervalSeconds; // 0x58(0x4)
		unsigned char UnknownData01_7[0x4C]; // 0x5C(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricIslandSettingsWorldSubsystem");
			return ret;
		}

		void UnregisterBlueprintForFabricIslandSettingsInitialized(TScriptInterface& InFabricIslandSettingsInitializedInterface); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D7BBF8
		void RegisterBlueprintForFabricIslandSettingsInitialized(TScriptInterface& InFabricIslandSettingsInitializedInterface, EFabricIslandSettingsMemoryModeType MemoryModeType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D7BB18
		bool CanUseFabricMemoryModeRelevantFeature(EFabricIslandSettingsMemoryModeType MemoryModeType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7BA38
		bool AreMemoryQueriesAllowed(EFabricIslandSettingsMemoryModeType MemoryModeType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7B958
	};

}
