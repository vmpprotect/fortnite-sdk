#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Qos
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct Qos.QosSubspaceComparisonParams
	// Size: 0x10 (0x10 - 0x0)
	struct FQosSubspaceComparisonParams	
	{
	public:
		int32_t MaxNonSubspacePingMs; // 0x0(0x4)
		int32_t MinSubspacePingMs; // 0x4(0x4)
		int32_t ConstantMaxToleranceMs; // 0x8(0x4)
		float ScaledMaxTolerancePct; // 0xC(0x4)
	};


	// Struct Qos.QosPingServerInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FQosPingServerInfo	
	{
	public:
		FString address; // 0x0(0x10)
		int32_t Port; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Qos.QosDatacenterInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FQosDatacenterInfo	
	{
	public:
		FString ID; // 0x0(0x10)
		FString RegionId; // 0x10(0x10)
		bool bEnabled; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		TArray<FQosPingServerInfo> Servers; // 0x28(0x10)
	};


	// Struct Qos.QosRegionInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FQosRegionInfo	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		FString RegionId; // 0x10(0x10)
		bool bEnabled; // 0x20(0x1)
		bool bVisible; // 0x21(0x1)
		bool bAutoAssignable; // 0x22(0x1)
		bool bAllowSubspaceBias; // 0x23(0x1)
		FQosSubspaceComparisonParams SubspaceBiasParams; // 0x24(0x10)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct Qos.DatacenterQosInstance
	// Size: 0x68 (0x68 - 0x0)
	struct FDatacenterQosInstance	
	{
	public:
		FQosDatacenterInfo Definition; // 0x0(0x38)
		EQosDatacenterResult Result; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t AvgPingMs; // 0x3C(0x4)
		TArray<int32_t> PingResults; // 0x40(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x50(0x8) UNKNOWN PROPERTY
		FDateTime LastCheckTimestamp; // 0x58(0x8)
		bool bUsable; // 0x60(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct Qos.RegionQosInstance
	// Size: 0x48 (0x48 - 0x0)
	struct FRegionQosInstance	
	{
	public:
		FQosRegionInfo Definition; // 0x0(0x38)
		TArray<FDatacenterQosInstance> DatacenterOptions; // 0x38(0x10)
	};

}
