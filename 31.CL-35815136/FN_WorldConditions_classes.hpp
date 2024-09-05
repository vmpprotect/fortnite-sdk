#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WorldConditions
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class WorldConditions.WorldConditionSchema
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UWorldConditionSchema : public UObject	
	{
	public:
		TArray<FWorldConditionContextDataDesc> ContextDataDescs; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WorldConditions.WorldConditionSchema");
			return ret;
		}
	};

}
