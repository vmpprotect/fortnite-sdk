#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ProceduralMeshComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ProceduralMeshComponent.KismetProceduralMeshLibrary");
			return ret;
		}

		void SliceProceduralMesh(UProceduralMeshComponent InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, UProceduralMeshComponent& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, UMaterialInterface CapMaterial); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EB6FA0
		void GetSectionFromStaticMesh(UStaticMesh InMesh, int32_t LODIndex, int32_t SectionIndex, TArray& Vertices, TArray& Triangles, TArray& Normals, TArray& UVs, TArray& Tangents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB6EC0
		void GetSectionFromProceduralMesh(UProceduralMeshComponent InProcMesh, int32_t SectionIndex, TArray& Vertices, TArray& Triangles, TArray& Normals, TArray& UVs, TArray& Tangents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB6DE0
		void GenerateBoxMesh(FVector BoxRadius, TArray& Vertices, TArray& Triangles, TArray& Normals, TArray& UVs, TArray& Tangents); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EB6D00
		void CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray& Triangles, TArray& Vertices, TArray& UVs, float GridSpacing); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB6C20
		void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray& Triangles); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB6B40
		void CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray& Triangles, TArray& Vertices, TArray& UVs, TArray& UV1s, float GridSpacing); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB6A60
		void CopyProceduralMeshFromStaticMeshComponent(UStaticMeshComponent StaticMeshComponent, int32_t LODIndex, UProceduralMeshComponent ProcMeshComponent, bool bCreateCollision); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB6980
		void ConvertQuadToTriangles(TArray& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB68A0
		void CalculateTangentsForMesh(TArray& Vertices, TArray& Triangles, TArray& UVs, TArray& Normals, TArray& Tangents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB67C0
	};


	// Class ProceduralMeshComponent.ProceduralMeshComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x580 - 0x4F8)
	class UProceduralMeshComponent : public UMeshComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x4F8(0x8) UNKNOWN PROPERTY
		bool bUseComplexAsSimpleCollision; // 0x500(0x1)
		bool bUseAsyncCooking; // 0x501(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x502(0x6) UNKNOWN PROPERTY
		UBodySetup ProcMeshBodySetup; // 0x508(0x8)
		TArray ProcMeshSections; // 0x510(0x10)
		TArray CollisionConvexElems; // 0x520(0x10)
		FBoxSphereBounds LocalBounds; // 0x530(0x38)
		TArray AsyncBodySetupQueue; // 0x568(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x578(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ProceduralMeshComponent.ProceduralMeshComponent");
			return ret;
		}

		void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray& Vertices, TArray& Normals, TArray& UV0, TArray& UV1, TArray& UV2, TArray& UV3, TArray& VertexColors, TArray& Tangents, bool bSRGBConversion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB7940
		void UpdateMeshSection(int32_t SectionIndex, TArray& Vertices, TArray& Normals, TArray& UV0, TArray& VertexColors, TArray& Tangents); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB7860
		void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB7780
		bool IsMeshSectionVisible(int32_t SectionIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB76A0
		int32_t GetNumSections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EB75C0
		void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray& Vertices, TArray& Triangles, TArray& Normals, TArray& UV0, TArray& UV1, TArray& UV2, TArray& UV3, TArray& VertexColors, TArray& Tangents, bool bCreateCollision, bool bSRGBConversion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB74E0
		void CreateMeshSection(int32_t SectionIndex, TArray& Vertices, TArray& Triangles, TArray& Normals, TArray& UV0, TArray& VertexColors, TArray& Tangents, bool bCreateCollision); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB7400
		void ClearMeshSection(int32_t SectionIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB7320
		void ClearCollisionConvexMeshes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB7240
		void ClearAllMeshSections(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB7160
		void AddCollisionConvexMesh(TArray ConvexVerts); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB7080
	};

}
