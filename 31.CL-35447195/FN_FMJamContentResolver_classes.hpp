#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMJamContentResolver
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMJamContentResolver.JamContentResolver
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1E8 (0x288 - 0xA0)
	class UJamContentResolver : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData02_3[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY
		TSet DownloadingLinkCodes; // 0xE8(0x50)
		TMap DownloadedLinkCodes; // 0x138(0x50)
		TArray DownloadedLinkCodesInOrder; // 0x188(0x10)
		unsigned char UnknownData03_7[0xF0]; // 0x198(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamContentResolver.JamContentResolver");
			return ret;
		}

		void HandleResolveComplete(bool bSuccess, FString LinkCode, TArray& PluginURLs); // Flags: Final|Native|Private|HasOutParms 0x7FF414C1BC38
		void HandleGameFeatureLoadComplete(bool bSuccess, FString LinkCode, FString PluginURL); // Flags: Final|Native|Private 0x7FF414C1BB58
	};


	// Class FMJamContentResolver.JamControllerComponent_ContentResolver
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJamControllerComponent_ContentResolver : public UControllerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamContentResolver.JamControllerComponent_ContentResolver");
			return ret;
		}

		void Server_ResolveLinkCode(FString PlatformName, FString LinkCode); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414C1BDF8
		void Client_ResolveLinkCodeFinished(bool bSuccess, FString LinkCode, TArray PluginURLs); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF414C1BD18
	};

}
