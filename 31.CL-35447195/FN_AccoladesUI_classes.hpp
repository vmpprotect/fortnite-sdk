#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AccoladesUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UAthenaAccoladeListEntryWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesUI.AthenaAccoladeListEntryWidget");
			return ret;
		}

		void SetTitle(FText& TitleText); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414BA9698
		void SetSource(FText& SourceText); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414BA95B8
		void SetJustCompleted(bool bJustCompleted); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414BA94D8
		void SetIconImage(TWeakObjectPtr& IconImage, EFortAccoladeType AccoladeType, EFortAccoladeTierType AccoladeTier); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414BA93F8
		void SetIcon(UFortAccoladeItemDefinition ItemDef); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414BA9318
		void SetCount(int32_t Count); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414BA9238
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

		void PopulateWidget(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA9778
	};

}
