#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaUtilities
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EpicMediaUtilities.EpicMediaServerTime
	// Inherited from AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class AEpicMediaServerTime : public AActor	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x290(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaUtilities.EpicMediaServerTime");
			return ret;
		}

		void ServerRequestServerTime(double requestUtcTime); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414652F18
		bool GetTimeUtc(FDateTime& OutDateTime); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414652E38
		void ClientReportServerTime(double requestUtcTime, double serverUtcTime); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414652D58
	};

}
