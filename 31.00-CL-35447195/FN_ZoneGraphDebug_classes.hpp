#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ZoneGraphDebug
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ZoneGraphDebug.ZoneLaneTest
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UZoneLaneTest : public UObject	
	{
	public:
		UZoneGraphTestingComponent OwnerComponent; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphDebug.ZoneLaneTest");
			return ret;
		}
	};


	// Class ZoneGraphDebug.ZoneGraphTestingComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x2D8 (0x7A0 - 0x4C8)
	class UZoneGraphTestingComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0x4C8(0x10) UNKNOWN PROPERTY
		UZoneGraphSubsystem ZoneGraph; // 0x4D8(0x8)
		FZoneGraphLaneLocation LaneLocation; // 0x4E0(0x70)
		FZoneGraphLaneLocation NextLaneLocation; // 0x550(0x70)
		FZoneGraphLaneLocation NearestLaneLocation; // 0x5C0(0x70)
		FVector SearchExtent; // 0x630(0x18)
		float AdvanceDistance; // 0x648(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x64C(0x4) UNKNOWN PROPERTY
		FVector NearestTestOffset; // 0x650(0x18)
		FZoneGraphTagFilter QueryFilter; // 0x668(0xC)
		bool bDrawLinkedLanes; // 0x674(0x1)
		bool bDrawLaneTangentVectors; // 0x675(0x1)
		bool bDrawLaneSmoothing; // 0x676(0x1)
		bool bDrawBVTreeQuery; // 0x677(0x1)
		bool bDrawLanePath; // 0x678(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x679(0x7) UNKNOWN PROPERTY
		AZoneGraphTestingActor OtherActor; // 0x680(0x8)
		unsigned char UnknownData08_6[0x100]; // 0x688(0x100) UNKNOWN PROPERTY
		TArray CustomTests; // 0x788(0x10)
		unsigned char UnknownData09_7[0x8]; // 0x798(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphDebug.ZoneGraphTestingComponent");
			return ret;
		}

		void EnableCustomTests(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA6838
		void DisableCustomTests(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA6758
	};


	// Class ZoneGraphDebug.ZoneGraphTestingActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AZoneGraphTestingActor : public AActor	
	{
	public:
		UZoneGraphTestingComponent DebugComp; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraphDebug.ZoneGraphTestingActor");
			return ret;
		}

		void EnableCustomTests(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA69F8
		void DisableCustomTests(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA6918
	};

}
