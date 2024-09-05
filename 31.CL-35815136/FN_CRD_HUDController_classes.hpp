#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_HUDController
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRD_HUDController.CustomHUDLayoutComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UCustomHUDLayoutComponent : public UActorComponent	
	{
	public:
		char DynamicUISceneLayerID; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UDynamicUIScene* CachedScene; // 0xA8(0x8)
		TWeakObjectPtr<AFortAthenaMutator_HUDElementVisibility*> CachedMutator; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_HUDController.CustomHUDLayoutComponent");
			return ret;
		}

		void UpdateDynamicUIScene(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516BDDC0(relative to base address)
		void PlayerPreRemoved(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516BDB90(relative to base address)
		void HandleTeamIndexChanged(char TeamIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516BDB14(relative to base address)
		void HandleMinigameEnded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516BDB00(relative to base address)
		TWeakObjectPtr GetTargetWidgetClassFromTag(FGameplayTag& GameplayTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
