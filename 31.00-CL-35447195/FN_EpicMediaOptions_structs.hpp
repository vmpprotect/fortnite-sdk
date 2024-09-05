#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaOptions
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EpicMediaOptions.EpicMediaOptions
	// Size: 0x110 (0x110 - 0x0)
	struct FEpicMediaOptions	
	{
	public:
		unsigned char UnknownData05_7[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
		int32_t FrameRate; // 0x4(0x4)
		int32_t MaxResolutionForMediaStreaming; // 0x8(0x4)
		int32_t MaxElectraVerticalResolutionOf60fpsVideos; // 0xC(0x4)
		int32_t MaxElectraVerticalResolutionOfWindowsSWD; // 0x10(0x4)
		bool bElectraLiveUseConservativePresentationOffset; // 0x14(0x1)
		bool bElectraUseDedicatedMediaSegmentDownloadThreads; // 0x15(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		double ElectraLivePresentationOffset; // 0x18(0x8)
		double ElectraLiveAudioPresentationOffset; // 0x20(0x8)
		bool bDisableBlastURLStreamSource; // 0x28(0x1)
		bool bIsCN; // 0x29(0x1)
		unsigned char UnknownData07_6[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
		TArray VideoEVMap; // 0x30(0x10)
		TArray CDNDistribution; // 0x40(0x10)
		TArray VODHostNames; // 0x50(0x10)
		TArray VODHostNamesCN; // 0x60(0x10)
		TArray LiveHostNames; // 0x70(0x10)
		TArray LiveHostNamesCN; // 0x80(0x10)
		TArray VODHostNamesDev; // 0x90(0x10)
		TArray LiveHostNamesDev; // 0xA0(0x10)
		TArray VODHostNamesHF; // 0xB0(0x10)
		TArray LiveHostNamesHF; // 0xC0(0x10)
		TArray VODHostNamesCNHF; // 0xD0(0x10)
		TArray LiveHostNamesCNHF; // 0xE0(0x10)
		bool bUseQuicksilverEntryPoint; // 0xF0(0x1)
		unsigned char UnknownData08_6[0x17]; // 0xF1(0x17) UNKNOWN PROPERTY
		bool bUseSegmentCaching; // 0x108(0x1)
		bool bForceSegmentCaching; // 0x109(0x1)
		unsigned char UnknownData09_6[0x2]; // 0x10A(0x2) UNKNOWN PROPERTY
		float MetadataRequestTimeout; // 0x10C(0x4)
	};

}
