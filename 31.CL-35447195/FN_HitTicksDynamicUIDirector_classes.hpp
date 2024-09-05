#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HitTicksDynamicUIDirector
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /HitTicks/HitTicksDynamicUIDirector.HitTicksDynamicUIDirector_C
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class AHitTicksDynamicUIDirector_C : public ADynamicUIDirectorBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		USceneComponent DefaultSceneRoot; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/HitTicks/HitTicksDynamicUIDirector.HitTicksDynamicUIDirector_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D4B1A3700
		void ExecuteUbergraph_HitTicksDynamicUIDirector(int32_t EntryPoint); // Flags: Final 0x15D4B1A3800
	};

}
