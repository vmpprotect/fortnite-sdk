#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CsvMetrics
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CsvMetrics.CsvActorCountMetric
	// Inherited from UWorldMetricInterface -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UCsvActorCountMetric : public UWorldMetricInterface	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0x28(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CsvMetrics.CsvActorCountMetric");
			return ret;
		}
	};


	// Class CsvMetrics.CsvMetricsSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UCsvMetricsSubsystem : public UWorldSubsystem	
	{
	public:
		TArray<UClass*> MetricClasses; // 0x30(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CsvMetrics.CsvMetricsSubsystem");
			return ret;
		}
	};

}
