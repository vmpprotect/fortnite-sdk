#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NetworkPrediction
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NetworkPrediction.NetworkPredictionComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x1F0 (0x290 - 0xA0)
	class UNetworkPredictionComponent : public UActorComponent	
	{
	public:
		FNetworkPredictionProxy NetworkPredictionProxy; // 0xA0(0xB0)
		FReplicationProxy ReplicationProxy_ServerRPC; // 0x150(0x50)
		FReplicationProxy ReplicationProxy_Autonomous; // 0x1A0(0x50)
		FReplicationProxy ReplicationProxy_Simulated; // 0x1F0(0x50)
		FReplicationProxy ReplicationProxy_Replay; // 0x240(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetworkPrediction.NetworkPredictionComponent");
			return ret;
		}

		void ServerReceiveClientInput(FServerReplicationRPCParameter ProxyParameter); // Flags: Net|Native|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D8A7E9C(relative to base address)
	};


	// Class NetworkPrediction.NetworkPredictionPhysicsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UNetworkPredictionPhysicsComponent : public UActorComponent	
	{
	public:
		FNetworkPredictionProxy NetworkPredictionProxy; // 0xA0(0xB0)
		UPrimitiveComponent* UpdatedPrimitive; // 0x150(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FReplicationProxy ReplicationProxy; // 0x160(0x50)
		unsigned char UnknownData01_7[0x10]; // 0x1B0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetworkPrediction.NetworkPredictionPhysicsComponent");
			return ret;
		}
	};


	// Class NetworkPrediction.NetworkPredictionReplicatedManager
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ANetworkPredictionReplicatedManager : public AActor	
	{
	public:
		FSharedPackageMap SharedPackageMap; // 0x290(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetworkPrediction.NetworkPredictionReplicatedManager");
			return ret;
		}
	};


	// Class NetworkPrediction.NetworkPredictionSettingsObject
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UNetworkPredictionSettingsObject : public UObject	
	{
	public:
		FNetworkPredictionSettings Settings; // 0x28(0x30)
		TArray<FNetworkPredictionDevHUD> DevHUDs; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetworkPrediction.NetworkPredictionSettingsObject");
			return ret;
		}
	};


	// Class NetworkPrediction.NetworkPredictionWorldManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x640 (0x670 - 0x30)
	class UNetworkPredictionWorldManager : public UWorldSubsystem	
	{
	public:
		ANetworkPredictionReplicatedManager* ReplicatedManager; // 0x30(0x8)
		unsigned char UnknownData00_7[0x638]; // 0x38(0x638) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetworkPrediction.NetworkPredictionWorldManager");
			return ret;
		}
	};

}
