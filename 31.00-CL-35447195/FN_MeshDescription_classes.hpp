#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshDescription
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MeshDescription.MeshDescriptionBase
	// Inherited from UObject
	// Size: 0x2C8 (0x2F0 - 0x28)
	class UMeshDescriptionBase : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x2C8]; // 0x28(0x2C8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshDescription.MeshDescriptionBase");
			return ret;
		}

		void SetVertexPosition(FVertexID VertexID, FVector& Position); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144922B8
		void SetPolygonVertexInstances(FPolygonID PolygonID, TArray& VertexInstanceIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144921D8
		void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144920F8
		void ReversePolygonFacing(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414492018
		void ReserveNewVertices(int32_t NumberOfNewVertices); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414491F38
		void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414491E58
		void ReserveNewTriangles(int32_t NumberOfNewTriangles); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414491D78
		void ReserveNewPolygons(int32_t NumberOfNewPolygons); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414491C98
		void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414491BB8
		void ReserveNewEdges(int32_t NumberOfNewEdges); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414491AD8
		bool IsVertexValid(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144919F8
		bool IsVertexOrphaned(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414491918
		bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414491838
		bool IsTriangleValid(FTriangleID TriangleID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414491758
		bool IsTrianglePartOfNgon(FTriangleID TriangleID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414491678
		bool IsPolygonValid(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414491598
		bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144914B8
		bool IsEmpty(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144913D8
		bool IsEdgeValid(FEdgeID EdgeID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144912F8
		bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414491218
		bool IsEdgeInternal(FEdgeID EdgeID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414491138
		void GetVertexVertexInstances(FVertexID VertexID, TArray& OutVertexInstanceIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414491058
		FVector GetVertexPosition(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414490F78
		FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414490E98
		FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414490DB8
		FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414490CD8
		FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414490BF8
		FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414490B18
		int32_t GetVertexInstanceCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414490A38
		void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray& OutConnectedTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414490958
		void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray& OutConnectedPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414490878
		int32_t GetVertexCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414490798
		void GetVertexConnectedTriangles(FVertexID VertexID, TArray& OutConnectedTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4144906B8
		void GetVertexConnectedPolygons(FVertexID VertexID, TArray& OutConnectedPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4144905D8
		void GetVertexConnectedEdges(FVertexID VertexID, TArray& OutEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4144904F8
		void GetVertexAdjacentVertices(FVertexID VertexID, TArray& OutAdjacentVertexIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414490418
		void GetTriangleVertices(FTriangleID TriangleID, TArray& OutVertexIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414490338
		void GetTriangleVertexInstances(FTriangleID TriangleID, TArray& OutVertexInstanceIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414490258
		FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414490178
		FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414490098
		FPolygonID GetTrianglePolygon(FTriangleID TriangleID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448FFB8
		void GetTriangleEdges(FTriangleID TriangleID, TArray& OutEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448FED8
		int32_t GetTriangleCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448FDF8
		void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray& OutTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448FD18
		void GetPolygonVertices(FPolygonID PolygonID, TArray& OutVertexIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448FC38
		void GetPolygonVertexInstances(FPolygonID PolygonID, TArray& OutVertexInstanceIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448FB58
		void GetPolygonTriangles(FPolygonID PolygonID, TArray& OutTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448FA78
		FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448F998
		void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray& OutEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448F8B8
		void GetPolygonInternalEdges(FPolygonID PolygonID, TArray& OutEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448F7D8
		void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray& OutPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448F6F8
		int32_t GetPolygonGroupCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448F618
		int32_t GetPolygonCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448F538
		void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray& OutPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448F458
		int32_t GetNumVertexVertexInstances(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448F378
		int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448F298
		int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448F1B8
		int32_t GetNumVertexConnectedTriangles(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448F0D8
		int32_t GetNumVertexConnectedPolygons(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448EFF8
		int32_t GetNumVertexConnectedEdges(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448EF18
		int32_t GetNumPolygonVertices(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448EE38
		int32_t GetNumPolygonTriangles(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448ED58
		int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448EC78
		int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448EB98
		int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448EAB8
		int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448E9D8
		void GetEdgeVertices(FEdgeID EdgeID, TArray& OutVertexIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448E8F8
		FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448E818
		int32_t GetEdgeCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41448E738
		void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray& OutConnectedTriangleIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448E658
		void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray& OutConnectedPolygonIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41448E578
		void Empty(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448E498
		void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray& OrphanedVertices); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41448E3B8
		void DeleteVertex(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448E2D8
		void DeleteTriangle(FTriangleID TriangleID, TArray& OrphanedEdges, TArray& OrphanedVertexInstances, TArray& OrphanedPolygonGroupsPtr); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41448E1F8
		void DeletePolygonGroup(FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448E118
		void DeletePolygon(FPolygonID PolygonID, TArray& OrphanedEdges, TArray& OrphanedVertexInstances, TArray& OrphanedPolygonGroups); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41448E038
		void DeleteEdge(FEdgeID EdgeID, TArray& OrphanedVertices); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41448DF58
		void CreateVertexWithID(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448DE78
		void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448DD98
		FVertexInstanceID CreateVertexInstance(FVertexID VertexID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448DCB8
		FVertexID CreateVertex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448DBD8
		void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray& VertexInstanceIDs, TArray& NewEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41448DAF8
		FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray& VertexInstanceIDs, TArray& NewEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41448DA18
		void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray& VertexInstanceIDs, TArray& NewEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41448D938
		void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448D858
		FPolygonGroupID CreatePolygonGroup(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448D778
		FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray& VertexInstanceIDs, TArray& NewEdgeIDs); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41448D698
		void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448D5B8
		FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448D4D8
		void ComputePolygonTriangulation(FPolygonID PolygonID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41448D3F8
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
