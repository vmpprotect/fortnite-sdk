#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Party
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Party.Chatroom
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UChatroom : public UObject	
	{
	public:
		FString CurrentChatRoomId; // 0x28(0x10)
		int32_t MaxChatRoomRetries; // 0x38(0x4)
		int32_t NumChatRoomRetries; // 0x3C(0x4)
		unsigned char UnknownData00_7[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.Chatroom");
			return ret;
		}
	};


	// Class Party.SocialManager
	// Inherited from UObject
	// Size: 0x1A0 (0x1C8 - 0x28)
	class USocialManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x80]; // 0x28(0x80) UNKNOWN PROPERTY
		TArray<USocialToolkit*> SocialToolkits; // 0xA8(0x10)
		USocialDebugTools* SocialDebugTools; // 0xB8(0x8)
		unsigned char UnknownData01_7[0x108]; // 0xC0(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialManager");
			return ret;
		}
	};


	// Class Party.SocialToolkit
	// Inherited from UObject
	// Size: 0x2A0 (0x2C8 - 0x28)
	class USocialToolkit : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x28(0x40) UNKNOWN PROPERTY
		USocialUser* LocalUser; // 0x68(0x8)
		TArray<USocialUser*> AllUsers; // 0x70(0x10)
		unsigned char UnknownData01_6[0x50]; // 0x80(0x50) UNKNOWN PROPERTY
		bool bRemoveInvalidatedUserFromMaps; // 0xD0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<ULocalPlayer*> LocalPlayerOwner; // 0xD4(0x8)
		unsigned char UnknownData03_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		USocialChatManager* SocialChatManager; // 0xE0(0x8)
		unsigned char UnknownData04_7[0x1E0]; // 0xE8(0x1E0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialToolkit");
			return ret;
		}
	};


	// Class Party.SocialChatManager
	// Inherited from UObject
	// Size: 0x1F8 (0x220 - 0x28)
	class USocialChatManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x28(0x50) UNKNOWN PROPERTY
		TMap<TWeakObjectPtr, USocialPrivateMessageChannel*> DirectChannelsByTargetUser; // 0x78(0x50)
		TMap<FString, USocialChatRoom*> ChatRoomsById; // 0xC8(0x50)
		TMap<FString, USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName; // 0x118(0x50)
		bool bEnableChatSlashCommands; // 0x168(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x169(0x7) UNKNOWN PROPERTY
		TMap<FUniqueNetIdRepl, USocialGroupChannel*> GroupChannels; // 0x170(0x50)
		unsigned char UnknownData02_7[0x60]; // 0x1C0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialChatManager");
			return ret;
		}
	};


	// Class Party.SocialChatChannel
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class USocialChatChannel : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xB8]; // 0x28(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialChatChannel");
			return ret;
		}
	};


	// Class Party.SocialChatRoom
	// Inherited from USocialChatChannel -> UObject
	// Size: 0x10 (0xF0 - 0xE0)
	class USocialChatRoom : public USocialChatChannel	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialChatRoom");
			return ret;
		}
	};


	// Class Party.SocialGroupChannel
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class USocialGroupChannel : public UObject	
	{
	public:
		USocialUser* SocialUser; // 0x28(0x8)
		FUniqueNetIdRepl GroupId; // 0x30(0x30)
		FText DisplayName; // 0x60(0x10)
		TArray<USocialUser*> Members; // 0x70(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x80(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialGroupChannel");
			return ret;
		}
	};


	// Class Party.SocialPartyChatRoom
	// Inherited from USocialChatRoom -> USocialChatChannel -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class USocialPartyChatRoom : public USocialChatRoom	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialPartyChatRoom");
			return ret;
		}
	};


	// Class Party.SocialPrivateMessageChannel
	// Inherited from USocialChatChannel -> UObject
	// Size: 0x8 (0xE8 - 0xE0)
	class USocialPrivateMessageChannel : public USocialChatChannel	
	{
	public:
		USocialUser* TargetUser; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialPrivateMessageChannel");
			return ret;
		}
	};


	// Class Party.SocialReadOnlyChatChannel
	// Inherited from USocialChatChannel -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class USocialReadOnlyChatChannel : public USocialChatChannel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialReadOnlyChatChannel");
			return ret;
		}
	};


	// Class Party.SocialParty
	// Inherited from UObject
	// Size: 0x338 (0x360 - 0x28)
	class USocialParty : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x28(0x38) UNKNOWN PROPERTY
		UClass* ReservationBeaconClientClass; // 0x60(0x8)
		UClass* SpectatorBeaconClientClass; // 0x68(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x70(0x10) UNKNOWN PROPERTY
		FUniqueNetIdRepl OwningLocalUserId; // 0x80(0x30)
		FUniqueNetIdRepl CurrentLeaderId; // 0xB0(0x30)
		TMap<FUniqueNetIdRepl, UPartyMember*> PartyMembersById; // 0xE0(0x50)
		bool bEnableAutomaticPartyRejoin; // 0x130(0x1)
		unsigned char UnknownData02_6[0x57]; // 0x131(0x57) UNKNOWN PROPERTY
		double PlatformUserInviteCooldown; // 0x188(0x8)
		double PrimaryUserInviteCooldown; // 0x190(0x8)
		unsigned char UnknownData03_6[0x70]; // 0x198(0x70) UNKNOWN PROPERTY
		TWeakObjectPtr<APartyBeaconClient*> ReservationBeaconClient; // 0x208(0x8)
		unsigned char UnknownData04_6[0x4]; // 0x210(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<ASpectatorBeaconClient*> SpectatorBeaconClient; // 0x214(0x8)
		unsigned char UnknownData05_6[0x2C]; // 0x21C(0x2C) UNKNOWN PROPERTY
		float JoinInProgressTimerRate; // 0x248(0x4)
		int32_t JoinInProgressRequestTimeout; // 0x24C(0x4)
		int32_t JoinInProgressResponseTimeout; // 0x250(0x4)
		unsigned char UnknownData06_7[0x10C]; // 0x254(0x10C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialParty");
			return ret;
		}
	};


	// Class Party.PartyMember
	// Inherited from UObject
	// Size: 0xF0 (0x118 - 0x28)
	class UPartyMember : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x28(0x48) UNKNOWN PROPERTY
		USocialUser* DefaultSocialUser; // 0x70(0x8)
		unsigned char UnknownData01_6[0x1]; // 0x78(0x1) UNKNOWN PROPERTY
		bool bEnableDebugInitializer; // 0x79(0x1)
		unsigned char UnknownData02_7[0x9E]; // 0x7A(0x9E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.PartyMember");
			return ret;
		}
	};


	// Class Party.SocialDebugTools
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class USocialDebugTools : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0x28(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialDebugTools");
			return ret;
		}
	};


	// Class Party.SocialSettings
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class USocialSettings : public UObject	
	{
	public:
		TArray<FName> OssNamesWithEnvironmentIdPrefix; // 0x28(0x10)
		int32_t DefaultMaxPartySize; // 0x38(0x4)
		bool bPreferPlatformInvites; // 0x3C(0x1)
		bool bMustSendPrimaryInvites; // 0x3D(0x1)
		bool bLeavePartyOnDisconnect; // 0x3E(0x1)
		bool bSetDesiredPrivacyOnLocalPlayerBecomesLeader; // 0x3F(0x1)
		float UserListAutoUpdateRate; // 0x40(0x4)
		int32_t MinNicknameLength; // 0x44(0x4)
		int32_t MaxNicknameLength; // 0x48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		TArray<FSocialPlatformDescription> SocialPlatformDescriptions; // 0x50(0x10)
		TArray<FName> SonyOSSNames; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialSettings");
			return ret;
		}
	};


	// Class Party.SocialUser
	// Inherited from UObject
	// Size: 0x1A8 (0x1D0 - 0x28)
	class USocialUser : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x1A8]; // 0x28(0x1A8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Party.SocialUser");
			return ret;
		}
	};

}
