#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MovieSceneTracks
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/MovieSceneTracks.MovieScene3DPathSection_Axis
	enum MovieScene3DPathSection_Axis
	{
		MovieScene3DPathSection_Axis__X = 0,
		MovieScene3DPathSection_Axis__Y = 1,
		MovieScene3DPathSection_Axis__Z = 2,
		MovieScene3DPathSection_Axis__NEG_X = 3,
		MovieScene3DPathSection_Axis__NEG_Y = 4,
		MovieScene3DPathSection_Axis__NEG_Z = 5,
	};


	// Enum /Script/MovieSceneTracks.ELevelVisibility
	enum ELevelVisibility
	{
		ELevelVisibility__Visible = 0,
		ELevelVisibility__Hidden = 1,
	};


	// Enum /Script/MovieSceneTracks.EParticleKey
	enum EParticleKey
	{
		EParticleKey__Activate = 0,
		EParticleKey__Deactivate = 1,
		EParticleKey__Trigger = 2,
	};


	// Enum /Script/MovieSceneTracks.EFireEventsAtPosition
	enum EFireEventsAtPosition
	{
		EFireEventsAtPosition__AtStartOfEvaluation = 0,
		EFireEventsAtPosition__AtEndOfEvaluation = 1,
		EFireEventsAtPosition__AfterSpawn = 2,
	};


	// Enum /Script/MovieSceneTracks.EComponentMaterialType
	enum EComponentMaterialType
	{
		EComponentMaterialType__Empty = 0,
		EComponentMaterialType__IndexedMaterial = 1,
		EComponentMaterialType__OverlayMaterial = 2,
		EComponentMaterialType__DecalMaterial = 3,
		EComponentMaterialType__VolumetricCloudMaterial = 4,
	};

}
