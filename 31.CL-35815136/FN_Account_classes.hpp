#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Account
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Account.ExternalAccountProvider
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UExternalAccountProvider : public UObject	
	{
	public:
		TArray<FExternalAccountServiceConfig> Services; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Account.ExternalAccountProvider");
			return ret;
		}
	};


	// Class Account.OnlineAccountCommon
	// Inherited from UObject
	// Size: 0xA28 (0xA50 - 0x28)
	class UOnlineAccountCommon : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FString AvailabilityServiceGameName; // 0x38(0x10)
		bool bRequireLightswitchAtStartup; // 0x48(0x1)
		bool bPartialLoginEnabled; // 0x49(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		FString EulaKey; // 0x50(0x10)
		TArray<FString> EulaKeys; // 0x60(0x10)
		TMap<FString, FString> EulaKeyMapping; // 0x70(0x50)
		bool bEnableWaitingRoom; // 0xC0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		TArray<FWebEnvUrl> WebCreateEpicAccountUrl; // 0xC8(0x10)
		bool bAllowLocalLogout; // 0xD8(0x1)
		unsigned char UnknownData03_6[0x37]; // 0xD9(0x37) UNKNOWN PROPERTY
		float DefaultLoginStepTimeout; // 0x110(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		TMap<FName, float> CustomLoginStepTimeouts; // 0x118(0x50)
		bool bEnableDevLoginStepTimeouts; // 0x168(0x1)
		unsigned char UnknownData05_6[0x57]; // 0x169(0x57) UNKNOWN PROPERTY
		float DefaultLogoutStepTimeout; // 0x1C0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		TMap<FName, float> CustomLogoutStepTimeouts; // 0x1C8(0x50)
		bool bEnableDevLogoutStepTimeouts; // 0x218(0x1)
		unsigned char UnknownData07_6[0x77]; // 0x219(0x77) UNKNOWN PROPERTY
		TArray<FServiceLoginConfig> ServiceLoginConfig; // 0x290(0x10)
		FString RedeemAccessUrl; // 0x2A0(0x10)
		FString RequestFreeAccessUrl; // 0x2B0(0x10)
		FString RealGameAccessUrl; // 0x2C0(0x10)
		float SkipRedeemOfflinePurchasesChance; // 0x2D0(0x4)
		bool bUseFreeAccessInsteadOfGameAccess; // 0x2D4(0x1)
		bool bShouldGrantFreeAccess; // 0x2D5(0x1)
		unsigned char UnknownData08_6[0x1]; // 0x2D6(0x1) UNKNOWN PROPERTY
		bool bAllowHomeSharingAccess; // 0x2D7(0x1)
		bool bRequireUGCPrivilege; // 0x2D8(0x1)
		unsigned char UnknownData09_6[0x21F]; // 0x2D9(0x21F) UNKNOWN PROPERTY
		float AccessGrantDelaySeconds; // 0x4F8(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x4FC(0x4) UNKNOWN PROPERTY
		UWaitingRoomState* WaitingRoomState; // 0x500(0x8)
		unsigned char UnknownData11_7[0x548]; // 0x508(0x548) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Account.OnlineAccountCommon");
			return ret;
		}
	};


	// Class Account.WaitingRoomState
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UWaitingRoomState : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x34]; // 0x28(0x34) UNKNOWN PROPERTY
		int32_t GracePeriodMins; // 0x5C(0x4)
		unsigned char UnknownData01_7[0x28]; // 0x60(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Account.WaitingRoomState");
			return ret;
		}
	};

}
