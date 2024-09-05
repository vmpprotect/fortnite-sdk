#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicGamesEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicGamesEngine.VerseUEInputComponentBase
	// Inherited from UEntityActorPlayerComponent -> UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x370 (0x440 - 0xD0)
	class UVerseUEInputComponentBase : public UEntityActorPlayerComponent	
	{
	public:
		UInputComponent* InputComponent; // 0xD0(0x8)
		FVerseActionMappingArray ReplicatedActionMappingArray; // 0xD8(0x120)
		FVerseAxisMappingArray ReplicatedAxisMappingArray; // 0x1F8(0x120)
		FVerseInputBindingArray ReplicatedInputBindingArray; // 0x318(0x120)
		unsigned char UnknownData00_7[0x8]; // 0x438(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicGamesEngine.VerseUEInputComponentBase");
			return ret;
		}

		void ServerTriggerAxis(FName AxisName, float Value); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF7503E9A88(relative to base address)
		void ServerTriggerAction(FName ActionName, TEnumAsByte<EInputEvent> InputEvent); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF7503E999C(relative to base address)
	};

}
