#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoCoreUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/JunoCoreUI.EJunoPlayerCardStatus
	enum EJunoPlayerCardStatus
	{
		EJunoPlayerCardStatus__InWorld = 0,
		EJunoPlayerCardStatus__NotInWorld = 1,
		EJunoPlayerCardStatus__Count = 2,
	};


	// Enum /Script/JunoCoreUI.EJunoUserGeneratedTextErrorType
	enum EJunoUserGeneratedTextErrorType
	{
		EJunoUserGeneratedTextErrorType__None = 0,
		EJunoUserGeneratedTextErrorType__NameAlreadyUsed = 1,
		EJunoUserGeneratedTextErrorType__NameNotSupported = 2,
		EJunoUserGeneratedTextErrorType__SpecialCharacter = 3,
		EJunoUserGeneratedTextErrorType__CharacterLimit = 4,
		EJunoUserGeneratedTextErrorType__NameViolation = 5,
		EJunoUserGeneratedTextErrorType__NameChanged_CabinedAccount = 6,
		EJunoUserGeneratedTextErrorType__NameChanged_Moderation = 7,
		EJunoUserGeneratedTextErrorType__GenericError = 8,
	};


	// Enum /Script/JunoCoreUI.ESanctionType
	enum ESanctionType
	{
		ESanctionType__OwnerWithoutPartyMultiplayerBan = 0,
		ESanctionType__OwnerWithPartyMultiplayerBan = 1,
		ESanctionType__KeyHolderBan = 2,
		ESanctionType__CompleteBan = 3,
		ESanctionType__None = 4,
	};


	// Enum /Script/JunoCoreUI.EMatchmakingErrorType
	enum EMatchmakingErrorType
	{
		EMatchmakingErrorType__NotEnoughWorldSpotsForParty = 0,
		EMatchmakingErrorType__NotAllPartyMembersHaveWorldAccess = 1,
		EMatchmakingErrorType__LookingForPartyIsEnabled = 2,
		EMatchmakingErrorType__None = 3,
	};


	// Enum /Script/JunoCoreUI.EJunoContextMenuAction
	enum EJunoContextMenuAction
	{
		EJunoContextMenuAction__None = 0,
		EJunoContextMenuAction__Swap = 1,
		EJunoContextMenuAction__Drop = 2,
		EJunoContextMenuAction__Craft = 3,
		EJunoContextMenuAction__Equip = 4,
		EJunoContextMenuAction__Unequip = 5,
		EJunoContextMenuAction__Split = 6,
		EJunoContextMenuAction__DepositStack = 7,
		EJunoContextMenuAction__Deposit = 8,
		EJunoContextMenuAction__TakeStack = 9,
		EJunoContextMenuAction__Take = A,
		EJunoContextMenuAction__MoveToInventory = B,
		EJunoContextMenuAction__MoveToMainHand = C,
		EJunoContextMenuAction__MoveToOffHand = D,
		EJunoContextMenuAction__SmartTransfer = E,
		EJunoContextMenuAction__OpenInventory = F,
		EJunoContextMenuAction__Spawn = 10,
		EJunoContextMenuAction__SpawnMultiple = 11,
		EJunoContextMenuAction__TrackRecipe = 12,
	};


	// Enum /Script/JunoCoreUI.EJunoContextMenuActionState
	enum EJunoContextMenuActionState
	{
		EJunoContextMenuActionState__Shown = 0,
		EJunoContextMenuActionState__Disabled = 1,
		EJunoContextMenuActionState__Hidden = 2,
	};


	// Enum /Script/JunoCoreUI.EJunoWorldSanctionType
	enum EJunoWorldSanctionType
	{
		EJunoWorldSanctionType__MultiplayerBan = 0,
		EJunoWorldSanctionType__CompleteBan = 1,
		EJunoWorldSanctionType__None = 2,
	};

}
