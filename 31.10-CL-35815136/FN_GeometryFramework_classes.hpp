#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_3[0x20]; // 0x4F8(0x20) UNKNOWN PROPERTY
		bool bExplicitShowWireframe; // 0x518(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x519(0x3) UNKNOWN PROPERTY
		FLinearColor WireframeColor; // 0x51C(0x10)
		EDynamicMeshComponentColorOverrideMode ColorMode; // 0x52C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x52D(0x3) UNKNOWN PROPERTY
		FColor ConstantColor; // 0x530(0x4)
		EDynamicMeshVertexColorTransformMode ColorSpaceMode; // 0x534(0x1)
		bool bEnableFlatShading; // 0x535(0x1)
		bool bEnableViewModeOverrides; // 0x536(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x537(0x1) UNKNOWN PROPERTY
		UMaterialInterface* OverrideRenderMaterial; // 0x538(0x8)
		UMaterialInterface* SecondaryRenderMaterial; // 0x540(0x8)
		unsigned char UnknownData04_6[0x1]; // 0x548(0x1) UNKNOWN PROPERTY
		bool bEnableRayTracing; // 0x549(0x1)
		EDynamicMeshDrawPath DrawPath; // 0x54A(0x1)
		EDynamicMeshComponentDistanceFieldMode DistanceFieldMode; // 0x54B(0x1)
		unsigned char UnknownData05_6[0x4]; // 0x54C(0x4) UNKNOWN PROPERTY
		TArray<UMaterialInterface*> BaseMaterials; // 0x550(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.BaseDynamicMeshComponent");
			return ret;
		}

		void SetViewModeOverridesEnabled(bool bEnabled); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB8CC(relative to base address)
		void SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode NewMode); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB848(relative to base address)
		void SetShadowsEnabled(bool bEnabled); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB744(relative to base address)
		void SetSecondaryRenderMaterial(UMaterialInterface* Material); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB6C0(relative to base address)
		void SetSecondaryBuffersVisibility(bool bSetVisible); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB63C(relative to base address)
		void SetOverrideRenderMaterial(UMaterialInterface* Material); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB5B8(relative to base address)
		void SetMeshDrawPath(EDynamicMeshDrawPath NewDrawPath); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB534(relative to base address)
		void SetEnableWireframeRenderPass(bool bEnable); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB4B0(relative to base address)
		void SetEnableRaytracing(bool bSetEnabled); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB42C(relative to base address)
		void SetEnableFlatShading(bool bEnable); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB3A8(relative to base address)
		void SetDistanceFieldMode(EDynamicMeshComponentDistanceFieldMode NewDistFieldMode); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB200(relative to base address)
		void SetConstantOverrideColor(FColor NewColor); // Flags: RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750ABB004(relative to base address)
		void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABAEBC(relative to base address)
		bool HasOverrideRenderMaterial(int32_t K); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA9FC(relative to base address)
		bool GetViewModeOverridesEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA9D4(relative to base address)
		EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA9AC(relative to base address)
		bool GetShadowsEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E53D140(relative to base address)
		UMaterialInterface GetSecondaryRenderMaterial(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA940(relative to base address)
		bool GetSecondaryBuffersVisibility(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA918(relative to base address)
		UMaterialInterface GetOverrideRenderMaterial(int32_t MaterialIndex); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA884(relative to base address)
		EDynamicMeshDrawPath GetMeshDrawPath(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA85C(relative to base address)
		bool GetFlatShadingEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA834(relative to base address)
		bool GetEnableWireframeRenderPass(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA80C(relative to base address)
		bool GetEnableRaytracing(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA7E4(relative to base address)
		UDynamicMesh GetDynamicMesh(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABA7BC(relative to base address)
		EDynamicMeshComponentDistanceFieldMode GetDistanceFieldMode(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA794(relative to base address)
		FColor GetConstantOverrideColor(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA764(relative to base address)
		EDynamicMeshComponentColorOverrideMode GetColorOverrideMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA718(relative to base address)
		void ClearSecondaryRenderMaterial(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABA528(relative to base address)
		void ClearOverrideRenderMaterial(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABA510(relative to base address)
	};


	// Class GeometryFramework.DynamicMeshComponent
	// Inherited from UBaseDynamicMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x330 (0x890 - 0x560)
	class UDynamicMeshComponent : public UBaseDynamicMeshComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x560(0x8) UNKNOWN PROPERTY
		UDynamicMesh* MeshObject; // 0x568(0x8)
		unsigned char UnknownData01_6[0x140]; // 0x570(0x140) UNKNOWN PROPERTY
		EDynamicMeshComponentTangentsMode TangentsType; // 0x6B0(0x1)
		unsigned char UnknownData02_6[0xFF]; // 0x6B1(0xFF) UNKNOWN PROPERTY
		TEnumAsByte<ECollisionTraceFlag> CollisionType; // 0x7B0(0x1)
		bool bUseAsyncCooking; // 0x7B1(0x1)
		bool bEnableComplexCollision; // 0x7B2(0x1)
		bool bDeferCollisionUpdates; // 0x7B3(0x1)
		unsigned char UnknownData03_6[0x4]; // 0x7B4(0x4) UNKNOWN PROPERTY
		UBodySetup* MeshBodySetup; // 0x7B8(0x8)
		unsigned char UnknownData04_6[0x38]; // 0x7C0(0x38) UNKNOWN PROPERTY
		FKAggregateGeom AggGeom; // 0x7F8(0x80)
		TArray<UBodySetup*> AsyncBodySetupQueue; // 0x878(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x888(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.DynamicMeshComponent");
			return ret;
		}

		bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB9D4(relative to base address)
		void UpdateCollision(bool bOnlyIfPending); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB950(relative to base address)
		void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB7C8(relative to base address)
		void SetDynamicMesh(UDynamicMesh* NewMesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB284(relative to base address)
		void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABB114(relative to base address)
		void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABAF40(relative to base address)
		void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABAAB4(relative to base address)
		void NotifyMeshModified(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F40B91C(relative to base address)
		EDynamicMeshComponentTangentsMode GetTangentsTypePure(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA968(relative to base address)
		EDynamicMeshComponentTangentsMode GetTangentsType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA968(relative to base address)
		void EnableComplexAsSimpleCollision(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABA6C4(relative to base address)
		void ConfigureMaterialSet(TArray<UMaterialInterface*>& NewMaterialSet, bool bDeleteExtraSlots); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750ABA540(relative to base address)
	};


	// Class GeometryFramework.DynamicMeshActor
	// Inherited from AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class ADynamicMeshActor : public AActor	
	{
	public:
		UDynamicMeshComponent* DynamicMeshComponent; // 0x290(0x8)
		bool bEnableComputeMeshPool; // 0x298(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		UDynamicMeshPool* DynamicMeshPool; // 0x2A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.DynamicMeshActor");
			return ret;
		}

		bool ReleaseComputeMesh(UDynamicMesh* Mesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABAC34(relative to base address)
		void ReleaseAllComputeMeshes(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABAC0C(relative to base address)
		UDynamicMeshComponent GetDynamicMeshComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFEA8(relative to base address)
		UDynamicMeshPool GetComputeMeshPool(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABA740(relative to base address)
		void FreeAllComputeMeshes(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABA6DC(relative to base address)
		UDynamicMesh AllocateComputeMesh(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABA4C0(relative to base address)
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
		unsigned char UnknownData00_3[0x48]; // 0x28(0x48) UNKNOWN PROPERTY
		FMulticastInlineDelegate MeshModifiedBPEvent; // 0x70(0x10)
		unsigned char UnknownData01_6[0x20]; // 0x80(0x20) UNKNOWN PROPERTY
		UDynamicMeshGenerator* MeshGenerator; // 0xA0(0x8)
		bool bEnableMeshGenerator; // 0xA8(0x1)
		unsigned char UnknownData02_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.DynamicMesh");
			return ret;
		}

		UDynamicMesh ResetToCube(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABAD98(relative to base address)
		UDynamicMesh Reset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABAD74(relative to base address)
		bool IsEmpty(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABAA90(relative to base address)
		int32_t GetTriangleCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750ABA98C(relative to base address)
	};


	// Class GeometryFramework.DynamicMeshPool
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UDynamicMeshPool : public UObject	
	{
	public:
		TArray<UDynamicMesh*> CachedMeshes; // 0x28(0x10)
		TArray<UDynamicMesh*> AllCreatedMeshes; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryFramework.DynamicMeshPool");
			return ret;
		}

		void ReturnMesh(UDynamicMesh* Mesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABADD0(relative to base address)
		void ReturnAllMeshes(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABADBC(relative to base address)
		UDynamicMesh RequestMesh(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABAD50(relative to base address)
		void FreeAllMeshes(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750ABA704(relative to base address)
	};

}
