#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NiagaraCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NiagaraCore.NiagaraVariableCommonReference
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraVariableCommonReference	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UObject UnderlyingType; // 0x8(0x8)
	};


	// Struct NiagaraCore.NiagaraCompileHash
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraCompileHash	
	{
	public:
		TArray DataHash; // 0x0(0x10)
	};

}
