#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimNotifies
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /JunoSharedAnim/AnimNotifies/AnimNotify_ActivateDeathPhysics.AnimNotify_ActivateDeathPhysics_C
	// Inherited from UAnimNotify -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UAnimNotify_ActivateDeathPhysics_C : public UAnimNotify	
	{
	public:
		double Force; // 0x38(0x8)
		double Scale; // 0x40(0x8)
		FVector ImpulseDirectionOverride; // 0x48(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/JunoSharedAnim/AnimNotifies/AnimNotify_ActivateDeathPhysics.AnimNotify_ActivateDeathPhysics_C");
			return ret;
		}

		bool Received_Notify(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D5DC25400
	};

}
