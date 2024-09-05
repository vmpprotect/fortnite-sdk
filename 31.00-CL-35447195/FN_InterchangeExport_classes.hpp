#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeExport
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class InterchangeExport.InterchangeTextureWriter
	// Inherited from UInterchangeWriterBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeTextureWriter : public UInterchangeWriterBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeExport.InterchangeTextureWriter");
			return ret;
		}
	};

}
