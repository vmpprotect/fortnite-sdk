#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayDebugger
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GameplayDebugger.GameplayDebuggerDataPackRPCParams
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayDebuggerDataPackRPCParams	
	{
	public:
		FName CategoryName; // 0x0(0x4)
		int32_t DataPackIdx; // 0x4(0x4)
		FGameplayDebuggerDataPackHeader Header; // 0x8(0x10)
		TArray<char> Data; // 0x18(0x10)
	};


	// Struct GameplayDebugger.GameplayDebuggerDataPackHeader
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayDebuggerDataPackHeader	
	{
	public:
		int16_t DataVersion; // 0x0(0x2)
		int16_t SyncCounter; // 0x2(0x2)
		int32_t DataSize; // 0x4(0x4)
		int32_t DataOffset; // 0x8(0x4)
		bool bIsCompressed : 1; // 0xC:0(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct GameplayDebugger.GameplayDebuggerCategoryData
	// Size: 0x40 (0x40 - 0x0)
	struct FGameplayDebuggerCategoryData	
	{
	public:
		FName CategoryName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FString> TextLines; // 0x8(0x10)
		TArray<FGameplayDebuggerShape> Shapes; // 0x18(0x10)
		TArray<FGameplayDebuggerDataPackHeader> DataPacks; // 0x28(0x10)
		bool bIsEnabled; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayDebugger.GameplayDebuggerShape
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayDebuggerShape	
	{
	public:
		TArray<FVector> ShapeData; // 0x0(0x10)
		FString Description; // 0x10(0x10)
		FColor Color; // 0x20(0x4)
		EGameplayDebuggerShape Type; // 0x24(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct GameplayDebugger.GameplayDebuggerNetPack
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayDebuggerNetPack	
	{
	public:
		AGameplayDebuggerCategoryReplicator* Owner; // 0x0(0x8)
		TArray<FGameplayDebuggerCategoryData> SavedData; // 0x8(0x10)
	};


	// Struct GameplayDebugger.GameplayDebuggerDebugActor
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayDebuggerDebugActor	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0x0(0x8)
		FName ActorName; // 0x8(0x4)
		int16_t SyncCounter; // 0xC(0x2)
		unsigned char UnknownData00_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct GameplayDebugger.GameplayDebuggerVisLogSync
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayDebuggerVisLogSync	
	{
	public:
		FString DeviceIDs; // 0x0(0x10)
	};


	// Struct GameplayDebugger.GameplayDebuggerInputConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FGameplayDebuggerInputConfig	
	{
	public:
		FString ConfigName; // 0x0(0x10)
		FKey Key; // 0x10(0x18)
		bool bModShift : 1; // 0x28:0(0x1)
		bool bModCtrl : 1; // 0x28:1(0x1)
		bool bModAlt : 1; // 0x28:2(0x1)
		bool bModCmd : 1; // 0x28:3(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayDebugger.GameplayDebuggerCategoryConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FGameplayDebuggerCategoryConfig	
	{
	public:
		FString CategoryName; // 0x0(0x10)
		int32_t SlotIdx; // 0x10(0x4)
		EGameplayDebuggerOverrideMode ActiveInGame; // 0x14(0x1)
		EGameplayDebuggerOverrideMode ActiveInSimulate; // 0x15(0x1)
		EGameplayDebuggerOverrideMode Hidden; // 0x16(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x17(0x1) UNKNOWN PROPERTY
		bool bOverrideSlotIdx : 1; // 0x18:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		TArray<FGameplayDebuggerInputConfig> InputHandlers; // 0x20(0x10)
	};


	// Struct GameplayDebugger.GameplayDebuggerExtensionConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayDebuggerExtensionConfig	
	{
	public:
		FString ExtensionName; // 0x0(0x10)
		EGameplayDebuggerOverrideMode UseExtension; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TArray<FGameplayDebuggerInputConfig> InputHandlers; // 0x18(0x10)
	};


	// Struct GameplayDebugger.GameplayDebuggerPlayerData
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayDebuggerPlayerData	
	{
	public:
		UGameplayDebuggerLocalController* Controller; // 0x0(0x8)
		UInputComponent* InputComponent; // 0x8(0x8)
		AGameplayDebuggerCategoryReplicator* Replicator; // 0x10(0x8)
	};

}
