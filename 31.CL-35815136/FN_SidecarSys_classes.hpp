#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SidecarSys
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SidecarSys.SidecarDss
	// Inherited from UObject
	// Size: 0xB0 (0xD8 - 0x28)
	class USidecarDss : public UObject	
	{
	public:
		TMap<FString, FSidecarFileInfo> FileInfoMap; // 0x28(0x50)
		FString DssDownloadUrl; // 0x78(0x10)
		FString DssCheckoutUrl; // 0x88(0x10)
		FString DssUploadUrl; // 0x98(0x10)
		FString DssRestoreUrl; // 0xA8(0x10)
		FString DssCheckinUrl; // 0xB8(0x10)
		FString DssListFilesUrl; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidecarSys.SidecarDss");
			return ret;
		}
	};


	// Class SidecarSys.SidecarInventorySys
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class USidecarInventorySys : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FString InventoryDownloadUrl; // 0x30(0x10)
		FString InventoryLockUrl; // 0x40(0x10)
		FString ItemUpdateUrl; // 0x50(0x10)
		unsigned char UnknownData01_7[0x80]; // 0x60(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidecarSys.SidecarInventorySys");
			return ret;
		}
	};


	// Class SidecarSys.SidecarSys
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class USidecarSys : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		USidecarDss* SidecarDss; // 0x38(0x8)
		USidecarInventorySys* SidecarInventory; // 0x40(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidecarSys.SidecarSys");
			return ret;
		}
	};

}
