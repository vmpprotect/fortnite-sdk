#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WarEffortRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void BroadcaseUpdatedFundsMessage(FItemFundingUpdatedFundingData& Payload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CCD3B8
	};

}
