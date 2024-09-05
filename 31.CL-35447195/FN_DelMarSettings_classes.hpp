#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarSettings
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarSettings.DelMarInputContextRedirectMap
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UDelMarInputContextRedirectMap : public UDataAsset	
	{
	public:
		TMap RedirectMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarSettings.DelMarInputContextRedirectMap");
			return ret;
		}
	};


	// Class DelMarSettings.DelMarInputModifierPitchInversion
	// Inherited from UInputModifier -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarInputModifierPitchInversion : public UInputModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarSettings.DelMarInputModifierPitchInversion");
			return ret;
		}
	};


	// Class DelMarSettings.DelMarInputModifierZeroOut
	// Inherited from UInputModifier -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarInputModifierZeroOut : public UInputModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarSettings.DelMarInputModifierZeroOut");
			return ret;
		}
	};


	// Class DelMarSettings.DelMarInputModifierAlwaysOne
	// Inherited from UInputModifier -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarInputModifierAlwaysOne : public UInputModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarSettings.DelMarInputModifierAlwaysOne");
			return ret;
		}
	};


	// Class DelMarSettings.DelMarInputModifierScalarBySign
	// Inherited from UInputModifier -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UDelMarInputModifierScalarBySign : public UInputModifier	
	{
	public:
		FVector PositiveScalar; // 0x28(0x18)
		FVector NegativeScalar; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarSettings.DelMarInputModifierScalarBySign");
			return ret;
		}
	};


	// Class DelMarSettings.DelMarInputModifierClamp
	// Inherited from UInputModifier -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UDelMarInputModifierClamp : public UInputModifier	
	{
	public:
		FVector Minimum; // 0x28(0x18)
		FVector Maximum; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarSettings.DelMarInputModifierClamp");
			return ret;
		}
	};


	// Class DelMarSettings.DelMarSettingsGlobals
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarSettingsGlobals : public UObject	
	{
	public:
		FGameplayTag DefaultTouchControlsLayout; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarSettings.DelMarSettingsGlobals");
			return ret;
		}
	};


	// Class DelMarSettings.GameFeatureAction_AddInputContextMappingPlatformOverrides
	// Inherited from UGameFeatureAction_AddInputContextMapping -> UGameFeatureAction -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UGameFeatureAction_AddInputContextMappingPlatformOverrides : public UGameFeatureAction_AddInputContextMapping	
	{
	public:
		UDelMarInputContextRedirectMap DigitalRedirectMap; // 0xF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarSettings.GameFeatureAction_AddInputContextMappingPlatformOverrides");
			return ret;
		}
	};

}
