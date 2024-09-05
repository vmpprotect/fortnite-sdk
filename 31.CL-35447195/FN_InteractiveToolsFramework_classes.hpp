#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InteractiveToolsFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class InteractiveToolsFramework.AssetBackedTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAssetBackedTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.AssetBackedTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoBaseComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x500 - 0x4C8)
	class UGizmoBaseComponent : public UPrimitiveComponent	
	{
	public:
		FLinearColor Color; // 0x4C8(0x10)
		float HoverSizeMultiplier; // 0x4D8(0x4)
		float PixelHitDistanceThreshold; // 0x4DC(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x4E0(0x8) UNKNOWN PROPERTY
		UGizmoViewContext GizmoViewContext; // 0x4E8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x4F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoBaseComponent");
			return ret;
		}

		void UpdateWorldLocalState(bool bWorldIn); // Flags: Final|Native|Public 0x7FF414C39838
		void UpdateHoverState(bool bHoveringIn); // Flags: Final|Native|Public 0x7FF414C39758
	};


	// Class InteractiveToolsFramework.InteractiveCommandArguments
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInteractiveCommandArguments : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveCommandArguments");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveCommandResult
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveCommandResult : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveCommandResult");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveCommand
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveCommand : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveCommand");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveGizmoBuilder
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveGizmoBuilder : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveGizmoBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ToolContextTransactionProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UToolContextTransactionProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ToolContextTransactionProvider");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InternalToolFrameworkActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AInternalToolFrameworkActor : public AActor	
	{
	public:
		bool bIsSelectableInEditor; // 0x290(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x291(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InternalToolFrameworkActor");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ToolFrameworkComponent
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UToolFrameworkComponent : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ToolFrameworkComponent");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolCameraFocusAPI
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveToolCameraFocusAPI : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolCameraFocusAPI");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveToolNestedAcceptCancelAPI : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveToolExclusiveToolAPI : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolExclusiveToolAPI");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolEditorGizmoAPI
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveToolEditorGizmoAPI : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolEditorGizmoAPI");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolManageGeometrySelectionAPI
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveToolManageGeometrySelectionAPI : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolManageGeometrySelectionAPI");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MaterialProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMaterialProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MaterialProvider");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MeshDescriptionCommitter
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshDescriptionCommitter : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MeshDescriptionCommitter");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MeshDescriptionProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshDescriptionProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MeshDescriptionProvider");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGizmoBaseVec2ParameterSource : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
	// Inherited from UGizmoBaseVec2ParameterSource -> UObject
	// Size: 0x30 (0x78 - 0x48)
	class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource	
	{
	public:
		FVector2D Value; // 0x48(0x10)
		FGizmoVec2ParameterChange LastChange; // 0x58(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGizmoBaseFloatParameterSource : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
	// Inherited from UGizmoBaseFloatParameterSource -> UObject
	// Size: 0x148 (0x190 - 0x48)
	class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource	
	{
	public:
		unsigned char UnknownData02_3[0x88]; // 0x48(0x88) UNKNOWN PROPERTY
		TScriptInterface AxisSource; // 0xD0(0x10)
		TScriptInterface TransformSource; // 0xE0(0x10)
		float Parameter; // 0xF0(0x4)
		FGizmoFloatParameterChange LastChange; // 0xF4(0x8)
		unsigned char UnknownData03_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		FVector CurTranslationAxis; // 0x100(0x18)
		FVector CurTranslationOrigin; // 0x118(0x18)
		FTransform InitialTransform; // 0x130(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
	// Inherited from UGizmoBaseVec2ParameterSource -> UObject
	// Size: 0x1D8 (0x220 - 0x48)
	class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource	
	{
	public:
		unsigned char UnknownData01_3[0xC8]; // 0x48(0xC8) UNKNOWN PROPERTY
		TScriptInterface AxisSource; // 0x110(0x10)
		TScriptInterface TransformSource; // 0x120(0x10)
		FVector2D Parameter; // 0x130(0x10)
		FGizmoVec2ParameterChange LastChange; // 0x140(0x20)
		FVector CurTranslationOrigin; // 0x160(0x18)
		FVector CurTranslationNormal; // 0x178(0x18)
		FVector CurTranslationAxisX; // 0x190(0x18)
		FVector CurTranslationAxisY; // 0x1A8(0x18)
		FTransform InitialTransform; // 0x1C0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
	// Inherited from UGizmoBaseFloatParameterSource -> UObject
	// Size: 0x148 (0x190 - 0x48)
	class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource	
	{
	public:
		unsigned char UnknownData02_3[0x88]; // 0x48(0x88) UNKNOWN PROPERTY
		TScriptInterface AxisSource; // 0xD0(0x10)
		TScriptInterface TransformSource; // 0xE0(0x10)
		float Angle; // 0xF0(0x4)
		FGizmoFloatParameterChange LastChange; // 0xF4(0x8)
		unsigned char UnknownData03_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		FVector CurRotationAxis; // 0x100(0x18)
		FVector CurRotationOrigin; // 0x118(0x18)
		FTransform InitialTransform; // 0x130(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
	// Inherited from UGizmoBaseVec2ParameterSource -> UObject
	// Size: 0x118 (0x160 - 0x48)
	class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource	
	{
	public:
		TScriptInterface AxisSource; // 0x48(0x10)
		TScriptInterface TransformSource; // 0x58(0x10)
		float ScaleMultiplier; // 0x68(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FVector2D Parameter; // 0x70(0x10)
		FGizmoVec2ParameterChange LastChange; // 0x80(0x20)
		FVector CurScaleOrigin; // 0xA0(0x18)
		FVector CurScaleNormal; // 0xB8(0x18)
		FVector CurScaleAxisX; // 0xD0(0x18)
		FVector CurScaleAxisY; // 0xE8(0x18)
		FTransform InitialTransform; // 0x100(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
	// Inherited from UGizmoBaseFloatParameterSource -> UObject
	// Size: 0xC8 (0x110 - 0x48)
	class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource	
	{
	public:
		TScriptInterface AxisSource; // 0x48(0x10)
		TScriptInterface TransformSource; // 0x58(0x10)
		float ScaleMultiplier; // 0x68(0x4)
		bool bClampToZero; // 0x6C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		float Parameter; // 0x70(0x4)
		FGizmoFloatParameterChange LastChange; // 0x74(0x8)
		unsigned char UnknownData03_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FVector CurScaleAxis; // 0x80(0x18)
		FVector CurScaleOrigin; // 0x98(0x18)
		FTransform InitialTransform; // 0xB0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
	// Inherited from UGizmoBaseVec2ParameterSource -> UObject
	// Size: 0x168 (0x1B0 - 0x48)
	class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource	
	{
	public:
		unsigned char UnknownData03_3[0x48]; // 0x48(0x48) UNKNOWN PROPERTY
		TScriptInterface AxisSource; // 0x90(0x10)
		TScriptInterface TransformSource; // 0xA0(0x10)
		float ScaleMultiplier; // 0xB0(0x4)
		bool bUseEqualScaling; // 0xB4(0x1)
		bool bClampToZero; // 0xB5(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xB6(0x2) UNKNOWN PROPERTY
		FVector2D Parameter; // 0xB8(0x10)
		FGizmoVec2ParameterChange LastChange; // 0xC8(0x20)
		FVector CurScaleOrigin; // 0xE8(0x18)
		FVector CurScaleNormal; // 0x100(0x18)
		FVector CurScaleAxisX; // 0x118(0x18)
		FVector CurScaleAxisY; // 0x130(0x18)
		unsigned char UnknownData05_6[0x8]; // 0x148(0x8) UNKNOWN PROPERTY
		FTransform InitialTransform; // 0x150(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.PhysicsDataSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPhysicsDataSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.PhysicsDataSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.PrimitiveComponentBackedTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPrimitiveComponentBackedTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.PrimitiveComponentBackedTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.SkeletalMeshBackedTarget
	// Inherited from UAssetBackedTarget -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USkeletalMeshBackedTarget : public UAssetBackedTarget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.SkeletalMeshBackedTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.StaticMeshBackedTarget
	// Inherited from UAssetBackedTarget -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UStaticMeshBackedTarget : public UAssetBackedTarget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.StaticMeshBackedTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ToolsContextCursorAPI
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UToolsContextCursorAPI : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ToolsContextCursorAPI");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InputBehavior
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInputBehavior : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.AnyButtonInputBehavior
	// Inherited from UInputBehavior -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UAnyButtonInputBehavior : public UInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.AnyButtonInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ClickDragInputBehavior
	// Inherited from UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0xC0 (0x140 - 0x80)
	class UClickDragInputBehavior : public UAnyButtonInputBehavior	
	{
	public:
		unsigned char UnknownData02_3[0xA0]; // 0x80(0xA0) UNKNOWN PROPERTY
		bool bUpdateModifiersDuringDrag; // 0x120(0x1)
		unsigned char UnknownData03_7[0x1F]; // 0x121(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ClickDragInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.LocalClickDragInputBehavior
	// Inherited from UClickDragInputBehavior -> UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0x140 (0x280 - 0x140)
	class ULocalClickDragInputBehavior : public UClickDragInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0x140]; // 0x140(0x140) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.LocalClickDragInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.SingleClickInputBehavior
	// Inherited from UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0xB0 (0x130 - 0x80)
	class USingleClickInputBehavior : public UAnyButtonInputBehavior	
	{
	public:
		unsigned char UnknownData02_3[0x40]; // 0x80(0x40) UNKNOWN PROPERTY
		bool HitTestOnRelease; // 0xC0(0x1)
		unsigned char UnknownData03_7[0x6F]; // 0xC1(0x6F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.SingleClickInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.DoubleClickInputBehavior
	// Inherited from USingleClickInputBehavior -> UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UDoubleClickInputBehavior : public USingleClickInputBehavior	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.DoubleClickInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.LocalDoubleClickInputBehavior
	// Inherited from UDoubleClickInputBehavior -> USingleClickInputBehavior -> UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0xD0 (0x200 - 0x130)
	class ULocalDoubleClickInputBehavior : public UDoubleClickInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0xD0]; // 0x130(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.LocalDoubleClickInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
	// Inherited from UInputBehavior -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UKeyAsModifierInputBehavior : public UInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0x30(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.KeyAsModifierInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MouseHoverBehavior
	// Inherited from UInputBehavior -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UMouseHoverBehavior : public UInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0x30(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MouseHoverBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.LocalMouseHoverBehavior
	// Inherited from UMouseHoverBehavior -> UInputBehavior -> UObject
	// Size: 0x148 (0x1E0 - 0x98)
	class ULocalMouseHoverBehavior : public UMouseHoverBehavior	
	{
	public:
		unsigned char UnknownData01_1[0x148]; // 0x98(0x148) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.LocalMouseHoverBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MouseWheelInputBehavior
	// Inherited from UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0xB0 (0x130 - 0x80)
	class UMouseWheelInputBehavior : public UAnyButtonInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0xB0]; // 0x80(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MouseWheelInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
	// Inherited from UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0xB0 (0x130 - 0x80)
	class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0xB0]; // 0x80(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.LocalSingleClickInputBehavior
	// Inherited from USingleClickInputBehavior -> UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0xD0 (0x200 - 0x130)
	class ULocalSingleClickInputBehavior : public USingleClickInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0xD0]; // 0x130(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.LocalSingleClickInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.SingleClickOrDragInputBehavior
	// Inherited from UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0x100 (0x180 - 0x80)
	class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior	
	{
	public:
		unsigned char UnknownData03_3[0xA0]; // 0x80(0xA0) UNKNOWN PROPERTY
		bool bBeginDragIfClickTargetNotHit; // 0x120(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x121(0x3) UNKNOWN PROPERTY
		float ClickDistanceThreshold; // 0x124(0x4)
		unsigned char UnknownData05_7[0x58]; // 0x128(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.SingleClickOrDragInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.SingleKeyCaptureBehavior
	// Inherited from UInputBehavior -> UObject
	// Size: 0xE0 (0x110 - 0x30)
	class USingleKeyCaptureBehavior : public UInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0xE0]; // 0x30(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.SingleKeyCaptureBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.WidgetBaseBehavior
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetBaseBehavior : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.WidgetBaseBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
	// Inherited from UInteractiveGizmoBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.AxisAngleGizmoBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveGizmo
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UInteractiveGizmo : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UInputBehaviorSet InputBehaviors; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveGizmo");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.AxisAngleGizmo
	// Inherited from UInteractiveGizmo -> UObject
	// Size: 0x198 (0x1D0 - 0x38)
	class UAxisAngleGizmo : public UInteractiveGizmo	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		TScriptInterface AxisSource; // 0x48(0x10)
		TScriptInterface AngleSource; // 0x58(0x10)
		TScriptInterface HitTarget; // 0x68(0x10)
		TScriptInterface StateTarget; // 0x78(0x10)
		UClickDragInputBehavior MouseBehavior; // 0x88(0x8)
		unsigned char UnknownData05_6[0x80]; // 0x90(0x80) UNKNOWN PROPERTY
		bool bInInteraction; // 0x110(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FVector RotationOrigin; // 0x118(0x18)
		FVector RotationAxis; // 0x130(0x18)
		FVector RotationPlaneX; // 0x148(0x18)
		FVector RotationPlaneY; // 0x160(0x18)
		FVector InteractionStartPoint; // 0x178(0x18)
		FVector InteractionCurPoint; // 0x190(0x18)
		float InteractionStartAngle; // 0x1A8(0x4)
		float InteractionCurAngle; // 0x1AC(0x4)
		unsigned char UnknownData07_7[0x20]; // 0x1B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.AxisAngleGizmo");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
	// Inherited from UInteractiveGizmoBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.AxisPositionGizmoBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.AxisPositionGizmo
	// Inherited from UInteractiveGizmo -> UObject
	// Size: 0x188 (0x1C0 - 0x38)
	class UAxisPositionGizmo : public UInteractiveGizmo	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		TScriptInterface AxisSource; // 0x48(0x10)
		TScriptInterface ParameterSource; // 0x58(0x10)
		UGizmoViewContext GizmoViewContext; // 0x68(0x8)
		TScriptInterface HitTarget; // 0x70(0x10)
		TScriptInterface StateTarget; // 0x80(0x10)
		UClickDragInputBehavior MouseBehavior; // 0x90(0x8)
		bool bEnableSignedAxis; // 0x98(0x1)
		unsigned char UnknownData05_6[0x88]; // 0x99(0x88) UNKNOWN PROPERTY
		bool bInInteraction; // 0x121(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x122(0x6) UNKNOWN PROPERTY
		FVector InteractionOrigin; // 0x128(0x18)
		FVector InteractionAxis; // 0x140(0x18)
		FVector InteractionStartPoint; // 0x158(0x18)
		FVector InteractionCurPoint; // 0x170(0x18)
		float InteractionStartParameter; // 0x188(0x4)
		float InteractionCurParameter; // 0x18C(0x4)
		float ParameterSign; // 0x190(0x4)
		unsigned char UnknownData07_7[0x2C]; // 0x194(0x2C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.AxisPositionGizmo");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoConstantAxisSource
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UGizmoConstantAxisSource : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FVector Origin; // 0x30(0x18)
		FVector Direction; // 0x48(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoConstantAxisSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UGizmoConstantFrameAxisSource : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FVector Origin; // 0x30(0x18)
		FVector Direction; // 0x48(0x18)
		FVector TangentX; // 0x60(0x18)
		FVector TangentY; // 0x78(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoWorldAxisSource
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGizmoWorldAxisSource : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FVector Origin; // 0x30(0x18)
		int32_t AxisIndex; // 0x48(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoWorldAxisSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoComponentAxisSource
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGizmoComponentAxisSource : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		USceneComponent Component; // 0x30(0x8)
		int32_t AxisIndex; // 0x38(0x4)
		bool bLocalAxes; // 0x3C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoComponentAxisSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
	// Inherited from UInteractiveGizmoBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.BrushStampIndicatorBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.BrushStampIndicator
	// Inherited from UInteractiveGizmo -> UObject
	// Size: 0xA0 (0xD8 - 0x38)
	class UBrushStampIndicator : public UInteractiveGizmo	
	{
	public:
		bool bVisible; // 0x38(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float BrushRadius; // 0x3C(0x4)
		float BrushFalloff; // 0x40(0x4)
		float BrushStrength; // 0x44(0x4)
		FVector BrushPosition; // 0x48(0x18)
		FVector BrushNormal; // 0x60(0x18)
		bool bDrawIndicatorLines; // 0x78(0x1)
		bool bDrawRadiusCircle; // 0x79(0x1)
		bool bScaleNormalByStrength; // 0x7A(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x7B(0x1) UNKNOWN PROPERTY
		int32_t SampleStepCount; // 0x7C(0x4)
		FLinearColor LineColor; // 0x80(0x10)
		float LineThickness; // 0x90(0x4)
		bool bDepthTested; // 0x94(0x1)
		bool bDrawSecondaryLines; // 0x95(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x96(0x2) UNKNOWN PROPERTY
		float SecondaryLineThickness; // 0x98(0x4)
		FLinearColor SecondaryLineColor; // 0x9C(0x10)
		unsigned char UnknownData08_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UPrimitiveComponent AttachedComponent; // 0xB0(0x8)
		unsigned char UnknownData09_7[0x20]; // 0xB8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.BrushStampIndicator");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoActor
	// Inherited from AInternalToolFrameworkActor -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class AGizmoActor : public AInternalToolFrameworkActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoActor");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.CombinedTransformGizmoActor
	// Inherited from AGizmoActor -> AInternalToolFrameworkActor -> AActor -> UObject
	// Size: 0x88 (0x320 - 0x298)
	class ACombinedTransformGizmoActor : public AGizmoActor	
	{
	public:
		UPrimitiveComponent TranslateX; // 0x298(0x8)
		UPrimitiveComponent TranslateY; // 0x2A0(0x8)
		UPrimitiveComponent TranslateZ; // 0x2A8(0x8)
		UPrimitiveComponent TranslateYZ; // 0x2B0(0x8)
		UPrimitiveComponent TranslateXZ; // 0x2B8(0x8)
		UPrimitiveComponent TranslateXY; // 0x2C0(0x8)
		UPrimitiveComponent RotateX; // 0x2C8(0x8)
		UPrimitiveComponent RotateY; // 0x2D0(0x8)
		UPrimitiveComponent RotateZ; // 0x2D8(0x8)
		UPrimitiveComponent RotationSphere; // 0x2E0(0x8)
		UPrimitiveComponent UniformScale; // 0x2E8(0x8)
		UPrimitiveComponent AxisScaleX; // 0x2F0(0x8)
		UPrimitiveComponent AxisScaleY; // 0x2F8(0x8)
		UPrimitiveComponent AxisScaleZ; // 0x300(0x8)
		UPrimitiveComponent PlaneScaleYZ; // 0x308(0x8)
		UPrimitiveComponent PlaneScaleXZ; // 0x310(0x8)
		UPrimitiveComponent PlaneScaleXY; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.CombinedTransformGizmoActor");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.CombinedTransformGizmoBuilder
	// Inherited from UInteractiveGizmoBuilder -> UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder	
	{
	public:
		unsigned char UnknownData01_1[0xC8]; // 0x28(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.CombinedTransformGizmoBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.CombinedTransformGizmo
	// Inherited from UInteractiveGizmo -> UObject
	// Size: 0x368 (0x3A0 - 0x38)
	class UCombinedTransformGizmo : public UInteractiveGizmo	
	{
	public:
		UTransformProxy ActiveTarget; // 0x38(0x8)
		bool bSnapToWorldGrid; // 0x40(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		bool bGridSizeIsExplicit; // 0x44(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		FVector ExplicitGridSize; // 0x48(0x18)
		bool bRotationGridSizeIsExplicit; // 0x60(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FRotator ExplicitRotationGridSize; // 0x68(0x18)
		bool bSnapToWorldRotGrid; // 0x80(0x1)
		bool bUseContextCoordinateSystem; // 0x81(0x1)
		EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x82(0x1)
		bool bUseContextGizmoMode; // 0x83(0x1)
		EToolContextTransformGizmoMode ActiveGizmoMode; // 0x84(0x1)
		unsigned char UnknownData09_6[0x12B]; // 0x85(0x12B) UNKNOWN PROPERTY
		TArray ActiveComponents; // 0x1B0(0x10)
		TArray ActiveGizmos; // 0x1C0(0x10)
		unsigned char UnknownData10_6[0x50]; // 0x1D0(0x50) UNKNOWN PROPERTY
		UGizmoConstantFrameAxisSource CameraAxisSource; // 0x220(0x8)
		UGizmoComponentAxisSource AxisXSource; // 0x228(0x8)
		UGizmoComponentAxisSource AxisYSource; // 0x230(0x8)
		UGizmoComponentAxisSource AxisZSource; // 0x238(0x8)
		UGizmoComponentAxisSource UnitAxisXSource; // 0x240(0x8)
		UGizmoComponentAxisSource UnitAxisYSource; // 0x248(0x8)
		UGizmoComponentAxisSource UnitAxisZSource; // 0x250(0x8)
		UGizmoTransformChangeStateTarget StateTarget; // 0x258(0x8)
		unsigned char UnknownData11_7[0x140]; // 0x260(0x140) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.CombinedTransformGizmo");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoArrowComponent
	// Inherited from UGizmoBaseComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x28 (0x520 - 0x4F8)
	class UGizmoArrowComponent : public UGizmoBaseComponent	
	{
	public:
		FVector Direction; // 0x4F8(0x18)
		float Gap; // 0x510(0x4)
		float Length; // 0x514(0x4)
		float Thickness; // 0x518(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x51C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoArrowComponent");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoBoxComponent
	// Inherited from UGizmoBaseComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x550 - 0x4F8)
	class UGizmoBoxComponent : public UGizmoBaseComponent	
	{
	public:
		FVector Origin; // 0x4F8(0x18)
		FQuat Rotation; // 0x510(0x20)
		FVector Dimensions; // 0x530(0x18)
		float LineThickness; // 0x548(0x4)
		bool bRemoveHiddenLines; // 0x54C(0x1)
		bool bEnableAxisFlip; // 0x54D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x54E(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoBoxComponent");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoCircleComponent
	// Inherited from UGizmoBaseComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x28 (0x520 - 0x4F8)
	class UGizmoCircleComponent : public UGizmoBaseComponent	
	{
	public:
		FVector Normal; // 0x4F8(0x18)
		float Radius; // 0x510(0x4)
		float Thickness; // 0x514(0x4)
		int32_t NumSides; // 0x518(0x4)
		bool bViewAligned; // 0x51C(0x1)
		bool bDrawFullCircle; // 0x51D(0x1)
		bool bOnlyAllowFrontFacingHits; // 0x51E(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x51F(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoCircleComponent");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementBase
	// Inherited from UObject
	// Size: 0xE0 (0x108 - 0x28)
	class UGizmoElementBase : public UObject	
	{
	public:
		bool bEnabled; // 0x28(0x1)
		bool bEnabledForPerspectiveProjection; // 0x29(0x1)
		bool bEnabledForOrthographicProjection; // 0x2A(0x1)
		bool bEnabledForDefaultState; // 0x2B(0x1)
		bool bEnabledForHoveringState; // 0x2C(0x1)
		bool bEnabledForInteractingState; // 0x2D(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
		uint32_t PartIdentifier; // 0x30(0x4)
		FGizmoElementMeshRenderStateAttributes MeshRenderAttributes; // 0x34(0x60)
		EGizmoElementState ElementState; // 0x94(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		EGizmoElementInteractionState ElementInteractionState; // 0x98(0x4)
		EGizmoElementViewDependentType ViewDependentType; // 0x9C(0x4)
		FVector ViewDependentAxis; // 0xA0(0x18)
		float ViewDependentAngleTol; // 0xB8(0x4)
		float ViewDependentAxialMaxCosAngleTol; // 0xBC(0x4)
		float ViewDependentPlanarMinCosAngleTol; // 0xC0(0x4)
		EGizmoElementViewAlignType ViewAlignType; // 0xC4(0x4)
		FVector ViewAlignAxis; // 0xC8(0x18)
		FVector ViewAlignNormal; // 0xE0(0x18)
		float ViewAlignAxialAngleTol; // 0xF8(0x4)
		float ViewAlignAxialMaxCosAngleTol; // 0xFC(0x4)
		float PixelHitDistanceThreshold; // 0x100(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x104(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementBase");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementLineBase
	// Inherited from UGizmoElementBase -> UObject
	// Size: 0x50 (0x158 - 0x108)
	class UGizmoElementLineBase : public UGizmoElementBase	
	{
	public:
		FGizmoElementLineRenderStateAttributes LineRenderAttributes; // 0x108(0x3C)
		float LineThickness; // 0x144(0x4)
		bool bScreenSpaceLine; // 0x148(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x149(0x3) UNKNOWN PROPERTY
		float HoverLineThicknessMultiplier; // 0x14C(0x4)
		float InteractLineThicknessMultiplier; // 0x150(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x154(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementLineBase");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementCircleBase
	// Inherited from UGizmoElementLineBase -> UGizmoElementBase -> UObject
	// Size: 0x70 (0x1C8 - 0x158)
	class UGizmoElementCircleBase : public UGizmoElementLineBase	
	{
	public:
		FVector Center; // 0x158(0x18)
		FVector Axis0; // 0x170(0x18)
		FVector Axis1; // 0x188(0x18)
		double Radius; // 0x1A0(0x8)
		int32_t NumSegments; // 0x1A8(0x4)
		EGizmoElementPartialType PartialType; // 0x1AC(0x4)
		double PartialStartAngle; // 0x1B0(0x8)
		double PartialEndAngle; // 0x1B8(0x8)
		double PartialViewDependentMaxCosTol; // 0x1C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementCircleBase");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementArc
	// Inherited from UGizmoElementCircleBase -> UGizmoElementLineBase -> UGizmoElementBase -> UObject
	// Size: 0x8 (0x1D0 - 0x1C8)
	class UGizmoElementArc : public UGizmoElementCircleBase	
	{
	public:
		double InnerRadius; // 0x1C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementArc");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementArrow
	// Inherited from UGizmoElementBase -> UObject
	// Size: 0x80 (0x188 - 0x108)
	class UGizmoElementArrow : public UGizmoElementBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
		UGizmoElementCylinder CylinderElement; // 0x110(0x8)
		UGizmoElementCone ConeElement; // 0x118(0x8)
		UGizmoElementBox BoxElement; // 0x120(0x8)
		FVector base; // 0x128(0x18)
		FVector Direction; // 0x140(0x18)
		FVector SideDirection; // 0x158(0x18)
		float BodyLength; // 0x170(0x4)
		float BodyRadius; // 0x174(0x4)
		float HeadLength; // 0x178(0x4)
		float HeadRadius; // 0x17C(0x4)
		int32_t NumSides; // 0x180(0x4)
		EGizmoElementArrowHeadType HeadType; // 0x184(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementArrow");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementBox
	// Inherited from UGizmoElementBase -> UObject
	// Size: 0x60 (0x168 - 0x108)
	class UGizmoElementBox : public UGizmoElementBase	
	{
	public:
		FVector Center; // 0x108(0x18)
		FVector Dimensions; // 0x120(0x18)
		FVector UpDirection; // 0x138(0x18)
		FVector SideDirection; // 0x150(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementBox");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementCircle
	// Inherited from UGizmoElementCircleBase -> UGizmoElementLineBase -> UGizmoElementBase -> UObject
	// Size: 0x8 (0x1D0 - 0x1C8)
	class UGizmoElementCircle : public UGizmoElementCircleBase	
	{
	public:
		bool bDrawMesh; // 0x1C8(0x1)
		bool bDrawLine; // 0x1C9(0x1)
		bool bHitMesh; // 0x1CA(0x1)
		bool bHitLine; // 0x1CB(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementCircle");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementCone
	// Inherited from UGizmoElementBase -> UObject
	// Size: 0x40 (0x148 - 0x108)
	class UGizmoElementCone : public UGizmoElementBase	
	{
	public:
		FVector Origin; // 0x108(0x18)
		FVector Direction; // 0x120(0x18)
		float Height; // 0x138(0x4)
		float Radius; // 0x13C(0x4)
		int32_t NumSides; // 0x140(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x144(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementCone");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementCylinder
	// Inherited from UGizmoElementBase -> UObject
	// Size: 0x40 (0x148 - 0x108)
	class UGizmoElementCylinder : public UGizmoElementBase	
	{
	public:
		FVector base; // 0x108(0x18)
		FVector Direction; // 0x120(0x18)
		float Height; // 0x138(0x4)
		float Radius; // 0x13C(0x4)
		int32_t NumSides; // 0x140(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x144(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementCylinder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementGroup
	// Inherited from UGizmoElementLineBase -> UGizmoElementBase -> UObject
	// Size: 0x18 (0x170 - 0x158)
	class UGizmoElementGroup : public UGizmoElementLineBase	
	{
	public:
		bool bConstantScale; // 0x158(0x1)
		bool bHitOwner; // 0x159(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x15A(0x6) UNKNOWN PROPERTY
		TArray Elements; // 0x160(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementGroup");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementHitTarget
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UGizmoElementHitTarget : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UGizmoElementBase GizmoElement; // 0x30(0x8)
		UGizmoViewContext GizmoViewContext; // 0x38(0x8)
		UTransformProxy GizmoTransformProxy; // 0x40(0x8)
		unsigned char UnknownData03_7[0x48]; // 0x48(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementHitTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementHitMultiTarget
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UGizmoElementHitMultiTarget : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UGizmoElementBase GizmoElement; // 0x30(0x8)
		UGizmoViewContext GizmoViewContext; // 0x38(0x8)
		UTransformProxy GizmoTransformProxy; // 0x40(0x8)
		unsigned char UnknownData03_7[0x48]; // 0x48(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementHitMultiTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementLineStrip
	// Inherited from UGizmoElementLineBase -> UGizmoElementBase -> UObject
	// Size: 0x70 (0x1C8 - 0x158)
	class UGizmoElementLineStrip : public UGizmoElementLineBase	
	{
	public:
		TArray Vertices; // 0x158(0x10)
		FVector base; // 0x168(0x18)
		FVector UpDirection; // 0x180(0x18)
		FVector SideDirection; // 0x198(0x18)
		bool bDrawLineStrip; // 0x1B0(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x1B1(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementLineStrip");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementRectangle
	// Inherited from UGizmoElementLineBase -> UGizmoElementBase -> UObject
	// Size: 0x58 (0x1B0 - 0x158)
	class UGizmoElementRectangle : public UGizmoElementLineBase	
	{
	public:
		FVector Center; // 0x158(0x18)
		float Width; // 0x170(0x4)
		float Height; // 0x174(0x4)
		FVector UpDirection; // 0x178(0x18)
		FVector SideDirection; // 0x190(0x18)
		bool bDrawMesh; // 0x1A8(0x1)
		bool bDrawLine; // 0x1A9(0x1)
		bool bHitMesh; // 0x1AA(0x1)
		bool bHitLine; // 0x1AB(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x1AC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementRectangle");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementSphere
	// Inherited from UGizmoElementBase -> UObject
	// Size: 0x20 (0x128 - 0x108)
	class UGizmoElementSphere : public UGizmoElementBase	
	{
	public:
		FVector Center; // 0x108(0x18)
		float Radius; // 0x120(0x4)
		int32_t NumSides; // 0x124(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementSphere");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementTorus
	// Inherited from UGizmoElementCircleBase -> UGizmoElementLineBase -> UGizmoElementBase -> UObject
	// Size: 0x10 (0x1D8 - 0x1C8)
	class UGizmoElementTorus : public UGizmoElementCircleBase	
	{
	public:
		double InnerRadius; // 0x1C8(0x8)
		int32_t NumInnerSlices; // 0x1D0(0x4)
		bool bEndCaps; // 0x1D4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementTorus");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoElementTriangleList
	// Inherited from UGizmoElementBase -> UObject
	// Size: 0x68 (0x170 - 0x108)
	class UGizmoElementTriangleList : public UGizmoElementBase	
	{
	public:
		TArray Vertices; // 0x108(0x10)
		FVector base; // 0x118(0x18)
		FVector UpDirection; // 0x130(0x18)
		FVector SideDirection; // 0x148(0x18)
		unsigned char UnknownData01_7[0x10]; // 0x160(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoElementTriangleList");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoTransformSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGizmoTransformSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoTransformSource");
			return ret;
		}

		void SetTransform(FTransform& NewTransform); // Flags: Native|Public|HasOutParms|HasDefaults 0x7FF414C399F8
		FTransform GetTransform(); // Flags: Native|Public|HasDefaults|Const 0x7FF414C39918
	};


	// Class InteractiveToolsFramework.GizmoAxisSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGizmoAxisSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoAxisSource");
			return ret;
		}

		bool HasTangentVectors(); // Flags: Native|Public|Const 0x7FF414C39D78
		void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut); // Flags: Native|Public|HasOutParms|HasDefaults|Const 0x7FF414C39C98
		FVector GetOrigin(); // Flags: Native|Public|HasDefaults|Const 0x7FF414C39BB8
		FVector GetDirection(); // Flags: Native|Public|HasDefaults|Const 0x7FF414C39AD8
	};


	// Class InteractiveToolsFramework.GizmoClickTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGizmoClickTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoClickTarget");
			return ret;
		}

		void UpdateInteractingState(bool bInteracting); // Flags: Native|Public 0x7FF414C39F38
		void UpdateHoverState(bool bHovering); // Flags: Native|Public 0x7FF414C39E58
	};


	// Class InteractiveToolsFramework.GizmoClickMultiTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGizmoClickMultiTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoClickMultiTarget");
			return ret;
		}

		void UpdateInteractingState(bool bInteracting, uint32_t InPartIdentifier); // Flags: Native|Public 0x7FF414C3A1D8
		void UpdateHoverState(bool bHovering, uint32_t InPartIdentifier); // Flags: Native|Public 0x7FF414C3A0F8
		void UpdateHittableState(bool bHittable, uint32_t InPartIdentifier); // Flags: Native|Public 0x7FF414C3A018
	};


	// Class InteractiveToolsFramework.GizmoRenderTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGizmoRenderTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoRenderTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoRenderMultiTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGizmoRenderMultiTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoRenderMultiTarget");
			return ret;
		}

		void UpdateVisibilityState(bool bVisible, uint32_t InPartIdentifier); // Flags: Native|Public 0x7FF414C3A2B8
	};


	// Class InteractiveToolsFramework.GizmoStateTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGizmoStateTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoStateTarget");
			return ret;
		}

		void EndUpdate(); // Flags: Native|Public 0x7FF414C3A478
		void BeginUpdate(); // Flags: Native|Public 0x7FF414C3A398
	};


	// Class InteractiveToolsFramework.GizmoFloatParameterSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGizmoFloatParameterSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoFloatParameterSource");
			return ret;
		}

		void SetParameter(float NewValue); // Flags: Native|Public 0x7FF414C3A7F8
		float GetParameter(); // Flags: Native|Public|Const 0x7FF414C3A718
		void EndModify(); // Flags: Native|Public 0x7FF414C3A638
		void BeginModify(); // Flags: Native|Public 0x7FF414C3A558
	};


	// Class InteractiveToolsFramework.GizmoVec2ParameterSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGizmoVec2ParameterSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoVec2ParameterSource");
			return ret;
		}

		void SetParameter(FVector2D& NewValue); // Flags: Native|Public|HasOutParms|HasDefaults 0x7FF414C3AB78
		FVector2D GetParameter(); // Flags: Native|Public|HasDefaults|Const 0x7FF414C3AA98
		void EndModify(); // Flags: Native|Public 0x7FF414C3A9B8
		void BeginModify(); // Flags: Native|Public 0x7FF414C3A8D8
	};


	// Class InteractiveToolsFramework.GizmoLineHandleComponent
	// Inherited from UGizmoBaseComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x540 - 0x4F8)
	class UGizmoLineHandleComponent : public UGizmoBaseComponent	
	{
	public:
		FVector Normal; // 0x4F8(0x18)
		float HandleSize; // 0x510(0x4)
		float Thickness; // 0x514(0x4)
		FVector Direction; // 0x518(0x18)
		float Length; // 0x530(0x4)
		bool bImageScale; // 0x534(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x535(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoLineHandleComponent");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoRectangleComponent
	// Inherited from UGizmoBaseComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x550 - 0x4F8)
	class UGizmoRectangleComponent : public UGizmoBaseComponent	
	{
	public:
		FVector DirectionX; // 0x4F8(0x18)
		FVector DirectionY; // 0x510(0x18)
		bool bOrientYAccordingToCamera; // 0x528(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x529(0x3) UNKNOWN PROPERTY
		float OffsetX; // 0x52C(0x4)
		float OffsetY; // 0x530(0x4)
		float LengthX; // 0x534(0x4)
		float LengthY; // 0x538(0x4)
		float Thickness; // 0x53C(0x4)
		char SegmentFlags; // 0x540(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x541(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoRectangleComponent");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoViewContext
	// Inherited from UObject
	// Size: 0x1B8 (0x1E0 - 0x28)
	class UGizmoViewContext : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x1B8]; // 0x28(0x1B8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoViewContext");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoLambdaHitTarget
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UGizmoLambdaHitTarget : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xC8]; // 0x28(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoLambdaHitTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoComponentHitTarget
	// Inherited from UObject
	// Size: 0xD8 (0x100 - 0x28)
	class UGizmoComponentHitTarget : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UPrimitiveComponent Component; // 0x30(0x8)
		unsigned char UnknownData03_7[0xC8]; // 0x38(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoComponentHitTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.IntervalGizmoActor
	// Inherited from AGizmoActor -> AInternalToolFrameworkActor -> AActor -> UObject
	// Size: 0x18 (0x2B0 - 0x298)
	class AIntervalGizmoActor : public AGizmoActor	
	{
	public:
		UGizmoLineHandleComponent UpIntervalComponent; // 0x298(0x8)
		UGizmoLineHandleComponent DownIntervalComponent; // 0x2A0(0x8)
		UGizmoLineHandleComponent ForwardIntervalComponent; // 0x2A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.IntervalGizmoActor");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.IntervalGizmoBuilder
	// Inherited from UInteractiveGizmoBuilder -> UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder	
	{
	public:
		unsigned char UnknownData01_1[0x98]; // 0x28(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.IntervalGizmoBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.IntervalGizmo
	// Inherited from UInteractiveGizmo -> UObject
	// Size: 0x1C8 (0x200 - 0x38)
	class UIntervalGizmo : public UInteractiveGizmo	
	{
	public:
		UGizmoTransformChangeStateTarget StateTarget; // 0x38(0x8)
		unsigned char UnknownData03_6[0x58]; // 0x40(0x58) UNKNOWN PROPERTY
		UTransformProxy TransformProxy; // 0x98(0x8)
		TArray ActiveComponents; // 0xA0(0x10)
		TArray ActiveGizmos; // 0xB0(0x10)
		unsigned char UnknownData04_6[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY
		UGizmoComponentAxisSource AxisYSource; // 0xD8(0x8)
		UGizmoComponentAxisSource AxisZSource; // 0xE0(0x8)
		unsigned char UnknownData05_7[0x118]; // 0xE8(0x118) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.IntervalGizmo");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
	// Inherited from UGizmoBaseFloatParameterSource -> UObject
	// Size: 0x18 (0x60 - 0x48)
	class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource	
	{
	public:
		TScriptInterface FloatParameterSource; // 0x48(0x10)
		float MinParameter; // 0x58(0x4)
		float MaxParameter; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
	// Inherited from UGizmoBaseFloatParameterSource -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource	
	{
	public:
		float Value; // 0x48(0x4)
		FGizmoFloatParameterChange LastChange; // 0x4C(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
	// Inherited from UInteractiveGizmoBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.PlanePositionGizmoBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.PlanePositionGizmo
	// Inherited from UInteractiveGizmo -> UObject
	// Size: 0x238 (0x270 - 0x38)
	class UPlanePositionGizmo : public UInteractiveGizmo	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		TScriptInterface AxisSource; // 0x48(0x10)
		TScriptInterface ParameterSource; // 0x58(0x10)
		TScriptInterface HitTarget; // 0x68(0x10)
		TScriptInterface StateTarget; // 0x78(0x10)
		UClickDragInputBehavior MouseBehavior; // 0x88(0x8)
		bool bEnableSignedAxis; // 0x90(0x1)
		bool bFlipX; // 0x91(0x1)
		bool bFlipY; // 0x92(0x1)
		unsigned char UnknownData05_6[0x8D]; // 0x93(0x8D) UNKNOWN PROPERTY
		bool bInInteraction; // 0x120(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		FVector InteractionOrigin; // 0x128(0x18)
		FVector InteractionNormal; // 0x140(0x18)
		FVector InteractionAxisX; // 0x158(0x18)
		FVector InteractionAxisY; // 0x170(0x18)
		FVector InteractionStartPoint; // 0x188(0x18)
		FVector InteractionCurPoint; // 0x1A0(0x18)
		FVector2D InteractionStartParameter; // 0x1B8(0x10)
		FVector2D InteractionCurParameter; // 0x1C8(0x10)
		FVector2D ParameterSigns; // 0x1D8(0x10)
		unsigned char UnknownData07_7[0x88]; // 0x1E8(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.PlanePositionGizmo");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.RepositionableTransformGizmoBuilder
	// Inherited from UCombinedTransformGizmoBuilder -> UInteractiveGizmoBuilder -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.RepositionableTransformGizmoBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.RepositionableTransformGizmo
	// Inherited from UCombinedTransformGizmo -> UInteractiveGizmo -> UObject
	// Size: 0xA0 (0x440 - 0x3A0)
	class URepositionableTransformGizmo : public UCombinedTransformGizmo	
	{
	public:
		unsigned char UnknownData02_3[0x90]; // 0x3A0(0x90) UNKNOWN PROPERTY
		UGizmoTransformChangeStateTarget RepositionStateTarget; // 0x430(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x438(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.RepositionableTransformGizmo");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ScalableSphereGizmoBuilder
	// Inherited from UInteractiveGizmoBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ScalableSphereGizmoBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ScalableSphereGizmo
	// Inherited from UInteractiveGizmo -> UObject
	// Size: 0xC8 (0x100 - 0x38)
	class UScalableSphereGizmo : public UInteractiveGizmo	
	{
	public:
		unsigned char UnknownData04_3[0x48]; // 0x38(0x48) UNKNOWN PROPERTY
		float HitErrorThreshold; // 0x80(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FText TransactionDescription; // 0x88(0x10)
		float Radius; // 0x98(0x4)
		bool bIsHovering; // 0x9C(0x1)
		bool bIsDragging; // 0x9D(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x9E(0x2) UNKNOWN PROPERTY
		UTransformProxy ActiveTarget; // 0xA0(0x8)
		FVector ActiveAxis; // 0xA8(0x18)
		FVector DragStartWorldPosition; // 0xC0(0x18)
		FVector DragCurrentPositionProjected; // 0xD8(0x18)
		float InteractionStartParameter; // 0xF0(0x4)
		unsigned char UnknownData07_7[0xC]; // 0xF4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ScalableSphereGizmo");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
	// Inherited from UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0x50 (0xD0 - 0x80)
	class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x80(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ScalableSphereGizmoInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoNilStateTarget
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGizmoNilStateTarget : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoNilStateTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoLambdaStateTarget
	// Inherited from UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UGizmoLambdaStateTarget : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x88]; // 0x28(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoLambdaStateTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UGizmoObjectModifyStateTarget : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		TScriptInterface TransactionManager; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UGizmoTransformChangeStateTarget : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		TScriptInterface TransactionManager; // 0x48(0x10)
		unsigned char UnknownData03_7[0xE8]; // 0x58(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.CombinedTransformGizmoContextObject
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UCombinedTransformGizmoContextObject : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.CombinedTransformGizmoContextObject");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.TransformProxy
	// Inherited from UObject
	// Size: 0x188 (0x1B0 - 0x28)
	class UTransformProxy : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0xA8]; // 0x28(0xA8) UNKNOWN PROPERTY
		bool bRotatePerObject; // 0xD0(0x1)
		bool bSetPivotMode; // 0xD1(0x1)
		unsigned char UnknownData03_6[0x1E]; // 0xD2(0x1E) UNKNOWN PROPERTY
		FTransform SharedTransform; // 0xF0(0x60)
		FTransform InitialSharedTransform; // 0x150(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.TransformProxy");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoBaseTransformSource
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGizmoBaseTransformSource : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoBaseTransformSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
	// Inherited from UGizmoBaseTransformSource -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource	
	{
	public:
		USceneComponent Component; // 0x48(0x8)
		bool bModifyComponentOnTransform; // 0x50(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoScaledTransformSource
	// Inherited from UGizmoBaseTransformSource -> UObject
	// Size: 0x98 (0xE0 - 0x48)
	class UGizmoScaledTransformSource : public UGizmoBaseTransformSource	
	{
	public:
		TScriptInterface ChildTransformSource; // 0x48(0x10)
		unsigned char UnknownData01_7[0x88]; // 0x58(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoScaledTransformSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
	// Inherited from UGizmoBaseTransformSource -> UObject
	// Size: 0x28 (0x70 - 0x48)
	class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource	
	{
	public:
		UTransformProxy Proxy; // 0x48(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x50(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
	// Inherited from UGizmoBaseTransformSource -> UObject
	// Size: 0x20 (0x68 - 0x48)
	class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource	
	{
	public:
		TScriptInterface ScaledTransformSource; // 0x48(0x10)
		TScriptInterface UnscaledTransformSource; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolPropertySet
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UInteractiveToolPropertySet : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		TMap CachedPropertiesMap; // 0x38(0x50)
		bool bIsPropertySetEnabled; // 0x88(0x1)
		unsigned char UnknownData03_7[0x1F]; // 0x89(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolPropertySet");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.BrushBaseProperties
	// Inherited from UInteractiveToolPropertySet -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UBrushBaseProperties : public UInteractiveToolPropertySet	
	{
	public:
		float BrushSize; // 0xA8(0x4)
		bool bSpecifyRadius; // 0xAC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float BrushRadius; // 0xB0(0x4)
		float BrushStrength; // 0xB4(0x4)
		float BrushFalloffAmount; // 0xB8(0x4)
		bool bShowStrength; // 0xBC(0x1)
		bool bShowFalloff; // 0xBD(0x1)
		unsigned char UnknownData03_7[0x2]; // 0xBE(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.BrushBaseProperties");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.BrushAdjusterInputBehavior
	// Inherited from UAnyButtonInputBehavior -> UInputBehavior -> UObject
	// Size: 0x50 (0xD0 - 0x80)
	class UBrushAdjusterInputBehavior : public UAnyButtonInputBehavior	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x80(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.BrushAdjusterInputBehavior");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveTool
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UInteractiveTool : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x38]; // 0x28(0x38) UNKNOWN PROPERTY
		UInputBehaviorSet InputBehaviors; // 0x60(0x8)
		TArray ToolPropertyObjects; // 0x68(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x78(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveTool");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.SingleSelectionTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class USingleSelectionTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		UToolTarget Target; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.SingleSelectionTool");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MeshSurfacePointTool
	// Inherited from USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x58 (0x100 - 0xA8)
	class UMeshSurfacePointTool : public USingleSelectionTool	
	{
	public:
		unsigned char UnknownData01_3[0x50]; // 0xA8(0x50) UNKNOWN PROPERTY
		TWeakObjectPtr TargetWorld; // 0xF8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MeshSurfacePointTool");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.BaseBrushTool
	// Inherited from UMeshSurfacePointTool -> USingleSelectionTool -> UInteractiveTool -> UObject
	// Size: 0x190 (0x290 - 0x100)
	class UBaseBrushTool : public UMeshSurfacePointTool	
	{
	public:
		UBrushBaseProperties BrushProperties; // 0x100(0x8)
		bool bInBrushStroke; // 0x108(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x109(0x3) UNKNOWN PROPERTY
		float WorldToLocalScale; // 0x10C(0x4)
		FBrushStampData LastBrushStamp; // 0x110(0x138)
		unsigned char UnknownData04_6[0x10]; // 0x248(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr PropertyClass; // 0x258(0x20)
		UBrushStampIndicator BrushStampIndicator; // 0x278(0x8)
		unsigned char UnknownData05_7[0x10]; // 0x280(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.BaseBrushTool");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolBuilder
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveToolBuilder : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ClickDragToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClickDragToolBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ClickDragToolBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ClickDragTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x8 (0xA0 - 0x98)
	class UClickDragTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x98(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ClickDragTool");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
	// Inherited from UInteractiveToolWithToolTargetsBuilder -> UInteractiveToolBuilder -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.SingleClickToolBuilder
	// Inherited from UInteractiveToolBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USingleClickToolBuilder : public UInteractiveToolBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.SingleClickToolBuilder");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.SingleClickTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x8 (0xA0 - 0x98)
	class USingleClickTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x98(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.SingleClickTool");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ContextObjectStore
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UContextObjectStore : public UObject	
	{
	public:
		TArray ContextObjects; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ContextObjectStore");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InputBehaviorSet
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UInputBehaviorSet : public UObject	
	{
	public:
		TArray Behaviors; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InputBehaviorSet");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InputBehaviorSource
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInputBehaviorSource : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InputBehaviorSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.LocalInputBehaviorSource
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class ULocalInputBehaviorSource : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.LocalInputBehaviorSource");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InputRouter
	// Inherited from UObject
	// Size: 0x168 (0x190 - 0x28)
	class UInputRouter : public UObject	
	{
	public:
		bool bAutoInvalidateOnHover; // 0x28(0x1)
		bool bAutoInvalidateOnCapture; // 0x29(0x1)
		unsigned char UnknownData02_6[0xE]; // 0x2A(0xE) UNKNOWN PROPERTY
		UInputBehaviorSet ActiveInputBehaviors; // 0x38(0x8)
		unsigned char UnknownData03_7[0x150]; // 0x40(0x150) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InputRouter");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractionMechanic
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInteractionMechanic : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractionMechanic");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveGizmoManager
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UInteractiveGizmoManager : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray ActiveGizmos; // 0x30(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x40(0x18) UNKNOWN PROPERTY
		TMap GizmoBuilders; // 0x58(0x50)
		unsigned char UnknownData05_7[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveGizmoManager");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolManager
	// Inherited from UObject
	// Size: 0x188 (0x1B0 - 0x28)
	class UInteractiveToolManager : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		UInteractiveTool ActiveLeftTool; // 0x58(0x8)
		UInteractiveTool ActiveRightTool; // 0x60(0x8)
		unsigned char UnknownData04_6[0x98]; // 0x68(0x98) UNKNOWN PROPERTY
		TMap ToolBuilders; // 0x100(0x50)
		unsigned char UnknownData05_7[0x60]; // 0x150(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolManager");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.InteractiveToolsContext
	// Inherited from UObject
	// Size: 0x2F8 (0x320 - 0x28)
	class UInteractiveToolsContext : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		UInputRouter InputRouter; // 0x58(0x8)
		UToolTargetManager TargetManager; // 0x60(0x8)
		UInteractiveToolManager ToolManager; // 0x68(0x8)
		UInteractiveGizmoManager GizmoManager; // 0x70(0x8)
		UContextObjectStore ContextObjectStore; // 0x78(0x8)
		unsigned char UnknownData03_6[0x280]; // 0x80(0x280) UNKNOWN PROPERTY
		TWeakObjectPtr ToolManagerClass; // 0x300(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.InteractiveToolsContext");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MultiSelectionTool
	// Inherited from UInteractiveTool -> UObject
	// Size: 0x18 (0xB0 - 0x98)
	class UMultiSelectionTool : public UInteractiveTool	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray Targets; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MultiSelectionTool");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.SceneSnappingManager
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USceneSnappingManager : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.SceneSnappingManager");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.SelectionSet
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class USelectionSet : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.SelectionSet");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.MeshSelectionSet
	// Inherited from USelectionSet -> UObject
	// Size: 0x40 (0x80 - 0x40)
	class UMeshSelectionSet : public USelectionSet	
	{
	public:
		TArray Vertices; // 0x40(0x10)
		TArray Edges; // 0x50(0x10)
		TArray Faces; // 0x60(0x10)
		TArray Groups; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.MeshSelectionSet");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ToolTargetManager
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UToolTargetManager : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray Factories; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ToolTargetManager");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ToolTarget
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UToolTarget : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ToolTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.PrimitiveComponentToolTarget
	// Inherited from UToolTarget -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPrimitiveComponentToolTarget : public UToolTarget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.PrimitiveComponentToolTarget");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.ToolTargetFactory
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UToolTargetFactory : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.ToolTargetFactory");
			return ret;
		}
	};


	// Class InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
	// Inherited from UToolTargetFactory -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InteractiveToolsFramework.PrimitiveComponentToolTargetFactory");
			return ret;
		}
	};

}
