#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ThrowingToyRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ThrowingToyRuntime.ThrowingToyTrackerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UThrowingToyTrackerComponent : public UActorComponent	
	{
	public:
		FThrowingToyDataArray ThrowingToysData; // 0xA0(0x118)
		unsigned char UnknownData01_7[0x8]; // 0x1B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ThrowingToyRuntime.ThrowingToyTrackerComponent");
			return ret;
		}

		void SetRecentThrowingToyItemRemovedReason(EThrowingToyItemRemovedReason RemovedReason); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D8B9C0
		AActor GetThrowingToy(FGuid& WorldItemGuid); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D8B8E0
		EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D8B800
		AActor GetAndReleaseThrowingToy(FGuid& WorldItemGuid); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D8B720
		void AddThrowingToy(AActor ThrowingToyActor, FGuid& WorldItemGuid); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D8B640
	};

}
