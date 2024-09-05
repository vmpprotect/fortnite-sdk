#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NVIDIAGfeSDK
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NVIDIAGfeSDK.GfeSDKCreateInputParams
	// Size: 0x28 (0x28 - 0x0)
	struct FGfeSDKCreateInputParams	
	{
	public:
		FString AppName; // 0x0(0x10)
		TArray RequiredScopes; // 0x10(0x10)
		bool PollForCallbacks; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct NVIDIAGfeSDK.GfeSDKCreateResponse
	// Size: 0x68 (0x68 - 0x0)
	struct FGfeSDKCreateResponse	
	{
	public:
		uint16_t VersionMajor; // 0x0(0x2)
		uint16_t VersionMinor; // 0x2(0x2)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString NVIDIAGfeVersion; // 0x8(0x10)
		TMap ScopePermissions; // 0x18(0x50)
	};


	// Struct NVIDIAGfeSDK.GfeSDKHighlightDefinition
	// Size: 0x68 (0x68 - 0x0)
	struct FGfeSDKHighlightDefinition	
	{
	public:
		FString ID; // 0x0(0x10)
		bool UserDefaultInterest; // 0x10(0x1)
		EGfeSDKHighlightType HighlightTags; // 0x11(0x1)
		EGfeSDKHighlightSignificance Significance; // 0x12(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
		TMap NameTranslationTable; // 0x18(0x50)
	};


	// Struct NVIDIAGfeSDK.GfeSDKHighlightConfigParams
	// Size: 0x20 (0x20 - 0x0)
	struct FGfeSDKHighlightConfigParams	
	{
	public:
		TArray HighlightDefinitions; // 0x0(0x10)
		FString DefaultLocale; // 0x10(0x10)
	};


	// Struct NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
	// Size: 0x10 (0x10 - 0x0)
	struct FGfeSDKRequestPermissionsParams	
	{
	public:
		TArray Scopes; // 0x0(0x10)
	};


	// Struct NVIDIAGfeSDK.GfeSDKPermissionsChangedData
	// Size: 0x50 (0x50 - 0x0)
	struct FGfeSDKPermissionsChangedData	
	{
	public:
		TMap ScopePermissions; // 0x0(0x50)
	};


	// Struct NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
	// Size: 0x60 (0x60 - 0x0)
	struct FGfeSDKHighlightOpenGroupParams	
	{
	public:
		FString GroupId; // 0x0(0x10)
		TMap GroupDescriptionTranslationTable; // 0x10(0x50)
	};


	// Struct NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
	// Size: 0x18 (0x18 - 0x0)
	struct FGfeSDKHighlightCloseGroupParams	
	{
	public:
		FString GroupId; // 0x0(0x10)
		bool DestroyHighlights; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
	// Size: 0x20 (0x20 - 0x0)
	struct FGfeSDKHighlightScreenshotParams	
	{
	public:
		FString GroupId; // 0x0(0x10)
		FString HighlightId; // 0x10(0x10)
	};


	// Struct NVIDIAGfeSDK.GfeSDKHighlightVideoParams
	// Size: 0x28 (0x28 - 0x0)
	struct FGfeSDKHighlightVideoParams	
	{
	public:
		FString GroupId; // 0x0(0x10)
		FString HighlightId; // 0x10(0x10)
		int32_t StartDelta; // 0x20(0x4)
		int32_t EndDelta; // 0x24(0x4)
	};


	// Struct NVIDIAGfeSDK.GfeSDKHighlightGroupView
	// Size: 0x18 (0x18 - 0x0)
	struct FGfeSDKHighlightGroupView	
	{
	public:
		FString GroupId; // 0x0(0x10)
		EGfeSDKHighlightType TagsFilter; // 0x10(0x1)
		EGfeSDKHighlightSignificance SignificanceFilter; // 0x11(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
	// Size: 0x10 (0x10 - 0x0)
	struct FGfeSDKHighlightSummaryParams	
	{
	public:
		TArray GroupViews; // 0x0(0x10)
	};

}
