#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WorldMetricsCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WorldMetricsCore.WorldMetricsSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x2A10 (0x2A40 - 0x30)
	class UWorldMetricsSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		TArray Metrics; // 0x40(0x10)
		unsigned char UnknownData04_6[0x29E0]; // 0x50(0x29E0) UNKNOWN PROPERTY
		float UpdateRateInSeconds; // 0x2A30(0x4)
		int32_t WarmUpFrames; // 0x2A34(0x4)
		unsigned char UnknownData05_7[0x8]; // 0x2A38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WorldMetricsCore.WorldMetricsSubsystem");
			return ret;
		}
	};


	// Class WorldMetricsCore.WorldMetricInterface
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWorldMetricInterface : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WorldMetricsCore.WorldMetricInterface");
			return ret;
		}
	};


	// Class WorldMetricsCore.WorldMetricsActorTrackerSubscriber
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWorldMetricsActorTrackerSubscriber : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WorldMetricsCore.WorldMetricsActorTrackerSubscriber");
			return ret;
		}
	};


	// Class WorldMetricsCore.WorldMetricsExtension
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWorldMetricsExtension : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WorldMetricsCore.WorldMetricsExtension");
			return ret;
		}
	};


	// Class WorldMetricsCore.WorldMetricsActorTracker
	// Inherited from UWorldMetricsExtension -> UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UWorldMetricsActorTracker : public UWorldMetricsExtension	
	{
	public:
		unsigned char UnknownData01_1[0xA8]; // 0x28(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WorldMetricsCore.WorldMetricsActorTracker");
			return ret;
		}
	};

}
