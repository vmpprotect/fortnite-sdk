#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Paper2D
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/Paper2D.ESpriteCollisionMode
	enum ESpriteCollisionMode
	{
		ESpriteCollisionMode__None = 0,
		ESpriteCollisionMode__Use2DPhysics = 1,
		ESpriteCollisionMode__Use3DPhysics = 2,
	};


	// Enum /Script/Paper2D.ESpriteShapeType
	enum ESpriteShapeType
	{
		ESpriteShapeType__Box = 0,
		ESpriteShapeType__Circle = 1,
		ESpriteShapeType__Polygon = 2,
	};


	// Enum /Script/Paper2D.ESpritePolygonMode
	enum ESpritePolygonMode
	{
		ESpritePolygonMode__SourceBoundingBox = 0,
		ESpritePolygonMode__TightBoundingBox = 1,
		ESpritePolygonMode__ShrinkWrapped = 2,
		ESpritePolygonMode__FullyCustom = 3,
		ESpritePolygonMode__Diced = 4,
	};


	// Enum /Script/Paper2D.ESpritePivotMode
	enum ESpritePivotMode
	{
		ESpritePivotMode__Top_Left = 0,
		ESpritePivotMode__Top_Center = 1,
		ESpritePivotMode__Top_Right = 2,
		ESpritePivotMode__Center_Left = 3,
		ESpritePivotMode__Center_Center = 4,
		ESpritePivotMode__Center_Right = 5,
		ESpritePivotMode__Bottom_Left = 6,
		ESpritePivotMode__Bottom_Center = 7,
		ESpritePivotMode__Bottom_Right = 8,
		ESpritePivotMode__Custom = 9,
	};


	// Enum /Script/Paper2D.EFlipbookCollisionMode
	enum EFlipbookCollisionMode
	{
		EFlipbookCollisionMode__NoCollision = 0,
		EFlipbookCollisionMode__FirstFrameCollision = 1,
		EFlipbookCollisionMode__EachFrameCollision = 2,
	};


	// Enum /Script/Paper2D.EPaperSpriteAtlasPadding
	enum EPaperSpriteAtlasPadding
	{
		EPaperSpriteAtlasPadding__DilateBorder = 0,
		EPaperSpriteAtlasPadding__PadWithZero = 1,
	};


	// Enum /Script/Paper2D.ETileMapProjectionMode
	enum ETileMapProjectionMode
	{
		ETileMapProjectionMode__Orthogonal = 0,
		ETileMapProjectionMode__IsometricDiamond = 1,
		ETileMapProjectionMode__IsometricStaggered = 2,
		ETileMapProjectionMode__HexagonalStaggered = 3,
	};

}
