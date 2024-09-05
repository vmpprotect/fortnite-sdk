#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OnlineSubsystemEOS
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class OnlineSubsystemEOS.NetDriverEOS
	// Inherited from UNetDriverEOSBase -> UIpNetDriver -> UNetDriver -> UObject
	// Size: 0x0 (0x948 - 0x948)
	class UNetDriverEOS : public UNetDriverEOSBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemEOS.NetDriverEOS");
			return ret;
		}
	};


	// Class OnlineSubsystemEOS.EOSArtifactSettings
	// Inherited from UDataAsset -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEOSArtifactSettings : public UDataAsset	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemEOS.EOSArtifactSettings");
			return ret;
		}
	};


	// Class OnlineSubsystemEOS.EOSSettings
	// Inherited from URuntimeOptionsBase -> UObject
	// Size: 0x98 (0xD0 - 0x38)
	class UEOSSettings : public URuntimeOptionsBase	
	{
	public:
		FString CacheDir; // 0x38(0x10)
		FString DefaultArtifactName; // 0x48(0x10)
		FString RTCBackgroundMode; // 0x58(0x10)
		int32_t TickBudgetInMilliseconds; // 0x68(0x4)
		bool bEnableOverlay; // 0x6C(0x1)
		bool bEnableSocialOverlay; // 0x6D(0x1)
		bool bEnableEditorOverlay; // 0x6E(0x1)
		bool bPreferPersistentAuth; // 0x6F(0x1)
		TArray<FString> TitleStorageTags; // 0x70(0x10)
		int32_t TitleStorageReadChunkLength; // 0x80(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		TArray<FArtifactSettings> Artifacts; // 0x88(0x10)
		TArray<FString> AuthScopeFlags; // 0x98(0x10)
		bool bUseEAS; // 0xA8(0x1)
		bool bUseEOSConnect; // 0xA9(0x1)
		bool bMirrorStatsToEOS; // 0xAA(0x1)
		bool bMirrorAchievementsToEOS; // 0xAB(0x1)
		bool bUseEOSSessions; // 0xAC(0x1)
		bool bMirrorPresenceToEAS; // 0xAD(0x1)
		bool bUseNewLoginFlow; // 0xAE(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xAF(0x1) UNKNOWN PROPERTY
		FString SteamTokenType; // 0xB0(0x10)
		FString NintendoTokenType; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemEOS.EOSSettings");
			return ret;
		}
	};

}
