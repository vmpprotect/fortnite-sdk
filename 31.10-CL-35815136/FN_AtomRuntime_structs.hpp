#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AtomRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AtomRuntime.AtomActorConnectivityRegistration
	// Size: 0x60 (0x60 - 0x0)
	struct FAtomActorConnectivityRegistration	
	{
	public:
		unsigned char UnknownData00_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomColorInfo
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FAtomColorInfo : public FTableRowBase	
	{
	public:
		FColor Color; // 0x8(0x4)
		EAtomMaterialType MaterialType; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FString Name; // 0x10(0x10)
		bool bIsActive; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomMergedMeshLODDistanceSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FAtomMergedMeshLODDistanceSettings	
	{
	public:
		bool bOverrideLODScreenSizes; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float BaseLODScreenSize; // 0x4(0x4)
		float BaseLODScreenSizeScaling; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<float> LODDistances; // 0x10(0x10)
	};


	// Struct AtomRuntime.CommonPartInstanceDescription
	// Size: 0x8 (0x8 - 0x0)
	struct FCommonPartInstanceDescription	
	{
	public:
		int16_t MeshIdx; // 0x0(0x2)
		int16_t MaterialIdx; // 0x2(0x2)
		int16_t UUIDIdx; // 0x4(0x2)
		uint16_t ColorId; // 0x6(0x2)
	};


	// Struct AtomRuntime.AtomCommonPartInstancesCache
	// Size: 0x50 (0x50 - 0x0)
	struct FAtomCommonPartInstancesCache	
	{
	public:
		TArray<UStaticMesh*> Meshes; // 0x0(0x10)
		TArray<UMaterialInterface*> Materials; // 0x10(0x10)
		TArray<FGuid> UUIDs; // 0x20(0x10)
		TArray<FCommonPartInstanceDescription> Instances; // 0x30(0x10)
		TArray<FTransform3f> InstanceTransforms; // 0x40(0x10)
	};


	// Struct AtomRuntime.AtomPrimitiveMaterialAssignement
	// Size: 0x30 (0x30 - 0x0)
	struct FAtomPrimitiveMaterialAssignement	
	{
	public:
		FName SlotName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UMaterialInterface*> Material; // 0x8(0x20)
		bool bIsCustomMaterialOverride; // 0x28(0x1)
		bool bHasManualColorSource; // 0x29(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FAtomPrimitiveInstanceData	
	{
	public:
		TArray<FAtomPrimitiveMaterialAssignement> MaterialAssignments; // 0x0(0x10)
		TWeakObjectPtr<UStaticMesh*> MeshOverride; // 0x10(0x20)
	};


	// Struct AtomRuntime.AtomCommonPartAssetDescription
	// Size: 0xC (0xC - 0x0)
	struct FAtomCommonPartAssetDescription	
	{
	public:
		EAtomCommonPartType CommonPartType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName CommonPartStyle; // 0x4(0x4)
		float Scale; // 0x8(0x4)
	};


	// Struct AtomRuntime.AtomModelPartGuid
	// Size: 0x14 (0x14 - 0x0)
	struct FAtomModelPartGuid	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		int32_t PartIndex; // 0x10(0x4)
	};


	// Struct AtomRuntime.AtomModelPartColorInfo
	// Size: 0xC (0xC - 0x0)
	struct FAtomModelPartColorInfo	
	{
	public:
		FColor Color; // 0x0(0x4)
		int32_t ColorId; // 0x4(0x4)
		EAtomMaterialType MaterialType; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelPartDecorationInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FAtomModelPartDecorationInfo	
	{
	public:
		UMaterialInterface* Material; // 0x0(0x8)
		UTexture* Texture; // 0x8(0x8)
		FString PrimitiveSurfaceName; // 0x10(0x10)
		int32_t PrimitiveSurfaceIndex; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomCommonPartAndTransform
	// Size: 0x80 (0x80 - 0x0)
	struct FAtomCommonPartAndTransform	
	{
	public:
		EAtomCommonPartType Type; // 0x0(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x1(0xF) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		TArray<FName> GeometryStyles; // 0x70(0x10)
	};


	// Struct AtomRuntime.AtomModelPartInstanceInfo
	// Size: 0xB0 (0xB0 - 0x0)
	struct FAtomModelPartInstanceInfo	
	{
	public:
		FAtomModelPartGuid PartGuid; // 0x0(0x14)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		int32_t PartId; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UAtomPrimitive* Primitive; // 0x20(0x8)
		TArray<FTransform> Transforms; // 0x28(0x10)
		TArray<FAtomModelPartDecorationInfo> Decorations; // 0x38(0x10)
		TArray<FAtomModelPartColorInfo> Colors; // 0x48(0x10)
		TArray<FString> SelectionSets; // 0x58(0x10)
		FString Group; // 0x68(0x10)
		FString ParentGroup; // 0x78(0x10)
		TArray<FAtomCommonPartAndTransform> CommonParts; // 0x88(0x10)
		bool bIsUndersideVisible; // 0x98(0x1)
		unsigned char UnknownData02_7[0x17]; // 0x99(0x17) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelPartsCollection
	// Size: 0x80 (0x80 - 0x0)
	struct FAtomModelPartsCollection	
	{
	public:
		FString Name; // 0x0(0x10)
		FTransform Pivot; // 0x10(0x60)
		TArray<FAtomModelPartInstanceInfo> Parts; // 0x70(0x10)
	};


	// Struct AtomRuntime.AtomPrimitiveCollisionVolumeBase
	// Size: 0x20 (0x20 - 0x0)
	struct FAtomPrimitiveCollisionVolumeBase	
	{
	public:
		FVector Location; // 0x0(0x18)
		uint16_t BoneIndex; // 0x18(0x2)
		unsigned char UnknownData00_7[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveCollisionVolumeBox
	// Inherited from FAtomPrimitiveCollisionVolumeBase
	// Size: 0x30 (0x50 - 0x20)
	struct FAtomPrimitiveCollisionVolumeBox : public FAtomPrimitiveCollisionVolumeBase	
	{
	public:
		FRotator Rotation; // 0x20(0x18)
		FVector HalfExtent; // 0x38(0x18)
	};


	// Struct AtomRuntime.AtomPrimitiveCollisionVolumeCapsule
	// Inherited from FAtomPrimitiveCollisionVolumeBase
	// Size: 0x20 (0x40 - 0x20)
	struct FAtomPrimitiveCollisionVolumeCapsule : public FAtomPrimitiveCollisionVolumeBase	
	{
	public:
		FRotator Rotation; // 0x20(0x18)
		float Radius; // 0x38(0x4)
		float HalfLength; // 0x3C(0x4)
	};


	// Struct AtomRuntime.AtomPrimitiveCollisionVolumeCylinder
	// Inherited from FAtomPrimitiveCollisionVolumeBase
	// Size: 0x20 (0x40 - 0x20)
	struct FAtomPrimitiveCollisionVolumeCylinder : public FAtomPrimitiveCollisionVolumeBase	
	{
	public:
		FRotator Rotation; // 0x20(0x18)
		float Radius; // 0x38(0x4)
		float HalfLength; // 0x3C(0x4)
	};


	// Struct AtomRuntime.AtomPrimitiveCollisionVolumeTube
	// Inherited from FAtomPrimitiveCollisionVolumeBase
	// Size: 0x28 (0x48 - 0x20)
	struct FAtomPrimitiveCollisionVolumeTube : public FAtomPrimitiveCollisionVolumeBase	
	{
	public:
		FRotator Rotation; // 0x20(0x18)
		float InnerRadius; // 0x38(0x4)
		float OuterRadius; // 0x3C(0x4)
		float HalfLength; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveCollisionVolumeSphere
	// Inherited from FAtomPrimitiveCollisionVolumeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FAtomPrimitiveCollisionVolumeSphere : public FAtomPrimitiveCollisionVolumeBase	
	{
	public:
		float Radius; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveCollisionVolumeContainer
	// Size: 0x50 (0x50 - 0x0)
	struct FAtomPrimitiveCollisionVolumeContainer	
	{
	public:
		TArray<FAtomPrimitiveCollisionVolumeBox> Boxes; // 0x0(0x10)
		TArray<FAtomPrimitiveCollisionVolumeSphere> Spheres; // 0x10(0x10)
		TArray<FAtomPrimitiveCollisionVolumeCapsule> Capsules; // 0x20(0x10)
		TArray<FAtomPrimitiveCollisionVolumeCylinder> Cylinders; // 0x30(0x10)
		TArray<FAtomPrimitiveCollisionVolumeTube> Tubes; // 0x40(0x10)
	};


	// Struct AtomRuntime.AtomPrimitiveCollisionGeometry
	// Size: 0x80 (0x80 - 0x0)
	struct FAtomPrimitiveCollisionGeometry	
	{
	public:
		FKAggregateGeom AggGeom; // 0x0(0x80)
	};


	// Struct AtomRuntime.AtomPrimitiveGeometryLODs
	// Size: 0x98 (0x98 - 0x0)
	struct FAtomPrimitiveGeometryLODs	
	{
	public:
		TArray<UAtomPrimitiveGeometry*> GeometryLODs; // 0x0(0x10)
		UAtomPrimitiveGeometry* HiResNaniteGeomery; // 0x10(0x8)
		FAtomPrimitiveCollisionGeometry Collision; // 0x18(0x80)
	};


	// Struct AtomRuntime.AtomPrimitiveGeometryAndTransform
	// Size: 0x40 (0x40 - 0x0)
	struct FAtomPrimitiveGeometryAndTransform	
	{
	public:
		UAtomPrimitiveGeometry* AtomPrimitiveGeometry; // 0x0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform3f Transform; // 0x10(0x30)
	};


	// Struct AtomRuntime.ConnectionField
	// Size: 0x40 (0x40 - 0x0)
	struct FConnectionField	
	{
	public:
		FQuat Rotation; // 0x0(0x20)
		FVector Location; // 0x20(0x18)
		uint32_t Subtype; // 0x38(0x4)
		uint16_t BoneIndex; // 0x3C(0x2)
		EConnectionFieldType Type; // 0x3E(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x3F(0x1) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectionFieldLine
	// Inherited from FConnectionField
	// Size: 0x10 (0x50 - 0x40)
	struct FConnectionFieldLine : public FConnectionField	
	{
	public:
		double Length; // 0x40(0x8)
		bool StartCapped; // 0x48(0x1)
		bool EndCapped; // 0x49(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectionFieldAxle
	// Inherited from FConnectionFieldLine -> FConnectionField
	// Size: 0x10 (0x60 - 0x50)
	struct FConnectionFieldAxle : public FConnectionFieldLine	
	{
	public:
		bool Grabbing; // 0x50(0x1)
		bool RequireGrabbing; // 0x51(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x52(0x2) UNKNOWN PROPERTY
		float DiscreteSnapInterval; // 0x54(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectionFieldPoint
	// Inherited from FConnectionField
	// Size: 0x0 (0x40 - 0x40)
	struct FConnectionFieldPoint : public FConnectionField	
	{
	public:
	};


	// Struct AtomRuntime.ConnectionFieldBall
	// Inherited from FConnectionFieldPoint -> FConnectionField
	// Size: 0x0 (0x40 - 0x40)
	struct FConnectionFieldBall : public FConnectionFieldPoint	
	{
	public:
	};


	// Struct AtomRuntime.ConnectionFieldContainer
	// Size: 0x30 (0x30 - 0x0)
	struct FConnectionFieldContainer	
	{
	public:
		TArray<FConnectionFieldPlanar> PlanarFields; // 0x0(0x10)
		TArray<FInstancedStruct> LineFields; // 0x10(0x10)
		TArray<FInstancedStruct> PointFields; // 0x20(0x10)
	};


	// Struct AtomRuntime.ConnectionFieldPlanar
	// Inherited from FConnectionField
	// Size: 0x20 (0x60 - 0x40)
	struct FConnectionFieldPlanar : public FConnectionField	
	{
	public:
		char Width; // 0x40(0x1)
		char Height; // 0x41(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
		TArray<FConnectionPoint> Points; // 0x48(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectionPoint
	// Size: 0x8 (0x8 - 0x0)
	struct FConnectionPoint	
	{
	public:
		EConnectionPointFlags Flags; // 0x0(0x4)
		EConnectionPointType Type; // 0x4(0x1)
		char Size; // 0x5(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectionFieldFixed
	// Inherited from FConnectionFieldPoint -> FConnectionField
	// Size: 0x10 (0x50 - 0x40)
	struct FConnectionFieldFixed : public FConnectionFieldPoint	
	{
	public:
		uint32_t Axes; // 0x40(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x44(0xC) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectionFieldGear
	// Inherited from FConnectionFieldLine -> FConnectionField
	// Size: 0x10 (0x60 - 0x50)
	struct FConnectionFieldGear : public FConnectionFieldLine	
	{
	public:
		double Radius; // 0x50(0x8)
		uint32_t ToothCount; // 0x58(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectionFieldHinge
	// Inherited from FConnectionFieldPoint -> FConnectionField
	// Size: 0x30 (0x70 - 0x40)
	struct FConnectionFieldHinge : public FConnectionFieldPoint	
	{
	public:
		bool Oriented; // 0x40(0x1)
		bool Flip; // 0x41(0x1)
		bool HasLimits; // 0x42(0x1)
		bool RequireGrabbing; // 0x43(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		double OrientedMin; // 0x48(0x8)
		double OrientedMax; // 0x50(0x8)
		double FlippedMin; // 0x58(0x8)
		double FlippedMax; // 0x60(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectionFieldSlider
	// Inherited from FConnectionFieldLine -> FConnectionField
	// Size: 0x20 (0x70 - 0x50)
	struct FConnectionFieldSlider : public FConnectionFieldLine	
	{
	public:
		bool Cylindrical; // 0x50(0x1)
		bool HasSpring; // 0x51(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		double SpringRest; // 0x58(0x8)
		double SpringStrength; // 0x60(0x8)
		double SpringDamping; // 0x68(0x8)
	};


	// Struct AtomRuntime.SerializedPlanarConnection
	// Size: 0x30 (0x30 - 0x0)
	struct FSerializedPlanarConnection	
	{
	public:
		FPlanarFieldConnectionInfo Connection; // 0x0(0x20)
		FConnectivityFieldReference FieldA; // 0x20(0x8)
		FConnectivityFieldReference FieldB; // 0x28(0x8)
	};


	// Struct AtomRuntime.ConnectivityFieldReference
	// Size: 0x8 (0x8 - 0x0)
	struct FConnectivityFieldReference	
	{
	public:
		int32_t ObjectId; // 0x0(0x4)
		uint16_t FieldIndex; // 0x4(0x2)
		unsigned char UnknownData00_7[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.FieldConnectionInfo
	// Size: 0x1 (0x1 - 0x0)
	struct FFieldConnectionInfo	
	{
	public:
		EFieldConnectResult ConnectResult; // 0x0(0x1)
	};


	// Struct AtomRuntime.PlanarFieldConnectionInfo
	// Inherited from FFieldConnectionInfo
	// Size: 0x1F (0x20 - 0x1)
	struct FPlanarFieldConnectionInfo : public FFieldConnectionInfo	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FPlanarFieldPointConnectionInfo> PointConnections; // 0x8(0x10)
		uint32_t OverlapA; // 0x18(0x4)
		uint32_t OverlapB; // 0x1C(0x4)
	};


	// Struct AtomRuntime.PlanarFieldPointConnectionInfo
	// Size: 0x4 (0x4 - 0x0)
	struct FPlanarFieldPointConnectionInfo	
	{
	public:
		uint16_t IndexA; // 0x0(0x2)
		uint16_t IndexB; // 0x2(0x2)
	};


	// Struct AtomRuntime.SerializedConnectivityObjects
	// Size: 0x20 (0x20 - 0x0)
	struct FSerializedConnectivityObjects	
	{
	public:
		TArray<FConnectionFieldContainer> Fields; // 0x0(0x10)
		TArray<FSerializedPlanarConnection> PlanarConnections; // 0x10(0x10)
	};


	// Struct AtomRuntime.PlanarFieldPointInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FPlanarFieldPointInfo	
	{
	public:
		FVector PointLocation; // 0x0(0x18)
		EConnectionPointType PointType; // 0x18(0x1)
		bool IsAvailable; // 0x19(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.PlanarFieldInfo
	// Size: 0x90 (0x90 - 0x0)
	struct FPlanarFieldInfo	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		FVector2D Size; // 0x60(0x10)
		EConnectionFieldGender PlanarFieldType; // 0x70(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		TArray<FPlanarFieldPointInfo> PointInfo; // 0x78(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.WorldConnectivityHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FWorldConnectivityHandle	
	{
	public:
		unsigned char UnknownData00_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectivityQueryResult
	// Size: 0xC0 (0xC0 - 0x0)
	struct FConnectivityQueryResult	
	{
	public:
		bool bHasValidConnection; // 0x0(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x1(0xF) UNKNOWN PROPERTY
		FTransform TargetTransformToConnect; // 0x10(0x60)
		FVector HitLocation; // 0x70(0x18)
		FVector OffsetToBestFit; // 0x88(0x18)
		int32_t SourceFieldIndex; // 0xA0(0x4)
		int32_t SourceFieldObjectId; // 0xA4(0x4)
		int32_t SourceFieldConnectionPointIndex; // 0xA8(0x4)
		int32_t TargetFieldIndex; // 0xAC(0x4)
		int32_t TargetFieldObjectId; // 0xB0(0x4)
		int32_t TargetFieldConnectionPointIndex; // 0xB4(0x4)
		FName ErrorMessage; // 0xB8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomColor
	// Size: 0x18 (0x18 - 0x0)
	struct FAtomColor	
	{
	public:
		int32_t ID; // 0x0(0x4)
		EColorEffects Effects; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x8(0x10)
	};


	// Struct AtomRuntime.AtomColorSurface
	// Size: 0x8 (0x8 - 0x0)
	struct FAtomColorSurface	
	{
	public:
		int32_t ColorId; // 0x0(0x4)
		EAtomShaderType ShaderType; // 0x4(0x4)
	};


	// Struct AtomRuntime.AtomDecorationAssignment
	// Size: 0x30 (0x30 - 0x0)
	struct FAtomDecorationAssignment	
	{
	public:
		FString SurfaceName; // 0x0(0x10)
		FString TextureName; // 0x10(0x10)
		FString Version; // 0x20(0x10)
	};


	// Struct AtomRuntime.AtomModelPrimitiveInstance
	// Size: 0x90 (0x90 - 0x0)
	struct FAtomModelPrimitiveInstance	
	{
	public:
		UAtomPrimitive* Primitive; // 0x0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform PrimitiveTransform; // 0x10(0x60)
		FVector PivotOrigin; // 0x70(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelPart
	// Size: 0xB0 (0xB0 - 0x0)
	struct FAtomModelPart	
	{
	public:
		TWeakObjectPtr<UAtomPrimitive*> AtomPrimitive; // 0x0(0x20)
		TWeakObjectPtr<UMaterialInterface*> MaterialInstance; // 0x20(0x20)
		TWeakObjectPtr<UMaterialInterface*> MaterialWithPayload; // 0x40(0x20)
		TArray<FTransform> Transforms; // 0x60(0x10)
		uint32_t PartId; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FString PartRevision; // 0x78(0x10)
		TArray<FAtomColorSurface> ColorSurfaces; // 0x88(0x10)
		TArray<FAtomDecorationAssignment> Decorations; // 0x98(0x10)
		bool bIgnoreCommonPartCulling; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelSocket
	// Size: 0x80 (0x80 - 0x0)
	struct FAtomModelSocket	
	{
	public:
		FGuid ID; // 0x0(0x10)
		FName Name; // 0x10(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x14(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x20(0x60)
	};


	// Struct AtomRuntime.AtomModelPrimitive
	// Size: 0x28 (0x28 - 0x0)
	struct FAtomModelPrimitive	
	{
	public:
		TArray<FAtomModelPart> Parts; // 0x0(0x10)
		int32_t DesignId; // 0x10(0x4)
		FGuid UUID; // 0x14(0x10)
		FName DesignName; // 0x24(0x4)
	};


	// Struct AtomRuntime.AtomBoneReference
	// Size: 0xC (0xC - 0x0)
	struct FAtomBoneReference	
	{
	public:
		int32_t PrimitiveIndex; // 0x0(0x4)
		int32_t PartIndex; // 0x4(0x4)
		int32_t BoneIndex; // 0x8(0x4)
	};


	// Struct AtomRuntime.AtomPrimitiveConnection
	// Size: 0x18 (0x18 - 0x0)
	struct FAtomPrimitiveConnection	
	{
	public:
		FAtomBoneReference From; // 0x0(0xC)
		FAtomBoneReference To; // 0xC(0xC)
	};


	// Struct AtomRuntime.AtomRigidElementConnection
	// Size: 0x80 (0x80 - 0x0)
	struct FAtomRigidElementConnection	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		int32_t OtherElementIndex; // 0x60(0x4)
		int32_t ConnectionUniqueId; // 0x64(0x4)
		TArray<FAtomPrimitiveConnection> PrimitiveConnections; // 0x68(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomRigidElement
	// Size: 0x28 (0x28 - 0x0)
	struct FAtomRigidElement	
	{
	public:
		TArray<FAtomBoneReference> BoneReferences; // 0x0(0x10)
		TArray<FAtomRigidElementConnection> Connections; // 0x10(0x10)
		FName Name; // 0x20(0x4)
		int32_t IndexOfMetaBone; // 0x24(0x4)
	};


	// Struct AtomRuntime.AtomHingedElement
	// Size: 0x18 (0x18 - 0x0)
	struct FAtomHingedElement	
	{
	public:
		TArray<FAtomRigidElement> RigidElements; // 0x0(0x10)
		int32_t HierarchyRootIndex; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelPartReference
	// Size: 0x14 (0x14 - 0x0)
	struct FAtomModelPartReference	
	{
	public:
		FGuid PrimitiveUUID; // 0x0(0x10)
		int32_t PartIndex; // 0x10(0x4)
	};


	// Struct AtomRuntime.AtomGlueSet
	// Size: 0x50 (0x50 - 0x0)
	struct FAtomGlueSet	
	{
	public:
		TSet<FAtomModelPartReference> Entries; // 0x0(0x50)
	};


	// Struct AtomRuntime.AtomPrimitiveGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FAtomPrimitiveGroup	
	{
	public:
		FVector PivotOrigin; // 0x0(0x18)
	};


	// Struct AtomRuntime.AtomModelGeometryOptimizationSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FAtomModelGeometryOptimizationSettings	
	{
	public:
		bool bEnforceLODBudgets; // 0x0(0x1)
		bool bUseTagBudget; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		int32_t TriangleBudget; // 0x4(0x4)
		double SimplifyBaseTolerance; // 0x8(0x8)
		double OptimizeBaseTriCost; // 0x10(0x8)
	};


	// Struct AtomRuntime.AtomSelectionSetPrimitiveGroup
	// Inherited from FAtomPrimitiveGroup
	// Size: 0x8 (0x20 - 0x18)
	struct FAtomSelectionSetPrimitiveGroup : public FAtomPrimitiveGroup	
	{
	public:
		FName SelectionSetName; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelPrimitiveGroup
	// Inherited from FAtomPrimitiveGroup
	// Size: 0x0 (0x18 - 0x18)
	struct FAtomModelPrimitiveGroup : public FAtomPrimitiveGroup	
	{
	public:
	};


	// Struct AtomRuntime.AtomRigidElementIndices
	// Size: 0xC (0xC - 0x0)
	struct FAtomRigidElementIndices	
	{
	public:
		int32_t HingedElementIndex; // 0x0(0x4)
		int32_t RigidElementIndex; // 0x4(0x4)
		int32_t BoneIndex; // 0x8(0x4)
	};


	// Struct AtomRuntime.AtomResolvedModelPartReference
	// Size: 0x18 (0x18 - 0x0)
	struct FAtomResolvedModelPartReference	
	{
	public:
		FAtomBoneReference Indices; // 0x0(0xC)
		FAtomRigidElementIndices ElementIndices; // 0xC(0xC)
	};


	// Struct AtomRuntime.AtomRigidElementSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FAtomRigidElementSettings	
	{
	public:
		FAtomModelPartReference ElementIdentifyingPart; // 0x0(0x14)
		FName RigidElementName; // 0x14(0x4)
		bool MergeWithParentElement; // 0x18(0x1)
		bool ShouldBeRootElement; // 0x19(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelTags
	// Size: 0x10 (0x10 - 0x0)
	struct FAtomModelTags	
	{
	public:
		TArray<FName> Tags; // 0x0(0x10)
	};


	// Struct AtomRuntime.AtomModelAssetSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FAtomModelAssetSettings	
	{
	public:
		float Scale; // 0x0(0x4)
		bool CreateRigidElementComponents; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FAtomModelGeometryOptimizationSettings OptimizationSettings; // 0x8(0x18)
		bool bEnableConnectivity; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelSelectionSet
	// Size: 0x68 (0x68 - 0x0)
	struct FAtomModelSelectionSet	
	{
	public:
		TSet<FGuid> PrimitiveIds; // 0x0(0x50)
		FName SelectionSetName; // 0x50(0x4)
		FName ImportedName; // 0x54(0x4)
		FGuid ID; // 0x58(0x10)
	};


	// Struct AtomRuntime.AtomModelConfigurationGroup
	// Size: 0xF0 (0xF0 - 0x0)
	struct FAtomModelConfigurationGroup	
	{
	public:
		FGuid ID; // 0x0(0x10)
		FName Name; // 0x10(0x4)
		FGuid ParentGroupId; // 0x14(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TSet<FGuid> PrimitiveIds; // 0x28(0x50)
		TArray<FAtomModelSocket> Sockets; // 0x78(0x10)
		bool bHasGroupPivot; // 0x88(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
		FTransform GroupPivot; // 0x90(0x60)
	};


	// Struct AtomRuntime.AtomModelHierarchicalSceneNode
	// Size: 0x90 (0x90 - 0x0)
	struct FAtomModelHierarchicalSceneNode	
	{
	public:
		FString Name; // 0x0(0x10)
		FTransform WorldTransform; // 0x10(0x60)
		int32_t ParentIndex; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TArray<FString> ItemNames; // 0x78(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelHierarchicalScene
	// Size: 0x10 (0x10 - 0x0)
	struct FAtomModelHierarchicalScene	
	{
	public:
		TArray<FAtomModelHierarchicalSceneNode> SceneNodes; // 0x0(0x10)
	};


	// Struct AtomRuntime.AtomSourceModel
	// Size: 0xA0 (0xA0 - 0x0)
	struct FAtomSourceModel	
	{
	public:
		TArray<FAtomModelPrimitive> Primitives; // 0x0(0x10)
		TArray<FAtomHingedElement> Elements; // 0x10(0x10)
		TArray<FAtomModelSelectionSet> SelectionSets; // 0x20(0x10)
		TArray<FAtomGlueSet> GlueSets; // 0x30(0x10)
		TArray<FAtomModelConfigurationGroup> Groups; // 0x40(0x10)
		FBox Bounds; // 0x50(0x38)
		FVector Pivot; // 0x88(0x18)
	};


	// Struct AtomRuntime.AtomModelIssue
	// Size: 0x18 (0x18 - 0x0)
	struct FAtomModelIssue	
	{
	public:
		EAtomIssue Issue; // 0x0(0x4)
		int32_t ID; // 0x4(0x4)
		FString StringData; // 0x8(0x10)
	};


	// Struct AtomRuntime.ModelPrimitiveEntry
	// Size: 0x38 (0x38 - 0x0)
	struct FModelPrimitiveEntry	
	{
	public:
		TWeakObjectPtr<UPrimitiveComponent*> Component; // 0x0(0x20)
		FAtomModelPartReference PartReference; // 0x20(0x14)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomProcessorResult
	// Size: 0x28 (0x28 - 0x0)
	struct FAtomProcessorResult	
	{
	public:
		bool bSuccess; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<UObject*> ProcessedObjects; // 0x8(0x10)
		TArray<UObject*> SharedAssets; // 0x18(0x10)
	};


	// Struct AtomRuntime.AtomOnProcessPrimitiveSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FAtomOnProcessPrimitiveSettings	
	{
	public:
		FString CustomLocation; // 0x0(0x10)
		bool bSupportDecorations; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomModelProcessorInstance
	// Size: 0x28 (0x28 - 0x0)
	struct FAtomModelProcessorInstance	
	{
	public:
		bool bUseCustomSettings; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UAtomModelProcessor* Processor; // 0x8(0x8)
		UAtomModelProcessor* InternalTransientPropStorage; // 0x10(0x8)
		TArray<TWeakObjectPtr> ProcessedObjects; // 0x18(0x10)
	};


	// Struct AtomRuntime.AtomPrimitiveConnectionPointReference
	// Size: 0x4 (0x4 - 0x0)
	struct FAtomPrimitiveConnectionPointReference	
	{
	public:
		int16_t PlanarFieldIndex; // 0x0(0x2)
		int16_t ConnectionPointIndex; // 0x2(0x2)
	};


	// Struct AtomRuntime.AtomCommonPartDescription
	// Size: 0x10 (0x10 - 0x0)
	struct FAtomCommonPartDescription	
	{
	public:
		float Radius; // 0x0(0x4)
		float Height; // 0x4(0x4)
		float InnerRadius; // 0x8(0x4)
		char PlaneQuadrant; // 0xC(0x1)
		bool bShowLogo; // 0xD(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomCommonPartInstance
	// Size: 0x50 (0x50 - 0x0)
	struct FAtomCommonPartInstance	
	{
	public:
		FTransform3f Transform; // 0x0(0x30)
		FAtomPrimitiveConnectionPointReference ConnectionPointReference; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<FName> GeometryStyles; // 0x38(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveCommonPart
	// Size: 0x10 (0x10 - 0x0)
	struct FAtomPrimitiveCommonPart	
	{
	public:
		TArray<FAtomCommonPartInstance> UnscaledInstances; // 0x0(0x10)
	};


	// Struct AtomRuntime.AtomPrimitivePhysicsAttributes
	// Size: 0xA0 (0xA0 - 0x0)
	struct FAtomPrimitivePhysicsAttributes	
	{
	public:
		FMatrix InertiaTensor; // 0x0(0x80)
		FVector CenterOfMass; // 0x80(0x18)
		float Mass; // 0x98(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveUserNote
	// Size: 0x20 (0x20 - 0x0)
	struct FAtomPrimitiveUserNote	
	{
	public:
		FString Text; // 0x0(0x10)
		FString PartRevision; // 0x10(0x10)
	};


	// Struct AtomRuntime.AtomPrimitiveOptimizationSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FAtomPrimitiveOptimizationSettings	
	{
	public:
		EAtomPrimitiveGeoOptimization OptimizationType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		EAtomPrimitiveGeoOptimization_Old GeometryOptions; // 0x4(0x4)
		EAtomPrimitiveApproximationShapeType ApproximationShapeType; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		EAtomPrimitiveApproximationShapeType_Old ApproximationStrategy; // 0xC(0x4)
		bool bUseOptimizationAxisOverride; // 0x10(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FVector ApproximationAxisOverride; // 0x18(0x18)
	};


	// Struct AtomRuntime.AtomPrimitiveStyleImportData
	// Size: 0x28 (0x28 - 0x0)
	struct FAtomPrimitiveStyleImportData	
	{
	public:
		FString Revision; // 0x0(0x10)
		FString SourceDatabase; // 0x10(0x10)
		int32_t ImportWarnings; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveDetailTextureData
	// Size: 0x28 (0x28 - 0x0)
	struct FAtomPrimitiveDetailTextureData	
	{
	public:
		TWeakObjectPtr<UTexture*> Texture; // 0x0(0x20)
		FName Style; // 0x20(0x4)
		EAtomPrimitiveDetailTextureType TextureType; // 0x24(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveBevelOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FAtomPrimitiveBevelOptions	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveBuildOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FAtomPrimitiveBuildOptions	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.AtomPrimitiveBuildSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FAtomPrimitiveBuildSettings	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.ConnectivityFieldConnection
	// Size: 0xC (0xC - 0x0)
	struct FConnectivityFieldConnection	
	{
	public:
		FConnectivityFieldReference Reference; // 0x0(0x8)
		EFieldConnectResult ConnectResult; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.TypedConnectivityFieldReference
	// Inherited from FConnectivityFieldReference
	// Size: 0x4 (0xC - 0x8)
	struct FTypedConnectivityFieldReference : public FConnectivityFieldReference	
	{
	public:
		EConnectionFieldSuperType FieldType; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.LineFieldConnectionInfo
	// Inherited from FFieldConnectionInfo
	// Size: 0x7 (0x8 - 0x1)
	struct FLineFieldConnectionInfo : public FFieldConnectionInfo	
	{
	public:
		bool Flip; // 0x1(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
	};


	// Struct AtomRuntime.PointFieldConnectionInfo
	// Inherited from FFieldConnectionInfo
	// Size: 0xF (0x10 - 0x1)
	struct FPointFieldConnectionInfo : public FFieldConnectionInfo	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		double OneAxisRotation; // 0x8(0x8)
	};


	// Struct AtomRuntime.HingeFieldConnectionInfo
	// Inherited from FPointFieldConnectionInfo -> FFieldConnectionInfo
	// Size: 0x8 (0x18 - 0x10)
	struct FHingeFieldConnectionInfo : public FPointFieldConnectionInfo	
	{
	public:
		bool Flip; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};

}
