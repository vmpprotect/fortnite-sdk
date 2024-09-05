#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BuildPatchServices
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BuildPatchServices.BuildPatchManifest
	// Inherited from UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UBuildPatchManifest : public UObject	
	{
	public:
		char ManifestFileVersion; // 0x28(0x1)
		bool bIsFileData; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		uint32_t AppID; // 0x2C(0x4)
		FString AppName; // 0x30(0x10)
		FString BuildVersion; // 0x40(0x10)
		FString LaunchExe; // 0x50(0x10)
		FString LaunchCommand; // 0x60(0x10)
		TSet<FString> PrereqIds; // 0x70(0x50)
		FString PrereqName; // 0xC0(0x10)
		FString PrereqPath; // 0xD0(0x10)
		FString PrereqArgs; // 0xE0(0x10)
		TArray<FFileManifestData> FileManifestList; // 0xF0(0x10)
		TArray<FChunkInfoData> ChunkList; // 0x100(0x10)
		TArray<FCustomFieldData> CustomFields; // 0x110(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BuildPatchServices.BuildPatchManifest");
			return ret;
		}
	};

}
