#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EnhancedInput
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EnhancedInput.EnhancedPlayerMappableKeyProfile
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UEnhancedPlayerMappableKeyProfile : public UObject	
	{
	public:
		FGameplayTag ProfileIdentifier; // 0x28(0x4)
		FPlatformUserId OwningUserId; // 0x2C(0x4)
		FText DisplayName; // 0x30(0x10)
		TMap<FName, FKeyMappingRow> PlayerMappedKeys; // 0x40(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedPlayerMappableKeyProfile");
			return ret;
		}

		FString ToString(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D076D84(relative to base address)
		void SetDisplayName(FText& NewDisplayName); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0766A0(relative to base address)
		void ResetToDefault(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4A23E8(relative to base address)
		void ResetMappingToDefault(FName InMappingName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D076620(relative to base address)
		int32_t QueryPlayerMappedKeys(FPlayerMappableKeyQueryOptions& Options, TArray<FKey>& OutKeys); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0759F8(relative to base address)
		void K2_FindKeyMapping(FPlayerKeyMapping& OutKeyMapping, FMapPlayerKeyArgs& InArgs); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D074460(relative to base address)
		FGameplayTag GetProfileIdentifer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C910E0C(relative to base address)
		FText GetProfileDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D07329C(relative to base address)
		TMap GetPlayerMappingRows(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D07320C(relative to base address)
		int32_t GetMappingNamesForKey(FKey& InKey, TArray<FName>& OutMappingNames); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D072F50(relative to base address)
		int32_t GetMappedKeysInRow(FName MappingName, TArray<FKey>& OutKeys); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D072BBC(relative to base address)
		void DumpProfileToLog(); // Flags: Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74C349660(relative to base address)
		bool DoesMappingPassQueryOptions(FPlayerKeyMapping& PlayerMapping, FPlayerMappableKeyQueryOptions& Options); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D072398(relative to base address)
	};


	// Class EnhancedInput.EnhancedInputUserSettings
	// Inherited from USaveGame -> UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UEnhancedInputUserSettings : public USaveGame	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSettingsChanged; // 0x30(0x10)
		FMulticastInlineDelegate OnSettingsApplied; // 0x40(0x10)
		unsigned char UnknownData01_6[0x20]; // 0x50(0x20) UNKNOWN PROPERTY
		FGameplayTag CurrentProfileIdentifier; // 0x70(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TMap<FGameplayTag, UEnhancedPlayerMappableKeyProfile*> SavedKeyProfiles; // 0x78(0x50)
		TWeakObjectPtr<ULocalPlayer*> OwningLocalPlayer; // 0xC8(0x8)
		TSet<UInputMappingContext*> RegisteredMappingContexts; // 0xD0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputUserSettings");
			return ret;
		}

		bool UnregisterInputMappingContexts(TSet<UInputMappingContext*>& MappingContexts); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D077238(relative to base address)
		bool UnregisterInputMappingContext(UInputMappingContext* IMC); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0771A4(relative to base address)
		void UnMapPlayerKey(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D076DC8(relative to base address)
		bool SetKeyProfile(FGameplayTag& InProfileId); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D076740(relative to base address)
		void SaveSettings(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF747B0DC80(relative to base address)
		void ResetKeyProfileToDefault(FGameplayTag& ProfileId, FGameplayTagContainer& FailureReason); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D076510(relative to base address)
		void ResetAllPlayerKeysInRow(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0763E4(relative to base address)
		bool RegisterInputMappingContexts(TSet<UInputMappingContext*>& MappingContexts); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D075C38(relative to base address)
		bool RegisterInputMappingContext(UInputMappingContext* IMC); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D075BA4(relative to base address)
		void MapPlayerKey(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D074CB4(relative to base address)
		void MappingContextRegisteredWithSettings__DelegateSignature(UInputMappingContext* IMC); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MappableKeyProfileChanged__DelegateSignature(UEnhancedPlayerMappableKeyProfile* NewProfile); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsMappingContextRegistered(UInputMappingContext* IMC); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0740DC(relative to base address)
		UEnhancedPlayerMappableKeyProfile GetKeyProfileWithIdentifier(FGameplayTag& ProfileId); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D072A24(relative to base address)
		FGameplayTag GetCurrentKeyProfileIdentifier(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0729AC(relative to base address)
		UEnhancedPlayerMappableKeyProfile GetCurrentKeyProfile(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D072988(relative to base address)
		TSet FindMappingsInRow(FName MappingName); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0724BC(relative to base address)
		void EnhancedInputUserSettingsChanged__DelegateSignature(UEnhancedInputUserSettings* Settings); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnhancedInputUserSettingsApplied__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UEnhancedPlayerMappableKeyProfile CreateNewKeyProfile(FPlayerMappableKeyProfileCreationArgs& InArgs); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0722E8(relative to base address)
		void AsyncSaveSettings(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494B08D8(relative to base address)
		void ApplySettings(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C349660(relative to base address)
	};


	// Class EnhancedInput.EnhancedInputActionDelegateBinding
	// Inherited from UInputDelegateBinding -> UDynamicBlueprintBinding -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding	
	{
	public:
		TArray<FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputActionDelegateBinding");
			return ret;
		}
	};


	// Class EnhancedInput.EnhancedInputActionValueBinding
	// Inherited from UInputDelegateBinding -> UDynamicBlueprintBinding -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UEnhancedInputActionValueBinding : public UInputDelegateBinding	
	{
	public:
		TArray<FBlueprintEnhancedInputActionBinding> InputActionValueBindings; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputActionValueBinding");
			return ret;
		}
	};


	// Class EnhancedInput.EnhancedInputComponent
	// Inherited from UInputComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x160 - 0x128)
	class UEnhancedInputComponent : public UInputComponent	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x128(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputComponent");
			return ret;
		}

		FInputActionValue GetBoundActionValue(UInputAction* Action); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0726AC(relative to base address)
	};


	// Class EnhancedInput.EnhancedInputDeveloperSettings
	// Inherited from UDeveloperSettingsBackedByCVars -> UDeveloperSettings -> UObject
	// Size: 0x98 (0xC8 - 0x30)
	class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars	
	{
	public:
		TArray<FDefaultContextSetting> DefaultMappingContexts; // 0x30(0x10)
		TArray<FDefaultContextSetting> DefaultWorldSubsystemMappingContexts; // 0x40(0x10)
		FPerPlatformSettings PlatformSettings; // 0x50(0x10)
		TWeakObjectPtr<UClass*> UserSettingsClass; // 0x60(0x20)
		TWeakObjectPtr<UClass*> DefaultPlayerMappableKeyProfileClass; // 0x80(0x20)
		TWeakObjectPtr<UClass*> DefaultWorldInputClass; // 0xA0(0x20)
		bool bSendTriggeredEventsWhenInputIsFlushed : 1; // 0xC0:0(0x1)
		bool bEnableUserSettings : 1; // 0xC0:1(0x1)
		bool bEnableDefaultMappingContexts : 1; // 0xC0:2(0x1)
		bool bShouldOnlyTriggerLastActionInChord : 1; // 0xC0:3(0x1)
		bool bLogOnDeprecatedConfigUsed : 1; // 0xC0:4(0x1)
		bool bEnableWorldSubsystem : 1; // 0xC0:5(0x1)
		bool bShouldLogAllWorldSubsystemInputs : 1; // 0xC0:6(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputDeveloperSettings");
			return ret;
		}
	};


	// Class EnhancedInput.EnhancedInputLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEnhancedInputLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputLibrary");
			return ret;
		}

		void RequestRebuildControlMappingsUsingContext(UInputMappingContext* Context, bool bForceImmediately); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D076330(relative to base address)
		FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, EInputActionValueType ValueType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D074934(relative to base address)
		FInputActionValue MakeInputActionValue(double X, double Y, double Z, FInputActionValue& MatchValueType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D074794(relative to base address)
		bool IsActionKeyMappingPlayerMappable(FEnhancedActionKeyMapping& ActionKeyMapping); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D073F54(relative to base address)
		FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D0732D0(relative to base address)
		FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D0732B8(relative to base address)
		UPlayerMappableKeySettings GetPlayerMappableKeySettings(FEnhancedActionKeyMapping& ActionKeyMapping); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D073118(relative to base address)
		FName GetMappingName(FEnhancedActionKeyMapping& ActionKeyMapping); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D072E88(relative to base address)
		FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D072A0C(relative to base address)
		FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D0729F4(relative to base address)
		FInputActionValue GetBoundActionValue(AActor* Actor, UInputAction* Action); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D07274C(relative to base address)
		void FlushPlayerInput(APlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D072554(relative to base address)
		FString Conv_TriggerEventValueToString(ETriggerEvent TriggerEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D072254(relative to base address)
		FString Conv_InputActionValueToString(FInputActionValue ActionValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D072100(relative to base address)
		bool Conv_InputActionValueToBool(FInputActionValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D071FB0(relative to base address)
		FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D071E80(relative to base address)
		FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D071D5C(relative to base address)
		double Conv_InputActionValueToAxis1D(FInputActionValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D071C30(relative to base address)
		void BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D0718E4(relative to base address)
	};


	// Class EnhancedInput.EnhancedInputPlatformData
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UEnhancedInputPlatformData : public UObject	
	{
	public:
		TMap<UInputMappingContext*, UInputMappingContext*> MappingContextRedirects; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputPlatformData");
			return ret;
		}

		UInputMappingContext GetContextRedirect(UInputMappingContext* InContext); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0728F8(relative to base address)
	};


	// Class EnhancedInput.EnhancedInputPlatformSettings
	// Inherited from UPlatformSettings -> UObject
	// Size: 0x28 (0x68 - 0x40)
	class UEnhancedInputPlatformSettings : public UPlatformSettings	
	{
	public:
		TArray<TWeakObjectPtr> InputData; // 0x40(0x10)
		TArray<UClass*> InputDataClasses; // 0x50(0x10)
		bool bShouldLogMappingContextRedirects; // 0x60(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputPlatformSettings");
			return ret;
		}
	};


	// Class EnhancedInput.EnhancedInputSubsystemInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEnhancedInputSubsystemInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputSubsystemInterface");
			return ret;
		}

		void UpdateValueOfContinuousInputInjectionForPlayerMapping(FName MappingName, FInputActionValue RawValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0776E0(relative to base address)
		void UpdateValueOfContinuousInputInjectionForAction(UInputAction* Action, FInputActionValue RawValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D077560(relative to base address)
		void StopContinuousInputInjectionForPlayerMapping(FName MappingName); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D076D00(relative to base address)
		void StopContinuousInputInjectionForAction(UInputAction* Action); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D076C7C(relative to base address)
		void StartContinuousInputInjectionForPlayerMapping(FName MappingName, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D076A30(relative to base address)
		void StartContinuousInputInjectionForAction(UInputAction* Action, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0767E0(relative to base address)
		void RequestRebuildControlMappings(FModifyContextOptions& Options, EInputMappingRebuildType RebuildType); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0761C8(relative to base address)
		void RemovePlayerMappableConfig(UPlayerMappableInputConfig* Config, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0760EC(relative to base address)
		void RemoveMappingContext(UInputMappingContext* MappingContext, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D076010(relative to base address)
		int32_t RemoveAllPlayerMappedKeysForMapping(FName MappingName, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D075F34(relative to base address)
		void RemoveAllPlayerMappedKeys(FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D075E9C(relative to base address)
		EMappingQueryResult QueryMapKeyInContextSet(TArray<UInputMappingContext*>& PrioritizedActiveContexts, UInputMappingContext* InputContext, UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D075544(relative to base address)
		EMappingQueryResult QueryMapKeyInActiveContextSet(UInputMappingContext* InputContext, UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0751EC(relative to base address)
		TArray QueryKeysMappedToAction(UInputAction* Action); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D075140(relative to base address)
		void OnUserSettingsChanged(UEnhancedInputUserSettings* Settings); // Flags: Native|Protected, Memory Exec: 0x7FF74D0750C0(relative to base address)
		void OnUserKeyProfileChanged(UEnhancedPlayerMappableKeyProfile* InNewProfile); // Flags: Native|Protected, Memory Exec: 0x7FF74D075040(relative to base address)
		int32_t K2_RemovePlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D07466C(relative to base address)
		FKey K2_GetPlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D074584(relative to base address)
		int32_t K2_AddPlayerMappedKeyInSlot(FName MappingName, FKey NewKey, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0741B8(relative to base address)
		void InjectInputVectorForPlayerMapping(FName MappingName, FVector Value, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D073D20(relative to base address)
		void InjectInputVectorForAction(UInputAction* Action, FVector Value, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D073AEC(relative to base address)
		void InjectInputForPlayerMapping(FName MappingName, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0738A0(relative to base address)
		void InjectInputForAction(UInputAction* Action, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D073650(relative to base address)
		bool HasMappingContext(UInputMappingContext* MappingContext, int32_t& OutFoundPriority); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D07353C(relative to base address)
		UEnhancedInputUserSettings GetUserSettings(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C45C190(relative to base address)
		TArray GetAllPlayerMappedKeys(FName MappingName); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D072604(relative to base address)
		TArray GetAllPlayerMappableActionKeyMappings(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0725C4(relative to base address)
		void ClearAllMappings(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D071C18(relative to base address)
		void AddPlayerMappableConfig(UPlayerMappableInputConfig* Config, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D071808(relative to base address)
		void AddMappingContext(UInputMappingContext* MappingContext, int32_t Priority, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D0716F8(relative to base address)
	};


	// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
	// Inherited from ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0x1B8 (0x1E8 - 0x30)
	class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x150]; // 0x30(0x150) UNKNOWN PROPERTY
		FMulticastInlineDelegate ControlMappingsRebuiltDelegate; // 0x180(0x10)
		UEnhancedInputUserSettings* UserSettings; // 0x190(0x8)
		TMap<UInputAction*, FInjectedInput> ContinuouslyInjectedInputs; // 0x198(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem");
			return ret;
		}

		void OnControlMappingsRebuilt__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EnhancedInput.EnhancedInputWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1C8 (0x1F8 - 0x30)
	class UEnhancedInputWorldSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x150]; // 0x30(0x150) UNKNOWN PROPERTY
		UEnhancedPlayerInput* PlayerInput; // 0x180(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x188(0x10) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> CurrentInputStack; // 0x198(0x10)
		TMap<UInputAction*, FInjectedInput> ContinuouslyInjectedInputs; // 0x1A8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputWorldSubsystem");
			return ret;
		}

		bool RemoveActorInputComponent(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D075D20(relative to base address)
		void AddActorInputComponent(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0713E8(relative to base address)
	};


	// Class EnhancedInput.EnhancedPlayerInput
	// Inherited from UPlayerInput -> UObject
	// Size: 0x3A0 (0x838 - 0x498)
	class UEnhancedPlayerInput : public UPlayerInput	
	{
	public:
		TMap<UInputAction*, FKeyConsumptionOptions> KeyConsumptionData; // 0x498(0x50)
		TMap<UInputMappingContext*, int32_t> AppliedInputContexts; // 0x4E8(0x50)
		TArray<FEnhancedActionKeyMapping> EnhancedActionMappings; // 0x538(0x10)
		unsigned char UnknownData00_6[0x50]; // 0x548(0x50) UNKNOWN PROPERTY
		TMap<UInputAction*, FInputActionInstance> ActionInstanceData; // 0x598(0x50)
		unsigned char UnknownData01_6[0xF0]; // 0x5E8(0xF0) UNKNOWN PROPERTY
		TMap<FKey, FVector> KeysPressedThisTick; // 0x6D8(0x50)
		TMap<UInputAction*, FInjectedInputArray> InputsInjectedThisTick; // 0x728(0x50)
		TSet<UInputAction*> LastInjectedActions; // 0x778(0x50)
		unsigned char UnknownData02_7[0x70]; // 0x7C8(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedPlayerInput");
			return ret;
		}
	};


	// Class EnhancedInput.InputAction
	// Inherited from UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UInputAction : public UDataAsset	
	{
	public:
		FText ActionDescription; // 0x30(0x10)
		bool bTriggerWhenPaused; // 0x40(0x1)
		bool bConsumeInput; // 0x41(0x1)
		bool bConsumesActionAndAxisMappings; // 0x42(0x1)
		bool bReserveAllMappings; // 0x43(0x1)
		int32_t TriggerEventsThatConsumeLegacyKeys; // 0x44(0x4)
		EInputActionValueType ValueType; // 0x48(0x1)
		EInputActionAccumulationBehavior AccumulationBehavior; // 0x49(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		TArray<UInputTrigger*> Triggers; // 0x50(0x10)
		TArray<UInputModifier*> Modifiers; // 0x60(0x10)
		UPlayerMappableKeySettings* PlayerMappableKeySettings; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputAction");
			return ret;
		}
	};


	// Class EnhancedInput.InputDebugKeyDelegateBinding
	// Inherited from UInputDelegateBinding -> UDynamicBlueprintBinding -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UInputDebugKeyDelegateBinding : public UInputDelegateBinding	
	{
	public:
		TArray<FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputDebugKeyDelegateBinding");
			return ret;
		}
	};


	// Class EnhancedInput.InputMappingContext
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UInputMappingContext : public UDataAsset	
	{
	public:
		TArray<FEnhancedActionKeyMapping> Mappings; // 0x30(0x10)
		FText ContextDescription; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputMappingContext");
			return ret;
		}

		void UnmapKey(UInputAction* Action, FKey Key); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D076FB8(relative to base address)
		void UnmapAllKeysFromAction(UInputAction* Action); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D076EF4(relative to base address)
		void UnmapAll(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D076F74(relative to base address)
		void UnmapAction(UInputAction* Action); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D076EF4(relative to base address)
		FEnhancedActionKeyMapping MapKey(UInputAction* Action, FKey ToKey); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D074AAC(relative to base address)
	};


	// Class EnhancedInput.InputModifier
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInputModifier : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifier");
			return ret;
		}

		FInputActionValue ModifyRaw(UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74D074DE0(relative to base address)
		FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue); // Flags: Native|Event|Public|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF74D0732E8(relative to base address)
	};


	// Class EnhancedInput.InputModifierSmoothDelta
	// Inherited from UInputModifier -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UInputModifierSmoothDelta : public UInputModifier	
	{
	public:
		ENormalizeInputSmoothingType SmoothingMethod; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float Speed; // 0x2C(0x4)
		float EasingExponent; // 0x30(0x4)
		unsigned char UnknownData01_7[0x34]; // 0x34(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierSmoothDelta");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierDeadZone
	// Inherited from UInputModifier -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UInputModifierDeadZone : public UInputModifier	
	{
	public:
		float LowerThreshold; // 0x28(0x4)
		float UpperThreshold; // 0x2C(0x4)
		EDeadZoneType Type; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierDeadZone");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierScalar
	// Inherited from UInputModifier -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UInputModifierScalar : public UInputModifier	
	{
	public:
		FVector Scalar; // 0x28(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierScalar");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierScaleByDeltaTime
	// Inherited from UInputModifier -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInputModifierScaleByDeltaTime : public UInputModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierScaleByDeltaTime");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierNegate
	// Inherited from UInputModifier -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInputModifierNegate : public UInputModifier	
	{
	public:
		bool bX; // 0x28(0x1)
		bool bY; // 0x29(0x1)
		bool bZ; // 0x2A(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x2B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierNegate");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierSmooth
	// Inherited from UInputModifier -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UInputModifierSmooth : public UInputModifier	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierSmooth");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierResponseCurveExponential
	// Inherited from UInputModifier -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UInputModifierResponseCurveExponential : public UInputModifier	
	{
	public:
		FVector CurveExponent; // 0x28(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierResponseCurveExponential");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierResponseCurveUser
	// Inherited from UInputModifier -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UInputModifierResponseCurveUser : public UInputModifier	
	{
	public:
		UCurveFloat* ResponseX; // 0x28(0x8)
		UCurveFloat* ResponseY; // 0x30(0x8)
		UCurveFloat* ResponseZ; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierResponseCurveUser");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierFOVScaling
	// Inherited from UInputModifier -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInputModifierFOVScaling : public UInputModifier	
	{
	public:
		float FOVScale; // 0x28(0x4)
		EFOVScalingType FOVScalingType; // 0x2C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierFOVScaling");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierToWorldSpace
	// Inherited from UInputModifier -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInputModifierToWorldSpace : public UInputModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierToWorldSpace");
			return ret;
		}
	};


	// Class EnhancedInput.InputModifierSwizzleAxis
	// Inherited from UInputModifier -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInputModifierSwizzleAxis : public UInputModifier	
	{
	public:
		EInputAxisSwizzle Order; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputModifierSwizzleAxis");
			return ret;
		}
	};


	// Class EnhancedInput.InputTrigger
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UInputTrigger : public UObject	
	{
	public:
		float ActuationThreshold; // 0x28(0x4)
		bool bShouldAlwaysTick; // 0x2C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		FInputActionValue LastValue; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTrigger");
			return ret;
		}

		ETriggerState UpdateState(UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74D077320(relative to base address)
		bool IsActuated(FInputActionValue& ForValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D07400C(relative to base address)
		ETriggerType GetTriggerType(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74C5A798C(relative to base address)
	};


	// Class EnhancedInput.InputTriggerTimedBase
	// Inherited from UInputTrigger -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UInputTriggerTimedBase : public UInputTrigger	
	{
	public:
		float HeldDuration; // 0x50(0x4)
		bool bAffectedByTimeDilation; // 0x54(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x55(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerTimedBase");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerDown
	// Inherited from UInputTrigger -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UInputTriggerDown : public UInputTrigger	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerDown");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerPressed
	// Inherited from UInputTrigger -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UInputTriggerPressed : public UInputTrigger	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerPressed");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerReleased
	// Inherited from UInputTrigger -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UInputTriggerReleased : public UInputTrigger	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerReleased");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerHold
	// Inherited from UInputTriggerTimedBase -> UInputTrigger -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UInputTriggerHold : public UInputTriggerTimedBase	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x58(0x4) UNKNOWN PROPERTY
		float HoldTimeThreshold; // 0x5C(0x4)
		bool bIsOneShot; // 0x60(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerHold");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerHoldAndRelease
	// Inherited from UInputTriggerTimedBase -> UInputTrigger -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase	
	{
	public:
		float HoldTimeThreshold; // 0x58(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerHoldAndRelease");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerTap
	// Inherited from UInputTriggerTimedBase -> UInputTrigger -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UInputTriggerTap : public UInputTriggerTimedBase	
	{
	public:
		float TapReleaseTimeThreshold; // 0x58(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerTap");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerPulse
	// Inherited from UInputTriggerTimedBase -> UInputTrigger -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UInputTriggerPulse : public UInputTriggerTimedBase	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x58(0x4) UNKNOWN PROPERTY
		bool bTriggerOnStart; // 0x5C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		float Interval; // 0x60(0x4)
		int32_t TriggerLimit; // 0x64(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerPulse");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerChordAction
	// Inherited from UInputTrigger -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UInputTriggerChordAction : public UInputTrigger	
	{
	public:
		UInputAction* ChordAction; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerChordAction");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerChordBlocker
	// Inherited from UInputTriggerChordAction -> UInputTrigger -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UInputTriggerChordBlocker : public UInputTriggerChordAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerChordBlocker");
			return ret;
		}
	};


	// Class EnhancedInput.InputTriggerCombo
	// Inherited from UInputTrigger -> UObject
	// Size: 0x28 (0x78 - 0x50)
	class UInputTriggerCombo : public UInputTrigger	
	{
	public:
		int32_t CurrentComboStepIndex; // 0x50(0x4)
		float CurrentTimeBetweenComboSteps; // 0x54(0x4)
		TArray<FInputComboStepData> ComboActions; // 0x58(0x10)
		TArray<FInputCancelAction> InputCancelActions; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTriggerCombo");
			return ret;
		}
	};


	// Class EnhancedInput.PlayerMappableInputConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UPlayerMappableInputConfig : public UPrimaryDataAsset	
	{
	public:
		FName ConfigName; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FText ConfigDisplayName; // 0x38(0x10)
		bool bIsDeprecated; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		UObject* MetaData; // 0x50(0x8)
		TMap<UInputMappingContext*, int32_t> Contexts; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.PlayerMappableInputConfig");
			return ret;
		}

		void ResetToDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		bool IsDeprecated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0740C8(relative to base address)
		TArray GetPlayerMappableKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0731D0(relative to base address)
		UObject GetMetadata(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034578(relative to base address)
		TMap GetMappingContexts(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D072DF8(relative to base address)
		FEnhancedActionKeyMapping GetMappingByName(FName MappingName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D072D48(relative to base address)
		TArray GetKeysBoundToAction(UInputAction* InAction); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D072AC4(relative to base address)
		FText GetDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0729D8(relative to base address)
		FName GetConfigName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3345F8(relative to base address)
	};


	// Class EnhancedInput.PlayerMappableKeySettings
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UPlayerMappableKeySettings : public UObject	
	{
	public:
		UObject* MetaData; // 0x28(0x8)
		FName Name; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FText DisplayName; // 0x38(0x10)
		FText DisplayCategory; // 0x48(0x10)
		FGameplayTagContainer SupportedKeyProfiles; // 0x58(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.PlayerMappableKeySettings");
			return ret;
		}
	};

}
