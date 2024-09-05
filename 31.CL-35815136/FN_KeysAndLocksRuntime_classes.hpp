#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: KeysAndLocksRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class KeysAndLocksRuntime.FortKeysAndLocksDisplayCase
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0x988 - 0x988)
	class AFortKeysAndLocksDisplayCase : public ABuildingGameplayActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KeysAndLocksRuntime.FortKeysAndLocksDisplayCase");
			return ret;
		}

		bool NativeLockChildActorsPassAllRequirements(TArray<UChildActorComponent*>& LockChildActors, UFortWorldItemDefinition* ItemDefinition); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A3A80(relative to base address)
		void NativeCalculateLockInteractStrings(TArray<FFortItemEntry>& Loot, TArray<FText>& RarityTexts, UFortWorldItemDefinition* ItemDefinition, bool bShowCount, FText& HaveKey, FText& NeedKey, UFortWeaponModSetData* WeaponModSetData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A3680(relative to base address)
		void GetLockChildActorsNativeHelper(TArray<UChildActorComponent*>& LockChildActors); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
