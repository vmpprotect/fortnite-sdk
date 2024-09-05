#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OnlineSubsystemMcp
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/OnlineSubsystemMcp.ESocialCommsPermission
	enum ESocialCommsPermission
	{
		ESocialCommsPermission__Nobody = 0,
		ESocialCommsPermission__FriendsOnly = 1,
		ESocialCommsPermission__FriendsAndTeammates = 2,
		ESocialCommsPermission__Everybody = 3,
	};


	// Enum /Script/OnlineSubsystemMcp.ESocialProfilePrivacySettingLevel
	enum ESocialProfilePrivacySettingLevel
	{
		ESocialProfilePrivacySettingLevel__Public = 0,
		ESocialProfilePrivacySettingLevel__FriendsOnly = 1,
		ESocialProfilePrivacySettingLevel__Private = 2,
	};


	// Enum /Script/OnlineSubsystemMcp.ESocialProfilePrivacySettingBadges
	enum ESocialProfilePrivacySettingBadges
	{
		ESocialProfilePrivacySettingBadges__FriendsOnly = 0,
		ESocialProfilePrivacySettingBadges__Private = 1,
	};


	// Enum /Script/OnlineSubsystemMcp.EMutualFriendsPrivacyPolicy
	enum EMutualFriendsPrivacyPolicy
	{
		EMutualFriendsPrivacyPolicy__All = 0,
		EMutualFriendsPrivacyPolicy__Friends = 1,
		EMutualFriendsPrivacyPolicy__None = 2,
		EMutualFriendsPrivacyPolicy__InvalidOrMax = 3,
	};


	// Enum /Script/OnlineSubsystemMcp.ESupervisedSettingsRestrictiveOrder
	enum ESupervisedSettingsRestrictiveOrder
	{
		ESupervisedSettingsRestrictiveOrder__FirstRestrictive = 0,
		ESupervisedSettingsRestrictiveOrder__FirstPermissive = 1,
		ESupervisedSettingsRestrictiveOrder__LowRestrictive = 2,
		ESupervisedSettingsRestrictiveOrder__LowPermissive = 3,
		ESupervisedSettingsRestrictiveOrder__FalseRestrictive = 4,
		ESupervisedSettingsRestrictiveOrder__FalsePermissive = 5,
		ESupervisedSettingsRestrictiveOrder__None = 6,
	};


	// Enum /Script/OnlineSubsystemMcp.ESupervisedSettingsValueType
	enum ESupervisedSettingsValueType
	{
		ESupervisedSettingsValueType__Boolean = 0,
		ESupervisedSettingsValueType__Numeric = 1,
		ESupervisedSettingsValueType__Option = 2,
		ESupervisedSettingsValueType__None = 3,
	};

}
