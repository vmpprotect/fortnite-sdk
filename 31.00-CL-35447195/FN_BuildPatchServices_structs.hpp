#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BuildPatchServices
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct BuildPatchServices.CustomFieldData
	// Size: 0x20 (0x20 - 0x0)
	struct FCustomFieldData	
	{
	public:
		FString Key; // 0x0(0x10)
		FString Value; // 0x10(0x10)
	};


	// Struct BuildPatchServices.SHAHashData
	// Size: 0x14 (0x14 - 0x0)
	struct FSHAHashData	
	{
	public:
		char Hash; // 0x0(0x14)
	};


	// Struct BuildPatchServices.ChunkInfoData
	// Size: 0x40 (0x40 - 0x0)
	struct FChunkInfoData	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		uint64_t Hash; // 0x10(0x8)
		FSHAHashData ShaHash; // 0x18(0x14)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		int64_t FileSize; // 0x30(0x8)
		char GroupNumber; // 0x38(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct BuildPatchServices.ChunkPartData
	// Size: 0x18 (0x18 - 0x0)
	struct FChunkPartData	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		uint32_t Offset; // 0x10(0x4)
		uint32_t Size; // 0x14(0x4)
	};


	// Struct BuildPatchServices.FileManifestData
	// Size: 0x68 (0x68 - 0x0)
	struct FFileManifestData	
	{
	public:
		FString Filename; // 0x0(0x10)
		FSHAHashData FileHash; // 0x10(0x14)
		unsigned char UnknownData03_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray FileChunkParts; // 0x28(0x10)
		TArray InstallTags; // 0x38(0x10)
		bool bIsUnixExecutable; // 0x48(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FString SymlinkTarget; // 0x50(0x10)
		bool bIsReadOnly; // 0x60(0x1)
		bool bIsCompressed; // 0x61(0x1)
		unsigned char UnknownData05_7[0x6]; // 0x62(0x6) UNKNOWN PROPERTY
	};

}
