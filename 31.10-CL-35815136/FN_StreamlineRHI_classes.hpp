#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StreamlineRHI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class StreamlineRHI.StreamlineOverrideSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UStreamlineOverrideSettings : public UObject	
	{
	public:
		EStreamlineSettingOverride EnableDLSSFGInPlayInEditorViewportsOverride; // 0x28(0x1)
		EStreamlineSettingOverride LoadDebugOverlayOverride; // 0x29(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StreamlineRHI.StreamlineOverrideSettings");
			return ret;
		}
	};


	// Class StreamlineRHI.StreamlineSettings
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UStreamlineSettings : public UObject	
	{
	public:
		bool bEnableStreamlineD3D12; // 0x28(0x1)
		bool bEnableStreamlineD3D11; // 0x29(0x1)
		bool bEnableDLSSFGInPlayInEditorViewports; // 0x2A(0x1)
		bool bLoadDebugOverlay; // 0x2B(0x1)
		bool bAllowOTAUpdate; // 0x2C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		int32_t NVIDIANGXApplicationId; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StreamlineRHI.StreamlineSettings");
			return ret;
		}
	};

}
