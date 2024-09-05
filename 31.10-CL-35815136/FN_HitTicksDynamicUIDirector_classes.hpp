#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HitTicksDynamicUIDirector
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /HitTicks/HitTicksDynamicUIDirector.HitTicksDynamicUIDirector_C
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class AHitTicksDynamicUIDirector_C : public ADynamicUIDirectorBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		USceneComponent* DefaultSceneRoot; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/HitTicks/HitTicksDynamicUIDirector.HitTicksDynamicUIDirector_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_HitTicksDynamicUIDirector(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
