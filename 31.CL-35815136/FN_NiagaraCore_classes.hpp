#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NiagaraCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NiagaraCore.NiagaraMergeable
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraMergeable : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NiagaraCore.NiagaraMergeable");
			return ret;
		}
	};


	// Class NiagaraCore.NiagaraDataInterfaceBase
	// Inherited from UNiagaraMergeable -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraDataInterfaceBase : public UNiagaraMergeable	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NiagaraCore.NiagaraDataInterfaceBase");
			return ret;
		}
	};

}
