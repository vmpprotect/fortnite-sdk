#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Paper2D
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Paper2D.PaperCharacter
	// Inherited from ACharacter -> APawn -> AActor -> UObject
	// Size: 0x8 (0x620 - 0x618)
	class APaperCharacter : public ACharacter	
	{
	public:
		UPaperFlipbookComponent Sprite; // 0x618(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperCharacter");
			return ret;
		}
	};


	// Class Paper2D.PaperFlipbook
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UPaperFlipbook : public UObject	
	{
	public:
		float FramesPerSecond; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray Keyframes; // 0x30(0x10)
		UMaterialInterface DefaultMaterial; // 0x40(0x8)
		TEnumAsByte CollisionSource; // 0x48(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperFlipbook");
			return ret;
		}

		bool IsValidKeyFrameIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FF8B8
		float GetTotalDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FF7D8
		UPaperSprite GetSpriteAtTime(float Time, bool bClampToEnds); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FF6F8
		UPaperSprite GetSpriteAtFrame(int32_t FrameIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FF618
		int32_t GetNumKeyFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FF538
		int32_t GetNumFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FF458
		int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FF378
	};


	// Class Paper2D.PaperFlipbookActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class APaperFlipbookActor : public AActor	
	{
	public:
		UPaperFlipbookComponent RenderComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperFlipbookActor");
			return ret;
		}
	};


	// Class Paper2D.PaperFlipbookComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x540 - 0x4F8)
	class UPaperFlipbookComponent : public UMeshComponent	
	{
	public:
		UPaperFlipbook SourceFlipbook; // 0x4F8(0x8)
		UMaterialInterface Material; // 0x500(0x8)
		float PlayRate; // 0x508(0x4)
		bool bLooping : 1; // 0x50C:0(0x1)
		bool bReversePlayback : 1; // 0x50C:1(0x1)
		bool bPlaying : 1; // 0x50C:2(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x50D(0x3) UNKNOWN PROPERTY
		float AccumulatedTime; // 0x510(0x4)
		int32_t CachedFrameIndex; // 0x514(0x4)
		FLinearColor SpriteColor; // 0x518(0x10)
		UBodySetup CachedBodySetup; // 0x528(0x8)
		FMulticastInlineDelegate OnFinishedPlaying; // 0x530(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperFlipbookComponent");
			return ret;
		}

		void Stop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414600DB8
		void SetSpriteColor(FLinearColor NewColor); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414600CD8
		void SetPlayRate(float NewRate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414600BF8
		void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414600B18
		void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414600A38
		void SetNewTime(float NewTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414600958
		void SetLooping(bool bNewLooping); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414600878
		bool SetFlipbook(UPaperFlipbook NewFlipbook); // Flags: Native|Public|BlueprintCallable 0x7FF414600798
		void ReverseFromEnd(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146006B8
		void Reverse(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146005D8
		void PlayFromStart(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146004F8
		void Play(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414600418
		void OnRep_SourceFlipbook(UPaperFlipbook OldFlipbook); // Flags: Final|Native|Protected 0x7FF414600338
		bool IsReversing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414600258
		bool IsPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414600178
		bool IsLooping(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414600098
		FLinearColor GetSpriteColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145FFFB8
		float GetPlayRate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FFED8
		int32_t GetPlaybackPositionInFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FFDF8
		float GetPlaybackPosition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FFD18
		int32_t GetFlipbookLengthInFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FFC38
		float GetFlipbookLength(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FFB58
		float GetFlipbookFramerate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145FFA78
		UPaperFlipbook GetFlipbook(); // Flags: Native|Public|BlueprintCallable|BlueprintPure 0x7FF4145FF998
	};


	// Class Paper2D.PaperGroupedSpriteActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class APaperGroupedSpriteActor : public AActor	
	{
	public:
		UPaperGroupedSpriteComponent RenderComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperGroupedSpriteActor");
			return ret;
		}
	};


	// Class Paper2D.PaperGroupedSpriteComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x530 - 0x4F8)
	class UPaperGroupedSpriteComponent : public UMeshComponent	
	{
	public:
		TArray InstanceMaterials; // 0x4F8(0x10)
		TArray PerInstanceSpriteData; // 0x508(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x518(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperGroupedSpriteComponent");
			return ret;
		}

		bool UpdateInstanceTransform(int32_t InstanceIndex, FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4146014B8
		bool UpdateInstanceColor(int32_t InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Flags: Native|Public|HasDefaults|BlueprintCallable 0x7FF4146013D8
		void SortInstancesAlongAxis(FVector WorldSpaceSortAxis); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146012F8
		bool RemoveInstance(int32_t InstanceIndex); // Flags: Native|Public|BlueprintCallable 0x7FF414601218
		bool GetInstanceTransform(int32_t InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414601138
		int32_t GetInstanceCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414601058
		void ClearInstances(); // Flags: Native|Public|BlueprintCallable 0x7FF414600F78
		int32_t AddInstance(FTransform& Transform, UPaperSprite Sprite, bool bWorldSpace, FLinearColor Color); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414600E98
	};


	// Class Paper2D.PaperRuntimeSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPaperRuntimeSettings : public UObject	
	{
	public:
		bool bEnableSpriteAtlasGroups; // 0x28(0x1)
		bool bEnableTerrainSplineEditing; // 0x29(0x1)
		bool bResizeSpriteDataToMatchTextures; // 0x2A(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x2B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperRuntimeSettings");
			return ret;
		}
	};


	// Class Paper2D.PaperSprite
	// Inherited from UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UPaperSprite : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		TArray AdditionalSourceTextures; // 0x38(0x10)
		FVector2D BakedSourceUV; // 0x48(0x10)
		FVector2D BakedSourceDimension; // 0x58(0x10)
		UTexture2D BakedSourceTexture; // 0x68(0x8)
		UMaterialInterface DefaultMaterial; // 0x70(0x8)
		UMaterialInterface AlternateMaterial; // 0x78(0x8)
		TArray Sockets; // 0x80(0x10)
		TEnumAsByte SpriteCollisionDomain; // 0x90(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x91(0x3) UNKNOWN PROPERTY
		float PixelsPerUnrealUnit; // 0x94(0x4)
		UBodySetup BodySetup; // 0x98(0x8)
		int32_t AlternateMaterialSplitIndex; // 0xA0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TArray BakedRenderData; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperSprite");
			return ret;
		}
	};


	// Class Paper2D.PaperSpriteActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class APaperSpriteActor : public AActor	
	{
	public:
		UPaperSpriteComponent RenderComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperSpriteActor");
			return ret;
		}
	};


	// Class Paper2D.PaperSpriteAtlas
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPaperSpriteAtlas : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperSpriteAtlas");
			return ret;
		}
	};


	// Class Paper2D.PaperSpriteBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperSpriteBlueprintLibrary");
			return ret;
		}

		FSlateBrush MakeBrushFromSprite(UPaperSprite Sprite, int32_t Width, int32_t Height); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414601598
	};


	// Class Paper2D.PaperSpriteComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x28 (0x520 - 0x4F8)
	class UPaperSpriteComponent : public UMeshComponent	
	{
	public:
		UPaperSprite SourceSprite; // 0x4F8(0x8)
		UMaterialInterface MaterialOverride; // 0x500(0x8)
		FLinearColor SpriteColor; // 0x508(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x518(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperSpriteComponent");
			return ret;
		}

		void SetSpriteColor(FLinearColor NewColor); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414601838
		bool SetSprite(UPaperSprite NewSprite); // Flags: Native|Public|BlueprintCallable 0x7FF414601758
		UPaperSprite GetSprite(); // Flags: Native|Public|BlueprintCallable|BlueprintPure 0x7FF414601678
	};


	// Class Paper2D.PaperTileLayer
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UPaperTileLayer : public UObject	
	{
	public:
		FText LayerName; // 0x28(0x10)
		int32_t LayerWidth; // 0x38(0x4)
		int32_t LayerHeight; // 0x3C(0x4)
		bool bHiddenInGame : 1; // 0x40:0(0x1)
		bool bLayerCollides : 1; // 0x40:1(0x1)
		bool bOverrideCollisionThickness : 1; // 0x40:2(0x1)
		bool bOverrideCollisionOffset : 1; // 0x40:3(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float CollisionThicknessOverride; // 0x44(0x4)
		float CollisionOffsetOverride; // 0x48(0x4)
		FLinearColor LayerColor; // 0x4C(0x10)
		int32_t AllocatedWidth; // 0x5C(0x4)
		int32_t AllocatedHeight; // 0x60(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		TArray AllocatedCells; // 0x68(0x10)
		UPaperTileSet TileSet; // 0x78(0x8)
		TArray AllocatedGrid; // 0x80(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperTileLayer");
			return ret;
		}
	};


	// Class Paper2D.PaperTileMap
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UPaperTileMap : public UObject	
	{
	public:
		int32_t MapWidth; // 0x28(0x4)
		int32_t MapHeight; // 0x2C(0x4)
		int32_t TileWidth; // 0x30(0x4)
		int32_t TileHeight; // 0x34(0x4)
		float PixelsPerUnrealUnit; // 0x38(0x4)
		float SeparationPerTileX; // 0x3C(0x4)
		float SeparationPerTileY; // 0x40(0x4)
		float SeparationPerLayer; // 0x44(0x4)
		TWeakObjectPtr SelectedTileSet; // 0x48(0x20)
		UMaterialInterface Material; // 0x68(0x8)
		TArray TileLayers; // 0x70(0x10)
		float CollisionThickness; // 0x80(0x4)
		TEnumAsByte SpriteCollisionDomain; // 0x84(0x1)
		TEnumAsByte ProjectionMode; // 0x85(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x86(0x2) UNKNOWN PROPERTY
		int32_t HexSideLength; // 0x88(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		UBodySetup BodySetup; // 0x90(0x8)
		int32_t LayerNameIndex; // 0x98(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperTileMap");
			return ret;
		}
	};


	// Class Paper2D.PaperTileMapActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class APaperTileMapActor : public AActor	
	{
	public:
		UPaperTileMapComponent RenderComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperTileMapActor");
			return ret;
		}
	};


	// Class Paper2D.PaperTileMapComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x550 - 0x4F8)
	class UPaperTileMapComponent : public UMeshComponent	
	{
	public:
		int32_t MapWidth; // 0x4F8(0x4)
		int32_t MapHeight; // 0x4FC(0x4)
		int32_t TileWidth; // 0x500(0x4)
		int32_t TileHeight; // 0x504(0x4)
		UPaperTileSet DefaultLayerTileSet; // 0x508(0x8)
		UMaterialInterface Material; // 0x510(0x8)
		TArray TileLayers; // 0x518(0x10)
		FLinearColor TileMapColor; // 0x528(0x10)
		int32_t UseSingleLayerIndex; // 0x538(0x4)
		bool bUseSingleLayer; // 0x53C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x53D(0x3) UNKNOWN PROPERTY
		UPaperTileMap TileMap; // 0x540(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x548(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperTileMapComponent");
			return ret;
		}

		void SetTileMapColor(FLinearColor NewColor); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146028D8
		bool SetTileMap(UPaperTileMap NewTileMap); // Flags: Native|Public|BlueprintCallable 0x7FF4146027F8
		void SetTile(int32_t X, int32_t Y, int32_t Layer, FPaperTileInfo NewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414602718
		void SetLayerColor(FLinearColor NewColor, int32_t Layer); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414602638
		void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414602558
		void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414602478
		void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414602398
		void RebuildCollision(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146022B8
		bool OwnsTileMap(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146021D8
		void MakeTileMapEditable(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146020F8
		void GetTilePolygon(int32_t TileX, int32_t TileY, TArray& Points, int32_t LayerIndex, bool bWorldSpace); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414602018
		FLinearColor GetTileMapColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414601F38
		FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414601E58
		FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414601D78
		FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414601C98
		void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414601BB8
		FLinearColor GetLayerColor(int32_t Layer); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414601AD8
		void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146019F8
		UPaperTileLayer AddNewLayer(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414601918
	};


	// Class Paper2D.PaperTileSet
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UPaperTileSet : public UObject	
	{
	public:
		FIntPoint TileSize; // 0x28(0x8)
		UTexture2D TileSheet; // 0x30(0x8)
		TArray AdditionalSourceTextures; // 0x38(0x10)
		FIntMargin BorderMargin; // 0x48(0x10)
		FIntPoint PerTileSpacing; // 0x58(0x8)
		FIntPoint DrawingOffset; // 0x60(0x8)
		int32_t WidthInTiles; // 0x68(0x4)
		int32_t HeightInTiles; // 0x6C(0x4)
		int32_t AllocatedWidth; // 0x70(0x4)
		int32_t AllocatedHeight; // 0x74(0x4)
		TArray PerTileData; // 0x78(0x10)
		TArray Terrains; // 0x88(0x10)
		int32_t TileWidth; // 0x98(0x4)
		int32_t TileHeight; // 0x9C(0x4)
		int32_t Margin; // 0xA0(0x4)
		int32_t Spacing; // 0xA4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperTileSet");
			return ret;
		}
	};


	// Class Paper2D.MaterialExpressionSpriteTextureSampler
	// Inherited from UMaterialExpressionTextureSampleParameter2D -> UMaterialExpressionTextureSampleParameter -> UMaterialExpressionTextureSample -> UMaterialExpressionTextureBase -> UMaterialExpression -> UObject
	// Size: 0x18 (0x230 - 0x218)
	class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D	
	{
	public:
		bool bSampleAdditionalTextures; // 0x218(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x219(0x3) UNKNOWN PROPERTY
		int32_t AdditionalSlotIndex; // 0x21C(0x4)
		FText SlotDisplayName; // 0x220(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.MaterialExpressionSpriteTextureSampler");
			return ret;
		}
	};


	// Class Paper2D.PaperTerrainActor
	// Inherited from AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class APaperTerrainActor : public AActor	
	{
	public:
		USceneComponent DummyRoot; // 0x290(0x8)
		UPaperTerrainSplineComponent SplineComponent; // 0x298(0x8)
		UPaperTerrainComponent RenderComponent; // 0x2A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperTerrainActor");
			return ret;
		}
	};


	// Class Paper2D.PaperTerrainComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x520 - 0x4C8)
	class UPaperTerrainComponent : public UPrimitiveComponent	
	{
	public:
		UPaperTerrainMaterial TerrainMaterial; // 0x4C8(0x8)
		bool bClosedSpline; // 0x4D0(0x1)
		bool bFilledSpline; // 0x4D1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x4D2(0x6) UNKNOWN PROPERTY
		UPaperTerrainSplineComponent AssociatedSpline; // 0x4D8(0x8)
		int32_t RandomSeed; // 0x4E0(0x4)
		float SegmentOverlapAmount; // 0x4E4(0x4)
		FLinearColor TerrainColor; // 0x4E8(0x10)
		int32_t ReparamStepsPerSegment; // 0x4F8(0x4)
		TEnumAsByte SpriteCollisionDomain; // 0x4FC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x4FD(0x3) UNKNOWN PROPERTY
		float CollisionThickness; // 0x500(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x504(0x4) UNKNOWN PROPERTY
		UBodySetup CachedBodySetup; // 0x508(0x8)
		unsigned char UnknownData07_7[0x10]; // 0x510(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperTerrainComponent");
			return ret;
		}

		void SetTerrainColor(FLinearColor NewColor); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146029B8
	};


	// Class Paper2D.PaperTerrainMaterial
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UPaperTerrainMaterial : public UDataAsset	
	{
	public:
		TArray Rules; // 0x30(0x10)
		UPaperSprite InteriorFill; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperTerrainMaterial");
			return ret;
		}
	};


	// Class Paper2D.PaperTerrainSplineComponent
	// Inherited from USplineComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x570 - 0x560)
	class UPaperTerrainSplineComponent : public USplineComponent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x560(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.PaperTerrainSplineComponent");
			return ret;
		}
	};


	// Class Paper2D.TileMapBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Paper2D.TileMapBlueprintLibrary");
			return ret;
		}

		FPaperTileInfo MakeTile(int32_t TileIndex, UPaperTileSet TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414602D38
		FName GetTileUserData(FPaperTileInfo Tile); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414602C58
		FTransform GetTileTransform(FPaperTileInfo Tile); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414602B78
		void BreakTile(FPaperTileInfo Tile, int32_t& TileIndex, UPaperTileSet& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414602A98
	};

}
