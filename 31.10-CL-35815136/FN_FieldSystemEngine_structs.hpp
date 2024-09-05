#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FieldSystemEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FieldSystemEngine.FieldObjectCommands
	// Size: 0x30 (0x30 - 0x0)
	struct FFieldObjectCommands	
	{
	public:
		TArray<FName> TargetNames; // 0x0(0x10)
		TArray<UFieldNodeBase*> RootNodes; // 0x10(0x10)
		TArray<UFieldSystemMetaData*> MetaDatas; // 0x20(0x10)
	};

}
