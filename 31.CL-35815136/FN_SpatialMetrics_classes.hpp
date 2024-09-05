#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SpatialMetrics
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SpatialMetrics.SpatialActorCountMetric
	// Inherited from USpatialMetricBase -> USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class USpatialActorCountMetric : public USpatialMetricBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetrics.SpatialActorCountMetric");
			return ret;
		}
	};


	// Class SpatialMetrics.SpatialActorResourceSizeMetric
	// Inherited from USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0xE8 (0x138 - 0x50)
	class USpatialActorResourceSizeMetric : public USpatialMetricInterface	
	{
	public:
		unsigned char UnknownData00_3[0xE0]; // 0x50(0xE0) UNKNOWN PROPERTY
		float UpdateTimeThresholdInMs; // 0x130(0x4)
		EResourceSizeMemoryCategory MemoryCategoryFlags; // 0x134(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x135(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetrics.SpatialActorResourceSizeMetric");
			return ret;
		}
	};


	// Class SpatialMetrics.SpatialAvailableMemoryMetric
	// Inherited from USpatialMetricBase -> USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class USpatialAvailableMemoryMetric : public USpatialMetricBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetrics.SpatialAvailableMemoryMetric");
			return ret;
		}
	};


	// Class SpatialMetrics.SpatialFrameTimeMetric
	// Inherited from USpatialMetricBase -> USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class USpatialFrameTimeMetric : public USpatialMetricBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetrics.SpatialFrameTimeMetric");
			return ret;
		}
	};


	// Class SpatialMetrics.SpatialGameUpdateTimeMetric
	// Inherited from USpatialMetricBase -> USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class USpatialGameUpdateTimeMetric : public USpatialMetricBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetrics.SpatialGameUpdateTimeMetric");
			return ret;
		}
	};


	// Class SpatialMetrics.SpatialMemoryUsageMetric
	// Inherited from USpatialMetricBase -> USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class USpatialMemoryUsageMetric : public USpatialMetricBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetrics.SpatialMemoryUsageMetric");
			return ret;
		}
	};


	// Class SpatialMetrics.SpatialProxyMetric
	// Inherited from USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x50 (0xA0 - 0x50)
	class USpatialProxyMetric : public USpatialMetricInterface	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x50(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetrics.SpatialProxyMetric");
			return ret;
		}
	};


	// Class SpatialMetrics.SpatialRenderTimeMetric
	// Inherited from USpatialMetricBase -> USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class USpatialRenderTimeMetric : public USpatialMetricBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetrics.SpatialRenderTimeMetric");
			return ret;
		}
	};

}
