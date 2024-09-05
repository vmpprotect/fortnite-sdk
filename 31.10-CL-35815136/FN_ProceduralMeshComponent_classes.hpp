#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ProceduralMeshComponent
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void SliceProceduralMesh(UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, UProceduralMeshComponent* OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7520A08E8(relative to base address)
		void GetSectionFromStaticMesh(UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520A047C(relative to base address)
		void GetSectionFromProceduralMesh(UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520A00CC(relative to base address)
		void GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75209FDCC(relative to base address)
		void CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, float GridSpacing); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75209F208(relative to base address)
		void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t>& Triangles); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75209F034(relative to base address)
		void CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, float GridSpacing); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75209ED3C(relative to base address)
		void CopyProceduralMeshFromStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75209E9B4(relative to base address)
		void ConvertQuadToTriangles(TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75209E610(relative to base address)
		void CalculateTangentsForMesh(TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector2D>& UVs, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75209E2B4(relative to base address)
	};


	// Class ProceduralMeshComponent.ProceduralMeshComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x580 - 0x4F8)
	class UProceduralMeshComponent : public UMeshComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x4F8(0x8) UNKNOWN PROPERTY
		bool bUseComplexAsSimpleCollision; // 0x500(0x1)
		bool bUseAsyncCooking; // 0x501(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x502(0x6) UNKNOWN PROPERTY
		UBodySetup* ProcMeshBodySetup; // 0x508(0x8)
		TArray<FProcMeshSection> ProcMeshSections; // 0x510(0x10)
		TArray<FKConvexElem> CollisionConvexElems; // 0x520(0x10)
		FBoxSphereBounds LocalBounds; // 0x530(0x38)
		TArray<UBodySetup*> AsyncBodySetupQueue; // 0x568(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x578(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ProceduralMeshComponent.ProceduralMeshComponent");
			return ret;
		}

		void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bSRGBConversion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520A104C(relative to base address)
		void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520A0D9C(relative to base address)
		void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520A0824(relative to base address)
		bool IsMeshSectionVisible(int32_t SectionIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7520A077C(relative to base address)
		int32_t GetNumSections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7502F865C(relative to base address)
		void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75209F824(relative to base address)
		void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75209F49C(relative to base address)
		void ClearMeshSection(int32_t SectionIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75209E590(relative to base address)
		void ClearCollisionConvexMeshes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75209E57C(relative to base address)
		void ClearAllMeshSections(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75209E4F8(relative to base address)
		void AddCollisionConvexMesh(TArray<FVector> ConvexVerts); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75209E1D8(relative to base address)
	};

}
