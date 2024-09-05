#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PlayspaceSystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PlayspaceSystem.PlayspaceUser
	// Inherited from FFastArraySerializerItem
	// Size: 0x4C (0x58 - 0xC)
	struct FPlayspaceUser : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FUniqueNetIdRepl UserId; // 0x10(0x30)
		APlayspace* LeafPlayspace; // 0x40(0x8)
		APlayerState* PlayerStateCached; // 0x48(0x8)
		TWeakObjectPtr<AController*> ControllerCached; // 0x50(0x8)
	};


	// Struct PlayspaceSystem.ReplicatedSpawnInfo
	// Size: 0x58 (0x58 - 0x0)
	struct FReplicatedSpawnInfo	
	{
	public:
		FVector SpawnLocation; // 0x0(0x18)
		FRotator SpawnRotation; // 0x18(0x18)
		float ServerSpawnTime; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FVector LastLocation; // 0x38(0x18)
		float MinTimeForCameraFadeTransition; // 0x50(0x4)
		bool bIsPlayerRespawning; // 0x54(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
	};


	// Struct PlayspaceSystem.PlayspaceJurisdictionFilter
	// Size: 0x58 (0x58 - 0x0)
	struct FPlayspaceJurisdictionFilter	
	{
	public:
		unsigned char UnknownData00_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		UObject* ContextObject; // 0x20(0x8)
		UObject* RequesterObject; // 0x28(0x8)
		TWeakObjectPtr<UClass*> TargetPlayspaceClass; // 0x30(0x20)
		EPlayspaceJurisdictionFilterState State; // 0x50(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};


	// Struct PlayspaceSystem.PlayspaceExternallyReachableListenRequest
	// Size: 0x70 (0x70 - 0x0)
	struct FPlayspaceExternallyReachableListenRequest	
	{
	public:
		FPlayspaceJurisdictionFilter Filter; // 0x0(0x58)
		unsigned char UnknownData00_7[0x18]; // 0x58(0x18) UNKNOWN PROPERTY
	};


	// Struct PlayspaceSystem.PlayspaceSpawningInfo
	// Size: 0x98 (0x98 - 0x0)
	struct FPlayspaceSpawningInfo	
	{
	public:
		FUniqueNetIdRepl UserId; // 0x0(0x30)
		TWeakObjectPtr<APlayspace*> RequestingPlayspace; // 0x30(0x8)
		AActor* SpawnLocationActor; // 0x38(0x8)
		FVector SpawnLocation; // 0x40(0x18)
		FRotator SpawnRotation; // 0x58(0x18)
		float SpawnTimeServer; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FVector LastLocation; // 0x78(0x18)
		float MinTimeForCameraFadeTransition; // 0x90(0x4)
		bool bIsRespawnFromDeath; // 0x94(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
	};


	// Struct PlayspaceSystem.PlayspaceComponentConfiguration
	// Size: 0x88 (0x88 - 0x0)
	struct FPlayspaceComponentConfiguration	
	{
	public:
		TWeakObjectPtr<UClass*> PlayspaceComponentClass; // 0x0(0x20)
		EPlayspaceComponentCreationType CreationType; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery TagQuery; // 0x28(0x48)
		FVector Location; // 0x70(0x18)
	};


	// Struct PlayspaceSystem.PlayspaceConfiguration
	// Size: 0x28 (0x28 - 0x0)
	struct FPlayspaceConfiguration	
	{
	public:
		TWeakObjectPtr<UClass*> PlayspaceClass; // 0x0(0x20)
		EPlayspaceCreationType CreationType; // 0x20(0x1)
		bool bForceSyncLoad; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct PlayspaceSystem.Playspace_ComponentInfo_Base
	// Size: 0x10 (0x10 - 0x0)
	struct FPlayspace_ComponentInfo_Base	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		bool bCreateOnClient; // 0x8(0x1)
		bool bCreateOnServer; // 0x9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct PlayspaceSystem.Playspace_ControllerComponentInfo
	// Inherited from FPlayspace_ComponentInfo_Base
	// Size: 0x8 (0x18 - 0x10)
	struct FPlayspace_ControllerComponentInfo : public FPlayspace_ComponentInfo_Base	
	{
	public:
		UClass* ComponentClass; // 0x10(0x8)
	};


	// Struct PlayspaceSystem.Playspace_PlayerStateComponentInfo
	// Inherited from FPlayspace_ComponentInfo_Base
	// Size: 0x8 (0x18 - 0x10)
	struct FPlayspace_PlayerStateComponentInfo : public FPlayspace_ComponentInfo_Base	
	{
	public:
		UClass* ComponentClass; // 0x10(0x8)
	};


	// Struct PlayspaceSystem.Playspace_ActorComponentInfo
	// Inherited from FPlayspace_ComponentInfo_Base
	// Size: 0x8 (0x18 - 0x10)
	struct FPlayspace_ActorComponentInfo : public FPlayspace_ComponentInfo_Base	
	{
	public:
		UClass* ComponentClass; // 0x10(0x8)
	};


	// Struct PlayspaceSystem.ActorOverlapEvent
	// Size: 0x10 (0x10 - 0x0)
	struct FActorOverlapEvent	
	{
	public:
		APlayerState* PlayerState; // 0x0(0x8)
		AGameplayVolume* Volume; // 0x8(0x8)
	};


	// Struct PlayspaceSystem.PlayspaceUserList
	// Inherited from FFastArraySerializer
	// Size: 0x70 (0x178 - 0x108)
	struct FPlayspaceUserList : public FFastArraySerializer	
	{
	public:
		TArray<FPlayspaceUser> PlayspaceUsers; // 0x108(0x10)
		unsigned char UnknownData00_6[0x54]; // 0x118(0x54) UNKNOWN PROPERTY
		bool bIsInitialized; // 0x16C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x16D(0x3) UNKNOWN PROPERTY
		APlayspace* Playspace; // 0x170(0x8)
	};

}
