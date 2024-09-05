#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ZoneGraph
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ZoneGraph.ZoneGraphData
	// Inherited from AActor -> UObject
	// Size: 0x130 (0x3C0 - 0x290)
	class AZoneGraphData : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x1]; // 0x290(0x1) UNKNOWN PROPERTY
		bool bEnableDrawing; // 0x291(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x292(0x6) UNKNOWN PROPERTY
		UZoneGraphRenderingComponent* RenderingComp; // 0x298(0x8)
		FZoneGraphStorage ZoneStorage; // 0x2A0(0xF0)
		unsigned char UnknownData02_6[0x28]; // 0x390(0x28) UNKNOWN PROPERTY
		uint32_t CombinedShapeHash; // 0x3B8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3BC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraph.ZoneGraphData");
			return ret;
		}
	};


	// Class ZoneGraph.ZoneGraphRenderingComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x4E0 - 0x4C8)
	class UZoneGraphRenderingComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x4C8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraph.ZoneGraphRenderingComponent");
			return ret;
		}
	};


	// Class ZoneGraph.ZoneGraphSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x200 (0x230 - 0x30)
	class UZoneGraphSettings : public UDeveloperSettings	
	{
	public:
		TArray<FZoneLaneProfile> LaneProfiles; // 0x30(0x10)
		FZoneGraphTagInfo Tags; // 0x40(0x180)
		FZoneGraphTagMask VisualizedTags; // 0x1C0(0x4)
		float ShapeMaxDrawDistance; // 0x1C4(0x4)
		FZoneGraphBuildSettings BuildSettings; // 0x1C8(0x60)
		bool bBuildZoneGraphWhileEditing; // 0x228(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x229(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraph.ZoneGraphSettings");
			return ret;
		}
	};


	// Class ZoneGraph.ZoneGraphSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UZoneGraphSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x40(0x28) UNKNOWN PROPERTY
		TArray<FRegisteredZoneGraphData> RegisteredZoneGraphData; // 0x68(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraph.ZoneGraphSubsystem");
			return ret;
		}
	};


	// Class ZoneGraph.ZoneShape
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AZoneShape : public AActor	
	{
	public:
		UZoneShapeComponent* ShapeComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraph.ZoneShape");
			return ret;
		}
	};


	// Class ZoneGraph.ZoneShapeComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x530 - 0x4C8)
	class UZoneShapeComponent : public UPrimitiveComponent	
	{
	public:
		FZoneLaneProfileRef LaneProfile; // 0x4C8(0x14)
		bool bReverseLaneProfile; // 0x4DC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x4DD(0x3) UNKNOWN PROPERTY
		TArray<FZoneLaneProfileRef> PerPointLaneProfiles; // 0x4E0(0x10)
		TArray<FZoneShapePoint> Points; // 0x4F0(0x10)
		FZoneShapeType ShapeType; // 0x500(0x1)
		EZoneShapePolygonRoutingType PolygonRoutingType; // 0x501(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x502(0x2) UNKNOWN PROPERTY
		FZoneGraphTagMask Tags; // 0x504(0x4)
		TArray<FZoneShapeConnector> ShapeConnectors; // 0x508(0x10)
		TArray<FZoneShapeConnection> ConnectedShapes; // 0x518(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x528(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ZoneGraph.ZoneShapeComponent");
			return ret;
		}

		void SetTags(FZoneGraphTagMask NewTags); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7504ECF50(relative to base address)
		void SetShapeType(FZoneShapeType Type); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7504ECED4(relative to base address)
		bool SetReverseLaneProfile(bool bReverse); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7504ECE48(relative to base address)
		void SetPolygonRoutingType(EZoneShapePolygonRoutingType NewType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7504ECDCC(relative to base address)
		bool IsLaneProfileReversed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7504ECDB4(relative to base address)
		FZoneGraphTagMask GetTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7504ECD9C(relative to base address)
		FZoneShapeType GetShapeType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D2224(relative to base address)
	};

}
