#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseUI.VerseUIUserWidget
	// Inherited from UUIFrameworkUserWidget -> UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x128 (0x310 - 0x1E8)
	class UVerseUIUserWidget : public UUIFrameworkUserWidget	
	{
	public:
		FVerseUIUserWidgetViewmodelList ReplicatedViewmodelList; // 0x1E8(0x120)
		unsigned char UnknownData01_7[0x8]; // 0x308(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseUI.VerseUIUserWidget");
			return ret;
		}
	};


	// Class VerseUI.VersePlayerUIEntityComponent
	// Inherited from UEntityActorPlayerComponent -> UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x8 (0xD8 - 0xD0)
	class UVersePlayerUIEntityComponent : public UEntityActorPlayerComponent	
	{
	public:
		UUIFrameworkPlayerComponent UIFComponent; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseUI.VersePlayerUIEntityComponent");
			return ret;
		}
	};


	// Class VerseUI.VerseWidgetNativeBase
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UVerseWidgetNativeBase : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UUIFrameworkWidget UIFWidgetInstance; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseUI.VerseWidgetNativeBase");
			return ret;
		}
	};


	// Class VerseUI.VerseUIWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UVerseUIWorldSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseUI.VerseUIWorldSubsystem");
			return ret;
		}
	};

}
