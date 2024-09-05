#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseSimulationMetadata
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseSimulationMetadata.VerseSimulationAttribConfig
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UVerseSimulationAttribConfig : public UObject	
	{
	public:
		TArray AllowedEditablePropertyNames; // 0x28(0x10)
		TArray DisallowedEditablePropertyNames; // 0x38(0x10)
		TArray DisallowedObjectPropertyClasses; // 0x48(0x10)
		bool bAllowTuples; // 0x58(0x1)
		bool bAllowMultidimensionalArrays; // 0x59(0x1)
		bool bFilterProperties; // 0x5A(0x1)
		bool bFilterObjectProperties; // 0x5B(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseSimulationMetadata.VerseSimulationAttribConfig");
			return ret;
		}
	};

}
