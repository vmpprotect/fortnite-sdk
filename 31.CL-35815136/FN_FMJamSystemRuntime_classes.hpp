#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamSystemRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FMJamSystemRuntime.JamControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJamControllerComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer AdditionalTags; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamControllerComponent");
			return ret;
		}

		void UpdateJamUI(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		AController GetControllerOfClass(UClass* ControllerType, bool bMatchChildTypes); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510E46A4(relative to base address)
		bool CanSuppressJamControls(); // Flags: Final|Native|Static|Protected|BlueprintCallable, Memory Exec: 0x7FF7510E4674(relative to base address)
	};


	// Class FMJamSystemRuntime.JamControllerComponent_LoopOptions
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UJamControllerComponent_LoopOptions : public UControllerComponent	
	{
	public:
		FName CategoryNameLocker; // 0xA0(0x4)
		FName CategoryNameAll; // 0xA4(0x4)
		FText CategoryTitleLocker; // 0xA8(0x10)
		FText CategoryTitleAll; // 0xB8(0x10)
		FGameplayTag CategoryTagLocker; // 0xC8(0x4)
		FGameplayTag CategoryTagAll; // 0xCC(0x4)
		TWeakObjectPtr<UClass*> EmoteWheelOverlay; // 0xD0(0x20)
		unsigned char UnknownData00_7[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamControllerComponent_LoopOptions");
			return ret;
		}

		bool ShouldAddJamCategoriesBeforeLocker(); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		void RemoveJamCategories(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510E5078(relative to base address)
		void OnSparksLoadoutFilled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E5064(relative to base address)
		void OnPawnSetAfterBlockingTag(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4E28(relative to base address)
		void OnJamBlockingTagRemoved(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4CF4(relative to base address)
		void OnJamBlockingTagChanged(FGameplayTag UpdatedTag, int32_t TagCount); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4B24(relative to base address)
		void OnJamBlockingTagAdded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4B10(relative to base address)
		void OnFirstPawnSet(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4A4C(relative to base address)
		void OnFinishedLoadingItemDefs(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4A38(relative to base address)
		void BeginSetup(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7493442E0(relative to base address)
		void AddJamCategories(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510E4660(relative to base address)
	};


	// Class FMJamSystemRuntime.JamControllerComponent_LoopPreloader
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJamControllerComponent_LoopPreloader : public UControllerComponent	
	{
	public:
		bool bHaveRegisteredForOnLoadoutFilled; // 0xA0(0x1)
		unsigned char UnknownData00_7[0x57]; // 0xA1(0x57) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader");
			return ret;
		}

		void OnSongCatalogRetrieved(bool bSuccess); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4FE4(relative to base address)
		void OnPawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4D30(relative to base address)
		void OnLoadoutFilled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4D08(relative to base address)
	};


	// Class FMJamSystemRuntime.JamGlobalControlsWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UJamGlobalControlsWidget : public UCommonActivatableWidget	
	{
	public:
		UCommonButtonBase* Button_Close; // 0x3F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamGlobalControlsWidget");
			return ret;
		}

		void Close(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7510E4690(relative to base address)
	};


	// Class FMJamSystemRuntime.JamOnOffSwitchComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x1B0 - 0xA0)
	class UJamOnOffSwitchComponent : public UPlayerStateComponent	
	{
	public:
		FScalableFloat bEnableJam; // 0xA0(0x28)
		UClass* JamBlockerEffect; // 0xC8(0x8)
		FActiveGameplayEffectHandle JamBlockerEffectHandle; // 0xD0(0x8)
		FGameplayEventListenerHandle GamePhaseUpdatedEventHandle; // 0xD8(0x1C)
		FGameplayEventListenerHandle GamePhaseStepUpdatedEventHandle; // 0xF4(0x1C)
		FGlobalMemoryRequestHandle GlobalMemoryRequestHandle; // 0x110(0x8)
		unsigned char UnknownData00_7[0x98]; // 0x118(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamOnOffSwitchComponent");
			return ret;
		}

		bool ShouldApplyJamOnSplitscreenLogic(UObject* WorldContextObject, APlayerController* ReferenceController); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74948A3F4(relative to base address)
		void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4EEC(relative to base address)
		void OnMutatorUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510E4D1C(relative to base address)
	};


	// Class FMJamSystemRuntime.JamPlayerPawnComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJamPlayerPawnComponent : public UPawnComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer AdditionalTags; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamPlayerPawnComponent");
			return ret;
		}

		APawn GetPawnOfClass(UClass* PawnType, bool bMatchChildTypes); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510E4930(relative to base address)
	};


	// Class FMJamSystemRuntime.JamQuestComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UJamQuestComponent : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamQuestComponent");
			return ret;
		}
	};


	// Class FMJamSystemRuntime.JamSystemEmoteBPFL
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJamSystemEmoteBPFL : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamSystemEmoteBPFL");
			return ret;
		}

		bool IsJamDebugDisplayEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510E4A1C(relative to base address)
		void GetEmoteActionBinding(FString EmoteTemplateID, FEmoteActionBinding& OutCreatedEmote); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510E4790(relative to base address)
	};


	// Class FMJamSystemRuntime.JamVerbProcessor_Jam
	// Inherited from UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0x98 - 0x98)
	class UJamVerbProcessor_Jam : public UObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamVerbProcessor_Jam");
			return ret;
		}
	};

}
