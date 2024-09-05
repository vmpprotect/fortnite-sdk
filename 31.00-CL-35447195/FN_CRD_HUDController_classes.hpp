#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_HUDController
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRD_HUDController.CustomHUDLayoutComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UCustomHUDLayoutComponent : public UActorComponent	
	{
	public:
		char DynamicUISceneLayerID; // 0xA0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UDynamicUIScene CachedScene; // 0xA8(0x8)
		TWeakObjectPtr CachedMutator; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_HUDController.CustomHUDLayoutComponent");
			return ret;
		}

		void UpdateDynamicUIScene(); // Flags: Final|Native|Protected 0x7FF414D851A0
		void PlayerPreRemoved(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer); // Flags: Final|Native|Protected 0x7FF414D850C0
		void HandleTeamIndexChanged(char TeamIndex); // Flags: Final|Native|Protected 0x7FF414D84FE0
		void HandleMinigameEnded(); // Flags: Final|Native|Protected 0x7FF414D84F00
		TWeakObjectPtr GetTargetWidgetClassFromTag(FGameplayTag& GameplayTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D84E20
	};

}
