#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LocalizableMessageBlueprint
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void Reset_LocalizableMessage(FLocalizableMessage& Message); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B8F8B8
		bool IsEmpty_LocalizableMessage(FLocalizableMessage& Message); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414B8F7D8
		FText Conv_LocalizableMessageToText(UObject WorldContextObject, FLocalizableMessage& Message); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414B8F6F8
	};

}
