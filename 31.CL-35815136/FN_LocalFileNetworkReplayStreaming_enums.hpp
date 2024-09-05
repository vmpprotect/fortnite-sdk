#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LocalFileNetworkReplayStreaming
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
