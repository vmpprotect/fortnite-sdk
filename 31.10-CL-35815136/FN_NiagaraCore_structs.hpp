#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NiagaraCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NiagaraCore.NiagaraVariableCommonReference
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraVariableCommonReference	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UObject* UnderlyingType; // 0x8(0x8)
	};


	// Struct NiagaraCore.NiagaraCompileHash
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraCompileHash	
	{
	public:
		TArray<char> DataHash; // 0x0(0x10)
	};

}
