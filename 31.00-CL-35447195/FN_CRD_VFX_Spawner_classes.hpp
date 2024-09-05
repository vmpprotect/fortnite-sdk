#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_VFX_Spawner
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRD_VFX_Spawner.CRD_VFX_SpawnerFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCRD_VFX_SpawnerFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_VFX_Spawner.CRD_VFX_SpawnerFunctionLibrary");
			return ret;
		}

		UNiagaraComponent SpawnTransientSystemAttached(UNiagaraSystem SystemTemplate, USceneComponent AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414D8BAA0
	};

}
