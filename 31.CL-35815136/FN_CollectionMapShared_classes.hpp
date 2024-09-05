#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CollectionMapShared
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CollectionMapShared.AthenaCollectionScreenMapBase
	// Inherited from UAthenaCollectionScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x6C0 - 0x638)
	class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase	
	{
	public:
		UAthenaFullScreenMapBase* MapWidget; // 0x638(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x640(0x8) UNKNOWN PROPERTY
		UClass* CollectionIconType; // 0x648(0x8)
		TMap<FGameplayTag, UAthenaMapCollectionIcon*> MapCollectionIcons; // 0x650(0x50)
		unsigned char UnknownData01_7[0x20]; // 0x6A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CollectionMapShared.AthenaCollectionScreenMapBase");
			return ret;
		}
	};


	// Class CollectionMapShared.AthenaMapCollectionIcon
	// Inherited from UAthenaMapNavigableIconCustom -> UAthenaMapNavigableIcon -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x370 - 0x370)
	class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CollectionMapShared.AthenaMapCollectionIcon");
			return ret;
		}

		void SetSecondaryIcon(TWeakObjectPtr<UObject*>& SecondaryIcon); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsKnown(bool bIsKnown); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
