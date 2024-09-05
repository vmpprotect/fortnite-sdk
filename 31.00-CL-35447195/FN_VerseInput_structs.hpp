#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseInput
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VerseInput.VerseInputActionData
	// Inherited from FFastArraySerializerItem
	// Size: 0x84 (0x90 - 0xC)
	struct FVerseInputActionData : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData02_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UInputAction InputAction; // 0x10(0x8)
		TArray ActionKeys; // 0x18(0x10)
		TArray AxisKeys; // 0x28(0x10)
		FGuid Guid; // 0x38(0x10)
		TArray Triggers; // 0x48(0x10)
		TArray Modifiers; // 0x58(0x10)
		TArray Actions; // 0x68(0x10)
		TArray InputNames; // 0x78(0x10)
		bool bConsumeInput; // 0x88(0x1)
		bool bIsAxis; // 0x89(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x8A(0x6) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputActionDataList
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FVerseInputActionDataList : public FFastArraySerializer	
	{
	public:
		TArray InputActions; // 0x108(0x10)
		UVerseReplicatedInputDataComponent OwnerComponent; // 0x118(0x8)
	};


	// Struct VerseInput.VerseInputClientActionBaseData
	// Size: 0x8 (0x8 - 0x0)
	struct FVerseInputClientActionBaseData	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputClientActionData_ApplyImpulse
	// Inherited from FVerseInputClientActionBaseData
	// Size: 0x18 (0x20 - 0x8)
	struct FVerseInputClientActionData_ApplyImpulse : public FVerseInputClientActionBaseData	
	{
	public:
		FVector Impulse; // 0x8(0x18)
	};


	// Struct VerseInput.VerseInputClientActionData_Launch
	// Inherited from FVerseInputClientActionBaseData
	// Size: 0x18 (0x20 - 0x8)
	struct FVerseInputClientActionData_Launch : public FVerseInputClientActionBaseData	
	{
	public:
		FVector Velocity; // 0x8(0x18)
	};


	// Struct VerseInput.VerseInputClientActionData_PlaySound
	// Inherited from FVerseInputClientActionBaseData
	// Size: 0x8 (0x10 - 0x8)
	struct FVerseInputClientActionData_PlaySound : public FVerseInputClientActionBaseData	
	{
	public:
		FName AssetPath; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputClientActionData_SpawnParticleEffect
	// Inherited from FVerseInputClientActionBaseData
	// Size: 0x8 (0x10 - 0x8)
	struct FVerseInputClientActionData_SpawnParticleEffect : public FVerseInputClientActionBaseData	
	{
	public:
		FName AssetPath; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputModifierBaseData
	// Size: 0x8 (0x8 - 0x0)
	struct FVerseInputModifierBaseData	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputModifierData_DeadZone
	// Inherited from FVerseInputModifierBaseData
	// Size: 0x10 (0x18 - 0x8)
	struct FVerseInputModifierData_DeadZone : public FVerseInputModifierBaseData	
	{
	public:
		float LowerThreshold; // 0x8(0x4)
		float UpperThreshold; // 0xC(0x4)
		EDeadZoneType Type; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputModifierData_Negate
	// Inherited from FVerseInputModifierBaseData
	// Size: 0x8 (0x10 - 0x8)
	struct FVerseInputModifierData_Negate : public FVerseInputModifierBaseData	
	{
	public:
		bool bX; // 0x8(0x1)
		bool bY; // 0x9(0x1)
		bool bZ; // 0xA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputModifierData_Scalar
	// Inherited from FVerseInputModifierBaseData
	// Size: 0x18 (0x20 - 0x8)
	struct FVerseInputModifierData_Scalar : public FVerseInputModifierBaseData	
	{
	public:
		FVector Scalar; // 0x8(0x18)
	};


	// Struct VerseInput.VerseInputModifierData_Smooth
	// Inherited from FVerseInputModifierBaseData
	// Size: 0x0 (0x8 - 0x8)
	struct FVerseInputModifierData_Smooth : public FVerseInputModifierBaseData	
	{
	public:
	};


	// Struct VerseInput.VerseInputModifierData_ResponseCurveExponential
	// Inherited from FVerseInputModifierBaseData
	// Size: 0x18 (0x20 - 0x8)
	struct FVerseInputModifierData_ResponseCurveExponential : public FVerseInputModifierBaseData	
	{
	public:
		FVector CurveExponent; // 0x8(0x18)
	};


	// Struct VerseInput.VerseInputModifierData_Swizzle
	// Inherited from FVerseInputModifierBaseData
	// Size: 0x8 (0x10 - 0x8)
	struct FVerseInputModifierData_Swizzle : public FVerseInputModifierBaseData	
	{
	public:
		EInputAxisSwizzle Order; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputTriggerBaseData
	// Size: 0x10 (0x10 - 0x0)
	struct FVerseInputTriggerBaseData	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		float ActuationThreshold; // 0x8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputTriggerData_Down
	// Inherited from FVerseInputTriggerBaseData
	// Size: 0x0 (0x10 - 0x10)
	struct FVerseInputTriggerData_Down : public FVerseInputTriggerBaseData	
	{
	public:
	};


	// Struct VerseInput.VerseInputTriggerData_Pressed
	// Inherited from FVerseInputTriggerBaseData
	// Size: 0x0 (0x10 - 0x10)
	struct FVerseInputTriggerData_Pressed : public FVerseInputTriggerBaseData	
	{
	public:
	};


	// Struct VerseInput.VerseInputTriggerData_Released
	// Inherited from FVerseInputTriggerBaseData
	// Size: 0x0 (0x10 - 0x10)
	struct FVerseInputTriggerData_Released : public FVerseInputTriggerBaseData	
	{
	public:
	};


	// Struct VerseInput.VerseInputTriggerData_Hold
	// Inherited from FVerseInputTriggerBaseData
	// Size: 0x8 (0x18 - 0x10)
	struct FVerseInputTriggerData_Hold : public FVerseInputTriggerBaseData	
	{
	public:
		float HoldTimeThreshold; // 0x10(0x4)
		bool IsOneShot; // 0x14(0x1)
		bool AffectedByTimeDilation; // 0x15(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputTriggerData_HoldAndRelease
	// Inherited from FVerseInputTriggerBaseData
	// Size: 0x8 (0x18 - 0x10)
	struct FVerseInputTriggerData_HoldAndRelease : public FVerseInputTriggerBaseData	
	{
	public:
		float HoldTimeThreshold; // 0x10(0x4)
		bool AffectedByTimeDilation; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct VerseInput.VerseInputTriggerData_Tap
	// Inherited from FVerseInputTriggerBaseData
	// Size: 0x8 (0x18 - 0x10)
	struct FVerseInputTriggerData_Tap : public FVerseInputTriggerBaseData	
	{
	public:
		float TapReleaseTimeThreshold; // 0x10(0x4)
		bool AffectedByTimeDilation; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};

}
