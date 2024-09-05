#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Qos
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Qos.QosBeaconClient
	// Inherited from AOnlineBeaconClient -> AOnlineBeacon -> AActor -> UObject
	// Size: 0x38 (0x358 - 0x320)
	class AQosBeaconClient : public AOnlineBeaconClient	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x320(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Qos.QosBeaconClient");
			return ret;
		}

		void ServerQosRequest(FString InSessionId); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414608678
		void ClientQosResponse(EQosResponseType Response); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414608598
	};


	// Class Qos.QosBeaconHost
	// Inherited from AOnlineBeaconHostObject -> AActor -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class AQosBeaconHost : public AOnlineBeaconHostObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		bool bInProgress; // 0x48(0x1)
		bool bCancelOperation; // 0x49(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		TArray Datacenters; // 0x50(0x10)
		unsigned char UnknownData05_7[0x20]; // 0x60(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData04_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FString SubspaceDelimiter; // 0x38(0x10)
		TArray RegionDefinitions; // 0x48(0x10)
		TArray DatacenterDefinitions; // 0x58(0x10)
		FDateTime LastCheckTimestamp; // 0x68(0x8)
		UQosEvaluator Evaluator; // 0x70(0x8)
		EQosCompletionResult QosEvalResult; // 0x78(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		TArray RegionOptions; // 0x80(0x10)
		FString ForceRegionId; // 0x90(0x10)
		bool bRegionForcedViaCommandline; // 0xA0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FString SelectedRegionId; // 0xA8(0x10)
		unsigned char UnknownData07_7[0x40]; // 0xB8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Qos.QosRegionManager");
			return ret;
		}
	};

}
