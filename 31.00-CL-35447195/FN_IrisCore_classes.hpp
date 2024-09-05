#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: IrisCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class IrisCore.DataStream
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataStream : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.DataStream");
			return ret;
		}
	};


	// Class IrisCore.DataStreamDefinitions
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UDataStreamDefinitions : public UObject	
	{
	public:
		TArray DataStreamDefinitions; // 0x28(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.DataStreamDefinitions");
			return ret;
		}
	};


	// Class IrisCore.DataStreamManager
	// Inherited from UDataStream -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDataStreamManager : public UDataStream	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.DataStreamManager");
			return ret;
		}
	};


	// Class IrisCore.NetObjectPrioritizerConfig
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNetObjectPrioritizerConfig : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectPrioritizerConfig");
			return ret;
		}
	};


	// Class IrisCore.FieldOfViewNetObjectPrioritizerConfig
	// Inherited from UNetObjectPrioritizerConfig -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UFieldOfViewNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig	
	{
	public:
		float InnerSphereRadius; // 0x28(0x4)
		float InnerSpherePriority; // 0x2C(0x4)
		float OuterSphereRadius; // 0x30(0x4)
		float OuterSpherePriority; // 0x34(0x4)
		float ConeFieldOfViewDegrees; // 0x38(0x4)
		float InnerConeLength; // 0x3C(0x4)
		float ConeLength; // 0x40(0x4)
		float MinConePriority; // 0x44(0x4)
		float MaxConePriority; // 0x48(0x4)
		float LineOfSightWidth; // 0x4C(0x4)
		float LineOfSightPriority; // 0x50(0x4)
		float OutsidePriority; // 0x54(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.FieldOfViewNetObjectPrioritizerConfig");
			return ret;
		}
	};


	// Class IrisCore.NetObjectPrioritizer
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNetObjectPrioritizer : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectPrioritizer");
			return ret;
		}
	};


	// Class IrisCore.LocationBasedNetObjectPrioritizer
	// Inherited from UNetObjectPrioritizer -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x28(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.LocationBasedNetObjectPrioritizer");
			return ret;
		}
	};


	// Class IrisCore.FieldOfViewNetObjectPrioritizer
	// Inherited from ULocationBasedNetObjectPrioritizer -> UNetObjectPrioritizer -> UObject
	// Size: 0x8 (0x68 - 0x60)
	class UFieldOfViewNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x60(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.FieldOfViewNetObjectPrioritizer");
			return ret;
		}
	};


	// Class IrisCore.NetObjectFilterConfig
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNetObjectFilterConfig : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectFilterConfig");
			return ret;
		}
	};


	// Class IrisCore.FilterOutNetObjectFilterConfig
	// Inherited from UNetObjectFilterConfig -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFilterOutNetObjectFilterConfig : public UNetObjectFilterConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.FilterOutNetObjectFilterConfig");
			return ret;
		}
	};


	// Class IrisCore.NetObjectFilter
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UNetObjectFilter : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectFilter");
			return ret;
		}
	};


	// Class IrisCore.FilterOutNetObjectFilter
	// Inherited from UNetObjectFilter -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UFilterOutNetObjectFilter : public UNetObjectFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.FilterOutNetObjectFilter");
			return ret;
		}
	};


	// Class IrisCore.IrisObjectReferencePackageMap
	// Inherited from UPackageMap -> UObject
	// Size: 0x8 (0xE8 - 0xE0)
	class UIrisObjectReferencePackageMap : public UPackageMap	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.IrisObjectReferencePackageMap");
			return ret;
		}
	};


	// Class IrisCore.NetBlobHandler
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNetBlobHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetBlobHandler");
			return ret;
		}
	};


	// Class IrisCore.NetBlobHandlerDefinitions
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNetBlobHandlerDefinitions : public UObject	
	{
	public:
		TArray NetBlobHandlerDefinitions; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetBlobHandlerDefinitions");
			return ret;
		}
	};


	// Class IrisCore.NetObjectBlobHandler
	// Inherited from UNetBlobHandler -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UNetObjectBlobHandler : public UNetBlobHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectBlobHandler");
			return ret;
		}
	};


	// Class IrisCore.NetObjectConnectionFilterConfig
	// Inherited from UNetObjectFilterConfig -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNetObjectConnectionFilterConfig : public UNetObjectFilterConfig	
	{
	public:
		uint16_t MaxObjectCount; // 0x28(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectConnectionFilterConfig");
			return ret;
		}
	};


	// Class IrisCore.NetObjectConnectionFilter
	// Inherited from UNetObjectFilter -> UObject
	// Size: 0x50 (0xA8 - 0x58)
	class UNetObjectConnectionFilter : public UNetObjectFilter	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x58(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectConnectionFilter");
			return ret;
		}
	};


	// Class IrisCore.NetObjectCountLimiterConfig
	// Inherited from UNetObjectPrioritizerConfig -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig	
	{
	public:
		ENetObjectCountLimiterMode Mode; // 0x28(0x4)
		uint32_t MaxObjectCount; // 0x2C(0x4)
		float Priority; // 0x30(0x4)
		float OwningConnectionPriority; // 0x34(0x4)
		bool bEnableOwnedObjectsFastLane; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectCountLimiterConfig");
			return ret;
		}
	};


	// Class IrisCore.NetObjectCountLimiter
	// Inherited from UNetObjectPrioritizer -> UObject
	// Size: 0x68 (0x90 - 0x28)
	class UNetObjectCountLimiter : public UNetObjectPrioritizer	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0x28(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectCountLimiter");
			return ret;
		}
	};


	// Class IrisCore.NetObjectFilterDefinitions
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNetObjectFilterDefinitions : public UObject	
	{
	public:
		TArray NetObjectFilterDefinitions; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectFilterDefinitions");
			return ret;
		}
	};


	// Class IrisCore.NetObjectGridFilterConfig
	// Inherited from UNetObjectFilterConfig -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UNetObjectGridFilterConfig : public UNetObjectFilterConfig	
	{
	public:
		uint32_t ViewPosRelevancyFrameCount; // 0x28(0x4)
		uint16_t DefaultFrameCountBeforeCulling; // 0x2C(0x2)
		unsigned char UnknownData02_6[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
		float CellSizeX; // 0x30(0x4)
		float CellSizeY; // 0x34(0x4)
		float MaxCullDistance; // 0x38(0x4)
		float DefaultCullDistance; // 0x3C(0x4)
		bool bUseExactCullDistance; // 0x40(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		TArray FilterProfiles; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectGridFilterConfig");
			return ret;
		}
	};


	// Class IrisCore.NetObjectGridFilter
	// Inherited from UNetObjectFilter -> UObject
	// Size: 0x110 (0x168 - 0x58)
	class UNetObjectGridFilter : public UNetObjectFilter	
	{
	public:
		unsigned char UnknownData01_1[0x110]; // 0x58(0x110) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectGridFilter");
			return ret;
		}
	};


	// Class IrisCore.NetObjectGridWorldLocFilter
	// Inherited from UNetObjectGridFilter -> UNetObjectFilter -> UObject
	// Size: 0x8 (0x170 - 0x168)
	class UNetObjectGridWorldLocFilter : public UNetObjectGridFilter	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x168(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectGridWorldLocFilter");
			return ret;
		}
	};


	// Class IrisCore.NetObjectPrioritizerDefinitions
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNetObjectPrioritizerDefinitions : public UObject	
	{
	public:
		TArray NetObjectPrioritizerDefinitions; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetObjectPrioritizerDefinitions");
			return ret;
		}
	};


	// Class IrisCore.NetRPCHandler
	// Inherited from UNetBlobHandler -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UNetRPCHandler : public UNetBlobHandler	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetRPCHandler");
			return ret;
		}
	};


	// Class IrisCore.NetTokenDataStream
	// Inherited from UDataStream -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UNetTokenDataStream : public UDataStream	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NetTokenDataStream");
			return ret;
		}
	};


	// Class IrisCore.NopNetObjectFilterConfig
	// Inherited from UNetObjectFilterConfig -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNopNetObjectFilterConfig : public UNetObjectFilterConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NopNetObjectFilterConfig");
			return ret;
		}
	};


	// Class IrisCore.NopNetObjectFilter
	// Inherited from UNetObjectFilter -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UNopNetObjectFilter : public UNetObjectFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.NopNetObjectFilter");
			return ret;
		}
	};


	// Class IrisCore.ReplicationBridge
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class UReplicationBridge : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xE8]; // 0x28(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.ReplicationBridge");
			return ret;
		}
	};


	// Class IrisCore.ObjectReplicationBridge
	// Inherited from UReplicationBridge -> UObject
	// Size: 0x490 (0x5A0 - 0x110)
	class UObjectReplicationBridge : public UReplicationBridge	
	{
	public:
		unsigned char UnknownData01_1[0x490]; // 0x110(0x490) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.ObjectReplicationBridge");
			return ret;
		}
	};


	// Class IrisCore.ObjectReplicationBridgeConfig
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UObjectReplicationBridgeConfig : public UObject	
	{
	public:
		TArray PollConfigs; // 0x28(0x10)
		TArray FilterConfigs; // 0x38(0x10)
		TArray PrioritizerConfigs; // 0x48(0x10)
		TArray DeltaCompressionConfigs; // 0x58(0x10)
		TArray CriticalClassConfigs; // 0x68(0x10)
		bool bAllClassesCritical; // 0x78(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		TArray TypeStatsConfigs; // 0x80(0x10)
		FName DefaultSpatialFilterName; // 0x90(0x4)
		FName RequiredNetDriverChannelClassName; // 0x94(0x4)
		TArray CriticalActorClasses; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.ObjectReplicationBridgeConfig");
			return ret;
		}
	};


	// Class IrisCore.SequentialPartialNetBlobHandlerConfig
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USequentialPartialNetBlobHandlerConfig : public UObject	
	{
	public:
		uint32_t MaxPartBitCount; // 0x28(0x4)
		uint32_t MaxPartCount; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.SequentialPartialNetBlobHandlerConfig");
			return ret;
		}
	};


	// Class IrisCore.PartialNetObjectAttachmentHandlerConfig
	// Inherited from USequentialPartialNetBlobHandlerConfig -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UPartialNetObjectAttachmentHandlerConfig : public USequentialPartialNetBlobHandlerConfig	
	{
	public:
		uint32_t BitCountSplitThreshold; // 0x30(0x4)
		uint32_t ClientUnreliableBitCountSplitThreshold; // 0x34(0x4)
		uint32_t ServerUnreliableBitCountSplitThreshold; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.PartialNetObjectAttachmentHandlerConfig");
			return ret;
		}
	};


	// Class IrisCore.SequentialPartialNetBlobHandler
	// Inherited from UNetBlobHandler -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class USequentialPartialNetBlobHandler : public UNetBlobHandler	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.SequentialPartialNetBlobHandler");
			return ret;
		}
	};


	// Class IrisCore.PartialNetObjectAttachmentHandler
	// Inherited from USequentialPartialNetBlobHandler -> UNetBlobHandler -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UPartialNetObjectAttachmentHandler : public USequentialPartialNetBlobHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.PartialNetObjectAttachmentHandler");
			return ret;
		}
	};


	// Class IrisCore.ReplicationDataStream
	// Inherited from UDataStream -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UReplicationDataStream : public UDataStream	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.ReplicationDataStream");
			return ret;
		}
	};


	// Class IrisCore.ReplicationFilteringConfig
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UReplicationFilteringConfig : public UObject	
	{
	public:
		bool bEnableObjectScopeHysteresis; // 0x28(0x1)
		char DefaultHysteresisFrameCount; // 0x29(0x1)
		char HysteresisUpdateConnectionThrottling; // 0x2A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x2B(0x5) UNKNOWN PROPERTY
		TArray HysteresisProfiles; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.ReplicationFilteringConfig");
			return ret;
		}
	};


	// Class IrisCore.ReplicationSystem
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UReplicationSystem : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UReplicationBridge ReplicationBridge; // 0x38(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.ReplicationSystem");
			return ret;
		}
	};


	// Class IrisCore.SphereNetObjectPrioritizerConfig
	// Inherited from UNetObjectPrioritizerConfig -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig	
	{
	public:
		float InnerRadius; // 0x28(0x4)
		float OuterRadius; // 0x2C(0x4)
		float InnerPriority; // 0x30(0x4)
		float OuterPriority; // 0x34(0x4)
		float OutsidePriority; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.SphereNetObjectPrioritizerConfig");
			return ret;
		}
	};


	// Class IrisCore.SphereNetObjectPrioritizer
	// Inherited from ULocationBasedNetObjectPrioritizer -> UNetObjectPrioritizer -> UObject
	// Size: 0x8 (0x68 - 0x60)
	class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x60(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.SphereNetObjectPrioritizer");
			return ret;
		}
	};


	// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
	// Inherited from USphereNetObjectPrioritizerConfig -> UNetObjectPrioritizerConfig -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class USphereWithOwnerBoostNetObjectPrioritizerConfig : public USphereNetObjectPrioritizerConfig	
	{
	public:
		float OwnerPriorityBoost; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig");
			return ret;
		}
	};


	// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
	// Inherited from USphereNetObjectPrioritizer -> ULocationBasedNetObjectPrioritizer -> UNetObjectPrioritizer -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class USphereWithOwnerBoostNetObjectPrioritizer : public USphereNetObjectPrioritizer	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x68(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizer");
			return ret;
		}
	};


	// Class IrisCore.ReplicationStateDescriptorConfig
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UReplicationStateDescriptorConfig : public UObject	
	{
	public:
		TArray SupportsStructNetSerializerList; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.ReplicationStateDescriptorConfig");
			return ret;
		}
	};


	// Class IrisCore.WorldLocationsConfig
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UWorldLocationsConfig : public UObject	
	{
	public:
		FVector MinPos; // 0x28(0x18)
		FVector MaxPos; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrisCore.WorldLocationsConfig");
			return ret;
		}
	};

}
