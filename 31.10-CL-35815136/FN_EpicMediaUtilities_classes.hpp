#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaUtilities
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicMediaUtilities.EpicMediaServerTime
	// Inherited from AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class AEpicMediaServerTime : public AActor	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x290(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaUtilities.EpicMediaServerTime");
			return ret;
		}

		void ServerRequestServerTime(double requestUtcTime); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74DDFDFC4(relative to base address)
		bool GetTimeUtc(FDateTime& OutDateTime); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DDFDF2C(relative to base address)
		void ClientReportServerTime(double requestUtcTime, double serverUtcTime); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74DDFDE54(relative to base address)
	};

}
