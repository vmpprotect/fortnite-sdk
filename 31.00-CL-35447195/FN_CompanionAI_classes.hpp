#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CompanionAI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CompanionAI.PingComponentData
	// Inherited from UAIComponentData -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UPingComponentData : public UAIComponentData	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CompanionAI.PingComponentData");
			return ret;
		}

		void HandleOnNPCUnconvertedEvent(AFortPawn UnconvertedFortPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Private 0x7FF414BD43B8
		void HandleOnNPCConvertedEvent(AFortPawn InstigatorPawn, AFortPawn ConvertedPawn); // Flags: Final|Native|Private 0x7FF414BD42D8
	};

}
