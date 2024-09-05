#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Qos
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Qos.QosBeaconClient
	// Inherited from AOnlineBeaconClient -> AOnlineBeacon -> AActor -> UObject
	// Size: 0x38 (0x358 - 0x320)
	class AQosBeaconClient : public AOnlineBeaconClient	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x320(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Qos.QosBeaconClient");
			return ret;
		}

		void ServerQosRequest(FString InSessionId); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D3D52C4(relative to base address)
		void ClientQosResponse(EQosResponseType Response); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D3D5240(relative to base address)
	};


	// Class Qos.QosBeaconHost
	// Inherited from AOnlineBeaconHostObject -> AActor -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class AQosBeaconHost : public AOnlineBeaconHostObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Qos.QosBeaconHost");
			return ret;
		}
	};


	// Class Qos.QosEvaluator
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UQosEvaluator : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		bool bInProgress; // 0x48(0x1)
		bool bCancelOperation; // 0x49(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		TArray<FDatacenterQosInstance> Datacenters; // 0x50(0x10)
		unsigned char UnknownData02_7[0x20]; // 0x60(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Qos.QosEvaluator");
			return ret;
		}
	};


	// Class Qos.QosRegionManager
	// Inherited from UObject
	// Size: 0xD0 (0xF8 - 0x28)
	class UQosRegionManager : public UObject	
	{
	public:
		int32_t NumTestsPerRegion; // 0x28(0x4)
		float PingTimeout; // 0x2C(0x4)
		bool bEnableSubspaceBiasOrder; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FString SubspaceDelimiter; // 0x38(0x10)
		TArray<FQosRegionInfo> RegionDefinitions; // 0x48(0x10)
		TArray<FQosDatacenterInfo> DatacenterDefinitions; // 0x58(0x10)
		FDateTime LastCheckTimestamp; // 0x68(0x8)
		UQosEvaluator* Evaluator; // 0x70(0x8)
		EQosCompletionResult QosEvalResult; // 0x78(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		TArray<FRegionQosInstance> RegionOptions; // 0x80(0x10)
		FString ForceRegionId; // 0x90(0x10)
		bool bRegionForcedViaCommandline; // 0xA0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FString SelectedRegionId; // 0xA8(0x10)
		unsigned char UnknownData03_7[0x40]; // 0xB8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Qos.QosRegionManager");
			return ret;
		}
	};

}
