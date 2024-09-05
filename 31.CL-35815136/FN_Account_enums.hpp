#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Account
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/Account.EExternalAccountType
	enum EExternalAccountType
	{
		EExternalAccountType__None = 0,
		EExternalAccountType__Facebook = 1,
		EExternalAccountType__Google = 2,
		EExternalAccountType__Epic_PSN = 3,
		EExternalAccountType__Epic_XBL = 4,
		EExternalAccountType__Epic_Erebus = 5,
		EExternalAccountType__Epic_Facebook = 6,
		EExternalAccountType__Epic_Google = 7,
		EExternalAccountType__Epic_Portal = 8,
	};


	// Enum /Script/Account.EConsoleAuthLinkState
	enum EConsoleAuthLinkState
	{
		EConsoleAuthLinkState__NotOnConsole = 0,
		EConsoleAuthLinkState__ConsoleNotLoggedIn = 1,
		EConsoleAuthLinkState__EpicNotLoggedIn = 2,
		EConsoleAuthLinkState__ThisEpicAccountLinked = 3,
		EConsoleAuthLinkState__OtherEpicAccountLinked = 4,
		EConsoleAuthLinkState__NoEpicAccountLinked = 5,
		EConsoleAuthLinkState__PrimaryIdNotLinked = 6,
		EConsoleAuthLinkState__SecondaryIdNotLinked = 7,
	};


	// Enum /Script/Account.ELoginResult
	enum ELoginResult
	{
		ELoginResult__NotStarted = 0,
		ELoginResult__Pending = 1,
		ELoginResult__Success = 2,
		ELoginResult__Console_LoginFailed = 3,
		ELoginResult__Console_AuthFailed = 4,
		ELoginResult__Console_MissingAuthAssociation = 5,
		ELoginResult__Console_DuplicateAuthAssociation = 6,
		ELoginResult__Console_AddedAuthAssociation = 7,
		ELoginResult__Console_AuthAssociationFailure = 8,
		ELoginResult__Console_NotEntitled = 9,
		ELoginResult__Console_EntitlementCheckFailed = A,
		ELoginResult__Console_PrivilegeCheck = B,
		ELoginResult__Console_PatchOrUpdateRequired = C,
		ELoginResult__AuthFailed = D,
		ELoginResult__AuthFailed_RefreshInvalid = E,
		ELoginResult__AuthFailed_InvalidMFA = F,
		ELoginResult__AuthFailed_RequiresMFA = 10,
		ELoginResult__AuthFailed_AgeVerificationIncomplete = 11,
		ELoginResult__AuthFailed_LoginLockout = 12,
		ELoginResult__AuthFailed_InvalidCredentials = 13,
		ELoginResult__AuthFailed_CorrectiveActionRequired = 14,
		ELoginResult__AuthParentalLock = 15,
		ELoginResult__PlatformNotAllowed = 16,
		ELoginResult__NotEntitled = 17,
		ELoginResult__Banned = 18,
		ELoginResult__EULACheckFailed = 19,
		ELoginResult__EULADeclined = 1A,
		ELoginResult__WaitingRoomFailed = 1B,
		ELoginResult__ServiceUnavailable = 1C,
		ELoginResult__GenericError = 1D,
		ELoginResult__RegisterSecondaryPlayerInPrimaryPartyFailed = 1E,
		ELoginResult__RejoinCheckFailure = 1F,
		ELoginResult__ConnectionFailed = 20,
		ELoginResult__NetworkConnectionUnavailable = 21,
		ELoginResult__AlreadyLoggingIn = 22,
		ELoginResult__ExternalAuth_AddedAuthAssociation = 23,
		ELoginResult__ExternalAuth_ConnectionTimeout = 24,
		ELoginResult__ExternalAuth_AuthFailure = 25,
		ELoginResult__ExternalAuth_AssociationFailure = 26,
		ELoginResult__ExternalAuth_MissingAuthAssociation = 27,
		ELoginResult__ExternalAuth_Canceled = 28,
		ELoginResult__FailedToCreateParty = 29,
		ELoginResult__ProfileQueryFailed = 2A,
		ELoginResult__QueryKeychainFailed = 2B,
		ELoginResult__ClientSettingsDownloadFailed = 2C,
		ELoginResult__SupervisedSettingsDownloadFailed = 2D,
		ELoginResult__PinGrantFailure = 2E,
		ELoginResult__PinGrantTimeout = 2F,
		ELoginResult__PinGrantCanceled = 30,
		ELoginResult__LoginStepTimeout = 31,
		ELoginResult__Console_LoginCanceled = 32,
	};


	// Enum /Script/Account.ECreateAccountResult
	enum ECreateAccountResult
	{
		ECreateAccountResult__NotStarted = 0,
		ECreateAccountResult__Pending = 1,
		ECreateAccountResult__Success = 2,
		ECreateAccountResult__Console_LoginFailed = 3,
		ECreateAccountResult__Console_DuplicateAuthAssociation = 4,
		ECreateAccountResult__DuplicateAccount = 5,
		ECreateAccountResult__GenericError = 6,
	};

}
