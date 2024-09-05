#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EntityCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EntityCore.EntityComponent
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UEntityComponent : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityComponent");
			return ret;
		}
	};


	// Class EntityCore.EntityDataBackedComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UEntityDataBackedComponent : public UEntityComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityDataBackedComponent");
			return ret;
		}
	};


	// Class EntityCore.EntityPositionComponent
	// Inherited from UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x0 (0x60 - 0x60)
	class UEntityPositionComponent : public UEntityDataBackedComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityPositionComponent");
			return ret;
		}
	};


	// Class EntityCore.EntityRotationComponent
	// Inherited from UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x0 (0x60 - 0x60)
	class UEntityRotationComponent : public UEntityDataBackedComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityRotationComponent");
			return ret;
		}
	};


	// Class EntityCore.EntityScaleComponent
	// Inherited from UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x0 (0x60 - 0x60)
	class UEntityScaleComponent : public UEntityDataBackedComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityScaleComponent");
			return ret;
		}
	};


	// Class EntityCore.EntityCoreDataBackedRelativePositionComponent
	// Inherited from UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x0 (0x60 - 0x60)
	class UEntityCoreDataBackedRelativePositionComponent : public UEntityDataBackedComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityCoreDataBackedRelativePositionComponent");
			return ret;
		}
	};


	// Class EntityCore.Entity
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UEntitydup_243 : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		ULevel* Level; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.Entity");
			return ret;
		}
	};


	// Class EntityCore.EntityCoreSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x120 (0x150 - 0x30)
	class UEntityCoreSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		TMap<uint32_t, FEntityComponentContainer> ComponentMap; // 0x40(0x50)
		unsigned char UnknownData01_6[0x58]; // 0x90(0x58) UNKNOWN PROPERTY
		TArray<UEntityComponent*> ComponentArray; // 0xE8(0x10)
		TMap<uint32_t, UEntity*> Entities; // 0xF8(0x50)
		unsigned char UnknownData02_7[0x8]; // 0x148(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityCoreSubsystem");
			return ret;
		}
	};


	// Class EntityCore.EntityEnableableComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x20 (0x78 - 0x58)
	class UEntityEnableableComponent : public UEntityComponent	
	{
	public:
		bool IsEnabled : 1; // 0x58:0(0x1)
		bool LastIsEnabled : 1; // 0x58:1(0x1)
		unsigned char UnknownData00_7[0x1F]; // 0x59(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityEnableableComponent");
			return ret;
		}

		void OnRep_Enabled(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D125EBC(relative to base address)
	};


	// Class EntityCore.EntityTickableComponent
	// Inherited from UEntityEnableableComponent -> UEntityComponent -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UEntityTickableComponent : public UEntityEnableableComponent	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x78(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityTickableComponent");
			return ret;
		}
	};


	// Class EntityCore.EntityScriptComponent
	// Inherited from UEntityTickableComponent -> UEntityEnableableComponent -> UEntityComponent -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UEntityScriptComponent : public UEntityTickableComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityCore.EntityScriptComponent");
			return ret;
		}
	};

}
