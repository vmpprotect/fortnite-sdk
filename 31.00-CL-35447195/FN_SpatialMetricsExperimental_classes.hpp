#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SpatialMetricsExperimental
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SpatialMetricsExperimental.ActorPackageDependencyARDiskSizeMetric_Archive
	// Inherited from USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x2D8 (0x328 - 0x50)
	class UActorPackageDependencyARDiskSizeMetric_Archive : public USpatialMetricInterface	
	{
	public:
		unsigned char UnknownData01_1[0x2D8]; // 0x50(0x2D8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsExperimental.ActorPackageDependencyARDiskSizeMetric_Archive");
			return ret;
		}
	};


	// Class SpatialMetricsExperimental.ActorPackageDependencyCountMetric_Archive
	// Inherited from USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x2D0 (0x320 - 0x50)
	class UActorPackageDependencyCountMetric_Archive : public USpatialMetricInterface	
	{
	public:
		unsigned char UnknownData01_1[0x2D0]; // 0x50(0x2D0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsExperimental.ActorPackageDependencyCountMetric_Archive");
			return ret;
		}
	};


	// Class SpatialMetricsExperimental.ActorPackageDependencyIoDispatcherSizeMetric_Archive
	// Inherited from USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x2E0 (0x330 - 0x50)
	class UActorPackageDependencyIoDispatcherSizeMetric_Archive : public USpatialMetricInterface	
	{
	public:
		unsigned char UnknownData02_3[0x2D8]; // 0x50(0x2D8) UNKNOWN PROPERTY
		EIoDispatcherChunkTypeFlags ChunkTypeFlags; // 0x328(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsExperimental.ActorPackageDependencyIoDispatcherSizeMetric_Archive");
			return ret;
		}
	};


	// Class SpatialMetricsExperimental.ActorPackageDependencyResourceSizeMetric_Archive
	// Inherited from USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x2E0 (0x330 - 0x50)
	class UActorPackageDependencyResourceSizeMetric_Archive : public USpatialMetricInterface	
	{
	public:
		unsigned char UnknownData02_3[0x2D8]; // 0x50(0x2D8) UNKNOWN PROPERTY
		EResourceSizeMemoryCategory MemoryCategoryFlags; // 0x328(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x329(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsExperimental.ActorPackageDependencyResourceSizeMetric_Archive");
			return ret;
		}
	};


	// Class SpatialMetricsExperimental.LevelPackageDiskSizeMetric
	// Inherited from USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x3A0 (0x3F0 - 0x50)
	class ULevelPackageDiskSizeMetric : public USpatialMetricInterface	
	{
	public:
		unsigned char UnknownData02_3[0x390]; // 0x50(0x390) UNKNOWN PROPERTY
		USpatialMetricsPackageMetadataProvider IoStorePackageHandler; // 0x3E0(0x8)
		EIoDispatcherChunkTypeFlags ChunkTypeFlags; // 0x3E8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsExperimental.LevelPackageDiskSizeMetric");
			return ret;
		}
	};


	// Class SpatialMetricsExperimental.SceneGraphComponentCountMetric
	// Inherited from USpatialMetricBase -> USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class USceneGraphComponentCountMetric : public USpatialMetricBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsExperimental.SceneGraphComponentCountMetric");
			return ret;
		}
	};


	// Class SpatialMetricsExperimental.SceneGraphEntityCountMetric
	// Inherited from USpatialMetricBase -> USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class USceneGraphEntityCountMetric : public USpatialMetricBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsExperimental.SceneGraphEntityCountMetric");
			return ret;
		}
	};


	// Class SpatialMetricsExperimental.SpatialMetricsPackageMetadataProvider
	// Inherited from UWorldMetricsExtension -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class USpatialMetricsPackageMetadataProvider : public UWorldMetricsExtension	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpatialMetricsExperimental.SpatialMetricsPackageMetadataProvider");
			return ret;
		}
	};

}
