#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicGamesEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EpicGamesEngine.VerseUEInputComponentBase
	// Inherited from UEntityActorPlayerComponent -> UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x370 (0x440 - 0xD0)
	class UVerseUEInputComponentBase : public UEntityActorPlayerComponent	
	{
	public:
		UInputComponent InputComponent; // 0xD0(0x8)
		FVerseActionMappingArray ReplicatedActionMappingArray; // 0xD8(0x120)
		FVerseAxisMappingArray ReplicatedAxisMappingArray; // 0x1F8(0x120)
		FVerseInputBindingArray ReplicatedInputBindingArray; // 0x318(0x120)
		unsigned char UnknownData01_7[0x8]; // 0x438(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicGamesEngine.VerseUEInputComponentBase");
			return ret;
		}

		void ServerTriggerAxis(FName AxisName, float Value); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 0x7FF414B8F1B8
		void ServerTriggerAction(FName ActionName, TEnumAsByte InputEvent); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 0x7FF414B8F0D8
	};

}
