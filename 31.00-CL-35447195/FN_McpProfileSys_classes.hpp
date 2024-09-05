#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: McpProfileSys
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class McpProfileSys.McpItemAware
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMcpItemAware : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/McpProfileSys.McpItemAware");
			return ret;
		}
	};


	// Class McpProfileSys.McpItemDefinitionBase
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMcpItemDefinitionBase : public UPrimaryDataAsset	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/McpProfileSys.McpItemDefinitionBase");
			return ret;
		}
	};


	// Class McpProfileSys.McpProfile
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UMcpProfile : public UObject	
	{
	public:
		bool AllowSubscriptionToNotificationsService; // 0x28(0x1)
		unsigned char UnknownData04_6[0x77]; // 0x29(0x77) UNKNOWN PROPERTY
		FString DebugName; // 0xA0(0x10)
		bool bProfileLockOperationPending; // 0xB0(0x1)
		bool bProfileUnlockOperationPending; // 0xB1(0x1)
		bool bEnableMocks; // 0xB2(0x1)
		unsigned char UnknownData05_6[0x15]; // 0xB3(0x15) UNKNOWN PROPERTY
		UMcpProfileGroup ProfileGroup; // 0xC8(0x8)
		FString ProfileId; // 0xD0(0x10)
		int64_t ProfileRevision; // 0xE0(0x8)
		int32_t FullProfileQueryQueued; // 0xE8(0x4)
		bool bProfileWriteLocked; // 0xEC(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
		FDateTime ProfileWriteLockExpireTime; // 0xF0(0x8)
		bool QueuedProfileUpdatingEnabled; // 0xF8(0x1)
		unsigned char UnknownData07_7[0x47]; // 0xF9(0x47) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/McpProfileSys.McpProfile");
			return ret;
		}

		void UnlockProfileForWrite(FString Code, FDedicatedServerUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 0x7FF413EE5FC0
		void QueryPublicProfile(FBaseUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 0x7FF413EE5EE0
		void QueryProfile(FBaseUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 0x7FF413EE5E00
		void LockProfileForWrite(FString Code, int32_t Timeout, FDedicatedServerUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 0x7FF413EE5C60
		void DeleteProfile(FClientUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 0x7FF413EE5B80
		void DeleteAllProfiles(FClientUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 0x7FF413EE5920
	};


	// Class McpProfileSys.McpProfileGroup
	// Inherited from UObject
	// Size: 0x268 (0x290 - 0x28)
	class UMcpProfileGroup : public UObject	
	{
	public:
		unsigned char UnknownData10_3[0xB4]; // 0x28(0xB4) UNKNOWN PROPERTY
		int32_t DelayMcpResults; // 0xDC(0x4)
		int32_t WeeklyIntervalStartDay; // 0xE0(0x4)
		unsigned char UnknownData11_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		TArray ProfileList; // 0xE8(0x10)
		unsigned char UnknownData12_6[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		FString PlayerName; // 0x100(0x10)
		bool bIsServer; // 0x110(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FString ProfileNotificationsStompTopic; // 0x118(0x10)
		unsigned char UnknownData14_6[0x50]; // 0x128(0x50) UNKNOWN PROPERTY
		FString LastMcpVersion; // 0x178(0x10)
		FString LastContentVersion; // 0x188(0x10)
		FString LastMinBuild; // 0x198(0x10)
		FTimespan LocalTimeOffset; // 0x1A8(0x8)
		unsigned char UnknownData15_6[0x8]; // 0x1B0(0x8) UNKNOWN PROPERTY
		FString LockCode; // 0x1B8(0x10)
		TArray LockedProfiles; // 0x1C8(0x10)
		FString LockedProfilesString; // 0x1D8(0x10)
		int32_t ProfileWriteLockTimeoutSecs; // 0x1E8(0x4)
		bool bSubscribedToNotifications; // 0x1EC(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x1ED(0x3) UNKNOWN PROPERTY
		FString ApplyStashEndPoint; // 0x1F0(0x10)
		unsigned char UnknownData17_6[0x8]; // 0x200(0x8) UNKNOWN PROPERTY
		bool bSendProfileCommandRevisions; // 0x208(0x1)
		bool bAsyncParseProfileUpdates; // 0x209(0x1)
		unsigned char UnknownData18_6[0x56]; // 0x20A(0x56) UNKNOWN PROPERTY
		int32_t MaxChangesToForwardInUpdate; // 0x260(0x4)
		int32_t MaxChangeSizeInBytes; // 0x264(0x4)
		TArray ForwardToClientExclusions; // 0x268(0x10)
		TArray PendingMultiProfileUpdates; // 0x278(0x10)
		unsigned char UnknownData19_7[0x8]; // 0x288(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/McpProfileSys.McpProfileGroup");
			return ret;
		}
	};


	// Class McpProfileSys.McpProfileManager
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UMcpProfileManager : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		TArray ServerProfileGroups; // 0x38(0x10)
		TArray ClientProfileGroups; // 0x48(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		int32_t MaxItemsProcessedInInitialUpdatesPerTick; // 0x60(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/McpProfileSys.McpProfileManager");
			return ret;
		}
	};

}
