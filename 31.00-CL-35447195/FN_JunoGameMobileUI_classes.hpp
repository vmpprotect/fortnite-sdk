#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoGameMobileUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoGameMobileUI.FortMobileButtonBehaviorComponent_OffhandVisuals
	// Inherited from UFortMobileButtonBehaviorComponent_Visibility -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x20 (0x68 - 0x48)
	class UFortMobileButtonBehaviorComponent_OffhandVisuals : public UFortMobileButtonBehaviorComponent_Visibility	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x48(0x18) UNKNOWN PROPERTY
		UFortItem CachedOffhandItem; // 0x60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameMobileUI.FortMobileButtonBehaviorComponent_OffhandVisuals");
			return ret;
		}

		void HandleInventoryItemChanged(FJunoItemSlot& ItemSlot, EJunoItemChangeType ChangeType); // Flags: Final|Native|Private|HasOutParms 0x7FF414E36C80
	};


	// Class JunoGameMobileUI.JunoMobileActionButtonBehavior_Interact
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UJunoMobileActionButtonBehavior_Interact : public UFortMobileActionButtonBehavior	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameMobileUI.JunoMobileActionButtonBehavior_Interact");
			return ret;
		}
	};


	// Class JunoGameMobileUI.JunoButtonBehaviorComponent_WorldSettingsIconPicker
	// Inherited from UFortMobileButtonBehaviorComponent_TagIconPicker -> UFortMobileButtonBehaviorComponent_IconPicker -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UJunoButtonBehaviorComponent_WorldSettingsIconPicker : public UFortMobileButtonBehaviorComponent_TagIconPicker	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameMobileUI.JunoButtonBehaviorComponent_WorldSettingsIconPicker");
			return ret;
		}
	};


	// Class JunoGameMobileUI.JunoButtonBehaviorComponent_WorldSettingsVisibility
	// Inherited from UFortMobileButtonBehaviorComponent_TagVisibility -> UFortMobileButtonBehaviorComponent_Visibility -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UJunoButtonBehaviorComponent_WorldSettingsVisibility : public UFortMobileButtonBehaviorComponent_TagVisibility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameMobileUI.JunoButtonBehaviorComponent_WorldSettingsVisibility");
			return ret;
		}
	};


	// Class JunoGameMobileUI.JunoGameDynamicMobileUIDirector
	// Inherited from ADynamicBacchusHUDDirector -> ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x28 (0x4B8 - 0x490)
	class AJunoGameDynamicMobileUIDirector : public ADynamicBacchusHUDDirector	
	{
	public:
		FGameplayTagContainer HUDTagsToSkip; // 0x490(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x4B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector");
			return ret;
		}
	};


	// Class JunoGameMobileUI.JunoMobileUIDirectorComponent
	// Inherited from UJunoDynamicUIDirectorComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x160 - 0xB0)
	class UJunoMobileUIDirectorComponent : public UJunoDynamicUIDirectorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY
		TMap HUDContextVisibilityTagToScene; // 0xD0(0x50)
		unsigned char UnknownData03_7[0x40]; // 0x120(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameMobileUI.JunoMobileUIDirectorComponent");
			return ret;
		}
	};

}
