#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SpatialMetricsCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SpatialMetricsCore.SpatialMetricsConnectorMessage
	// Size: 0x10 (0x10 - 0x0)
	struct FSpatialMetricsConnectorMessage	
	{
	public:
		FGuid MessageId; // 0x0(0x10)
	};


	// Struct SpatialMetricsCore.SpatialMetricsConnectorRequest
	// Inherited from FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x10 - 0x10)
	struct FSpatialMetricsConnectorRequest : public FSpatialMetricsConnectorMessage	
	{
	public:
	};


	// Struct SpatialMetricsCore.SpatialMetricsConnectorResponse
	// Inherited from FSpatialMetricsConnectorMessage
	// Size: 0x28 (0x38 - 0x10)
	struct FSpatialMetricsConnectorResponse : public FSpatialMetricsConnectorMessage	
	{
	public:
		FGuid RequestMessageId; // 0x10(0x10)
		ESpatialMetricsConnectorResponseCode ResponseCode; // 0x20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FText Reason; // 0x28(0x10)
	};


	// Struct SpatialMetricsCore.SpatialMetricsConnectorClientPing
	// Inherited from FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x10 - 0x10)
	struct FSpatialMetricsConnectorClientPing : public FSpatialMetricsConnectorRequest	
	{
	public:
	};


	// Struct SpatialMetricsCore.SpatialMetricsConnectorPlayerViewPoint
	// Size: 0x30 (0x30 - 0x0)
	struct FSpatialMetricsConnectorPlayerViewPoint	
	{
	public:
		FVector Location; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
	};


	// Struct SpatialMetricsCore.SpatialMetricsConnectorClientPong
	// Inherited from FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0xB8 (0xF0 - 0x38)
	struct FSpatialMetricsConnectorClientPong : public FSpatialMetricsConnectorResponse	
	{
	public:
		FGuid ServerId; // 0x38(0x10)
		FString CurrentLevel; // 0x48(0x10)
		FString InstanceType; // 0x58(0x10)
		unsigned char UnknownData01_6[0x38]; // 0x68(0x38) UNKNOWN PROPERTY
		TMap MetaData; // 0xA0(0x50)
	};


	// Struct SpatialMetricsCore.SpatialMetricsConnectorClassRequest
	// Inherited from FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x18 (0x28 - 0x10)
	struct FSpatialMetricsConnectorClassRequest : public FSpatialMetricsConnectorRequest	
	{
	public:
		FSoftClassPath Class; // 0x10(0x18)
	};


	// Struct SpatialMetricsCore.SpatialMetricsConnectorBoolRequest
	// Inherited from FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x4 (0x14 - 0x10)
	struct FSpatialMetricsConnectorBoolRequest : public FSpatialMetricsConnectorRequest	
	{
	public:
		bool bValue; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct SpatialMetricsCore.SpatialMetricsConnectorBoolResponse
	// Inherited from FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x8 (0x40 - 0x38)
	struct FSpatialMetricsConnectorBoolResponse : public FSpatialMetricsConnectorResponse	
	{
	public:
		bool bResult; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct SpatialMetricsCore.SpatialMetricsConnectorClassListResponse
	// Inherited from FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x10 (0x48 - 0x38)
	struct FSpatialMetricsConnectorClassListResponse : public FSpatialMetricsConnectorResponse	
	{
	public:
		TArray Classes; // 0x38(0x10)
	};


	// Struct SpatialMetricsCore.AddSpatialMetricRequest
	// Inherited from FSpatialMetricsConnectorClassRequest -> FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x28 - 0x28)
	struct FAddSpatialMetricRequest : public FSpatialMetricsConnectorClassRequest	
	{
	public:
	};


	// Struct SpatialMetricsCore.AddSpatialMetricResponse
	// Inherited from FSpatialMetricsConnectorBoolResponse -> FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x40 - 0x40)
	struct FAddSpatialMetricResponse : public FSpatialMetricsConnectorBoolResponse	
	{
	public:
	};


	// Struct SpatialMetricsCore.RemoveSpatialMetricRequest
	// Inherited from FSpatialMetricsConnectorClassRequest -> FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x28 - 0x28)
	struct FRemoveSpatialMetricRequest : public FSpatialMetricsConnectorClassRequest	
	{
	public:
	};


	// Struct SpatialMetricsCore.RemoveSpatialMetricResponse
	// Inherited from FSpatialMetricsConnectorBoolResponse -> FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x40 - 0x40)
	struct FRemoveSpatialMetricResponse : public FSpatialMetricsConnectorBoolResponse	
	{
	public:
	};


	// Struct SpatialMetricsCore.ContainsSpatialMetricRequest
	// Inherited from FSpatialMetricsConnectorClassRequest -> FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x28 - 0x28)
	struct FContainsSpatialMetricRequest : public FSpatialMetricsConnectorClassRequest	
	{
	public:
	};


	// Struct SpatialMetricsCore.ContainsSpatialMetricResponse
	// Inherited from FSpatialMetricsConnectorBoolResponse -> FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x40 - 0x40)
	struct FContainsSpatialMetricResponse : public FSpatialMetricsConnectorBoolResponse	
	{
	public:
	};


	// Struct SpatialMetricsCore.SampleSpatialMetricRequest
	// Inherited from FSpatialMetricsConnectorClassRequest -> FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x28 - 0x28)
	struct FSampleSpatialMetricRequest : public FSpatialMetricsConnectorClassRequest	
	{
	public:
	};


	// Struct SpatialMetricsCore.SampleSpatialMetricResponse
	// Inherited from FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x70 (0xA8 - 0x38)
	struct FSampleSpatialMetricResponse : public FSpatialMetricsConnectorResponse	
	{
	public:
		FSpatialMetricSample Sample; // 0x38(0x70)
	};


	// Struct SpatialMetricsCore.SpatialMetricSample
	// Size: 0x70 (0x70 - 0x0)
	struct FSpatialMetricSample	
	{
	public:
		FSoftClassPath Class; // 0x0(0x18)
		FSpatialMetricProperties Properties; // 0x18(0x28)
		TArray Values; // 0x40(0x10)
		FIntVector BoundsMin; // 0x50(0xC)
		FIntVector BoundsMax; // 0x5C(0xC)
		FDateTime Timestamp; // 0x68(0x8)
	};


	// Struct SpatialMetricsCore.SpatialValue
	// Size: 0x10 (0x10 - 0x0)
	struct FSpatialValue	
	{
	public:
		FIntVector Location; // 0x0(0xC)
		int32_t Value; // 0xC(0x4)
	};


	// Struct SpatialMetricsCore.SpatialMetricProperties
	// Size: 0x28 (0x28 - 0x0)
	struct FSpatialMetricProperties	
	{
	public:
		FText Label; // 0x0(0x10)
		int32_t MinValue; // 0x10(0x4)
		int32_t MaxValue; // 0x14(0x4)
		int32_t ThresholdValue; // 0x18(0x4)
		int32_t SpatialPrecision; // 0x1C(0x4)
		EUnit Unit; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct SpatialMetricsCore.ListSpatialMetricsRequest
	// Inherited from FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x10 - 0x10)
	struct FListSpatialMetricsRequest : public FSpatialMetricsConnectorRequest	
	{
	public:
	};


	// Struct SpatialMetricsCore.ListSpatialMetricsResponse
	// Inherited from FSpatialMetricsConnectorClassListResponse -> FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x48 - 0x48)
	struct FListSpatialMetricsResponse : public FSpatialMetricsConnectorClassListResponse	
	{
	public:
	};


	// Struct SpatialMetricsCore.ListAvailableSpatialMetricsRequest
	// Inherited from FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x10 - 0x10)
	struct FListAvailableSpatialMetricsRequest : public FSpatialMetricsConnectorRequest	
	{
	public:
	};


	// Struct SpatialMetricsCore.ListAvailableSpatialMetricsResponse
	// Inherited from FSpatialMetricsConnectorClassListResponse -> FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x48 - 0x48)
	struct FListAvailableSpatialMetricsResponse : public FSpatialMetricsConnectorClassListResponse	
	{
	public:
	};


	// Struct SpatialMetricsCore.EnableSpatialMetricsRequest
	// Inherited from FSpatialMetricsConnectorBoolRequest -> FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x14 - 0x14)
	struct FEnableSpatialMetricsRequest : public FSpatialMetricsConnectorBoolRequest	
	{
	public:
	};


	// Struct SpatialMetricsCore.EnableSpatialMetricsResponse
	// Inherited from FSpatialMetricsConnectorBoolResponse -> FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x40 - 0x40)
	struct FEnableSpatialMetricsResponse : public FSpatialMetricsConnectorBoolResponse	
	{
	public:
	};


	// Struct SpatialMetricsCore.IsSpatialMetricsEnabledRequest
	// Inherited from FSpatialMetricsConnectorRequest -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x10 - 0x10)
	struct FIsSpatialMetricsEnabledRequest : public FSpatialMetricsConnectorRequest	
	{
	public:
	};


	// Struct SpatialMetricsCore.IsSpatialMetricsEnabledResponse
	// Inherited from FSpatialMetricsConnectorBoolResponse -> FSpatialMetricsConnectorResponse -> FSpatialMetricsConnectorMessage
	// Size: 0x0 (0x40 - 0x40)
	struct FIsSpatialMetricsEnabledResponse : public FSpatialMetricsConnectorBoolResponse	
	{
	public:
	};


	// Struct SpatialMetricsCore.SpatialMetricSampleImageProperties
	// Size: 0x10 (0x10 - 0x0)
	struct FSpatialMetricSampleImageProperties	
	{
	public:
		int32_t ImageSize; // 0x0(0x4)
		int32_t MinWorldUnitsPerPixel; // 0x4(0x4)
		float WorldColorSaturation; // 0x8(0x4)
		float SpatialValueAlpha; // 0xC(0x4)
	};


	// Struct SpatialMetricsCore.SpatialMetricHeatmapColorProperties
	// Size: 0x24 (0x24 - 0x0)
	struct FSpatialMetricHeatmapColorProperties	
	{
	public:
		FColor MinValueColor; // 0x0(0x4)
		FColor MidpointColor; // 0x4(0x4)
		FColor MaxValueColor; // 0x8(0x4)
		FColor ThresholdValueColor; // 0xC(0x4)
		FColor SampleBoundsColor; // 0x10(0x4)
		float MinAlpha; // 0x14(0x4)
		float MaxAlpha; // 0x18(0x4)
		float AlphaFactor; // 0x1C(0x4)
		float MidpointRatio; // 0x20(0x4)
	};

}
