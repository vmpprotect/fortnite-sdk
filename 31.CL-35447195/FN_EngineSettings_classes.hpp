#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EngineSettings
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EngineSettings.ConsoleSettings
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UConsoleSettings : public UObject	
	{
	public:
		int32_t MaxScrollbackSize; // 0x28(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray ManualAutoCompleteList; // 0x30(0x10)
		TArray AutoCompleteMapPaths; // 0x40(0x10)
		float BackgroundOpacityPercentage; // 0x50(0x4)
		bool bOrderTopToBottom; // 0x54(0x1)
		bool bDisplayHelpInAutoComplete; // 0x55(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
		FColor InputColor; // 0x58(0x4)
		FColor HistoryColor; // 0x5C(0x4)
		FColor AutoCompleteCommandColor; // 0x60(0x4)
		FColor AutoCompleteCVarColor; // 0x64(0x4)
		FColor AutoCompleteFadedColor; // 0x68(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EngineSettings.ConsoleSettings");
			return ret;
		}
	};


	// Class EngineSettings.GameMapsSettings
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UGameMapsSettings : public UObject	
	{
	public:
		FString LocalMapOptions; // 0x28(0x10)
		FSoftObjectPath TransitionMap; // 0x38(0x18)
		bool bUseSplitscreen; // 0x50(0x1)
		TEnumAsByte TwoPlayerSplitscreenLayout; // 0x51(0x1)
		TEnumAsByte ThreePlayerSplitscreenLayout; // 0x52(0x1)
		EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53(0x1)
		bool bOffsetPlayerGamepadIds; // 0x54(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		FSoftClassPath GameInstanceClass; // 0x58(0x18)
		FSoftObjectPath GameDefaultMap; // 0x70(0x18)
		FSoftObjectPath ServerDefaultMap; // 0x88(0x18)
		FSoftClassPath GlobalDefaultGameMode; // 0xA0(0x18)
		FSoftClassPath GlobalDefaultServerGameMode; // 0xB8(0x18)
		TArray GameModeMapPrefixes; // 0xD0(0x10)
		TArray GameModeClassAliases; // 0xE0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EngineSettings.GameMapsSettings");
			return ret;
		}

		void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41446D318
		bool GetSkipAssigningGamepadToPlayer1(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41446D238
		UGameMapsSettings GetGameMapsSettings(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41446D158
	};


	// Class EngineSettings.GameNetworkManagerSettings
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UGameNetworkManagerSettings : public UObject	
	{
	public:
		int32_t MinDynamicBandwidth; // 0x28(0x4)
		int32_t MaxDynamicBandwidth; // 0x2C(0x4)
		int32_t TotalNetBandwidth; // 0x30(0x4)
		int32_t BadPingThreshold; // 0x34(0x4)
		bool bIsStandbyCheckingEnabled : 1; // 0x38:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float StandbyRxCheatTime; // 0x3C(0x4)
		float StandbyTxCheatTime; // 0x40(0x4)
		float PercentMissingForRxStandby; // 0x44(0x4)
		float PercentMissingForTxStandby; // 0x48(0x4)
		float PercentForBadPing; // 0x4C(0x4)
		float JoinInProgressStandbyWaitTime; // 0x50(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EngineSettings.GameNetworkManagerSettings");
			return ret;
		}
	};


	// Class EngineSettings.GameSessionSettings
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameSessionSettings : public UObject	
	{
	public:
		int32_t MaxSpectators; // 0x28(0x4)
		int32_t MaxPlayers; // 0x2C(0x4)
		bool bRequiresPushToTalk : 1; // 0x30:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EngineSettings.GameSessionSettings");
			return ret;
		}
	};


	// Class EngineSettings.GeneralEngineSettings
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeneralEngineSettings : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EngineSettings.GeneralEngineSettings");
			return ret;
		}
	};


	// Class EngineSettings.GeneralProjectSettings
	// Inherited from UObject
	// Size: 0xE0 (0x108 - 0x28)
	class UGeneralProjectSettings : public UObject	
	{
	public:
		FString CompanyName; // 0x28(0x10)
		FString CompanyDistinguishedName; // 0x38(0x10)
		FString CopyrightNotice; // 0x48(0x10)
		FString Description; // 0x58(0x10)
		FString Homepage; // 0x68(0x10)
		FString LicensingTerms; // 0x78(0x10)
		FString PrivacyPolicy; // 0x88(0x10)
		FGuid ProjectID; // 0x98(0x10)
		FString ProjectName; // 0xA8(0x10)
		FString ProjectVersion; // 0xB8(0x10)
		FString SupportContact; // 0xC8(0x10)
		FText ProjectDisplayedTitle; // 0xD8(0x10)
		FText ProjectDebugTitleInfo; // 0xE8(0x10)
		bool bShouldWindowPreserveAspectRatio; // 0xF8(0x1)
		bool bUseBorderlessWindow; // 0xF9(0x1)
		bool bStartInVR; // 0xFA(0x1)
		bool bAllowWindowResize; // 0xFB(0x1)
		bool bAllowClose; // 0xFC(0x1)
		bool bAllowMaximize; // 0xFD(0x1)
		bool bAllowMinimize; // 0xFE(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xFF(0x1) UNKNOWN PROPERTY
		float EyeOffsetForFakeStereoRenderingDevice; // 0x100(0x4)
		float FOVForFakeStereoRenderingDevice; // 0x104(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EngineSettings.GeneralProjectSettings");
			return ret;
		}
	};


	// Class EngineSettings.HudSettings
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UHudSettings : public UObject	
	{
	public:
		bool bShowHUD : 1; // 0x28:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray DebugDisplay; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EngineSettings.HudSettings");
			return ret;
		}
	};

}
