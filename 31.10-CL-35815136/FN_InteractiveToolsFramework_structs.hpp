#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InteractiveToolsFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct InteractiveToolsFramework.GizmoVec2ParameterChange
	// Size: 0x20 (0x20 - 0x0)
	struct FGizmoVec2ParameterChange	
	{
	public:
		FVector2D InitialValue; // 0x0(0x10)
		FVector2D CurrentValue; // 0x10(0x10)
	};


	// Struct InteractiveToolsFramework.GizmoElementColorAttribute
	// Size: 0x14 (0x14 - 0x0)
	struct FGizmoElementColorAttribute	
	{
	public:
		FLinearColor Value; // 0x0(0x10)
		bool bHasValue; // 0x10(0x1)
		bool bOverridesChildState; // 0x11(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
	};


	// Struct InteractiveToolsFramework.GizmoElementMaterialAttribute
	// Size: 0xC (0xC - 0x0)
	struct FGizmoElementMaterialAttribute	
	{
	public:
		TWeakObjectPtr<UMaterialInterface*> Value; // 0x0(0x8)
		bool bOverridesChildState; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
	// Size: 0x60 (0x60 - 0x0)
	struct FGizmoElementMeshRenderStateAttributes	
	{
	public:
		FGizmoElementMaterialAttribute Material; // 0x0(0xC)
		FGizmoElementMaterialAttribute HoverMaterial; // 0xC(0xC)
		FGizmoElementMaterialAttribute InteractMaterial; // 0x18(0xC)
		FGizmoElementColorAttribute VertexColor; // 0x24(0x14)
		FGizmoElementColorAttribute HoverVertexColor; // 0x38(0x14)
		FGizmoElementColorAttribute InteractVertexColor; // 0x4C(0x14)
	};


	// Struct InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
	// Size: 0x3C (0x3C - 0x0)
	struct FGizmoElementLineRenderStateAttributes	
	{
	public:
		FGizmoElementColorAttribute LineColor; // 0x0(0x14)
		FGizmoElementColorAttribute HoverLineColor; // 0x14(0x14)
		FGizmoElementColorAttribute InteractLineColor; // 0x28(0x14)
	};


	// Struct InteractiveToolsFramework.GizmoFloatParameterChange
	// Size: 0x8 (0x8 - 0x0)
	struct FGizmoFloatParameterChange	
	{
	public:
		float InitialValue; // 0x0(0x4)
		float CurrentValue; // 0x4(0x4)
	};


	// Struct InteractiveToolsFramework.BrushStampData
	// Size: 0x138 (0x138 - 0x0)
	struct FBrushStampData	
	{
	public:
		unsigned char UnknownData00_2[0x138]; // 0x0(0x138) UNKNOWN PROPERTY
	};


	// Struct InteractiveToolsFramework.BehaviorInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FBehaviorInfo	
	{
	public:
		UInputBehavior* Behavior; // 0x0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
	};


	// Struct InteractiveToolsFramework.InputRayHit
	// Size: 0x40 (0x40 - 0x0)
	struct FInputRayHit	
	{
	public:
		bool bHit; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		double HitDepth; // 0x8(0x8)
		FVector HitNormal; // 0x10(0x18)
		bool bHasHitNormal; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t HitIdentifier; // 0x2C(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> HitObject; // 0x38(0x8)
	};


	// Struct InteractiveToolsFramework.DeviceButtonState
	// Size: 0x20 (0x20 - 0x0)
	struct FDeviceButtonState	
	{
	public:
		FKey Button; // 0x0(0x18)
		bool bPressed; // 0x18(0x1)
		bool bDown; // 0x19(0x1)
		bool bReleased; // 0x1A(0x1)
		bool bDoubleClicked; // 0x1B(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct InteractiveToolsFramework.KeyboardInputDeviceState
	// Size: 0x20 (0x20 - 0x0)
	struct FKeyboardInputDeviceState	
	{
	public:
		FDeviceButtonState ActiveKey; // 0x0(0x20)
	};


	// Struct InteractiveToolsFramework.MouseInputDeviceState
	// Size: 0xB8 (0xB8 - 0x0)
	struct FMouseInputDeviceState	
	{
	public:
		FDeviceButtonState Left; // 0x0(0x20)
		FDeviceButtonState Middle; // 0x20(0x20)
		FDeviceButtonState Right; // 0x40(0x20)
		float WheelDelta; // 0x60(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FVector2D Position2D; // 0x68(0x10)
		FVector2D Delta2D; // 0x78(0x10)
		FRay WorldRay; // 0x88(0x30)
	};


	// Struct InteractiveToolsFramework.InputDeviceState
	// Size: 0xE0 (0xE0 - 0x0)
	struct FInputDeviceState	
	{
	public:
		EInputDevices InputDevice; // 0x0(0x4)
		bool bShiftKeyDown; // 0x4(0x1)
		bool bAltKeyDown; // 0x5(0x1)
		bool bCtrlKeyDown; // 0x6(0x1)
		bool bCmdKeyDown; // 0x7(0x1)
		FKeyboardInputDeviceState Keyboard; // 0x8(0x20)
		FMouseInputDeviceState Mouse; // 0x28(0xB8)
	};


	// Struct InteractiveToolsFramework.InputDeviceRay
	// Size: 0x48 (0x48 - 0x0)
	struct FInputDeviceRay	
	{
	public:
		FRay WorldRay; // 0x0(0x30)
		bool bHas2D; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FVector2D ScreenPosition; // 0x38(0x10)
	};


	// Struct InteractiveToolsFramework.ActiveGizmo
	// Size: 0x30 (0x30 - 0x0)
	struct FActiveGizmo	
	{
	public:
		UInteractiveGizmo* Gizmo; // 0x0(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x8(0x28) UNKNOWN PROPERTY
	};

}
