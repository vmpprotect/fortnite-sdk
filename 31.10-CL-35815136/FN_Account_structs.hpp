#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Account
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct Account.WebEnvUrl
	// Size: 0x30 (0x30 - 0x0)
	struct FWebEnvUrl	
	{
	public:
		FString URL; // 0x0(0x10)
		FString RedirectUrl; // 0x10(0x10)
		FString Environment; // 0x20(0x10)
	};


	// Struct Account.ExternalAccountServiceConfig
	// Size: 0x8 (0x8 - 0x0)
	struct FExternalAccountServiceConfig	
	{
	public:
		EExternalAccountType Type; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName ExternalServiceName; // 0x4(0x4)
	};


	// Struct Account.ExchangeAccessParams
	// Size: 0x40 (0x40 - 0x0)
	struct FExchangeAccessParams	
	{
	public:
		FString EntitlementId; // 0x0(0x10)
		FString ReceiptId; // 0x10(0x10)
		FString VendorReceipt; // 0x20(0x10)
		FString AppStore; // 0x30(0x10)
	};


	// Struct Account.GiftMessage
	// Size: 0x30 (0x30 - 0x0)
	struct FGiftMessage	
	{
	public:
		FString GiftCode; // 0x0(0x10)
		FString SenderName; // 0x10(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct Account.ServiceLoginConfig
	// Size: 0xC (0xC - 0x0)
	struct FServiceLoginConfig	
	{
	public:
		FName LoginType; // 0x0(0x4)
		FName ExternalAuthMethod; // 0x4(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x8(0x4) UNKNOWN PROPERTY
	};


	// Struct Account.OnlineAccountTexts_FailedLoginConsole
	// Size: 0xF0 (0xF0 - 0x0)
	struct FOnlineAccountTexts_FailedLoginConsole	
	{
	public:
		FText AgeRestriction; // 0x0(0x10)
		FText Generic; // 0x10(0x10)
		FText MissingAuthAssociation; // 0x20(0x10)
		FText NeedPremiumAccount; // 0x30(0x10)
		FText OnlinePlayRestriction; // 0x40(0x10)
		FText PatchAvailable; // 0x50(0x10)
		FText PatchAvailableInstruction_Default; // 0x60(0x10)
		FText PatchAvailableInstruction_Xbox; // 0x70(0x10)
		FText PleaseSignIn; // 0x80(0x10)
		FText SystemUpdateAvailable; // 0x90(0x10)
		FText UI; // 0xA0(0x10)
		FText UnableToComplete; // 0xB0(0x10)
		FText UnableToSignIn; // 0xC0(0x10)
		FText UnableToStartPrivCheck; // 0xD0(0x10)
		FText UnexpectedError; // 0xE0(0x10)
	};


	// Struct Account.OnlineAccountTexts
	// Size: 0x670 (0x670 - 0x0)
	struct FOnlineAccountTexts	
	{
	public:
		FText AllGiftCodesUsed; // 0x0(0x10)
		FText AssociateConsoleAuth; // 0x10(0x10)
		FText AutoLoginFailed; // 0x20(0x10)
		FText AutoLoginFailedMobile; // 0x30(0x10)
		FText BannedFromGame; // 0x40(0x10)
		FText CheckEntitledToPlay; // 0x50(0x10)
		FText CheckingRejoin; // 0x60(0x10)
		FText CheckServiceAvailability; // 0x70(0x10)
		FText ConsolePrivileges; // 0x80(0x10)
		FText CreateAccountCompleted; // 0x90(0x10)
		FText CreateAccountFailure; // 0xA0(0x10)
		FText CreateHeadless; // 0xB0(0x10)
		FText DoQosPingTests; // 0xC0(0x10)
		FText DowntimeMinutesWarningText; // 0xD0(0x10)
		FText DowntimeSecondsWarningText; // 0xE0(0x10)
		FText DuplicateAuthAssociaton; // 0xF0(0x10)
		FText EulaCheck; // 0x100(0x10)
		FText ExchangeConsoleGiftsForAccess; // 0x110(0x10)
		FText FailedAccountCreate; // 0x120(0x10)
		FText FailedEulaCheck_EulaAcceptanceFailed; // 0x130(0x10)
		FText FailedEulaCheck_MustAcceptEula; // 0x140(0x10)
		FText FailedLoginCredentialsMsg; // 0x150(0x10)
		FText FailedLoginAgeVerificationIncomplete; // 0x160(0x10)
		FText FailedLoginParentalLock; // 0x170(0x10)
		FText FailedLoginNoRealId; // 0x180(0x10)
		FText FailedLoginLockoutMsg; // 0x190(0x10)
		FText FailedLoginRequiresMFA; // 0x1A0(0x10)
		FText FailedLoginRequiresAuthAppMFA; // 0x1B0(0x10)
		FText FailedInvalidMFA; // 0x1C0(0x10)
		FText FailedLoginRequiresCorrectiveAction; // 0x1D0(0x10)
		FText FailedLoginMsg; // 0x1E0(0x10)
		FText FailedLoginMsg_InvalidRefreshToken; // 0x1F0(0x10)
		FText FailedStartLogin; // 0x200(0x10)
		FText FounderChatExitedText; // 0x210(0x10)
		FText FounderChatJoinedText; // 0x220(0x10)
		FText GameDisplayName; // 0x230(0x10)
		FText GeneralLoginFailure; // 0x240(0x10)
		FText GlobalChatExitedText; // 0x250(0x10)
		FText GlobalChatJoinedText; // 0x260(0x10)
		FText HeadlessAccountFailed; // 0x270(0x10)
		FText InMatchShutdownTimeWarningText; // 0x280(0x10)
		FText InvalidUser; // 0x290(0x10)
		FText LoggedOutofMCP; // 0x2A0(0x10)
		FText DisconnectedFromMCP; // 0x2B0(0x10)
		FText LoggedOutReturnedToTitle; // 0x2C0(0x10)
		FText LoggedOutSwitchedProfile; // 0x2D0(0x10)
		FText LoggingIn; // 0x2E0(0x10)
		FText LoggingInConsoleAuth; // 0x2F0(0x10)
		FText LoggingOut; // 0x300(0x10)
		FText LoginConsole; // 0x310(0x10)
		FText LoginFailure; // 0x320(0x10)
		FText Logout_Unlink; // 0x330(0x10)
		FText LogoutCompleted; // 0x340(0x10)
		FText LostConnection; // 0x350(0x10)
		FText LoginStepTimeout; // 0x360(0x10)
		FText LoggedOutByOtherLocalPlayer; // 0x370(0x10)
		FText MCPTimeout; // 0x380(0x10)
		FText LightswitchCheckNetworkFailureMsg; // 0x390(0x10)
		FText NetworkConnectionUnavailable; // 0x3A0(0x10)
		FText NoPlayEntitlement; // 0x3B0(0x10)
		FText NoServerAccess; // 0x3C0(0x10)
		FText PlayAccessRevoked; // 0x3D0(0x10)
		FText PremiumAccountName_Default; // 0x3E0(0x10)
		FText PremiumAccountName_Sony; // 0x3F0(0x10)
		FText PremiumAccountName_Switch; // 0x400(0x10)
		FText PremiumAccountName_XboxOne; // 0x410(0x10)
		FText RedeemOfflinePurchases; // 0x420(0x10)
		FText ServiceDowntime; // 0x430(0x10)
		FText SignInCompleting; // 0x440(0x10)
		FText SignIntoConsoleServices; // 0x450(0x10)
		FText TokenExpired; // 0x460(0x10)
		FText UnableToConnect; // 0x470(0x10)
		FText UnableToJoinWaitingRoomLoginQueue; // 0x480(0x10)
		FText UnexpectedConsoleAuthFailure; // 0x490(0x10)
		FText UnlinkConsoleFailed; // 0x4A0(0x10)
		FText UserLoginFailed; // 0x4B0(0x10)
		FText WaitingRoom; // 0x4C0(0x10)
		FText WaitingRoomError; // 0x4D0(0x10)
		FText WaitingRoomFailure; // 0x4E0(0x10)
		FText WaitingRoomWaiting; // 0x4F0(0x10)
		FOnlineAccountTexts_FailedLoginConsole FailedLoginConsole; // 0x500(0xF0)
		FText LoggingInExternalAuth; // 0x5F0(0x10)
		FText CreateDeviceAuth; // 0x600(0x10)
		FText ExtAuthCanceled; // 0x610(0x10)
		FText ExtAuthFailure; // 0x620(0x10)
		FText ExtAuthAssociationFailure; // 0x630(0x10)
		FText ExtAuthTimeout; // 0x640(0x10)
		FText ExtAuthMissingAuthAssociation; // 0x650(0x10)
		FText UnableToQueryReceipts; // 0x660(0x10)
	};

}
