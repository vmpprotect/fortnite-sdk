#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NetCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NetCore.FastArraySerializerItem
	// Size: 0xC (0xC - 0x0)
	struct FFastArraySerializerItem	
	{
	public:
		int32_t ReplicationID; // 0x0(0x4)
		int32_t ReplicationKey; // 0x4(0x4)
		int32_t MostRecentArrayReplicationKey; // 0x8(0x4)
	};


	// Struct NetCore.FastArraySerializer
	// Size: 0x108 (0x108 - 0x0)
	struct FFastArraySerializer	
	{
	public:
		unsigned char UnknownData00_7[0x54]; // 0x0(0x54) UNKNOWN PROPERTY
		int32_t ArrayReplicationKey; // 0x54(0x4)
		unsigned char UnknownData01_6[0xA8]; // 0x58(0xA8) UNKNOWN PROPERTY
		EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
	};


	// Struct NetCore.NetAnalyticsDataConfig
	// Size: 0x8 (0x8 - 0x0)
	struct FNetAnalyticsDataConfig	
	{
	public:
		FName DataName; // 0x0(0x4)
		bool bEnabled; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct NetCore.StateStruct
	// Size: 0x18 (0x18 - 0x0)
	struct FStateStruct	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FString StateName; // 0x8(0x10)
	};


	// Struct NetCore.EscalationState
	// Inherited from FStateStruct
	// Size: 0x18 (0x30 - 0x18)
	struct FEscalationState : public FStateStruct	
	{
	public:
		bool bLogEscalate; // 0x18(0x1)
		bool bDormant; // 0x19(0x1)
		int16_t CooloffTime; // 0x1A(0x2)
		int16_t AutoEscalateTime; // 0x1C(0x2)
		int8_t HighestTimePeriod; // 0x1E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x1F(0x1) UNKNOWN PROPERTY
		TArray<int8_t> AllTimePeriods; // 0x20(0x10)
	};


	// Struct NetCore.NetFaultState
	// Inherited from FEscalationState -> FStateStruct
	// Size: 0x10 (0x40 - 0x30)
	struct FNetFaultState : public FEscalationState	
	{
	public:
		bool bCloseConnection; // 0x30(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x31(0x1) UNKNOWN PROPERTY
		int16_t EscalateQuotaFaultsPerPeriod; // 0x32(0x2)
		int8_t EscalateQuotaFaultPercentPerPeriod; // 0x34(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x35(0x1) UNKNOWN PROPERTY
		int16_t DescalateQuotaFaultsPerPeriod; // 0x36(0x2)
		int8_t DescalateQuotaFaultPercentPerPeriod; // 0x38(0x1)
		int8_t EscalateQuotaTimePeriod; // 0x39(0x1)
		unsigned char UnknownData02_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};

}
