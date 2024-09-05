#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CosmeticsFrameworkItems
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CosmeticsFrameworkItems.CosmeticDataComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UCosmeticDataComponent : public UActorComponent	
	{
	public:
		TMap<FGameplayTag, FInstancedStructContainer> PropertyContainers; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkItems.CosmeticDataComponent");
			return ret;
		}

		void ResetProperties(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04EC68(relative to base address)
		bool BP_FindProperty(FGameplayTag SlotTag, FGameplayTag PropertyTag, FCosmeticPropertyBase& OutProperty); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D04E970(relative to base address)
		bool BP_AddOrOverrideProperty(FGameplayTag SlotTag, FCosmeticPropertyBase& Property); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D04E74C(relative to base address)
	};

}
