#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AtomRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AtomRuntime.AtomActorConnectivityResolver
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomActorConnectivityResolver : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomActorConnectivityResolver");
			return ret;
		}
	};


	// Class AtomRuntime.AtomActorConnectivityResolverRegistry
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UAtomActorConnectivityResolverRegistry : public UDeveloperSettings	
	{
	public:
		TArray<UClass*> Resolvers; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomActorConnectivityResolverRegistry");
			return ret;
		}
	};


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
		UTexture2D* AtlasTexture; // 0x28(0x8)
		TArray<UTexture2D*> Textures; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomColorLUTAtlas");
			return ret;
		}

		int32_t GetLUTIndex(UTexture2D* InTexture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABEB18(relative to base address)
		int32_t GetAtlasSize(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABEAC0(relative to base address)
		int32_t FindOrAddLUTIndex(UTexture2D* InTexture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABE974(relative to base address)
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
		UAtomModel* AtomModel; // 0x290(0x8)
		FString PrimitiveStyleName; // 0x298(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelActor");
			return ret;
		}
	};


	// Class AtomRuntime.AtomModelActorConnectivityResolver
	// Inherited from UAtomActorConnectivityResolver -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomModelActorConnectivityResolver : public UAtomActorConnectivityResolver	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelActorConnectivityResolver");
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
		TArray<FName> Tags; // 0x48(0x10)

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
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomCommonPartModelAssetUserData");
			return ret;
		}
	};


	// Class AtomRuntime.AtomAssetUserDataActorConnectivityResolver
	// Inherited from UAtomActorConnectivityResolver -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAtomAssetUserDataActorConnectivityResolver : public UAtomActorConnectivityResolver	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomAssetUserDataActorConnectivityResolver");
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

		void SetName(FAtomModelPartsCollection& PartsCollection, FString Name); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750ABF778(relative to base address)
		void ReplacePartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartInstanceInfo& SourcePartInstance, FAtomModelPartGuid& TargetPartInstanceId); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750ABF5FC(relative to base address)
		void RemovePartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartGuid& PartInstanceId); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750ABF4E8(relative to base address)
		bool PrimitiveHasConsistentCommonPartStyles(UAtomPrimitive* Primitive); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750ABF468(relative to base address)
		FAtomModelPartsCollection InitializeCommonParts(FAtomModelPartsCollection& PartsCollection, UAtomModel* Model, float Scale, int32_t CommonPartOptimizationFlags); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750ABF150(relative to base address)
		TArray GetPrimitiveCommonParts(UAtomPrimitive* Primitive, double Scale); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750ABEE2C(relative to base address)
		TArray GetParts(FAtomModelPartsCollection& PartsCollection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABED64(relative to base address)
		FString GetName(FAtomModelPartsCollection& PartsCollection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABEC88(relative to base address)
		int32_t GetModelPartGuidHash(FAtomModelPartGuid& InModelPartGuid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABEBC8(relative to base address)
		FAtomModelPartsCollection FilterTransparent(FAtomModelPartsCollection& PartsCollectionToFilter, FString NewPartsCollectionName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABE7AC(relative to base address)
		FAtomModelPartsCollection FilterSelectionSet(FAtomModelPartsCollection& PartsCollectionToFilter, FString SelectionSetName, FString NewPartsCollectionName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABE504(relative to base address)
		FAtomModelPartsCollection FilterNonTransparent(FAtomModelPartsCollection& PartsCollectionToFilter, FString NewPartsCollectionName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABE33C(relative to base address)
		FAtomModelPartsCollection FilterGroup(UAtomModel* Model, FAtomModelPartsCollection& PartsCollectionToFilter, FString GroupName, FString NewPartsCollectionName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABE060(relative to base address)
		FAtomModelPartsCollection FilterCommonPartsToStyle(FAtomModelPartsCollection& PartsCollection, FName GeometryStyle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750ABDEC4(relative to base address)
		FAtomModelPartColorInfo CreateColorInfoFromColorId(int32_t ColorId); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750ABDE10(relative to base address)
		FAtomModelPartGuid Conv_StringToModelPartGuid(FString InString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABDD4C(relative to base address)
		FString Conv_ModelPartGuidToString(FAtomModelPartGuid& InModelPartGuid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABDC98(relative to base address)
		void AddPartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartInstanceInfo& PartInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750ABDB68(relative to base address)
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

		float GetDefaultPrimitiveScale(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750ABEAF0(relative to base address)
	};


	// Class AtomRuntime.AtomPrimitiveGeometry
	// Inherited from UObject
	// Size: 0x2C0 (0x2E8 - 0x28)
	class UAtomPrimitiveGeometry : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x2C0]; // 0x28(0x2C0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomPrimitiveGeometry");
			return ret;
		}

		UStaticMesh ToSimplifiedStaticMesh(float Scale, UObject* Outer, FString Name, bool bFastBuild); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC26CC(relative to base address)
		TArray SplitByPolygonGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC2660(relative to base address)
		UAtomPrimitiveGeometry SetVertexColor(FColor& Color); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750AC25C8(relative to base address)
		UAtomPrimitiveGeometry SetTiledUVs(float TileSize); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AC2538(relative to base address)
		UAtomPrimitiveGeometry SetMaterialName(FString Name, int32_t PolygonGroupIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AC2454(relative to base address)
		int32_t GetNumberOfCommonPartLODs(FString ExportStyleName, EAtomCommonPartType CommonPartType, FString CommonPartsMeshPath); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1DE4(relative to base address)
		TArray GetMaterialNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC1D5C(relative to base address)
		int32_t GetBoneIndexForName(FString BoneName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC12D8(relative to base address)
		UAtomPrimitiveGeometry DuplicateGeometry(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF750AC0EEC(relative to base address)
		UAtomPrimitiveGeometry CreateEmptyAtomGeometry(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750AC0E98(relative to base address)
		UAtomPrimitiveGeometry CreateAtomGeometryFromCommonPart(FString ExportStyleName, EAtomCommonPartType CommonPartType, int32_t LODIndex, FString CommonPartsMeshPath); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750AC0D50(relative to base address)
		UAtomPrimitiveGeometry CopyNormalMapsToUV0(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AC0D2C(relative to base address)
		UAtomPrimitiveGeometry BakeTransforms(TArray<FTransform3f>& Transforms); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750AC0C80(relative to base address)
		UAtomPrimitiveGeometry BakeTransform(FTransform3f& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750AC0BB4(relative to base address)
		UAtomPrimitiveGeometry BakeScale(float Scale); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AC0B24(relative to base address)
		void AttachVerticesToNamedBone(FString BoneName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AC0A64(relative to base address)
		void AttachVerticesToBoneIndex(int32_t BoneIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AC09E4(relative to base address)
		UAtomPrimitiveGeometry AppendAndWeld(UAtomPrimitiveGeometry* GeometryToAppend, FTransform3f& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750AC0844(relative to base address)
		UAtomPrimitiveGeometry Append(UAtomPrimitiveGeometry* GeometryToAppend, FTransform3f& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750AC06F4(relative to base address)
	};


	// Class AtomRuntime.AtomPrimitiveGeometryContainer
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class UAtomPrimitiveGeometryContainer : public UObject	
	{
	public:
		TWeakObjectPtr<UStaticMesh*> SourceMesh; // 0x28(0x20)
		FName ExportStyleName; // 0x48(0x4)
		int32_t LOD; // 0x4C(0x4)
		TMap<FString, int32_t> GeometryCount; // 0x50(0x50)
		FString AlphaMaskTextureName; // 0xA0(0x10)
		FString NormalMapTextureName; // 0xB0(0x10)
		unsigned char UnknownData00_7[0x50]; // 0xC0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomPrimitiveGeometryContainer");
			return ret;
		}

		FAtomPrimitiveCollisionGeometry MakePrimitiveCollisionGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC239C(relative to base address)
		bool HasCollisionGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC2378(relative to base address)
		FAtomPrimitiveGeometryAndTransform GetShellGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC2308(relative to base address)
		FAtomPrimitiveGeometryAndTransform GetScaledShellGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC2254(relative to base address)
		UAtomPrimitiveGeometry GetScaledGeometry(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity, float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC2190(relative to base address)
		TArray GetScaledDetailsGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC20E8(relative to base address)
		TArray GetScaledCollisionGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC2040(relative to base address)
		TArray GetScaledCapsGeometry(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1F98(relative to base address)
		TArray GetPartsGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1F4C(relative to base address)
		TArray GetOtherCapsGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1F00(relative to base address)
		FString GetNormalMapTextureName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC1D98(relative to base address)
		int32_t GetLOD(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D3C(relative to base address)
		UAtomPrimitiveGeometry GetGeometryWithMaterialNames(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity, FString ShellMaterial, FString UndersideMaterial); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1B34(relative to base address)
		UAtomPrimitiveGeometry GetGeometrySectionWithMaterialNames(int32_t PrimitiveGeometrySectionFlags, FString ShellMaterial, FString UndersideMaterial); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC19BC(relative to base address)
		UAtomPrimitiveGeometry GetGeometrySection(int32_t PrimitiveGeometrySectionFlag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1910(relative to base address)
		UAtomPrimitiveGeometry GetGeometry(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1864(relative to base address)
		FString GetExportStyleName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC181C(relative to base address)
		TArray GetDetailsGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC17D0(relative to base address)
		TArray GetDefaultBoneTransforms(float Scale); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC172C(relative to base address)
		TArray GetCollisionGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC13E0(relative to base address)
		TArray GetCapsGeometry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1394(relative to base address)
		FString GetAlphaMaskTextureName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC0FCC(relative to base address)
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

		FAtomColorInfo GetInfoForColorId(int32_t ColorId); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750AC1CB0(relative to base address)
		void GetCommonPartDescriptionFromType(EAtomCommonPartType CommonPartType, FAtomCommonPartDescription& OutDescription); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1640(relative to base address)
		EAtomCommonPartCategory GetCommonPartCategoryFromType(EAtomCommonPartType CommonPartType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC15C0(relative to base address)
		void GetCommonPartAssetDescriptionFromStaticMesh(UStaticMesh* StaticMesh, FAtomCommonPartAssetDescription& OutDescription, EGetCommonPartDescriptionResult& OutIsValid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750AC1440(relative to base address)
		float GetBitPackForLUTMaterial(int32_t ColorId, FGuid& PrimitiveUUID, int32_t VariantId); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750AC1168(relative to base address)
		int32_t GetBitPackForColorId(int32_t AtomColorId); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750AC10B0(relative to base address)
		int32_t GetBitPackForColor(FColor& Color); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AC1018(relative to base address)
		TMap GetAllColorInfo(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750AC0F28(relative to base address)
	};


	// Class AtomRuntime.AtomRuntimeSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UAtomRuntimeSettings : public UDeveloperSettings	
	{
	public:
		float PrimitiveGlobalScale; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UDataTable*> ColorDataTableOverride; // 0x38(0x20)
		bool bEnableWorldConnectivity; // 0x58(0x1)
		bool bCookContent; // 0x59(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomRuntimeSettings");
			return ret;
		}

		UDataTable GetColorDataTable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AC141C(relative to base address)
	};


	// Class AtomRuntime.PointingDeviceConnectivityPlacementTool
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPointingDeviceConnectivityPlacementTool : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.PointingDeviceConnectivityPlacementTool");
			return ret;
		}
	};


	// Class AtomRuntime.FieldBasedPointingDeviceConnectivityPlacementTool
	// Inherited from UPointingDeviceConnectivityPlacementTool -> UObject
	// Size: 0x158 (0x180 - 0x28)
	class UFieldBasedPointingDeviceConnectivityPlacementTool : public UPointingDeviceConnectivityPlacementTool	
	{
	public:
		FCollisionProfileName CollisionProfileName; // 0x28(0x4)
		TEnumAsByte<ECollisionChannel> CollisionChannel; // 0x2C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		TArray<TEnumAsByte> CollisionObjectTypes; // 0x30(0x10)
		double LineTraceLength; // 0x40(0x8)
		UWorld* TargetWorld; // 0x48(0x8)
		unsigned char UnknownData01_7[0x130]; // 0x50(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.FieldBasedPointingDeviceConnectivityPlacementTool");
			return ret;
		}
	};


	// Class AtomRuntime.WorldConnectivitySubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x150 (0x180 - 0x30)
	class UWorldConnectivitySubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x150]; // 0x30(0x150) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.WorldConnectivitySubsystem");
			return ret;
		}

		void UnregisterConnectivityActor(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD83C8(relative to base address)
		bool TryConnectObjectAtLocation(FWorldConnectivityHandle ObjectToConnect, FTransform& DesiredObjectTransform, TArray<FWorldConnectivityHandle>& ConnectionCandidates, bool PerformConnection); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750AD8090(relative to base address)
		TArray RunPlanarConnectivityQuery(AActor* AtomActorToPlace, AActor* AtomActorToConnect, FVector& QueryStartLocation, FVector& QueryEndLocation, TEnumAsByte<ECollisionChannel> QueryCollisionChannel, int32_t QueryRadius, bool bPerformConnectionOnSuccess); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750AD770C(relative to base address)
		void RegisterModelActor(AActor* Actor, FSerializedConnectivityObjects& Connections); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750AD7458(relative to base address)
		void RegisterCustomConnectivityActor(AActor* Actor, FSerializedConnectivityObjects& ConnectivityObject); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750AD7458(relative to base address)
		bool RegisterConnectivityActor(AActor* Actor, UAtomModel* Model); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD7398(relative to base address)
		bool RegisterAtomActor(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD7308(relative to base address)
		double PlanarGridStepSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD72E8(relative to base address)
		FTransform GetTransform(FWorldConnectivityHandle Handle); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD6E38(relative to base address)
		TArray GetPlanarFields(FWorldConnectivityHandle Handle, EConnectionFieldGender Type); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD68F4(relative to base address)
		FVector GetPlanarFieldCenter(FPlanarFieldInfo& Field); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AD6818(relative to base address)
		FVector GetOverlapPenetrationDepth(AStaticMeshActor* Actor1, AStaticMeshActor* Actor2, FVector Offset); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750AD6510(relative to base address)
		TArray GetConnectivityHandles(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD5CEC(relative to base address)
		FWorldConnectivityHandle GetConnectivityHandle(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD5C44(relative to base address)
		TArray GetConnectedObjectsRecursively(FWorldConnectivityHandle Object); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD5B0C(relative to base address)
		TArray GetConnectedObjects(FWorldConnectivityHandle Object); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD59D4(relative to base address)
		FPlanarFieldInfo GetClosestFieldToPoint(FWorldConnectivityHandle Handle, FVector& WorldLocation, EConnectionFieldGender Type, bool& bSuccess); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750AD5630(relative to base address)
		UAtomModelAssetUserData GetAtomModelAssetUserData(UObject* Object); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD53AC(relative to base address)
		UAtomModel GetAtomModel(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD52F0(relative to base address)
		AActor GetActor(FWorldConnectivityHandle Handle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD51D0(relative to base address)
		void DisconnectObjects(FWorldConnectivityHandle ObjectA, FWorldConnectivityHandle ObjectB); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD4EF0(relative to base address)
		void DisconnectAllObjectConnections(FWorldConnectivityHandle Object); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD4DDC(relative to base address)
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

		bool IsValid(FWorldConnectivityHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7500520D4(relative to base address)
		FTransform GetTransform(UObject* WorldContext, FWorldConnectivityHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AD6CE8(relative to base address)
		FVector GetFieldCenter(UObject* WorldContext, FPlanarFieldInfo& Field); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AD5E30(relative to base address)
		AActor GetActor(UObject* WorldContext, FWorldConnectivityHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750AD50D8(relative to base address)
	};


	// Class AtomRuntime.AtomColorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UAtomColorComponent : public UActorComponent	
	{
	public:
		UAtomColorLUTAtlas* ColorLUTAtlas; // 0xA0(0x8)
		UTexture2D* ColorLUTTexture; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomColorComponent");
			return ret;
		}

		int32_t GetColorLUTIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD59B0(relative to base address)
	};


	// Class AtomRuntime.AtomISMPoolRenderer
	// Inherited from UObject
	// Size: 0xD8 (0x100 - 0x28)
	class UAtomISMPoolRenderer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UGeometryCollectionISMPoolComponent* CachedISMPoolComponent; // 0x38(0x8)
		UGeometryCollectionISMPoolComponent* LocalISMPoolComponent; // 0x40(0x8)
		unsigned char UnknownData01_7[0xB8]; // 0x48(0xB8) UNKNOWN PROPERTY

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
		TArray<FAtomModelPrimitive> Primitives; // 0x50(0x10)
		TArray<FAtomHingedElement> Elements; // 0x60(0x10)
		TArray<FAtomModelSelectionSet> SelectionSets; // 0x70(0x10)
		TArray<FAtomModelConfigurationGroup> Groups; // 0x80(0x10)
		TMap<EAtomCommonPartType, TWeakObjectPtr> CommonPartOverrides; // 0x90(0x50)
		char CommonPartOptimization; // 0xE0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		FSerializedConnectivityObjects SerializedConnectivityObjects; // 0xE8(0x20)
		TMap<FString, TWeakObjectPtr> TextureNameToAsset; // 0x108(0x50)
		unsigned char UnknownData01_6[0x50]; // 0x158(0x50) UNKNOWN PROPERTY
		FAtomSourceModel SourceModel; // 0x1A8(0xA0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModel");
			return ret;
		}

		UTexture GetTextureForDecorationTextureName(FString TextureName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD6C48(relative to base address)
		void GetPrimitivesForChildArray(int32_t InChildIdx, TArray<FAtomModelPrimitiveInstance>& OutPrimitives); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F4541A4(relative to base address)
		FAtomModelPartsCollection GetPartsCollection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD67B4(relative to base address)
		FString GetModelPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD63B0(relative to base address)
		FString GetModelName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD6370(relative to base address)
		TArray GetGeneratedMergedMeshes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD5F74(relative to base address)
		FString GetChildIdentifier(int32_t InChildIdx); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD559C(relative to base address)
	};


	// Class AtomRuntime.AtomModelComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x2A0 - 0x220)
	class UAtomModelComponent : public USceneComponent	
	{
	public:
		UAtomModel* AtomModel; // 0x220(0x8)
		EAtomModelInstanceType InstanceType; // 0x228(0x1)
		bool bUseCombinedMeshes; // 0x229(0x1)
		EAtomMaterialColorSource MaterialColorSource; // 0x22A(0x1)
		bool bCreateRigidElements; // 0x22B(0x1)
		bool bEnableConnectivity; // 0x22C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x22D(0x3) UNKNOWN PROPERTY
		FName SelectionSetFilter; // 0x230(0x4)
		char CommonPartOptimization; // 0x234(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x235(0x3) UNKNOWN PROPERTY
		TArray<USceneComponent*> RigidElementComponents; // 0x238(0x10)
		TMap<FName, FModelPrimitiveEntry> ComponentToPrimitive; // 0x248(0x50)
		EPrimitiveGeometryComplexity PrimitiveGeometryComplexity; // 0x298(0x1)
		bool bShowCommonParts; // 0x299(0x1)
		unsigned char UnknownData02_7[0x6]; // 0x29A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelComponent");
			return ret;
		}

		bool ModelSupportsMaterialInstancePayload(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD727C(relative to base address)
	};


	// Class AtomRuntime.AtomPrimitiveComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x5C0 - 0x590)
	class UAtomPrimitiveComponent : public UStaticMeshComponent	
	{
	public:
		UAtomPrimitive* AtomPrimitive; // 0x590(0x8)
		FString RenderStyle; // 0x598(0x10)
		FString FallbackRenderStyle; // 0x5A8(0x10)
		bool bUseCombinedMeshes; // 0x5B8(0x1)
		bool bUseRenderStyle; // 0x5B9(0x1)
		bool bUseFallbackRenderStyle; // 0x5BA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x5BB(0x5) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float DialogDelay; // 0x2C(0x4)
		int32_t NumProgressSteps; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FString ProgressMessage; // 0x38(0x10)
		unsigned char UnknownData02_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomModelProcessor");
			return ret;
		}

		FAtomProcessorResult OnProcessPrimitive(UAtomModel* DummyModel, UAtomPrimitive* Primitive, FAtomModelPartsCollection& AtomModelPartsCollection, FAtomOnProcessPrimitiveSettings& Settings); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FAtomProcessorResult OnProcessModel(UAtomModel* Model, FAtomModelPartsCollection& AtomModelPartsCollection, TArray<TWeakObjectPtr>& ExistingObjects); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FString OnGetTargetAssetPath(UAtomModel* Model, UAtomPrimitive* Primitive, FAtomModelPartsCollection& AtomModelPartsCollection); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FString OnGetProcessPrimitiveTargetAssetPath(UAtomModel* Model, UAtomPrimitive* Primitive, FAtomModelPartsCollection& AtomModelPartsCollection, FAtomOnProcessPrimitiveSettings& Settings); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FString OnGetProcessModelTargetAssetPath(UAtomModel* Model, FAtomModelPartsCollection& AtomModelPartsCollection); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IncrementProgress(int32_t NumSteps, FString Message); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750AD6F80(relative to base address)
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

		void SetModelProcessor(FAtomModelProcessorInstance& ProcessorInstance, UAtomModelProcessor* ModelProcessor, bool bUseCustomSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750AD7E18(relative to base address)
		bool IsValid(FAtomModelProcessorInstance& ProcessorInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750AD70C4(relative to base address)
		UClass GetProcessorClass(FAtomModelProcessorInstance& ProcessorInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750AD6AEC(relative to base address)
		UAtomModelProcessor GetModelProcessor(FAtomModelProcessorInstance& ProcessorInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750AD6414(relative to base address)
		FAtomProcessorResult AppendAtomProcessorResult(FAtomProcessorResult& Result, FAtomProcessorResult& ResultToAppend); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750AD4C44(relative to base address)
	};


	// Class AtomRuntime.AtomPrimitive
	// Inherited from UObject
	// Size: 0x1F8 (0x220 - 0x28)
	class UAtomPrimitive : public UObject	
	{
	public:
		int32_t PartId; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString PartRevision; // 0x30(0x10)
		FName DesignName; // 0x40(0x4)
		bool bIsFlex; // 0x44(0x1)
		bool bIsVariant; // 0x45(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x46(0x2) UNKNOWN PROPERTY
		TArray<FString> DecorationSurfaceNames; // 0x48(0x10)
		int32_t NumberOfColorSurfaces; // 0x58(0x4)
		EAtomPlatform AtomPlatform; // 0x5C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		int32_t AtomMainGroupId; // 0x60(0x4)
		int32_t AtomSubMainGroupId; // 0x64(0x4)
		TMap<EAtomCommonPartType, FAtomPrimitiveCommonPart> PrimitiveCommonParts; // 0x68(0x50)
		bool bOverrideConnectionFields; // 0xB8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FBoxSphereBounds UnscaledBounds; // 0xC0(0x38)
		unsigned char UnknownData04_6[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		FAtomPrimitivePhysicsAttributes PhysicsAttributes; // 0x100(0xA0)
		TArray<UAtomPrimitiveGeometryContainer*> GeometryContainers; // 0x1A0(0x10)
		TArray<FAtomPrimitiveDetailTextureData> DetailTextures; // 0x1B0(0x10)
		FConnectionFieldContainer ConnectionFields; // 0x1C0(0x30)
		FConnectionFieldContainer ConnectionFieldsOverride; // 0x1F0(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AtomRuntime.AtomPrimitive");
			return ret;
		}

		UTexture LoadDetailTextureForExportStyle(FString ExportStyle, EAtomPrimitiveDetailTextureType TextureType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD7198(relative to base address)
		bool IsFlexElement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD70B0(relative to base address)
		FName GetSubMainGroupName(int32_t SubMainGroupId); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750AD6BC4(relative to base address)
		FName GetMainGroupName(int32_t MainGroupId); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750AD62EC(relative to base address)
		UAtomPrimitiveGeometryContainer GetGeometryContainerForExportStyle(FString ExportStyleName, FString FallbackExportStyleName, int32_t LODIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD61AC(relative to base address)
		UAtomPrimitiveGeometryContainer GetGeometryContainerForBestExportStyle(TArray<FString>& GeometryStylePriorityList, int32_t LODIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD6004(relative to base address)
		int32_t GetDecorationSurfaceIndex(FString SurfaceName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD5D94(relative to base address)
		FVector GetCenterOfMass(float Scale); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD54E0(relative to base address)
		FBoxSphereBounds GetBounds(float Scale); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750AD542C(relative to base address)
	};

}
