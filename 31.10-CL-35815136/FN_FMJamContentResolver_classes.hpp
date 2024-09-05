#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamContentResolver
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FMJamContentResolver.JamContentResolver
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1E8 (0x288 - 0xA0)
	class UJamContentResolver : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY
		TSet<FString> DownloadingLinkCodes; // 0xE8(0x50)
		TMap<FString, FString> DownloadedLinkCodes; // 0x138(0x50)
		TArray<FString> DownloadedLinkCodesInOrder; // 0x188(0x10)
		unsigned char UnknownData01_7[0xF0]; // 0x198(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamContentResolver.JamContentResolver");
			return ret;
		}

		void HandleResolveComplete(bool bSuccess, FString LinkCode, TArray<FString>& PluginURLs); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7510C0F34(relative to base address)
		void HandleGameFeatureLoadComplete(bool bSuccess, FString LinkCode, FString PluginURL); // Flags: Final|Native|Private, Memory Exec: 0x7FF7510C0E00(relative to base address)
	};


	// Class FMJamContentResolver.JamControllerComponent_ContentResolver
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJamControllerComponent_ContentResolver : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamContentResolver.JamControllerComponent_ContentResolver");
			return ret;
		}

		void Server_ResolveLinkCode(FString PlatformName, FString LinkCode); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF7510C1098(relative to base address)
		void Client_ResolveLinkCodeFinished(bool bSuccess, FString LinkCode, TArray<FString> PluginURLs); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF7510C0CA4(relative to base address)
	};

}
