#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DynamicUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void BroadcastTransitionCompleted(); // Flags: Native|Protected|BlueprintCallable 0x7FF414627F58
	};


	// Class DynamicUI.DynamicUIDirectorBase
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ADynamicUIDirectorBase : public AActor	
	{
	public:
		TArray DefaultScenes; // 0x290(0x10)
		TWeakObjectPtr OwningLocalPlayer; // 0x2A0(0x8)
		bool bEnabledDuringReplay; // 0x2A8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x2A9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIDirectorBase");
			return ret;
		}

		void RemoveScenes(TArray& Scenes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414628578
		void RemoveScene(UDynamicUIScene Scene); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414628498
		bool IsSceneActive(UDynamicUIScene Scene); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146283B8
		APlayerController GetOwningLocalPlayerController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146282D8
		ULocalPlayer GetOwningLocalPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146281F8
		void AddScenes(TArray& Scenes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414628118
		void AddScene(UDynamicUIScene Scene); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414628038
	};


	// Class DynamicUI.DynamicUIConstraintBase
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UDynamicUIConstraintBase : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		FVector2D Offset; // 0x50(0x10)
		UDynamicUIConstraintOverrideBase ConstraintOverride; // 0x60(0x8)
		bool bUseOffset : 1; // 0x68:0(0x1)
		bool bUseOverride : 1; // 0x68:1(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x3]; // 0x85(0x3) UNKNOWN PROPERTY

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
		TEnumAsByte HorizontalAlignment; // 0x70(0x1)
		TEnumAsByte VerticalAlignment; // 0x71(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x72(0x2) UNKNOWN PROPERTY
		EDynamicUIAnchor Anchor; // 0x74(0x4)
		FDynamicUIAspectRatio MaxAspectRatio; // 0x78(0x8)
		bool bUseSafeZone : 1; // 0x80:0(0x1)
		bool bUseMaxAspectRatio : 1; // 0x80:1(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FDynamicUIWidgetTarget TargetWidget; // 0x78(0x78)
		EDynamicUIAnchor TargetAnchor; // 0xF0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		TArray Fallbacks; // 0xF8(0x10)
		bool bConstrainToUnallowedWidgets : 1; // 0x108:0(0x1)
		bool bUseFallbacks : 1; // 0x108:1(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY

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
		TArray WidgetsToContain; // 0x70(0x10)
		FMargin Padding; // 0x80(0x10)
		bool bMustMatchAllWidgets : 1; // 0x90:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x91(0x7) UNKNOWN PROPERTY

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
		TArray Fallbacks; // 0xE8(0x10)
		bool bUseFallbacks : 1; // 0xF8:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

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
		TMap PlatformVisibilityControls; // 0x28(0x50)
		TMap InputTypeVisibilityControls; // 0x78(0x50)
		unsigned char UnknownData01_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		TMap PlayerDataMap; // 0x48(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIManager");
			return ret;
		}

		void RemoveScenes(TArray Scenes, APlayerController& Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414628C78
		void RemoveSceneFromFirstLocalPlayer(UDynamicUIScene Scene); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414628B98
		void RemoveScene(UDynamicUIScene Scene, APlayerController& Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414628AB8
		bool IsSceneActiveOnFirstLocalPlayer(UDynamicUIScene Scene); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4146289D8
		bool IsSceneActive(UDynamicUIScene Scene, APlayerController& Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4146288F8
		void AddSceneToFirstLocalPlayer(UDynamicUIScene Scene); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414628818
		void AddScenes(TArray Scenes, APlayerController& Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414628738
		void AddScene(UDynamicUIScene Scene, APlayerController& Player); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414628658
	};


	// Class DynamicUI.DynamicUIScene
	// Inherited from UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UDynamicUIScene : public UDataAsset	
	{
	public:
		char LayerId; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TArray Allowed; // 0x38(0x10)
		TArray Unallow; // 0x48(0x10)
		TArray Adjust; // 0x58(0x10)
		TArray Preload; // 0x68(0x10)

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
		unsigned char UnknownData02_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		UDynamicUISizeOverrideBase SizeOverride; // 0x50(0x8)
		bool bUseOverride : 1; // 0x58:0(0x1)
		bool bUseRenderTransform : 1; // 0x58:1(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray Fallbacks; // 0xE0(0x10)
		bool bUseFallbacks : 1; // 0xF0:0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY

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
		TMap PlatformOverrides; // 0x28(0x50)
		TMap InputTypeOverrides; // 0x78(0x50)
		unsigned char UnknownData01_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUISizeOverridePlatform");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIUnallowBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDynamicUIUnallowBase : public UObject	
	{
	public:
		EDynamicUIUnallowedBehavior Behavior; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIUnallowBase");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIUnallowWidget
	// Inherited from UDynamicUIUnallowBase -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UDynamicUIUnallowWidget : public UDynamicUIUnallowBase	
	{
	public:
		FDynamicUIWidgetTarget Widget; // 0x30(0x78)
		bool bTargetAll : 1; // 0xA8:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIUnallowWidget");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIUnallowLayer
	// Inherited from UDynamicUIUnallowBase -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UDynamicUIUnallowLayer : public UDynamicUIUnallowBase	
	{
	public:
		char LayerId; // 0x30(0x1)
		EDynamicUIUnallowLayerComparison Comparison; // 0x31(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x32(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIUnallowLayer");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIUnallowScene
	// Inherited from UDynamicUIUnallowBase -> UObject
	// Size: 0xD8 (0x108 - 0x30)
	class UDynamicUIUnallowScene : public UDynamicUIUnallowBase	
	{
	public:
		FDynamicUISceneTarget Scene; // 0x30(0x18)
		TArray Exclusions; // 0x48(0x10)
		unsigned char UnknownData01_7[0xB0]; // 0x58(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIUnallowScene");
			return ret;
		}
	};


	// Class DynamicUI.DynamicUIVisualizerWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2E0 - 0x2B8)
	class UDynamicUIVisualizerWidget : public UUserWidget	
	{
	public:
		TArray Scenes; // 0x2B8(0x10)
		bool bRefresh; // 0x2C8(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x2C9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicUI.DynamicUIVisualizerWidget");
			return ret;
		}
	};

}
