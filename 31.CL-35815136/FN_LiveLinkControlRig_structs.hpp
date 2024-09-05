#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LiveLinkControlRig
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct LiveLinkControlRig.RigUnit_LiveLinkEvaluateInputDeviceValue
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x128 (0x130 - 0x8)
	struct FRigUnit_LiveLinkEvaluateInputDeviceValue : public FRigUnit	
	{
	public:
		FName SubjectName; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FLiveLinkGamepadInputDeviceFrameData InputDeviceData; // 0x10(0x120)
	};


	// Struct LiveLinkControlRig.RigUnit_LiveLinkBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit_LiveLinkBase : public FRigUnit	
	{
	public:
	};


	// Struct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
	// Inherited from FRigUnit_LiveLinkBase -> FRigUnit -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigUnit_LiveLinkEvaluteFrameAnimation : public FRigUnit_LiveLinkBase	
	{
	public:
		FName SubjectName; // 0x8(0x4)
		bool bDrawDebug; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FLinearColor DebugColor; // 0x10(0x10)
		FTransform DebugDrawOffset; // 0x20(0x60)
		FSubjectFrameHandle SubjectFrame; // 0x80(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
	};


	// Struct LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
	// Inherited from FRigUnit_LiveLinkBase -> FRigUnit -> FRigVMStruct
	// Size: 0x88 (0x90 - 0x8)
	struct FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase	
	{
	public:
		FSubjectFrameHandle SubjectFrame; // 0x8(0x18)
		FName TransformName; // 0x20(0x4)
		ERigVMTransformSpace Space; // 0x24(0x1)
		unsigned char UnknownData00_6[0xB]; // 0x25(0xB) UNKNOWN PROPERTY
		FTransform Transform; // 0x30(0x60)
	};


	// Struct LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
	// Inherited from FRigUnit_LiveLinkBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_LiveLinkGetParameterValueByName : public FRigUnit_LiveLinkBase	
	{
	public:
		FSubjectFrameHandle SubjectFrame; // 0x8(0x18)
		FName ParameterName; // 0x20(0x4)
		float Value; // 0x24(0x4)
	};


	// Struct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
	// Inherited from FRigUnit_LiveLinkBase -> FRigUnit -> FRigVMStruct
	// Size: 0xD8 (0xE0 - 0x8)
	struct FRigUnit_LiveLinkEvaluteFrameTransform : public FRigUnit_LiveLinkBase	
	{
	public:
		FName SubjectName; // 0x8(0x4)
		bool bDrawDebug; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FLinearColor DebugColor; // 0x10(0x10)
		FTransform DebugDrawOffset; // 0x20(0x60)
		FTransform Transform; // 0x80(0x60)
	};


	// Struct LiveLinkControlRig.RigUnit_LiveLinkEvaluateBasicValue
	// Inherited from FRigUnit_LiveLinkBase -> FRigUnit -> FRigVMStruct
	// Size: 0x10 (0x18 - 0x8)
	struct FRigUnit_LiveLinkEvaluateBasicValue : public FRigUnit_LiveLinkBase	
	{
	public:
		FName SubjectName; // 0x8(0x4)
		FName PropertyName; // 0xC(0x4)
		float Value; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};

}
