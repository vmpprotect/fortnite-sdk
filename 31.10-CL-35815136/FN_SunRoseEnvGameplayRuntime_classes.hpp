#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SunRoseEnvGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SunRoseEnvGameplayRuntime.FortChargingSet_SunroseDash
	// Inherited from UFortAttributeSet -> UAttributeSet -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UFortChargingSet_SunroseDash : public UFortAttributeSet	
	{
	public:
		FFortGameplayAttributeData CurrentCharges; // 0x30(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseEnvGameplayRuntime.FortChargingSet_SunroseDash");
			return ret;
		}

		void OnRep_CurrentCharges(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74857FE20(relative to base address)
	};

}
