#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ORS
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ORS.ORSTestObjectBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UORSTestObjectBase : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestObjectBase");
			return ret;
		}
	};


	// Class ORS.ORSTestObjectA
	// Inherited from UORSTestObjectBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UORSTestObjectA : public UORSTestObjectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestObjectA");
			return ret;
		}
	};


	// Class ORS.ORSTestObjectB
	// Inherited from UORSTestObjectBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UORSTestObjectB : public UORSTestObjectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestObjectB");
			return ret;
		}
	};


	// Class ORS.ORSTestObjectC
	// Inherited from UORSTestObjectBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UORSTestObjectC : public UORSTestObjectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestObjectC");
			return ret;
		}
	};


	// Class ORS.ORSTestObjectD
	// Inherited from UORSTestObjectBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UORSTestObjectD : public UORSTestObjectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestObjectD");
			return ret;
		}
	};


	// Class ORS.ORSCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UORSCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSCheatManager");
			return ret;
		}

		void ORSDebugGroups(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF75172266C(relative to base address)
	};


	// Class ORS.ORSSubsystemShutdown
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UORSSubsystemShutdown : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSSubsystemShutdown");
			return ret;
		}
	};


	// Class ORS.ORSSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UORSSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x30(0x30) UNKNOWN PROPERTY
		UGameFrameworkComponentManager* ComponentManager; // 0x60(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x68(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSSubsystem");
			return ret;
		}
	};


	// Class ORS.ORSTestObjectA_Child
	// Inherited from UORSTestObjectA -> UORSTestObjectBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UORSTestObjectA_Child : public UORSTestObjectA	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestObjectA_Child");
			return ret;
		}
	};


	// Class ORS.ORSTestSubscriber
	// Inherited from UORSTestObjectBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UORSTestSubscriber : public UORSTestObjectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestSubscriber");
			return ret;
		}
	};


	// Class ORS.ORSTestRoot
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UORSTestRoot : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestRoot");
			return ret;
		}
	};


	// Class ORS.ORSTestWorld
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UORSTestWorld : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestWorld");
			return ret;
		}
	};


	// Class ORS.ORSTestPlayer
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UORSTestPlayer : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestPlayer");
			return ret;
		}
	};


	// Class ORS.ORSTestPS
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UORSTestPS : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestPS");
			return ret;
		}
	};


	// Class ORS.ORSTestPawn
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UORSTestPawn : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ORS.ORSTestPawn");
			return ret;
		}
	};

}
