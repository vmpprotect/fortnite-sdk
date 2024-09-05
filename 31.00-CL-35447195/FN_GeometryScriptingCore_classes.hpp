#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GeometryScriptingCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GeometryScriptingCore.GeometryScriptDebug
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGeometryScriptDebug : public UObject	
	{
	public:
		TArray Messages; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptDebug");
			return ret;
		}
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions");
			return ret;
		}

		FGeometryScriptSimpleCollision TransformSimpleCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FTransform Transform, FGeometryScriptTransformCollisionOptions& TransformOptions, bool& bSuccess, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C47BB8
		bool StaticMeshHasCustomizedCollision(UStaticMesh StaticMeshAsset); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C47AD8
		void SimplifyConvexHulls(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptConvexHullSimplificationOptions& SimplifyOptions, bool& bHasSimplified, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C479F8
		bool SetStaticMeshCustomComplexCollision(UStaticMesh StaticMeshAsset, UStaticMesh StaticMeshCollisionAsset, bool bEmitTransaction, bool bMarkCollisionAsCustomized, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C47918
		UDynamicMesh SetStaticMeshCollisionFromMesh(UDynamicMesh FromDynamicMesh, UStaticMesh ToStaticMeshAsset, FGeometryScriptCollisionFromMeshOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C47838
		void SetStaticMeshCollisionFromComponent(UStaticMesh StaticMeshAsset, UPrimitiveComponent SourceComponent, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C47758
		void SetSimpleCollisionOfStaticMesh(FGeometryScriptSimpleCollision& SimpleCollision, UStaticMesh StaticMesh, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C47678
		void SetSimpleCollisionOfDynamicMeshComponent(FGeometryScriptSimpleCollision& SimpleCollision, UDynamicMeshComponent DynamicMeshComponent, FGeometryScriptSetSimpleCollisionOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C47598
		UDynamicMesh SetDynamicMeshCollisionFromMesh(UDynamicMesh FromDynamicMesh, UDynamicMeshComponent ToDynamicMeshComponent, FGeometryScriptCollisionFromMeshOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C474B8
		void ResetDynamicMeshCollision(UDynamicMeshComponent Component, bool bEmitTransaction, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C473D8
		FGeometryScriptSimpleCollision MergeSimpleCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptMergeSimpleCollisionOptions& MergeOptions, bool& bHasMerged, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C472F8
		int32_t GetSimpleCollisionShapeCount(FGeometryScriptSimpleCollision& SimpleCollision); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C47218
		FGeometryScriptSimpleCollision GetSimpleCollisionFromStaticMesh(UStaticMesh StaticMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C47138
		FGeometryScriptSimpleCollision GetSimpleCollisionFromComponent(UPrimitiveComponent Component, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C47058
		FGeometryScriptSphereCovering Conv_SphereArrayToGeometryScriptSphereCovering(TArray& Spheres); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C46F78
		TArray Conv_GeometryScriptSphereCoveringToSphereArray(FGeometryScriptSphereCovering& SphereCovering); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C46E98
		FGeometryScriptSphereCovering ComputeNegativeSpace(FGeometryScriptDynamicMeshBVH& MeshBVH, FComputeNegativeSpaceOptions& NegativeSpaceOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C46DB8
		FGeometryScriptSimpleCollision ComputeNavigableConvexDecomposition(UDynamicMesh TargetMesh, FNavigableConvexDecompositionOptions& Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C46CD8
		void CombineSimpleCollision(FGeometryScriptSimpleCollision& CollisionToUpdate, FGeometryScriptSimpleCollision& AppendCollision, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C46BF8
		void ApproximateConvexHullsWithSimplerCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptConvexHullApproximationOptions& ApproximateOptions, bool& bHasApproximated, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C46B18
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions");
			return ret;
		}

		UDynamicMesh ComputeMeshSweptHull(UDynamicMesh TargetMesh, UDynamicMesh& CopyToMesh, UDynamicMesh& CopyToMeshOut, FTransform ProjectionFrame, FGeometryScriptSweptHullOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C47E58
		UDynamicMesh ComputeMeshConvexHull(UDynamicMesh TargetMesh, UDynamicMesh& CopyToMesh, UDynamicMesh& CopyToMeshOut, FGeometryScriptMeshSelection Selection, FGeometryScriptConvexHullOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C47D78
		UDynamicMesh ComputeMeshConvexDecomposition(UDynamicMesh TargetMesh, UDynamicMesh& CopyToMesh, UDynamicMesh& CopyToMeshOut, FGeometryScriptConvexDecompositionOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C47C98
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions");
			return ret;
		}

		void SetVectorListItem(FGeometryScriptVectorList& VectorList, int32_t Index, FVector NewValue, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4A778
		void SetUVListItem(FGeometryScriptUVList& UVList, int32_t Index, FVector2D NewUV, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4A698
		void SetScalarListItem(FGeometryScriptScalarList& ScalarList, int32_t Index, double NewValue, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4A5B8
		void SetIndexListItem(FGeometryScriptIndexList& IndexList, int32_t Index, int32_t NewValue, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4A4D8
		void SetColorListItem(FGeometryScriptColorList& ColorList, int32_t Index, FLinearColor NewColor, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4A3F8
		int32_t GetVectorListLength(FGeometryScriptVectorList VectorList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4A318
		int32_t GetVectorListLastIndex(FGeometryScriptVectorList VectorList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4A238
		FVector GetVectorListItem(FGeometryScriptVectorList VectorList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C4A158
		int32_t GetUVListLength(FGeometryScriptUVList UVList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4A078
		int32_t GetUVListLastIndex(FGeometryScriptUVList UVList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C49F98
		FVector2D GetUVListItem(FGeometryScriptUVList UVList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C49EB8
		int32_t GetTriangleListLength(FGeometryScriptTriangleList TriangleList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C49DD8
		int32_t GetTriangleListLastTriangle(FGeometryScriptTriangleList TriangleList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C49CF8
		FIntVector GetTriangleListItem(FGeometryScriptTriangleList TriangleList, int32_t Triangle, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C49C18
		int32_t GetScalarListLength(FGeometryScriptScalarList ScalarList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C49B38
		int32_t GetScalarListLastIndex(FGeometryScriptScalarList ScalarList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C49A58
		double GetScalarListItem(FGeometryScriptScalarList ScalarList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C49978
		int32_t GetIndexListLength(FGeometryScriptIndexList IndexList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C49898
		int32_t GetIndexListLastIndex(FGeometryScriptIndexList IndexList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C497B8
		int32_t GetIndexListItem(FGeometryScriptIndexList IndexList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C496D8
		int32_t GetColorListLength(FGeometryScriptColorList ColorList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C495F8
		int32_t GetColorListLastIndex(FGeometryScriptColorList ColorList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C49518
		FLinearColor GetColorListItem(FGeometryScriptColorList ColorList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C49438
		void ExtractColorListChannels(FGeometryScriptColorList ColorList, FGeometryScriptVectorList& VectorList, int32_t XChannelIndex, int32_t YChannelIndex, int32_t ZChannelIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C49358
		void ExtractColorListChannel(FGeometryScriptColorList ColorList, FGeometryScriptScalarList& ScalarList, int32_t ChannelIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C49278
		void DuplicateVectorList(FGeometryScriptVectorList VectorList, FGeometryScriptVectorList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C49198
		void DuplicateUVList(FGeometryScriptUVList UVList, FGeometryScriptUVList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C490B8
		void DuplicateScalarList(FGeometryScriptScalarList ScalarList, FGeometryScriptScalarList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48FD8
		void DuplicateIndexList(FGeometryScriptIndexList IndexList, FGeometryScriptIndexList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48EF8
		void DuplicateColorList(FGeometryScriptColorList ColorList, FGeometryScriptColorList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48E18
		void ConvertVectorListToArray(FGeometryScriptVectorList VectorList, TArray& VectorArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48D38
		void ConvertUVListToArray(FGeometryScriptUVList UVList, TArray& UVArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48C58
		void ConvertTriangleListToArray(FGeometryScriptTriangleList TriangleList, TArray& TriangleArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48B78
		void ConvertScalarListToArray(FGeometryScriptScalarList ScalarList, TArray& ScalarArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48A98
		void ConvertIndexListToArray(FGeometryScriptIndexList IndexList, TArray& IndexArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C489B8
		void ConvertColorListToArray(FGeometryScriptColorList ColorList, TArray& ColorArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C488D8
		void ConvertArrayToVectorList(TArray& VectorArray, FGeometryScriptVectorList& VectorList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C487F8
		void ConvertArrayToUVList(TArray& UVArray, FGeometryScriptUVList& UVList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48718
		void ConvertArrayToTriangleList(TArray& TriangleArray, FGeometryScriptTriangleList& TriangleList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48638
		void ConvertArrayToScalarList(TArray& VectorArray, FGeometryScriptScalarList& ScalarList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48558
		void ConvertArrayToIndexList(TArray& IndexArray, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType IndexType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48478
		void ConvertArrayToColorList(TArray& ColorArray, FGeometryScriptColorList& ColorList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48398
		void ClearVectorList(FGeometryScriptVectorList& VectorList, FVector ClearValue); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C482B8
		void ClearUVList(FGeometryScriptUVList& UVList, FVector2D ClearUV); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C481D8
		void ClearScalarList(FGeometryScriptScalarList& ScalarList, double ClearValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C480F8
		void ClearIndexList(FGeometryScriptIndexList& IndexList, int32_t ClearValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C48018
		void ClearColorList(FGeometryScriptColorList& ColorList, FLinearColor ClearColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C47F38
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions");
			return ret;
		}

		void GetSectionMaterialListFromStaticMesh(UStaticMesh FromStaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, TArray& MaterialList, TArray& MaterialIndex, TArray& MaterialSlotNames, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4B038
		int32_t GetNumStaticMeshLODsOfType(UStaticMesh StaticMeshAsset, EGeometryScriptLODType LODType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4AF58
		void GetMaterialListFromStaticMesh(UStaticMesh FromStaticMeshAsset, TArray& MaterialList, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4AE78
		UDynamicMesh CopyMorphTargetToSkeletalMesh(UDynamicMesh FromMorphTarget, USkeletalMesh ToSkeletalMeshAsset, FName MorphTargetName, FGeometryScriptCopyMorphTargetToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4AD98
		UDynamicMesh CopyMeshToStaticMesh(UDynamicMesh FromDynamicMesh, UStaticMesh ToStaticMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4ACB8
		UDynamicMesh CopyMeshToSkeletalMesh(UDynamicMesh FromDynamicMesh, USkeletalMesh ToSkeletalMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4ABD8
		UDynamicMesh CopyMeshFromStaticMeshV2(UStaticMesh FromStaticMeshAsset, UDynamicMesh ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, bool bUseSectionMaterials, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4AAF8
		UDynamicMesh CopyMeshFromStaticMesh(UStaticMesh FromStaticMeshAsset, UDynamicMesh ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4AA18
		UDynamicMesh CopyMeshFromSkeletalMesh(USkeletalMesh FromSkeletalMeshAsset, UDynamicMesh ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4A938
		bool CheckStaticMeshHasAvailableLOD(UStaticMesh StaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4A858
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions");
			return ret;
		}

		FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4BE38
		FGeometryScriptBakeTypeOptions MakeBakeTypeTexture(UTexture2D SourceTexture, int32_t SourceUVLayer); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4BD58
		FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4BC78
		FGeometryScriptBakeTypeOptions MakeBakeTypePosition(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4BB98
		FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4BAB8
		FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(TArray& MaterialIDSourceTextures, int32_t SourceUVLayer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C4B9D8
		FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4B8F8
		FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4B818
		FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode CurvatureType, EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, EGeometryScriptBakeCurvatureClampMode Clamping); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4B738
		FGeometryScriptBakeTypeOptions MakeBakeTypeConstant(float Value); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4B658
		FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32_t OcclusionRays, float MaxDistance, float SpreadAngle); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4B578
		FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32_t OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4B498
		int32_t ConvertBakeResolutionToInt(EGeometryScriptBakeResolution BakeResolution); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C4B3B8
		UDynamicMesh BakeVertex(UDynamicMesh TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, UDynamicMesh SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, FGeometryScriptBakeOutputType BakeTypes, FGeometryScriptBakeVertexOptions BakeOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4B2D8
		FGeometryScriptRenderCaptureTextures BakeTextureFromRenderCaptures(UDynamicMesh TargetMesh, FTransform TargetLocalToWorld, FGeometryScriptBakeTargetMeshOptions TargetOptions, TArray SourceActors, FGeometryScriptBakeRenderCaptureOptions BakeOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4B1F8
		TArray BakeTexture(UDynamicMesh TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, UDynamicMesh SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, TArray& BakeTypes, FGeometryScriptBakeTextureOptions BakeOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4B118
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions");
			return ret;
		}

		UDynamicMesh SetVertexPosition(UDynamicMesh TargetMesh, int32_t VertexID, FVector NewPosition, bool& bIsValidVertex, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4CC38
		UDynamicMesh SetAllMeshVertexPositions(UDynamicMesh TargetMesh, FGeometryScriptVectorList PositionList, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4CB58
		UDynamicMesh DiscardMeshAttributes(UDynamicMesh TargetMesh, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4CA78
		UDynamicMesh DeleteVerticesFromMesh(UDynamicMesh TargetMesh, FGeometryScriptIndexList VertexList, int32_t& NumDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4C998
		UDynamicMesh DeleteVertexFromMesh(UDynamicMesh TargetMesh, int32_t VertexID, bool& bWasVertexDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4C8B8
		UDynamicMesh DeleteTrianglesFromMesh(UDynamicMesh TargetMesh, FGeometryScriptIndexList TriangleList, int32_t& NumDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4C7D8
		UDynamicMesh DeleteTriangleFromMesh(UDynamicMesh TargetMesh, int32_t TriangleID, bool& bWasTriangleDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4C6F8
		UDynamicMesh DeleteSelectedTrianglesFromMesh(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, int32_t& NumDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4C618
		UDynamicMesh AppendMeshTransformed(UDynamicMesh TargetMesh, UDynamicMesh AppendMesh, TArray& AppendTransforms, FTransform ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4C538
		UDynamicMesh AppendMeshRepeated(UDynamicMesh TargetMesh, UDynamicMesh AppendMesh, FTransform AppendTransform, int32_t RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4C458
		UDynamicMesh AppendMesh(UDynamicMesh TargetMesh, UDynamicMesh AppendMesh, FTransform AppendTransform, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4C378
		UDynamicMesh AppendBuffersToMesh(UDynamicMesh TargetMesh, FGeometryScriptSimpleMeshBuffers& Buffers, FGeometryScriptIndexList& NewTriangleIndicesList, int32_t MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4C298
		UDynamicMesh AddVerticesToMesh(UDynamicMesh TargetMesh, FGeometryScriptVectorList NewPositionsList, FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4C1B8
		UDynamicMesh AddVertexToMesh(UDynamicMesh TargetMesh, FVector NewPosition, int32_t& NewVertexIndex, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4C0D8
		UDynamicMesh AddTriangleToMesh(UDynamicMesh TargetMesh, FIntVector NewTriangle, int32_t& NewTriangleIndex, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4BFF8
		UDynamicMesh AddTrianglesToMesh(UDynamicMesh TargetMesh, FGeometryScriptTriangleList NewTrianglesList, FGeometryScriptIndexList& NewIndicesList, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4BF18
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions");
			return ret;
		}

		UDynamicMesh TransferBoneWeightsFromMesh(UDynamicMesh SourceMesh, UDynamicMesh TargetMesh, FGeometryScriptTransferBoneWeightsOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4DA38
		UDynamicMesh SetVertexBoneWeights(UDynamicMesh TargetMesh, int32_t VertexID, TArray& BoneWeights, bool& bIsValidVertexID, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D958
		UDynamicMesh SetAllVertexBoneWeights(UDynamicMesh TargetMesh, TArray& BoneWeights, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D878
		UDynamicMesh MeshHasBoneWeights(UDynamicMesh TargetMesh, bool& bHasBoneWeights, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C4D798
		UDynamicMesh MeshCreateBoneWeights(UDynamicMesh TargetMesh, bool& bProfileExisted, bool bReplaceExistingProfile, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D6B8
		UDynamicMesh GetVertexBoneWeights(UDynamicMesh TargetMesh, int32_t VertexID, TArray& BoneWeights, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D5D8
		UDynamicMesh GetRootBoneName(UDynamicMesh TargetMesh, FName& BoneName, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D4F8
		UDynamicMesh GetMaxBoneWeightIndex(UDynamicMesh TargetMesh, bool& bHasBoneWeights, int32_t& MaxBoneIndex, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D418
		UDynamicMesh GetLargestVertexBoneWeight(UDynamicMesh TargetMesh, int32_t VertexID, FGeometryScriptBoneWeight& BoneWeight, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D338
		UDynamicMesh GetBoneInfo(UDynamicMesh TargetMesh, FName BoneName, bool& bIsValidBoneName, FGeometryScriptBoneInfo& BoneInfo, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D258
		UDynamicMesh GetBoneIndex(UDynamicMesh TargetMesh, FName BoneName, bool& bIsValidBoneName, int32_t& BoneIndex, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D178
		UDynamicMesh GetBoneChildren(UDynamicMesh TargetMesh, FName BoneName, bool bRecursive, bool& bIsValidBoneName, TArray& ChildrenInfo, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4D098
		UDynamicMesh GetAllBonesInfo(UDynamicMesh TargetMesh, TArray& BonesInfo, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4CFB8
		UDynamicMesh DiscardBonesFromMesh(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4CED8
		UDynamicMesh CopyBonesFromMesh(UDynamicMesh SourceMesh, UDynamicMesh TargetMesh, FGeometryScriptCopyBonesFromMeshOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4CDF8
		UDynamicMesh ComputeSmoothBoneWeights(UDynamicMesh TargetMesh, USkeleton Skeleton, FGeometryScriptSmoothBoneWeightsOptions Options, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4CD18
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions");
			return ret;
		}

		UDynamicMesh ApplyMeshSelfUnion(UDynamicMesh TargetMesh, FGeometryScriptMeshSelfUnionOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4DE98
		UDynamicMesh ApplyMeshPlaneSlice(UDynamicMesh TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneSliceOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4DDB8
		UDynamicMesh ApplyMeshPlaneCut(UDynamicMesh TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneCutOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4DCD8
		UDynamicMesh ApplyMeshMirror(UDynamicMesh TargetMesh, FTransform MirrorFrame, FGeometryScriptMeshMirrorOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4DBF8
		UDynamicMesh ApplyMeshBoolean(UDynamicMesh TargetMesh, FTransform TargetTransform, UDynamicMesh ToolMesh, FTransform ToolTransform, EGeometryScriptBooleanOperation Operation, FGeometryScriptMeshBooleanOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4DB18
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions");
			return ret;
		}

		UDynamicMesh MeasureDistancesBetweenMeshes(UDynamicMesh TargetMesh, UDynamicMesh OtherMesh, FGeometryScriptMeasureMeshDistanceOptions Options, double& MaxDistance, double& MinDistance, double& AverageDistance, double& RootMeanSqrDeviation, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4E138
		UDynamicMesh IsSameMeshAs(UDynamicMesh TargetMesh, UDynamicMesh OtherMesh, FGeometryScriptIsSameMeshOptions Options, bool& bIsSameMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4E058
		UDynamicMesh IsIntersectingMesh(UDynamicMesh TargetMesh, FTransform TargetTransform, UDynamicMesh OtherMesh, FTransform OtherTransform, bool& bIsIntersecting, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4DF78
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions");
			return ret;
		}

		UDynamicMesh SplitMeshByPolygroups(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, TArray& ComponentMeshes, TArray& ComponentPolygroups, UDynamicMeshPool MeshPool, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4E678
		UDynamicMesh SplitMeshByMaterialIDs(UDynamicMesh TargetMesh, TArray& ComponentMeshes, TArray& ComponentMaterialIDs, UDynamicMeshPool MeshPool, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4E598
		UDynamicMesh SplitMeshByComponents(UDynamicMesh TargetMesh, TArray& ComponentMeshes, UDynamicMeshPool MeshPool, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4E4B8
		UDynamicMesh GetSubMeshFromMesh(UDynamicMesh TargetMesh, UDynamicMesh& StoreToSubmesh, FGeometryScriptIndexList TriangleList, UDynamicMesh& StoreToSubmeshOut, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4E3D8
		UDynamicMesh CopyMeshToMesh(UDynamicMesh CopyFromMesh, UDynamicMesh& CopyToMesh, UDynamicMesh& CopyToMeshOut, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4E2F8
		UDynamicMesh CopyMeshSelectionToMesh(UDynamicMesh TargetMesh, UDynamicMesh& StoreToSubmesh, FGeometryScriptMeshSelection Selection, UDynamicMesh& StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4E218
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions");
			return ret;
		}

		UDynamicMesh ApplyTwistWarpToMesh(UDynamicMesh TargetMesh, FGeometryScriptTwistWarpOptions Options, FTransform TwistOrientation, float TwistAngle, float TwistExtent, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4ED78
		UDynamicMesh ApplyPerlinNoiseToMesh(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptPerlinNoiseOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4EC98
		UDynamicMesh ApplyMathWarpToMesh(UDynamicMesh TargetMesh, FTransform WarpOrientation, EGeometryScriptMathWarpType WarpType, FGeometryScriptMathWarpOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4EBB8
		UDynamicMesh ApplyIterativeSmoothingToMesh(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIterativeMeshSmoothingOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4EAD8
		UDynamicMesh ApplyFlareWarpToMesh(UDynamicMesh TargetMesh, FGeometryScriptFlareWarpOptions Options, FTransform FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4E9F8
		UDynamicMesh ApplyDisplaceFromTextureMap(UDynamicMesh TargetMesh, UTexture2D Texture, FGeometryScriptMeshSelection Selection, FGeometryScriptDisplaceFromTextureOptions Options, int32_t UVLayer, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4E918
		UDynamicMesh ApplyDisplaceFromPerVertexVectors(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptVectorList& VectorList, float Magnitude, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4E838
		UDynamicMesh ApplyBendWarpToMesh(UDynamicMesh TargetMesh, FGeometryScriptBendWarpOptions Options, FTransform BendOrientation, float BendAngle, float BendExtent, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C4E758
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshGeodesicFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions");
			return ret;
		}

		UDynamicMesh GetShortestVertexPath(UDynamicMesh TargetMesh, int32_t StartVertexID, int32_t EndVertexID, FGeometryScriptIndexList& VertexIDList, bool& bFoundErrors, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4F018
		UDynamicMesh GetShortestSurfacePath(UDynamicMesh TargetMesh, int32_t StartTriangleID, FVector StartBaryCoords, int32_t EndTriangleID, FVector EndBaryCoords, FGeometryScriptPolyPath& ShortestPath, bool& bFoundErrors, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4EF38
		UDynamicMesh CreateSurfacePath(UDynamicMesh TargetMesh, FVector Direction, int32_t StartTriangleID, FVector StartBaryCoords, float MaxPathLength, FGeometryScriptPolyPath& SurfacePath, bool& bFoundErrors, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C4EE58
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions");
			return ret;
		}

		UDynamicMesh SetTriangleMaterialID(UDynamicMesh TargetMesh, int32_t TriangleID, int32_t MaterialID, bool& bIsValidTriangle, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C6FEF8
		UDynamicMesh SetPolygroupMaterialID(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, int32_t MaterialID, bool& bIsValidPolygroupID, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C6FE18
		UDynamicMesh SetMaterialIDOnTriangles(UDynamicMesh TargetMesh, FGeometryScriptIndexList TriangleIDList, int32_t MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C6FD38
		UDynamicMesh SetMaterialIDForMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, int32_t MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C6FC58
		UDynamicMesh SetAllTriangleMaterialIDs(UDynamicMesh TargetMesh, FGeometryScriptIndexList TriangleMaterialIDList, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C6FB78
		UDynamicMesh RemapToNewMaterialIDsByMaterial(UDynamicMesh TargetMesh, TArray& FromMaterialList, TArray& ToMaterialList, int32_t MissingMaterialID, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C6FA98
		UDynamicMesh RemapMaterialIDs(UDynamicMesh TargetMesh, int32_t FromMaterialID, int32_t ToMaterialID, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C6F9B8
		UDynamicMesh RemapAndCombineMaterials(UDynamicMesh TargetMesh, TArray& TargetMeshMaterials, TArray& RequiredMaterials, TArray& CombinedMaterials, int32_t RemapInvalidMaterialID, bool bCompactDuplicateMaterials, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4F8D8
		UDynamicMesh GetTrianglesByMaterialID(UDynamicMesh TargetMesh, int32_t MaterialID, FGeometryScriptIndexList& TriangleIDList, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C4F7F8
		int32_t GetTriangleMaterialID(UDynamicMesh TargetMesh, int32_t TriangleID, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C4F718
		void GetMaxMaterialID(UDynamicMesh TargetMesh, bool& bHasMaterialIDs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C4F638
		void GetMaterialIDsOfTriangles(); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C4F558
		UDynamicMesh GetAllTriangleMaterialIDs(UDynamicMesh TargetMesh, FGeometryScriptIndexList& MaterialIDList, bool& bHasMaterialIDs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C4F478
		UDynamicMesh EnableMaterialIDs(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4F398
		UDynamicMesh DeleteTrianglesByMaterialID(UDynamicMesh TargetMesh, int32_t MaterialID, int32_t& NumDeleted, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4F2B8
		UDynamicMesh CompactMaterialIDs(UDynamicMesh TargetMesh, TArray SourceMaterialList, TArray& CompactedMaterialList, bool bRemoveDuplicateMaterials, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C4F1D8
		UDynamicMesh ClearMaterialIDs(UDynamicMesh TargetMesh, int32_t ClearValue, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C4F0F8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions");
			return ret;
		}

		UDynamicMesh ApplyMeshShell(UDynamicMesh TargetMesh, FGeometryScriptMeshOffsetOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C707B8
		UDynamicMesh ApplyMeshPolygroupBevel(UDynamicMesh TargetMesh, FGeometryScriptMeshBevelOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C706D8
		UDynamicMesh ApplyMeshOffsetFaces(UDynamicMesh TargetMesh, FGeometryScriptMeshOffsetFacesOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C705F8
		UDynamicMesh ApplyMeshOffset(UDynamicMesh TargetMesh, FGeometryScriptMeshOffsetOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70518
		UDynamicMesh ApplyMeshLinearExtrudeFaces(UDynamicMesh TargetMesh, FGeometryScriptMeshLinearExtrudeOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70438
		UDynamicMesh ApplyMeshInsetOutsetFaces(UDynamicMesh TargetMesh, FGeometryScriptMeshInsetOutsetFacesOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70358
		UDynamicMesh ApplyMeshExtrude_Compatibility_5p0(UDynamicMesh TargetMesh, FGeometryScriptMeshExtrudeOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70278
		UDynamicMesh ApplyMeshDuplicateFaces(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewTriangles, FGeometryScriptMeshEditPolygroupOptions GroupOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C70198
		UDynamicMesh ApplyMeshDisconnectFaces(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, bool bAllowBowtiesInOutput, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C700B8
		UDynamicMesh ApplyMeshBevelSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, EGeometryScriptMeshBevelSelectionMode BevelMode, FGeometryScriptMeshBevelSelectionOptions BevelOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C6FFD8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions");
			return ret;
		}

		UDynamicMesh UpdateVertexNormal(UDynamicMesh TargetMesh, int32_t VertexID, bool bUpdateNormal, FVector NewNormal, bool bUpdateTangents, FVector NewTangentX, FVector NewTangentY, bool& bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C715B8
		UDynamicMesh SetPerVertexNormals(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C714D8
		UDynamicMesh SetPerFaceNormals(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C713F8
		UDynamicMesh SetMeshTriangleNormals(UDynamicMesh TargetMesh, int32_t TriangleID, FGeometryScriptTriangle Normals, bool& bIsValidTriangle, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C71318
		UDynamicMesh SetMeshPerVertexTangents(UDynamicMesh TargetMesh, FGeometryScriptVectorList TangentXList, FGeometryScriptVectorList TangentYList, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71238
		UDynamicMesh SetMeshPerVertexNormals(UDynamicMesh TargetMesh, FGeometryScriptVectorList VertexNormalList, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71158
		UDynamicMesh RecomputeNormalsForMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71078
		UDynamicMesh RecomputeNormals(UDynamicMesh TargetMesh, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70F98
		UDynamicMesh GetMeshPerVertexTangents(UDynamicMesh TargetMesh, FGeometryScriptVectorList& TangentXList, FGeometryScriptVectorList& TangentYList, bool& bIsValidTangentSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C70EB8
		UDynamicMesh GetMeshPerVertexNormals(UDynamicMesh TargetMesh, FGeometryScriptVectorList& NormalList, bool& bIsValidNormalSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C70DD8
		UDynamicMesh GetMeshHasTangents(UDynamicMesh TargetMesh, bool& bHasTangents, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C70CF8
		UDynamicMesh FlipNormals(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70C18
		UDynamicMesh DiscardTangents(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70B38
		UDynamicMesh ComputeTangents(UDynamicMesh TargetMesh, FGeometryScriptTangentsOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70A58
		UDynamicMesh ComputeSplitNormals(UDynamicMesh TargetMesh, FGeometryScriptSplitNormalsOptions SplitOptions, FGeometryScriptCalculateNormalsOptions CalculateOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70978
		UDynamicMesh AutoRepairNormals(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C70898
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions");
			return ret;
		}

		UDynamicMesh SetPolygroupForMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptMeshSelection Selection, int32_t& SetPolygroupIDOut, int32_t SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C721F8
		UDynamicMesh SetNumExtendedPolygroupLayers(UDynamicMesh TargetMesh, int32_t NumLayers, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C72118
		UDynamicMesh GetTrianglesInPolygroup(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, FGeometryScriptIndexList& TriangleIDsOut); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C72038
		int32_t GetTrianglePolygroupID(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t TriangleID, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C71F58
		UDynamicMesh GetPolygroupIDsInMesh(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C71E78
		UDynamicMesh GetAllTrianglePolygroupIDs(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C71D98
		UDynamicMesh EnablePolygroups(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71CB8
		UDynamicMesh DeleteTrianglesInPolygroup(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, int32_t& NumDeleted, bool bDeferChangeNotifications, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C71BD8
		UDynamicMesh CopyPolygroupsLayer(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer FromGroupLayer, FGeometryScriptGroupLayer ToGroupLayer, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71AF8
		UDynamicMesh ConvertUVIslandsToPolygroups(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t UVLayer, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71A18
		UDynamicMesh ConvertComponentsToPolygroups(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71938
		UDynamicMesh ComputePolygroupsFromPolygonDetection(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32_t MaxSearchRounds, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71858
		UDynamicMesh ComputePolygroupsFromAngleThreshold(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, float CreaseAngle, int32_t MinGroupSize, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71778
		UDynamicMesh ClearPolygroups(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t ClearValue, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C71698
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPoolFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshPoolFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPoolFunctions");
			return ret;
		}

		UDynamicMeshPool GetGlobalMeshPool(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C723B8
		void DiscardGlobalMeshPool(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C722D8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions");
			return ret;
		}

		TArray CreateConstrainedEdgesLoop(int32_t NumVertices, int32_t Start); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C73ED8
		TArray CreateConstrainedEdgesChain(int32_t NumVertices, int32_t Start); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C73DF8
		UDynamicMesh AppendVoronoiDiagram2D(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& VoronoiSites, FGeometryScriptVoronoiOptions VoronoiOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C73D18
		UDynamicMesh AppendTriangulatedPolygon3D(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& PolygonVertices3D, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C73C38
		UDynamicMesh AppendTriangulatedPolygon(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& PolygonVertices, bool bAllowSelfIntersections, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C73B58
		UDynamicMesh AppendTorus(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptRevolveOptions RevolveOptions, float MajorRadius, float MinorRadius, int32_t MajorSteps, int32_t MinorSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C73A78
		UDynamicMesh AppendSweepPolyline(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& PolylineVertices, TArray& SweepPath, TArray& PolylineTexParamU, TArray& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C73998
		UDynamicMesh AppendSweepPolygon(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& PolygonVertices, TArray& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C738B8
		UDynamicMesh AppendSpiralRevolvePolygon(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32_t Steps, float RisePerRevolution, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C737D8
		UDynamicMesh AppendSphereLatLong(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t StepsPhi, int32_t StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C736F8
		UDynamicMesh AppendSphereCovering(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptSphereCovering& SphereCovering, int32_t StepsX, int32_t StepsY, int32_t StepsZ, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C73618
		UDynamicMesh AppendSphereBox(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C73538
		UDynamicMesh AppendSimpleSweptPolygon(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& PolygonVertices, TArray& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C73458
		UDynamicMesh AppendSimpleExtrudePolygon(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& PolygonVertices, float Height, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C73378
		UDynamicMesh AppendSimpleCollisionShapes(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptSimpleCollisionTriangulationOptions TriangulationOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C73298
		UDynamicMesh AppendRoundRectangleXY(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C731B8
		UDynamicMesh AppendRoundRectangle_Compatibility_5(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C730D8
		UDynamicMesh AppendRevolvePolygon(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32_t Steps, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C72FF8
		UDynamicMesh AppendRevolvePath(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& PathVertices, FGeometryScriptRevolveOptions RevolveOptions, int32_t Steps, bool bCapped, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C72F18
		UDynamicMesh AppendRectangleXY(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C72E38
		UDynamicMesh AppendRectangle_Compatibility_5(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C72D58
		UDynamicMesh AppendPolygonListTriangulation(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonsTriangulationOptions TriangulationOptions, bool& bTriangulationError, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C72C78
		UDynamicMesh AppendLinearStairs(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float StepDepth, int32_t NumSteps, bool bFloating, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C72B98
		UDynamicMesh AppendDisc(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t AngleSteps, int32_t SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C72AB8
		UDynamicMesh AppendDelaunayTriangulation2D(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray& VertexPositions, TArray& ConstrainedEdges, FGeometryScriptConstrainedDelaunayTriangulationOptions TriangulationOptions, TArray& PositionsToVertexIDs, bool& bHasDuplicateVertices, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C729D8
		UDynamicMesh AppendCylinder(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C728F8
		UDynamicMesh AppendCurvedStairs(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32_t NumSteps, bool bFloating, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C72818
		UDynamicMesh AppendCone(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float BaseRadius, float TopRadius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C72738
		UDynamicMesh AppendCapsule(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float LineLength, int32_t HemisphereSteps, int32_t CircleSteps, int32_t SegmentSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C72658
		UDynamicMesh AppendBox(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float DimensionZ, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C72578
		UDynamicMesh AppendBoundingBox(UDynamicMesh TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FBox Box, int32_t StepsX, int32_t StepsY, int32_t StepsZ, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C72498
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions");
			return ret;
		}

		bool IsValidVertexID(UDynamicMesh TargetMesh, int32_t VertexID); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C767F8
		bool IsValidTriangleID(UDynamicMesh TargetMesh, int32_t TriangleID); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C76718
		FVector GetVertexPosition(UDynamicMesh TargetMesh, int32_t VertexID, bool& bIsValidVertex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C76638
		int32_t GetVertexCount(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C76558
		UDynamicMesh GetVertexConnectedVertices(UDynamicMesh TargetMesh, int32_t VertexID, TArray& Vertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C76478
		UDynamicMesh GetVertexConnectedTriangles(UDynamicMesh TargetMesh, int32_t VertexID, TArray& Triangles); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C76398
		FBox2D GetUVSetBoundingBox(UDynamicMesh TargetMesh, int32_t UvSetIndex, bool& bIsValidUVSet, bool& bUVSetIsEmpty); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C762B8
		UDynamicMesh GetTriangleVertexColors(UDynamicMesh TargetMesh, int32_t TriangleID, FLinearColor& Color1, FLinearColor& Color2, FLinearColor& Color3, bool& bTriHasValidVertexColors); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C761D8
		void GetTriangleUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FVector2D& UV1, FVector2D& UV2, FVector2D& UV3, bool& bHaveValidUVs); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C760F8
		void GetTrianglePositions(UDynamicMesh TargetMesh, int32_t TriangleID, bool& bIsValidTriangle, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C76018
		UDynamicMesh GetTriangleNormalTangents(UDynamicMesh TargetMesh, int32_t TriangleID, bool& bTriHasValidElements, FGeometryScriptTriangle& Normals, FGeometryScriptTriangle& Tangents, FGeometryScriptTriangle& BiTangents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C75F38
		UDynamicMesh GetTriangleNormals(UDynamicMesh TargetMesh, int32_t TriangleID, FVector& Normal1, FVector& Normal2, FVector& Normal3, bool& bTriHasValidNormals); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C75E58
		FIntVector GetTriangleIndices(UDynamicMesh TargetMesh, int32_t TriangleID, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C75D78
		FVector GetTriangleFaceNormal(UDynamicMesh TargetMesh, int32_t TriangleID, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C75C98
		int32_t GetNumVertexIDs(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C75BB8
		int32_t GetNumUVSets(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C75AD8
		int32_t GetNumTriangleIDs(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C759F8
		int32_t GetNumOpenBorderLoops(UDynamicMesh TargetMesh, bool& bAmbiguousTopologyFound); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C75918
		int32_t GetNumOpenBorderEdges(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C75838
		int32_t GetNumExtendedPolygroupLayers(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C75758
		int32_t GetNumConnectedComponents(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C75678
		void GetMeshVolumeAreaCenter(UDynamicMesh TargetMesh, float& SurfaceArea, float& Volume, FVector& CenterOfMass); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C75598
		void GetMeshVolumeArea(UDynamicMesh TargetMesh, float& SurfaceArea, float& Volume); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C754B8
		FString GetMeshInfoString(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C753D8
		bool GetMeshHasAttributeSet(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C752F8
		FBox GetMeshBoundingBox(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C75218
		bool GetIsDenseMesh(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C75138
		bool GetIsClosedMesh(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C75058
		UDynamicMesh GetInterpolatedTriangleVertexColor(UDynamicMesh TargetMesh, int32_t TriangleID, FVector BarycentricCoords, FLinearColor DefaultColor, bool& bTriHasValidVertexColors, FLinearColor& InterpolatedColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C74F78
		UDynamicMesh GetInterpolatedTriangleUV(UDynamicMesh TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidUVs, FVector2D& InterpolatedUV); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C74E98
		UDynamicMesh GetInterpolatedTrianglePosition(UDynamicMesh TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bIsValidTriangle, FVector& InterpolatedPosition); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C74DB8
		UDynamicMesh GetInterpolatedTriangleNormalTangents(UDynamicMesh TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidElements, FVector& InterpolatedNormal, FVector& InterpolatedTangent, FVector& InterpolatedBiTangent); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C74CD8
		UDynamicMesh GetInterpolatedTriangleNormal(UDynamicMesh TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidNormals, FVector& InterpolatedNormal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C74BF8
		bool GetHasVertexIDGaps(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C74B18
		bool GetHasVertexColors(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C74A38
		bool GetHasTriangleNormals(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C74958
		bool GetHasTriangleIDGaps(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C74878
		bool GetHasPolygroups(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C74798
		bool GetHasMaterialIDs(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C746B8
		UDynamicMesh GetAllVertexPositionsAtEdges(UDynamicMesh TargetMesh, FGeometryScriptIndexList& EdgeIDs, FGeometryScriptVectorList& Start, FGeometryScriptVectorList& End); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C745D8
		UDynamicMesh GetAllVertexPositions(UDynamicMesh TargetMesh, FGeometryScriptVectorList& PositionList, bool bSkipGaps, bool& bHasVertexIDGaps); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C744F8
		UDynamicMesh GetAllVertexIDs(UDynamicMesh TargetMesh, FGeometryScriptIndexList& VertexIDList, bool& bHasVertexIDGaps); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C74418
		void GetAllUVSeamEdges(UDynamicMesh TargetMesh); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C74338
		UDynamicMesh GetAllTriangleIndices(UDynamicMesh TargetMesh, FGeometryScriptTriangleList& TriangleList, bool bSkipGaps, bool& bHasTriangleIDGaps); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C74258
		UDynamicMesh GetAllTriangleIDs(UDynamicMesh TargetMesh, FGeometryScriptIndexList& TriangleIDList, bool& bHasTriangleIDGaps); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C74178
		UDynamicMesh GetAllSplitUVsAtVertex(UDynamicMesh TargetMesh, int32_t UvSetIndex, int32_t VertexID, TArray& ElementIDs, TArray& ElementUVs, bool& bHaveValidUVs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C74098
		UDynamicMesh ComputeTriangleBarycentricCoords(UDynamicMesh TargetMesh, int32_t TriangleID, bool& bIsValidTriangle, FVector Point, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3, FVector& BarycentricCoords); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C73FB8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions");
			return ret;
		}

		UDynamicMesh ApplyUniformRemesh(UDynamicMesh TargetMesh, FGeometryScriptRemeshOptions RemeshOptions, FGeometryScriptUniformRemeshOptions UniformOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C768D8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions");
			return ret;
		}

		UDynamicMesh WeldMeshEdges(UDynamicMesh TargetMesh, FGeometryScriptWeldEdgesOptions WeldOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C77198
		UDynamicMesh SplitMeshBowties(UDynamicMesh TargetMesh, bool bMeshBowties, bool bAttributeBowties, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C770B8
		UDynamicMesh SnapMeshOpenBoundaries(UDynamicMesh TargetMesh, FGeometryScriptSnapBoundariesOptions SnapOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C76FD8
		UDynamicMesh ResolveMeshTJunctions(UDynamicMesh TargetMesh, FGeometryScriptResolveTJunctionOptions ResolveOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C76EF8
		UDynamicMesh RepairMeshDegenerateGeometry(UDynamicMesh TargetMesh, FGeometryScriptDegenerateTriangleOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C76E18
		UDynamicMesh RemoveUnusedVertices(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C76D38
		UDynamicMesh RemoveSmallComponents(UDynamicMesh TargetMesh, FGeometryScriptRemoveSmallComponentOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C76C58
		UDynamicMesh RemoveHiddenTriangles(UDynamicMesh TargetMesh, FGeometryScriptRemoveHiddenTrianglesOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C76B78
		UDynamicMesh FillAllMeshHoles(UDynamicMesh TargetMesh, FGeometryScriptFillHolesOptions FillOptions, int32_t& NumFilledHoles, int32_t& NumFailedHoleFills, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C76A98
		UDynamicMesh CompactMesh(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C769B8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions");
			return ret;
		}

		UDynamicMesh ComputeVertexWeightedPointSampling(UDynamicMesh TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, FGeometryScriptScalarList VertexWeights, TArray& Samples, TArray& SampleRadii, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C775F8
		void ComputeRenderCapturePointSampling(TArray& Samples, TArray& Actors, TArray& Cameras, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77518
		void ComputeRenderCaptureCamerasForBox(TArray& Cameras, FBox Box, FGeometryScriptRenderCaptureCamerasForBoxOptions& Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C77438
		UDynamicMesh ComputePointSampling(UDynamicMesh TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, TArray& Samples, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77358
		UDynamicMesh ComputeNonUniformPointSampling(UDynamicMesh TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, TArray& Samples, TArray& SampleRadii, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77278
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions");
			return ret;
		}

		UDynamicMesh SelectMeshElementsWithPlane(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection& Selection, FVector PlaneOrigin, FVector PlaneNormal, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C78778
		UDynamicMesh SelectMeshElementsInSphere(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection& Selection, FVector SphereOrigin, double SphereRadius, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C78698
		UDynamicMesh SelectMeshElementsInsideMesh(UDynamicMesh TargetMesh, UDynamicMesh SelectionMesh, FGeometryScriptMeshSelection& Selection, FTransform SelectionMeshTransform, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C785B8
		UDynamicMesh SelectMeshElementsInBox(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection& Selection, FBox Box, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C784D8
		UDynamicMesh SelectMeshElementsByPolygroup(UDynamicMesh TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C783F8
		UDynamicMesh SelectMeshElementsByNormalAngle(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection& Selection, FVector Normal, double MaxAngleDeg, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C78318
		UDynamicMesh SelectMeshElementsByMaterialID(UDynamicMesh TargetMesh, int32_t MaterialID, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C78238
		UDynamicMesh InvertMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C78158
		void GetMeshSelectionInfo(FGeometryScriptMeshSelection Selection, EGeometryScriptMeshSelectionType& SelectionType, int32_t& NumSelected); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C78078
		UDynamicMesh ExpandMeshSelectionToConnected(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, EGeometryScriptTopologyConnectionType ConnectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77F98
		UDynamicMesh ExpandContractMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, int32_t Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77EB8
		void DebugPrintMeshSelection(FGeometryScriptMeshSelection Selection, bool bDisable); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C77DD8
		UDynamicMesh CreateSelectAllMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77CF8
		UDynamicMesh ConvertMeshSelectionToIndexList(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType& ResultListType, EGeometryScriptIndexType ConvertToType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77C18
		UDynamicMesh ConvertMeshSelectionToIndexArray(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, TArray& IndexArray, EGeometryScriptMeshSelectionType& SelectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77B38
		UDynamicMesh ConvertMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection FromSelection, FGeometryScriptMeshSelection& ToSelection, EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77A58
		UDynamicMesh ConvertIndexSetToMeshSelection(UDynamicMesh TargetMesh, TSet& IndexSet, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77978
		UDynamicMesh ConvertIndexListToMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptIndexList IndexList, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C77898
		UDynamicMesh ConvertIndexArrayToMeshSelection(UDynamicMesh TargetMesh, TArray& IndexArray, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C777B8
		void CombineMeshSelections(FGeometryScriptMeshSelection SelectionA, FGeometryScriptMeshSelection SelectionB, FGeometryScriptMeshSelection& ResultSelection, EGeometryScriptCombineSelectionMode CombineMode); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C776D8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions");
			return ret;
		}

		UDynamicMesh GetMeshSelectionBoundingBox(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FBox& SelectionBounds, bool& bIsEmpty, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C78938
		UDynamicMesh GetMeshSelectionBoundaryLoops(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, TArray& IndexLoops, TArray& PathLoops, int32_t& NumLoops, bool& bFoundErrors, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C78858
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions");
			return ret;
		}

		UDynamicMesh ApplySimplifyToVertexCount(UDynamicMesh TargetMesh, int32_t vertexcount, FGeometryScriptSimplifyMeshOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C78D98
		UDynamicMesh ApplySimplifyToTriangleCount(UDynamicMesh TargetMesh, int32_t TriangleCount, FGeometryScriptSimplifyMeshOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C78CB8
		UDynamicMesh ApplySimplifyToTolerance(UDynamicMesh TargetMesh, float Tolerance, FGeometryScriptSimplifyMeshOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C78BD8
		UDynamicMesh ApplySimplifyToPolygroupTopology(UDynamicMesh TargetMesh, FGeometryScriptPolygroupSimplifyOptions Options, FGeometryScriptGroupLayer GroupLayer, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C78AF8
		UDynamicMesh ApplySimplifyToPlanar(UDynamicMesh TargetMesh, FGeometryScriptPlanarSimplifyOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C78A18
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial");
			return ret;
		}

		UDynamicMesh SelectMeshElementsInBoxWithBVH(UDynamicMesh TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FBox QueryBox, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType, int32_t MinNumTrianglePoints, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C79498
		void ResetBVH(FGeometryScriptDynamicMeshBVH& ResetBVH); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C793B8
		UDynamicMesh RebuildBVHForMesh(UDynamicMesh TargetMesh, FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C792D8
		UDynamicMesh IsPointInsideMesh(UDynamicMesh TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, bool& bIsInside, EGeometryScriptContainmentOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C791F8
		UDynamicMesh IsBVHValidForMesh(UDynamicMesh TargetMesh, FGeometryScriptDynamicMeshBVH& TestBVH, bool& bIsValid, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C79118
		UDynamicMesh FindNearestRayIntersectionWithMesh(UDynamicMesh TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector RayOrigin, FVector RayDirection, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptRayHitResult& HitResult, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C79038
		UDynamicMesh FindNearestPointOnMesh(UDynamicMesh TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptTrianglePoint& NearestResult, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C78F58
		UDynamicMesh BuildBVHForMesh(UDynamicMesh TargetMesh, FGeometryScriptDynamicMeshBVH& OutputBVH, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C78E78
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions");
			return ret;
		}

		UDynamicMesh ApplyUniformTessellation(UDynamicMesh TargetMesh, int32_t TessellationLevel, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C79738
		UDynamicMesh ApplySelectiveTessellation(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptSelectiveTessellateOptions Options, int32_t TessellationLevel, ESelectiveTessellatePatternType PatternType, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C79658
		UDynamicMesh ApplyPNTessellation(UDynamicMesh TargetMesh, FGeometryScriptPNTessellateOptions Options, int32_t TessellationLevel, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C79578
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions");
			return ret;
		}

		UDynamicMesh TranslatePivotToLocation(UDynamicMesh TargetMesh, FVector PivotLocation, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C79F18
		UDynamicMesh TranslateMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FVector Translation, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C79E38
		UDynamicMesh TranslateMesh(UDynamicMesh TargetMesh, FVector Translation, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C79D58
		UDynamicMesh TransformMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FTransform Transform, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C79C78
		UDynamicMesh TransformMesh(UDynamicMesh TargetMesh, FTransform Transform, bool bFixOrientationForNegativeScale, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C79B98
		UDynamicMesh ScaleMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FVector Scale, FVector ScaleOrigin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C79AB8
		UDynamicMesh ScaleMesh(UDynamicMesh TargetMesh, FVector Scale, FVector ScaleOrigin, bool bFixOrientationForNegativeScale, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C799D8
		UDynamicMesh RotateMeshSelection(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FRotator Rotation, FVector RotationOrigin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C798F8
		UDynamicMesh RotateMesh(UDynamicMesh TargetMesh, FRotator Rotation, FVector RotationOrigin, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C79818
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions");
			return ret;
		}

		UDynamicMesh TranslateMeshUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, FVector2D Translation, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7B338
		UDynamicMesh SetNumUVSets(UDynamicMesh TargetMesh, int32_t NumUVSets, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7B258
		UDynamicMesh SetMeshUVsFromPlanarProjection(UDynamicMesh TargetMesh, int32_t UvSetIndex, FTransform PlaneTransform, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7B178
		UDynamicMesh SetMeshUVsFromCylinderProjection(UDynamicMesh TargetMesh, int32_t UvSetIndex, FTransform CylinderTransform, FGeometryScriptMeshSelection Selection, float SplitAngle, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7B098
		UDynamicMesh SetMeshUVsFromBoxProjection(UDynamicMesh TargetMesh, int32_t UvSetIndex, FTransform BoxTransform, FGeometryScriptMeshSelection Selection, int32_t MinIslandTriCount, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7AFB8
		UDynamicMesh SetMeshUVElementPosition(UDynamicMesh TargetMesh, int32_t UvSetIndex, int32_t ElementID, FVector2D NewUVPosition, bool& bIsValidElementID, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7AED8
		UDynamicMesh SetMeshTriangleUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FGeometryScriptUVTriangle UVs, bool& bIsValidTriangle, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7ADF8
		UDynamicMesh SetMeshTriangleUVElementIDs(UDynamicMesh TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FIntVector TriangleUVElements, bool& bIsValidTriangle, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7AD18
		UDynamicMesh ScaleMeshUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, FVector2D Scale, FVector2D ScaleOrigin, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7AC38
		UDynamicMesh RotateMeshUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, float RotationAngle, FVector2D RotationOrigin, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7AB58
		UDynamicMesh RepackMeshUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, FGeometryScriptRepackUVsOptions RepackOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7AA78
		void RecomputeMeshUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, FGeometryScriptRecomputeUVsOptions Options); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7A998
		UDynamicMesh GetMeshUVSizeInfo(UDynamicMesh TargetMesh, int32_t UvSetIndex, FGeometryScriptMeshSelection Selection, double& MeshArea, double& UVArea, FBox& MeshBounds, FBox2D& UVBounds, bool& bIsValidUVSet, bool& bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7A8B8
		UDynamicMesh GetMeshUVElementPosition(UDynamicMesh TargetMesh, int32_t UvSetIndex, int32_t ElementID, FVector2D& UVPosition, bool& bIsValidElementID); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7A7D8
		UDynamicMesh GetMeshTriangleUVElementIDs(UDynamicMesh TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FIntVector& TriangleUVElements, bool& bHaveValidUVs); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7A6F8
		UDynamicMesh GetMeshPerVertexUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, FGeometryScriptUVList& UVList, bool& bIsValidUVSet, bool& bHasVertexIDGaps, bool& bHasSplitUVs, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7A618
		UDynamicMesh CopyUVSet(UDynamicMesh TargetMesh, int32_t FromUVSet, int32_t ToUVSet, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7A538
		UDynamicMesh CopyMeshUVLayerToMesh(UDynamicMesh CopyFromMesh, int32_t UvSetIndex, UDynamicMesh& CopyToUVMesh, UDynamicMesh& CopyToUVMeshOut, bool& bInvalidTopology, bool& bIsValidUVSet, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7A458
		UDynamicMesh CopyMeshToMeshUVLayer(UDynamicMesh CopyFromUVMesh, int32_t ToUVSetIndex, UDynamicMesh& CopyToMesh, UDynamicMesh& CopyToMeshOut, bool& bFoundTopologyErrors, bool& bIsValidUVSet, bool bOnlyUVPositions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7A378
		UDynamicMesh ComputeMeshLocalUVParam(UDynamicMesh TargetMesh, FVector CenterPoint, int32_t CenterPointTriangleID, TArray& VertexIDs, TArray& VertexUVs, double Radius, bool bUseInterpolatedNormal, FVector TangentYDirection, double UVRotationDeg, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7A298
		UDynamicMesh AutoGenerateXAtlasMeshUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, FGeometryScriptXAtlasOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7A1B8
		UDynamicMesh AutoGeneratePatchBuilderMeshUVs(UDynamicMesh TargetMesh, int32_t UvSetIndex, FGeometryScriptPatchBuilderOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7A0D8
		UDynamicMesh AddUVElementToMesh(UDynamicMesh TargetMesh, int32_t UvSetIndex, FVector2D NewUVPosition, int32_t& NewUVElementID, bool& bIsValidUVSet, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C79FF8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions");
			return ret;
		}

		UDynamicMesh SetMeshSelectionVertexColor(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bCreateColorSeam, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7B958
		UDynamicMesh SetMeshPerVertexColors(UDynamicMesh TargetMesh, FGeometryScriptColorList VertexColorList, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7B878
		UDynamicMesh SetMeshConstantVertexColor(UDynamicMesh TargetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7B798
		UDynamicMesh GetMeshPerVertexColors(UDynamicMesh TargetMesh, FGeometryScriptColorList& ColorList, bool& bIsValidColorSet, bool& bHasVertexIDGaps, bool bBlendSplitVertexValues); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7B6B8
		UDynamicMesh ConvertMeshVertexColorsSRGBToLinear(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7B5D8
		UDynamicMesh ConvertMeshVertexColorsLinearToSRGB(UDynamicMesh TargetMesh, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7B4F8
		UDynamicMesh BlurMeshVertexColors(UDynamicMesh TargetMesh, FGeometryScriptMeshSelection Selection, int32_t NumIterations, double Strength, EGeometryScriptBlurColorMode BlurMode, FGeometryScriptBlurMeshVertexColorsOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7B418
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions");
			return ret;
		}

		UDynamicMesh ApplyMeshSolidify(UDynamicMesh TargetMesh, FGeometryScriptSolidifyOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7BB18
		UDynamicMesh ApplyMeshMorphology(UDynamicMesh TargetMesh, FGeometryScriptMorphologyOptions Options, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7BA38
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_PointSetSamplingFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions");
			return ret;
		}

		void UnflattenPoints(TArray& PointsIn2D, TArray& PointsIn3D, FGeometryScriptPointFlatteningOptions& Options, double Height); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7C2F8
		void TransformsToPoints(TArray& Transforms, TArray& Points); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7C218
		void OffsetTransforms(TArray& Transforms, double Offset, FVector Direction, EGeometryScriptCoordinateSpace Space); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7C138
		FBox MakeBoundingBoxFromPoints(TArray& Points, double ExpandBy); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7C058
		void KMeansClusterToIDs(TArray& Points, FGeometryScriptPointClusteringOptions& Options, TArray& PointClusterIndices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7BF78
		void KMeansClusterToArrays(TArray& Points, FGeometryScriptPointClusteringOptions& Options, TArray& ClusterIDToLists); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7BE98
		void GetPointsFromIndexList(TArray& AllPoints, FGeometryScriptIndexList& Indices, TArray& SelectedPoints); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7BDB8
		void FlattenPoints(TArray& PointsIn3D, TArray& PointsIn2D, FGeometryScriptPointFlatteningOptions& Options); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7BCD8
		void DownsamplePoints(TArray& Points, FGeometryScriptPointPriorityOptions& Options, FGeometryScriptIndexList& DownsampledIndices, int32_t KeepNumPoints, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7BBF8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_SimplePolygonFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions");
			return ret;
		}

		void SetPolygonVertex(FGeometryScriptSimplePolygon& Polygon, int32_t VertexIndex, FVector2D Position, bool& bPolygonIsEmpty); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7CE58
		int32_t GetPolygonVertexCount(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7CD78
		FVector2D GetPolygonVertex(FGeometryScriptSimplePolygon Polygon, int32_t VertexIndex, bool& bPolygonIsEmpty); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7CC98
		FVector2D GetPolygonTangent(FGeometryScriptSimplePolygon Polygon, int32_t VertexIndex, bool& bPolygonIsEmpty); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7CBB8
		FBox2D GetPolygonBounds(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7CAD8
		double GetPolygonArea(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7C9F8
		double GetPolygonArcLength(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7C918
		void ConvertSplineToPolygon(USplineComponent Spline, FGeometryScriptSimplePolygon& Polygon, FGeometryScriptSplineSamplingOptions SamplingOptions, EGeometryScriptAxis DropAxis); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7C838
		TArray Conv_GeometryScriptSimplePolygonToArrayOfVector2D(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C7C758
		TArray Conv_GeometryScriptSimplePolygonToArray(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C7C678
		FGeometryScriptSimplePolygon Conv_ArrayToGeometryScriptSimplePolygon(TArray& PathVertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C7C598
		FGeometryScriptSimplePolygon Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(TArray& PathVertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C7C4B8
		int32_t AddPolygonVertex(FGeometryScriptSimplePolygon& Polygon, FVector2D Position); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7C3D8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_PolygonListFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions");
			return ret;
		}

		FGeometryScriptGeneralPolygonList PolygonsUnion(FGeometryScriptGeneralPolygonList PolygonList, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7E358
		FGeometryScriptGeneralPolygonList PolygonsOffsets(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double FirstOffset, double SecondOffset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7E278
		FGeometryScriptGeneralPolygonList PolygonsOffset(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7E198
		FGeometryScriptGeneralPolygonList PolygonsMorphologyOpen(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7E0B8
		FGeometryScriptGeneralPolygonList PolygonsMorphologyClose(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7DFD8
		FGeometryScriptGeneralPolygonList PolygonsIntersection(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToIntersect); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7DEF8
		FGeometryScriptGeneralPolygonList PolygonsExclusiveOr(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToExclusiveOr); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7DE18
		FGeometryScriptGeneralPolygonList PolygonsDifference(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToSubtract); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7DD38
		FGeometryScriptSimplePolygon GetSimplePolygon(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7DC58
		void GetPolygonVertices(FGeometryScriptGeneralPolygonList PolygonList, TArray& OutVertices, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7DB78
		int32_t GetPolygonVertexCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7DA98
		FVector2D GetPolygonVertex(FGeometryScriptGeneralPolygonList PolygonList, bool& bIsValidVertex, int32_t VertexIndex, int32_t PolygonIndex, int32_t HoleIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7D9B8
		FBox2D GetPolygonListBounds(FGeometryScriptGeneralPolygonList PolygonList); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7D8D8
		double GetPolygonListArea(FGeometryScriptGeneralPolygonList PolygonList); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7D7F8
		int32_t GetPolygonHoleCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7D718
		int32_t GetPolygonCount(FGeometryScriptGeneralPolygonList PolygonList); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7D638
		FBox2D GetPolygonBounds(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7D558
		double GetPolygonArea(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7D478
		FGeometryScriptGeneralPolygonList CreatePolygonsFromPathOffset(TArray Path, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7D398
		FGeometryScriptGeneralPolygonList CreatePolygonsFromOpenPolyPathsOffset(TArray PolyPaths, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7D2B8
		FGeometryScriptGeneralPolygonList CreatePolygonListFromSinglePolygon(FGeometryScriptSimplePolygon OuterPolygon, TArray& HolePolygons, bool bFixHoleOrientations); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7D1D8
		FGeometryScriptGeneralPolygonList CreatePolygonListFromSimplePolygons(TArray& OuterPolygons); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7D0F8
		void AppendPolygonList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptGeneralPolygonList PolygonsToAppend); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7D018
		int32_t AddPolygonToList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptSimplePolygon OuterPolygon, TArray& HolePolygons, bool bFixHoleOrientations); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7CF38
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions");
			return ret;
		}

		bool SampleSplineToTransforms(USplineComponent Spline, TArray& Frames, TArray& FrameTimes, FGeometryScriptSplineSamplingOptions SamplingOptions, FTransform RelativeTransform, bool bIncludeScale); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7F5B8
		FVector GetPolyPathVertex(FGeometryScriptPolyPath PolyPath, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C7F4D8
		FVector GetPolyPathTangent(FGeometryScriptPolyPath PolyPath, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C7F3F8
		int32_t GetPolyPathNumVertices(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C7F318
		int32_t GetPolyPathLastIndex(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C7F238
		double GetPolyPathArcLength(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7F158
		int32_t GetNearestVertexIndex(FGeometryScriptPolyPath PolyPath, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7F078
		FGeometryScriptPolyPath FlattenTo2DOnAxis(FGeometryScriptPolyPath PolyPath, EGeometryScriptAxis DropAxis); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7EF98
		FGeometryScriptPolyPath CreateCirclePath3D(FTransform Transform, float Radius, int32_t NumPoints); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7EEB8
		FGeometryScriptPolyPath CreateCirclePath2D(FVector2D Center, float Radius, int32_t NumPoints); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7EDD8
		FGeometryScriptPolyPath CreateArcPath3D(FTransform Transform, float Radius, int32_t NumPoints, float StartAngle, float EndAngle); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7ECF8
		FGeometryScriptPolyPath CreateArcPath2D(FVector2D Center, float Radius, int32_t NumPoints, float StartAngle, float EndAngle); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C7EC18
		void ConvertSplineToPolyPath(USplineComponent Spline, FGeometryScriptPolyPath& PolyPath, FGeometryScriptSplineSamplingOptions SamplingOptions); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7EB38
		void ConvertPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath, TArray& VertexArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7EA58
		void ConvertPolyPathToArray(FGeometryScriptPolyPath PolyPath, TArray& VertexArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7E978
		void ConvertArrayToPolyPath(TArray& VertexArray, FGeometryScriptPolyPath& PolyPath); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7E898
		void ConvertArrayOfVector2DToPolyPath(TArray& VertexArray, FGeometryScriptPolyPath& PolyPath); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7E7B8
		TArray Conv_GeometryScriptPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C7E6D8
		TArray Conv_GeometryScriptPolyPathToArray(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C7E5F8
		FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(TArray& PathVertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C7E518
		FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray& PathVertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C7E438
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions");
			return ret;
		}

		void SetComponentMaterialList(UPrimitiveComponent Component, TArray& MaterialList, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7FA18
		void DetermineMeshOcclusion(TArray& SourceMeshes, TArray& SourceMeshTransforms, TArray& OutMeshIsHidden, TArray& TransparentMeshes, TArray& TransparentMeshTransforms, TArray& OutTransparentMeshIsHidden, TArray& OccludeMeshes, TArray& OccludeMeshTransforms, FGeometryScriptDetermineMeshOcclusionOptions& OcclusionOptions, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C7F938
		UDynamicMeshPool CreateDynamicMeshPool(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C7F858
		UDynamicMesh CopyMeshFromComponent(USceneComponent Component, UDynamicMesh ToDynamicMesh, FGeometryScriptCopyMeshFromComponentOptions Options, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7F778
		UDynamicMesh CopyCollisionMeshesFromObject(UObject FromObject, UDynamicMesh ToDynamicMesh, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, bool bUseComplexCollision, int32_t SphereResolution, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C7F698
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions");
			return ret;
		}

		FTransform MakeTransformFromZAxis(FVector Location, FVector ZAxis); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C7FE78
		FTransform MakeTransformFromAxes(FVector Location, FVector ZAxis, FVector TangentAxis, bool bTangentIsX); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C7FD98
		FVector GetTransformAxisVector(FTransform Transform, EGeometryScriptAxis Axis); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C7FCB8
		FRay GetTransformAxisRay(FTransform Transform, EGeometryScriptAxis Axis); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C7FBD8
		FPlane GetTransformAxisPlane(FTransform Transform, EGeometryScriptAxis Axis); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C7FAF8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions");
			return ret;
		}

		FRay MakeRayFromPoints(FVector A, FVector B); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C809D8
		FRay MakeRayFromPointDirection(FVector Origin, FVector Direction, bool bDirectionIsNormalized); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C808F8
		FRay GetTransformedRay(FRay Ray, FTransform Transform, bool bInvert); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80818
		void GetRayStartEnd(FRay Ray, double StartDistance, double EndDistance, FVector& StartPoint, FVector& Endpoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80738
		bool GetRaySphereIntersection(FRay Ray, FVector SphereCenter, double SphereRadius, double& Distance1, double& Distance2); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80658
		double GetRaySegmentClosestPoint(FRay Ray, FVector SegStartPoint, FVector SegEndPoint, double& RayParameter, FVector& RayPoint, FVector& SegPoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80578
		double GetRayPointDistance(FRay Ray, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80498
		FVector GetRayPoint(FRay Ray, double Distance); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C803B8
		bool GetRayPlaneIntersection(FRay Ray, FPlane Plane, double& HitDistance); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C802D8
		double GetRayParameter(FRay Ray, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C801F8
		double GetRayLineClosestPoint(FRay Ray, FVector LineOrigin, FVector LineDirection, double& RayParameter, FVector& RayPoint, double& LineParameter, FVector& LinePoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80118
		FVector GetRayClosestPoint(FRay Ray, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80038
		bool GetRayBoxIntersection(FRay Ray, FBox Box, double& HitDistance); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C7FF58
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions");
			return ret;
		}

		bool TestPointInsideBox(FBox Box, FVector Point, bool bConsiderOnBoxAsInside); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C816F8
		bool TestBoxSphereIntersection(FBox Box, FVector SphereCenter, double SphereRadius); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C81618
		bool TestBoxBoxIntersection(FBox Box1, FBox Box2); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C81538
		FBox MakeBoxFromCenterSize(FVector Center, FVector Dimensions); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C81458
		FBox MakeBoxFromCenterExtents(FVector Center, FVector Extents); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C81378
		FBox GetTransformedBox(FBox Box, FTransform Transform); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C81298
		FBox GetExpandedBox(FBox Box, FVector ExpandBy); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C811B8
		void GetBoxVolumeArea(FBox Box, double& Volume, double& SurfaceArea); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C810D8
		double GetBoxPointDistance(FBox Box, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80FF8
		FVector GetBoxFaceCenter(FBox Box, int32_t FaceIndex, FVector& FaceNormal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80F18
		FVector GetBoxCorner(FBox Box, int32_t CornerIndex); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80E38
		void GetBoxCenterSize(FBox Box, FVector& Center, FVector& Dimensions); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80D58
		double GetBoxBoxDistance(FBox Box1, FBox Box2); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80C78
		FVector FindClosestPointOnBox(FBox Box, FVector Point, bool& bIsInside); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80B98
		FBox FindBoxBoxIntersection(FBox Box1, FBox Box2, bool& bIsIntersecting); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C80AB8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions");
			return ret;
		}

		void SampleTextureRenderTarget2DAtUVPositions(FGeometryScriptUVList UVList, UTextureRenderTarget2D Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C818B8
		void SampleTexture2DAtUVPositions(FGeometryScriptUVList UVList, UTexture2D Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, UGeometryScriptDebug Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C817D8
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions");
			return ret;
		}

		FGeometryScriptScalarList VectorToScalar(FGeometryScriptVectorList VectorList, double ConstantX, double ConstantY, double ConstantZ); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C82958
		void VectorNormalizeInPlace(FGeometryScriptVectorList& VectorList, FVector SetOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C82878
		FGeometryScriptScalarList VectorLength(FGeometryScriptVectorList VectorList); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C82798
		FGeometryScriptScalarList VectorDot(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C826B8
		FGeometryScriptVectorList VectorCross(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C825D8
		void VectorBlendInPlace(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C824F8
		FGeometryScriptVectorList VectorBlend(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB, double ConstantA, double ConstantB); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C82418
		void ScalarVectorMultiplyInPlace(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList& VectorList, double ScalarMultiplier); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C82338
		FGeometryScriptVectorList ScalarVectorMultiply(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList VectorList, double ScalarMultiplier); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C82258
		void ScalarMultiplyInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C82178
		FGeometryScriptScalarList ScalarMultiply(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantMultiplier); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C82098
		void ScalarInvertInPlace(FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C81FB8
		FGeometryScriptScalarList ScalarInvert(FGeometryScriptScalarList ScalarList, double Numerator, double SetOnFailure, double Epsilon); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C81ED8
		void ScalarBlendInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C81DF8
		FGeometryScriptScalarList ScalarBlend(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantA, double ConstantB); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C81D18
		void ConstantVectorMultiplyInPlace(double Constant, FGeometryScriptVectorList& VectorList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C81C38
		FGeometryScriptVectorList ConstantVectorMultiply(double Constant, FGeometryScriptVectorList VectorList); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C81B58
		void ConstantScalarMultiplyInPlace(double Constant, FGeometryScriptScalarList& ScalarList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C81A78
		FGeometryScriptScalarList ConstantScalarMultiply(double Constant, FGeometryScriptScalarList ScalarList); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C81998
	};


	// Class GeometryScriptingCore.GeometryScriptLibrary_VolumeTextureBakeFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryScriptLibrary_VolumeTextureBakeFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryScriptingCore.GeometryScriptLibrary_VolumeTextureBakeFunctions");
			return ret;
		}

		void BakeSignedDistanceToVolumeTexture(UDynamicMesh TargetMesh, UVolumeTexture VolumeTexture); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C82A38
	};

}
