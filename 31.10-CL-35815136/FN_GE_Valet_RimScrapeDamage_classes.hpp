#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GE_Valet_RimScrapeDamage
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Valet/GE_Valet_RimScrapeDamage.GE_Valet_RimScrapeDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Valet_RimScrapeDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/GE_Valet_RimScrapeDamage.GE_Valet_RimScrapeDamage_C");
			return ret;
		}
	};

}
