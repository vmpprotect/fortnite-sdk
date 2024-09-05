#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMJamSystemRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMJamSystemRuntime.JamControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJamControllerComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer AdditionalTags; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamControllerComponent");
			return ret;
		}

		void UpdateJamUI(); // Flags: Event|Protected|BlueprintEvent 0x7FF414C257F8
		AController GetControllerOfClass(UClass ControllerType, bool bMatchChildTypes); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C25718
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
		TWeakObjectPtr EmoteWheelOverlay; // 0xD0(0x20)
		unsigned char UnknownData01_7[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamControllerComponent_LoopOptions");
			return ret;
		}

		bool ShouldAddJamCategoriesBeforeLocker(); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF414C26198
		void RemoveJamCategories(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C260B8
		void OnSparksLoadoutFilled(); // Flags: Final|Native|Protected 0x7FF414C25FD8
		void OnPawnSetAfterBlockingTag(APlayerState Player, APawn NewPawn, APawn OldPawn); // Flags: Final|Native|Protected 0x7FF414C25EF8
		void OnJamBlockingTagRemoved(); // Flags: Final|Native|Protected 0x7FF414C25E18
		void OnJamBlockingTagChanged(FGameplayTag UpdatedTag, int32_t TagCount); // Flags: Final|Native|Protected 0x7FF414C25D38
		void OnJamBlockingTagAdded(); // Flags: Final|Native|Protected 0x7FF414C25C58
		void OnFirstPawnSet(APlayerState Player, APawn NewPawn, APawn OldPawn); // Flags: Final|Native|Protected 0x7FF414C25B78
		void OnFinishedLoadingItemDefs(); // Flags: Final|Native|Protected 0x7FF414C25A98
		void BeginSetup(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C259B8
		void AddJamCategories(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C258D8
	};


	// Class FMJamSystemRuntime.JamControllerComponent_LoopPreloader
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJamControllerComponent_LoopPreloader : public UControllerComponent	
	{
	public:
		bool bHaveRegisteredForOnLoadoutFilled; // 0xA0(0x1)
		unsigned char UnknownData01_7[0x57]; // 0xA1(0x57) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader");
			return ret;
		}

		void OnSongCatalogRetrieved(bool bSuccess); // Flags: Final|Native|Protected 0x7FF414C26438
		void OnPawnSet(APlayerState Player, APawn NewPawn, APawn OldPawn); // Flags: Final|Native|Protected 0x7FF414C26358
		void OnLoadoutFilled(); // Flags: Final|Native|Protected 0x7FF414C26278
	};


	// Class FMJamSystemRuntime.JamGlobalControlsWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x400 - 0x3F8)
	class UJamGlobalControlsWidget : public UCommonActivatableWidget	
	{
	public:
		UCommonButtonBase Button_Close; // 0x3F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamGlobalControlsWidget");
			return ret;
		}

		void Close(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C26518
	};


	// Class FMJamSystemRuntime.JamOnOffSwitchComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x1B0 - 0xA0)
	class UJamOnOffSwitchComponent : public UPlayerStateComponent	
	{
	public:
		FScalableFloat bEnableJam; // 0xA0(0x28)
		UClass JamBlockerEffect; // 0xC8(0x8)
		FActiveGameplayEffectHandle JamBlockerEffectHandle; // 0xD0(0x8)
		FGameplayEventListenerHandle GamePhaseUpdatedEventHandle; // 0xD8(0x1C)
		FGameplayEventListenerHandle GamePhaseStepUpdatedEventHandle; // 0xF4(0x1C)
		FGlobalMemoryRequestHandle GlobalMemoryRequestHandle; // 0x110(0x8)
		unsigned char UnknownData01_7[0x98]; // 0x118(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamOnOffSwitchComponent");
			return ret;
		}

		bool ShouldApplyJamOnSplitscreenLogic(UObject WorldContextObject, APlayerController ReferenceController); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C267B8
		void OnPlayerStatePawnSet(APlayerState Player, APawn NewPawn, APawn OldPawn); // Flags: Final|Native|Protected 0x7FF414C266D8
		void OnMutatorUpdated(); // Flags: Final|Native|Protected 0x7FF414C265F8
	};


	// Class FMJamSystemRuntime.JamPlayerPawnComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJamPlayerPawnComponent : public UPawnComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer AdditionalTags; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamSystemRuntime.JamPlayerPawnComponent");
			return ret;
		}

		APawn GetPawnOfClass(UClass PawnType, bool bMatchChildTypes); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C26898
	};


	// Class FMJamSystemRuntime.JamQuestComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UJamQuestComponent : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY

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

		bool IsJamDebugDisplayEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C26A58
		void GetEmoteActionBinding(FString EmoteTemplateID, FEmoteActionBinding& OutCreatedEmote); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C26978
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
