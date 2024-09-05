#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AESGCMHandlerComponent
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/AESGCMHandlerComponent.EAESGCMNetResult
	enum EAESGCMNetResult
	{
		EAESGCMNetResult__Unknown = 0,
		EAESGCMNetResult__Success = 1,
		EAESGCMNetResult__AESMissingIV = 2,
		EAESGCMNetResult__AESMissingAuthTag = 3,
		EAESGCMNetResult__AESMissingPayload = 4,
		EAESGCMNetResult__AESDecryptionFailed = 5,
		EAESGCMNetResult__AESZeroLastByte = 6,
	};

}
