#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TypedElementRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct TypedElementRuntime.TypedElementSelectionOptions
	// Size: 0xC (0xC - 0x0)
	struct FTypedElementSelectionOptions	
	{
	public:
		bool bAllowHidden; // 0x0(0x1)
		bool bAllowGroups; // 0x1(0x1)
		bool bAllowLegacyNotifications; // 0x2(0x1)
		bool bWarnIfLocked; // 0x3(0x1)
		bool bAllowSubRootSelection; // 0x4(0x1)
		ETypedElementChildInclusionMethod ChildElementInclusionMethod; // 0x5(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x6(0x6) UNKNOWN PROPERTY
	};


	// Struct TypedElementRuntime.TypedElementSelectionSetState
	// Size: 0x18 (0x18 - 0x0)
	struct FTypedElementSelectionSetState	
	{
	public:
		TWeakObjectPtr<UTypedElementSelectionSet*> CreatedFromSelectionSet; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct TypedElementRuntime.TypedElementIsSelectedOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementIsSelectedOptions	
	{
	public:
		bool bAllowIndirect; // 0x0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
	};


	// Struct TypedElementRuntime.TypedElementSelectionNormalizationOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FTypedElementSelectionNormalizationOptions	
	{
	public:
		bool bExpandGroups; // 0x0(0x1)
		bool bFollowAttachment; // 0x1(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
	};


	// Struct TypedElementRuntime.TypedElementAssetDataReferencedOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FTypedElementAssetDataReferencedOptions	
	{
	public:
		bool bOnlyTopLevelAsset; // 0x0(0x1)
	};

}
