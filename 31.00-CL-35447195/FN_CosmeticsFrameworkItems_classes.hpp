#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CosmeticsFrameworkItems
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CosmeticsFrameworkItems.CosmeticDataComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UCosmeticDataComponent : public UActorComponent	
	{
	public:
		TMap PropertyContainers; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkItems.CosmeticDataComponent");
			return ret;
		}

		void ResetProperties(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145AF958
		bool BP_FindProperty(FGameplayTag SlotTag, FGameplayTag PropertyTag, FCosmeticPropertyBase& OutProperty); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AF878
		bool BP_AddOrOverrideProperty(FGameplayTag SlotTag, FCosmeticPropertyBase& Property); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145AF798
	};

}
