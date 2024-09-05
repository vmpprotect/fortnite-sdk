#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FabricRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void PlayOpenAnimation(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF748D7CC28(relative to base address)
		void PlayCloseAnimation(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF749263428(relative to base address)
	};


	// Class FabricRuntime.FabricAudioBridgeComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UFabricAudioBridgeComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		UClass* FabricAudioPatchWrapperClass; // 0xB8(0x8)
		UFabricMetaSoundAudioPatchWrapper* FabricAudioPatchWrapperInstance; // 0xC0(0x8)
		TWeakObjectPtr<UFabricMetaSoundManagerComponent*> FabricMetasoundManager; // 0xC8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricAudioBridgeComponent");
			return ret;
		}

		void SyncAudioToMetaSound(USoundWave* InAudio, float AudioStartTime, float InitialVolume); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516206F0(relative to base address)
		void SetFabricMetasoundManager(UFabricMetaSoundManagerComponent* InFabricMetasoundManager); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516200F8(relative to base address)
		void SetAudioStartTime(FMusicTimestamp& StartTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75161FF64(relative to base address)
	};


	// Class FabricRuntime.FabricButtonBase
	// Inherited from AActor -> UObject
	// Size: 0xA8 (0x338 - 0x290)
	class AFabricButtonBase : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate ToggleStateChanged; // 0x2A8(0x10)
		double OpenTimeSeconds; // 0x2B8(0x8)
		double CloseTimeSeconds; // 0x2C0(0x8)
		bool bHasToggle; // 0x2C8(0x1)
		TEnumAsByte<EButtonPressMethod> ClickMethod; // 0x2C9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2CA(0x6) UNKNOWN PROPERTY
		APlayerController* InteractingController; // 0x2D0(0x8)
		FString ButtonId; // 0x2D8(0x10)
		FText ButtonLabel; // 0x2E8(0x10)
		FText ButtonDescription; // 0x2F8(0x10)
		FGameplayTagContainer GameplayTags; // 0x308(0x20)
		bool bEnabled; // 0x328(0x1)
		bool bHovered; // 0x329(0x1)
		bool bPressed; // 0x32A(0x1)
		ECheckBoxState ToggleState; // 0x32B(0x1)
		unsigned char UnknownData02_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		UFabricInteractableViewModel* WidgetViewModel; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricButtonBase");
			return ret;
		}

		void ToggleStateChanged__DelegateSignature(APlayerController* InteractingController, bool IsToggle); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwapToggle(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516206C8(relative to base address)
		void SetWidgetViewModel(UFabricInteractableViewModel* ViewModel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516205C8(relative to base address)
		void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516203B0(relative to base address)
		void SetEnabled(bool bNewEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75161FFF8(relative to base address)
		void OnUnhovered(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF749066BE0(relative to base address)
		void OnToggleStateChanged(bool bIsToggled); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D78BE8C(relative to base address)
		void OnHovered(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C388930(relative to base address)
		void OnEnabled(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF748BA0AC4(relative to base address)
		void OnDisabled(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF747E38E94(relative to base address)
		void OnButtonReleased(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D8E21D0(relative to base address)
		void OnButtonPressed(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D8E21E8(relative to base address)
		void OnButtonDoubleClicked(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74917265C(relative to base address)
		void OnButtonClicked(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF747E38800(relative to base address)
		bool IsToggledOn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75161F88C(relative to base address)
		bool IsPressed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74FFF024C(relative to base address)
		bool IsHovered(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75161F85C(relative to base address)
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75161F844(relative to base address)
		void HandleButtonUnhovered(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C75F5A0(relative to base address)
		void HandleButtonReleased(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C4C5790(relative to base address)
		void HandleButtonPressed(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7475A8C1C(relative to base address)
		void HandleButtonHovered(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74E44C9D8(relative to base address)
		void HandleButtonDoubleClicked(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74851EA54(relative to base address)
		void HandleButtonClicked(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74851EF54(relative to base address)
		UTimelineComponent GetOpenTimeline(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF74C6345FC(relative to base address)
		UTimelineComponent GetCloseTimeline(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF74C6345FC(relative to base address)
	};


	// Class FabricRuntime.FabricButtonComponentBase
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x650 - 0x590)
	class UFabricButtonComponentBase : public UStaticMeshComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x590(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate ToggleStateChanged; // 0x5A0(0x10)
		double OpenTimeSeconds; // 0x5B0(0x8)
		double CloseTimeSeconds; // 0x5B8(0x8)
		bool bHasToggle; // 0x5C0(0x1)
		TEnumAsByte<EButtonPressMethod> ClickMethod; // 0x5C1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x5C2(0x6) UNKNOWN PROPERTY
		APlayerController* InteractingController; // 0x5C8(0x8)
		FString ButtonId; // 0x5D0(0x10)
		FText ButtonLabel; // 0x5E0(0x10)
		FText ButtonDescription; // 0x5F0(0x10)
		FGameplayTagContainer GameplayTags; // 0x600(0x20)
		bool bUseScreenGrid; // 0x620(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x621(0x7) UNKNOWN PROPERTY
		FVector2D ScreenGridPosition; // 0x628(0x10)
		bool bEnabled; // 0x638(0x1)
		bool bHovered; // 0x639(0x1)
		bool bPressed; // 0x63A(0x1)
		ECheckBoxState ToggleState; // 0x63B(0x1)
		unsigned char UnknownData03_6[0x4]; // 0x63C(0x4) UNKNOWN PROPERTY
		UFabricInteractableViewModel* WidgetViewModel; // 0x640(0x8)
		unsigned char UnknownData04_7[0x8]; // 0x648(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricButtonComponentBase");
			return ret;
		}

		void ToggleStateChanged__DelegateSignature(APlayerController* InteractingController, bool IsToggle); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwapToggle(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516206DC(relative to base address)
		void SetWidgetViewModel(UFabricInteractableViewModel* ViewModel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751620648(relative to base address)
		void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516204BC(relative to base address)
		void SetEnabled(bool bNewEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751620078(relative to base address)
		void OnUnhovered(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161FECC(relative to base address)
		void OnToggleStateChanged(bool bIsToggled); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161FE48(relative to base address)
		void OnHovered(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF749C98494(relative to base address)
		void OnEnabled(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF75161F924(relative to base address)
		void OnDisabled(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161F90C(relative to base address)
		void OnButtonReleased(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161F8F4(relative to base address)
		void OnButtonPressed(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF750ABA510(relative to base address)
		void OnButtonDoubleClicked(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161F8DC(relative to base address)
		void OnButtonClicked(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161F8C4(relative to base address)
		bool IsToggledOn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75161F8A8(relative to base address)
		bool IsPressed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75161F874(relative to base address)
		bool IsHovered(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74ED4C454(relative to base address)
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74ED4D0F4(relative to base address)
		void HandleButtonUnhovered(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161F82C(relative to base address)
		void HandleButtonReleased(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C7AFFC4(relative to base address)
		void HandleButtonPressed(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF750ABA528(relative to base address)
		void HandleButtonHovered(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161F814(relative to base address)
		void HandleButtonDoubleClicked(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748C19210(relative to base address)
		void HandleButtonClicked(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161F7FC(relative to base address)
		UTimelineComponent GetOpenTimeline(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF74C6345FC(relative to base address)
		UTimelineComponent GetCloseTimeline(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF74C6345FC(relative to base address)
		void ConstructButton(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF75161F534(relative to base address)
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

		UFabricMetaSoundPatchWrapper GetMetaSoundPatchWrapper(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748DB959C(relative to base address)
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

		FSourceEffectChainEntry GetAudioAnalyzer(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161F54C(relative to base address)
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

		TArray GetSourceEffectChainEntries(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75161F788(relative to base address)
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

		USoundSourceBus GetSoundSourceBus(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748DB959C(relative to base address)
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

		UFabricFloatProviderBase GetFloatProvider(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748DB959C(relative to base address)
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

		void SetFloatProviders(TArray<UFabricFloatProviderBase*>& FloatProvider); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74C415F24(relative to base address)
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

		UFabricTextureProviderBase GetTextureProvider(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748DB959C(relative to base address)
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

		bool IsShowingTexturePreview(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7484CBA18(relative to base address)
		UFabricTextureModifierBase GetTextureModifier(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748DB959C(relative to base address)
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

		void OnTexturesChanged(TArray<FFabricTextureProviderTexture>& Texture); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74D7276C0(relative to base address)
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

		UFabricMeshProviderBase GetMeshProvider(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748DB959C(relative to base address)
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

		void OnMeshesChanged(TArray<FFabricMeshInstanceReference>& InstanceMeshReferences, bool bInstancesChanged); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF75161FCD4(relative to base address)
		bool IsShowingMeshPreview(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74E20ECE4(relative to base address)
		UFabricMeshModifierBase GetMeshModifier(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C45C190(relative to base address)
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

		void OnMeshReferenceChanged(FFabricMeshProviderMeshReference& ReferenceMesh); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF75161FC14(relative to base address)
		void OnMeshInstancesChanged(TArray<FTransform>& Meshes); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF75161FB74(relative to base address)
		void OnMeshInstanceReferencesChanged(TArray<FFabricMeshInstanceReference>& MeshInstanceReferences, bool bMeshChanged, bool bInstancesChanged); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF75161F93C(relative to base address)
	};


	// Class FabricRuntime.FabricModulationNode
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFabricModulationNode : public UObject	
	{
	public:
		TArray<UFabricFloatProviderBase*> FloatProviders; // 0x28(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x4]; // 0x28(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> ModulatedActor; // 0x2C(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<FString> ModulatorParams; // 0x38(0x10)
		TSet<FName> NonModulatedParamsWithCallbacks; // 0x48(0x50)
		TMap<FString, TWeakObjectPtr> Modulators; // 0x98(0x50)
		TMap<FName, FName> LastBroadcastedValues; // 0xE8(0x50)
		TArray<TWeakObjectPtr> ModulatorSources; // 0x138(0x10)
		unsigned char UnknownData02_7[0x1E0]; // 0x148(0x1E0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricModulatable");
			return ret;
		}

		void OnOptionsLoaded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75162C910(relative to base address)
		void OnModulatorFloatProviderConnectionChanged(bool bConnected, UObject* ModulatorObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF75162CA34(relative to base address)
		void OnModulatedPropertyChanged(FString Value, UObject* ModulatorObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF75162C94C(relative to base address)
		void OnAnyOptionUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75162C910(relative to base address)
		bool IsParamModulated(FString Param); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162C55C(relative to base address)
		bool GetModulatedString(FString Param, FMidiSongPos& SongPos, FString& OutString); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162C130(relative to base address)
		bool GetModulatedInt(FString Param, FMidiSongPos& SongPos, int32_t& OutInt); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162BF4C(relative to base address)
		bool GetModulatedFloat(FString Param, FMidiSongPos& SongPos, float& OutFloat); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162BD5C(relative to base address)
		bool GetModulatedEnum(FString Param, FMidiSongPos& SongPos, char& OutEnum); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162BBB8(relative to base address)
		bool GetModulatedBool(FString Param, FMidiSongPos& SongPos, bool& OutBool); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162B9C8(relative to base address)
		AActor GetModulatedActor(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162B9A0(relative to base address)
	};


	// Class FabricRuntime.FabricFloatProviderBase
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x58 (0x380 - 0x328)
	class UFabricFloatProviderBase : public UFabricModulatable	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x328(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFloatChanged; // 0x330(0x10)
		FMulticastInlineDelegate OnFloatProviderEnabledChanged; // 0x340(0x10)
		float CurrentFloat; // 0x350(0x4)
		TWeakObjectPtr<UMusicClockComponent*> MusicClock; // 0x354(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x35C(0x4) UNKNOWN PROPERTY
		UFabricMetaSoundModulatorPatchWrapper* AssociatedPatchWrapper; // 0x360(0x8)
		FString EnabledParam; // 0x368(0x10)
		bool bAlwaysModulates; // 0x378(0x1)
		bool bBindBlueprintOnFloatChanged; // 0x379(0x1)
		bool bIsEnabled; // 0x37A(0x1)
		bool bModulatorValueChanged; // 0x37B(0x1)
		unsigned char UnknownData02_7[0x4]; // 0x37C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatProviderBase");
			return ret;
		}

		void SetProviderEnabled(bool bInIsEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751620314(relative to base address)
		void SetMusicClock(UMusicClockComponent* NewMusicClock); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751620214(relative to base address)
		void SetAssociatedPatchWrapper(UFabricMetaSoundModulatorPatchWrapper* PatchWrapper); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75161FEE4(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFloatProviderEnabledChanged__DelegateSignature(bool bEnabled, UFabricFloatProviderBase* FloatProvider); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFloatChanged__DelegateSignature(float float, UFabricFloatProviderBase* FloatProvider); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetProviderEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75161F770(relative to base address)
		EFabricFloatProviderType GetFloatProviderType(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C45C864(relative to base address)
		float GetFloatAtSongPos(FMidiSongPos& SongPos); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75161F67C(relative to base address)
		FMidiSongPos GetCurrentSongPosWithOffset(float OffsetSeconds); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75161F5D8(relative to base address)
		FMidiSongPos GetCurrentSongPos(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75161F598(relative to base address)
		float GetCurrentFloat(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD3B4(relative to base address)
		UFabricMetaSoundModulatorPatchWrapper GetAssociatedPatchWrapper(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDEB0(relative to base address)
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
		unsigned char UnknownData00_6[0x78]; // 0x408(0x78) UNKNOWN PROPERTY
		TSet<TWeakObjectPtr> PreviewDisplayMeshes; // 0x480(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatProviderWave");
			return ret;
		}

		void SetRandomSeedByGuid(FGuid& InRandomGuid); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751623C94(relative to base address)
		void SetFreePhase(float InFreePhase); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516239CC(relative to base address)
		void RemovePreviewDisplayMesh(UStaticMeshComponent* Mesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516233E4(relative to base address)
		int32_t GetRandomSeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C45BBA4(relative to base address)
		TArray GetPreviewDisplayMeshes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751622B88(relative to base address)
		float GetCurrentPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751622820(relative to base address)
		float GetCurrentFreePhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516227F8(relative to base address)
		void ClearPreviewDisplayMeshes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516224E0(relative to base address)
		void AddPreviewDisplayMesh(UStaticMeshComponent* Mesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751622264(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0x3B4(0x4) UNKNOWN PROPERTY
		FFabricStepGenerator RuntimeGenerator; // 0x3B8(0x20)
		FMulticastInlineDelegate OnFloatProviderStepInitialized; // 0x3D8(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x3E8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatProviderStep");
			return ret;
		}

		float GetStepLengthBeats(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751622BC8(relative to base address)
	};


	// Class FabricRuntime.FabricFloatProviderValueSetter
	// Inherited from UFabricFloatProviderBase -> UFabricModulatable -> UObject
	// Size: 0x80 (0x400 - 0x380)
	class UFabricFloatProviderValueSetter : public UFabricFloatProviderBase	
	{
	public:
		FString ValueParam; // 0x380(0x10)
		FString TransitionTimingParam; // 0x390(0x10)
		unsigned char UnknownData00_7[0x60]; // 0x3A0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricFloatProviderValueSetter");
			return ret;
		}

		float GetUpdateBeat(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751622BF0(relative to base address)
		bool CanUsePredictiveBeatBroadcasting(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749859FE0(relative to base address)
		float CalculateTransitionTiming(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516223F8(relative to base address)
		float BroadcastCurrentValue(float OverriddenBeat); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751622368(relative to base address)
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
		UClass* FabricTooltipWidgetType; // 0xB0(0x8)
		FGameplayTag TargetsChangedTag; // 0xB8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer HUDTagsToHide; // 0xC0(0x20)
		UFortInputMappingContext* IndicatorShowingInputContext; // 0xE0(0x8)
		int32_t IndicatorShowingPriority; // 0xE8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		UInputAction* ShowMoreAction; // 0xF0(0x8)
		unsigned char UnknownData02_7[0x28]; // 0xF8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricIndicatorComponent");
			return ret;
		}

		void TryGetFortClientSettings(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751623DAC(relative to base address)
		void SetIndicatorEnabled(bool bEnabled, bool bAllowWriteToSettings); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751623ACC(relative to base address)
		void OnShowMoreActionTriggered(FInputActionInstance& Instance); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF751623340(relative to base address)
		void OnIndicatorWidgetVisibilityChanged(ESlateVisibility NewVisibility); // Flags: Final|Native|Public, Memory Exec: 0x7FF751622FE4(relative to base address)
		bool IsIndicatorEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751622D6C(relative to base address)
		void HandleTooltipsEnabledChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751622CAC(relative to base address)
	};


	// Class FabricRuntime.FabricInteractableControllerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UFabricInteractableControllerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNoInteractablesHit; // 0xA8(0x10)
		AFortPlayerController* PlayerController; // 0xB8(0x8)
		TWeakObjectPtr<UFortGadgetItemDefinition*> FabricInteractionToolItemDefSoftPtr; // 0xC0(0x20)
		TWeakObjectPtr<UFortGadgetItemDefinition*> OverriddenFabricInteractionToolItemDefSoftPtr; // 0xE0(0x20)
		UFortGadgetItemDefinition* FabricInteractionToolItemDef; // 0x100(0x8)
		float EnsurePlayerHasInteractionToolRetryDelay; // 0x108(0x4)
		unsigned char UnknownData01_6[0x14]; // 0x10C(0x14) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> SoftFabricDeviceBaseClass; // 0x120(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricInteractableControllerComponent");
			return ret;
		}

		void ServerRequestDoesIslandContainFabricDevices(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74847EE18(relative to base address)
		void ServerGivePlayerFabricInteractionTool(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void OnCreativeModeEnabledChangedDelegate(bool bCreativeEnabled); // Flags: Final|Native|Public, Memory Exec: 0x7FF74C079284(relative to base address)
		void GiveBackInteractionTool(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751622C08(relative to base address)
		void EnsurePlayerHasInteractionTool(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751622640(relative to base address)
		void ClientReceiveDoesIslandContainFabricDevices(bool bIslandContainsFabricDevices); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF75077F254(relative to base address)
		bool CanGiveBackInteractionTool(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751622420(relative to base address)
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

		void StartSpecialInteraction(APlayerController* Controller); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74D0750C0(relative to base address)
		void StartInteraction(APlayerController* Controller); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751623D2C(relative to base address)
		bool ShouldPassInteractionToComponent(AFabricInteractionTool* InteractionTool); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF75017ECB4(relative to base address)
		void SetInteractable(bool bInteractable); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751623B90(relative to base address)
		void SetHitComponent(USceneComponent* HitComponent); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751623A4C(relative to base address)
		void SetFocused(bool bIsFocused); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E27B760(relative to base address)
		void OnInteractionFocusTargetChanged(APlayerController* Controller, UObject* FocusTarget, bool bIsFocused); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751623064(relative to base address)
		bool IsValidToInteractWith(APlayerController* Controller); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751622DB8(relative to base address)
		bool IsFocusDependentOnInteractionContext(APlayerController* Controller); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751622CC0(relative to base address)
		UObject GetLinkedInteractable(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74EEF7D4C(relative to base address)
		UAudioComponent GetInteractionSFX(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751622B48(relative to base address)
		EFabricInteractableType GetInteractableType(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74C68DD74(relative to base address)
		void GetInteractableName(FText& OutName); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751622AA8(relative to base address)
		FVector GetInteractableForwardVector(USceneComponent* Interactable); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751622A04(relative to base address)
		void GetInteractableDescription(FText& OutDescription); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751622964(relative to base address)
		FVector GetInteractableComponentLocation(USceneComponent* Interactable); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7516228C0(relative to base address)
		float GetContinuousInteractableValueNormalized(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7516226CC(relative to base address)
		EFabricContinuousInteractionDirection GetContinuousInteractableDirection(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF748C4E078(relative to base address)
		void EndInteraction(APlayerController* PlayerController, bool bWasDragAndDropInteraction); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751622578(relative to base address)
		bool DoesInteractionRequireHoldable(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74EEF8B08(relative to base address)
		bool CanInteractWithHoldable(TScriptInterface<Class>& Holdable); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF75162243C(relative to base address)
	};


	// Class FabricRuntime.FabricInteractablePlayspaceComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UFabricInteractablePlayspaceComponent : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricInteractablePlayspaceComponent");
			return ret;
		}

		void SetFabricDeviceExistsInPlayspace(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751623958(relative to base address)
		void OnPlayspaceUserAdded(FPlayspaceUser& PlayspaceUser); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751623164(relative to base address)
		void OnDownloadOnDemandCompleteIndividualClient(FEventMessageTag Channel, FClientFinishedDownloadOnDemand& Context); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751622E4C(relative to base address)
	};


	// Class FabricRuntime.FabricInteractionTool
	// Inherited from AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x200 (0x1FC8 - 0x1DC8)
	class AFabricInteractionTool : public AFortWeaponRanged	
	{
	public:
		FMulticastInlineDelegate OnInteractionStateChanged; // 0x1DC8(0x10)
		FMulticastInlineDelegate OnCablesGrabbed; // 0x1DD8(0x10)
		FMulticastInlineDelegate OnCablesDropped; // 0x1DE8(0x10)
		FMulticastInlineDelegate OnMetasoundGeneratorCrossfadeStarted; // 0x1DF8(0x10)
		FMulticastInlineDelegate OnZoomLevelChanged; // 0x1E08(0x10)
		UClass* FITSplineMeshComponentClass; // 0x1E18(0x8)
		USplineComponent* SplineComponent; // 0x1E20(0x8)
		TArray<USplineMeshComponent*> SplineMeshComponentArray; // 0x1E28(0x10)
		UMaterialInstanceDynamic* SplineMeshMaterialInstance; // 0x1E38(0x8)
		float MaxRange; // 0x1E40(0x4)
		float MinDragAndDropTriggerTime; // 0x1E44(0x4)
		float FiringRate; // 0x1E48(0x4)
		float WipeAnim; // 0x1E4C(0x4)
		float UseWipe; // 0x1E50(0x4)
		int32_t SplineMeshMaterialIndex; // 0x1E54(0x4)
		int32_t CPDUVScale; // 0x1E58(0x4)
		int32_t CPDUVPosition; // 0x1E5C(0x4)
		int32_t CPDWipeAnim; // 0x1E60(0x4)
		int32_t CPDUseWipe; // 0x1E64(0x4)
		int32_t CPDIndex_DeviceType; // 0x1E68(0x4)
		float SplineSectionLength; // 0x1E6C(0x4)
		int32_t MaxSplineSpawnedInAFrame; // 0x1E70(0x4)
		float DeviceTypeValue; // 0x1E74(0x4)
		float FITTargetingAudioPitchMultiplier; // 0x1E78(0x4)
		float FITZoomAudioPitchMultiplier; // 0x1E7C(0x4)
		float SplineEndForwardMultiplier; // 0x1E80(0x4)
		float SplineStartForwardMultiplier; // 0x1E84(0x4)
		UObject* HoveredInteractable; // 0x1E88(0x8)
		USceneComponent* HoveredInteractableHitComponent; // 0x1E90(0x8)
		UObject* PressedInteractable; // 0x1E98(0x8)
		TWeakObjectPtr<UObject*> LastPressedInteractable; // 0x1EA0(0x8)
		USceneComponent* PressedInteractableHitComponent; // 0x1EA8(0x8)
		TWeakObjectPtr<AFortCreativeDeviceProp*> InteractableOwnerDevice; // 0x1EB0(0x8)
		float AccumulatedDragAndDropTriggerTime; // 0x1EB8(0x4)
		FInteractionData ServerInteractionData; // 0x1EBC(0xC)
		unsigned char UnknownData00_6[0x11]; // 0x1EC8(0x11) UNKNOWN PROPERTY
		bool bServerTriggerPressed; // 0x1ED9(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x1EDA(0x1) UNKNOWN PROPERTY
		bool bServerIsHoldingCable; // 0x1EDB(0x1)
		unsigned char UnknownData02_6[0x14]; // 0x1EDC(0x14) UNKNOWN PROPERTY
		FInteractionSplinePoints ServerSplinePoints; // 0x1EF0(0x60)
		float ServerContinuousInteractableValue; // 0x1F50(0x4)
		unsigned char UnknownData03_7[0x74]; // 0x1F54(0x74) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricInteractionTool");
			return ret;
		}

		void UpdateSplineMesh(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751623DD4(relative to base address)
		void UnholsterWeapon(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751623DC0(relative to base address)
		void SetPitchMultipliersForTargetingSounds(bool bIsTargetingNow); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751623C14(relative to base address)
		void ServerSetTriggerPressed(bool bPressed); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF7516238D4(relative to base address)
		void ServerSetSplinePoints(FInteractionSplinePoints SplinePoints); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF751623740(relative to base address)
		void ServerSetIsHoldingCable(bool bHoldingCable); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF7516236BC(relative to base address)
		void ServerSetInteractionData(FInteractionData NewData); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF75162358C(relative to base address)
		void ServerSetContinuousInteractableValue(float Value); // Flags: Net|Native|Event|Protected|NetServer, Memory Exec: 0x7FF751623508(relative to base address)
		void ServerHandleFITFired(); // Flags: Net|Native|Event|Protected|NetServer, Memory Exec: 0x7FF7516234F0(relative to base address)
		void OnZoomLevelChanged__DelegateSignature(bool IsZoomed); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSplineUpdated(EFabricInteractionToolStates NewInteractionState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_ServerTriggerPressed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516232F0(relative to base address)
		void OnRep_ServerIsHoldingCable(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75162328C(relative to base address)
		void OnRep_ServerInteractionData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751623278(relative to base address)
		void OnRep_ServerContinuousInteractableValue(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751623244(relative to base address)
		void OnMetasoundGeneratorCrossfadeStarted__DelegateSignature(float CrossfadeSeconds); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInteractionStateChanged__DelegateSignature(EFabricInteractionToolStates NewState, AFortCreativeDeviceProp* Device); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCableHeldStateChanged__DelegateSignature(AFortCreativeDeviceProp* Device); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsRunningOnOwningClient(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751622D94(relative to base address)
		bool IsHoldingCables(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751622D54(relative to base address)
		void HandleMetasoundGeneratorCrossfade(float CrossfadeSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751622C1C(relative to base address)
		UObject GetPressedInteractable(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751622B70(relative to base address)
		EFabricInteractableType GetHoveredInteractableType(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162287C(relative to base address)
		USceneComponent GetHoveredInteractableHitComponent(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751622864(relative to base address)
		EFabricInteractionToolStates GetFabricInteractionToolState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75162284C(relative to base address)
		int32_t GetContinuousStateValue(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516227B8(relative to base address)
		float GetContinuousMovementValue(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751622790(relative to base address)
		EFabricContinuousInteractionDirection GetContinuousInteractionDirection(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516226F8(relative to base address)
		float GetContinuousInteractableValueNormalized(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516226B4(relative to base address)
		void DeactiveWeaponAndState(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751622560(relative to base address)
		void ClientStopInteracting(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF751622548(relative to base address)
		void ClientDeactiveWeaponAndState(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74F89CF7C(relative to base address)
		void ClearSplineMesh(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751622534(relative to base address)
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

		void OnFabricIslandSettingsInitialized(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FabricRuntime.FabricMeshModifierBase
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x8 (0x330 - 0x328)
	class UFabricMeshModifierBase : public UFabricModulatable	
	{
	public:
		EFabricCloneTransformBehavior CloneBehavior; // 0x328(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x329(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		FVector PerCloneTranslation; // 0x338(0x18)
		bool bCentered; // 0x350(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x351(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x33C(0x4) UNKNOWN PROPERTY
		FVector LocationRandRange; // 0x340(0x18)
		FVector RotationRandRange; // 0x358(0x18)
		FVector ScaleRandRangeAdditive; // 0x370(0x18)
		float ScaleRandRangeRangeBase; // 0x388(0x4)
		bool bUniformScale; // 0x38C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x38D(0x3) UNKNOWN PROPERTY
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
		UFabricMeshModifierBase* MeshModifier; // 0x28(0x8)
		FFabricMeshProviderMeshReferenceParams Params; // 0x30(0x28)
		FFabricMeshProviderMeshReference MeshProviderReference; // 0x58(0x38)
		TArray<UFabricMeshTreeNode*> Children; // 0x90(0x10)
		uint32_t LastCalculatedChecksum; // 0xA0(0x4)
		bool bAllowChecksumCalculation; // 0xA4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshTreeNode");
			return ret;
		}

		void Reset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751627114(relative to base address)
		TArray GenerateMeshInstanceReferences(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516262C4(relative to base address)
		void CopyProperties(UFabricMeshTreeNode* Other); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162607C(relative to base address)
	};


	// Class FabricRuntime.FabricMeshProviderBase
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UFabricMeshProviderBase : public UObject	
	{
	public:
		FFabricMeshProviderMeshReference ReferenceMesh; // 0x28(0x38)
		TArray<FTransform> InstanceMeshes; // 0x60(0x10)
		float CurrentCableFloatValue; // 0x70(0x4)
		float CurrentCableFloatDirection; // 0x74(0x4)
		bool bCurrentCableFloatDirty; // 0x78(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMeshProviderBase");
			return ret;
		}

		void SetReferenceMesh(FFabricMeshProviderMeshReference& InMesh); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751627994(relative to base address)
	};


	// Class FabricRuntime.FabricMetaSoundPatchWrapper
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x460 (0x788 - 0x328)
	class UFabricMetaSoundPatchWrapper : public UFabricModulatable	
	{
	public:
		FName EnabledStateInputName; // 0x328(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UMetaSoundPatch*> MetaSoundPatch; // 0x330(0x20)
		TMap<FString, FName> UserOptionsToNodeInputs; // 0x350(0x50)
		TArray<FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning> PerPlatformInputBools; // 0x3A0(0x10)
		TArray<FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning> PerPlatformInputInts; // 0x3B0(0x10)
		TArray<FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning> PerPlatformInputFloats; // 0x3C0(0x10)
		TArray<FFabricMetaSoundDirectInputInfo> DirectInputs; // 0x3D0(0x10)
		FFabricMetaSoundPatchWrapperBinding SimpleSignalOutputBinding; // 0x3E0(0x50)
		FMulticastInlineDelegate OnSimpleSignalBindingUpdate; // 0x430(0x10)
		FName VisibleInputParamName; // 0x440(0x4)
		FName AudibleInputParamName; // 0x444(0x4)
		bool bCanConsumeVisibleFlag; // 0x448(0x1)
		bool bCanConsumeAudibleFlag; // 0x449(0x1)
		bool bIsVisible; // 0x44A(0x1)
		bool bIsAudible; // 0x44B(0x1)
		unsigned char UnknownData01_6[0x24]; // 0x44C(0x24) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMetaSoundOutputIntChangedBatch; // 0x470(0x10)
		FMulticastInlineDelegate OnMetaSoundOutputFloatChangedBatch; // 0x480(0x10)
		UFabricMetaSoundManagerComponent* CurrentManager; // 0x490(0x8)
		TWeakObjectPtr<UFabricMetaSoundTickSubsystem*> TickSubsystem; // 0x498(0x8)
		FFabricMetaSoundNodeInfo CurrentNode; // 0x4A0(0xF0)
		TWeakObjectPtr<AActor*> PositionalProxyActor; // 0x590(0x8)
		unsigned char UnknownData02_6[0x20]; // 0x598(0x20) UNKNOWN PROPERTY
		TWeakObjectPtr<UAudioComponent*> CurrentAudioComponent; // 0x5B8(0x8)
		TWeakObjectPtr<UAudioComponent*> NewAudioComponent; // 0x5C0(0x8)
		unsigned char UnknownData03_6[0x10]; // 0x5C8(0x10) UNKNOWN PROPERTY
		FName CombinerMetaSoundType; // 0x5D8(0x4)
		FName AnalyzerMetaSoundType; // 0x5DC(0x4)
		TArray<FFabricMetaSoundRuntimeInputInfo> MetaSoundRuntimeInputInfos; // 0x5E0(0x10)
		TArray<UFabricMetaSoundPatchWrapper*> ConnectedInputWrappers; // 0x5F0(0x10)
		TArray<UFabricMetaSoundPatchWrapper*> PendingInputWrappers; // 0x600(0x10)
		TArray<UFabricMetaSoundPatchWrapper*> PendingOutputWrappers; // 0x610(0x10)
		FFabricMetaSoundConnectionBuilder ConnectionBuilder; // 0x620(0xC0)
		unsigned char UnknownData04_6[0x50]; // 0x6E0(0x50) UNKNOWN PROPERTY
		TArray<FMetaSoundCombinerNodeHandle> CombinersInUse; // 0x730(0x10)
		TArray<UFabricMetaSoundPatchWrapper*> ConnectedOutputWrappers; // 0x740(0x10)
		EFabricMetaSoundPatchWrapperQuality PatchWrapperQuality; // 0x750(0x1)
		unsigned char UnknownData05_6[0x17]; // 0x751(0x17) UNKNOWN PROPERTY
		UMetaSoundPatch* LoadedMetaSoundPatch; // 0x768(0x8)
		unsigned char UnknownData06_7[0x18]; // 0x770(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundPatchWrapper");
			return ret;
		}

		void SetStringInput(FName& MetaSoundInputName, FString Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75162AAC8(relative to base address)
		void SetRunsOnServer(bool bAllowRunOnServer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162AA48(relative to base address)
		void SetPositionalProxyActor(AActor* InLocationProxyActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162A948(relative to base address)
		void SetNodeEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162A874(relative to base address)
		void SetNodeCanBePooled(bool bInNodeCanbePooled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162A7F4(relative to base address)
		void SetIsAudible(bool bInIsAudible); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162A6B0(relative to base address)
		void SetIntInput(FName& MetaSoundInputName, int32_t Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75162A59C(relative to base address)
		void SetFloatInput(FName& MetaSoundInputName, float Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75162A484(relative to base address)
		void SetEnumInput(FName& MetaSoundInputName, char Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75162A36C(relative to base address)
		void SetBoolInput(FName& MetaSoundInputName, bool bValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75162A254(relative to base address)
		void RemoveFromCurrentGraph(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162A0A4(relative to base address)
		void OnMetaSoundOutputValueChanged(FName OutputName, FMetaSoundOutput& MetaSoundOutput); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF751629DE8(relative to base address)
		void OnMetaSoundOutputChanged(FName OutputName, FMetaSoundOutput& Output); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751629D04(relative to base address)
		void OnMetasoundManagerEndPlay(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751629ED0(relative to base address)
		void OnConnectedModulatorNodeCreated(UFabricMetaSoundPatchWrapper* EnabledPatchWrapper); // Flags: Final|Native|Private, Memory Exec: 0x7FF751629948(relative to base address)
		void OnConnectedModulatorEnabledChanged(UFabricMetaSoundPatchWrapper* EnabledPatchWrapper, bool bEnabled); // Flags: Final|Native|Private, Memory Exec: 0x7FF75162960C(relative to base address)
		void OnAddedToManagerGraph(UFabricMetaSoundManagerComponent* Manager); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74C3BFA94(relative to base address)
		void NeedsParameterPackUpdate(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516295F8(relative to base address)
		void NeedsOutputWatcherUpdate(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516295E4(relative to base address)
		void NeedsGeneratorHandleUpdate(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516295D0(relative to base address)
		void NeedsAnalyzerParameterPackUpdate(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516295BC(relative to base address)
		bool GetRunsOnServer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751629538(relative to base address)
		bool GetNodeEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751629520(relative to base address)
		bool GetNodeCanBePooled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751629508(relative to base address)
		UMusicClockComponent GetMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516294E8(relative to base address)
		TSet GetMetaSoundInputNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751629420(relative to base address)
		void AddToManagerGraph(UFabricMetaSoundManagerComponent* Manager); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9D94(relative to base address)
		bool AddToGraphOnFirstConnect(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74EFD3F2C(relative to base address)
	};


	// Class FabricRuntime.FabricMetaSoundAudioPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x88 (0x810 - 0x788)
	class UFabricMetaSoundAudioPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x788(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UMetaSoundPatch*> FromStartPatch; // 0x790(0x20)
		TWeakObjectPtr<UMetaSoundPatch*> FromCurrentPatch; // 0x7B0(0x20)
		UMetaSoundPatch* LoadedFromStartPatch; // 0x7D0(0x8)
		UMetaSoundPatch* LoadedFromCurrentPatch; // 0x7D8(0x8)
		FName VolumeInputName; // 0x7E0(0x4)
		FName StartTimeInputName; // 0x7E4(0x4)
		FName StartTimestampInputName; // 0x7E8(0x4)
		unsigned char UnknownData01_7[0x24]; // 0x7EC(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundAudioPatchWrapper");
			return ret;
		}

		void SetAudio(USoundBase* InAudio); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162734C(relative to base address)
	};


	// Class FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0xE0 (0x868 - 0x788)
	class UFabricMetaSoundDrumPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x788(0x8) UNKNOWN PROPERTY
		FName PitchSampleInputName; // 0x790(0x4)
		FName SlotKitInputName; // 0x794(0x4)
		TArray<FString> PitchSampleParams; // 0x798(0x10)
		TArray<FString> SlotLinkParams; // 0x7A8(0x10)
		TArray<FString> SlotUnlinkedKitParams; // 0x7B8(0x10)
		FString CurrentKitParam; // 0x7C8(0x10)
		int32_t NumSamplesPerKit; // 0x7D8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7DC(0x4) UNKNOWN PROPERTY
		TArray<FFabricMetaSoundPatchWrapperBinding> DrumAmplitudes; // 0x7E0(0x10)
		FMulticastInlineDelegate OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate; // 0x7F0(0x10)
		FMulticastInlineDelegate OnFabricMetaSoundDrumPlayerSampleBanksLoaded; // 0x800(0x10)
		unsigned char UnknownData02_6[0x48]; // 0x810(0x48) UNKNOWN PROPERTY
		TArray<UObject*> CurrentKitSamples; // 0x858(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper");
			return ret;
		}

		void SlotUnlinkedKitParamChanged(int32_t PitchSampleIndex, int32_t Value); // Flags: Final|Native|Private, Memory Exec: 0x7FF751627CF0(relative to base address)
		void SlotLinkedParamChanged(int32_t PitchSampleIndex, bool Value); // Flags: Final|Native|Private, Memory Exec: 0x7FF751627C2C(relative to base address)
		void PitchSampleParamChanged(int32_t PitchSampleIndex, int32_t Value); // Flags: Final|Native|Private, Memory Exec: 0x7FF751626AA0(relative to base address)
		void LoadDrumPlayerSampleBanks(TArray<TWeakObjectPtr>& SampleBankArray, TSet<int32_t>& KitNumbersToLoad); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751626844(relative to base address)
		void KitIndexChanged(FName& Param, int32_t Value); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751626738(relative to base address)
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
		unsigned char UnknownData00_6[0x6]; // 0x83A(0x6) UNKNOWN PROPERTY
		UFabricWaveformTexture* WetSignalWaveformTexture; // 0x840(0x8)
		UFabricWaveformTexture* DrySignalWaveformTexture; // 0x848(0x8)

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
		unsigned char UnknownData00_6[0x78]; // 0x7F0(0x78) UNKNOWN PROPERTY
		UFusionPatch* CurrentFusionPatch; // 0x868(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper");
			return ret;
		}

		void SetFusionPatch(UFusionPatch* FusionPatch); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751627668(relative to base address)
		void DriveFFTDataOnPrimitive(UPrimitiveComponent* Primitive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516260FC(relative to base address)
	};


	// Class FabricRuntime.FabricMetaSoundModulatorPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x20 (0x7A8 - 0x788)
	class UFabricMetaSoundModulatorPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		FMulticastInlineDelegate OnPatchWrapperVisibilityChanged; // 0x788(0x10)
		UPlaylistUserOptionBase* CurrentUserOption; // 0x798(0x8)
		UFabricMetaSoundUserOption* MetaSoundUserOption; // 0x7A0(0x8)

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
		UFabricFloatProviderWave* LFOFloatProvider; // 0x7A8(0x8)
		FName FreePhaseStartName; // 0x7B0(0x4)
		FName RandomSeedInputName; // 0x7B4(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x7B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper");
			return ret;
		}

		void UpdateRandomSeed(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751628260(relative to base address)
	};


	// Class FabricRuntime.FabricMetaSoundManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x998 (0xA38 - 0xA0)
	class UFabricMetaSoundManagerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UMetaSoundPatch*> HarmonixMusicProviderPatch; // 0xA8(0x20)
		TWeakObjectPtr<UMetaSoundPatch*> HarmonixMetronomeClockPatch; // 0xC8(0x20)
		TWeakObjectPtr<UMetaSoundPatch*> HarmonixTempoClockPatch; // 0xE8(0x20)
		TWeakObjectPtr<UMetaSoundPatch*> HarmonixTransportPatch; // 0x108(0x20)
		TWeakObjectPtr<UMetaSoundPatch*> UserOptionConverterNode; // 0x128(0x20)
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
		UMidiFile* DefaultMidiFile; // 0x338(0x8)
		unsigned char UnknownData01_6[0x30]; // 0x340(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMetasoundGeneratorCrossfadeStarted; // 0x370(0x10)
		unsigned char UnknownData02_6[0x50]; // 0x380(0x50) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMetasoundClockAuthorityChanged; // 0x3D0(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x3E0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPlayStateChanged; // 0x3F8(0x10)
		FMulticastInlineDelegate OnMusicEventPriorityChanged; // 0x408(0x10)
		unsigned char UnknownData04_6[0x10]; // 0x418(0x10) UNKNOWN PROPERTY
		TArray<FFabricSignificanceBasedUpdateBucketRuntime> SignificanceRuntimeBuckets; // 0x428(0x10)
		UFabricSignificanceAsset* SignificanceBasedUpdate; // 0x438(0x8)
		float InitialCooldownTimeInSeconds; // 0x440(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x444(0x4) UNKNOWN PROPERTY
		UMetaSoundSourceBuilder* SourceBuilder; // 0x448(0x8)
		UMusicClockComponent* MusicClock; // 0x450(0x8)
		TArray<UAudioComponent*> PlaybackAudioComponents; // 0x458(0x10)
		TArray<UMetasoundOfflinePlayerComponent*> ServerPlaybackComponents; // 0x468(0x10)
		unsigned char UnknownData06_6[0x50]; // 0x478(0x50) UNKNOWN PROPERTY
		FFabricTransportRequestConfig CurrentTransportRequestLock; // 0x4C8(0xC)
		unsigned char UnknownData07_6[0xC]; // 0x4D4(0xC) UNKNOWN PROPERTY
		TWeakObjectPtr<UMidiFile*> TempoMapMidiFile; // 0x4E0(0x8)
		FFabricMetaSoundNodeInfo HarmonixMusicProviderNode; // 0x4E8(0xF0)
		FFabricMetaSoundNodeInfo HarmonixMetronomeClockNode; // 0x5D8(0xF0)
		FFabricMetaSoundNodeInfo HarmonixMidiTempoClockNode; // 0x6C8(0xF0)
		FFabricMetaSoundNodeInfo HarmonixTransportNode; // 0x7B8(0xF0)
		FMetaSoundBuilderNodeOutputHandle OnPlayNodeOutput; // 0x8A8(0x20)
		FMetaSoundBuilderNodeInputHandle OnFinishedNodeInput; // 0x8C8(0x20)
		TArray<FMetaSoundBuilderNodeInputHandle> AudioOutNodeInputs; // 0x8E8(0x10)
		unsigned char UnknownData08_6[0x48]; // 0x8F8(0x48) UNKNOWN PROPERTY
		TMap<UMetaSoundPatch*, FFabricMetaSoundNodePool> FreeMetaSoundNodes; // 0x940(0x50)
		TMap<FName, FFabricLoadedUtilityPatches> UtilityNodeTypesToPatches; // 0x990(0x50)
		unsigned char UnknownData09_6[0x10]; // 0x9E0(0x10) UNKNOWN PROPERTY
		bool bGraphDirty; // 0x9F0(0x1)
		bool bIsAudioless; // 0x9F1(0x1)
		bool bHasCompletedInitialCooldown; // 0x9F2(0x1)
		EFabricMetasoundClock CurrentClockType; // 0x9F3(0x1)
		EFabricMetasoundClock DefaultClockType; // 0x9F4(0x1)
		EFabricMetasoundPlayState CurrentPlayState; // 0x9F5(0x1)
		EFabricMetasoundPlayState PlayStateAfterRebuild; // 0x9F6(0x1)
		EJamFabricSyncType JamSyncType; // 0x9F7(0x1)
		EFabricMetasoundMusicEventPriority MusicEventPriority; // 0x9F8(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x9F9(0x3) UNKNOWN PROPERTY
		FName ClientCurrentAudibleMusicEventGroup; // 0x9FC(0x4)
		FGameplayTag AboveEmotesTag; // 0xA00(0x4)
		FGameplayTag BelowEmotesTag; // 0xA04(0x4)
		float ReplicatedReceivedSignalBufferDuration; // 0xA08(0x4)
		unsigned char UnknownData11_6[0x26]; // 0xA0C(0x26) UNKNOWN PROPERTY
		EFabricMetasoundUtilityLoadedBroadcastBy LastBroadcastBy; // 0xA32(0x1)
		unsigned char UnknownData12_7[0x5]; // 0xA33(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundManagerComponent");
			return ret;
		}

		void UnregisterAsAudible(AActor* Device); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751627E4C(relative to base address)
		bool StopMetasound(FFabricTransportRequestConfig& PlayConfig); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751627DB0(relative to base address)
		void SetTimeSignature(int32_t Numerator, int32_t Denominator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751627B6C(relative to base address)
		void SetTempo(float Tempo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751627AEC(relative to base address)
		void SetSpeed(float Speed); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751627A6C(relative to base address)
		void SetMusicKey(EMusicKey Key, EMusicKeyMode Mode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516278D0(relative to base address)
		void SetMusicEventPriority(EFabricMetasoundMusicEventPriority InMusicEventPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751627834(relative to base address)
		void SetMusicClock(UMusicClockComponent* MusicClockComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516277B4(relative to base address)
		void SetMidiFile(UMidiFile* MidiFile); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751627734(relative to base address)
		void SetCurrentJamSyncType(EJamFabricSyncType& InJamSyncType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516275DC(relative to base address)
		void SetClockAuthority(FFabricTransportRequestConfig& InFabricTransportRequest, EFabricMetasoundClock InClockType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751627478(relative to base address)
		void SetAudioComponents(TArray<UAudioComponent*> AudioComponents); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516273CC(relative to base address)
		void SeekToTimestamp(FMusicTimestamp& Timestamp); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516272B8(relative to base address)
		void SeekToSeconds(float Seconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751627238(relative to base address)
		void SeekToMs(float Ms); // Flags: Final|Native|Public, Memory Exec: 0x7FF7516271B8(relative to base address)
		void RestartMetasoundPlayback(FFabricTransportRequestConfig& InFabricTransportRequest); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF751627128(relative to base address)
		void ReleaseClockAuthority(FFabricTransportRequestConfig& InFabricTransportRequest); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751627084(relative to base address)
		void RegisterAsAudible(AActor* Device, FName& AudibleEventGroup); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751626BFC(relative to base address)
		bool PlayMetasound(FFabricTransportRequestConfig& PlayConfig); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751626B60(relative to base address)
		bool PauseMetasound(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751626A7C(relative to base address)
		void OnGeneratorJustStarted(int32_t ComponentIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516269FC(relative to base address)
		void NotifyGraphChanged(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516269E4(relative to base address)
		void InvalidateMetasoundGeneratorHandle(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751626724(relative to base address)
		bool HasClockAuthority(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516266E8(relative to base address)
		FGameplayTag GetMusicEventTag(EFabricMetasoundMusicEventPriority InMusicEventPriority); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751626654(relative to base address)
		EFabricMetasoundMusicEventPriority GetMusicEventPriority(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162663C(relative to base address)
		UMusicClockComponent GetMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E8B7148(relative to base address)
		FName GetMetasoundOutputNodeName(FName NodeName, FName OutputName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751626584(relative to base address)
		FFabricMetaSoundNodeInfo GetMetaSoundNodeForWrapper(UFabricMetaSoundPatchWrapper* PatchWrapper); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751626408(relative to base address)
		FName GetMetasoundInputNodeName(FName NodeName, FName InputName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516264CC(relative to base address)
		EFabricMetasoundPlayState GetCurrentPlaystate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516263F0(relative to base address)
		UAudioComponent GetCurrentPlaybackAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516263D0(relative to base address)
		FGameplayTag GetCurrentMusicEventTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516263A8(relative to base address)
		EJamFabricSyncType GetCurrentJamSyncType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751626390(relative to base address)
		EFabricMetasoundClock GetCurrentClockType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74ED4CC1C(relative to base address)
		FName GetCurrentClientAudibleMusicEventGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751626378(relative to base address)
		UMetaSoundSourceBuilder GetBuilder(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751626360(relative to base address)
		void FreeMetaSoundNode(FFabricMetaSoundNodeInfo& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751626200(relative to base address)
		void ClearClockAuthorityIfStopped(FFabricTransportRequestConfig& InFabricTransportRequest); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751625FA8(relative to base address)
		bool AreAllPatchesReady(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751625F84(relative to base address)
		void AddOutputNodeForOutputVertex(FMetaSoundBuilderNodeOutputHandle& OutputVertex, FName& NodeName, FName& OutOutputName, EMetaSoundBuilderResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751625DEC(relative to base address)
		void AddInputNodeForNodeByNameBP(FFabricMetaSoundNodeInfo& InOutNode, EFabricUserOptionType UserOptionType, FName& InputName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751625C28(relative to base address)
	};


	// Class FabricRuntime.FabricNoteReceivedPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x48 (0x7D0 - 0x788)
	class UFabricNoteReceivedPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		FName NoteOutputName; // 0x788(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x78C(0x4) UNKNOWN PROPERTY
		TArray<FString> TriggerNoteParams; // 0x790(0x10)
		FMulticastInlineDelegate OnMatchingMidiEventPassed; // 0x7A0(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x7B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricNoteReceivedPatchWrapper");
			return ret;
		}

		void OnTriggerNoteChanged(int32_t NoteIndex, bool bTriggerActive); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751629FE0(relative to base address)
		void OnMetaSoundMidiEventPassed(FName OutputName, FMetaSoundOutput& Output); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751629BE8(relative to base address)
	};


	// Class FabricRuntime.FabricNoteTriggerPatchWrapper
	// Inherited from UFabricNoteReceivedPatchWrapper -> UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x28 (0x7F8 - 0x7D0)
	class UFabricNoteTriggerPatchWrapper : public UFabricNoteReceivedPatchWrapper	
	{
	public:
		FString OctaveParam; // 0x7D0(0x10)
		FMulticastInlineDelegate OnAnyMidiEventPassed; // 0x7E0(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x7F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricNoteTriggerPatchWrapper");
			return ret;
		}

		void OnOctaveChanged(FName& ParamName, int32_t InOctave); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751629EE4(relative to base address)
	};


	// Class FabricRuntime.FabricMetaSoundTreeNode
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFabricMetaSoundTreeNode : public UObject	
	{
	public:
		EFabricMetaSoundPinDirection PinDirection; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		UFabricMetaSoundPatchWrapper* AssociatedPatchWrapper; // 0x30(0x8)
		TArray<UFabricMetaSoundTreeNode*> Children; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundTreeNode");
			return ret;
		}

		void Reset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162A0BC(relative to base address)
		TArray GetValidChildren(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751629550(relative to base address)
		void ConnectToChildNodes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162940C(relative to base address)
	};


	// Class FabricRuntime.FabricMetaSoundSequencerPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x8 (0x790 - 0x788)
	class UFabricMetaSoundSequencerPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		UMidiStepSequence* CurrentStepSequence; // 0x788(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper");
			return ret;
		}

		void SetMidiStepSequence(UMidiStepSequence* StepSequence); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162A730(relative to base address)
	};


	// Class FabricRuntime.FabricMetaSoundSpeakerPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x28 (0x7B0 - 0x788)
	class UFabricMetaSoundSpeakerPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		TArray<FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding> EqBands; // 0x788(0x10)
		FMulticastInlineDelegate OnFabricMetaSoundSpeakerPatchEqBandUpdate; // 0x798(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x7A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper");
			return ret;
		}

		void SetAudioBusFromSourceBus(USoundSourceBus* Bus); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162A0D0(relative to base address)
	};


	// Class FabricRuntime.FabricMetaSoundSplitterPatchWrapper
	// Inherited from UFabricMetaSoundPatchWrapper -> UFabricModulatable -> UObject
	// Size: 0x58 (0x7E0 - 0x788)
	class UFabricMetaSoundSplitterPatchWrapper : public UFabricMetaSoundPatchWrapper	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x788(0x8) UNKNOWN PROPERTY
		TMap<FName, FFabricMetaSoundNodeInfo> SplitterNodes; // 0x790(0x50)

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
		unsigned char UnknownData00_1[0x1E0]; // 0xD0(0x1E0) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x48]; // 0xC0(0x48) UNKNOWN PROPERTY
		FMusicTimestamp SelectedMidiTrackStartTimestamp; // 0x108(0x8)
		FMusicTimestamp ExternalSourceStartTimestamp; // 0x110(0x8)
		FMusicTimestamp SelectedMidiTrackEndTimestamp; // 0x118(0x8)
		FMusicTimestamp ExternalSourceEndTimestamp; // 0x120(0x8)
		FMidiFollowData MidiFollowData; // 0x128(0xC)
		EFabricMidiPlayerLoopType DesiredLoopBehaviour; // 0x134(0x1)
		unsigned char UnknownData01_7[0x1B]; // 0x135(0x1B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMidiFollowComponent");
			return ret;
		}

		void StopFollowing(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162DBDC(relative to base address)
		void StartFollowing(FMusicTimestamp InStartTimestamp); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162DAC8(relative to base address)
		void SetMidiFollowData(FMidiFollowData& InMidiFollowData, int32_t InMidiTrackIndex, EFabricMidiPlayerLoopType InLoopBehaviour); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75162D3CC(relative to base address)
		void SetFabricMetasoundManager(UFabricMetaSoundManagerComponent* InFabricMetasoundManager); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162CFB0(relative to base address)
		void SetControllingTimeline(bool bInControllingTimeline); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162CDEC(relative to base address)
		float GetFollowStartTimeSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFBA2F0(relative to base address)
		FName GetFollowName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162B8F4(relative to base address)
		float GetFollowLengthSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162B8CC(relative to base address)
		int32_t ClampSelectedMidiIndex(UMidiFile* InMidiFile, int32_t InMidiTrackIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162B668(relative to base address)
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
		UMidiFile* CurrentMidiFile; // 0x7E0(0x8)
		int32_t CurrentMidiTrackIndex; // 0x7E8(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x7EC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricMIDIPlayerPatchWrapper");
			return ret;
		}

		void SetMidiOutputEnabled(bool bMidiOutputEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162D688(relative to base address)
		void SetMidiLooping(bool bMidiLoop); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162D608(relative to base address)
		void SetMidiFile(UMidiFile* MidiFile); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162D308(relative to base address)
		void SetControlsTempo(bool bInControlsTempo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162CE6C(relative to base address)
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

		UPlaylistUserOptionBase GetUserOption(FString Property); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF75162C2F4(relative to base address)
		void GetModulators(UFabricModulatable* Modulatable); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74E2074C0(relative to base address)
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

		void SetUserOption(EFabricUserOptionType UserOptionType, UPlaylistUserOptionBase* UserOption, UObject* ModulatorObject); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75162D9D0(relative to base address)
	};


	// Class FabricRuntime.FabricProgressorManager
	// Inherited from UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UFabricProgressorManager : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGlobalProgressionChanged; // 0xA8(0x10)
		bool bHasActiveGlobalProgression; // 0xB8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		int32_t GlobalPresetNumber; // 0xBC(0x4)
		FFabricProgressionPreset GlobalProgression; // 0xC0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricProgressorManager");
			return ret;
		}

		void SetGlobalProgression(FFabricProgressionPreset& InProgression, int32_t InPresetNumber); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75162D0CC(relative to base address)
		void OnProgressionChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsProgressionGlobal(FFabricProgressionPreset& InProgression); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75162C5F8(relative to base address)
		bool HasActiveGlobalProgression(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1248(relative to base address)
		FFabricProgressionPreset GetGlobalProgression(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162B984(relative to base address)
		int32_t GetGlobalPresetNumber(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162B96C(relative to base address)
	};


	// Class FabricRuntime.FabricRegisteredPlayerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFabricRegisteredPlayerComponent : public UActorComponent	
	{
	public:
		bool bEnabled; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		float OnScreenMessageTime; // 0xA4(0x4)
		int32_t CurrentMessageIndex; // 0xA8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricRegisteredPlayerComponent");
			return ret;
		}

		void LogRegisteredPlayerDiagnostic(FString Diagnostic, AController* Controller, bool bAsLog, bool bAsScreenMessage); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF75162C6A4(relative to base address)
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
		unsigned char UnknownData00_6[0x2]; // 0x8E6(0x2) UNKNOWN PROPERTY
		float CenterAlignmentBounds; // 0x8E8(0x4)
		float DistanceBetweenInstances; // 0x8EC(0x4)
		float DistanceBetweenTripletIntances; // 0x8F0(0x4)
		float DistanceBetweenInstanceSets; // 0x8F4(0x4)
		float DistanceBetweenTripletInstanceSets; // 0x8F8(0x4)
		EFabricNoteStyle NoteStyle; // 0x8FC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x8FD(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData02_7[0x8]; // 0x940(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricSteppedPreviewFXComponent");
			return ret;
		}

		void UpdateStepData(int32_t Index, bool bMarkRenderStateDirty); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751631AFC(relative to base address)
		void UpdateExistingTransforms(int32_t NumInstances, int32_t NumSteps); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516319B8(relative to base address)
		void UpdateDeviceEnabledFX(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751631924(relative to base address)
		void UpdateAllCurrentStepData(int32_t NumSteps, float StepLengthBeats); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75163185C(relative to base address)
		void SetSpanLength(int32_t InstanceIndex, float SpanLengthBeats); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751631174(relative to base address)
		void SetNumSteps(int32_t NumSteps); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751630E24(relative to base address)
		void SetNoteTime(int32_t InstanceIndex, float NoteTimeOffsetBeats); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751630D60(relative to base address)
		void SetNoteOn(int32_t InstanceIndex, float NoteOn, bool bMarkRenderStateDirty); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751630BE8(relative to base address)
		void SetNoteLength(int32_t InstanceIndex, float NoteLengthBeats); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751630B24(relative to base address)
		void SetGenericFloatValue(int32_t InstanceIndex, float FloatValue, bool bMarkRenderStateDirty); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516305B4(relative to base address)
		void OnQuarterNotesLengthChanged(float QuarterNoteLength); // Flags: Native|Protected, Memory Exec: 0x7FF751630384(relative to base address)
		void OnPageChanged(int32_t CurrentPage); // Flags: Native|Protected, Memory Exec: 0x7FF751630300(relative to base address)
		void OnNumTracksChanged(int32_t NumTracks); // Flags: Native|Protected, Memory Exec: 0x7FF75162CC30(relative to base address)
		void OnNumStepsChanged(int32_t NumSteps); // Flags: Native|Protected, Memory Exec: 0x7FF75162CBAC(relative to base address)
		void OnNoteStyleChanged(EFabricNoteStyle Style); // Flags: Native|Protected, Memory Exec: 0x7FF75163027C(relative to base address)
		void OnBeatScaleChanged(float BeatScale); // Flags: Native|Protected, Memory Exec: 0x7FF7516301F8(relative to base address)
		void OnBeatOffsetChanged(float BeatOffset); // Flags: Native|Protected, Memory Exec: 0x7FF751630174(relative to base address)
		float GetNoteOn(int32_t InstanceIndex); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162F688(relative to base address)
		void ConstructPreviewVisuals(int32_t NumSteps, float StepBeatLength, bool bForceUpdateTransform, bool bInTestNotesOn); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162F0E0(relative to base address)
	};


	// Class FabricRuntime.FabricSequencerPreviewFXComponent
	// Inherited from UFabricSteppedPreviewFXComponent -> UInstancedStaticMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x960 - 0x948)
	class UFabricSequencerPreviewFXComponent : public UFabricSteppedPreviewFXComponent	
	{
	public:
		TWeakObjectPtr<UFabricStepSequencerComponent*> StepSequencer; // 0x948(0x8)
		TWeakObjectPtr<UFabricStepSequencerGridComponent*> StepSequencerGrid; // 0x950(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x958(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricSequencerPreviewFXComponent");
			return ret;
		}

		void UpdateNoteOn(int32_t Index, int32_t NumSteps, bool bMarkRenderStateDirty); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF75162DC84(relative to base address)
		void SetSustainLength(int32_t InstanceIndex, float SustainLengthBeats); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF75162D90C(relative to base address)
		void SetSingleTrackNoteOn(int32_t InstanceIndex, int32_t TrackPICDIndex, float NoteOn, bool bMarkRenderStateDirty); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF75162D708(relative to base address)
		void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75162CCB4(relative to base address)
		void OnFullTableChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75162C924(relative to base address)
		void InitializePreviewFXComponent(UFabricStepSequencerComponent* InStepSequencer, UFabricStepSequencerGridComponent* InStepSequencerGrid, bool bInTestNotesOn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162C394(relative to base address)
	};


	// Class FabricRuntime.FabricSequencerSustainComponent
	// Inherited from UInstancedStaticMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x960 - 0x8E0)
	class UFabricSequencerSustainComponent : public UInstancedStaticMeshComponent	
	{
	public:
		TMap<FIntVector2, int32_t> StepToInstanceMapping; // 0x8E0(0x50)
		int32_t PICDStartBeat; // 0x930(0x4)
		int32_t PICDEndBeat; // 0x934(0x4)
		int32_t PICDLoopBeat; // 0x938(0x4)
		int32_t CPDDeviceEnabled; // 0x93C(0x4)
		float GridSquareExtents; // 0x940(0x4)
		float SustainInstanceYLocation; // 0x944(0x4)
		float SustainInstanceYScale; // 0x948(0x4)
		float SustainInstanceZScale; // 0x94C(0x4)
		TWeakObjectPtr<UFabricStepSequencerComponent*> StepSequencer; // 0x950(0x8)
		TWeakObjectPtr<UFabricStepSequencerGridComponent*> StepSequencerGrid; // 0x958(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricSequencerSustainComponent");
			return ret;
		}

		void UpdateVisibilityOfInstances(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162E060(relative to base address)
		void UpdateSustainMaterial(int32_t InstanceIndex, int32_t HeadNoteStepIndex, int32_t TrackIndex); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162DF6C(relative to base address)
		void UpdateSustainInstance(int32_t StepIndex, int32_t TrackIndex, int32_t PageIndex, bool bEnabled, bool bContinuous, bool bStepChanged); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162DD9C(relative to base address)
		void UpdatePipsOnGridChanged(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162DD88(relative to base address)
		void UpdateDeviceEnabledOnSustain(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162DBF0(relative to base address)
		void SetStartBeat(int32_t InstanceIndex, float StartBeatValue); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162D848(relative to base address)
		void SetLoopBeat(int32_t InstanceIndex, float LoopBeatValue); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162D244(relative to base address)
		void SetEndBeat(int32_t InstanceIndex, float EndBeatValue); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162CEEC(relative to base address)
		void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75162CD50(relative to base address)
		void OnPageChanged(int32_t CurrentPage); // Flags: Native|Protected, Memory Exec: 0x7FF75162CC30(relative to base address)
		void OnNumTracksChanged(int32_t NumTracks); // Flags: Native|Protected, Memory Exec: 0x7FF75162CBAC(relative to base address)
		void OnNumStepsChanged(int32_t NumSteps); // Flags: Native|Protected, Memory Exec: 0x7FF75162CB28(relative to base address)
		void OnFullTableChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75162C938(relative to base address)
		void InitializeSustainComponent(UFabricStepSequencerComponent* InStepSequencer, UFabricStepSequencerGridComponent* InStepSequencerGrid); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162C498(relative to base address)
		void FindHeadNoteAndUpdateInstance(int32_t StepIndex, int32_t TrackIndex); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162B80C(relative to base address)
		void FindAndDeleteInstance(int32_t StepIndex, int32_t TrackIndex); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162B74C(relative to base address)
		void ConstructSustains(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162B738(relative to base address)
		float CalculateSustainLength(float NumStepsCoveredBySustain); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162B5D8(relative to base address)
		void AddSustainInstance(int32_t StepIndex, int32_t TrackIndex); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75162B518(relative to base address)
	};


	// Class FabricRuntime.FabricSignificanceAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricSignificanceAsset : public UDataAsset	
	{
	public:
		TArray<FFabricSignificanceBasedUpdateBucket> UpdateBuckets; // 0x30(0x10)

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
		unsigned char UnknownData00_3[0x80]; // 0x328(0x80) UNKNOWN PROPERTY
		bool bIsChromatic; // 0x3A8(0x1)
		bool bModulationValueChanged; // 0x3A9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x3AA(0x6) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_6[0x2]; // 0x1DA(0x2) UNKNOWN PROPERTY
		float StepLengthQuarterNotes; // 0x1DC(0x4)
		float StepBeatScale; // 0x1E0(0x4)
		bool bSkipFourthStepInTriplet; // 0x1E4(0x1)
		EFabricNoteStyle NoteStyle; // 0x1E5(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x1E6(0x2) UNKNOWN PROPERTY
		int32_t MaxSteps; // 0x1E8(0x4)
		int32_t CurrentSteps; // 0x1EC(0x4)
		bool bMatchStepsToTimeSignature; // 0x1F0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1F1(0x3) UNKNOWN PROPERTY
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
		UClass* ContinuationControlClass; // 0x218(0x8)
		FStepSequenceTable LocalStepTable; // 0x220(0x28)
		FFabricStepTablePacked PackedStepTable; // 0x248(0x28)
		UFabricStepSequencerModulatable* StepSequencerModulatable; // 0x270(0x8)
		AActor* CachedContinuationControl; // 0x278(0x8)
		int32_t ContinuationRowIndex; // 0x280(0x4)
		int32_t ContinuationStepIndex; // 0x284(0x4)
		unsigned char UnknownData04_6[0x8]; // 0x288(0x8) UNKNOWN PROPERTY
		UMidiStepSequence* MetaSoundMidiStepSequence; // 0x290(0x8)
		unsigned char UnknownData05_7[0x70]; // 0x298(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricStepSequencerComponent");
			return ret;
		}

		void UpdatePackedStepTableSaveRecordIfChanged(FFabricStepTablePacked& InPackedStepTable); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751631A78(relative to base address)
		void ToggleStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751631768(relative to base address)
		void ToggleStepEnabled(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516316A0(relative to base address)
		void SetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751631564(relative to base address)
		void SetStepEnabled(int32_t Row, int32_t Column, bool bState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75163146C(relative to base address)
		void SetStepContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bIsContinuation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751631330(relative to base address)
		void SetStepContinuation(int32_t Row, int32_t Column, bool bIsContinuation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751631238(relative to base address)
		void SetQuarterNotesLength(float QuarterNotes); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516310F4(relative to base address)
		void SetPlaying(bool bNewPlaying); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751631074(relative to base address)
		void SetNumberTracks(int32_t NumTracks); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751630FC0(relative to base address)
		void SetNumberSteps(int32_t NumSteps); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751630F40(relative to base address)
		void SetNumberPages(int32_t NumPages); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751630EA4(relative to base address)
		void SetNoteStyle(EFabricNoteStyle Style); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751630CE0(relative to base address)
		void SetNoteForTrack(FMidiNote Note, int32_t Track); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751630950(relative to base address)
		void SetMusicClock(UMusicClockComponent* InMusicClock); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751630850(relative to base address)
		void SetMonophonic(bool bNewMonophonic); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516307D0(relative to base address)
		void SetMaxSteps(int32_t NumSteps); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75163073C(relative to base address)
		void SetLoop(bool bNewLoop); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516306BC(relative to base address)
		void SetCurrentPage(int32_t NewPage); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751630534(relative to base address)
		void SetBeatScale(float BeatScale); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516304B4(relative to base address)
		void RandomizePage(int32_t Page); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751630434(relative to base address)
		void RandomizeCurrentPage(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75163041C(relative to base address)
		void OnRep_PackedStepTable(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751630408(relative to base address)
		bool IsStepEnabledForAnyTrackOnPage(int32_t Page, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516300B4(relative to base address)
		bool IsStepEnabledForAnyTrack(int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75163001C(relative to base address)
		bool IsPageBlank(int32_t PageIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162FF8C(relative to base address)
		bool GetSupportsContinuation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E84E08C(relative to base address)
		float GetStepStartQuarterNotes(int32_t Step); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162FEE8(relative to base address)
		float GetStepStartBeat(int32_t Step); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162FE3C(relative to base address)
		bool GetStepIsContinuationOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162FD44(relative to base address)
		bool GetStepIsContinuation(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162FC78(relative to base address)
		bool GetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162FB80(relative to base address)
		bool GetStepEnabled(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162FAB4(relative to base address)
		float GetStepContinuationLengthOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F9BC(relative to base address)
		float GetStepContinuationLength(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F8F0(relative to base address)
		void GetPageData(int32_t PageIndex, FStepSequencePage& OutPageData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F7D8(relative to base address)
		int32_t GetNumUsedSteps(int32_t TotalSteps); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F71C(relative to base address)
		int32_t GetNumberTracks(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F7C0(relative to base address)
		int32_t GetNumberSteps(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F7A8(relative to base address)
		UMidiStepSequence GetMidiStepSequence(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C0DFEA8(relative to base address)
		int32_t GetMaxTracks(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F670(relative to base address)
		int32_t GetMaxSteps(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F658(relative to base address)
		float GetLongestContinuationLengthForColumnOnPage(int32_t Page, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F594(relative to base address)
		float GetLongestContinuationLengthForColumn(int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F4FC(relative to base address)
		float GetLengthTrackQuarterNotes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F4BC(relative to base address)
		float GetLengthTrackBeats(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F474(relative to base address)
		float GetLengthStepQuarterNotes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F454(relative to base address)
		float GetLengthStepBeats(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F42C(relative to base address)
		int32_t GetCurrentPage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75162F414(relative to base address)
		void GetContinuationFocusIndeces(int32_t& OutRowIndex, int32_t& OutStepIndex, int32_t& OutNumContinuationSteps); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75162F224(relative to base address)
		void ClearPage(int32_t Page, bool bUpdateSaveRecord); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162F024(relative to base address)
		void ClearCurrentPage(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162F00C(relative to base address)
		void ApplyTemplate(UMidiStepSequence* Template, int32_t StepSequencePageIndex, bool bUpdateSaveRecord); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75162EE2C(relative to base address)
		void ApplyPage(int32_t PageIndex, FStepSequencePage& PageData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75162ED50(relative to base address)
	};


	// Class FabricRuntime.FabricStepSequencerGridComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x100 (0x320 - 0x220)
	class UFabricStepSequencerGridComponent : public USceneComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x220(0x10) UNKNOWN PROPERTY
		FVector2D GridExtents; // 0x230(0x10)
		FVector2D GridSpacing; // 0x240(0x10)
		int32_t SingleTrackNumItemsPerRow; // 0x250(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x254(0x4) UNKNOWN PROPERTY
		FVector2D EditorPreviewGridSize; // 0x258(0x10)
		UClass* GridSquareClassPtr; // 0x268(0x8)
		TWeakObjectPtr<UClass*> GridSquareClass; // 0x270(0x20)
		TEnumAsByte<ESequencerType> SequencerType; // 0x290(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x291(0x3) UNKNOWN PROPERTY
		int32_t ActiveTrack; // 0x294(0x4)
		UFabricStepSequencerComponent* StepSequencer; // 0x298(0x8)
		TArray<FTrackRow> GridRows; // 0x2A0(0x10)
		unsigned char UnknownData03_6[0x60]; // 0x2B0(0x60) UNKNOWN PROPERTY
		int32_t MaxTrackIndexToLoadSquares; // 0x310(0x4)
		unsigned char UnknownData04_7[0xC]; // 0x314(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricStepSequencerGridComponent");
			return ret;
		}

		void SetGridVisible(bool bInGridVisible, bool bForceRefresh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75163936C(relative to base address)
		void SetBypassed(bool bBypassed); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751639234(relative to base address)
		void SetActiveTrackIndex(int32_t ActiveTrackIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516391B4(relative to base address)
		void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751638FA0(relative to base address)
		void OnRep_MaxTrackIndexToLoadSquares(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751638F74(relative to base address)
		void OnQuarterNotesLengthChanged(float QuarterNotesLength); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751638CEC(relative to base address)
		void OnNumTracksChanged(int32_t NumTracks); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751638EF4(relative to base address)
		void OnNumStepsChanged(int32_t NumSteps); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751638E74(relative to base address)
		void OnNoteStyleChanged(EFabricNoteStyle Style); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751638DF8(relative to base address)
		void OnFullTableChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751638DE4(relative to base address)
		void OnCurrentPageChanged(int32_t NewPage); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751638D68(relative to base address)
		void OnBeatScaleChanged(float BeatScale); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751638CEC(relative to base address)
		void OnBeatOffsetChanged(float BeatOffset); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751638CEC(relative to base address)
		void NotifyInteractionFocusTargetExternallyChanged(APlayerController* PlayerController, int32_t SourceRowIndex, int32_t SourceColumnIndex, int32_t FocusRowIndex, int32_t FocusColumnIndex, bool bIsFocused); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751638B28(relative to base address)
		bool IsBypassed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751638B10(relative to base address)
		float GetGridSquareYPosition(int32_t NumRows, int32_t RowIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751638A38(relative to base address)
		float GetGridSquareXPosition(int32_t NumSteps, int32_t StepIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751638974(relative to base address)
		FVector2D GetGridSquareSize(int32_t NumSteps, int32_t NumRows); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75163885C(relative to base address)
		FVector GetGridSquareExtents(int32_t RowIndex, int32_t ColumnIndex); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751638788(relative to base address)
	};


	// Class FabricRuntime.FabricStepSequencerGridSquareComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x5F0 - 0x590)
	class UFabricStepSequencerGridSquareComponent : public UStaticMeshComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x590(0x10) UNKNOWN PROPERTY
		float ContinuationControlInteractionDelay; // 0x5A0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5A4(0x4) UNKNOWN PROPERTY
		UFabricStepSequencerComponent* AssignedStepSequencer; // 0x5A8(0x8)
		int32_t ActiveTrack; // 0x5B0(0x4)
		int32_t AssignedStep; // 0x5B4(0x4)
		int32_t PreviousFocusStepIndex; // 0x5B8(0x4)
		unsigned char UnknownData02_7[0x34]; // 0x5BC(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricStepSequencerGridSquareComponent");
			return ret;
		}

		void SetActiveTrack(int32_t Track); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751639134(relative to base address)
		void OnContinuationControl_StartInteraction(APlayerController* Controller); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContinuationControl_EndInteraction(APlayerController* Controller); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanDoInteractionLogicOnStartInteraction(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751638680(relative to base address)
		bool CanDoInteractionLogicOnEndInteraction(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75163865C(relative to base address)
	};


	// Class FabricRuntime.FabricTextureModifierBase
	// Inherited from UFabricModulatable -> UObject
	// Size: 0x18 (0x340 - 0x328)
	class UFabricTextureModifierBase : public UFabricModulatable	
	{
	public:
		FMulticastInlineDelegate OnSourceTexturesChanged; // 0x328(0x10)
		UTexture* ModifiedTexture; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTextureModifierBase");
			return ret;
		}

		void OnSourceTextureChanged__DelegateSignature(TArray<FFabricTextureProviderTexture>& Textures); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FabricRuntime.FabricTextureTreeNode
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UFabricTextureTreeNode : public UObject	
	{
	public:
		TArray<UFabricTextureTreeNode*> Children; // 0x28(0x10)
		FFabricTextureProviderTexture Texture; // 0x38(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTextureTreeNode");
			return ret;
		}

		void Reset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751639120(relative to base address)
		void CopyProperties(UFabricTextureTreeNode* Other); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516386A4(relative to base address)
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
		unsigned char UnknownData00_7[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTextureProviderBase");
			return ret;
		}

		void SetSourceTexture(FFabricTextureProviderTexture& InTexture); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751639470(relative to base address)
		void OnTextureChanged__DelegateSignature(FFabricTextureProviderTexture& Texture); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FabricRuntime.FabricTimelinePreviewComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UFabricTimelinePreviewComponent : public UActorComponent	
	{
	public:
		UTimelineComponent* CurrentTimeline; // 0xA0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTimelinePreviewComponent");
			return ret;
		}

		void PreviewTimeline(UTimelineComponent* Timeline, float SecondsToPlay, bool bReverseAnimation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75163903C(relative to base address)
		bool GetShouldPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
	};


	// Class FabricRuntime.FabricTimelineSyncComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UFabricTimelineSyncComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		float ThresholdForSeekMS; // 0xB0(0x4)
		float ThresholdForStartSpeedAdjustMS; // 0xB4(0x4)
		float ThresholdForEndOfSpeedAdjustMS; // 0xB8(0x4)
		float SpeedAdjustFactor; // 0xBC(0x4)
		bool bPrintToScreen; // 0xC0(0x1)
		bool bLogCorrectedServerTimeDelta; // 0xC1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xC2(0x2) UNKNOWN PROPERTY
		float SpeedSyncTimeoutLength; // 0xC4(0x4)
		float TempoDeltaThrottleSeconds; // 0xC8(0x4)
		float MassiveSyncErrorTimeThresholdMin; // 0xCC(0x4)
		float MassiveSyncErrorTimeThresholdMax; // 0xD0(0x4)
		float MassiveSyncErrorTimeThresholdMultiplier; // 0xD4(0x4)
		UFabricMetaSoundManagerComponent* MetaSoundManager; // 0xD8(0x8)
		UMusicClockComponent* MusicClock; // 0xE0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
		FFabricTimelineSyncServerSongPosition ServerTimelineSyncServerSongPosition; // 0xF0(0x1C)
		unsigned char UnknownData03_7[0x34]; // 0x10C(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricTimelineSyncComponent");
			return ret;
		}

		void SetFabricMetasoundManager(UFabricMetaSoundManagerComponent* InMetaSoundManager); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516392B4(relative to base address)
		void OnTimelinePlayingChanged(EMusicClockState State); // Flags: Final|Native|Public, Memory Exec: 0x7FF74E2263E0(relative to base address)
		void OnRep_ServerCurrentSongPos(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751638F88(relative to base address)
	};


	// Class FabricRuntime.FabricVFXTopperDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricVFXTopperDataAsset : public UDataAsset	
	{
	public:
		TArray<FFabricVFXTopperDataEntry> VFXTopperDataEntries; // 0x30(0x10)

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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		int32_t WaveformNumSamplesHeld; // 0x30(0x4)
		int32_t WaveformSmoothingDistance; // 0x34(0x4)
		float WaveformSmoothingFactor; // 0x38(0x4)
		float WaveformDecayPerSecond; // 0x3C(0x4)
		UTexture2D* WaveformTexture; // 0x40(0x8)
		bool bEnableTextureRequests; // 0x48(0x1)
		unsigned char UnknownData01_7[0x2F]; // 0x49(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricWaveformTexture");
			return ret;
		}

		void Initialize(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751638AFC(relative to base address)
		UTexture2D GetWaveformTexture(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFB98(relative to base address)
		void AddNewValueToWaveformTexture(float Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516385DC(relative to base address)
		void AddMultipleValuesToWaveformTexture(TArray<float>& Values); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751638500(relative to base address)
	};


	// Class FabricRuntime.FabricInteractableTargetPayload
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFabricInteractableTargetPayload : public UObject	
	{
	public:
		TWeakObjectPtr<AActor*> TargetedActor; // 0x28(0x8)
		TWeakObjectPtr<UPrimitiveComponent*> TargetedComponent; // 0x30(0x8)

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
		UTargetingPreset* TargetingPreset; // 0xB40(0x8)
		FGameplayTag TargetsChangedTag; // 0xB48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY
		FScalableFloat TargetingInterval; // 0xB50(0x28)
		UFabricInteractableTargetPayload* PayloadCache; // 0xB78(0x8)
		FTargetingRequestHandle AsyncTargetingHandle; // 0xB80(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB84(0x4) UNKNOWN PROPERTY
		FTimerHandle TargetingTimerHandle; // 0xB88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FortGameplayAbility_FabricInteractableTargeting");
			return ret;
		}

		void StopTargeting(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75163956C(relative to base address)
		void StartTargeting(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751639558(relative to base address)
	};


	// Class FabricRuntime.FabricGameFeatureAction_OverrideFabricInteractionTool
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFabricGameFeatureAction_OverrideFabricInteractionTool : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UFortGadgetItemDefinition*> OverriddenPatchworkInteractionTool; // 0x28(0x20)

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
		unsigned char UnknownData00_7[0x4C]; // 0x5C(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricRuntime.FabricIslandSettingsWorldSubsystem");
			return ret;
		}

		void UnregisterBlueprintForFabricIslandSettingsInitialized(TScriptInterface<Class>& InFabricIslandSettingsInitializedInterface); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516724A8(relative to base address)
		void RegisterBlueprintForFabricIslandSettingsInitialized(TScriptInterface<Class>& InFabricIslandSettingsInitializedInterface, EFabricIslandSettingsMemoryModeType MemoryModeType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75167233C(relative to base address)
		bool CanUseFabricMemoryModeRelevantFeature(EFabricIslandSettingsMemoryModeType MemoryModeType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516722B0(relative to base address)
		bool AreMemoryQueriesAllowed(EFabricIslandSettingsMemoryModeType MemoryModeType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751672224(relative to base address)
	};

}
