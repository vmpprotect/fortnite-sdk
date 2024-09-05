#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseDevices
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VerseDevices.PlaylistOptionScriptValue
	// Inherited from FPlaylistOptionValue -> FTableRowBase
	// Size: 0x8 (0x98 - 0x90)
	struct FPlaylistOptionScriptValue : public FPlaylistOptionValue	
	{
	public:
		UClass Value; // 0x90(0x8)
	};


	// Struct VerseDevices.VerseDeviceFunctionPayload
	// Size: 0x8 (0x8 - 0x0)
	struct FVerseDeviceFunctionPayload	
	{
	public:
		AController Instigator; // 0x0(0x8)
	};

}
