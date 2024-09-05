#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: McpProfileSys
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x77]; // 0x29(0x77) UNKNOWN PROPERTY
		FString DebugName; // 0xA0(0x10)
		bool bProfileLockOperationPending; // 0xB0(0x1)
		bool bProfileUnlockOperationPending; // 0xB1(0x1)
		bool bEnableMocks; // 0xB2(0x1)
		unsigned char UnknownData01_6[0x15]; // 0xB3(0x15) UNKNOWN PROPERTY
		UMcpProfileGroup* ProfileGroup; // 0xC8(0x8)
		FString ProfileId; // 0xD0(0x10)
		int64_t ProfileRevision; // 0xE0(0x8)
		int32_t FullProfileQueryQueued; // 0xE8(0x4)
		bool bProfileWriteLocked; // 0xEC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
		FDateTime ProfileWriteLockExpireTime; // 0xF0(0x8)
		bool QueuedProfileUpdatingEnabled; // 0xF8(0x1)
		unsigned char UnknownData03_7[0x47]; // 0xF9(0x47) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/McpProfileSys.McpProfile");
			return ret;
		}

		void UnlockProfileForWrite(FString Code, FDedicatedServerUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms, Memory Exec: 0x0(relative to base address)
		void QueryPublicProfile(FBaseUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms, Memory Exec: 0x0(relative to base address)
		void QueryProfile(FBaseUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms, Memory Exec: 0x0(relative to base address)
		void LockProfileForWrite(FString Code, int32_t Timeout, FDedicatedServerUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms, Memory Exec: 0x0(relative to base address)
		void DeleteProfile(FClientUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms, Memory Exec: 0x0(relative to base address)
		void DeleteAllProfiles(FClientUrlContext& Context); // Flags: Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms, Memory Exec: 0x0(relative to base address)
	};


	// Class McpProfileSys.McpProfileGroup
	// Inherited from UObject
	// Size: 0x268 (0x290 - 0x28)
	class UMcpProfileGroup : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0xB4]; // 0x28(0xB4) UNKNOWN PROPERTY
		int32_t DelayMcpResults; // 0xDC(0x4)
		int32_t WeeklyIntervalStartDay; // 0xE0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		TArray<FProfileEntry> ProfileList; // 0xE8(0x10)
		unsigned char UnknownData02_6[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		FString PlayerName; // 0x100(0x10)
		bool bIsServer; // 0x110(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FString ProfileNotificationsStompTopic; // 0x118(0x10)
		unsigned char UnknownData04_6[0x50]; // 0x128(0x50) UNKNOWN PROPERTY
		FString LastMcpVersion; // 0x178(0x10)
		FString LastContentVersion; // 0x188(0x10)
		FString LastMinBuild; // 0x198(0x10)
		FTimespan LocalTimeOffset; // 0x1A8(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x1B0(0x8) UNKNOWN PROPERTY
		FString LockCode; // 0x1B8(0x10)
		TArray<UMcpProfile*> LockedProfiles; // 0x1C8(0x10)
		FString LockedProfilesString; // 0x1D8(0x10)
		int32_t ProfileWriteLockTimeoutSecs; // 0x1E8(0x4)
		bool bSubscribedToNotifications; // 0x1EC(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x1ED(0x3) UNKNOWN PROPERTY
		FString ApplyStashEndPoint; // 0x1F0(0x10)
		unsigned char UnknownData07_6[0x8]; // 0x200(0x8) UNKNOWN PROPERTY
		bool bSendProfileCommandRevisions; // 0x208(0x1)
		bool bAsyncParseProfileUpdates; // 0x209(0x1)
		unsigned char UnknownData08_6[0x56]; // 0x20A(0x56) UNKNOWN PROPERTY
		int32_t MaxChangesToForwardInUpdate; // 0x260(0x4)
		int32_t MaxChangeSizeInBytes; // 0x264(0x4)
		TArray<FString> ForwardToClientExclusions; // 0x268(0x10)
		TArray<FMultiProfileUpdate> PendingMultiProfileUpdates; // 0x278(0x10)
		unsigned char UnknownData09_7[0x8]; // 0x288(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		TArray<FProfileGroupEntry> ServerProfileGroups; // 0x38(0x10)
		TArray<FProfileGroupEntry> ClientProfileGroups; // 0x48(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		int32_t MaxItemsProcessedInInitialUpdatesPerTick; // 0x60(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/McpProfileSys.McpProfileManager");
			return ret;
		}
	};

}
