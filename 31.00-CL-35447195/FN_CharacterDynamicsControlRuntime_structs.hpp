#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CharacterDynamicsControlRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CharacterDynamicsControlRuntime.BitArrayBinaryDecisionTreeElement
	// Size: 0x48 (0x48 - 0x0)
	struct FBitArrayBinaryDecisionTreeElement	
	{
	public:
		int32_t Value; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FBitArrayWrapper BitArrayMask; // 0x8(0x20)
		FBitArrayWrapper BitArraySet; // 0x28(0x20)
	};


	// Struct CharacterDynamicsControlRuntime.BitArrayWrapper
	// Size: 0x20 (0x20 - 0x0)
	struct FBitArrayWrapper	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct CharacterDynamicsControlRuntime.BitArrayBinaryDecisionTree
	// Size: 0x10 (0x10 - 0x0)
	struct FBitArrayBinaryDecisionTree	
	{
	public:
		TArray TreeStructure; // 0x0(0x10)
	};


	// Struct CharacterDynamicsControlRuntime.BinaryDecisionTreeElement
	// Size: 0x18 (0x18 - 0x0)
	struct FBinaryDecisionTreeElement	
	{
	public:
		int32_t Value; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		int64_t BitMask; // 0x8(0x8)
		int64_t BitSet; // 0x10(0x8)
	};


	// Struct CharacterDynamicsControlRuntime.BinaryDecisionTree
	// Size: 0x10 (0x10 - 0x0)
	struct FBinaryDecisionTree	
	{
	public:
		TArray TreeStructure; // 0x0(0x10)
	};


	// Struct CharacterDynamicsControlRuntime.FortGravityOverrideParameters
	// Size: 0x68 (0x68 - 0x0)
	struct FFortGravityOverrideParameters	
	{
	public:
		FVector WindFrequency; // 0x0(0x18)
		FVector WindAmplitude; // 0x18(0x18)
		FVector WindOffset; // 0x30(0x18)
		FVector GravityOverride; // 0x48(0x18)
		FName JointName; // 0x60(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct CharacterDynamicsControlRuntime.FortRigidBodyAnimNodeParameters
	// Size: 0x90 (0x90 - 0x0)
	struct FFortRigidBodyAnimNodeParameters	
	{
	public:
		FVector ComponentLinearAccScale; // 0x0(0x18)
		FVector ComponentLinearVelScale; // 0x18(0x18)
		FSimSpaceSettings SimSpaceSettings; // 0x30(0x60)
	};


	// Struct CharacterDynamicsControlRuntime.FortRigidBodyWithControlStateTransitionParameters
	// Size: 0x38 (0x38 - 0x0)
	struct FFortRigidBodyWithControlStateTransitionParameters	
	{
	public:
		FPhysicsControlControlAndModifierParameters ControlAndModifierParameters; // 0x0(0x30)
		float TransitionTimeSeconds; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct CharacterDynamicsControlRuntime.ProxyProperty
	// Size: 0x28 (0x28 - 0x0)
	struct FProxyProperty	
	{
	public:
		uint32_t Operator; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FBitArrayWrapper BitArrayMask; // 0x8(0x20)
	};


	// Struct CharacterDynamicsControlRuntime.ProxyPropertyOrderingEditorData
	// Size: 0x18 (0x18 - 0x0)
	struct FProxyPropertyOrderingEditorData	
	{
	public:
		TArray ReversePropertyOrder; // 0x0(0x10)
		int32_t ProxyPropertyIndex; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};

}
