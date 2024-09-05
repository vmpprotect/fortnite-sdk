#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: KeysAndLocksRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		bool NativeLockChildActorsPassAllRequirements(TArray& LockChildActors, UFortWorldItemDefinition ItemDefinition); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BD8558
		void NativeCalculateLockInteractStrings(TArray& Loot, TArray& RarityTexts, UFortWorldItemDefinition ItemDefinition, bool bShowCount, FText& HaveKey, FText& NeedKey, UFortWeaponModSetData WeaponModSetData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BD8478
		void GetLockChildActorsNativeHelper(TArray& LockChildActors); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414BD8398
	};

}
