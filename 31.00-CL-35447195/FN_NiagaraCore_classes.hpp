#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NiagaraCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
