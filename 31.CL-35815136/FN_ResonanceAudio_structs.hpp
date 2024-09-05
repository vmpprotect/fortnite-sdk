#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ResonanceAudio
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ResonanceAudio.ResonanceAudioReverbPluginSettings
	// Size: 0x70 (0x70 - 0x0)
	struct FResonanceAudioReverbPluginSettings	
	{
	public:
		bool bEnableRoomEffects; // 0x0(0x1)
		bool bGetTransformFromAudioVolume; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FVector RoomPosition; // 0x8(0x18)
		FQuat RoomRotation; // 0x20(0x20)
		FVector RoomDimensions; // 0x40(0x18)
		ERaMaterialName LeftWallMaterial; // 0x58(0x1)
		ERaMaterialName RightWallMaterial; // 0x59(0x1)
		ERaMaterialName FloorMaterial; // 0x5A(0x1)
		ERaMaterialName CeilingMaterial; // 0x5B(0x1)
		ERaMaterialName FrontWallMaterial; // 0x5C(0x1)
		ERaMaterialName BackWallMaterial; // 0x5D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x5E(0x2) UNKNOWN PROPERTY
		float ReflectionScalar; // 0x60(0x4)
		float ReverbGain; // 0x64(0x4)
		float ReverbTimeModifier; // 0x68(0x4)
		float ReverbBrightness; // 0x6C(0x4)
	};

}
