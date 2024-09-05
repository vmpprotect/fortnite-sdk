#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MeshDescription
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MeshDescription.MeshDescriptionBase
	// Inherited from UObject
	// Size: 0x2C8 (0x2F0 - 0x28)
	class UMeshDescriptionBase : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x2C8]; // 0x28(0x2C8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshDescription.MeshDescriptionBase");
			return ret;
		}

		void SetVertexPosition(FVertexID VertexID, FVector& Position); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74BBD458C(relative to base address)
		void SetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& VertexInstanceIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBD4414(relative to base address)
		void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBD4244(relative to base address)
		void ReversePolygonFacing(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBD4134(relative to base address)
		void ReserveNewVertices(int32_t NumberOfNewVertices); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBD40B4(relative to base address)
		void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBD3E9C(relative to base address)
		void ReserveNewTriangles(int32_t NumberOfNewTriangles); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBD4034(relative to base address)
		void ReserveNewPolygons(int32_t NumberOfNewPolygons); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBD3FB4(relative to base address)
		void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBD3F1C(relative to base address)
		void ReserveNewEdges(int32_t NumberOfNewEdges); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBD3E9C(relative to base address)
		bool IsVertexValid(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD3D3C(relative to base address)
		bool IsVertexOrphaned(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD3C20(relative to base address)
		bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD3AC0(relative to base address)
		bool IsTriangleValid(FTriangleID TriangleID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD3960(relative to base address)
		bool IsTrianglePartOfNgon(FTriangleID TriangleID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD3844(relative to base address)
		bool IsPolygonValid(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD36E4(relative to base address)
		bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD3584(relative to base address)
		bool IsEmpty(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD355C(relative to base address)
		bool IsEdgeValid(FEdgeID EdgeID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD33FC(relative to base address)
		bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD321C(relative to base address)
		bool IsEdgeInternal(FEdgeID EdgeID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD3100(relative to base address)
		void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD2F88(relative to base address)
		FVector GetVertexPosition(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD2E58(relative to base address)
		FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD2C80(relative to base address)
		FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD2B68(relative to base address)
		FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD2990(relative to base address)
		FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD27B8(relative to base address)
		FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD25E0(relative to base address)
		int32_t GetVertexInstanceCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD25B4(relative to base address)
		void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD243C(relative to base address)
		void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD22C4(relative to base address)
		int32_t GetVertexCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD2298(relative to base address)
		void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD2120(relative to base address)
		void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD1FA8(relative to base address)
		void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD1E30(relative to base address)
		void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD1CB8(relative to base address)
		void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD1B40(relative to base address)
		void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD19C8(relative to base address)
		FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD17F0(relative to base address)
		FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD16D8(relative to base address)
		FPolygonID GetTrianglePolygon(FTriangleID TriangleID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD15C0(relative to base address)
		void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD1448(relative to base address)
		int32_t GetTriangleCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD141C(relative to base address)
		void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD12A4(relative to base address)
		void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD112C(relative to base address)
		void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0FB4(relative to base address)
		void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0E3C(relative to base address)
		FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0D24(relative to base address)
		void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0BAC(relative to base address)
		void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0A34(relative to base address)
		void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD08BC(relative to base address)
		int32_t GetPolygonGroupCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0890(relative to base address)
		int32_t GetPolygonCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0864(relative to base address)
		void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD06EC(relative to base address)
		int32_t GetNumVertexVertexInstances(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD05D0(relative to base address)
		int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD04B4(relative to base address)
		int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0398(relative to base address)
		int32_t GetNumVertexConnectedTriangles(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD027C(relative to base address)
		int32_t GetNumVertexConnectedPolygons(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0160(relative to base address)
		int32_t GetNumVertexConnectedEdges(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBD0044(relative to base address)
		int32_t GetNumPolygonVertices(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCFF28(relative to base address)
		int32_t GetNumPolygonTriangles(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCFE0C(relative to base address)
		int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCFCF0(relative to base address)
		int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCFBD4(relative to base address)
		int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCFAB8(relative to base address)
		int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCF99C(relative to base address)
		void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCF824(relative to base address)
		FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCF64C(relative to base address)
		int32_t GetEdgeCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCF620(relative to base address)
		void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCF4A8(relative to base address)
		void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BBCF330(relative to base address)
		void Empty(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCF318(relative to base address)
		void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBCF1A0(relative to base address)
		void DeleteVertex(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCF090(relative to base address)
		void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBCEE60(relative to base address)
		void DeletePolygonGroup(FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCED50(relative to base address)
		void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBCEB20(relative to base address)
		void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBCE9A8(relative to base address)
		void CreateVertexWithID(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCE898(relative to base address)
		void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCE6C8(relative to base address)
		FVertexInstanceID CreateVertexInstance(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCE5B0(relative to base address)
		FVertexID CreateVertex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCE580(relative to base address)
		void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBCE2F8(relative to base address)
		FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBCE114(relative to base address)
		void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBCDE8C(relative to base address)
		void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCDD7C(relative to base address)
		FPolygonGroupID CreatePolygonGroup(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCDD4C(relative to base address)
		FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BBCDB68(relative to base address)
		void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCD8D0(relative to base address)
		FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCD6F8(relative to base address)
		void ComputePolygonTriangulation(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BBCD5E8(relative to base address)
	};


	// Class MeshDescription.MeshDescriptionBaseBulkData
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshDescriptionBaseBulkData : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshDescription.MeshDescriptionBaseBulkData");
			return ret;
		}
	};

}
