#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AESGCMHandlerComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
