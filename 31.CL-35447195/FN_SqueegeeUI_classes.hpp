#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SqueegeeUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SqueegeeUI.FortContentGateDetailsWidget
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x308 - 0x300)
	class UFortContentGateDetailsWidget : public UFortSqueegeeWidget	
	{
	public:
		UFortContentGateRatingWidget ContentGateRatingWidget; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentGateDetailsWidget");
			return ret;
		}

		void OnShowGamemodeDescription(FString ActivityTitle); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4CEF8
	};


	// Class SqueegeeUI.FortContentGateRatingWidget
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x300 - 0x300)
	class UFortContentGateRatingWidget : public UFortSqueegeeWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentGateRatingWidget");
			return ret;
		}

		void OnStyleUpdated(FSqueegeeStyleParams& StyleParams); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D4D0B8
		void OnLabelUpdated(bool bLabelEnabled, FText& LabelText, FText& LabelNumber); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D4CFD8
	};


	// Class SqueegeeUI.FortContentManagementDetails
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x338 - 0x300)
	class UFortContentManagementDetails : public UFortSqueegeeWidget	
	{
	public:
		UFortContentGateRatingWidget ContentGateRatingWidget; // 0x300(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x308(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentManagementDetails");
			return ret;
		}

		void OnShowWeaponData(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4D358
		void OnShowActivityData(FText& ActivityDisplayName, FText& ActivityDescription, FString CreatorName, FText& LinkCode, bool IsCreative, FDateTime& UnlockTime, UFortGameActivity GameActivity); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414D4D278
		void OnPreviewImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4D198
	};


	// Class SqueegeeUI.FortContentManagementButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x13C0 - 0x1390)
	class UFortContentManagementButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x1390(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentManagementButton");
			return ret;
		}

		void OnShowGameActivity(UFortGameActivity NewGameActivity); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4D5F8
		void OnShowError(FText& ErrorText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D4D518
		void OnChangeManagementState(EFortContentManagementState NewState); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4D438
	};


	// Class SqueegeeUI.FortContentManagementLabelWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortContentManagementLabelWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentManagementLabelWidget");
			return ret;
		}

		void OnSetLabel(FText& InText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D4D6D8
	};


	// Class SqueegeeUI.FortContentManagementEntryLabelObject
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortContentManagementEntryLabelObject : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentManagementEntryLabelObject");
			return ret;
		}
	};


	// Class SqueegeeUI.FortContentManagementEntryDataObject
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UFortContentManagementEntryDataObject : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x28(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentManagementEntryDataObject");
			return ret;
		}
	};


	// Class SqueegeeUI.FortContentManagementListView
	// Inherited from UCommonListView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0xB40 - 0xB30)
	class UFortContentManagementListView : public UCommonListView	
	{
	public:
		UClass LabelWidget; // 0xB30(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xB38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentManagementListView");
			return ret;
		}
	};


	// Class SqueegeeUI.FortContentManagementList
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x370 - 0x300)
	class UFortContentManagementList : public UFortSqueegeeWidget	
	{
	public:
		FText WeaponLabelText; // 0x300(0x10)
		FText GameModeLabelText; // 0x310(0x10)
		UFortContentManagementListView ContentManagementListView; // 0x320(0x8)
		unsigned char UnknownData02_6[0x18]; // 0x328(0x18) UNKNOWN PROPERTY
		TArray CachedActivities; // 0x340(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x350(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentManagementList");
			return ret;
		}

		void ResetUnlockList(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D4DA58
		void RequestNextUnlockPage(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D4D978
		void OnNextUnlockPageRequestCompleted(bool bSuccess); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4D898
		bool CanRequestNextUnlockPage(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D4D7B8
	};


	// Class SqueegeeUI.FortContentManagementScreen
	// Inherited from UFortPinScreen -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x558 - 0x540)
	class UFortContentManagementScreen : public UFortPinScreen	
	{
	public:
		UCommonButtonBase Button_CloseTouch; // 0x540(0x8)
		UFortContentManagementList ContentManagementList; // 0x548(0x8)
		UFortContentManagementDetails ContentManagementDetails; // 0x550(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.FortContentManagementScreen");
			return ret;
		}

		void ExitScreen(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D4DB38
	};


	// Class SqueegeeUI.SqueegeeUIGameFeatureAction
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class USqueegeeUIGameFeatureAction : public UFortUIGameFeatureAction	
	{
	public:
		TArray SqueegeeWidgetInjections; // 0x28(0x10)
		TArray SqueegeTexts; // 0x38(0x10)
		TWeakObjectPtr SqueegeeIntroModalClass; // 0x48(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SqueegeeUI.SqueegeeUIGameFeatureAction");
			return ret;
		}
	};

}
