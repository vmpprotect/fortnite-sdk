#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FX
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Irwin/FX/AnimNotify_Irwin_Footfalls.AnimNotify_Irwin_Footfalls_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x6 (0x3E - 0x38)
	class UAnimNotify_Irwin_Footfalls_C : public UAnimNotify	
	{
	public:
		int32_t FootfallsIndex; // 0x38(0x4)
		bool is_Running__; // 0x3C(0x1)
		bool is_Sprinting__; // 0x3D(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/FX/AnimNotify_Irwin_Footfalls.AnimNotify_Irwin_Footfalls_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
