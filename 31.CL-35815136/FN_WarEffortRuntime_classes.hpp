#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WarEffortRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class WarEffortRuntime.FundingManager
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AFundingManager : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WarEffortRuntime.FundingManager");
			return ret;
		}

		void BroadcaseUpdatedFundsMessage(FItemFundingUpdatedFundingData& Payload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751242100(relative to base address)
	};

}
