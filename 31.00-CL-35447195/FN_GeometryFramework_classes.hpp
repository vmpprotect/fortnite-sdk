#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GeometryFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GeometryFramework.MeshCommandChangeTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshCommandChangeTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.MeshCommandChangeTarget");
			return ret;
		}
	};


	// Class GeometryFramework.MeshReplacementCommandChangeTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshReplacementCommandChangeTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.MeshReplacementCommandChangeTarget");
			return ret;
		}
	};


	// Class GeometryFramework.MeshVertexCommandChangeTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshVertexCommandChangeTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.MeshVertexCommandChangeTarget");
			return ret;
		}
	};


	// Class GeometryFramework.BaseDynamicMeshComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x560 - 0x4F8)
	class UBaseDynamicMeshComponent : public UMeshComponent	
	{
	public:
		unsigned char UnknownData06_3[0x20]; // 0x4F8(0x20) UNKNOWN PROPERTY
		bool bExplicitShowWireframe; // 0x518(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x519(0x3) UNKNOWN PROPERTY
		FLinearColor WireframeColor; // 0x51C(0x10)
		EDynamicMeshComponentColorOverrideMode ColorMode; // 0x52C(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x52D(0x3) UNKNOWN PROPERTY
		FColor ConstantColor; // 0x530(0x4)
		EDynamicMeshVertexColorTransformMode ColorSpaceMode; // 0x534(0x1)
		bool bEnableFlatShading; // 0x535(0x1)
		bool bEnableViewModeOverrides; // 0x536(0x1)
		unsigned char UnknownData09_6[0x1]; // 0x537(0x1) UNKNOWN PROPERTY
		UMaterialInterface OverrideRenderMaterial; // 0x538(0x8)
		UMaterialInterface SecondaryRenderMaterial; // 0x540(0x8)
		unsigned char UnknownData10_6[0x1]; // 0x548(0x1) UNKNOWN PROPERTY
		bool bEnableRayTracing; // 0x549(0x1)
		EDynamicMeshDrawPath DrawPath; // 0x54A(0x1)
		EDynamicMeshComponentDistanceFieldMode DistanceFieldMode; // 0x54B(0x1)
		unsigned char UnknownData11_6[0x4]; // 0x54C(0x4) UNKNOWN PROPERTY
		TArray BaseMaterials; // 0x550(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.BaseDynamicMeshComponent");
			return ret;
		}

		void SetViewModeOverridesEnabled(bool bEnabled); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3C5B8
		void SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode NewMode); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3C4D8
		void SetShadowsEnabled(bool bEnabled); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3C3F8
		void SetSecondaryRenderMaterial(UMaterialInterface Material); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3C318
		void SetSecondaryBuffersVisibility(bool bSetVisible); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3C238
		void SetOverrideRenderMaterial(UMaterialInterface Material); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3C158
		void SetMeshDrawPath(EDynamicMeshDrawPath NewDrawPath); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3C078
		void SetEnableWireframeRenderPass(bool bEnable); // Flags: Native|Public|BlueprintCallable 0x7FF414C3BF98
		void SetEnableRaytracing(bool bSetEnabled); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3BEB8
		void SetEnableFlatShading(bool bEnable); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3BDD8
		void SetDistanceFieldMode(EDynamicMeshComponentDistanceFieldMode NewDistFieldMode); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3BCF8
		void SetConstantOverrideColor(FColor NewColor); // Flags: RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF414C3BC18
		void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3BB38
		bool HasOverrideRenderMaterial(int32_t K); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3BA58
		bool GetViewModeOverridesEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B978
		EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B898
		bool GetShadowsEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B7B8
		UMaterialInterface GetSecondaryRenderMaterial(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B6D8
		bool GetSecondaryBuffersVisibility(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B5F8
		UMaterialInterface GetOverrideRenderMaterial(int32_t MaterialIndex); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B518
		EDynamicMeshDrawPath GetMeshDrawPath(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B438
		bool GetFlatShadingEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B358
		bool GetEnableWireframeRenderPass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B278
		bool GetEnableRaytracing(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3B198
		UDynamicMesh GetDynamicMesh(); // Flags: Native|Public|BlueprintCallable 0x7FF414C3B0B8
		EDynamicMeshComponentDistanceFieldMode GetDistanceFieldMode(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3AFD8
		FColor GetConstantOverrideColor(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C3AEF8
		EDynamicMeshComponentColorOverrideMode GetColorOverrideMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3AE18
		void ClearSecondaryRenderMaterial(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3AD38
		void ClearOverrideRenderMaterial(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3AC58
	};


	// Class GeometryFramework.DynamicMeshComponent
	// Inherited from UBaseDynamicMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x330 (0x890 - 0x560)
	class UDynamicMeshComponent : public UBaseDynamicMeshComponent	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0x560(0x8) UNKNOWN PROPERTY
		UDynamicMesh MeshObject; // 0x568(0x8)
		unsigned char UnknownData07_6[0x140]; // 0x570(0x140) UNKNOWN PROPERTY
		EDynamicMeshComponentTangentsMode TangentsType; // 0x6B0(0x1)
		unsigned char UnknownData08_6[0xFF]; // 0x6B1(0xFF) UNKNOWN PROPERTY
		TEnumAsByte CollisionType; // 0x7B0(0x1)
		bool bUseAsyncCooking; // 0x7B1(0x1)
		bool bEnableComplexCollision; // 0x7B2(0x1)
		bool bDeferCollisionUpdates; // 0x7B3(0x1)
		unsigned char UnknownData09_6[0x4]; // 0x7B4(0x4) UNKNOWN PROPERTY
		UBodySetup MeshBodySetup; // 0x7B8(0x8)
		unsigned char UnknownData10_6[0x38]; // 0x7C0(0x38) UNKNOWN PROPERTY
		FKAggregateGeom AggGeom; // 0x7F8(0x80)
		TArray AsyncBodySetupQueue; // 0x878(0x10)
		unsigned char UnknownData11_7[0x8]; // 0x888(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.DynamicMeshComponent");
			return ret;
		}

		bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3D038
		void UpdateCollision(bool bOnlyIfPending); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3CF58
		void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3CE78
		void SetDynamicMesh(UDynamicMesh NewMesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3CD98
		void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3CCB8
		void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3CBD8
		void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3CAF8
		void NotifyMeshModified(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3CA18
		EDynamicMeshComponentTangentsMode GetTangentsTypePure(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414C3C938
		EDynamicMeshComponentTangentsMode GetTangentsType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3C858
		void EnableComplexAsSimpleCollision(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3C778
		void ConfigureMaterialSet(TArray& NewMaterialSet, bool bDeleteExtraSlots); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C3C698
	};


	// Class GeometryFramework.DynamicMeshActor
	// Inherited from AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class ADynamicMeshActor : public AActor	
	{
	public:
		UDynamicMeshComponent DynamicMeshComponent; // 0x290(0x8)
		bool bEnableComputeMeshPool; // 0x298(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		UDynamicMeshPool DynamicMeshPool; // 0x2A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.DynamicMeshActor");
			return ret;
		}

		bool ReleaseComputeMesh(UDynamicMesh Mesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3D578
		void ReleaseAllComputeMeshes(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3D498
		UDynamicMeshComponent GetDynamicMeshComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3D3B8
		UDynamicMeshPool GetComputeMeshPool(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3D2D8
		void FreeAllComputeMeshes(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3D1F8
		UDynamicMesh AllocateComputeMesh(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3D118
	};


	// Class GeometryFramework.DynamicMeshGenerator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDynamicMeshGenerator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.DynamicMeshGenerator");
			return ret;
		}
	};


	// Class GeometryFramework.DynamicMesh
	// Inherited from UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UDynamicMesh : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x48]; // 0x28(0x48) UNKNOWN PROPERTY
		FMulticastInlineDelegate MeshModifiedBPEvent; // 0x70(0x10)
		unsigned char UnknownData04_6[0x20]; // 0x80(0x20) UNKNOWN PROPERTY
		UDynamicMeshGenerator MeshGenerator; // 0xA0(0x8)
		bool bEnableMeshGenerator; // 0xA8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.DynamicMesh");
			return ret;
		}

		UDynamicMesh ResetToCube(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3D8F8
		UDynamicMesh Reset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3D818
		bool IsEmpty(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3D738
		int32_t GetTriangleCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C3D658
	};


	// Class GeometryFramework.DynamicMeshPool
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UDynamicMeshPool : public UObject	
	{
	public:
		TArray CachedMeshes; // 0x28(0x10)
		TArray AllCreatedMeshes; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.DynamicMeshPool");
			return ret;
		}

		void ReturnMesh(UDynamicMesh Mesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3DC78
		void ReturnAllMeshes(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3DB98
		UDynamicMesh RequestMesh(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3DAB8
		void FreeAllMeshes(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C3D9D8
	};

}
