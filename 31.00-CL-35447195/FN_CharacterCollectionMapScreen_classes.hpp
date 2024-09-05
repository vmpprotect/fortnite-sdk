#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CharacterCollectionMapScreen
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CharacterCollectionMapScreen.AthenaCollectionScreenMapCharacter
	// Inherited from UAthenaCollectionScreenMapBase -> UAthenaCollectionScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x6F0 - 0x6C8)
	class UAthenaCollectionScreenMapCharacter : public UAthenaCollectionScreenMapBase	
	{
	public:
		UCollectionScreenServiceVisualData SharedServiceVisualData; // 0x6C8(0x8)
		FGameplayTagContainer ExcludedProducts; // 0x6D0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CharacterCollectionMapScreen.AthenaCollectionScreenMapCharacter");
			return ret;
		}
	};


	// Class CharacterCollectionMapScreen.CollectionNPCServiceInfoOverlay
	// Inherited from UAthenaCollectionScreenInfoOverlay -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x4C8 - 0x4B0)
	class UCollectionNPCServiceInfoOverlay : public UAthenaCollectionScreenInfoOverlay	
	{
	public:
		UCollectionNPCServiceContainer Services; // 0x4B0(0x8)
		UImage Image_ServiceIcon; // 0x4B8(0x8)
		UCollectionScreenServiceVisualData SharedServiceVisualData; // 0x4C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CharacterCollectionMapScreen.CollectionNPCServiceInfoOverlay");
			return ret;
		}
	};

}
