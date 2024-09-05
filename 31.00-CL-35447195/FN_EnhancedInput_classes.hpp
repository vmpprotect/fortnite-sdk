#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EnhancedInput
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		TMap PlayerMappedKeys; // 0x40(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedPlayerMappableKeyProfile");
			return ret;
		}

		FString ToString(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B04B8
		void SetDisplayName(FText& NewDisplayName); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B03D8
		void ResetToDefault(); // Flags: Native|Public|BlueprintCallable 0x7FF4145B02F8
		void ResetMappingToDefault(FName InMappingName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B0218
		int32_t QueryPlayerMappedKeys(FPlayerMappableKeyQueryOptions& Options, TArray& OutKeys); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B0138
		void K2_FindKeyMapping(FPlayerKeyMapping& OutKeyMapping, FMapPlayerKeyArgs& InArgs); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B0058
		FGameplayTag GetProfileIdentifer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AFF78
		FText GetProfileDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AFE98
		TMap GetPlayerMappingRows(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145AFDB8
		int32_t GetMappingNamesForKey(FKey& InKey, TArray& OutMappingNames); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145AFCD8
		int32_t GetMappedKeysInRow(FName MappingName, TArray& OutKeys); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145AFBF8
		void DumpProfileToLog(); // Flags: Native|Public|BlueprintCallable|Const 0x7FF4145AFB18
		bool DoesMappingPassQueryOptions(FPlayerKeyMapping& PlayerMapping, FPlayerMappableKeyQueryOptions& Options); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145AFA38
	};


	// Class EnhancedInput.EnhancedInputUserSettings
	// Inherited from USaveGame -> UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UEnhancedInputUserSettings : public USaveGame	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSettingsChanged; // 0x30(0x10)
		FMulticastInlineDelegate OnSettingsApplied; // 0x40(0x10)
		unsigned char UnknownData04_6[0x20]; // 0x50(0x20) UNKNOWN PROPERTY
		FGameplayTag CurrentProfileIdentifier; // 0x70(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TMap SavedKeyProfiles; // 0x78(0x50)
		TWeakObjectPtr OwningLocalPlayer; // 0xC8(0x8)
		TSet RegisteredMappingContexts; // 0xD0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputUserSettings");
			return ret;
		}

		bool UnregisterInputMappingContexts(TSet& MappingContexts); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4114BE8F8
		bool UnregisterInputMappingContext(UInputMappingContext IMC); // Flags: Native|Public|BlueprintCallable 0x7FF4114BE818
		void UnMapPlayerKey(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4114BE738
		bool SetKeyProfile(FGameplayTag& InProfileId); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4114BE658
		void SaveSettings(); // Flags: Native|Public|BlueprintCallable 0x7FF4114BE578
		void ResetKeyProfileToDefault(FGameplayTag& ProfileId, FGameplayTagContainer& FailureReason); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4114BE498
		void ResetAllPlayerKeysInRow(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4114BE3B8
		bool RegisterInputMappingContexts(TSet& MappingContexts); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4114BE2D8
		bool RegisterInputMappingContext(UInputMappingContext IMC); // Flags: Native|Public|BlueprintCallable 0x7FF4114BE1F8
		void MapPlayerKey(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4114BDF98
		void MappingContextRegisteredWithSettings__DelegateSignature(UInputMappingContext IMC); // Flags: MulticastDelegate|Public|Delegate 0x7FF4114BDEB8
		void MappableKeyProfileChanged__DelegateSignature(UEnhancedPlayerMappableKeyProfile NewProfile); // Flags: MulticastDelegate|Public|Delegate 0x7FF4114BDDD8
		bool IsMappingContextRegistered(UInputMappingContext IMC); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4114BDCF8
		UEnhancedPlayerMappableKeyProfile GetKeyProfileWithIdentifier(FGameplayTag& ProfileId); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4114BDC18
		FGameplayTag GetCurrentKeyProfileIdentifier(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4114BDB38
		UEnhancedPlayerMappableKeyProfile GetCurrentKeyProfile(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4114BDA58
		TSet FindMappingsInRow(FName MappingName); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4114BD790
		void EnhancedInputUserSettingsChanged__DelegateSignature(UEnhancedInputUserSettings Settings); // Flags: MulticastDelegate|Public|Delegate 0x7FF4114BD6B0
		void EnhancedInputUserSettingsApplied__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4114BD5D0
		UEnhancedPlayerMappableKeyProfile CreateNewKeyProfile(FPlayerMappableKeyProfileCreationArgs& InArgs); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4114BD430
		void AsyncSaveSettings(); // Flags: Native|Public|BlueprintCallable 0x7FF4114BD350
		void ApplySettings(); // Flags: Native|Public|BlueprintCallable 0x7FF4114BD270
	};


	// Class EnhancedInput.EnhancedInputActionDelegateBinding
	// Inherited from UInputDelegateBinding -> UDynamicBlueprintBinding -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding	
	{
	public:
		TArray InputActionDelegateBindings; // 0x28(0x10)

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
		TArray InputActionValueBindings; // 0x28(0x10)

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
		unsigned char UnknownData01_1[0x38]; // 0x128(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputComponent");
			return ret;
		}

		FInputActionValue GetBoundActionValue(UInputAction Action); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B0598
	};


	// Class EnhancedInput.EnhancedInputDeveloperSettings
	// Inherited from UDeveloperSettingsBackedByCVars -> UDeveloperSettings -> UObject
	// Size: 0x98 (0xC8 - 0x30)
	class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars	
	{
	public:
		TArray DefaultMappingContexts; // 0x30(0x10)
		TArray DefaultWorldSubsystemMappingContexts; // 0x40(0x10)
		FPerPlatformSettings PlatformSettings; // 0x50(0x10)
		TWeakObjectPtr UserSettingsClass; // 0x60(0x20)
		TWeakObjectPtr DefaultPlayerMappableKeyProfileClass; // 0x80(0x20)
		TWeakObjectPtr DefaultWorldInputClass; // 0xA0(0x20)
		bool bSendTriggeredEventsWhenInputIsFlushed : 1; // 0xC0:0(0x1)
		bool bEnableUserSettings : 1; // 0xC0:1(0x1)
		bool bEnableDefaultMappingContexts : 1; // 0xC0:2(0x1)
		bool bShouldOnlyTriggerLastActionInChord : 1; // 0xC0:3(0x1)
		bool bLogOnDeprecatedConfigUsed : 1; // 0xC0:4(0x1)
		bool bEnableWorldSubsystem : 1; // 0xC0:5(0x1)
		bool bShouldLogAllWorldSubsystemInputs : 1; // 0xC0:6(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

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

		void RequestRebuildControlMappingsUsingContext(UInputMappingContext Context, bool bForceImmediately); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF4145B1638
		FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, EInputActionValueType ValueType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B1558
		FInputActionValue MakeInputActionValue(double X, double Y, double Z, FInputActionValue& MatchValueType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145B1478
		bool IsActionKeyMappingPlayerMappable(FEnhancedActionKeyMapping& ActionKeyMapping); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145B1398
		FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B12B8
		FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B11D8
		UPlayerMappableKeySettings GetPlayerMappableKeySettings(FEnhancedActionKeyMapping& ActionKeyMapping); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145B10F8
		FName GetMappingName(FEnhancedActionKeyMapping& ActionKeyMapping); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145B1018
		FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B0F38
		FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B0E58
		FInputActionValue GetBoundActionValue(AActor Actor, UInputAction Action); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B0D78
		void FlushPlayerInput(APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145B0C98
		FString Conv_TriggerEventValueToString(ETriggerEvent TriggerEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B0BB8
		FString Conv_InputActionValueToString(FInputActionValue ActionValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B0AD8
		bool Conv_InputActionValueToBool(FInputActionValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B09F8
		FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145B0918
		FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145B0838
		double Conv_InputActionValueToAxis1D(FInputActionValue InValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145B0758
		void BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145B0678
	};


	// Class EnhancedInput.EnhancedInputPlatformData
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UEnhancedInputPlatformData : public UObject	
	{
	public:
		TMap MappingContextRedirects; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputPlatformData");
			return ret;
		}

		UInputMappingContext GetContextRedirect(UInputMappingContext InContext); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B1718
	};


	// Class EnhancedInput.EnhancedInputPlatformSettings
	// Inherited from UPlatformSettings -> UObject
	// Size: 0x28 (0x68 - 0x40)
	class UEnhancedInputPlatformSettings : public UPlatformSettings	
	{
	public:
		TArray InputData; // 0x40(0x10)
		TArray InputDataClasses; // 0x50(0x10)
		bool bShouldLogMappingContextRedirects; // 0x60(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

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

		void UpdateValueOfContinuousInputInjectionForPlayerMapping(FName MappingName, FInputActionValue RawValue); // Flags: Native|Public|BlueprintCallable 0x7FF4145B3158
		void UpdateValueOfContinuousInputInjectionForAction(UInputAction Action, FInputActionValue RawValue); // Flags: Native|Public|BlueprintCallable 0x7FF4145B3078
		void StopContinuousInputInjectionForPlayerMapping(FName MappingName); // Flags: Native|Public|BlueprintCallable 0x7FF4145B2F98
		void StopContinuousInputInjectionForAction(UInputAction Action); // Flags: Native|Public|BlueprintCallable 0x7FF4145B2EB8
		void StartContinuousInputInjectionForPlayerMapping(FName MappingName, FInputActionValue RawValue, TArray& Modifiers, TArray& Triggers); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B2DD8
		void StartContinuousInputInjectionForAction(UInputAction Action, FInputActionValue RawValue, TArray& Modifiers, TArray& Triggers); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B2CF8
		void RequestRebuildControlMappings(FModifyContextOptions& Options, EInputMappingRebuildType RebuildType); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B2C18
		void RemovePlayerMappableConfig(UPlayerMappableInputConfig Config, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B2B38
		void RemoveMappingContext(UInputMappingContext MappingContext, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B2A58
		int32_t RemoveAllPlayerMappedKeysForMapping(FName MappingName, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B2978
		void RemoveAllPlayerMappedKeys(FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B2898
		EMappingQueryResult QueryMapKeyInContextSet(TArray& PrioritizedActiveContexts, UInputMappingContext InputContext, UInputAction Action, FKey Key, TArray& OutIssues, EMappingQueryIssue BlockingIssues); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B27B8
		EMappingQueryResult QueryMapKeyInActiveContextSet(UInputMappingContext InputContext, UInputAction Action, FKey Key, TArray& OutIssues, EMappingQueryIssue BlockingIssues); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B26D8
		TArray QueryKeysMappedToAction(UInputAction Action); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B25F8
		void OnUserSettingsChanged(UEnhancedInputUserSettings Settings); // Flags: Native|Protected 0x7FF4145B2518
		void OnUserKeyProfileChanged(UEnhancedPlayerMappableKeyProfile InNewProfile); // Flags: Native|Protected 0x7FF4145B2438
		int32_t K2_RemovePlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B2358
		FKey K2_GetPlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B2278
		int32_t K2_AddPlayerMappedKeyInSlot(FName MappingName, FKey NewKey, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B2198
		void InjectInputVectorForPlayerMapping(FName MappingName, FVector Value, TArray& Modifiers, TArray& Triggers); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145B20B8
		void InjectInputVectorForAction(UInputAction Action, FVector Value, TArray& Modifiers, TArray& Triggers); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145B1FD8
		void InjectInputForPlayerMapping(FName MappingName, FInputActionValue RawValue, TArray& Modifiers, TArray& Triggers); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B1EF8
		void InjectInputForAction(UInputAction Action, FInputActionValue RawValue, TArray& Modifiers, TArray& Triggers); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B1E18
		bool HasMappingContext(UInputMappingContext MappingContext, int32_t& OutFoundPriority); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B1D38
		UEnhancedInputUserSettings GetUserSettings(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B1C58
		TArray GetAllPlayerMappedKeys(FName MappingName); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B1B78
		TArray GetAllPlayerMappableActionKeyMappings(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B1A98
		void ClearAllMappings(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145B19B8
		void AddPlayerMappableConfig(UPlayerMappableInputConfig Config, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B18D8
		void AddMappingContext(UInputMappingContext MappingContext, int32_t Priority, FModifyContextOptions& Options); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B17F8
	};


	// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
	// Inherited from ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0x1B8 (0x1E8 - 0x30)
	class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x150]; // 0x30(0x150) UNKNOWN PROPERTY
		FMulticastInlineDelegate ControlMappingsRebuiltDelegate; // 0x180(0x10)
		UEnhancedInputUserSettings UserSettings; // 0x190(0x8)
		TMap ContinuouslyInjectedInputs; // 0x198(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem");
			return ret;
		}

		void OnControlMappingsRebuilt__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF41149D0D0
	};


	// Class EnhancedInput.EnhancedInputWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1C8 (0x1F8 - 0x30)
	class UEnhancedInputWorldSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x150]; // 0x30(0x150) UNKNOWN PROPERTY
		UEnhancedPlayerInput PlayerInput; // 0x180(0x8)
		unsigned char UnknownData03_6[0x10]; // 0x188(0x10) UNKNOWN PROPERTY
		TArray CurrentInputStack; // 0x198(0x10)
		TMap ContinuouslyInjectedInputs; // 0x1A8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.EnhancedInputWorldSubsystem");
			return ret;
		}

		bool RemoveActorInputComponent(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B3318
		void AddActorInputComponent(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B3238
	};


	// Class EnhancedInput.EnhancedPlayerInput
	// Inherited from UPlayerInput -> UObject
	// Size: 0x3A0 (0x838 - 0x498)
	class UEnhancedPlayerInput : public UPlayerInput	
	{
	public:
		TMap KeyConsumptionData; // 0x498(0x50)
		TMap AppliedInputContexts; // 0x4E8(0x50)
		TArray EnhancedActionMappings; // 0x538(0x10)
		unsigned char UnknownData03_6[0x50]; // 0x548(0x50) UNKNOWN PROPERTY
		TMap ActionInstanceData; // 0x598(0x50)
		unsigned char UnknownData04_6[0xF0]; // 0x5E8(0xF0) UNKNOWN PROPERTY
		TMap KeysPressedThisTick; // 0x6D8(0x50)
		TMap InputsInjectedThisTick; // 0x728(0x50)
		TSet LastInjectedActions; // 0x778(0x50)
		unsigned char UnknownData05_7[0x70]; // 0x7C8(0x70) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		TArray Triggers; // 0x50(0x10)
		TArray Modifiers; // 0x60(0x10)
		UPlayerMappableKeySettings PlayerMappableKeySettings; // 0x70(0x8)

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
		TArray InputDebugKeyDelegateBindings; // 0x28(0x10)

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
		TArray Mappings; // 0x30(0x10)
		FText ContextDescription; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputMappingContext");
			return ret;
		}

		void UnmapKey(UInputAction Action, FKey Key); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B3778
		void UnmapAllKeysFromAction(UInputAction Action); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B3698
		void UnmapAll(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B35B8
		void UnmapAction(UInputAction Action); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B34D8
		FEnhancedActionKeyMapping MapKey(UInputAction Action, FKey ToKey); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B33F8
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

		FInputActionValue ModifyRaw(UEnhancedPlayerInput PlayerInput, FInputActionValue CurrentValue, float DeltaTime); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4145B3938
		FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue); // Flags: Native|Event|Public|HasDefaults|BlueprintEvent|Const 0x7FF4145B3858
	};


	// Class EnhancedInput.InputModifierSmoothDelta
	// Inherited from UInputModifier -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UInputModifierSmoothDelta : public UInputModifier	
	{
	public:
		ENormalizeInputSmoothingType SmoothingMethod; // 0x28(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float Speed; // 0x2C(0x4)
		float EasingExponent; // 0x30(0x4)
		unsigned char UnknownData03_7[0x34]; // 0x34(0x34) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x5]; // 0x2B(0x5) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

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
		UCurveFloat ResponseX; // 0x28(0x8)
		UCurveFloat ResponseY; // 0x30(0x8)
		UCurveFloat ResponseZ; // 0x38(0x8)

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
		unsigned char UnknownData01_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		FInputActionValue LastValue; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.InputTrigger");
			return ret;
		}

		ETriggerState UpdateState(UEnhancedPlayerInput PlayerInput, FInputActionValue ModifiedValue, float DeltaTime); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4145B3BD8
		bool IsActuated(FInputActionValue& ForValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B3AF8
		ETriggerType GetTriggerType(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4145B3A18
	};


	// Class EnhancedInput.InputTriggerTimedBase
	// Inherited from UInputTrigger -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UInputTriggerTimedBase : public UInputTrigger	
	{
	public:
		float HeldDuration; // 0x50(0x4)
		bool bAffectedByTimeDilation; // 0x54(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x55(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x4]; // 0x58(0x4) UNKNOWN PROPERTY
		float HoldTimeThreshold; // 0x5C(0x4)
		bool bIsOneShot; // 0x60(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x4]; // 0x58(0x4) UNKNOWN PROPERTY
		bool bTriggerOnStart; // 0x5C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
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
		UInputAction ChordAction; // 0x50(0x8)

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
		TArray ComboActions; // 0x58(0x10)
		TArray InputCancelActions; // 0x68(0x10)

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
		unsigned char UnknownData02_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FText ConfigDisplayName; // 0x38(0x10)
		bool bIsDeprecated; // 0x48(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		UObject MetaData; // 0x50(0x8)
		TMap Contexts; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.PlayerMappableInputConfig");
			return ret;
		}

		void ResetToDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B43B8
		bool IsDeprecated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B42D8
		TArray GetPlayerMappableKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B41F8
		UObject GetMetadata(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B4118
		TMap GetMappingContexts(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B4038
		FEnhancedActionKeyMapping GetMappingByName(FName MappingName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B3F58
		TArray GetKeysBoundToAction(UInputAction InAction); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B3E78
		FText GetDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B3D98
		FName GetConfigName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B3CB8
	};


	// Class EnhancedInput.PlayerMappableKeySettings
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UPlayerMappableKeySettings : public UObject	
	{
	public:
		UObject MetaData; // 0x28(0x8)
		FName Name; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FText DisplayName; // 0x38(0x10)
		FText DisplayCategory; // 0x48(0x10)
		FGameplayTagContainer SupportedKeyProfiles; // 0x58(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnhancedInput.PlayerMappableKeySettings");
			return ret;
		}
	};

}
