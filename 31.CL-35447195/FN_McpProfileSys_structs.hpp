#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: McpProfileSys
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct McpProfileSys.ProfileUpdateSingle
	// Size: 0x50 (0x50 - 0x0)
	struct FProfileUpdateSingle	
	{
	public:
		int64_t ProfileRevision; // 0x0(0x8)
		FString ProfileId; // 0x8(0x10)
		int64_t ProfileChangesBaseRevision; // 0x18(0x8)
		TArray ProfileChanges; // 0x20(0x10)
		FDateTime LockExpiration; // 0x30(0x8)
		TArray Notifications; // 0x38(0x10)
		int32_t ProfileCommandRevision; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct McpProfileSys.ProfileUpdate
	// Inherited from FProfileUpdateSingle
	// Size: 0x20 (0x70 - 0x50)
	struct FProfileUpdate : public FProfileUpdateSingle	
	{
	public:
		int32_t ResponseVersion; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FDateTime ServerTime; // 0x58(0x8)
		TArray MultiUpdate; // 0x60(0x10)
	};


	// Struct McpProfileSys.McpLootEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FMcpLootEntry	
	{
	public:
		FString ItemType; // 0x0(0x10)
		FString ItemGuid; // 0x10(0x10)
		int32_t Quantity; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FJsonObjectWrapper Attributes; // 0x28(0x20)
		FString ItemProfile; // 0x48(0x10)
	};


	// Struct McpProfileSys.BaseUrlContext
	// Size: 0x80 (0x80 - 0x0)
	struct FBaseUrlContext	
	{
	public:
		unsigned char UnknownData01_2[0x80]; // 0x0(0x80) UNKNOWN PROPERTY
	};


	// Struct McpProfileSys.ClientUrlContext
	// Inherited from FBaseUrlContext
	// Size: 0x0 (0x80 - 0x80)
	struct FClientUrlContext : public FBaseUrlContext	
	{
	public:
	};


	// Struct McpProfileSys.DedicatedServerUrlContext
	// Inherited from FBaseUrlContext
	// Size: 0x0 (0x80 - 0x80)
	struct FDedicatedServerUrlContext : public FBaseUrlContext	
	{
	public:
	};


	// Struct McpProfileSys.McpProfileChangeRequest
	// Size: 0x58 (0x58 - 0x0)
	struct FMcpProfileChangeRequest	
	{
	public:
		int32_t BaseCommandRevision; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray AddRequests; // 0x8(0x10)
		TArray RemoveRequests; // 0x18(0x10)
		TArray ChangeQuantityRequests; // 0x28(0x10)
		TArray ChangeAttributesRequests; // 0x38(0x10)
		TArray ChangeStatRequests; // 0x48(0x10)
	};


	// Struct McpProfileSys.McpChangeAttributesRequest
	// Size: 0x30 (0x30 - 0x0)
	struct FMcpChangeAttributesRequest	
	{
	public:
		FString ItemId; // 0x0(0x10)
		FJsonObjectWrapper Attributes; // 0x10(0x20)
	};


	// Struct McpProfileSys.McpChangeQuantityRequest
	// Size: 0x18 (0x18 - 0x0)
	struct FMcpChangeQuantityRequest	
	{
	public:
		FString ItemId; // 0x0(0x10)
		int32_t DeltaQuantity; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct McpProfileSys.McpRemoveItemRequest
	// Size: 0x10 (0x10 - 0x0)
	struct FMcpRemoveItemRequest	
	{
	public:
		FString ItemId; // 0x0(0x10)
	};


	// Struct McpProfileSys.McpAddItemRequest
	// Size: 0x48 (0x48 - 0x0)
	struct FMcpAddItemRequest	
	{
	public:
		FString ItemId; // 0x0(0x10)
		FString TemplateId; // 0x10(0x10)
		int32_t Quantity; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FJsonObjectWrapper Attributes; // 0x28(0x20)
	};


	// Struct McpProfileSys.PublicUrlContext
	// Inherited from FBaseUrlContext
	// Size: 0x0 (0x80 - 0x80)
	struct FPublicUrlContext : public FBaseUrlContext	
	{
	public:
	};


	// Struct McpProfileSys.AccountIdAndProfileResponse
	// Size: 0x80 (0x80 - 0x0)
	struct FAccountIdAndProfileResponse	
	{
	public:
		FString AccountId; // 0x0(0x10)
		FProfileUpdate Response; // 0x10(0x70)
	};


	// Struct McpProfileSys.ProfileUpdateNotification
	// Size: 0x28 (0x28 - 0x0)
	struct FProfileUpdateNotification	
	{
	public:
		TArray Changes; // 0x0(0x10)
		FDateTime LockExpiration; // 0x10(0x8)
		int32_t CommandRevision; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		int64_t Revision; // 0x20(0x8)
	};


	// Struct McpProfileSys.MultiProfileUpdate
	// Size: 0xC (0xC - 0x0)
	struct FMultiProfileUpdate	
	{
	public:
		TWeakObjectPtr ProfileWeakPtr; // 0x0(0x8)
		bool bSkipPreload; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct McpProfileSys.ProfileEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FProfileEntry	
	{
	public:
		FString ProfileId; // 0x0(0x10)
		UMcpProfile ProfileObject; // 0x10(0x8)
		bool bWaitingForRefreshAllProfilesResponse; // 0x18(0x1)
		bool bForwardUpdatesToClient; // 0x19(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
	};


	// Struct McpProfileSys.ProfileGroupEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FProfileGroupEntry	
	{
	public:
		unsigned char UnknownData01_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		UMcpProfileGroup ProfileGroup; // 0x20(0x8)
	};


	// Struct McpProfileSys.McpLootResult
	// Size: 0x20 (0x20 - 0x0)
	struct FMcpLootResult	
	{
	public:
		FString TierGroupName; // 0x0(0x10)
		TArray Items; // 0x10(0x10)
	};


	// Struct McpProfileSys.McpItemIdAndQuantity
	// Inherited from FMcpLootEntry
	// Size: 0x0 (0x58 - 0x58)
	struct FMcpItemIdAndQuantity : public FMcpLootEntry	
	{
	public:
	};


	// Struct McpProfileSys.GiftBoxInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FGiftBoxInfo	
	{
	public:
		FDateTime GiftedOn; // 0x0(0x8)
		FString FromAccountId; // 0x8(0x10)
		TArray LootList; // 0x18(0x10)
		FJsonObjectWrapper Params; // 0x28(0x20)
		FDateTime grant_on_date; // 0x48(0x8)
	};

}
