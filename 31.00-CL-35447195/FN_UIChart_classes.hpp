#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UIChart
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class UIChart.UIStateSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UUIStateSettings : public UDeveloperSettings	
	{
	public:
		float StateLoadTimeout; // 0x30(0x4)
		float StateUnloadTimeout; // 0x34(0x4)
		float WidgetStateComponentLoadTimeout; // 0x38(0x4)
		float WidgetStateComponentUnloadTimeout; // 0x3C(0x4)
		EWidgetStateComponentUnloadDefaultBehavior WidgetStateComponentDefaultUnloadBehavior; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateSettings");
			return ret;
		}
	};


	// Class UIChart.UIStateComponent
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UUIStateComponent : public UObject	
	{
	public:
		EStateComponentStatus Status; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UUIStateComponentConfiguration ComponentConfiguration; // 0x30(0x8)
		UUIState OwningState; // 0x38(0x8)
		UUIStateChartRegion StateChartRegion; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateComponent");
			return ret;
		}
	};


	// Class UIChart.CommonUIContextUpdaterUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UCommonUIContextUpdaterUIStateComponent : public UUIStateComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.CommonUIContextUpdaterUIStateComponent");
			return ret;
		}
	};


	// Class UIChart.UIStateComponentConfiguration
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUIStateComponentConfiguration : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateComponentConfiguration");
			return ret;
		}
	};


	// Class UIChart.CommonUIContextUpdaterUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCommonUIContextUpdaterUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.CommonUIContextUpdaterUIStateComponentConfiguration");
			return ret;
		}
	};


	// Class UIChart.ContextSetterUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UContextSetterUIStateComponent : public UUIStateComponent	
	{
	public:
		UContextSetterUIStateComponentConfiguration Configuration; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.ContextSetterUIStateComponent");
			return ret;
		}
	};


	// Class UIChart.ContextSetterUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UContextSetterUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		FContextSetterChanges ActivationChanges; // 0x28(0x20)
		FContextSetterChanges DeactivationChanges; // 0x48(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.ContextSetterUIStateComponentConfiguration");
			return ret;
		}
	};


	// Class UIChart.GlobalViewModelUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x60 (0xA8 - 0x48)
	class UGlobalViewModelUIStateComponent : public UUIStateComponent	
	{
	public:
		UGlobalViewModelUIStateComponentConfiguration Configuration; // 0x48(0x8)
		TSet ConditionContextKeys; // 0x50(0x50)
		unsigned char UnknownData01_7[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.GlobalViewModelUIStateComponent");
			return ret;
		}
	};


	// Class UIChart.GlobalViewModelUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGlobalViewModelUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		TArray ViewModelContexts; // 0x28(0x10)
		TArray ContextConditions; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.GlobalViewModelUIStateComponentConfiguration");
			return ret;
		}
	};


	// Class UIChart.StackingUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UStackingUIStateComponent : public UUIStateComponent	
	{
	public:
		EStateChartResourceScope StackScope; // 0x48(0x4)
		bool bAlwaysRemoveStackingBehavior; // 0x4C(0x1)
		bool bIsOnStack; // 0x4D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x4E(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.StackingUIStateComponent");
			return ret;
		}
	};


	// Class UIChart.InputConfigUIStateComponent
	// Inherited from UStackingUIStateComponent -> UUIStateComponent -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UInputConfigUIStateComponent : public UStackingUIStateComponent	
	{
	public:
		UInputConfigUIStateComponentConfiguration Configuration; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.InputConfigUIStateComponent");
			return ret;
		}
	};


	// Class UIChart.InputConfigUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInputConfigUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		ECommonInputMode InputMode; // 0x28(0x1)
		EMouseCaptureMode MouseCaptureMode; // 0x29(0x1)
		bool bHideCursorDuringCapture; // 0x2A(0x1)
		bool bIgnoreLookInput; // 0x2B(0x1)
		bool bIgnoreMovementInput; // 0x2C(0x1)
		bool bFlushPlayerInputWhenActivating; // 0x2D(0x1)
		bool bFlushPlayerInputWhenDeactivating; // 0x2E(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x2F(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.InputConfigUIStateComponentConfiguration");
			return ret;
		}
	};


	// Class UIChart.SceneUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x68 (0xB0 - 0x48)
	class USceneUIStateComponent : public UUIStateComponent	
	{
	public:
		USceneUIStateComponentConfiguration Configuration; // 0x48(0x8)
		TSet ConditionContextKeys; // 0x50(0x50)
		unsigned char UnknownData01_7[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.SceneUIStateComponent");
			return ret;
		}
	};


	// Class UIChart.SceneUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class USceneUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		UDynamicUIScene Scene; // 0x28(0x8)
		TArray ContextConditions; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.SceneUIStateComponentConfiguration");
			return ret;
		}
	};


	// Class UIChart.SplitScreenUIStateComponentBase
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x68 (0xB0 - 0x48)
	class USplitScreenUIStateComponentBase : public UUIStateComponent	
	{
	public:
		USplitScreenUIStateComponentBaseConfiguration BaseConfiguration; // 0x48(0x8)
		TMap ChildStateCharts; // 0x50(0x50)
		TArray DeactivatingStateCharts; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.SplitScreenUIStateComponentBase");
			return ret;
		}
	};


	// Class UIChart.SplitScreenUIStateComponentBaseConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class USplitScreenUIStateComponentBaseConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		UUIStateChart PlayerStateChart; // 0x28(0x8)
		bool bIgnoreTransitionParametersOnActivation; // 0x30(0x1)
		EUIStateTransitionUrgency UrgencyOnPlayerAdd; // 0x31(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer AnimationHintsOnPlayerAdd; // 0x38(0x20)
		bool bIgnoreTransitionParametersOnDeactivation; // 0x58(0x1)
		EUIStateTransitionUrgency UrgencyOnPlayerRemove; // 0x59(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer AnimationHintsOnPlayerRemove; // 0x60(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.SplitScreenUIStateComponentBaseConfiguration");
			return ret;
		}
	};


	// Class UIChart.StackingUIStateComponentSharedData
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UStackingUIStateComponentSharedData : public UObject	
	{
	public:
		TMap InstanceStacks; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.StackingUIStateComponentSharedData");
			return ret;
		}
	};


	// Class UIChart.UIStateConfiguration
	// Inherited from UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UUIStateConfiguration : public UObject	
	{
	public:
		FString Name; // 0x28(0x10)
		FGameplayTagContainer StateTags; // 0x38(0x20)
		int32_t ID; // 0x58(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		TArray Children; // 0x60(0x10)
		TArray ParallelRegions; // 0x70(0x10)
		TArray Components; // 0x80(0x10)
		float MinimumUnloadTime; // 0x90(0x4)
		EUIStateAutomationType AutomationType; // 0x94(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		TArray AutomationRules; // 0x98(0x10)
		bool bSupportsBacktracking; // 0xA8(0x1)
		bool bOverrideIncomingBacktracks; // 0xA9(0x1)
		unsigned char UnknownData05_7[0x6]; // 0xAA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateConfiguration");
			return ret;
		}
	};


	// Class UIChart.UIState
	// Inherited from UObject
	// Size: 0xC0 (0xE8 - 0x28)
	class UUIState : public UObject	
	{
	public:
		TArray Children; // 0x28(0x10)
		TArray ParallelRegions; // 0x38(0x10)
		TArray Components; // 0x48(0x10)
		UUIStateConfiguration Configuration; // 0x58(0x8)
		TArray OutgoingTransitions; // 0x60(0x10)
		float SecondsUntilTimeout; // 0x70(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		UUIState Parent; // 0x78(0x8)
		UUIStateChartRegion StateChartRegion; // 0x80(0x8)
		EStateComponentStatus Status; // 0x88(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		TSet ContinualAutomationContextKeys; // 0x90(0x50)
		unsigned char UnknownData05_7[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIState");
			return ret;
		}
	};


	// Class UIChart.UIStateChart
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UUIStateChart : public UDataAsset	
	{
	public:
		UUIStateConfiguration RootState; // 0x30(0x8)
		TArray Transitions; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChart");
			return ret;
		}
	};


	// Class UIChart.UIStateChartContext
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UUIStateChartContext : public UObject	
	{
	public:
		TMap Store; // 0x28(0x50)
		unsigned char UnknownData01_7[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartContext");
			return ret;
		}

		void BP_SetPlayerValue(ULocalPlayer LocalPlayer, FGameplayTag Key, int32_t Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC16B8
		void BP_SetPlayerStringValue(ULocalPlayer LocalPlayer, FGameplayTag Key, FString Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC15D8
		void BP_SetPlayerFloatValue(ULocalPlayer LocalPlayer, FGameplayTag Key, float Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC14F8
		void BP_SetPlayerBoolValue(ULocalPlayer LocalPlayer, FGameplayTag Key, bool Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC1418
		void BP_SetCommonStringValue(FGameplayTag Key, FString Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC1338
		void BP_SetCommonIntValue(FGameplayTag Key, int32_t Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC1258
		void BP_SetCommonFloatValue(FGameplayTag Key, float Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC1178
		void BP_SetCommonBoolValue(FGameplayTag Key, bool Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC1098
		UUIStateChartContextEntry BP_FindEntry(FGameplayTag Key); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC0FB8
		void BP_ClearPlayerValue(ULocalPlayer LocalPlayer, FGameplayTag& Key); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BC0ED8
		void BP_ClearEntry(FGameplayTag Key); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC0DF8
		void BP_ClearCommonValue(FGameplayTag Key); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC0D18
		void BP_ApplyPlayerChanges(ULocalPlayer LocalPlayer, FUIStateChartContextChangeSet& ContextChanges); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BC0C38
		void BP_ApplyCommonChanges(FUIStateChartContextChangeSet& ContextChanges); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BC0B58
	};


	// Class UIChart.UIStateChartContextEntry
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UUIStateChartContextEntry : public UObject	
	{
	public:
		FString CommonValue; // 0x28(0x10)
		TMap PlayerOverrides; // 0x38(0x50)
		unsigned char UnknownData01_7[0x20]; // 0x88(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartContextEntry");
			return ret;
		}

		bool IsEmptyForPlayer(ULocalPlayer InLocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC1E98
		FString GetPlayerValueAsString(ULocalPlayer InLocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC1DB8
		int32_t GetPlayerValueAsInt(ULocalPlayer InLocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC1CD8
		float GetPlayerValueAsFloat(ULocalPlayer InLocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC1BF8
		bool GetPlayerValueAsBool(ULocalPlayer InLocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC1B18
		FString GetCommonValueAsString(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC1A38
		int32_t GetCommonValueAsInt(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC1958
		float GetCommonValueAsFloat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC1878
		bool GetCommonValueAsBool(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC1798
	};


	// Class UIChart.UIStateChartManager
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0xC8 (0xF8 - 0x30)
	class UUIStateChartManager : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TMap PlayerEntries; // 0x38(0x50)
		TArray RemovedPlayerEntries; // 0x88(0x10)
		UUIStateChartContext Context; // 0x98(0x8)
		UUIStateChartResourceCollection GlobalResources; // 0xA0(0x8)
		unsigned char UnknownData03_7[0x50]; // 0xA8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartManager");
			return ret;
		}

		UUIStateChartContext GetContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC24B8
		UUIStateChartContext GetChartContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC23D8
		bool BP_RemoveStateChart(int32_t Key, FGameplayTagContainer& AnimationHints, FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BC22F8
		void BP_ReactivateStateChart(int32_t Key, FGameplayTagContainer& AnimationHints, FGameplayTag StateTag, EUIStateTransitionUrgency Urgency); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BC2218
		bool BP_DispatchTransitionEvent(FGameplayTag TransitionTag, ULocalPlayer StateChartOwner, FGameplayTagContainer& AnimationHints, FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency, bool bBacktrack); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BC2138
		bool BP_DeactivateStateChart(int32_t Key, FGameplayTagContainer& AnimationHints, FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BC2058
		int32_t BP_AddStateChart(UUIStateChart StateChartAsset, ULocalPlayer OwningLocalPlayer, FGameplayTagContainer& AnimationHints, FGameplayTag InitialStateTag, EUIStateTransitionUrgency Urgency); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BC1F78
	};


	// Class UIChart.UIStateChartManagerEntry
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UUIStateChartManagerEntry : public UObject	
	{
	public:
		UUIStateChartRegion MainRegion; // 0x28(0x8)
		UUIStateChartManagerPlayer ManagerPlayer; // 0x30(0x8)
		UUIStateChartResourceCollection StateChartResources; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartManagerEntry");
			return ret;
		}
	};


	// Class UIChart.UIStateChartManagerPlayer
	// Inherited from UObject
	// Size: 0xD0 (0xF8 - 0x28)
	class UUIStateChartManagerPlayer : public UObject	
	{
	public:
		TMap ActiveChartEntries; // 0x28(0x50)
		TMap InactiveChartEntries; // 0x78(0x50)
		TArray DeactivationRequests; // 0xC8(0x10)
		unsigned char UnknownData01_6[0x10]; // 0xD8(0x10) UNKNOWN PROPERTY
		UUIStateChartManager Manager; // 0xE8(0x8)
		UUIStateChartResourceCollection PlayerResources; // 0xF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartManagerPlayer");
			return ret;
		}
	};


	// Class UIChart.UIStateBacktrackStep
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UUIStateBacktrackStep : public UObject	
	{
	public:
		FGameplayTag TransitionTag; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UUIState ReturnState; // 0x30(0x8)
		UUIState AvailableState; // 0x38(0x8)
		FUIStateChartContextChangeSet ReverseContextChanges; // 0x40(0x50)
		TArray AvailablePaths; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateBacktrackStep");
			return ret;
		}
	};


	// Class UIChart.UIStateChartRegion
	// Inherited from UObject
	// Size: 0xC0 (0xE8 - 0x28)
	class UUIStateChartRegion : public UObject	
	{
	public:
		UUIStateChartManagerEntry ManagerEntry; // 0x28(0x8)
		UUIState RootState; // 0x30(0x8)
		UUIState ParentState; // 0x38(0x8)
		TArray ParallelRegions; // 0x40(0x10)
		TMap TaggedStates; // 0x50(0x50)
		UUIState ActiveLeafState; // 0xA0(0x8)
		UUIStateChartTransitionOperation ActiveTransitionOperation; // 0xA8(0x8)
		UUIStateChartTransitionOperation QueuedTransitionOperation; // 0xB0(0x8)
		TArray AvailableBacktrackPaths; // 0xB8(0x10)
		UUIStateBacktrackStep ActiveTransitionBacktrackStep; // 0xC8(0x8)
		FString ChartName; // 0xD0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartRegion");
			return ret;
		}
	};


	// Class UIChart.UIStateChartResourceCollection
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UUIStateChartResourceCollection : public UObject	
	{
	public:
		TMap ResourcesByClass; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartResourceCollection");
			return ret;
		}
	};


	// Class UIChart.UIStateChartTransition
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UUIStateChartTransition : public UObject	
	{
	public:
		UUIState Source; // 0x28(0x8)
		UUIState Target; // 0x30(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartTransition");
			return ret;
		}
	};


	// Class UIChart.UIStateChartTransitionOperation
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UUIStateChartTransitionOperation : public UObject	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UUIStateChartRegion Region; // 0x30(0x8)
		UUIState OriginState; // 0x38(0x8)
		UUIState EndState; // 0x40(0x8)
		UUIState TransitionTargetState; // 0x48(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x50(0x8) UNKNOWN PROPERTY
		TArray KnownStatesToActivate; // 0x58(0x10)
		TArray StatesToDeactivate; // 0x68(0x10)
		UUIStateChartTransitionOperationGroup Group; // 0x78(0x8)
		FUIStateRelay StateRelay; // 0x80(0x28)
		unsigned char UnknownData06_6[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		UUIState BacktrackReturnState; // 0xB0(0x8)
		unsigned char UnknownData07_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartTransitionOperation");
			return ret;
		}
	};


	// Class UIChart.UIStateChartTransitionOperationGroup
	// Inherited from UObject
	// Size: 0x180 (0x1A8 - 0x28)
	class UUIStateChartTransitionOperationGroup : public UObject	
	{
	public:
		TSet Operations; // 0x28(0x50)
		TSet OperationsReadyForContextUpdate; // 0x78(0x50)
		UUIStateChartContext Context; // 0xC8(0x8)
		ULocalPlayer LocalPlayer; // 0xD0(0x8)
		FUIStateChartContextChangeSet ContextChanges; // 0xD8(0x50)
		FUIStateChartContextChangeSet ReverseContextChanges; // 0x128(0x50)
		FUIStateChartTransitionOperationParameters Parameters; // 0x178(0x28)
		FGameplayTag TransitionEventTag; // 0x1A0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIChart.UIStateChartTransitionOperationGroup");
			return ret;
		}
	};

}
