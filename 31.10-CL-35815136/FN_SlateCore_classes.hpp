#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SlateCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SlateCore.SlateWidgetStyleAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USlateWidgetStyleAsset : public UObject	
	{
	public:
		USlateWidgetStyleContainerBase* CustomStyle; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateCore.SlateWidgetStyleAsset");
			return ret;
		}
	};


	// Class SlateCore.FontBulkData
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UFontBulkData : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateCore.FontBulkData");
			return ret;
		}
	};


	// Class SlateCore.FontFaceInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFontFaceInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateCore.FontFaceInterface");
			return ret;
		}
	};


	// Class SlateCore.FontProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFontProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateCore.FontProviderInterface");
			return ret;
		}
	};


	// Class SlateCore.SlateTypes
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USlateTypes : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateCore.SlateTypes");
			return ret;
		}
	};


	// Class SlateCore.SlateWidgetStyleContainerBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USlateWidgetStyleContainerBase : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateCore.SlateWidgetStyleContainerBase");
			return ret;
		}
	};


	// Class SlateCore.SlateWidgetStyleContainerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USlateWidgetStyleContainerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateCore.SlateWidgetStyleContainerInterface");
			return ret;
		}
	};


	// Class SlateCore.SlateThemeManager
	// Inherited from UObject
	// Size: 0x7B0 (0x7D8 - 0x28)
	class USlateThemeManager : public UObject	
	{
	public:
		FGuid CurrentThemeId; // 0x28(0x10)
		FStyleColorList ActiveColors; // 0x38(0x7A0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlateCore.SlateThemeManager");
			return ret;
		}
	};

}
