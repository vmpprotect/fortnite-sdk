#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AccoladesUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AccoladesUI.AthenaAccoladeWrapper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UAthenaAccoladeWrapper : public UObject	
	{
	public:
		FName AccoladeRowName; // 0x28(0x4)
		FFortAccoladeSessionData AccoladeData; // 0x2C(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesUI.AthenaAccoladeWrapper");
			return ret;
		}
	};


	// Class AccoladesUI.AthenaAccoladeListEntryWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UAthenaAccoladeListEntryWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesUI.AthenaAccoladeListEntryWidget");
			return ret;
		}

		void SetTitle(FText& TitleText); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSource(FText& SourceText); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetJustCompleted(bool bJustCompleted); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconImage(TWeakObjectPtr<UTexture2D*>& IconImage, EFortAccoladeType AccoladeType, EFortAccoladeTierType AccoladeTier); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIcon(UFortAccoladeItemDefinition* ItemDef); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCount(int32_t Count); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AccoladesUI.AthenaAccoladeListWidget
	// Inherited from UCommonListView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0xB30 - 0xB30)
	class UAthenaAccoladeListWidget : public UCommonListView	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesUI.AthenaAccoladeListWidget");
			return ret;
		}

		void PopulateWidget(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750564784(relative to base address)
	};

}
