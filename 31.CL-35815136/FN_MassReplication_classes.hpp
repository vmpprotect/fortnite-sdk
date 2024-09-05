#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassReplication
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MassReplication.MassClientBubbleInfoBase
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class AMassClientBubbleInfoBase : public AInfo	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x290(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassReplication.MassClientBubbleInfoBase");
			return ret;
		}
	};


	// Class MassReplication.MassNetworkIDFragmentInitializer
	// Inherited from UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x328 (0x400 - 0xD8)
	class UMassNetworkIDFragmentInitializer : public UMassObserverProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x328]; // 0xD8(0x328) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassReplication.MassNetworkIDFragmentInitializer");
			return ret;
		}
	};


	// Class MassReplication.MassReplicationGridProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x960 (0xA20 - 0xC0)
	class UMassReplicationGridProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x960]; // 0xC0(0x960) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassReplication.MassReplicationGridProcessor");
			return ret;
		}
	};


	// Class MassReplication.MassReplicationGridRemoverProcessor
	// Inherited from UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x328 (0x400 - 0xD8)
	class UMassReplicationGridRemoverProcessor : public UMassObserverProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x328]; // 0xD8(0x328) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassReplication.MassReplicationGridRemoverProcessor");
			return ret;
		}
	};


	// Class MassReplication.MassReplicationProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0xFB0 (0x1070 - 0xC0)
	class UMassReplicationProcessor : public UMassProcessor	
	{
	public:
		UMassReplicationSubsystem* ReplicationSubsystem; // 0xC0(0x8)
		unsigned char UnknownData00_7[0xFA8]; // 0xC8(0xFA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassReplication.MassReplicationProcessor");
			return ret;
		}
	};


	// Class MassReplication.MassReplicatorBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassReplicatorBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassReplication.MassReplicatorBase");
			return ret;
		}
	};


	// Class MassReplication.MassReplicationSettings
	// Inherited from UMassModuleSettings -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMassReplicationSettings : public UMassModuleSettings	
	{
	public:
		float ReplicationGridCellSize; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassReplication.MassReplicationSettings");
			return ret;
		}
	};


	// Class MassReplication.MassReplicationSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1B0 (0x1E8 - 0x38)
	class UMassReplicationSubsystem : public UMassSubsystemBase	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x38(0x30) UNKNOWN PROPERTY
		TArray<FMassClientBubbleInfoData> BubbleInfoArray; // 0x68(0x10)
		unsigned char UnknownData01_6[0x30]; // 0x78(0x30) UNKNOWN PROPERTY
		UWorld* World; // 0xA8(0x8)
		UMassLODSubsystem* MassLODSubsystem; // 0xB0(0x8)
		unsigned char UnknownData02_7[0x130]; // 0xB8(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassReplication.MassReplicationSubsystem");
			return ret;
		}
	};


	// Class MassReplication.MassReplicationTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UMassReplicationTrait : public UMassEntityTraitBase	
	{
	public:
		FMassReplicationParameters Params; // 0x28(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassReplication.MassReplicationTrait");
			return ret;
		}
	};

}
