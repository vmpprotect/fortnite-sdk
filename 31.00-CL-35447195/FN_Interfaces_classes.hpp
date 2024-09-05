#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Interfaces
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /JunoSharedAnim/Interfaces/BPI_Juno_AnimNotify.BPI_Juno_AnimNotify_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBPI_Juno_AnimNotify_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/JunoSharedAnim/Interfaces/BPI_Juno_AnimNotify.BPI_Juno_AnimNotify_C");
			return ret;
		}

		void OnNotify_WarpUpdate(FName WarpTargetName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC24C00
		void OnNotify_WarpEnd(FName WarpTargetName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC24B00
		void OnNotify_WarpBegin(FName WarpTargetName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC24A00
		void I_ActivateDeathPhysics(double Force, double Scale, FVector ImpulseDirectionOverride, bool UseHeroVelocities); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC24900
	};

}
