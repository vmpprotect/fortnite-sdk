#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CollectionMapShared
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CollectionMapShared.AthenaCollectionScreenMapBase
	// Inherited from UAthenaCollectionScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x6C8 - 0x640)
	class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase	
	{
	public:
		UAthenaFullScreenMapBase MapWidget; // 0x640(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x648(0x8) UNKNOWN PROPERTY
		UClass CollectionIconType; // 0x650(0x8)
		TMap MapCollectionIcons; // 0x658(0x50)
		unsigned char UnknownData03_7[0x20]; // 0x6A8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CollectionMapShared.AthenaCollectionScreenMapBase");
			return ret;
		}
	};


	// Class CollectionMapShared.AthenaMapCollectionIcon
	// Inherited from UAthenaMapNavigableIconCustom -> UAthenaMapNavigableIcon -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x378 - 0x378)
	class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CollectionMapShared.AthenaMapCollectionIcon");
			return ret;
		}

		void SetSecondaryIcon(TWeakObjectPtr& SecondaryIcon); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 0x7FF414CE46B8
		void SetIsKnown(bool bIsKnown); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF414CE45D8
	};

}
