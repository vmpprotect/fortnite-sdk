#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LocalFileNetworkReplayStreaming
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/LocalFileNetworkReplayStreaming.ELocalFileReplayResult
	enum ELocalFileReplayResult
	{
		ELocalFileReplayResult__Success = 0,
		ELocalFileReplayResult__InvalidReplayInfo = 1,
		ELocalFileReplayResult__StreamChunkIndexMismatch = 2,
		ELocalFileReplayResult__DecompressBuffer = 3,
		ELocalFileReplayResult__CompressionNotSupported = 4,
		ELocalFileReplayResult__DecryptBuffer = 5,
		ELocalFileReplayResult__EncryptionNotSupported = 6,
		ELocalFileReplayResult__EncryptBuffer = 7,
		ELocalFileReplayResult__CompressBuffer = 8,
		ELocalFileReplayResult__InvalidName = 9,
		ELocalFileReplayResult__FileWriter = A,
		ELocalFileReplayResult__Unknown = B,
	};

}
