#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Sounds
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/AudioParameterQueryData.AudioParameterQueryData
	// Size: 0x68 (0x68 - 0x0)
	struct FAudioParameterQueryData	
	{
	public:
		FGameplayTagQuery TagQuery_12_74B441D54446A49EB7F00AAC728B68F0; // 0x0(0x48)
		FName ParameterName_2_0E82F2EF4DD09C9EB9E25D9AD7DB520D; // 0x48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		USoundControlBus* ControlBus_5_0B33E9404596DE8D58698EA40F70C171; // 0x50(0x8)
		FVector2D ControlBusFadeTime_9_E9701E2E4995E4A3C8798FA35536B86E; // 0x58(0x10)
	};


	// Struct /Game/Sounds/Fort_Music/Seasonal/S12/S12_CineTransitionData.S12_CineTransitionData
	// Size: 0xC (0xC - 0x0)
	struct FS12_CineTransitionData	
	{
	public:
		USoundBase* Asset_5_259C55D44FF93843FB335A809DA62A60; // 0x0(0x8)
		float Offset_8_666511AB4581BEDE8FBD39BD6B910118; // 0x8(0x4)
	};

}
