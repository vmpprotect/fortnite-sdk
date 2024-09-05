#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AtomRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AtomRuntime.AtomAssetImportData
	// Inherited from UAssetImportData -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomAssetImportData : public UAssetImportData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomAssetImportData");
			return ret;
		}
	};


	// Class AtomRuntime.AtomModelMergedMeshImportData
	// Inherited from UAssetImportData -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomModelMergedMeshImportData : public UAssetImportData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelMergedMeshImportData");
			return ret;
		}
	};


	// Class AtomRuntime.AtomModelGeometryCollectionImportData
	// Inherited from UAssetImportData -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomModelGeometryCollectionImportData : public UAssetImportData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelGeometryCollectionImportData");
			return ret;
		}
	};


	// Class AtomRuntime.AtomTextureImportData
	// Inherited from UAssetImportData -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomTextureImportData : public UAssetImportData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomTextureImportData");
			return ret;
		}
	};


	// Class AtomRuntime.AtomColorLUTAtlas
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UAtomColorLUTAtlas : public UObject	
	{
	public:
		UTexture2D AtlasTexture; // 0x28(0x8)
		TArray Textures; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomColorLUTAtlas");
			return ret;
		}

		int32_t GetLUTIndex(UTexture2D InTexture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3DF18
		int32_t GetAtlasSize(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3DE38
		int32_t FindOrAddLUTIndex(UTexture2D InTexture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3DD58
	};


	// Class AtomRuntime.AtomDatabaseSubsystemBase
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAtomDatabaseSubsystemBase : public UEngineSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomDatabaseSubsystemBase");
			return ret;
		}
	};


	// Class AtomRuntime.AtomModelActor
	// Inherited from AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class AAtomModelActor : public AActor	
	{
	public:
		UAtomModel AtomModel; // 0x290(0x8)
		FString PrimitiveStyleName; // 0x298(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelActor");
			return ret;
		}
	};


	// Class AtomRuntime.AtomModelAssetUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UAtomModelAssetUserData : public UAssetUserData	
	{
	public:
		FSerializedConnectivityObjects AtomModelConnections; // 0x28(0x20)
		TArray Tags; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelAssetUserData");
			return ret;
		}
	};


	// Class AtomRuntime.AtomCommonPartModelAssetUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UAtomCommonPartModelAssetUserData : public UAssetUserData	
	{
	public:
		FAtomCommonPartAssetDescription AssetDescription; // 0x28(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomCommonPartModelAssetUserData");
			return ret;
		}
	};


	// Class AtomRuntime.AtomPartsCollectionBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomPartsCollectionBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary");
			return ret;
		}

		void SetName(FAtomModelPartsCollection& PartsCollection, FString Name); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C3EED8
		void ReplacePartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartInstanceInfo& SourcePartInstance, FAtomModelPartGuid& TargetPartInstanceId); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C3EDF8
		void RemovePartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartGuid& PartInstanceId); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C3ED18
		bool PrimitiveHasConsistentCommonPartStyles(UAtomPrimitive Primitive); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C3EC38
		FAtomModelPartsCollection InitializeCommonParts(FAtomModelPartsCollection& PartsCollection, UAtomModel Model, float Scale, int32_t CommonPartOptimizationFlags); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C3EB58
		TArray GetPrimitiveCommonParts(UAtomPrimitive Primitive, double Scale); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C3EA78
		TArray GetParts(FAtomModelPartsCollection& PartsCollection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C3E998
		FString GetName(FAtomModelPartsCollection& PartsCollection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C3E8B8
		int32_t GetModelPartGuidHash(FAtomModelPartGuid& InModelPartGuid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C3E7D8
		FAtomModelPartsCollection FilterTransparent(FAtomModelPartsCollection& PartsCollectionToFilter, FString NewPartsCollectionName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C3E6F8
		FAtomModelPartsCollection FilterSelectionSet(FAtomModelPartsCollection& PartsCollectionToFilter, FString SelectionSetName, FString NewPartsCollectionName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C3E618
		FAtomModelPartsCollection FilterNonTransparent(FAtomModelPartsCollection& PartsCollectionToFilter, FString NewPartsCollectionName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C3E538
		FAtomModelPartsCollection FilterGroup(UAtomModel Model, FAtomModelPartsCollection& PartsCollectionToFilter, FString GroupName, FString NewPartsCollectionName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C3E458
		FAtomModelPartsCollection FilterCommonPartsToStyle(FAtomModelPartsCollection& PartsCollection, FName GeometryStyle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C3E378
		FAtomModelPartColorInfo CreateColorInfoFromColorId(int32_t ColorId); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C3E298
		FAtomModelPartGuid Conv_StringToModelPartGuid(FString InString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C3E1B8
		FString Conv_ModelPartGuidToString(FAtomModelPartGuid& InModelPartGuid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C3E0D8
		void AddPartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartInstanceInfo& PartInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C3DFF8
	};


	// Class AtomRuntime.AtomPrimitiveBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomPrimitiveBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomPrimitiveBlueprintLibrary");
			return ret;
		}

		float GetDefaultPrimitiveScale(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C3EFB8
	};


	// Class AtomRuntime.AtomPrimitiveGeometry
	// Inherited from UObject
	// Size: 0x2C0 (0x2E8 - 0x28)
	class UAtomPrimitiveGeometry : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x2C0]; // 0x28(0x2C0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomPrimitiveGeometry");
			return ret;
		}

		UStaticMesh ToSimplifiedStaticMesh(float Scale, UObject Outer, FString Name, bool bFastBuild); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C40058
		TArray SplitByPolygonGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3FF78
		UAtomPrimitiveGeometry SetVertexColor(FColor& Color); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C3FE98
		UAtomPrimitiveGeometry SetTiledUVs(float TileSize); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C3FDB8
		UAtomPrimitiveGeometry SetMaterialName(FString Name, int32_t PolygonGroupIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C3FCD8
		int32_t GetNumberOfCommonPartLODs(FString ExportStyleName, EAtomCommonPartType CommonPartType, FString CommonPartsMeshPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C3FBF8
		TArray GetMaterialNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3FB18
		int32_t GetBoneIndexForName(FString BoneName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3FA38
		UAtomPrimitiveGeometry DuplicateGeometry(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414C3F958
		UAtomPrimitiveGeometry CreateEmptyAtomGeometry(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C3F878
		UAtomPrimitiveGeometry CreateAtomGeometryFromCommonPart(FString ExportStyleName, EAtomCommonPartType CommonPartType, int32_t LODIndex, FString CommonPartsMeshPath); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C3F798
		UAtomPrimitiveGeometry CopyNormalMapsToUV0(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C3F6B8
		UAtomPrimitiveGeometry BakeTransforms(TArray& Transforms); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C3F5D8
		UAtomPrimitiveGeometry BakeTransform(FTransform3f& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C3F4F8
		UAtomPrimitiveGeometry BakeScale(float Scale); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C3F418
		void AttachVerticesToNamedBone(FString BoneName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C3F338
		void AttachVerticesToBoneIndex(int32_t BoneIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C3F258
		UAtomPrimitiveGeometry AppendAndWeld(UAtomPrimitiveGeometry GeometryToAppend, FTransform3f& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C3F178
		UAtomPrimitiveGeometry Append(UAtomPrimitiveGeometry GeometryToAppend, FTransform3f& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C3F098
	};


	// Class AtomRuntime.AtomPrimitiveGeometryContainer
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class UAtomPrimitiveGeometryContainer : public UObject	
	{
	public:
		TWeakObjectPtr SourceMesh; // 0x28(0x20)
		FName ExportStyleName; // 0x48(0x4)
		int32_t LOD; // 0x4C(0x4)
		TMap GeometryCount; // 0x50(0x50)
		FString AlphaMaskTextureName; // 0xA0(0x10)
		FString NormalMapTextureName; // 0xB0(0x10)
		unsigned char UnknownData01_7[0x50]; // 0xC0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomPrimitiveGeometryContainer");
			return ret;
		}

		FAtomPrimitiveCollisionGeometry MakePrimitiveCollisionGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C41398
		bool HasCollisionGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C412B8
		FAtomPrimitiveGeometryAndTransform GetShellGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C411D8
		FAtomPrimitiveGeometryAndTransform GetScaledShellGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C410F8
		UAtomPrimitiveGeometry GetScaledGeometry(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity, float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C41018
		TArray GetScaledDetailsGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40F38
		TArray GetScaledCollisionGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40E58
		TArray GetScaledCapsGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40D78
		TArray GetPartsGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40C98
		TArray GetOtherCapsGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40BB8
		FString GetNormalMapTextureName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C40AD8
		int32_t GetLOD(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C409F8
		UAtomPrimitiveGeometry GetGeometryWithMaterialNames(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity, FString ShellMaterial, FString UndersideMaterial); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40918
		UAtomPrimitiveGeometry GetGeometrySectionWithMaterialNames(int32_t PrimitiveGeometrySectionFlags, FString ShellMaterial, FString UndersideMaterial); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40838
		UAtomPrimitiveGeometry GetGeometrySection(int32_t PrimitiveGeometrySectionFlag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40758
		UAtomPrimitiveGeometry GetGeometry(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40678
		FString GetExportStyleName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C40598
		TArray GetDetailsGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C404B8
		TArray GetDefaultBoneTransforms(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C403D8
		TArray GetCollisionGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C402F8
		TArray GetCapsGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C40218
		FString GetAlphaMaskTextureName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C40138
	};


	// Class AtomRuntime.AtomRuntimeBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomRuntimeBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomRuntimeBlueprintLibrary");
			return ret;
		}

		FAtomColorInfo GetInfoForColorId(int32_t ColorId); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C41A98
		void GetCommonPartDescriptionFromType(EAtomCommonPartType CommonPartType, FAtomCommonPartDescription& OutDescription); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C419B8
		EAtomCommonPartCategory GetCommonPartCategoryFromType(EAtomCommonPartType CommonPartType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C418D8
		void GetCommonPartAssetDescriptionFromStaticMesh(UStaticMesh StaticMesh, FAtomCommonPartAssetDescription& OutDescription, EGetCommonPartDescriptionResult& OutIsValid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C417F8
		float GetBitPackForLUTMaterial(int32_t ColorId, FGuid& PrimitiveUUID, int32_t VariantId); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C41718
		int32_t GetBitPackForColorId(int32_t AtomColorId); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C41638
		int32_t GetBitPackForColor(FColor& Color); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C41558
		TMap GetAllColorInfo(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C41478
	};


	// Class AtomRuntime.AtomRuntimeSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UAtomRuntimeSettings : public UDeveloperSettings	
	{
	public:
		float PrimitiveGlobalScale; // 0x30(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr ColorDataTableOverride; // 0x38(0x20)
		bool bEnableWorldConnectivity; // 0x58(0x1)
		bool bCookContent; // 0x59(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomRuntimeSettings");
			return ret;
		}

		UDataTable GetColorDataTable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C41B78
	};


	// Class AtomRuntime.WorldConnectivitySubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UWorldConnectivitySubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.WorldConnectivitySubsystem");
			return ret;
		}

		void UnregisterConnectivityActor(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C42EB8
		bool TryConnectObjectAtLocation(FWorldConnectivityHandle ObjectToConnect, FTransform& DesiredObjectTransform, TArray& ConnectionCandidates, bool PerformConnection); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C42DD8
		TArray RunPlanarConnectivityQuery(AActor AtomActorToPlace, AActor AtomActorToConnect, FVector& QueryStartLocation, FVector& QueryEndLocation, TEnumAsByte QueryCollisionChannel, int32_t QueryRadius, bool bPerformConnectionOnSuccess); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C42CF8
		void RegisterModelActor(AActor Actor, FSerializedConnectivityObjects& Connections); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C42C18
		void RegisterCustomConnectivityActor(AActor Actor, FSerializedConnectivityObjects& ConnectivityObject); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C42B38
		bool RegisterConnectivityActor(AActor Actor, UAtomModel Model); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C42A58
		bool RegisterAtomActor(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C42978
		double PlanarGridStepSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C42898
		FTransform GetTransform(FWorldConnectivityHandle Handle); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C427B8
		TArray GetPlanarFields(FWorldConnectivityHandle Handle, EConnectionFieldGender Type); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C426D8
		FVector GetPlanarFieldCenter(FPlanarFieldInfo& Field); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C425F8
		FVector GetOverlapPenetrationDepth(AStaticMeshActor Actor1, AStaticMeshActor Actor2, FVector Offset); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414C42518
		TArray GetConnectivityHandles(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C42438
		FWorldConnectivityHandle GetConnectivityHandle(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C42358
		TArray GetConnectedObjectsRecursively(FWorldConnectivityHandle Object); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C42278
		TArray GetConnectedObjects(FWorldConnectivityHandle Object); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C42198
		FPlanarFieldInfo GetClosestFieldToPoint(FWorldConnectivityHandle Handle, FVector& WorldLocation, EConnectionFieldGender Type, bool& bSuccess); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C420B8
		UAtomModelAssetUserData GetAtomModelAssetUserData(UObject Object); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C41FD8
		UAtomModel GetAtomModel(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C41EF8
		AActor GetActor(FWorldConnectivityHandle Handle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C41E18
		void DisconnectObjects(FWorldConnectivityHandle ObjectA, FWorldConnectivityHandle ObjectB); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C41D38
		void DisconnectAllObjectConnections(FWorldConnectivityHandle Object); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C41C58
	};


	// Class AtomRuntime.WorldConnectivityBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWorldConnectivityBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.WorldConnectivityBlueprintLibrary");
			return ret;
		}

		bool IsValid(FWorldConnectivityHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C43238
		FTransform GetTransform(UObject WorldContext, FWorldConnectivityHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C43158
		void GetFieldCenter(UObject WorldContext, FPlanarFieldInfo& Field); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414C43078
		void GetActor(); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C42F98
	};


	// Class AtomRuntime.AtomColorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UAtomColorComponent : public UActorComponent	
	{
	public:
		UAtomColorLUTAtlas ColorLUTAtlas; // 0xA0(0x8)
		UTexture2D ColorLUTTexture; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomColorComponent");
			return ret;
		}

		int32_t GetColorLUTIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C43318
	};


	// Class AtomRuntime.AtomISMPoolRenderer
	// Inherited from UObject
	// Size: 0xD8 (0x100 - 0x28)
	class UAtomISMPoolRenderer : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UGeometryCollectionISMPoolComponent CachedISMPoolComponent; // 0x38(0x8)
		UGeometryCollectionISMPoolComponent LocalISMPoolComponent; // 0x40(0x8)
		unsigned char UnknownData03_7[0xB8]; // 0x48(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomISMPoolRenderer");
			return ret;
		}
	};


	// Class AtomRuntime.AtomModel
	// Inherited from UObject
	// Size: 0x220 (0x248 - 0x28)
	class UAtomModel : public UObject	
	{
	public:
		FAtomModelAssetSettings Settings; // 0x28(0x28)
		TArray Primitives; // 0x50(0x10)
		TArray Elements; // 0x60(0x10)
		TArray SelectionSets; // 0x70(0x10)
		TArray Groups; // 0x80(0x10)
		TMap CommonPartOverrides; // 0x90(0x50)
		char CommonPartOptimization; // 0xE0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		FSerializedConnectivityObjects SerializedConnectivityObjects; // 0xE8(0x20)
		TMap TextureNameToAsset; // 0x108(0x50)
		unsigned char UnknownData03_6[0x50]; // 0x158(0x50) UNKNOWN PROPERTY
		FAtomSourceModel SourceModel; // 0x1A8(0xA0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModel");
			return ret;
		}

		UTexture GetTextureForDecorationTextureName(FString TextureName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C43938
		void GetPrimitivesForChildArray(int32_t InChildIdx, TArray& OutPrimitives); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C43858
		FAtomModelPartsCollection GetPartsCollection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C43778
		FString GetModelPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C43698
		FString GetModelName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C435B8
		TArray GetGeneratedMergedMeshes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C434D8
		FString GetChildIdentifier(int32_t InChildIdx); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C433F8
	};


	// Class AtomRuntime.AtomModelComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x2A0 - 0x220)
	class UAtomModelComponent : public USceneComponent	
	{
	public:
		UAtomModel AtomModel; // 0x220(0x8)
		EAtomModelInstanceType InstanceType; // 0x228(0x1)
		bool bUseCombinedMeshes; // 0x229(0x1)
		EAtomMaterialColorSource MaterialColorSource; // 0x22A(0x1)
		bool bCreateRigidElements; // 0x22B(0x1)
		bool bEnableConnectivity; // 0x22C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x22D(0x3) UNKNOWN PROPERTY
		FName SelectionSetFilter; // 0x230(0x4)
		char CommonPartOptimization; // 0x234(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x235(0x3) UNKNOWN PROPERTY
		TArray RigidElementComponents; // 0x238(0x10)
		TMap ComponentToPrimitive; // 0x248(0x50)
		EPrimitiveGeometryComplexity PrimitiveGeometryComplexity; // 0x298(0x1)
		bool bShowCommonParts; // 0x299(0x1)
		unsigned char UnknownData05_7[0x6]; // 0x29A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelComponent");
			return ret;
		}

		bool ModelSupportsMaterialInstancePayload(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C43A18
	};


	// Class AtomRuntime.AtomPrimitiveComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x5C0 - 0x590)
	class UAtomPrimitiveComponent : public UStaticMeshComponent	
	{
	public:
		UAtomPrimitive AtomPrimitive; // 0x590(0x8)
		FString RenderStyle; // 0x598(0x10)
		FString FallbackRenderStyle; // 0x5A8(0x10)
		bool bUseCombinedMeshes; // 0x5B8(0x1)
		bool bUseRenderStyle; // 0x5B9(0x1)
		bool bUseFallbackRenderStyle; // 0x5BA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x5BB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomPrimitiveComponent");
			return ret;
		}
	};


	// Class AtomRuntime.AtomModelProcessor
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UAtomModelProcessor : public UObject	
	{
	public:
		bool bEnableRebuildProgress; // 0x28(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float DialogDelay; // 0x2C(0x4)
		int32_t NumProgressSteps; // 0x30(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FString ProgressMessage; // 0x38(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelProcessor");
			return ret;
		}

		FAtomProcessorResult OnProcessPrimitive(UAtomModel DummyModel, UAtomPrimitive Primitive, FAtomModelPartsCollection& AtomModelPartsCollection, FAtomOnProcessPrimitiveSettings& Settings); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414C43F58
		FAtomProcessorResult OnProcessModel(UAtomModel Model, FAtomModelPartsCollection& AtomModelPartsCollection, TArray& ExistingObjects); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414C43E78
		FString OnGetTargetAssetPath(UAtomModel Model, UAtomPrimitive Primitive, FAtomModelPartsCollection& AtomModelPartsCollection); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414C43D98
		FString OnGetProcessPrimitiveTargetAssetPath(UAtomModel Model, UAtomPrimitive Primitive, FAtomModelPartsCollection& AtomModelPartsCollection, FAtomOnProcessPrimitiveSettings& Settings); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414C43CB8
		FString OnGetProcessModelTargetAssetPath(UAtomModel Model, FAtomModelPartsCollection& AtomModelPartsCollection); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414C43BD8
		void IncrementProgress(int32_t NumSteps, FString Message); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C43AF8
	};


	// Class AtomRuntime.AtomProcessorBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomProcessorBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomProcessorBlueprintLibrary");
			return ret;
		}

		void SetModelProcessor(FAtomModelProcessorInstance& ProcessorInstance, UAtomModelProcessor ModelProcessor, bool bUseCustomSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C443B8
		bool IsValid(FAtomModelProcessorInstance& ProcessorInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C442D8
		UClass GetProcessorClass(FAtomModelProcessorInstance& ProcessorInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C441F8
		UAtomModelProcessor GetModelProcessor(FAtomModelProcessorInstance& ProcessorInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C44118
		FAtomProcessorResult AppendAtomProcessorResult(FAtomProcessorResult& Result, FAtomProcessorResult& ResultToAppend); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C44038
	};


	// Class AtomRuntime.AtomPrimitive
	// Inherited from UObject
	// Size: 0x1D8 (0x200 - 0x28)
	class UAtomPrimitive : public UObject	
	{
	public:
		int32_t PartId; // 0x28(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString PartRevision; // 0x30(0x10)
		FName DesignName; // 0x40(0x4)
		bool bIsFlex; // 0x44(0x1)
		bool bIsVariant; // 0x45(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x46(0x2) UNKNOWN PROPERTY
		TArray DecorationSurfaceNames; // 0x48(0x10)
		int32_t NumberOfColorSurfaces; // 0x58(0x4)
		EAtomPlatform AtomPlatform; // 0x5C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		int32_t AtomMainGroupId; // 0x60(0x4)
		int32_t AtomSubMainGroupId; // 0x64(0x4)
		TMap PrimitiveCommonParts; // 0x68(0x50)
		TMap CommonParts; // 0xB8(0x50)
		bool bOverrideConnectionFields; // 0x108(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x109(0x7) UNKNOWN PROPERTY
		FBoxSphereBounds Bounds; // 0x110(0x38)
		FBoxSphereBounds UnscaledBounds; // 0x148(0x38)
		TArray GeometryContainers; // 0x180(0x10)
		TArray DetailTextures; // 0x190(0x10)
		FConnectionFieldContainer ConnectionFields; // 0x1A0(0x30)
		FConnectionFieldContainer ConnectionFieldsOverride; // 0x1D0(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomPrimitive");
			return ret;
		}

		UTexture LoadDetailTextureForExportStyle(FString ExportStyle, EAtomPrimitiveDetailTextureType TextureType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C44AB8
		bool IsFlexElement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C449D8
		FName GetSubMainGroupName(int32_t SubMainGroupId); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C448F8
		FName GetMainGroupName(int32_t MainGroupId); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C44818
		UAtomPrimitiveGeometryContainer GetGeometryContainerForExportStyle(FString ExportStyleName, FString FallbackExportStyleName, int32_t LODIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C44738
		UAtomPrimitiveGeometryContainer GetGeometryContainerForBestExportStyle(TArray& GeometryStylePriorityList, int32_t LODIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C44658
		int32_t GetDecorationSurfaceIndex(FString SurfaceName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C44578
		FBoxSphereBounds GetBounds(float Scale); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C44498
	};

}
