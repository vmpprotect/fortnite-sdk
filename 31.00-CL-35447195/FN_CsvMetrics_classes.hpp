#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CsvMetrics
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CsvMetrics.CsvActorCountMetric
	// Inherited from UWorldMetricInterface -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UCsvActorCountMetric : public UWorldMetricInterface	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x28(0x60) UNKNOWN PROPERTY

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
		TArray MetricClasses; // 0x30(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CsvMetrics.CsvMetricsSubsystem");
			return ret;
		}
	};

}
