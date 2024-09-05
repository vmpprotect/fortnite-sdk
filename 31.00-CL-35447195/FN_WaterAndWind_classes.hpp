#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WaterAndWind
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/WaterAndWind/AnimNotifies/AnimNotify_PlayPlayerLandsWindEffect.AnimNotify_PlayPlayerLandsWindEffect_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UAnimNotify_PlayPlayerLandsWindEffect_C : public UAnimNotify	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/WaterAndWind/AnimNotifies/AnimNotify_PlayPlayerLandsWindEffect.AnimNotify_PlayPlayerLandsWindEffect_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6B59FC00
	};

}
