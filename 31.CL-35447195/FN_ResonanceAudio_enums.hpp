#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ResonanceAudio
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ResonanceAudio.ERaQualityMode
	enum ERaQualityMode
	{
		ERaQualityMode__STEREO_PANNING = 0,
		ERaQualityMode__BINAURAL_LOW = 1,
		ERaQualityMode__BINAURAL_MEDIUM = 2,
		ERaQualityMode__BINAURAL_HIGH = 3,
	};


	// Enum /Script/ResonanceAudio.ERaSpatializationMethod
	enum ERaSpatializationMethod
	{
		ERaSpatializationMethod__STEREO_PANNING = 0,
		ERaSpatializationMethod__HRTF = 1,
	};


	// Enum /Script/ResonanceAudio.ERaDistanceRolloffModel
	enum ERaDistanceRolloffModel
	{
		ERaDistanceRolloffModel__LOGARITHMIC = 0,
		ERaDistanceRolloffModel__LINEAR = 1,
		ERaDistanceRolloffModel__NONE = 2,
	};


	// Enum /Script/ResonanceAudio.ERaMaterialName
	enum ERaMaterialName
	{
		ERaMaterialName__TRANSPARENT = 0,
		ERaMaterialName__ACOUSTIC_CEILING_TILES = 1,
		ERaMaterialName__BRICK_BARE = 2,
		ERaMaterialName__BRICK_PAINTED = 3,
		ERaMaterialName__CONCRETE_BLOCK_COARSE = 4,
		ERaMaterialName__CONCRETE_BLOCK_PAINTED = 5,
		ERaMaterialName__CURTAIN_HEAVY = 6,
		ERaMaterialName__FIBER_GLASS_INSULATION = 7,
		ERaMaterialName__GLASS_THIN = 8,
		ERaMaterialName__GLASS_THICK = 9,
		ERaMaterialName__GRASS = A,
		ERaMaterialName__LINOLEUM_ON_CONCRETE = B,
		ERaMaterialName__MARBLE = C,
		ERaMaterialName__METAL = D,
		ERaMaterialName__PARQUET_ONCONCRETE = E,
		ERaMaterialName__PLASTER_ROUGH = F,
		ERaMaterialName__PLASTER_SMOOTH = 10,
		ERaMaterialName__PLYWOOD_PANEL = 11,
		ERaMaterialName__POLISHED_CONCRETE_OR_TILE = 12,
		ERaMaterialName__SHEETROCK = 13,
		ERaMaterialName__WATER_OR_ICE_SURFACE = 14,
		ERaMaterialName__WOOD_CEILING = 15,
		ERaMaterialName__WOOD_PANEL = 16,
		ERaMaterialName__UNIFORM = 17,
	};


	// Enum /Script/ResonanceAudio.EResonanceRenderMode
	enum EResonanceRenderMode
	{
		EResonanceRenderMode__StereoPanning = 0,
		EResonanceRenderMode__BinauralLowQuality = 1,
		EResonanceRenderMode__BinauralMediumQuality = 2,
		EResonanceRenderMode__BinauralHighQuality = 3,
		EResonanceRenderMode__RoomEffectsOnly = 4,
	};

}
