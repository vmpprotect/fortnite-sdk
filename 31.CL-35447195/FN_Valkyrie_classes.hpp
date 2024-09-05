#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Valkyrie
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Valkyrie/UMG/UEFN_TextBlock.UEFN_TextBlock_C
	// Inherited from UUEFNTextBlockBase -> UTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class UUEFN_TextBlock_C : public UUEFNTextBlockBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Valkyrie/UMG/UEFN_TextBlock.UEFN_TextBlock_C");
			return ret;
		}
	};

}
