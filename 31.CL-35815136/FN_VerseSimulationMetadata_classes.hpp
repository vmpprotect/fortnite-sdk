#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseSimulationMetadata
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseSimulationMetadata.VerseSimulationAttribConfig
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UVerseSimulationAttribConfig : public UObject	
	{
	public:
		TArray<FName> AllowedEditablePropertyNames; // 0x28(0x10)
		TArray<FName> DisallowedEditablePropertyNames; // 0x38(0x10)
		TArray<FSoftClassPath> DisallowedObjectPropertyClasses; // 0x48(0x10)
		bool bAllowTuples; // 0x58(0x1)
		bool bAllowMultidimensionalArrays; // 0x59(0x1)
		bool bFilterProperties; // 0x5A(0x1)
		bool bFilterObjectProperties; // 0x5B(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseSimulationMetadata.VerseSimulationAttribConfig");
			return ret;
		}
	};

}
