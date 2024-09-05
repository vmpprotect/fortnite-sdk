#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NetworkPrediction
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NetworkPrediction.NetworkPredictionProxy
	// Size: 0xB0 (0xB0 - 0x0)
	struct FNetworkPredictionProxy	
	{
	public:
		unsigned char UnknownData00_7[0xA0]; // 0x0(0xA0) UNKNOWN PROPERTY
		UNetworkPredictionWorldManager* WorldManager; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
	};


	// Struct NetworkPrediction.SharedPackageMapItem
	// Size: 0x20 (0x20 - 0x0)
	struct FSharedPackageMapItem	
	{
	public:
		TWeakObjectPtr<UObject*> SoftPtr; // 0x0(0x20)
	};


	// Struct NetworkPrediction.SharedPackageMap
	// Size: 0x10 (0x10 - 0x0)
	struct FSharedPackageMap	
	{
	public:
		TArray<FSharedPackageMapItem> Items; // 0x0(0x10)
	};


	// Struct NetworkPrediction.ReplicationProxy
	// Size: 0x50 (0x50 - 0x0)
	struct FReplicationProxy	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct NetworkPrediction.ServerReplicationRPCParameter
	// Size: 0x18 (0x18 - 0x0)
	struct FServerReplicationRPCParameter	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct NetworkPrediction.NetworkPredictionSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FNetworkPredictionSettings	
	{
	public:
		ENetworkPredictionTickingPolicy PreferredTickingPolicy; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UClass* ReplicatedManagerClassOverride; // 0x8(0x8)
		int32_t FixedTickFrameRate; // 0x10(0x4)
		bool bForceEngineFixTickForcePhysics; // 0x14(0x1)
		ENetworkLOD SimulatedProxyNetworkLOD; // 0x15(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		int32_t FixedTickInterpolationBufferedMS; // 0x18(0x4)
		int32_t IndependentTickInterpolationBufferedMS; // 0x1C(0x4)
		int32_t IndependentTickInterpolationMaxBufferedMS; // 0x20(0x4)
		int32_t FixedTickInputSendCount; // 0x24(0x4)
		int32_t IndependentTickInputSendCount; // 0x28(0x4)
		int32_t MaximumRemoteInputFaultLimit; // 0x2C(0x4)
	};


	// Struct NetworkPrediction.NetworkPredictionDevHUDItem
	// Size: 0x28 (0x28 - 0x0)
	struct FNetworkPredictionDevHUDItem	
	{
	public:
		FString DisplayName; // 0x0(0x10)
		FString ExecCommand; // 0x10(0x10)
		bool bAutoBack; // 0x20(0x1)
		bool bRequirePIE; // 0x21(0x1)
		bool bRequireNotPIE; // 0x22(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x23(0x5) UNKNOWN PROPERTY
	};


	// Struct NetworkPrediction.NetworkPredictionDevHUD
	// Size: 0x28 (0x28 - 0x0)
	struct FNetworkPredictionDevHUD	
	{
	public:
		FString HUDName; // 0x0(0x10)
		TArray<FNetworkPredictionDevHUDItem> Items; // 0x10(0x10)
		bool bRequirePIE; // 0x20(0x1)
		bool bRequireNotPIE; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};

}
