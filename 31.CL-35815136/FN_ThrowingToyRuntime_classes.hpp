#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ThrowingToyRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ThrowingToyRuntime.ThrowingToyTrackerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UThrowingToyTrackerComponent : public UActorComponent	
	{
	public:
		FThrowingToyDataArray ThrowingToysData; // 0xA0(0x118)
		unsigned char UnknownData00_7[0x8]; // 0x1B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ThrowingToyRuntime.ThrowingToyTrackerComponent");
			return ret;
		}

		void SetRecentThrowingToyItemRemovedReason(EThrowingToyItemRemovedReason RemovedReason); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516DE748(relative to base address)
		AActor GetThrowingToy(FGuid& WorldItemGuid); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516DE694(relative to base address)
		EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74EAE4FD4(relative to base address)
		AActor GetAndReleaseThrowingToy(FGuid& WorldItemGuid); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516DE5F8(relative to base address)
		void AddThrowingToy(AActor* ThrowingToyActor, FGuid& WorldItemGuid); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516DE4BC(relative to base address)
	};

}
