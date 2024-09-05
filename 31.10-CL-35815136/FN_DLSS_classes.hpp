#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DLSS
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DLSS.DLSSOverrideSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDLSSOverrideSettings : public UObject	
	{
	public:
		EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x28(0x1)
		EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x29(0x1)
		bool bShowDLSSIncompatiblePluginsToolsWarnings; // 0x2A(0x1)
		EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; // 0x2B(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DLSS.DLSSOverrideSettings");
			return ret;
		}
	};


	// Class DLSS.DLSSSettings
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UDLSSSettings : public UObject	
	{
	public:
		bool bEnableDLSSD3D12; // 0x28(0x1)
		bool bEnableDLSSD3D11; // 0x29(0x1)
		bool bEnableDLSSVulkan; // 0x2A(0x1)
		bool bEnableDLSSInEditorViewports; // 0x2B(0x1)
		bool bEnableDLSSInPlayInEditorViewports; // 0x2C(0x1)
		bool bShowDLSSSDebugOnScreenMessages; // 0x2D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
		FString GenericDLSSBinaryPath; // 0x30(0x10)
		bool bGenericDLSSBinaryExists; // 0x40(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		uint32_t NVIDIANGXApplicationId; // 0x44(0x4)
		FString CustomDLSSBinaryPath; // 0x48(0x10)
		bool bCustomDLSSBinaryExists; // 0x58(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DLSS.DLSSSettings");
			return ret;
		}
	};

}
