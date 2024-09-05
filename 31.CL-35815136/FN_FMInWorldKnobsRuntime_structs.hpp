#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMInWorldKnobsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FMInWorldKnobsRuntime.FabricUserOptionSaveData
	// Size: 0x10 (0x10 - 0x0)
	struct FFabricUserOptionSaveData	
	{
	public:
		TArray<FFabricUserOptionSavedValue> SavedUserOptions; // 0x0(0x10)
	};


	// Struct FMInWorldKnobsRuntime.FabricUserOptionSavedValue
	// Size: 0x20 (0x20 - 0x0)
	struct FFabricUserOptionSavedValue	
	{
	public:
		FString Key; // 0x0(0x10)
		FString Value; // 0x10(0x10)
	};


	// Struct FMInWorldKnobsRuntime.ScreenMeshArray
	// Size: 0x10 (0x10 - 0x0)
	struct FScreenMeshArray	
	{
	public:
		TArray<TWeakObjectPtr> ScreenMeshArrayByHeight; // 0x0(0x10)
	};


	// Struct FMInWorldKnobsRuntime.ScreenWidgetLayoutInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FScreenWidgetLayoutInfo	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct FMInWorldKnobsRuntime.FabricWidgetLayout
	// Size: 0x18 (0x18 - 0x0)
	struct FFabricWidgetLayout	
	{
	public:
		FVector2D GridPosition; // 0x0(0x10)
		UClass* FabricWidgetClass; // 0x10(0x8)
	};


	// Struct FMInWorldKnobsRuntime.FabricScreenLayout
	// Inherited from FFabricWidgetLayout
	// Size: 0x8 (0x20 - 0x18)
	struct FFabricScreenLayout : public FFabricWidgetLayout	
	{
	public:
		FName UserOptionName; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct FMInWorldKnobsRuntime.FabricUserOptionValue
	// Size: 0x8 (0x8 - 0x0)
	struct FFabricUserOptionValue	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct FMInWorldKnobsRuntime.FabricUserOptionValueInt
	// Inherited from FFabricUserOptionValue
	// Size: 0x8 (0x10 - 0x8)
	struct FFabricUserOptionValueInt : public FFabricUserOptionValue	
	{
	public:
		int32_t Value; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FMInWorldKnobsRuntime.FabricUserOptionValueFloat
	// Inherited from FFabricUserOptionValue
	// Size: 0x8 (0x10 - 0x8)
	struct FFabricUserOptionValueFloat : public FFabricUserOptionValue	
	{
	public:
		float Value; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FMInWorldKnobsRuntime.FabricUserOptionValueEnum
	// Inherited from FFabricUserOptionValue
	// Size: 0x10 (0x18 - 0x8)
	struct FFabricUserOptionValueEnum : public FFabricUserOptionValue	
	{
	public:
		FString Value; // 0x8(0x10)
	};


	// Struct FMInWorldKnobsRuntime.FabricUserOptionValueBool
	// Inherited from FFabricUserOptionValue
	// Size: 0x8 (0x10 - 0x8)
	struct FFabricUserOptionValueBool : public FFabricUserOptionValue	
	{
	public:
		bool Value; // 0x8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct FMInWorldKnobsRuntime.FabricUserOptionValueString
	// Inherited from FFabricUserOptionValue
	// Size: 0x10 (0x18 - 0x8)
	struct FFabricUserOptionValueString : public FFabricUserOptionValue	
	{
	public:
		FString Value; // 0x8(0x10)
	};


	// Struct FMInWorldKnobsRuntime.FabricUserOptionPreset
	// Size: 0x20 (0x20 - 0x0)
	struct FFabricUserOptionPreset	
	{
	public:
		FString UserOption; // 0x0(0x10)
		FInstancedStruct UserOptionValue; // 0x10(0x10)
	};


	// Struct FMInWorldKnobsRuntime.FabricUserOptionPresetCollection
	// Size: 0x10 (0x10 - 0x0)
	struct FFabricUserOptionPresetCollection	
	{
	public:
		TArray<FFabricUserOptionPreset> UserOptionPresets; // 0x0(0x10)
	};


	// Struct FMInWorldKnobsRuntime.FloatProviderState
	// Size: 0xC (0xC - 0x0)
	struct FFloatProviderState	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Weight; // 0x4(0x4)
		float LastValue; // 0x8(0x4)
	};


	// Struct FMInWorldKnobsRuntime.FMOutgoingCableConnection
	// Size: 0x30 (0x30 - 0x0)
	struct FFMOutgoingCableConnection	
	{
	public:
		FName OutputPortName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> Device; // 0x8(0x20)
		FName ComponentName; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct FMInWorldKnobsRuntime.UserOptionDefinitionFMOutgoingConnectionMetaData
	// Inherited from FUserOptionDefinitionMetaData
	// Size: 0x30 (0x38 - 0x8)
	struct FUserOptionDefinitionFMOutgoingConnectionMetaData : public FUserOptionDefinitionMetaData	
	{
	public:
		FFMOutgoingCableConnection DefaultValue; // 0x8(0x30)
	};

}
