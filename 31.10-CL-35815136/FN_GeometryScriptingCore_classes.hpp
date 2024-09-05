#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryScriptingCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GeometryScriptingCore.GeometryScriptDebug
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGeometryScriptDebug : public UObject	
	{
	public:
		TArray<FGeometryScriptDebugMessage> Messages; // 0x28(0x10)

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

		FGeometryScriptSimpleCollision TransformSimpleCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FTransform Transform, FGeometryScriptTransformCollisionOptions& TransformOptions, bool& bSuccess, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BDFEC4(relative to base address)
		bool StaticMeshHasCustomizedCollision(UStaticMesh* StaticMeshAsset); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E700530(relative to base address)
		void SimplifyConvexHulls(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptConvexHullSimplificationOptions& SimplifyOptions, bool& bHasSimplified, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDF8E8(relative to base address)
		bool SetStaticMeshCustomComplexCollision(UStaticMesh* StaticMeshAsset, UStaticMesh* StaticMeshCollisionAsset, bool bEmitTransaction, bool bMarkCollisionAsCustomized, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDED8C(relative to base address)
		UDynamicMesh SetStaticMeshCollisionFromMesh(UDynamicMesh* FromDynamicMesh, UStaticMesh* ToStaticMeshAsset, FGeometryScriptCollisionFromMeshOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDE944(relative to base address)
		void SetStaticMeshCollisionFromComponent(UStaticMesh* StaticMeshAsset, UPrimitiveComponent* SourceComponent, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDE5DC(relative to base address)
		void SetSimpleCollisionOfStaticMesh(FGeometryScriptSimpleCollision& SimpleCollision, UStaticMesh* StaticMesh, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDE20C(relative to base address)
		void SetSimpleCollisionOfDynamicMeshComponent(FGeometryScriptSimpleCollision& SimpleCollision, UDynamicMeshComponent* DynamicMeshComponent, FGeometryScriptSetSimpleCollisionOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDDEF0(relative to base address)
		UDynamicMesh SetDynamicMeshCollisionFromMesh(UDynamicMesh* FromDynamicMesh, UDynamicMeshComponent* ToDynamicMeshComponent, FGeometryScriptCollisionFromMeshOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDD544(relative to base address)
		void ResetDynamicMeshCollision(UDynamicMeshComponent* Component, bool bEmitTransaction, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDCBF4(relative to base address)
		FGeometryScriptSimpleCollision MergeSimpleCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptMergeSimpleCollisionOptions& MergeOptions, bool& bHasMerged, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDC528(relative to base address)
		int32_t GetSimpleCollisionShapeCount(FGeometryScriptSimpleCollision& SimpleCollision); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDA790(relative to base address)
		FGeometryScriptSimpleCollision GetSimpleCollisionFromStaticMesh(UStaticMesh* StaticMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDA698(relative to base address)
		FGeometryScriptSimpleCollision GetSimpleCollisionFromComponent(UPrimitiveComponent* Component, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDA5A0(relative to base address)
		FGeometryScriptSphereCovering Conv_SphereArrayToGeometryScriptSphereCovering(TArray<FSphere>& Spheres); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD2278(relative to base address)
		TArray Conv_GeometryScriptSphereCoveringToSphereArray(FGeometryScriptSphereCovering& SphereCovering); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD2138(relative to base address)
		FGeometryScriptSphereCovering ComputeNegativeSpace(FGeometryScriptDynamicMeshBVH& MeshBVH, FComputeNegativeSpaceOptions& NegativeSpaceOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD1C04(relative to base address)
		FGeometryScriptSimpleCollision ComputeNavigableConvexDecomposition(UDynamicMesh* TargetMesh, FNavigableConvexDecompositionOptions& Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD1A10(relative to base address)
		void CombineSimpleCollision(FGeometryScriptSimpleCollision& CollisionToUpdate, FGeometryScriptSimpleCollision& AppendCollision, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD0CAC(relative to base address)
		void ApproximateConvexHullsWithSimplerCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptConvexHullApproximationOptions& ApproximateOptions, bool& bHasApproximated, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BCE794(relative to base address)
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

		UDynamicMesh ComputeMeshSweptHull(UDynamicMesh* TargetMesh, UDynamicMesh* CopyToMesh, UDynamicMesh* CopyToMeshOut, FTransform ProjectionFrame, FGeometryScriptSweptHullOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BD15AC(relative to base address)
		UDynamicMesh ComputeMeshConvexHull(UDynamicMesh* TargetMesh, UDynamicMesh* CopyToMesh, UDynamicMesh* CopyToMeshOut, FGeometryScriptMeshSelection Selection, FGeometryScriptConvexHullOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD11E4(relative to base address)
		UDynamicMesh ComputeMeshConvexDecomposition(UDynamicMesh* TargetMesh, UDynamicMesh* CopyToMesh, UDynamicMesh* CopyToMeshOut, FGeometryScriptConvexDecompositionOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD0EF0(relative to base address)
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

		void SetVectorListItem(FGeometryScriptVectorList& VectorList, int32_t Index, FVector NewValue, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BDEF60(relative to base address)
		void SetUVListItem(FGeometryScriptUVList& UVList, int32_t Index, FVector2D NewUV, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BDD22C(relative to base address)
		void SetScalarListItem(FGeometryScriptScalarList& ScalarList, int32_t Index, double NewValue, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDDBD4(relative to base address)
		void SetIndexListItem(FGeometryScriptIndexList& IndexList, int32_t Index, int32_t NewValue, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDD8B8(relative to base address)
		void SetColorListItem(FGeometryScriptColorList& ColorList, int32_t Index, FLinearColor NewColor, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BDD22C(relative to base address)
		int32_t GetVectorListLength(FGeometryScriptVectorList VectorList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD8ACC(relative to base address)
		int32_t GetVectorListLastIndex(FGeometryScriptVectorList VectorList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD88B8(relative to base address)
		FVector GetVectorListItem(FGeometryScriptVectorList VectorList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDB3C4(relative to base address)
		int32_t GetUVListLength(FGeometryScriptUVList UVList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD8ACC(relative to base address)
		int32_t GetUVListLastIndex(FGeometryScriptUVList UVList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD88B8(relative to base address)
		FVector2D GetUVListItem(FGeometryScriptUVList UVList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDB048(relative to base address)
		int32_t GetTriangleListLength(FGeometryScriptTriangleList TriangleList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDAE34(relative to base address)
		int32_t GetTriangleListLastTriangle(FGeometryScriptTriangleList TriangleList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDAC10(relative to base address)
		FIntVector GetTriangleListItem(FGeometryScriptTriangleList TriangleList, int32_t Triangle, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDA880(relative to base address)
		int32_t GetScalarListLength(FGeometryScriptScalarList ScalarList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD8ACC(relative to base address)
		int32_t GetScalarListLastIndex(FGeometryScriptScalarList ScalarList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD88B8(relative to base address)
		double GetScalarListItem(FGeometryScriptScalarList ScalarList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD9CAC(relative to base address)
		int32_t GetIndexListLength(FGeometryScriptIndexList IndexList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD9268(relative to base address)
		int32_t GetIndexListLastIndex(FGeometryScriptIndexList IndexList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD9050(relative to base address)
		int32_t GetIndexListItem(FGeometryScriptIndexList IndexList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD8C68(relative to base address)
		int32_t GetColorListLength(FGeometryScriptColorList ColorList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD8ACC(relative to base address)
		int32_t GetColorListLastIndex(FGeometryScriptColorList ColorList); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD88B8(relative to base address)
		FLinearColor GetColorListItem(FGeometryScriptColorList ColorList, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD853C(relative to base address)
		void ExtractColorListChannels(FGeometryScriptColorList ColorList, FGeometryScriptVectorList& VectorList, int32_t XChannelIndex, int32_t YChannelIndex, int32_t ZChannelIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD77C0(relative to base address)
		void ExtractColorListChannel(FGeometryScriptColorList ColorList, FGeometryScriptScalarList& ScalarList, int32_t ChannelIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD73A4(relative to base address)
		void DuplicateVectorList(FGeometryScriptVectorList VectorList, FGeometryScriptVectorList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD7148(relative to base address)
		void DuplicateUVList(FGeometryScriptUVList UVList, FGeometryScriptUVList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD6EEC(relative to base address)
		void DuplicateScalarList(FGeometryScriptScalarList ScalarList, FGeometryScriptScalarList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD6C90(relative to base address)
		void DuplicateIndexList(FGeometryScriptIndexList IndexList, FGeometryScriptIndexList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD6A28(relative to base address)
		void DuplicateColorList(FGeometryScriptColorList ColorList, FGeometryScriptColorList& DuplicateList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD67CC(relative to base address)
		void ConvertVectorListToArray(FGeometryScriptVectorList VectorList, TArray<FVector>& VectorArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD39FC(relative to base address)
		void ConvertUVListToArray(FGeometryScriptUVList UVList, TArray<FVector2D>& UVArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD3780(relative to base address)
		void ConvertTriangleListToArray(FGeometryScriptTriangleList TriangleList, TArray<FIntVector>& TriangleArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD3504(relative to base address)
		void ConvertScalarListToArray(FGeometryScriptScalarList ScalarList, TArray<double>& ScalarArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD3288(relative to base address)
		void ConvertIndexListToArray(FGeometryScriptIndexList IndexList, TArray<int32_t>& IndexArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD3084(relative to base address)
		void ConvertColorListToArray(FGeometryScriptColorList ColorList, TArray<FLinearColor>& ColorArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD2E08(relative to base address)
		void ConvertArrayToVectorList(TArray<FVector>& VectorArray, FGeometryScriptVectorList& VectorList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD2C04(relative to base address)
		void ConvertArrayToUVList(TArray<FVector2D>& UVArray, FGeometryScriptUVList& UVList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD2A88(relative to base address)
		void ConvertArrayToTriangleList(TArray<FIntVector>& TriangleArray, FGeometryScriptTriangleList& TriangleList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD290C(relative to base address)
		void ConvertArrayToScalarList(TArray<double>& VectorArray, FGeometryScriptScalarList& ScalarList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD2790(relative to base address)
		void ConvertArrayToIndexList(TArray<int32_t>& IndexArray, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType IndexType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD2554(relative to base address)
		void ConvertArrayToColorList(TArray<FLinearColor>& ColorArray, FGeometryScriptColorList& ColorList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD23D8(relative to base address)
		void ClearVectorList(FGeometryScriptVectorList& VectorList, FVector ClearValue); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BD0AC4(relative to base address)
		void ClearUVList(FGeometryScriptUVList& UVList, FVector2D ClearUV); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BD08E4(relative to base address)
		void ClearScalarList(FGeometryScriptScalarList& ScalarList, double ClearValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD0708(relative to base address)
		void ClearIndexList(FGeometryScriptIndexList& IndexList, int32_t ClearValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD0538(relative to base address)
		void ClearColorList(FGeometryScriptColorList& ColorList, FLinearColor ClearColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BD0358(relative to base address)
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

		void GetSectionMaterialListFromStaticMesh(UStaticMesh* FromStaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, TArray<UMaterialInterface*>& MaterialList, TArray<int32_t>& MaterialIndex, TArray<FName>& MaterialSlotNames, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDA0A0(relative to base address)
		int32_t GetNumStaticMeshLODsOfType(UStaticMesh* StaticMeshAsset, EGeometryScriptLODType LODType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BD9A34(relative to base address)
		void GetMaterialListFromStaticMesh(UStaticMesh* FromStaticMeshAsset, TArray<UMaterialInterface*>& MaterialList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD967C(relative to base address)
		UDynamicMesh CopyMorphTargetToSkeletalMesh(UDynamicMesh* FromMorphTarget, USkeletalMesh* ToSkeletalMeshAsset, FName MorphTargetName, FGeometryScriptCopyMorphTargetToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD531C(relative to base address)
		UDynamicMesh CopyMeshToStaticMesh(UDynamicMesh* FromDynamicMesh, UStaticMesh* ToStaticMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD4ED0(relative to base address)
		UDynamicMesh CopyMeshToSkeletalMesh(UDynamicMesh* FromDynamicMesh, USkeletalMesh* ToSkeletalMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD4A48(relative to base address)
		UDynamicMesh CopyMeshFromStaticMeshV2(UStaticMesh* FromStaticMeshAsset, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, bool bUseSectionMaterials, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD4628(relative to base address)
		UDynamicMesh CopyMeshFromStaticMesh(UStaticMesh* FromStaticMeshAsset, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD42D0(relative to base address)
		UDynamicMesh CopyMeshFromSkeletalMesh(USkeletalMesh* FromSkeletalMeshAsset, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD3F7C(relative to base address)
		bool CheckStaticMeshHasAvailableLOD(UStaticMesh* StaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD0098(relative to base address)
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

		FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDC470(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeTexture(UTexture2D* SourceTexture, int32_t SourceUVLayer); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDC394(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDC2DC(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypePosition(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDC224(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDC16C(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(TArray<UTexture2D*>& MaterialIDSourceTextures, int32_t SourceUVLayer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDBFD4(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDBF1C(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDBE64(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode CurvatureType, EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, EGeometryScriptBakeCurvatureClampMode Clamping); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDBCD0(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeConstant(float Value); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDBC38(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32_t OcclusionRays, float MaxDistance, float SpreadAngle); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDBB2C(relative to base address)
		FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32_t OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDB9D8(relative to base address)
		int32_t ConvertBakeResolutionToInt(EGeometryScriptBakeResolution BakeResolution); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BD2D80(relative to base address)
		UDynamicMesh BakeVertex(UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, FGeometryScriptBakeOutputType BakeTypes, FGeometryScriptBakeVertexOptions BakeOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BCF7E8(relative to base address)
		FGeometryScriptRenderCaptureTextures BakeTextureFromRenderCaptures(UDynamicMesh* TargetMesh, FTransform TargetLocalToWorld, FGeometryScriptBakeTargetMeshOptions TargetOptions, TArray<AActor*> SourceActors, FGeometryScriptBakeRenderCaptureOptions BakeOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BCF228(relative to base address)
		TArray BakeTexture(UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, TArray<FGeometryScriptBakeTypeOptions>& BakeTypes, FGeometryScriptBakeTextureOptions BakeOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BCEA20(relative to base address)
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

		UDynamicMesh SetVertexPosition(UDynamicMesh* TargetMesh, int32_t VertexID, FVector NewPosition, bool& bIsValidVertex, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BDF5C8(relative to base address)
		UDynamicMesh SetAllMeshVertexPositions(UDynamicMesh* TargetMesh, FGeometryScriptVectorList PositionList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDCD24(relative to base address)
		UDynamicMesh DiscardMeshAttributes(UDynamicMesh* TargetMesh, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BD66EC(relative to base address)
		UDynamicMesh DeleteVerticesFromMesh(UDynamicMesh* TargetMesh, FGeometryScriptIndexList VertexList, int32_t& NumDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD61C0(relative to base address)
		UDynamicMesh DeleteVertexFromMesh(UDynamicMesh* TargetMesh, int32_t VertexID, bool& bWasVertexDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD6000(relative to base address)
		UDynamicMesh DeleteTrianglesFromMesh(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleList, int32_t& NumDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD5BFC(relative to base address)
		UDynamicMesh DeleteTriangleFromMesh(UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bWasTriangleDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD5A3C(relative to base address)
		UDynamicMesh DeleteSelectedTrianglesFromMesh(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32_t& NumDeleted, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD5730(relative to base address)
		UDynamicMesh AppendMeshTransformed(UDynamicMesh* TargetMesh, UDynamicMesh* AppendMesh, TArray<FTransform>& AppendTransforms, FTransform ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BCE1D8(relative to base address)
		UDynamicMesh AppendMeshRepeated(UDynamicMesh* TargetMesh, UDynamicMesh* AppendMesh, FTransform AppendTransform, int32_t RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BCDBC8(relative to base address)
		UDynamicMesh AppendMesh(UDynamicMesh* TargetMesh, UDynamicMesh* AppendMesh, FTransform AppendTransform, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BCD74C(relative to base address)
		UDynamicMesh AppendBuffersToMesh(UDynamicMesh* TargetMesh, FGeometryScriptSimpleMeshBuffers& Buffers, FGeometryScriptIndexList& NewTriangleIndicesList, int32_t MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BCD338(relative to base address)
		UDynamicMesh AddVerticesToMesh(UDynamicMesh* TargetMesh, FGeometryScriptVectorList NewPositionsList, FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BCCF34(relative to base address)
		UDynamicMesh AddVertexToMesh(UDynamicMesh* TargetMesh, FVector NewPosition, int32_t& NewVertexIndex, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BCCC54(relative to base address)
		UDynamicMesh AddTriangleToMesh(UDynamicMesh* TargetMesh, FIntVector NewTriangle, int32_t& NewTriangleIndex, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750BCC014(relative to base address)
		UDynamicMesh AddTrianglesToMesh(UDynamicMesh* TargetMesh, FGeometryScriptTriangleList NewTrianglesList, FGeometryScriptIndexList& NewIndicesList, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BCC554(relative to base address)
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

		UDynamicMesh TransferBoneWeightsFromMesh(UDynamicMesh* SourceMesh, UDynamicMesh* TargetMesh, FGeometryScriptTransferBoneWeightsOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDFB78(relative to base address)
		UDynamicMesh SetVertexBoneWeights(UDynamicMesh* TargetMesh, int32_t VertexID, TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bIsValidVertexID, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDF280(relative to base address)
		UDynamicMesh SetAllVertexBoneWeights(UDynamicMesh* TargetMesh, TArray<FGeometryScriptBoneWeight>& BoneWeights, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDCFC0(relative to base address)
		UDynamicMesh MeshHasBoneWeights(UDynamicMesh* TargetMesh, bool& bHasBoneWeights, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750BDCA64(relative to base address)
		UDynamicMesh MeshCreateBoneWeights(UDynamicMesh* TargetMesh, bool& bProfileExisted, bool bReplaceExistingProfile, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDC808(relative to base address)
		UDynamicMesh GetVertexBoneWeights(UDynamicMesh* TargetMesh, int32_t VertexID, TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BDB758(relative to base address)
		UDynamicMesh GetRootBoneName(UDynamicMesh* TargetMesh, FName& BoneName, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD9B0C(relative to base address)
		UDynamicMesh GetMaxBoneWeightIndex(UDynamicMesh* TargetMesh, bool& bHasBoneWeights, int32_t& MaxBoneIndex, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD9818(relative to base address)
		UDynamicMesh GetLargestVertexBoneWeight(UDynamicMesh* TargetMesh, int32_t VertexID, FGeometryScriptBoneWeight& BoneWeight, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD9410(relative to base address)
		UDynamicMesh GetBoneInfo(UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, FGeometryScriptBoneInfo& BoneInfo, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD82E8(relative to base address)
		UDynamicMesh GetBoneIndex(UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, int32_t& BoneIndex, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD8064(relative to base address)
		UDynamicMesh GetBoneChildren(UDynamicMesh* TargetMesh, FName BoneName, bool bRecursive, bool& bIsValidBoneName, TArray<FGeometryScriptBoneInfo>& ChildrenInfo, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD7DF4(relative to base address)
		UDynamicMesh GetAllBonesInfo(UDynamicMesh* TargetMesh, TArray<FGeometryScriptBoneInfo>& BonesInfo, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750BD7C48(relative to base address)
		UDynamicMesh DiscardBonesFromMesh(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BD65D0(relative to base address)
		UDynamicMesh CopyBonesFromMesh(UDynamicMesh* SourceMesh, UDynamicMesh* TargetMesh, FGeometryScriptCopyBonesFromMeshOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BD3C78(relative to base address)
		UDynamicMesh ComputeSmoothBoneWeights(UDynamicMesh* TargetMesh, USkeleton* Skeleton, FGeometryScriptSmoothBoneWeightsOptions Options, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BD1E14(relative to base address)
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

		UDynamicMesh ApplyMeshSelfUnion(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelfUnionOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1B440(relative to base address)
		UDynamicMesh ApplyMeshPlaneSlice(UDynamicMesh* TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneSliceOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C1ADEC(relative to base address)
		UDynamicMesh ApplyMeshPlaneCut(UDynamicMesh* TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneCutOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C1AA6C(relative to base address)
		UDynamicMesh ApplyMeshMirror(UDynamicMesh* TargetMesh, FTransform MirrorFrame, FGeometryScriptMeshMirrorOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C1A16C(relative to base address)
		UDynamicMesh ApplyMeshBoolean(UDynamicMesh* TargetMesh, FTransform TargetTransform, UDynamicMesh* ToolMesh, FTransform ToolTransform, EGeometryScriptBooleanOperation Operation, FGeometryScriptMeshBooleanOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C18C00(relative to base address)
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

		UDynamicMesh MeasureDistancesBetweenMeshes(UDynamicMesh* TargetMesh, UDynamicMesh* OtherMesh, FGeometryScriptMeasureMeshDistanceOptions Options, double& MaxDistance, double& MinDistance, double& AverageDistance, double& RootMeanSqrDeviation, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C312D8(relative to base address)
		UDynamicMesh IsSameMeshAs(UDynamicMesh* TargetMesh, UDynamicMesh* OtherMesh, FGeometryScriptIsSameMeshOptions Options, bool& bIsSameMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C30DEC(relative to base address)
		UDynamicMesh IsIntersectingMesh(UDynamicMesh* TargetMesh, FTransform TargetTransform, UDynamicMesh* OtherMesh, FTransform OtherTransform, bool& bIsIntersecting, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C303C0(relative to base address)
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

		UDynamicMesh SplitMeshByPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32_t>& ComponentPolygroups, UDynamicMeshPool* MeshPool, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C3C1C8(relative to base address)
		UDynamicMesh SplitMeshByMaterialIDs(UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32_t>& ComponentMaterialIDs, UDynamicMeshPool* MeshPool, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C3BEFC(relative to base address)
		UDynamicMesh SplitMeshByComponents(UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, UDynamicMeshPool* MeshPool, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C3BC98(relative to base address)
		UDynamicMesh GetSubMeshFromMesh(UDynamicMesh* TargetMesh, UDynamicMesh* StoreToSubmesh, FGeometryScriptIndexList TriangleList, UDynamicMesh* StoreToSubmeshOut, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2DA80(relative to base address)
		UDynamicMesh CopyMeshToMesh(UDynamicMesh* CopyFromMesh, UDynamicMesh* CopyToMesh, UDynamicMesh* CopyToMeshOut, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C23788(relative to base address)
		UDynamicMesh CopyMeshSelectionToMesh(UDynamicMesh* TargetMesh, UDynamicMesh* StoreToSubmesh, FGeometryScriptMeshSelection Selection, UDynamicMesh* StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C23328(relative to base address)
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

		UDynamicMesh ApplyTwistWarpToMesh(UDynamicMesh* TargetMesh, FGeometryScriptTwistWarpOptions Options, FTransform TwistOrientation, float TwistAngle, float TwistExtent, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C1CF10(relative to base address)
		UDynamicMesh ApplyPerlinNoiseToMesh(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptPerlinNoiseOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1BB7C(relative to base address)
		UDynamicMesh ApplyMathWarpToMesh(UDynamicMesh* TargetMesh, FTransform WarpOrientation, EGeometryScriptMathWarpType WarpType, FGeometryScriptMathWarpOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C183C8(relative to base address)
		UDynamicMesh ApplyIterativeSmoothingToMesh(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIterativeMeshSmoothingOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C17FD4(relative to base address)
		UDynamicMesh ApplyFlareWarpToMesh(UDynamicMesh* TargetMesh, FGeometryScriptFlareWarpOptions Options, FTransform FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C179F4(relative to base address)
		UDynamicMesh ApplyDisplaceFromTextureMap(UDynamicMesh* TargetMesh, UTexture2D* Texture, FGeometryScriptMeshSelection Selection, FGeometryScriptDisplaceFromTextureOptions Options, int32_t UVLayer, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1736C(relative to base address)
		UDynamicMesh ApplyDisplaceFromPerVertexVectors(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptVectorList& VectorList, float Magnitude, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C16FB8(relative to base address)
		UDynamicMesh ApplyBendWarpToMesh(UDynamicMesh* TargetMesh, FGeometryScriptBendWarpOptions Options, FTransform BendOrientation, float BendAngle, float BendExtent, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C16A9C(relative to base address)
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

		UDynamicMesh GetShortestVertexPath(UDynamicMesh* TargetMesh, int32_t StartVertexID, int32_t EndVertexID, FGeometryScriptIndexList& VertexIDList, bool& bFoundErrors, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2D590(relative to base address)
		UDynamicMesh GetShortestSurfacePath(UDynamicMesh* TargetMesh, int32_t StartTriangleID, FVector StartBaryCoords, int32_t EndTriangleID, FVector EndBaryCoords, FGeometryScriptPolyPath& ShortestPath, bool& bFoundErrors, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C2D058(relative to base address)
		UDynamicMesh CreateSurfacePath(UDynamicMesh* TargetMesh, FVector Direction, int32_t StartTriangleID, FVector StartBaryCoords, float MaxPathLength, FGeometryScriptPolyPath& SurfacePath, bool& bFoundErrors, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C24B10(relative to base address)
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

		UDynamicMesh SetTriangleMaterialID(UDynamicMesh* TargetMesh, int32_t TriangleID, int32_t MaterialID, bool& bIsValidTriangle, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C3B694(relative to base address)
		UDynamicMesh SetPolygroupMaterialID(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, int32_t MaterialID, bool& bIsValidPolygroupID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C3B168(relative to base address)
		UDynamicMesh SetMaterialIDOnTriangles(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, int32_t MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3812C(relative to base address)
		UDynamicMesh SetMaterialIDForMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32_t MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C37D78(relative to base address)
		UDynamicMesh SetAllTriangleMaterialIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleMaterialIDList, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C37A14(relative to base address)
		UDynamicMesh RemapToNewMaterialIDsByMaterial(UDynamicMesh* TargetMesh, TArray<UMaterialInterface*>& FromMaterialList, TArray<UMaterialInterface*>& ToMaterialList, int32_t MissingMaterialID, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C32C30(relative to base address)
		UDynamicMesh RemapMaterialIDs(UDynamicMesh* TargetMesh, int32_t FromMaterialID, int32_t ToMaterialID, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C32A4C(relative to base address)
		UDynamicMesh RemapAndCombineMaterials(UDynamicMesh* TargetMesh, TArray<UMaterialInterface*>& TargetMeshMaterials, TArray<UMaterialInterface*>& RequiredMaterials, TArray<UMaterialInterface*>& CombinedMaterials, int32_t RemapInvalidMaterialID, bool bCompactDuplicateMaterials, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C32468(relative to base address)
		UDynamicMesh GetTrianglesByMaterialID(UDynamicMesh* TargetMesh, int32_t MaterialID, FGeometryScriptIndexList& TriangleIDList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2F2C8(relative to base address)
		int32_t GetTriangleMaterialID(UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2E078(relative to base address)
		int32_t GetMaxMaterialID(UDynamicMesh* TargetMesh, bool& bHasMaterialIDs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2A17C(relative to base address)
		UDynamicMesh GetMaterialIDsOfTriangles(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, FGeometryScriptIndexList& MaterialIDList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C29E28(relative to base address)
		UDynamicMesh GetAllTriangleMaterialIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& MaterialIDList, bool& bHasMaterialIDs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C27A50(relative to base address)
		UDynamicMesh EnableMaterialIDs(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C25B18(relative to base address)
		UDynamicMesh DeleteTrianglesByMaterialID(UDynamicMesh* TargetMesh, int32_t MaterialID, int32_t& NumDeleted, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C252D0(relative to base address)
		UDynamicMesh CompactMaterialIDs(UDynamicMesh* TargetMesh, TArray<UMaterialInterface*> SourceMaterialList, TArray<UMaterialInterface*>& CompactedMaterialList, bool bRemoveDuplicateMaterials, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C1E7AC(relative to base address)
		UDynamicMesh ClearMaterialIDs(UDynamicMesh* TargetMesh, int32_t ClearValue, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1E014(relative to base address)
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

		UDynamicMesh ApplyMeshShell(UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1B674(relative to base address)
		UDynamicMesh ApplyMeshPolygroupBevel(UDynamicMesh* TargetMesh, FGeometryScriptMeshBevelOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1B184(relative to base address)
		UDynamicMesh ApplyMeshOffsetFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetFacesOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1A73C(relative to base address)
		UDynamicMesh ApplyMeshOffset(UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1A4F8(relative to base address)
		UDynamicMesh ApplyMeshLinearExtrudeFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshLinearExtrudeOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C19E40(relative to base address)
		UDynamicMesh ApplyMeshInsetOutsetFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshInsetOutsetFacesOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C19B28(relative to base address)
		UDynamicMesh ApplyMeshExtrude_Compatibility_5p0(UDynamicMesh* TargetMesh, FGeometryScriptMeshExtrudeOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C198D4(relative to base address)
		UDynamicMesh ApplyMeshDuplicateFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewTriangles, FGeometryScriptMeshEditPolygroupOptions GroupOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C19580(relative to base address)
		UDynamicMesh ApplyMeshDisconnectFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, bool bAllowBowtiesInOutput, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C19290(relative to base address)
		UDynamicMesh ApplyMeshBevelSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, EGeometryScriptMeshBevelSelectionMode BevelMode, FGeometryScriptMeshBevelSelectionOptions BevelOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C18820(relative to base address)
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

		UDynamicMesh UpdateVertexNormal(UDynamicMesh* TargetMesh, int32_t VertexID, bool bUpdateNormal, FVector NewNormal, bool bUpdateTangents, FVector NewTangentX, FVector NewTangentY, bool& bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3D710(relative to base address)
		UDynamicMesh SetPerVertexNormals(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3AAD8(relative to base address)
		UDynamicMesh SetPerFaceNormals(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3A9BC(relative to base address)
		UDynamicMesh SetMeshTriangleNormals(UDynamicMesh* TargetMesh, int32_t TriangleID, FGeometryScriptTriangle Normals, bool& bIsValidTriangle, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C38BDC(relative to base address)
		UDynamicMesh SetMeshPerVertexTangents(UDynamicMesh* TargetMesh, FGeometryScriptVectorList TangentXList, FGeometryScriptVectorList TangentYList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C387F8(relative to base address)
		UDynamicMesh SetMeshPerVertexNormals(UDynamicMesh* TargetMesh, FGeometryScriptVectorList VertexNormalList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3855C(relative to base address)
		UDynamicMesh RecomputeNormalsForMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C320B0(relative to base address)
		UDynamicMesh RecomputeNormals(UDynamicMesh* TargetMesh, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C31DE0(relative to base address)
		UDynamicMesh GetMeshPerVertexTangents(UDynamicMesh* TargetMesh, FGeometryScriptVectorList& TangentXList, FGeometryScriptVectorList& TangentYList, bool& bIsValidTangentSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2AA70(relative to base address)
		UDynamicMesh GetMeshPerVertexNormals(UDynamicMesh* TargetMesh, FGeometryScriptVectorList& NormalList, bool& bIsValidNormalSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2A6E0(relative to base address)
		UDynamicMesh GetMeshHasTangents(UDynamicMesh* TargetMesh, bool& bHasTangents, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2A408(relative to base address)
		UDynamicMesh FlipNormals(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C27230(relative to base address)
		UDynamicMesh DiscardTangents(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C259FC(relative to base address)
		UDynamicMesh ComputeTangents(UDynamicMesh* TargetMesh, FGeometryScriptTangentsOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C20D44(relative to base address)
		UDynamicMesh ComputeSplitNormals(UDynamicMesh* TargetMesh, FGeometryScriptSplitNormalsOptions SplitOptions, FGeometryScriptCalculateNormalsOptions CalculateOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C20A58(relative to base address)
		UDynamicMesh AutoRepairNormals(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1DD48(relative to base address)
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

		UDynamicMesh SetPolygroupForMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptMeshSelection Selection, int32_t& SetPolygroupIDOut, int32_t SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C3ABF4(relative to base address)
		UDynamicMesh SetNumExtendedPolygroupLayers(UDynamicMesh* TargetMesh, int32_t NumLayers, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3A6C0(relative to base address)
		UDynamicMesh GetTrianglesInPolygroup(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, FGeometryScriptIndexList& TriangleIDsOut); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2F504(relative to base address)
		int32_t GetTrianglePolygroupID(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t TriangleID, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2E794(relative to base address)
		UDynamicMesh GetPolygroupIDsInMesh(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2CE38(relative to base address)
		UDynamicMesh GetAllTrianglePolygroupIDs(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C27C34(relative to base address)
		UDynamicMesh EnablePolygroups(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C25C6C(relative to base address)
		UDynamicMesh DeleteTrianglesInPolygroup(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, int32_t& NumDeleted, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2556C(relative to base address)
		UDynamicMesh CopyPolygroupsLayer(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer FromGroupLayer, FGeometryScriptGroupLayer ToGroupLayer, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C24224(relative to base address)
		UDynamicMesh ConvertUVIslandsToPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t UVLayer, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C23060(relative to base address)
		UDynamicMesh ConvertComponentsToPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C21A20(relative to base address)
		UDynamicMesh ComputePolygroupsFromPolygonDetection(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32_t MaxSearchRounds, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1FF64(relative to base address)
		UDynamicMesh ComputePolygroupsFromAngleThreshold(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, float CreaseAngle, int32_t MinGroupSize, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1FBD8(relative to base address)
		UDynamicMesh ClearPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t ClearValue, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1E1B0(relative to base address)
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

		UDynamicMeshPool GetGlobalMeshPool(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C28808(relative to base address)
		void DiscardGlobalMeshPool(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C259E8(relative to base address)
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

		TArray CreateConstrainedEdgesLoop(int32_t NumVertices, int32_t Start); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C24828(relative to base address)
		TArray CreateConstrainedEdgesChain(int32_t NumVertices, int32_t Start); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C246F0(relative to base address)
		UDynamicMesh AppendVoronoiDiagram2D(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& VoronoiSites, FGeometryScriptVoronoiOptions VoronoiOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C16598(relative to base address)
		UDynamicMesh AppendTriangulatedPolygon3D(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector>& PolygonVertices3D, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C15CE8(relative to base address)
		UDynamicMesh AppendTriangulatedPolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, bool bAllowSelfIntersections, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C160D8(relative to base address)
		UDynamicMesh AppendTorus(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptRevolveOptions RevolveOptions, float MajorRadius, float MinorRadius, int32_t MajorSteps, int32_t MinorSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C154A0(relative to base address)
		UDynamicMesh AppendSweepPolyline(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolylineVertices, TArray<FTransform>& SweepPath, TArray<float>& PolylineTexParamU, TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C14B04(relative to base address)
		UDynamicMesh AppendSweepPolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, TArray<FTransform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C141EC(relative to base address)
		UDynamicMesh AppendSpiralRevolvePolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32_t Steps, float RisePerRevolution, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C13AC4(relative to base address)
		UDynamicMesh AppendSphereLatLong(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t StepsPhi, int32_t StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C13430(relative to base address)
		UDynamicMesh AppendSphereCovering(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptSphereCovering& SphereCovering, int32_t StepsX, int32_t StepsY, int32_t StepsZ, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C12D9C(relative to base address)
		UDynamicMesh AppendSphereBox(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C12654(relative to base address)
		UDynamicMesh AppendSimpleSweptPolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, TArray<FVector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C11D3C(relative to base address)
		UDynamicMesh AppendSimpleExtrudePolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, float Height, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C1163C(relative to base address)
		UDynamicMesh AppendSimpleCollisionShapes(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptSimpleCollisionTriangulationOptions TriangulationOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C11110(relative to base address)
		UDynamicMesh AppendRoundRectangleXY(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C10100(relative to base address)
		UDynamicMesh AppendRoundRectangle_Compatibility_5(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C10908(relative to base address)
		UDynamicMesh AppendRevolvePolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32_t Steps, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0FA94(relative to base address)
		UDynamicMesh AppendRevolvePath(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PathVertices, FGeometryScriptRevolveOptions RevolveOptions, int32_t Steps, bool bCapped, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0F420(relative to base address)
		UDynamicMesh AppendRectangleXY(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0E700(relative to base address)
		UDynamicMesh AppendRectangle_Compatibility_5(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0ED90(relative to base address)
		UDynamicMesh AppendPolygonListTriangulation(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonsTriangulationOptions TriangulationOptions, bool& bTriangulationError, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0E0B8(relative to base address)
		UDynamicMesh AppendLinearStairs(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float StepDepth, int32_t NumSteps, bool bFloating, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0D7A4(relative to base address)
		UDynamicMesh AppendDisc(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t AngleSteps, int32_t SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0CF98(relative to base address)
		UDynamicMesh AppendDelaunayTriangulation2D(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& VertexPositions, TArray<FIntPoint>& ConstrainedEdges, FGeometryScriptConstrainedDelaunayTriangulationOptions TriangulationOptions, TArray<int32_t>& PositionsToVertexIDs, bool& bHasDuplicateVertices, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0C97C(relative to base address)
		UDynamicMesh AppendCylinder(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0C16C(relative to base address)
		UDynamicMesh AppendCurvedStairs(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32_t NumSteps, bool bFloating, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0B788(relative to base address)
		UDynamicMesh AppendCone(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float BaseRadius, float TopRadius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0AEB8(relative to base address)
		UDynamicMesh AppendCapsule(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float LineLength, int32_t HemisphereSteps, int32_t CircleSteps, int32_t SegmentSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C0A4EC(relative to base address)
		UDynamicMesh AppendBox(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float DimensionZ, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C09C24(relative to base address)
		UDynamicMesh AppendBoundingBox(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FBox Box, int32_t StepsX, int32_t StepsY, int32_t StepsZ, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C09554(relative to base address)
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

		bool IsValidVertexID(UDynamicMesh* TargetMesh, int32_t VertexID); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C311DC(relative to base address)
		bool IsValidTriangleID(UDynamicMesh* TargetMesh, int32_t TriangleID); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C310E0(relative to base address)
		FVector GetVertexPosition(UDynamicMesh* TargetMesh, int32_t VertexID, bool& bIsValidVertex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2FD0C(relative to base address)
		int32_t GetVertexCount(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2FC58(relative to base address)
		UDynamicMesh GetVertexConnectedVertices(UDynamicMesh* TargetMesh, int32_t VertexID, TArray<int32_t>& Vertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2FAFC(relative to base address)
		UDynamicMesh GetVertexConnectedTriangles(UDynamicMesh* TargetMesh, int32_t VertexID, TArray<int32_t>& Triangles); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2F9A0(relative to base address)
		FBox2D GetUVSetBoundingBox(UDynamicMesh* TargetMesh, int32_t UvSetIndex, bool& bIsValidUVSet, bool& bUVSetIsEmpty); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2F7C8(relative to base address)
		UDynamicMesh GetTriangleVertexColors(UDynamicMesh* TargetMesh, int32_t TriangleID, FLinearColor& Color1, FLinearColor& Color2, FLinearColor& Color3, bool& bTriHasValidVertexColors); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C2EFC8(relative to base address)
		void GetTriangleUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FVector2D& UV1, FVector2D& UV2, FVector2D& UV3, bool& bHaveValidUVs); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2ED2C(relative to base address)
		void GetTrianglePositions(UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2EA2C(relative to base address)
		UDynamicMesh GetTriangleNormalTangents(UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bTriHasValidElements, FGeometryScriptTriangle& Normals, FGeometryScriptTriangle& Tangents, FGeometryScriptTriangle& BiTangents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2E1A8(relative to base address)
		UDynamicMesh GetTriangleNormals(UDynamicMesh* TargetMesh, int32_t TriangleID, FVector& Normal1, FVector& Normal2, FVector& Normal3, bool& bTriHasValidNormals); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C2E494(relative to base address)
		FIntVector GetTriangleIndices(UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2DF18(relative to base address)
		FVector GetTriangleFaceNormal(UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2DDB4(relative to base address)
		int32_t GetNumVertexIDs(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2CD84(relative to base address)
		int32_t GetNumUVSets(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2CCD0(relative to base address)
		int32_t GetNumTriangleIDs(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2CC1C(relative to base address)
		int32_t GetNumOpenBorderLoops(UDynamicMesh* TargetMesh, bool& bAmbiguousTopologyFound); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2CB1C(relative to base address)
		int32_t GetNumOpenBorderEdges(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2CA68(relative to base address)
		int32_t GetNumExtendedPolygroupLayers(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2C9B4(relative to base address)
		int32_t GetNumConnectedComponents(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2C900(relative to base address)
		void GetMeshVolumeAreaCenter(UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume, FVector& CenterOfMass); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C2C760(relative to base address)
		void GetMeshVolumeArea(UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2C654(relative to base address)
		FString GetMeshInfoString(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2A5A8(relative to base address)
		bool GetMeshHasAttributeSet(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2A358(relative to base address)
		FBox GetMeshBoundingBox(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C2A258(relative to base address)
		bool GetIsDenseMesh(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C29D78(relative to base address)
		bool GetIsClosedMesh(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C29CC8(relative to base address)
		UDynamicMesh GetInterpolatedTriangleVertexColor(UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, FLinearColor DefaultColor, bool& bTriHasValidVertexColors, FLinearColor& InterpolatedColor); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C29958(relative to base address)
		UDynamicMesh GetInterpolatedTriangleUV(UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidUVs, FVector2D& InterpolatedUV); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C296B8(relative to base address)
		UDynamicMesh GetInterpolatedTrianglePosition(UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bIsValidTriangle, FVector& InterpolatedPosition); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C293D0(relative to base address)
		UDynamicMesh GetInterpolatedTriangleNormalTangents(UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidElements, FVector& InterpolatedNormal, FVector& InterpolatedTangent, FVector& InterpolatedBiTangent); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C28F50(relative to base address)
		UDynamicMesh GetInterpolatedTriangleNormal(UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidNormals, FVector& InterpolatedNormal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C28C68(relative to base address)
		bool GetHasVertexIDGaps(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C28BB4(relative to base address)
		bool GetHasVertexColors(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C28B00(relative to base address)
		bool GetHasTriangleNormals(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C28A4C(relative to base address)
		bool GetHasTriangleIDGaps(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C28998(relative to base address)
		bool GetHasPolygroups(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C288E4(relative to base address)
		bool GetHasMaterialIDs(UDynamicMesh* TargetMesh); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C28830(relative to base address)
		UDynamicMesh GetAllVertexPositionsAtEdges(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& EdgeIDs, FGeometryScriptVectorList& Start, FGeometryScriptVectorList& End); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C28548(relative to base address)
		UDynamicMesh GetAllVertexPositions(UDynamicMesh* TargetMesh, FGeometryScriptVectorList& PositionList, bool bSkipGaps, bool& bHasVertexIDGaps); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C28294(relative to base address)
		UDynamicMesh GetAllVertexIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& VertexIDList, bool& bHasVertexIDGaps); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2808C(relative to base address)
		UDynamicMesh GetAllUVSeamEdges(UDynamicMesh* TargetMesh, int32_t UvSetIndex, bool& bHaveValidUVs, FGeometryScriptIndexList& ElementIDs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C27E54(relative to base address)
		UDynamicMesh GetAllTriangleIndices(UDynamicMesh* TargetMesh, FGeometryScriptTriangleList& TriangleList, bool bSkipGaps, bool& bHasTriangleIDGaps); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2779C(relative to base address)
		UDynamicMesh GetAllTriangleIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& TriangleIDList, bool& bHasTriangleIDGaps); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C27594(relative to base address)
		UDynamicMesh GetAllSplitUVsAtVertex(UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t VertexID, TArray<int32_t>& ElementIDs, TArray<FVector2D>& ElementUVs, bool& bHaveValidUVs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2734C(relative to base address)
		UDynamicMesh ComputeTriangleBarycentricCoords(UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle, FVector Point, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3, FVector& BarycentricCoords); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C20F48(relative to base address)
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

		UDynamicMesh ApplyUniformRemesh(UDynamicMesh* TargetMesh, FGeometryScriptRemeshOptions RemeshOptions, FGeometryScriptUniformRemeshOptions UniformOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1D42C(relative to base address)
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

		UDynamicMesh WeldMeshEdges(UDynamicMesh* TargetMesh, FGeometryScriptWeldEdgesOptions WeldOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3DE78(relative to base address)
		UDynamicMesh SplitMeshBowties(UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3BAD4(relative to base address)
		UDynamicMesh SnapMeshOpenBoundaries(UDynamicMesh* TargetMesh, FGeometryScriptSnapBoundariesOptions SnapOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3B8A4(relative to base address)
		UDynamicMesh ResolveMeshTJunctions(UDynamicMesh* TargetMesh, FGeometryScriptResolveTJunctionOptions ResolveOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C33988(relative to base address)
		UDynamicMesh RepairMeshDegenerateGeometry(UDynamicMesh* TargetMesh, FGeometryScriptDegenerateTriangleOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C336C4(relative to base address)
		UDynamicMesh RemoveUnusedVertices(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3336C(relative to base address)
		UDynamicMesh RemoveSmallComponents(UDynamicMesh* TargetMesh, FGeometryScriptRemoveSmallComponentOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3313C(relative to base address)
		UDynamicMesh RemoveHiddenTriangles(UDynamicMesh* TargetMesh, FGeometryScriptRemoveHiddenTrianglesOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C32EFC(relative to base address)
		UDynamicMesh FillAllMeshHoles(UDynamicMesh* TargetMesh, FGeometryScriptFillHolesOptions FillOptions, int32_t& NumFilledHoles, int32_t& NumFailedHoleFills, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2643C(relative to base address)
		UDynamicMesh CompactMesh(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1EB08(relative to base address)
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

		UDynamicMesh ComputeVertexWeightedPointSampling(UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, FGeometryScriptScalarList VertexWeights, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C21428(relative to base address)
		void ComputeRenderCapturePointSampling(TArray<FTransform>& Samples, TArray<AActor*>& Actors, TArray<FGeometryScriptRenderCaptureCamera>& Cameras, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C20830(relative to base address)
		void ComputeRenderCaptureCamerasForBox(TArray<FGeometryScriptRenderCaptureCamera>& Cameras, FBox Box, FGeometryScriptRenderCaptureCamerasForBoxOptions& Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C20570(relative to base address)
		UDynamicMesh ComputePointSampling(UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, TArray<FTransform>& Samples, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C1F874(relative to base address)
		UDynamicMesh ComputeNonUniformPointSampling(UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C1F3C4(relative to base address)
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

		UDynamicMesh SelectMeshElementsWithPlane(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector PlaneOrigin, FVector PlaneNormal, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C374C8(relative to base address)
		UDynamicMesh SelectMeshElementsInSphere(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector SphereOrigin, double SphereRadius, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C36604(relative to base address)
		UDynamicMesh SelectMeshElementsInsideMesh(UDynamicMesh* TargetMesh, UDynamicMesh* SelectionMesh, FGeometryScriptMeshSelection& Selection, FTransform SelectionMeshTransform, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C36B30(relative to base address)
		UDynamicMesh SelectMeshElementsInBox(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FBox Box, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C35C18(relative to base address)
		UDynamicMesh SelectMeshElementsByPolygroup(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C358BC(relative to base address)
		UDynamicMesh SelectMeshElementsByNormalAngle(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector Normal, double MaxAngleDeg, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3535C(relative to base address)
		UDynamicMesh SelectMeshElementsByMaterialID(UDynamicMesh* TargetMesh, int32_t MaterialID, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C35154(relative to base address)
		UDynamicMesh InvertMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2FE70(relative to base address)
		void GetMeshSelectionInfo(FGeometryScriptMeshSelection Selection, EGeometryScriptMeshSelectionType& SelectionType, int32_t& NumSelected); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2BA50(relative to base address)
		UDynamicMesh ExpandMeshSelectionToConnected(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, EGeometryScriptTopologyConnectionType ConnectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C261A8(relative to base address)
		UDynamicMesh ExpandContractMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, int32_t Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C25D88(relative to base address)
		void DebugPrintMeshSelection(FGeometryScriptMeshSelection Selection, bool bDisable); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C250C8(relative to base address)
		UDynamicMesh CreateSelectAllMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C24968(relative to base address)
		UDynamicMesh ConvertMeshSelectionToIndexList(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType& ResultListType, EGeometryScriptIndexType ConvertToType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C22C5C(relative to base address)
		UDynamicMesh ConvertMeshSelectionToIndexArray(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, TArray<int32_t>& IndexArray, EGeometryScriptMeshSelectionType& SelectionType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C229F4(relative to base address)
		UDynamicMesh ConvertMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection FromSelection, FGeometryScriptMeshSelection& ToSelection, EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C226A4(relative to base address)
		UDynamicMesh ConvertIndexSetToMeshSelection(UDynamicMesh* TargetMesh, TSet<int32_t>& IndexSet, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C22408(relative to base address)
		UDynamicMesh ConvertIndexListToMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptIndexList IndexList, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C21E24(relative to base address)
		UDynamicMesh ConvertIndexArrayToMeshSelection(UDynamicMesh* TargetMesh, TArray<int32_t>& IndexArray, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C21C24(relative to base address)
		void CombineMeshSelections(FGeometryScriptMeshSelection SelectionA, FGeometryScriptMeshSelection SelectionB, FGeometryScriptMeshSelection& ResultSelection, EGeometryScriptCombineSelectionMode CombineMode); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C1E478(relative to base address)
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

		UDynamicMesh GetMeshSelectionBoundingBox(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FBox& SelectionBounds, bool& bIsEmpty, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C2B72C(relative to base address)
		UDynamicMesh GetMeshSelectionBoundaryLoops(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, TArray<FGeometryScriptIndexList>& IndexLoops, TArray<FGeometryScriptPolyPath>& PathLoops, int32_t& NumLoops, bool& bFoundErrors, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2B314(relative to base address)
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

		UDynamicMesh ApplySimplifyToVertexCount(UDynamicMesh* TargetMesh, int32_t vertexcount, FGeometryScriptSimplifyMeshOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1CCBC(relative to base address)
		UDynamicMesh ApplySimplifyToTriangleCount(UDynamicMesh* TargetMesh, int32_t TriangleCount, FGeometryScriptSimplifyMeshOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1CA68(relative to base address)
		UDynamicMesh ApplySimplifyToTolerance(UDynamicMesh* TargetMesh, float Tolerance, FGeometryScriptSimplifyMeshOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1C814(relative to base address)
		UDynamicMesh ApplySimplifyToPolygroupTopology(UDynamicMesh* TargetMesh, FGeometryScriptPolygroupSimplifyOptions Options, FGeometryScriptGroupLayer GroupLayer, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1C544(relative to base address)
		UDynamicMesh ApplySimplifyToPlanar(UDynamicMesh* TargetMesh, FGeometryScriptPlanarSimplifyOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1C33C(relative to base address)
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

		UDynamicMesh SelectMeshElementsInBoxWithBVH(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FBox QueryBox, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType, int32_t MinNumTrianglePoints, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C36098(relative to base address)
		void ResetBVH(FGeometryScriptDynamicMeshBVH& ResetBVH); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C338F4(relative to base address)
		UDynamicMesh RebuildBVHForMesh(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C31808(relative to base address)
		UDynamicMesh IsPointInsideMesh(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, bool& bIsInside, EGeometryScriptContainmentOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3090C(relative to base address)
		UDynamicMesh IsBVHValidForMesh(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& TestBVH, bool& bIsValid, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C30180(relative to base address)
		UDynamicMesh FindNearestRayIntersectionWithMesh(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector RayOrigin, FVector RayDirection, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptRayHitResult& HitResult, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C26C60(relative to base address)
		UDynamicMesh FindNearestPointOnMesh(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptTrianglePoint& NearestResult, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C2675C(relative to base address)
		UDynamicMesh BuildBVHForMesh(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& OutputBVH, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C1DE64(relative to base address)
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

		UDynamicMesh ApplyUniformTessellation(UDynamicMesh* TargetMesh, int32_t TessellationLevel, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1D738(relative to base address)
		UDynamicMesh ApplySelectiveTessellation(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptSelectiveTessellateOptions Options, int32_t TessellationLevel, ESelectiveTessellatePatternType PatternType, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1BEC4(relative to base address)
		UDynamicMesh ApplyPNTessellation(UDynamicMesh* TargetMesh, FGeometryScriptPNTessellateOptions Options, int32_t TessellationLevel, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1B8B8(relative to base address)
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

		UDynamicMesh TranslatePivotToLocation(UDynamicMesh* TargetMesh, FVector PivotLocation, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3D4E4(relative to base address)
		UDynamicMesh TranslateMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FVector Translation, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3CEA8(relative to base address)
		UDynamicMesh TranslateMesh(UDynamicMesh* TargetMesh, FVector Translation, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3CC88(relative to base address)
		UDynamicMesh TransformMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FTransform Transform, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3C8D8(relative to base address)
		UDynamicMesh TransformMesh(UDynamicMesh* TargetMesh, FTransform Transform, bool bFixOrientationForNegativeScale, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3C560(relative to base address)
		UDynamicMesh ScaleMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FVector Scale, FVector ScaleOrigin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C34978(relative to base address)
		UDynamicMesh ScaleMesh(UDynamicMesh* TargetMesh, FVector Scale, FVector ScaleOrigin, bool bFixOrientationForNegativeScale, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C345C4(relative to base address)
		UDynamicMesh RotateMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FRotator Rotation, FVector RotationOrigin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C33E74(relative to base address)
		UDynamicMesh RotateMesh(UDynamicMesh* TargetMesh, FRotator Rotation, FVector RotationOrigin, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C33B88(relative to base address)
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

		UDynamicMesh TranslateMeshUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FVector2D Translation, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3D1B8(relative to base address)
		UDynamicMesh SetNumUVSets(UDynamicMesh* TargetMesh, int32_t NumUVSets, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C3A820(relative to base address)
		UDynamicMesh SetMeshUVsFromPlanarProjection(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FTransform PlaneTransform, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C3A2DC(relative to base address)
		UDynamicMesh SetMeshUVsFromCylinderProjection(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FTransform CylinderTransform, FGeometryScriptMeshSelection Selection, float SplitAngle, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C39E30(relative to base address)
		UDynamicMesh SetMeshUVsFromBoxProjection(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FTransform BoxTransform, FGeometryScriptMeshSelection Selection, int32_t MinIslandTriCount, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C39988(relative to base address)
		UDynamicMesh SetMeshUVElementPosition(UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t ElementID, FVector2D NewUVPosition, bool& bIsValidElementID, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C39630(relative to base address)
		UDynamicMesh SetMeshTriangleUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FGeometryScriptUVTriangle UVs, bool& bIsValidTriangle, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C392AC(relative to base address)
		UDynamicMesh SetMeshTriangleUVElementIDs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FIntVector TriangleUVElements, bool& bIsValidTriangle, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C38F50(relative to base address)
		UDynamicMesh ScaleMeshUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FVector2D Scale, FVector2D ScaleOrigin, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C34D58(relative to base address)
		UDynamicMesh RotateMeshUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, float RotationAngle, FVector2D RotationOrigin, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C34254(relative to base address)
		UDynamicMesh RepackMeshUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptRepackUVsOptions RepackOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C33488(relative to base address)
		UDynamicMesh RecomputeMeshUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptRecomputeUVsOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C31A7C(relative to base address)
		UDynamicMesh GetMeshUVSizeInfo(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptMeshSelection Selection, double& MeshArea, double& UVArea, FBox& MeshBounds, FBox2D& UVBounds, bool& bIsValidUVSet, bool& bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C2C004(relative to base address)
		UDynamicMesh GetMeshUVElementPosition(UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t ElementID, FVector2D& UVPosition, bool& bIsValidElementID); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C2BE48(relative to base address)
		UDynamicMesh GetMeshTriangleUVElementIDs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FIntVector& TriangleUVElements, bool& bHaveValidUVs); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C2BC58(relative to base address)
		UDynamicMesh GetMeshPerVertexUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptUVList& UVList, bool& bIsValidUVSet, bool& bHasVertexIDGaps, bool& bHasSplitUVs, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C2AEBC(relative to base address)
		UDynamicMesh CopyUVSet(UDynamicMesh* TargetMesh, int32_t FromUVSet, int32_t ToUVSet, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C244F0(relative to base address)
		UDynamicMesh CopyMeshUVLayerToMesh(UDynamicMesh* CopyFromMesh, int32_t UvSetIndex, UDynamicMesh* CopyToUVMesh, UDynamicMesh* CopyToUVMeshOut, bool& bInvalidTopology, bool& bIsValidUVSet, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C23EC0(relative to base address)
		UDynamicMesh CopyMeshToMeshUVLayer(UDynamicMesh* CopyFromUVMesh, int32_t ToUVSetIndex, UDynamicMesh* CopyToMesh, UDynamicMesh* CopyToMeshOut, bool& bFoundTopologyErrors, bool& bIsValidUVSet, bool bOnlyUVPositions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C23970(relative to base address)
		UDynamicMesh ComputeMeshLocalUVParam(UDynamicMesh* TargetMesh, FVector CenterPoint, int32_t CenterPointTriangleID, TArray<int32_t>& VertexIDs, TArray<FVector2D>& VertexUVs, double Radius, bool bUseInterpolatedNormal, FVector TangentYDirection, double UVRotationDeg, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C1EC24(relative to base address)
		UDynamicMesh AutoGenerateXAtlasMeshUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptXAtlasOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1DB10(relative to base address)
		UDynamicMesh AutoGeneratePatchBuilderMeshUVs(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptPatchBuilderOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C1D8B0(relative to base address)
		UDynamicMesh AddUVElementToMesh(UDynamicMesh* TargetMesh, int32_t UvSetIndex, FVector2D NewUVPosition, int32_t& NewUVElementID, bool& bIsValidUVSet, bool bDeferChangeNotifications); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C091A8(relative to base address)
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

		UDynamicMesh SetMeshSelectionVertexColor(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bCreateColorSeam, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C5ED84(relative to base address)
		UDynamicMesh SetMeshPerVertexColors(UDynamicMesh* TargetMesh, FGeometryScriptColorList VertexColorList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C5EAE8(relative to base address)
		UDynamicMesh SetMeshConstantVertexColor(UDynamicMesh* TargetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C5E750(relative to base address)
		UDynamicMesh GetMeshPerVertexColors(UDynamicMesh* TargetMesh, FGeometryScriptColorList& ColorList, bool& bIsValidColorSet, bool& bHasVertexIDGaps, bool bBlendSplitVertexValues); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5094C(relative to base address)
		UDynamicMesh ConvertMeshVertexColorsSRGBToLinear(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C4B2EC(relative to base address)
		UDynamicMesh ConvertMeshVertexColorsLinearToSRGB(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C4B1D0(relative to base address)
		UDynamicMesh BlurMeshVertexColors(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32_t NumIterations, double Strength, EGeometryScriptBlurColorMode BlurMode, FGeometryScriptBlurMeshVertexColorsOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C49480(relative to base address)
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

		UDynamicMesh ApplyMeshSolidify(UDynamicMesh* TargetMesh, FGeometryScriptSolidifyOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C48FB8(relative to base address)
		UDynamicMesh ApplyMeshMorphology(UDynamicMesh* TargetMesh, FGeometryScriptMorphologyOptions Options, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C48D88(relative to base address)
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

		void UnflattenPoints(TArray<FVector2D>& PointsIn2D, TArray<FVector>& PointsIn3D, FGeometryScriptPointFlatteningOptions& Options, double Height); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5FE5C(relative to base address)
		void TransformsToPoints(TArray<FTransform>& Transforms, TArray<FVector>& Points); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5FD14(relative to base address)
		void OffsetTransforms(TArray<FTransform>& Transforms, double Offset, FVector Direction, EGeometryScriptCoordinateSpace Space); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C59064(relative to base address)
		FBox MakeBoundingBoxFromPoints(TArray<FVector>& Points, double ExpandBy); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C57F1C(relative to base address)
		void KMeansClusterToIDs(TArray<FVector>& Points, FGeometryScriptPointClusteringOptions& Options, TArray<int32_t>& PointClusterIndices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C57D78(relative to base address)
		void KMeansClusterToArrays(TArray<FVector>& Points, FGeometryScriptPointClusteringOptions& Options, TArray<FGeometryScriptIndexList>& ClusterIDToLists); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C57BF8(relative to base address)
		void GetPointsFromIndexList(TArray<FVector>& AllPoints, FGeometryScriptIndexList& Indices, TArray<FVector>& SelectedPoints); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C51080(relative to base address)
		void FlattenPoints(TArray<FVector>& PointsIn3D, TArray<FVector2D>& PointsIn2D, FGeometryScriptPointFlatteningOptions& Options); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4F1F8(relative to base address)
		void DownsamplePoints(TArray<FVector>& Points, FGeometryScriptPointPriorityOptions& Options, FGeometryScriptIndexList& DownsampledIndices, int32_t KeepNumPoints, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4E8F0(relative to base address)
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

		void SetPolygonVertex(FGeometryScriptSimplePolygon& Polygon, int32_t VertexIndex, FVector2D Position, bool& bPolygonIsEmpty); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C5F204(relative to base address)
		int32_t GetPolygonVertexCount(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C541A4(relative to base address)
		FVector2D GetPolygonVertex(FGeometryScriptSimplePolygon Polygon, int32_t VertexIndex, bool& bPolygonIsEmpty); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C53A6C(relative to base address)
		FVector2D GetPolygonTangent(FGeometryScriptSimplePolygon Polygon, int32_t VertexIndex, bool& bPolygonIsEmpty); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C53220(relative to base address)
		FBox2D GetPolygonBounds(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C528EC(relative to base address)
		double GetPolygonArea(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C520EC(relative to base address)
		double GetPolygonArcLength(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C520EC(relative to base address)
		void ConvertSplineToPolygon(USplineComponent* Spline, FGeometryScriptSimplePolygon& Polygon, FGeometryScriptSplineSamplingOptions SamplingOptions, EGeometryScriptAxis DropAxis); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4BB30(relative to base address)
		TArray Conv_GeometryScriptSimplePolygonToArrayOfVector2D(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4AC04(relative to base address)
		TArray Conv_GeometryScriptSimplePolygonToArray(FGeometryScriptSimplePolygon Polygon); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4A96C(relative to base address)
		FGeometryScriptSimplePolygon Conv_ArrayToGeometryScriptSimplePolygon(TArray<FVector>& PathVertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4A538(relative to base address)
		FGeometryScriptSimplePolygon Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(TArray<FVector2D>& PathVertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4A2BC(relative to base address)
		int32_t AddPolygonVertex(FGeometryScriptSimplePolygon& Polygon, FVector2D Position); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C48844(relative to base address)
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

		FGeometryScriptGeneralPolygonList PolygonsUnion(FGeometryScriptGeneralPolygonList PolygonList, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C5B5E4(relative to base address)
		FGeometryScriptGeneralPolygonList PolygonsOffsets(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double FirstOffset, double SecondOffset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5B060(relative to base address)
		FGeometryScriptGeneralPolygonList PolygonsOffset(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5A9C0(relative to base address)
		FGeometryScriptGeneralPolygonList PolygonsMorphologyOpen(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5A508(relative to base address)
		FGeometryScriptGeneralPolygonList PolygonsMorphologyClose(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5A050(relative to base address)
		FGeometryScriptGeneralPolygonList PolygonsIntersection(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToIntersect); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C59C04(relative to base address)
		FGeometryScriptGeneralPolygonList PolygonsExclusiveOr(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToExclusiveOr); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C597B8(relative to base address)
		FGeometryScriptGeneralPolygonList PolygonsDifference(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToSubtract); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C59360(relative to base address)
		FGeometryScriptSimplePolygon GetSimplePolygon(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C569FC(relative to base address)
		void GetPolygonVertices(FGeometryScriptGeneralPolygonList PolygonList, TArray<FVector2D>& OutVertices, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C54424(relative to base address)
		int32_t GetPolygonVertexCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C53DF4(relative to base address)
		FVector2D GetPolygonVertex(FGeometryScriptGeneralPolygonList PolygonList, bool& bIsValidVertex, int32_t VertexIndex, int32_t PolygonIndex, int32_t HoleIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C535E4(relative to base address)
		FBox2D GetPolygonListBounds(FGeometryScriptGeneralPolygonList PolygonList); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C53068(relative to base address)
		double GetPolygonListArea(FGeometryScriptGeneralPolygonList PolygonList); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C52E34(relative to base address)
		int32_t GetPolygonHoleCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C52B3C(relative to base address)
		int32_t GetPolygonCount(FGeometryScriptGeneralPolygonList PolygonList); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750BDAE34(relative to base address)
		FBox2D GetPolygonBounds(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C525D8(relative to base address)
		double GetPolygonArea(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C522E0(relative to base address)
		FGeometryScriptGeneralPolygonList CreatePolygonsFromPathOffset(TArray<FVector2D> Path, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4E034(relative to base address)
		FGeometryScriptGeneralPolygonList CreatePolygonsFromOpenPolyPathsOffset(TArray<FGeometryScriptPolyPath> PolyPaths, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4DBE8(relative to base address)
		FGeometryScriptGeneralPolygonList CreatePolygonListFromSinglePolygon(FGeometryScriptSimplePolygon OuterPolygon, TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4D900(relative to base address)
		FGeometryScriptGeneralPolygonList CreatePolygonListFromSimplePolygons(TArray<FGeometryScriptSimplePolygon>& OuterPolygons); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4D850(relative to base address)
		void AppendPolygonList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptGeneralPolygonList PolygonsToAppend); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C48A28(relative to base address)
		int32_t AddPolygonToList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptSimplePolygon OuterPolygon, TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C484E4(relative to base address)
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

		bool SampleSplineToTransforms(USplineComponent* Spline, TArray<FTransform>& Frames, TArray<double>& FrameTimes, FGeometryScriptSplineSamplingOptions SamplingOptions, FTransform RelativeTransform, bool bIncludeScale); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C5B9FC(relative to base address)
		FVector GetPolyPathVertex(FGeometryScriptPolyPath PolyPath, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C51D54(relative to base address)
		FVector GetPolyPathTangent(FGeometryScriptPolyPath PolyPath, int32_t Index, bool& bIsValidIndex); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C51958(relative to base address)
		int32_t GetPolyPathNumVertices(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C51744(relative to base address)
		int32_t GetPolyPathLastIndex(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C5151C(relative to base address)
		double GetPolyPathArcLength(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C51258(relative to base address)
		int32_t GetNearestVertexIndex(FGeometryScriptPolyPath PolyPath, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C50CBC(relative to base address)
		FGeometryScriptPolyPath FlattenTo2DOnAxis(FGeometryScriptPolyPath PolyPath, EGeometryScriptAxis DropAxis); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C4F3B0(relative to base address)
		FGeometryScriptPolyPath CreateCirclePath3D(FTransform Transform, float Radius, int32_t NumPoints); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C4D4DC(relative to base address)
		FGeometryScriptPolyPath CreateCirclePath2D(FVector2D Center, float Radius, int32_t NumPoints); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C4D234(relative to base address)
		FGeometryScriptPolyPath CreateArcPath3D(FTransform Transform, float Radius, int32_t NumPoints, float StartAngle, float EndAngle); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C4CD6C(relative to base address)
		FGeometryScriptPolyPath CreateArcPath2D(FVector2D Center, float Radius, int32_t NumPoints, float StartAngle, float EndAngle); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C4C944(relative to base address)
		void ConvertSplineToPolyPath(USplineComponent* Spline, FGeometryScriptPolyPath& PolyPath, FGeometryScriptSplineSamplingOptions SamplingOptions); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4B810(relative to base address)
		void ConvertPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath, TArray<FVector2D>& VertexArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4B60C(relative to base address)
		void ConvertPolyPathToArray(FGeometryScriptPolyPath PolyPath, TArray<FVector>& VertexArray); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4B408(relative to base address)
		void ConvertArrayToPolyPath(TArray<FVector>& VertexArray, FGeometryScriptPolyPath& PolyPath); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4B064(relative to base address)
		void ConvertArrayOfVector2DToPolyPath(TArray<FVector2D>& VertexArray, FGeometryScriptPolyPath& PolyPath); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4AEF8(relative to base address)
		TArray Conv_GeometryScriptPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4A7AC(relative to base address)
		TArray Conv_GeometryScriptPolyPathToArray(FGeometryScriptPolyPath PolyPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4A5EC(relative to base address)
		FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(TArray<FVector>& PathVertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4A404(relative to base address)
		FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<FVector2D>& PathVertices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4A188(relative to base address)
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

		void SetComponentMaterialList(UPrimitiveComponent* Component, TArray<UMaterialInterface*>& MaterialList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5E5B4(relative to base address)
		void DetermineMeshOcclusion(TArray<UDynamicMesh*>& SourceMeshes, TArray<FTransform>& SourceMeshTransforms, TArray<bool>& OutMeshIsHidden, TArray<UDynamicMesh*>& TransparentMeshes, TArray<FTransform>& TransparentMeshTransforms, TArray<bool>& OutTransparentMeshIsHidden, TArray<UDynamicMesh*>& OccludeMeshes, TArray<FTransform>& OccludeMeshTransforms, FGeometryScriptDetermineMeshOcclusionOptions& OcclusionOptions, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4E484(relative to base address)
		UDynamicMeshPool CreateDynamicMeshPool(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C4D824(relative to base address)
		UDynamicMesh CopyMeshFromComponent(USceneComponent* Component, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromComponentOptions Options, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C4C4D0(relative to base address)
		UDynamicMesh CopyCollisionMeshesFromObject(UObject* FromObject, UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, bool bUseComplexCollision, int32_t SphereResolution, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C4C070(relative to base address)
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

		FTransform MakeTransformFromZAxis(FVector Location, FVector ZAxis); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C58DFC(relative to base address)
		FTransform MakeTransformFromAxes(FVector Location, FVector ZAxis, FVector TangentAxis, bool bTangentIsX); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C58A1C(relative to base address)
		FVector GetTransformAxisVector(FTransform Transform, EGeometryScriptAxis Axis); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C572F8(relative to base address)
		FRay GetTransformAxisRay(FTransform Transform, EGeometryScriptAxis Axis); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C57064(relative to base address)
		FPlane GetTransformAxisPlane(FTransform Transform, EGeometryScriptAxis Axis); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C56DD8(relative to base address)
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

		FRay MakeRayFromPoints(FVector A, FVector B); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C587FC(relative to base address)
		FRay MakeRayFromPointDirection(FVector Origin, FVector Direction, bool bDirectionIsNormalized); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C58520(relative to base address)
		FRay GetTransformedRay(FRay Ray, FTransform Transform, bool bInvert); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C5785C(relative to base address)
		void GetRayStartEnd(FRay Ray, double StartDistance, double EndDistance, FVector& StartPoint, FVector& Endpoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C565B4(relative to base address)
		bool GetRaySphereIntersection(FRay Ray, FVector SphereCenter, double SphereRadius, double& Distance1, double& Distance2); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C561A8(relative to base address)
		double GetRaySegmentClosestPoint(FRay Ray, FVector SegStartPoint, FVector SegEndPoint, double& RayParameter, FVector& RayPoint, FVector& SegPoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C55C9C(relative to base address)
		double GetRayPointDistance(FRay Ray, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C55A58(relative to base address)
		FVector GetRayPoint(FRay Ray, double Distance); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C5581C(relative to base address)
		bool GetRayPlaneIntersection(FRay Ray, FPlane Plane, double& HitDistance); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C5555C(relative to base address)
		double GetRayParameter(FRay Ray, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C55320(relative to base address)
		double GetRayLineClosestPoint(FRay Ray, FVector LineOrigin, FVector LineDirection, double& RayParameter, FVector& RayPoint, double& LineParameter, FVector& LinePoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C54D64(relative to base address)
		FVector GetRayClosestPoint(FRay Ray, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C54B18(relative to base address)
		bool GetRayBoxIntersection(FRay Ray, FBox Box, double& HitDistance); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C54838(relative to base address)
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

		bool TestPointInsideBox(FBox Box, FVector Point, bool bConsiderOnBoxAsInside); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C5FA40(relative to base address)
		bool TestBoxSphereIntersection(FBox Box, FVector SphereCenter, double SphereRadius); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C5F764(relative to base address)
		bool TestBoxBoxIntersection(FBox Box1, FBox Box2); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C5F528(relative to base address)
		FBox MakeBoxFromCenterSize(FVector Center, FVector Dimensions); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C582F4(relative to base address)
		FBox MakeBoxFromCenterExtents(FVector Center, FVector Extents); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C580C8(relative to base address)
		FBox GetTransformedBox(FBox Box, FTransform Transform); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C57584(relative to base address)
		FBox GetExpandedBox(FBox Box, FVector ExpandBy); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C506FC(relative to base address)
		void GetBoxVolumeArea(FBox Box, double& Volume, double& SurfaceArea); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C504AC(relative to base address)
		double GetBoxPointDistance(FBox Box, FVector Point); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C50290(relative to base address)
		FVector GetBoxFaceCenter(FBox Box, int32_t FaceIndex, FVector& FaceNormal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4FFB4(relative to base address)
		FVector GetBoxCorner(FBox Box, int32_t CornerIndex); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4FD30(relative to base address)
		void GetBoxCenterSize(FBox Box, FVector& Center, FVector& Dimensions); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4FA6C(relative to base address)
		double GetBoxBoxDistance(FBox Box1, FBox Box2); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4F82C(relative to base address)
		FVector FindClosestPointOnBox(FBox Box, FVector Point, bool& bIsInside); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4EF3C(relative to base address)
		FBox FindBoxBoxIntersection(FBox Box1, FBox Box2, bool& bIsIntersecting); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750C4EC44(relative to base address)
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

		void SampleTextureRenderTarget2DAtUVPositions(FGeometryScriptUVList UVList, UTextureRenderTarget2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5C330(relative to base address)
		void SampleTexture2DAtUVPositions(FGeometryScriptUVList UVList, UTexture2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, UGeometryScriptDebug* Debug); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5BE74(relative to base address)
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

		FGeometryScriptScalarList VectorToScalar(FGeometryScriptVectorList VectorList, double ConstantX, double ConstantY, double ConstantZ); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C61320(relative to base address)
		void VectorNormalizeInPlace(FGeometryScriptVectorList& VectorList, FVector SetOnFailure); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750C61138(relative to base address)
		FGeometryScriptScalarList VectorLength(FGeometryScriptVectorList VectorList); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C60F84(relative to base address)
		FGeometryScriptScalarList VectorDot(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C60C70(relative to base address)
		FGeometryScriptVectorList VectorCross(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C6095C(relative to base address)
		void VectorBlendInPlace(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C60578(relative to base address)
		FGeometryScriptVectorList VectorBlend(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB, double ConstantA, double ConstantB); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C600E0(relative to base address)
		void ScalarVectorMultiplyInPlace(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList& VectorList, double ScalarMultiplier); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5E294(relative to base address)
		FGeometryScriptVectorList ScalarVectorMultiply(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList VectorList, double ScalarMultiplier); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C5DECC(relative to base address)
		void ScalarMultiplyInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5DBAC(relative to base address)
		FGeometryScriptScalarList ScalarMultiply(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantMultiplier); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C5D7E4(relative to base address)
		void ScalarInvertInPlace(FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5D480(relative to base address)
		FGeometryScriptScalarList ScalarInvert(FGeometryScriptScalarList ScalarList, double Numerator, double SetOnFailure, double Epsilon); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C5D068(relative to base address)
		void ScalarBlendInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C5CC84(relative to base address)
		FGeometryScriptScalarList ScalarBlend(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantA, double ConstantB); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C5C7EC(relative to base address)
		void ConstantVectorMultiplyInPlace(double Constant, FGeometryScriptVectorList& VectorList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C4A048(relative to base address)
		FGeometryScriptVectorList ConstantVectorMultiply(double Constant, FGeometryScriptVectorList VectorList); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C49E4C(relative to base address)
		void ConstantScalarMultiplyInPlace(double Constant, FGeometryScriptScalarList& ScalarList); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C49D0C(relative to base address)
		FGeometryScriptScalarList ConstantScalarMultiply(double Constant, FGeometryScriptScalarList ScalarList); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C49B10(relative to base address)
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

		bool BakeSignedDistanceToVolumeTexture(UDynamicMesh* TargetMesh, UVolumeTexture* VolumeTexture, FComputeDistanceFieldSettings DistanceSettings, FDistanceFieldToTextureSettings TextureSettings); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750C491EC(relative to base address)
	};

}
