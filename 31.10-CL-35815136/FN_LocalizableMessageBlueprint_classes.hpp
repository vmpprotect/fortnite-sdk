#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LocalizableMessageBlueprint
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LocalizableMessageBlueprint.LocalizableMessageLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULocalizableMessageLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LocalizableMessageBlueprint.LocalizableMessageLibrary");
			return ret;
		}

		void Reset_LocalizableMessage(FLocalizableMessage& Message); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503EEF98(relative to base address)
		bool IsEmpty_LocalizableMessage(FLocalizableMessage& Message); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7503EEED8(relative to base address)
		FText Conv_LocalizableMessageToText(UObject* WorldContextObject, FLocalizableMessage& Message); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7503EED88(relative to base address)
	};

}
