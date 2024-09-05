#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FabricUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FabricUI.FabricInteractableViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UFabricInteractableViewModel : public UMVVMViewModelBase	
	{
	public:
		FText Label; // 0x68(0x10)
		FText Value; // 0x78(0x10)
		bool bEnabled; // 0x88(0x1)
		bool bVisible; // 0x89(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x8A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricInteractableViewModel");
			return ret;
		}
	};


	// Class FabricUI.FabricButtonBaseViewModel
	// Inherited from UFabricInteractableViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x8 (0x98 - 0x90)
	class UFabricButtonBaseViewModel : public UFabricInteractableViewModel	
	{
	public:
		ECheckBoxState ToggleState; // 0x90(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x91(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricButtonBaseViewModel");
			return ret;
		}
	};


	// Class FabricUI.FabricCarouselViewModel
	// Inherited from UFabricInteractableViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x8 (0x98 - 0x90)
	class UFabricCarouselViewModel : public UFabricInteractableViewModel	
	{
	public:
		bool bPresetEnabled; // 0x90(0x1)
		bool bShowBorder; // 0x91(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x92(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricCarouselViewModel");
			return ret;
		}
	};


	// Class FabricUI.FabricGridStyle
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFabricGridStyle : public UObject	
	{
	public:
		FMargin Padding; // 0x28(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x38(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x39(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x3A(0x2) UNKNOWN PROPERTY
		int32_t RowSpan; // 0x3C(0x4)
		int32_t ColumnSpan; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricGridStyle");
			return ret;
		}
	};


	// Class FabricUI.FabricWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFabricWidget : public UCommonUserWidget	
	{
	public:
		UClass* GridStyle; // 0x2D8(0x8)
		UClass* ViewModelClass; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricWidget");
			return ret;
		}

		UFabricInteractableViewModel GetFabricViewModel(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74E250D44(relative to base address)
	};


	// Class FabricUI.FabricInfoWidget
	// Inherited from UFabricWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E8 - 0x2E8)
	class UFabricInfoWidget : public UFabricWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricInfoWidget");
			return ret;
		}
	};


	// Class FabricUI.FabricKnobViewModel
	// Inherited from UFabricInteractableViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x8 (0x98 - 0x90)
	class UFabricKnobViewModel : public UFabricInteractableViewModel	
	{
	public:
		bool bValueVisible; // 0x90(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x91(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricKnobViewModel");
			return ret;
		}
	};


	// Class FabricUI.FabricPageInfoViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class UFabricPageInfoViewModel : public UMVVMViewModelBase	
	{
	public:
		bool bHasContent; // 0x68(0x1)
		bool bActivePage; // 0x69(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x6A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricPageInfoViewModel");
			return ret;
		}
	};


	// Class FabricUI.FabricPlaybackTimeViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UFabricPlaybackTimeViewModel : public UMVVMViewModelBase	
	{
	public:
		float ElapsedSeconds; // 0x68(0x4)
		float TotalSeconds; // 0x6C(0x4)
		bool bEnabled; // 0x70(0x1)
		bool bVisible; // 0x71(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x72(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricPlaybackTimeViewModel");
			return ret;
		}
	};


	// Class FabricUI.FabricPlaybackTimeWidget
	// Inherited from UFabricWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2F0 - 0x2E8)
	class UFabricPlaybackTimeWidget : public UFabricWidget	
	{
	public:
		UNamedSlot* NamedSlot_Right; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricPlaybackTimeWidget");
			return ret;
		}

		UUserWidget GetNamedSlotRightWidgetChild(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751615BEC(relative to base address)
		FText GetFormattedTimeFromSeconds(float Seconds); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751615B54(relative to base address)
	};


	// Class FabricUI.FabricScreenWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x308 - 0x2D8)
	class UFabricScreenWidget : public UCommonUserWidget	
	{
	public:
		UInvalidationBox* InvalidationBox_RootBox; // 0x2D8(0x8)
		UScaleBox* ScaleBox_ScreenScale; // 0x2E0(0x8)
		UGridPanel* GridPanel_ScreenGrid; // 0x2E8(0x8)
		USpacer* Spacer_ElementSpacer; // 0x2F0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x2F8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricScreenWidget");
			return ret;
		}

		void SetScreenGridDimensions(FVector2D& InNewDimensions); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751615CD0(relative to base address)
		UFabricWidget FindWidgetOfClass(UClass* FabricWidgetClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751615A00(relative to base address)
		UFabricWidget AttachFabricWidget(UClass* FabricWidgetClass, FVector2D& GridPosition); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75161591C(relative to base address)
	};


	// Class FabricUI.FabricSongSyncViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class UFabricSongSyncViewModel : public UMVVMViewModelBase	
	{
	public:
		EFabricSongSyncControlTempoState ControlTempoState; // 0x68(0x1)
		bool bHasLinkedSongSyncDevices; // 0x69(0x1)
		bool bEnabled; // 0x6A(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x6B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricSongSyncViewModel");
			return ret;
		}
	};


	// Class FabricUI.FabricTrackInfoViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class UFabricTrackInfoViewModel : public UMVVMViewModelBase	
	{
	public:
		TWeakObjectPtr<UTexture2D*> TrackImage; // 0x68(0x20)
		FText TrackInfo; // 0x88(0x10)
		bool bEnabled; // 0x98(0x1)
		bool bVisible; // 0x99(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x9A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricTrackInfoViewModel");
			return ret;
		}
	};


	// Class FabricUI.FabricTrackInfoWidget
	// Inherited from UFabricWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E8 - 0x2E8)
	class UFabricTrackInfoWidget : public UFabricWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricTrackInfoWidget");
			return ret;
		}
	};


	// Class FabricUI.FabricTrackNumberViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UFabricTrackNumberViewModel : public UMVVMViewModelBase	
	{
	public:
		int32_t CurrentTrackNumber; // 0x68(0x4)
		int32_t TotalNumberOfTracks; // 0x6C(0x4)
		bool bEnabled; // 0x70(0x1)
		bool bVisible; // 0x71(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x72(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricTrackNumberViewModel");
			return ret;
		}
	};


	// Class FabricUI.FabricTrackNumberWidget
	// Inherited from UFabricWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E8 - 0x2E8)
	class UFabricTrackNumberWidget : public UFabricWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricTrackNumberWidget");
			return ret;
		}
	};


	// Class FabricUI.FabricWidgetComponent
	// Inherited from UWidgetComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x640 - 0x638)
	class UFabricWidgetComponent : public UWidgetComponent	
	{
	public:
		bool bShouldSuscribeToSignificanceSubsystem; // 0x638(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x639(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricWidgetComponent");
			return ret;
		}

		void SetShouldSuscribeToSignificanceSubsystem(bool ShouldSuscribe); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751615D64(relative to base address)
		ETickMode GetTickMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751615C38(relative to base address)
	};


	// Class FabricUI.FabricWidgetTickControlSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UFabricWidgetTickControlSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricUI.FabricWidgetTickControlSubsystem");
			return ret;
		}

		void UnregisterFabricWidgetComponent(UFabricWidgetComponent* WidgetComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751615DE4(relative to base address)
		void RegisterFabricWidgetComponent(UFabricWidgetComponent* WidgetComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751615C50(relative to base address)
	};

}
