#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DynamicUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DynamicUI.DynamicUITransitionableWidgetInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDynamicUITransitionableWidgetInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUITransitionableWidgetInterface");
			return ret;
		}

		void BroadcastTransitionCompleted(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF748F06970(relative to base address)
	};


	// Class DynamicUI.DynamicUIDirectorBase
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ADynamicUIDirectorBase : public AActor	
	{
	public:
		TArray<UDynamicUIScene*> DefaultScenes; // 0x290(0x10)
		TWeakObjectPtr<ULocalPlayer*> OwningLocalPlayer; // 0x2A0(0x8)
		bool bEnabledDuringReplay; // 0x2A8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x2A9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIDirectorBase");
			return ret;
		}

		void RemoveScenes(TArray<UDynamicUIScene*>& Scenes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D897CD0(relative to base address)
		void RemoveScene(UDynamicUIScene* Scene); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D89790C(relative to base address)
		bool IsSceneActive(UDynamicUIScene* Scene); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8976A4(relative to base address)
		APlayerController GetOwningLocalPlayerController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D897680(relative to base address)
		ULocalPlayer GetOwningLocalPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D89765C(relative to base address)
		void AddScenes(TArray<UDynamicUIScene*>& Scenes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D8974A0(relative to base address)
		void AddScene(UDynamicUIScene* Scene); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D896B18(relative to base address)
	};


	// Class DynamicUI.DynamicUIExcludeBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDynamicUIExcludeBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIExcludeBase");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIExcludeInputType
	// Inherited from UDynamicUIExcludeBase -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDynamicUIExcludeInputType : public UDynamicUIExcludeBase	
	{
	public:
		TArray<ECommonInputType> InputTypes; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIExcludeInputType");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIConstraintBase
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UDynamicUIConstraintBase : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		FVector2D Offset; // 0x50(0x10)
		UDynamicUIConstraintOverrideBase* ConstraintOverride; // 0x60(0x8)
		bool bUseOffset : 1; // 0x68:0(0x1)
		bool bUseOverride : 1; // 0x68:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIConstraintBase");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIConstraintPosition
	// Inherited from UDynamicUIConstraintBase -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UDynamicUIConstraintPosition : public UDynamicUIConstraintBase	
	{
	public:
		FVector2D Position; // 0x70(0x10)
		EDynamicUIAnchor Anchor; // 0x80(0x4)
		bool bUseSafeZone : 1; // 0x84:0(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x85(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIConstraintPosition");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIConstraintAlignment
	// Inherited from UDynamicUIConstraintBase -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UDynamicUIConstraintAlignment : public UDynamicUIConstraintBase	
	{
	public:
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x70(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x71(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x72(0x2) UNKNOWN PROPERTY
		EDynamicUIAnchor Anchor; // 0x74(0x4)
		FDynamicUIAspectRatio MaxAspectRatio; // 0x78(0x8)
		bool bUseSafeZone : 1; // 0x80:0(0x1)
		bool bUseMaxAspectRatio : 1; // 0x80:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIConstraintAlignment");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIConstraintWidget
	// Inherited from UDynamicUIConstraintBase -> UObject
	// Size: 0xA0 (0x110 - 0x70)
	class UDynamicUIConstraintWidget : public UDynamicUIConstraintBase	
	{
	public:
		EDynamicUIAnchor Anchor; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FDynamicUIWidgetTarget TargetWidget; // 0x78(0x78)
		EDynamicUIAnchor TargetAnchor; // 0xF0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		TArray<UDynamicUIConstraintBase*> Fallbacks; // 0xF8(0x10)
		bool bConstrainToUnallowedWidgets : 1; // 0x108:0(0x1)
		bool bUseFallbacks : 1; // 0x108:1(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIConstraintWidget");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIConstraintContainer
	// Inherited from UDynamicUIConstraintBase -> UObject
	// Size: 0x28 (0x98 - 0x70)
	class UDynamicUIConstraintContainer : public UDynamicUIConstraintBase	
	{
	public:
		TArray<FDynamicUIWidgetTarget> WidgetsToContain; // 0x70(0x10)
		FMargin Padding; // 0x80(0x10)
		bool bMustMatchAllWidgets : 1; // 0x90:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x91(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIConstraintContainer");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIConstraintReplace
	// Inherited from UDynamicUIConstraintBase -> UObject
	// Size: 0x90 (0x100 - 0x70)
	class UDynamicUIConstraintReplace : public UDynamicUIConstraintBase	
	{
	public:
		FDynamicUIWidgetTarget TargetWidget; // 0x70(0x78)
		TArray<UDynamicUIConstraintBase*> Fallbacks; // 0xE8(0x10)
		bool bUseFallbacks : 1; // 0xF8:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIConstraintReplace");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIConstraintOverrideBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDynamicUIConstraintOverrideBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIConstraintOverrideBase");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIConstraintPlatformOverride
	// Inherited from UDynamicUIConstraintOverrideBase -> UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UDynamicUIConstraintPlatformOverride : public UDynamicUIConstraintOverrideBase	
	{
	public:
		TMap<FName, UDynamicUIConstraintBase*> PlatformVisibilityControls; // 0x28(0x50)
		TMap<ECommonInputType, UDynamicUIConstraintBase*> InputTypeVisibilityControls; // 0x78(0x50)
		unsigned char UnknownData00_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIConstraintPlatformOverride");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UDynamicUIManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		TMap<TWeakObjectPtr, FDynamicUIPlayerData> PlayerDataMap; // 0x48(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIManager");
			return ret;
		}

		void RemoveScenes(TArray<UDynamicUIScene*> Scenes, APlayerController* Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D897D6C(relative to base address)
		void RemoveSceneFromFirstLocalPlayer(UDynamicUIScene* Scene); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D897B50(relative to base address)
		void RemoveScene(UDynamicUIScene* Scene, APlayerController* Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D89798C(relative to base address)
		bool IsSceneActiveOnFirstLocalPlayer(UDynamicUIScene* Scene); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D89785C(relative to base address)
		bool IsSceneActive(UDynamicUIScene* Scene, APlayerController* Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D897764(relative to base address)
		void AddSceneToFirstLocalPlayer(UDynamicUIScene* Scene); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D897040(relative to base address)
		void AddScenes(TArray<UDynamicUIScene*> Scenes, APlayerController* Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D89753C(relative to base address)
		void AddScene(UDynamicUIScene* Scene, APlayerController* Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D896B98(relative to base address)
	};


	// Class DynamicUI.DynamicUIScene
	// Inherited from UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UDynamicUIScene : public UDataAsset	
	{
	public:
		char LayerId; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TArray<FDynamicUIAllowed> Allowed; // 0x38(0x10)
		TArray<UDynamicUIUnallowBase*> Unallow; // 0x48(0x10)
		TArray<FDynamicUIAdjust> Adjust; // 0x58(0x10)
		TArray<FDynamicUIPreload> Preload; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIScene");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUISizeBase
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UDynamicUISizeBase : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		UDynamicUISizeOverrideBase* SizeOverride; // 0x50(0x8)
		bool bUseOverride : 1; // 0x58:0(0x1)
		bool bUseRenderTransform : 1; // 0x58:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUISizeBase");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUISizeFixed
	// Inherited from UDynamicUISizeBase -> UObject
	// Size: 0x8 (0x68 - 0x60)
	class UDynamicUISizeFixed : public UDynamicUISizeBase	
	{
	public:
		FVector2f Size; // 0x60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUISizeFixed");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUISizeScale
	// Inherited from UDynamicUISizeBase -> UObject
	// Size: 0x8 (0x68 - 0x60)
	class UDynamicUISizeScale : public UDynamicUISizeBase	
	{
	public:
		FVector2f Scale; // 0x60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUISizeScale");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUISizeMatchWidget
	// Inherited from UDynamicUISizeBase -> UObject
	// Size: 0x98 (0xF8 - 0x60)
	class UDynamicUISizeMatchWidget : public UDynamicUISizeBase	
	{
	public:
		FDynamicUIWidgetTarget TargetWidget; // 0x60(0x78)
		EDynamicUISizeMatch MatchType; // 0xD8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray<UDynamicUISizeBase*> Fallbacks; // 0xE0(0x10)
		bool bUseFallbacks : 1; // 0xF0:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUISizeMatchWidget");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUISizeOverrideBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDynamicUISizeOverrideBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUISizeOverrideBase");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUISizeOverridePlatform
	// Inherited from UDynamicUISizeOverrideBase -> UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UDynamicUISizeOverridePlatform : public UDynamicUISizeOverrideBase	
	{
	public:
		TMap<FName, UDynamicUISizeBase*> PlatformOverrides; // 0x28(0x50)
		TMap<ECommonInputType, UDynamicUISizeBase*> InputTypeOverrides; // 0x78(0x50)
		unsigned char UnknownData00_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUISizeOverridePlatform");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIUnallowBase
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UDynamicUIUnallowBase : public UObject	
	{
	public:
		EDynamicUIUnallowedBehavior Behavior; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray<UDynamicUIExcludeBase*> ExcludeConditions; // 0x30(0x10)
		bool bUseExclude : 1; // 0x40:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIUnallowBase");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIUnallowWidget
	// Inherited from UDynamicUIUnallowBase -> UObject
	// Size: 0x80 (0xC8 - 0x48)
	class UDynamicUIUnallowWidget : public UDynamicUIUnallowBase	
	{
	public:
		FDynamicUIWidgetTarget Widget; // 0x48(0x78)
		bool bTargetAll : 1; // 0xC0:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIUnallowWidget");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIUnallowLayer
	// Inherited from UDynamicUIUnallowBase -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UDynamicUIUnallowLayer : public UDynamicUIUnallowBase	
	{
	public:
		char LayerId; // 0x48(0x1)
		EDynamicUIUnallowLayerComparison Comparison; // 0x49(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIUnallowLayer");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIUnallowScene
	// Inherited from UDynamicUIUnallowBase -> UObject
	// Size: 0xD8 (0x120 - 0x48)
	class UDynamicUIUnallowScene : public UDynamicUIUnallowBase	
	{
	public:
		FDynamicUISceneTarget Scene; // 0x48(0x18)
		TArray<FDynamicUIWidgetTarget> Exclusions; // 0x60(0x10)
		unsigned char UnknownData00_7[0xB0]; // 0x70(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIUnallowScene");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIVisualizerWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2D8 - 0x2B0)
	class UDynamicUIVisualizerWidget : public UUserWidget	
	{
	public:
		TArray<UDynamicUIScene*> Scenes; // 0x2B0(0x10)
		bool bRefresh; // 0x2C0(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x2C1(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIVisualizerWidget");
			return ret;
		}
	};

}
