#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshNetwork
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MeshNetwork.MeshBeaconClient
	// Inherited from AOnlineBeaconClient -> AOnlineBeacon -> AActor -> UObject
	// Size: 0x80 (0x3A0 - 0x320)
	class AMeshBeaconClient : public AOnlineBeaconClient	
	{
	public:
		unsigned char UnknownData03_3[0x40]; // 0x320(0x40) UNKNOWN PROPERTY
		bool bConnectedToRoot; // 0x360(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x361(0x7) UNKNOWN PROPERTY
		FDateTime MeshPingTime; // 0x368(0x8)
		TArray ParentIds; // 0x370(0x10)
		FString ClientId; // 0x380(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x390(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshNetwork.MeshBeaconClient");
			return ret;
		}

		void ServerUpdateMultipleLevelsVisibility(TArray LevelVisibilities); // Flags: Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF41465C4B8
		void ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo LevelVisibility); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF41465C3D8
		void ServerSetClientId(FString NewClientId); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF41465C2F8
		void OnRep_ParentIds(); // Flags: Final|Native|Protected 0x7FF41465C218
		void OnRep_MeshPingTime(); // Flags: Native|Protected 0x7FF41465C138
		void OnRep_ConnectedToRoot(); // Flags: Final|Native|Protected 0x7FF41465C058
	};


	// Class MeshNetwork.MeshBeaconHost
	// Inherited from AOnlineBeaconHost -> AOnlineBeacon -> AActor -> UObject
	// Size: 0x8 (0x3D8 - 0x3D0)
	class AMeshBeaconHost : public AOnlineBeaconHost	
	{
	public:
		int32_t MaxConnections; // 0x3D0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3D4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshNetwork.MeshBeaconHost");
			return ret;
		}
	};


	// Class MeshNetwork.MeshBeaconHostObject
	// Inherited from AOnlineBeaconHostObject -> AActor -> UObject
	// Size: 0x18 (0x2D0 - 0x2B8)
	class AMeshBeaconHostObject : public AOnlineBeaconHostObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x2B8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshNetwork.MeshBeaconHostObject");
			return ret;
		}
	};


	// Class MeshNetwork.MeshConnection
	// Inherited from UIpConnection -> UNetConnection -> UPlayer -> UObject
	// Size: 0x0 (0x1EA0 - 0x1EA0)
	class UMeshConnection : public UIpConnection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshNetwork.MeshConnection");
			return ret;
		}
	};


	// Class MeshNetwork.MeshNetDriver
	// Inherited from UIpNetDriver -> UNetDriver -> UObject
	// Size: 0x18 (0x958 - 0x940)
	class UMeshNetDriver : public UIpNetDriver	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x940(0x8) UNKNOWN PROPERTY
		TArray ClientDormantDynamicActors; // 0x948(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshNetwork.MeshNetDriver");
			return ret;
		}
	};


	// Class MeshNetwork.MeshNetworkComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UMeshNetworkComponent : public UActorComponent	
	{
	public:
		EMeshNetworkRelevancy MeshRelevancy; // 0xA0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		TMap AggregatedFunctions; // 0xA8(0x50)
		TMap AggregatedFunctionConfigs; // 0xF8(0x50)
		unsigned char UnknownData03_7[0x8]; // 0x148(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshNetwork.MeshNetworkComponent");
			return ret;
		}

		bool IsConnectedToMeshRoot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465C678
		EMeshNetworkNodeType GetMeshNetworkNodeType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465C598
	};


	// Class MeshNetwork.MeshNetworkSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0xD8 (0x108 - 0x30)
	class UMeshNetworkSubsystem : public UGameInstanceSubsystem	
	{
	public:
		FMulticastInlineDelegate OnMeshNodeTypeChanged; // 0x30(0x10)
		FMulticastInlineDelegate OnConnectedToRootChanged; // 0x40(0x10)
		FMulticastInlineDelegate OnGameServerNodeTypeChanged; // 0x50(0x10)
		FMulticastInlineDelegate OnMeshMetaDataUpdated; // 0x60(0x10)
		FMulticastInlineDelegate OnMeshPlayerRequested; // 0x70(0x10)
		unsigned char UnknownData02_6[0x30]; // 0x80(0x30) UNKNOWN PROPERTY
		EMeshNetworkNodeType NodeType; // 0xB0(0x1)
		EMeshNetworkNodeType GameServerNodeType; // 0xB1(0x1)
		bool bConnectedToRoot; // 0xB2(0x1)
		bool bMetadataReceived; // 0xB3(0x1)
		unsigned char UnknownData03_7[0x54]; // 0xB4(0x54) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshNetwork.MeshNetworkSubsystem");
			return ret;
		}

		void SetMetaDataWithKey(FName Key, FMeshMetaDataStruct& MetaData); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF41465CE58
		void SetMetaData(FMeshMetaDataStruct& MetaData); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF41465CD78
		bool GetMetaDataWithKey(FName Key, FMeshMetaDataStruct& MetaData); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF41465CC98
		void GetMetadata(FMeshMetaDataStruct& MetaData); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF41465CBB8
		EMeshNetworkNodeType GetMeshNetworkNodeType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465CAD8
		EMeshNetworkNodeType GetGameServerNodeType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465C9F8
		bool GetConnectedToRoot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465C918
		void EnableMeshReplication(AActor Actor, UClass MeshComponentClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41465C838
		void DisableMeshReplication(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41465C758
	};


	// Class MeshNetwork.MeshReplicationGraphConnection
	// Inherited from UNetReplicationGraphConnection -> UReplicationConnectionDriver -> UObject
	// Size: 0x0 (0x378 - 0x378)
	class UMeshReplicationGraphConnection : public UNetReplicationGraphConnection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshNetwork.MeshReplicationGraphConnection");
			return ret;
		}
	};


	// Class MeshNetwork.MeshReplicationGraph
	// Inherited from UReplicationGraph -> UReplicationDriver -> UObject
	// Size: 0x10 (0x580 - 0x570)
	class UMeshReplicationGraph : public UReplicationGraph	
	{
	public:
		UReplicationGraphNode_ActorList AlwaysRelevantNode; // 0x570(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshNetwork.MeshReplicationGraph");
			return ret;
		}
	};

}
