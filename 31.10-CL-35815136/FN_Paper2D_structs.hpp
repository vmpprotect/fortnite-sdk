#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Paper2D
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct Paper2D.IntMargin
	// Size: 0x10 (0x10 - 0x0)
	struct FIntMargin	
	{
	public:
		int32_t Left; // 0x0(0x4)
		int32_t Top; // 0x4(0x4)
		int32_t Right; // 0x8(0x4)
		int32_t Bottom; // 0xC(0x4)
	};


	// Struct Paper2D.SpriteDrawCallRecord
	// Size: 0x140 (0x140 - 0x0)
	struct FSpriteDrawCallRecord	
	{
	public:
		FVector Destination; // 0x0(0x18)
		UTexture* BaseTexture; // 0x18(0x8)
		unsigned char UnknownData00_6[0x30]; // 0x20(0x30) UNKNOWN PROPERTY
		FColor Color; // 0x50(0x4)
		unsigned char UnknownData01_7[0xEC]; // 0x54(0xEC) UNKNOWN PROPERTY
	};


	// Struct Paper2D.SpriteGeometryShape
	// Size: 0x40 (0x40 - 0x0)
	struct FSpriteGeometryShape	
	{
	public:
		ESpriteShapeType ShapeType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FVector2D> Vertices; // 0x8(0x10)
		FVector2D BoxSize; // 0x18(0x10)
		FVector2D BoxPosition; // 0x28(0x10)
		float Rotation; // 0x38(0x4)
		bool bNegativeWinding; // 0x3C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
	};


	// Struct Paper2D.SpriteGeometryCollection
	// Size: 0x30 (0x30 - 0x0)
	struct FSpriteGeometryCollection	
	{
	public:
		TArray<FSpriteGeometryShape> Shapes; // 0x0(0x10)
		TEnumAsByte<ESpritePolygonMode> GeometryType; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t PixelsPerSubdivisionX; // 0x14(0x4)
		int32_t PixelsPerSubdivisionY; // 0x18(0x4)
		bool bAvoidVertexMerging; // 0x1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		float AlphaThreshold; // 0x20(0x4)
		float DetailAmount; // 0x24(0x4)
		float SimplifyEpsilon; // 0x28(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct Paper2D.SpriteAssetInitParameters
	// Size: 0x40 (0x40 - 0x0)
	struct FSpriteAssetInitParameters	
	{
	public:
		unsigned char UnknownData00_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct Paper2D.PaperFlipbookKeyFrame
	// Size: 0x10 (0x10 - 0x0)
	struct FPaperFlipbookKeyFrame	
	{
	public:
		UPaperSprite* Sprite; // 0x0(0x8)
		int32_t FrameRun; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Paper2D.SpriteInstanceData
	// Size: 0x90 (0x90 - 0x0)
	struct FSpriteInstanceData	
	{
	public:
		FMatrix Transform; // 0x0(0x80)
		UPaperSprite* SourceSprite; // 0x80(0x8)
		FColor VertexColor; // 0x88(0x4)
		int32_t MaterialIndex; // 0x8C(0x4)
	};


	// Struct Paper2D.PaperSpriteSocket
	// Size: 0x70 (0x70 - 0x0)
	struct FPaperSpriteSocket	
	{
	public:
		FTransform LocalTransform; // 0x0(0x60)
		FName SocketName; // 0x60(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x64(0xC) UNKNOWN PROPERTY
	};


	// Struct Paper2D.PaperSpriteAtlasSlot
	// Size: 0x38 (0x38 - 0x0)
	struct FPaperSpriteAtlasSlot	
	{
	public:
		TWeakObjectPtr<UPaperSprite*> SpriteRef; // 0x0(0x20)
		int32_t AtlasIndex; // 0x20(0x4)
		int32_t X; // 0x24(0x4)
		int32_t Y; // 0x28(0x4)
		int32_t Width; // 0x2C(0x4)
		int32_t Height; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct Paper2D.PaperTileInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FPaperTileInfo	
	{
	public:
		UPaperTileSet* TileSet; // 0x0(0x8)
		int32_t PackedTileIndex; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Paper2D.PaperTileMetadata
	// Size: 0x40 (0x40 - 0x0)
	struct FPaperTileMetadata	
	{
	public:
		FName UserDataName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FSpriteGeometryCollection CollisionData; // 0x8(0x30)
		char TerrainMembership; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct Paper2D.PaperTileSetTerrain
	// Size: 0x18 (0x18 - 0x0)
	struct FPaperTileSetTerrain	
	{
	public:
		FString TerrainName; // 0x0(0x10)
		int32_t CenterTileIndex; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Paper2D.PaperTerrainMaterialRule
	// Size: 0x38 (0x38 - 0x0)
	struct FPaperTerrainMaterialRule	
	{
	public:
		UPaperSprite* StartCap; // 0x0(0x8)
		TArray<UPaperSprite*> Body; // 0x8(0x10)
		UPaperSprite* EndCap; // 0x18(0x8)
		float MinimumAngle; // 0x20(0x4)
		float MaximumAngle; // 0x24(0x4)
		bool bEnableCollision; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float CollisionOffset; // 0x2C(0x4)
		int32_t DrawOrder; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};

}
