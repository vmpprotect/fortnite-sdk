#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ZoneGraph
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ZoneGraph.ZoneGraphBuilderRegisteredComponent
	// Size: 0x18 (0x18 - 0x0)
	struct FZoneGraphBuilderRegisteredComponent	
	{
	public:
		UZoneShapeComponent Component; // 0x0(0x8)
		uint32_t ShapeHash; // 0x8(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xC(0xC) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneShapeComponentBuildData
	// Size: 0x18 (0x18 - 0x0)
	struct FZoneShapeComponentBuildData	
	{
	public:
		int32_t ZoneIndex; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Lanes; // 0x8(0x10)
	};


	// Struct ZoneGraph.ZoneGraphLaneHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FZoneGraphLaneHandle	
	{
	public:
		int32_t Index; // 0x0(0x4)
		FZoneGraphDataHandle DataHandle; // 0x4(0x4)
	};


	// Struct ZoneGraph.ZoneGraphDataHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FZoneGraphDataHandle	
	{
	public:
		uint16_t Index; // 0x0(0x2)
		uint16_t Generation; // 0x2(0x2)
	};


	// Struct ZoneGraph.ZoneGraphBuildData
	// Size: 0x50 (0x50 - 0x0)
	struct FZoneGraphBuildData	
	{
	public:
		TMap ZoneShapeComponentBuildData; // 0x0(0x50)
	};


	// Struct ZoneGraph.ZoneGraphBuilder
	// Size: 0x198 (0x198 - 0x0)
	struct FZoneGraphBuilder	
	{
	public:
		TArray ShapeComponents; // 0x0(0x10)
		TArray ShapeComponentsFreeList; // 0x10(0x10)
		TMap ShapeComponentToIndex; // 0x20(0x50)
		FZoneGraphBuildData BuildData; // 0x70(0x50)
		unsigned char UnknownData01_7[0xD8]; // 0xC0(0xD8) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneGraphBVNode
	// Size: 0x10 (0x10 - 0x0)
	struct FZoneGraphBVNode	
	{
	public:
		uint16_t MinX; // 0x0(0x2)
		uint16_t MinY; // 0x2(0x2)
		uint16_t MinZ; // 0x4(0x2)
		uint16_t MaxX; // 0x6(0x2)
		uint16_t MaxY; // 0x8(0x2)
		uint16_t MaxZ; // 0xA(0x2)
		int32_t Index; // 0xC(0x4)
	};


	// Struct ZoneGraph.ZoneGraphBVTree
	// Size: 0x30 (0x30 - 0x0)
	struct FZoneGraphBVTree	
	{
	public:
		FVector Origin; // 0x0(0x18)
		float QuantizationScale; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray Nodes; // 0x20(0x10)
	};


	// Struct ZoneGraph.RegisteredZoneGraphData
	// Size: 0x10 (0x10 - 0x0)
	struct FRegisteredZoneGraphData	
	{
	public:
		AZoneGraphData ZoneGraphData; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FZoneHandle	
	{
	public:
		uint32_t Index; // 0x0(0x4)
	};


	// Struct ZoneGraph.ZoneGraphTag
	// Size: 0x1 (0x1 - 0x0)
	struct FZoneGraphTag	
	{
	public:
		char Bit; // 0x0(0x1)
	};


	// Struct ZoneGraph.ZoneGraphTagMask
	// Size: 0x4 (0x4 - 0x0)
	struct FZoneGraphTagMask	
	{
	public:
		uint32_t Mask; // 0x0(0x4)
	};


	// Struct ZoneGraph.ZoneGraphTagFilter
	// Size: 0xC (0xC - 0x0)
	struct FZoneGraphTagFilter	
	{
	public:
		FZoneGraphTagMask AnyTags; // 0x0(0x4)
		FZoneGraphTagMask AllTags; // 0x4(0x4)
		FZoneGraphTagMask NotTags; // 0x8(0x4)
	};


	// Struct ZoneGraph.ZoneGraphTagInfo
	// Size: 0xC (0xC - 0x0)
	struct FZoneGraphTagInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		FColor Color; // 0x4(0x4)
		FZoneGraphTag tag; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneLaneDesc
	// Size: 0xC (0xC - 0x0)
	struct FZoneLaneDesc	
	{
	public:
		float Width; // 0x0(0x4)
		EZoneLaneDirection Direction; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FZoneGraphTagMask Tags; // 0x8(0x4)
	};


	// Struct ZoneGraph.ZoneLaneProfile
	// Size: 0x28 (0x28 - 0x0)
	struct FZoneLaneProfile	
	{
	public:
		FName Name; // 0x0(0x4)
		FGuid ID; // 0x4(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray Lanes; // 0x18(0x10)
	};


	// Struct ZoneGraph.ZoneLaneProfileRef
	// Size: 0x14 (0x14 - 0x0)
	struct FZoneLaneProfileRef	
	{
	public:
		FName Name; // 0x0(0x4)
		FGuid ID; // 0x4(0x10)
	};


	// Struct ZoneGraph.ZoneLaneLinkData
	// Size: 0x8 (0x8 - 0x0)
	struct FZoneLaneLinkData	
	{
	public:
		int32_t DestLaneIndex; // 0x0(0x4)
		EZoneLaneLinkType Type; // 0x4(0x1)
		char Flags; // 0x5(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneLaneData
	// Size: 0x20 (0x20 - 0x0)
	struct FZoneLaneData	
	{
	public:
		float Width; // 0x0(0x4)
		FZoneGraphTagMask Tags; // 0x4(0x4)
		int32_t PointsBegin; // 0x8(0x4)
		int32_t PointsEnd; // 0xC(0x4)
		int32_t LinksBegin; // 0x10(0x4)
		int32_t LinksEnd; // 0x14(0x4)
		int32_t ZoneIndex; // 0x18(0x4)
		uint16_t StartEntryId; // 0x1C(0x2)
		uint16_t EndEntryId; // 0x1E(0x2)
	};


	// Struct ZoneGraph.ZoneData
	// Size: 0x50 (0x50 - 0x0)
	struct FZoneData	
	{
	public:
		int32_t BoundaryPointsBegin; // 0x0(0x4)
		int32_t BoundaryPointsEnd; // 0x4(0x4)
		int32_t LanesBegin; // 0x8(0x4)
		int32_t LanesEnd; // 0xC(0x4)
		FBox Bounds; // 0x10(0x38)
		FZoneGraphTagMask Tags; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneGraphLaneLocation
	// Size: 0x70 (0x70 - 0x0)
	struct FZoneGraphLaneLocation	
	{
	public:
		FVector Position; // 0x0(0x18)
		FVector Direction; // 0x18(0x18)
		FVector Tangent; // 0x30(0x18)
		FVector Up; // 0x48(0x18)
		FZoneGraphLaneHandle LaneHandle; // 0x60(0x8)
		int32_t LaneSegment; // 0x68(0x4)
		float DistanceAlongLane; // 0x6C(0x4)
	};


	// Struct ZoneGraph.ZoneGraphCompactLaneLocation
	// Size: 0xC (0xC - 0x0)
	struct FZoneGraphCompactLaneLocation	
	{
	public:
		FZoneGraphLaneHandle LaneHandle; // 0x0(0x8)
		float DistanceAlongLane; // 0x8(0x4)
	};


	// Struct ZoneGraph.ZoneGraphLaneSection
	// Size: 0x10 (0x10 - 0x0)
	struct FZoneGraphLaneSection	
	{
	public:
		FZoneGraphLaneHandle LaneHandle; // 0x0(0x8)
		float StartDistanceAlongLane; // 0x8(0x4)
		float EndDistanceAlongLane; // 0xC(0x4)
	};


	// Struct ZoneGraph.ZoneGraphLinkedLane
	// Size: 0xC (0xC - 0x0)
	struct FZoneGraphLinkedLane	
	{
	public:
		FZoneGraphLaneHandle DestLane; // 0x0(0x8)
		EZoneLaneLinkType Type; // 0x8(0x1)
		char Flags; // 0x9(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneGraphStorage
	// Size: 0xF0 (0xF0 - 0x0)
	struct FZoneGraphStorage	
	{
	public:
		TArray Zones; // 0x0(0x10)
		TArray Lanes; // 0x10(0x10)
		TArray BoundaryPoints; // 0x20(0x10)
		TArray LanePoints; // 0x30(0x10)
		TArray LaneUpVectors; // 0x40(0x10)
		TArray LaneTangentVectors; // 0x50(0x10)
		TArray LanePointProgressions; // 0x60(0x10)
		TArray LaneLinks; // 0x70(0x10)
		FBox Bounds; // 0x80(0x38)
		FZoneGraphBVTree ZoneBVTree; // 0xB8(0x30)
		unsigned char UnknownData01_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneShapePoint
	// Size: 0x70 (0x70 - 0x0)
	struct FZoneShapePoint	
	{
	public:
		FVector Position; // 0x0(0x18)
		FVector InControlPoint; // 0x18(0x18)
		FVector OutControlPoint; // 0x30(0x18)
		float TangentLength; // 0x48(0x4)
		float InnerTurnRadius; // 0x4C(0x4)
		FRotator Rotation; // 0x50(0x18)
		FZoneShapePointType Type; // 0x68(0x1)
		char LaneProfile; // 0x69(0x1)
		bool bReverseLaneProfile; // 0x6A(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x6B(0x1) UNKNOWN PROPERTY
		int32_t LaneConnectionRestrictions; // 0x6C(0x4)
	};


	// Struct ZoneGraph.ZoneShapeConnector
	// Size: 0x68 (0x68 - 0x0)
	struct FZoneShapeConnector	
	{
	public:
		FVector Position; // 0x0(0x18)
		FVector Normal; // 0x18(0x18)
		FVector Up; // 0x30(0x18)
		int32_t PointIndex; // 0x48(0x4)
		FZoneLaneProfileRef LaneProfile; // 0x4C(0x14)
		bool bReverseLaneProfile; // 0x60(0x1)
		FZoneShapeType ShapeType; // 0x61(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x62(0x6) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneShapeConnection
	// Size: 0xC (0xC - 0x0)
	struct FZoneShapeConnection	
	{
	public:
		TWeakObjectPtr ShapeComponent; // 0x0(0x8)
		int32_t ConnectorIndex; // 0x8(0x4)
	};


	// Struct ZoneGraph.ZoneGraphTessellationSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FZoneGraphTessellationSettings	
	{
	public:
		FZoneGraphTagFilter LaneFilter; // 0x0(0xC)
		float TessellationTolerance; // 0xC(0x4)
	};


	// Struct ZoneGraph.ZoneGraphLaneRoutingRule
	// Size: 0x58 (0x58 - 0x0)
	struct FZoneGraphLaneRoutingRule	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString Comment; // 0x8(0x10)
		FZoneGraphTagFilter ZoneTagFilter; // 0x18(0xC)
		FZoneLaneProfileRef SourceLaneProfile; // 0x24(0x14)
		FZoneLaneProfileRef DestinationLaneProfile; // 0x38(0x14)
		EZoneGraphLaneRoutingCountRule SourceOutgoingConnections; // 0x4C(0x1)
		EZoneGraphLaneRoutingCountRule DestinationIncomingConnections; // 0x4D(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x4E(0x2) UNKNOWN PROPERTY
		int32_t ConnectionRestrictions; // 0x50(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneGraphBuildSettings
	// Size: 0x60 (0x60 - 0x0)
	struct FZoneGraphBuildSettings	
	{
	public:
		float CommonTessellationTolerance; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray SpecificTessellationTolerances; // 0x8(0x10)
		float LaneConnectionAngle; // 0x18(0x4)
		FZoneGraphTagMask LaneConnectionMask; // 0x1C(0x4)
		float TurnThresholdAngle; // 0x20(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray PolygonRoutingRules; // 0x28(0x10)
		float ConnectionSnapDistance; // 0x38(0x4)
		float ConnectionSnapAngle; // 0x3C(0x4)
		double DragEndpointAutoConnectRange; // 0x40(0x8)
		double DragEndpointAutoIntersectionRange; // 0x48(0x8)
		double SnapAutoIntersectionToClosestPointTolerance; // 0x50(0x8)
		bool bShow3DRadiusForAutoConnectionAndIntersection; // 0x58(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
	};


	// Struct ZoneGraph.ZoneShapeLaneInternalLink
	// Size: 0xC (0xC - 0x0)
	struct FZoneShapeLaneInternalLink	
	{
	public:
		int32_t LaneIndex; // 0x0(0x4)
		FZoneLaneLinkData LinkData; // 0x4(0x8)
	};

}
