#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WaterAndWind
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
