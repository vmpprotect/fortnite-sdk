#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SpatialMetricsCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SpatialMetricsCore.SpatialMetricsActorIndexerSubscriber
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USpatialMetricsActorIndexerSubscriber : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricsActorIndexerSubscriber");
			return ret;
		}
	};


	// Class SpatialMetricsCore.SpatialMetricsContextInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USpatialMetricsContextInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricsContextInterface");
			return ret;
		}
	};


	// Class SpatialMetricsCore.SpatialMetricsLocationIndexerSubscriber
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USpatialMetricsLocationIndexerSubscriber : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricsLocationIndexerSubscriber");
			return ret;
		}
	};


	// Class SpatialMetricsCore.SpatialMetricInterface
	// Inherited from UWorldMetricInterface -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class USpatialMetricInterface : public UWorldMetricInterface	
	{
	public:
		FSpatialMetricProperties Properties; // 0x28(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricInterface");
			return ret;
		}
	};


	// Class SpatialMetricsCore.SpatialMetricBase
	// Inherited from USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x20 (0x70 - 0x50)
	class USpatialMetricBase : public USpatialMetricInterface	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x50(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricBase");
			return ret;
		}
	};


	// Class SpatialMetricsCore.SpatialMetricsActorIndexer
	// Inherited from UWorldMetricsExtension -> UObject
	// Size: 0x1C0 (0x1E8 - 0x28)
	class USpatialMetricsActorIndexer : public UWorldMetricsExtension	
	{
	public:
		unsigned char UnknownData02_3[0x1B8]; // 0x28(0x1B8) UNKNOWN PROPERTY
		int32_t IndexCacheSize; // 0x1E0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricsActorIndexer");
			return ret;
		}
	};


	// Class SpatialMetricsCore.SpatialMetricsEditorContext
	// Inherited from UWorldMetricsExtension -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class USpatialMetricsEditorContext : public UWorldMetricsExtension	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		int32_t SpatialPrecision; // 0x30(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricsEditorContext");
			return ret;
		}
	};


	// Class SpatialMetricsCore.SpatialMetricsLocationIndexer
	// Inherited from UWorldMetricsExtension -> UObject
	// Size: 0x120 (0x148 - 0x28)
	class USpatialMetricsLocationIndexer : public UWorldMetricsExtension	
	{
	public:
		unsigned char UnknownData01_1[0x120]; // 0x28(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricsLocationIndexer");
			return ret;
		}
	};


	// Class SpatialMetricsCore.SpatialMetricsPlayerContext
	// Inherited from UWorldMetricsExtension -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class USpatialMetricsPlayerContext : public UWorldMetricsExtension	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		int32_t SpatialPrecision; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricsPlayerContext");
			return ret;
		}

		void OnPlayerPawnPossessionChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Protected 0x7FF41465CF38
	};


	// Class SpatialMetricsCore.SpatialMetricsSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class USpatialMetricsSubsystem : public UWorldSubsystem	
	{
	public:
		TArray Metrics; // 0x30(0x10)
		TArray AllowedMetricClasses; // 0x40(0x10)
		TArray BlockedMetricClasses; // 0x50(0x10)
		unsigned char UnknownData02_6[0x1]; // 0x60(0x1) UNKNOWN PROPERTY
		bool bAutoCreateConnectorServer; // 0x61(0x1)
		unsigned char UnknownData03_7[0x16]; // 0x62(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.SpatialMetricsSubsystem");
			return ret;
		}
	};


	// Class SpatialMetricsCore.TestMetric
	// Inherited from USpatialMetricBase -> USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x28 (0x98 - 0x70)
	class UTestMetric : public USpatialMetricBase	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x70(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsCore.TestMetric");
			return ret;
		}
	};

}
