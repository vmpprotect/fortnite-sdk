#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SunRoseEnvGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void OnRep_CurrentCharges(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D4E318
	};

}
