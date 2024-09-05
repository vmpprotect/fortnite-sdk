#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Party
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Party.ESocialChannelType
	enum ESocialChannelType
	{
		ESocialChannelType__General = 0,
		ESocialChannelType__Founder = 1,
		ESocialChannelType__Party = 2,
		ESocialChannelType__Team = 3,
		ESocialChannelType__System = 4,
		ESocialChannelType__Private = 5,
	};


	// Enum /Script/Party.EPartyType
	enum EPartyType
	{
		EPartyType__Public = 0,
		EPartyType__FriendsOnly = 1,
		EPartyType__Private = 2,
	};


	// Enum /Script/Party.EPartyInviteRestriction
	enum EPartyInviteRestriction
	{
		EPartyInviteRestriction__AnyMember = 0,
		EPartyInviteRestriction__LeaderOnly = 1,
		EPartyInviteRestriction__NoInvites = 2,
	};


	// Enum /Script/Party.EPartyJoinDenialReason
	enum EPartyJoinDenialReason
	{
		EPartyJoinDenialReason__NoReason = 0,
		EPartyJoinDenialReason__JoinAttemptAborted = 1,
		EPartyJoinDenialReason__Busy = 2,
		EPartyJoinDenialReason__OssUnavailable = 3,
		EPartyJoinDenialReason__PartyFull = 4,
		EPartyJoinDenialReason__GameFull = 5,
		EPartyJoinDenialReason__NotPartyLeader = 6,
		EPartyJoinDenialReason__PartyPrivate = 7,
		EPartyJoinDenialReason__JoinerCrossplayRestricted = 8,
		EPartyJoinDenialReason__MemberCrossplayRestricted = 9,
		EPartyJoinDenialReason__GameModeRestricted = A,
		EPartyJoinDenialReason__Banned = B,
		EPartyJoinDenialReason__NotLoggedIn = C,
		EPartyJoinDenialReason__CheckingForRejoin = D,
		EPartyJoinDenialReason__TargetUserMissingPresence = E,
		EPartyJoinDenialReason__TargetUserUnjoinable = F,
		EPartyJoinDenialReason__TargetUserAway = 10,
		EPartyJoinDenialReason__AlreadyLeaderInPlatformSession = 11,
		EPartyJoinDenialReason__TargetUserPlayingDifferentGame = 12,
		EPartyJoinDenialReason__TargetUserMissingPlatformSession = 13,
		EPartyJoinDenialReason__PlatformSessionMissingJoinInfo = 14,
		EPartyJoinDenialReason__FailedToStartFindConsoleSession = 15,
		EPartyJoinDenialReason__MissingPartyClassForTypeId = 16,
		EPartyJoinDenialReason__TargetUserBlocked = 17,
		EPartyJoinDenialReason__InvalidJoinInfo = 18,
		EPartyJoinDenialReason__NotFriends = 19,
		EPartyJoinDenialReason__CustomReason0 = 1A,
		EPartyJoinDenialReason__CustomReason1 = 1B,
		EPartyJoinDenialReason__CustomReason2 = 1C,
		EPartyJoinDenialReason__CustomReason3 = 1D,
		EPartyJoinDenialReason__CustomReason4 = 1E,
		EPartyJoinDenialReason__CustomReason5 = 1F,
		EPartyJoinDenialReason__CustomReason6 = 20,
		EPartyJoinDenialReason__CustomReason7 = 21,
		EPartyJoinDenialReason__CustomReason8 = 22,
		EPartyJoinDenialReason__CustomReason9 = 23,
		EPartyJoinDenialReason__CustomReason10 = 24,
		EPartyJoinDenialReason__CustomReason11 = 25,
		EPartyJoinDenialReason__CustomReason12 = 26,
		EPartyJoinDenialReason__CustomReason13 = 27,
		EPartyJoinDenialReason__CustomReason14 = 28,
		EPartyJoinDenialReason__CustomReason15 = 29,
		EPartyJoinDenialReason__CustomReason16 = 2A,
		EPartyJoinDenialReason__CustomReason17 = 2B,
		EPartyJoinDenialReason__CustomReason18 = 2C,
		EPartyJoinDenialReason__CustomReason19 = 2D,
		EPartyJoinDenialReason__CustomReason20 = 2E,
		EPartyJoinDenialReason__CustomReason21 = 2F,
		EPartyJoinDenialReason__CustomReason22 = 30,
		EPartyJoinDenialReason__CustomReason23 = 31,
		EPartyJoinDenialReason__CustomReason24 = 32,
		EPartyJoinDenialReason__CustomReason25 = 33,
		EPartyJoinDenialReason__CustomReason26 = 34,
		EPartyJoinDenialReason__CustomReason27 = 35,
		EPartyJoinDenialReason__CustomReason28 = 36,
		EPartyJoinDenialReason__CustomReason29 = 37,
		EPartyJoinDenialReason__CustomReason30 = 38,
		EPartyJoinDenialReason__CustomReason31 = 39,
		EPartyJoinDenialReason__CustomReason32 = 3A,
		EPartyJoinDenialReason__CustomReason33 = 3B,
		EPartyJoinDenialReason__CustomReason34 = 3C,
		EPartyJoinDenialReason__CustomReason35 = 3D,
		EPartyJoinDenialReason__CustomReason36 = 3E,
		EPartyJoinDenialReason__CustomReason37 = 3F,
		EPartyJoinDenialReason__CustomReason38 = 40,
		EPartyJoinDenialReason__CustomReason39 = 41,
	};


	// Enum /Script/Party.EApprovalAction
	enum EApprovalAction
	{
		EApprovalAction__Approve = 0,
		EApprovalAction__Enqueue = 1,
		EApprovalAction__EnqueueAndStartBeacon = 2,
		EApprovalAction__Deny = 3,
	};


	// Enum /Script/Party.ESocialPartyInviteMethod
	enum ESocialPartyInviteMethod
	{
		ESocialPartyInviteMethod__Other = 0,
		ESocialPartyInviteMethod__Notification = 1,
		ESocialPartyInviteMethod__AcceptRequestToJoin = 2,
		ESocialPartyInviteMethod__Custom0 = 3,
		ESocialPartyInviteMethod__Custom1 = 4,
		ESocialPartyInviteMethod__Custom2 = 5,
		ESocialPartyInviteMethod__Custom3 = 6,
		ESocialPartyInviteMethod__Custom4 = 7,
		ESocialPartyInviteMethod__Custom5 = 8,
		ESocialPartyInviteMethod__Custom6 = 9,
		ESocialPartyInviteMethod__Custom7 = A,
		ESocialPartyInviteMethod__Custom8 = B,
		ESocialPartyInviteMethod__Custom9 = C,
	};


	// Enum /Script/Party.ESocialPartyInviteFailureReason
	enum ESocialPartyInviteFailureReason
	{
		ESocialPartyInviteFailureReason__Success = 0,
		ESocialPartyInviteFailureReason__NotOnline = 1,
		ESocialPartyInviteFailureReason__NotAcceptingMembers = 2,
		ESocialPartyInviteFailureReason__NotFriends = 3,
		ESocialPartyInviteFailureReason__AlreadyInParty = 4,
		ESocialPartyInviteFailureReason__OssValidationFailed = 5,
		ESocialPartyInviteFailureReason__PlatformInviteFailed = 6,
		ESocialPartyInviteFailureReason__PartyInviteFailed = 7,
		ESocialPartyInviteFailureReason__InviteRateLimitExceeded = 8,
	};


	// Enum /Script/Party.ESocialSubsystem
	enum ESocialSubsystem
	{
		ESocialSubsystem__Primary = 0,
		ESocialSubsystem__Platform = 1,
	};


	// Enum /Script/Party.ESocialRelationship
	enum ESocialRelationship
	{
		ESocialRelationship__Any = 0,
		ESocialRelationship__FriendInviteReceived = 1,
		ESocialRelationship__FriendInviteSent = 2,
		ESocialRelationship__PartyInvite = 3,
		ESocialRelationship__Friend = 4,
		ESocialRelationship__BlockedPlayer = 5,
		ESocialRelationship__SuggestedFriend = 6,
		ESocialRelationship__RecentPlayer = 7,
		ESocialRelationship__JoinRequest = 8,
	};


	// Enum /Script/Party.ECrossplayPreference
	enum ECrossplayPreference
	{
		ECrossplayPreference__NoSelection = 0,
		ECrossplayPreference__OptedIn = 1,
		ECrossplayPreference__OptedOut = 2,
		ECrossplayPreference__OptedOutRestricted = 3,
	};


	// Enum /Script/Party.EPlatformIconDisplayRule
	enum EPlatformIconDisplayRule
	{
		EPlatformIconDisplayRule__Always = 0,
		EPlatformIconDisplayRule__AlwaysIfDifferent = 1,
		EPlatformIconDisplayRule__AlwaysWhenInCrossplayParty = 2,
		EPlatformIconDisplayRule__AlwaysIfDifferentWhenInCrossplayParty = 3,
		EPlatformIconDisplayRule__Never = 4,
	};

}
