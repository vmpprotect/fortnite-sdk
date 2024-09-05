#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Slate
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Slate.ToolMenuBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UToolMenuBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.ToolMenuBase");
			return ret;
		}
	};


	// Class Slate.SlateSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USlateSettings : public UObject	
	{
	public:
		bool bExplicitCanvasChildZOrder; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.SlateSettings");
			return ret;
		}
	};


	// Class Slate.ButtonWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x370 (0x3A0 - 0x30)
	class UButtonWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FButtonStyle ButtonStyle; // 0x30(0x370)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.ButtonWidgetStyle");
			return ret;
		}
	};


	// Class Slate.CheckBoxWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x950 (0x980 - 0x30)
	class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FCheckBoxStyle CheckBoxStyle; // 0x30(0x950)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.CheckBoxWidgetStyle");
			return ret;
		}
	};


	// Class Slate.ComboBoxWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x5A0 (0x5D0 - 0x30)
	class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FComboBoxStyle ComboBoxStyle; // 0x30(0x5A0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.ComboBoxWidgetStyle");
			return ret;
		}
	};


	// Class Slate.ComboButtonWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x540 (0x570 - 0x30)
	class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FComboButtonStyle ComboButtonStyle; // 0x30(0x540)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.ComboButtonWidgetStyle");
			return ret;
		}
	};


	// Class Slate.EditableTextBoxWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0xC80 (0xCB0 - 0x30)
	class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FEditableTextBoxStyle EditableTextBoxStyle; // 0x30(0xC80)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.EditableTextBoxWidgetStyle");
			return ret;
		}
	};


	// Class Slate.EditableTextWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x290 (0x2C0 - 0x30)
	class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FEditableTextStyle EditableTextStyle; // 0x30(0x290)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.EditableTextWidgetStyle");
			return ret;
		}
	};


	// Class Slate.ProgressWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x230 (0x260 - 0x30)
	class UProgressWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FProgressBarStyle ProgressBarStyle; // 0x30(0x230)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.ProgressWidgetStyle");
			return ret;
		}
	};


	// Class Slate.ScrollBarWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x650 (0x680 - 0x30)
	class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FScrollBarStyle ScrollBarStyle; // 0x30(0x650)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.ScrollBarWidgetStyle");
			return ret;
		}
	};


	// Class Slate.ScrollBoxWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x2F0 (0x320 - 0x30)
	class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FScrollBoxStyle ScrollBoxStyle; // 0x30(0x2F0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.ScrollBoxWidgetStyle");
			return ret;
		}
	};


	// Class Slate.SpinBoxWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x520 (0x550 - 0x30)
	class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FSpinBoxStyle SpinBoxStyle; // 0x30(0x520)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.SpinBoxWidgetStyle");
			return ret;
		}
	};


	// Class Slate.TextBlockWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x2E0 (0x310 - 0x30)
	class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FTextBlockStyle TextBlockStyle; // 0x30(0x2E0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Slate.TextBlockWidgetStyle");
			return ret;
		}
	};

}
