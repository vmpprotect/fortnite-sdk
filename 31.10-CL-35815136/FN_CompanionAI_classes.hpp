#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CompanionAI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CompanionAI.PingComponentData
	// Inherited from UAIComponentData -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UPingComponentData : public UAIComponentData	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CompanionAI.PingComponentData");
			return ret;
		}

		void HandleOnNPCUnconvertedEvent(AFortPawn* UnconvertedFortPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF75067FCA0(relative to base address)
		void HandleOnNPCConvertedEvent(AFortPawn* InstigatorPawn, AFortPawn* ConvertedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF75067FBDC(relative to base address)
	};

}
