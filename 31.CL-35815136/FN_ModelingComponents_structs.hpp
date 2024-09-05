#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ModelingComponents
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ModelingComponents.ModelingToolsAxisFilter
	// Size: 0x3 (0x3 - 0x0)
	struct FModelingToolsAxisFilter	
	{
	public:
		bool bAxisX; // 0x0(0x1)
		bool bAxisY; // 0x1(0x1)
		bool bAxisZ; // 0x2(0x1)
	};


	// Struct ModelingComponents.ModelingToolsColorChannelFilter
	// Size: 0x4 (0x4 - 0x0)
	struct FModelingToolsColorChannelFilter	
	{
	public:
		bool bRed; // 0x0(0x1)
		bool bGreen; // 0x1(0x1)
		bool bBlue; // 0x2(0x1)
		bool bAlpha; // 0x3(0x1)
	};


	// Struct ModelingComponents.RenderableTriangleVertex
	// Size: 0x48 (0x48 - 0x0)
	struct FRenderableTriangleVertex	
	{
	public:
		FVector Position; // 0x0(0x18)
		FVector2D UV; // 0x18(0x10)
		FVector Normal; // 0x28(0x18)
		FColor Color; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct ModelingComponents.RenderableTriangle
	// Size: 0xE0 (0xE0 - 0x0)
	struct FRenderableTriangle	
	{
	public:
		UMaterialInterface* Material; // 0x0(0x8)
		FRenderableTriangleVertex Vertex0; // 0x8(0x48)
		FRenderableTriangleVertex Vertex1; // 0x50(0x48)
		FRenderableTriangleVertex Vertex2; // 0x98(0x48)
	};


	// Struct ModelingComponents.CreateMeshObjectParams
	// Size: 0x670 (0x670 - 0x0)
	struct FCreateMeshObjectParams	
	{
	public:
		UPrimitiveComponent* SourceComponent; // 0x0(0x8)
		ECreateObjectTypeHint TypeHint; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		UClass* TypeHintClass; // 0x10(0x8)
		int32_t TypeHintExtended; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UWorld* TargetWorld; // 0x20(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x30(0x60)
		FString BaseName; // 0x90(0x10)
		TArray<UMaterialInterface*> Materials; // 0xA0(0x10)
		TArray<UMaterialInterface*> AssetMaterials; // 0xB0(0x10)
		bool bEnableCollision; // 0xC0(0x1)
		TEnumAsByte<ECollisionTraceFlag> CollisionMode; // 0xC1(0x1)
		unsigned char UnknownData03_6[0x5E]; // 0xC2(0x5E) UNKNOWN PROPERTY
		bool bEnableRaytracingSupport; // 0x120(0x1)
		bool bGenerateLightmapUVs; // 0x121(0x1)
		bool bEnableRecomputeNormals; // 0x122(0x1)
		bool bEnableRecomputeTangents; // 0x123(0x1)
		bool bEnableNanite; // 0x124(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x125(0x3) UNKNOWN PROPERTY
		float NaniteProxyTrianglePercent; // 0x128(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FMeshNaniteSettings NaniteSettings; // 0x130(0x40)
		unsigned char UnknownData06_7[0x500]; // 0x170(0x500) UNKNOWN PROPERTY
	};


	// Struct ModelingComponents.CreateMeshObjectResult
	// Size: 0x20 (0x20 - 0x0)
	struct FCreateMeshObjectResult	
	{
	public:
		ECreateModelingObjectResult ResultCode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		AActor* NewActor; // 0x8(0x8)
		UPrimitiveComponent* NewComponent; // 0x10(0x8)
		UObject* NewAsset; // 0x18(0x8)
	};


	// Struct ModelingComponents.CreateTextureObjectParams
	// Size: 0x30 (0x30 - 0x0)
	struct FCreateTextureObjectParams	
	{
	public:
		int32_t TypeHintExtended; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UWorld* TargetWorld; // 0x8(0x8)
		UObject* StoreRelativeToObject; // 0x10(0x8)
		FString BaseName; // 0x18(0x10)
		UTexture2D* GeneratedTransientTexture; // 0x28(0x8)
	};


	// Struct ModelingComponents.CreateTextureObjectResult
	// Size: 0x10 (0x10 - 0x0)
	struct FCreateTextureObjectResult	
	{
	public:
		ECreateModelingObjectResult ResultCode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UObject* NewAsset; // 0x8(0x8)
	};


	// Struct ModelingComponents.CreateMaterialObjectParams
	// Size: 0x28 (0x28 - 0x0)
	struct FCreateMaterialObjectParams	
	{
	public:
		UWorld* TargetWorld; // 0x0(0x8)
		UObject* StoreRelativeToObject; // 0x8(0x8)
		FString BaseName; // 0x10(0x10)
		UMaterialInterface* MaterialToDuplicate; // 0x20(0x8)
	};


	// Struct ModelingComponents.CreateMaterialObjectResult
	// Size: 0x10 (0x10 - 0x0)
	struct FCreateMaterialObjectResult	
	{
	public:
		ECreateModelingObjectResult ResultCode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UObject* NewAsset; // 0x8(0x8)
	};


	// Struct ModelingComponents.CreateActorParams
	// Size: 0x90 (0x90 - 0x0)
	struct FCreateActorParams	
	{
	public:
		UWorld* TargetWorld; // 0x0(0x8)
		FString BaseName; // 0x8(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x20(0x60)
		AActor* TemplateActor; // 0x80(0x8)
		UObject* TemplateAsset; // 0x88(0x8)
	};


	// Struct ModelingComponents.CreateActorResult
	// Size: 0x10 (0x10 - 0x0)
	struct FCreateActorResult	
	{
	public:
		ECreateModelingObjectResult ResultCode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		AActor* NewActor; // 0x8(0x8)
	};


	// Struct ModelingComponents.MeshElementSelectionParams
	// Size: 0x48 (0x48 - 0x0)
	struct FMeshElementSelectionParams	
	{
	public:
		unsigned char UnknownData00_7[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* SelectionFillColor; // 0x40(0x8)
	};

}
