#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EnhancedInput
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/EnhancedInput.EPlayerMappableKeySlot
	enum EPlayerMappableKeySlot
	{
		EPlayerMappableKeySlot__First = 0,
		EPlayerMappableKeySlot__Second = 1,
		EPlayerMappableKeySlot__Third = 2,
		EPlayerMappableKeySlot__Fourth = 3,
		EPlayerMappableKeySlot__Fifth = 4,
		EPlayerMappableKeySlot__Sixth = 5,
		EPlayerMappableKeySlot__Seventh = 6,
		EPlayerMappableKeySlot__Unspecified = 7,
		EPlayerMappableKeySlot__Max = 8,
	};


	// Enum /Script/EnhancedInput.EInputActionValueType
	enum EInputActionValueType
	{
		EInputActionValueType__Boolean = 0,
		EInputActionValueType__Axis1D = 1,
		EInputActionValueType__Axis2D = 2,
		EInputActionValueType__Axis3D = 3,
	};


	// Enum /Script/EnhancedInput.EMappingQueryResult
	enum EMappingQueryResult
	{
		EMappingQueryResult__Error_EnhancedInputNotEnabled = 0,
		EMappingQueryResult__Error_InputContextNotInActiveContexts = 1,
		EMappingQueryResult__Error_InvalidAction = 2,
		EMappingQueryResult__NotMappable = 3,
		EMappingQueryResult__MappingAvailable = 4,
	};


	// Enum /Script/EnhancedInput.EMappingQueryIssue
	enum EMappingQueryIssue
	{
		EMappingQueryIssue__NoIssue = 0,
		EMappingQueryIssue__ReservedByAction = 1,
		EMappingQueryIssue__HidesExistingMapping = 2,
		EMappingQueryIssue__HiddenByExistingMapping = 4,
		EMappingQueryIssue__CollisionWithMappingInSameContext = 8,
		EMappingQueryIssue__ForcesTypePromotion = 10,
		EMappingQueryIssue__ForcesTypeDemotion = 20,
	};


	// Enum /Script/EnhancedInput.EPlayerMappableKeySettingBehaviors
	enum EPlayerMappableKeySettingBehaviors
	{
		EPlayerMappableKeySettingBehaviors__InheritSettingsFromAction = 0,
		EPlayerMappableKeySettingBehaviors__OverrideSettings = 1,
		EPlayerMappableKeySettingBehaviors__IgnoreSettings = 2,
	};


	// Enum /Script/EnhancedInput.EInputMappingRebuildType
	enum EInputMappingRebuildType
	{
		EInputMappingRebuildType__None = 0,
		EInputMappingRebuildType__Rebuild = 1,
		EInputMappingRebuildType__RebuildWithFlush = 2,
	};


	// Enum /Script/EnhancedInput.EInputActionAccumulationBehavior
	enum EInputActionAccumulationBehavior
	{
		EInputActionAccumulationBehavior__TakeHighestAbsoluteValue = 0,
		EInputActionAccumulationBehavior__Cumulative = 1,
	};


	// Enum /Script/EnhancedInput.ENormalizeInputSmoothingType
	enum ENormalizeInputSmoothingType
	{
		ENormalizeInputSmoothingType__None = 0,
		ENormalizeInputSmoothingType__Lerp = 1,
		ENormalizeInputSmoothingType__Interp_To = 2,
		ENormalizeInputSmoothingType__Interp_Constant_To = 3,
		ENormalizeInputSmoothingType__Interp_Circular_In = 4,
		ENormalizeInputSmoothingType__Interp_Circular_Out = 5,
		ENormalizeInputSmoothingType__Interp_Circular_In_Out = 6,
		ENormalizeInputSmoothingType__Interp_Ease_In = 7,
		ENormalizeInputSmoothingType__Interp_Ease_Out = 8,
		ENormalizeInputSmoothingType__Interp_Ease_In_Out = 9,
		ENormalizeInputSmoothingType__Interp_Expo_In = A,
		ENormalizeInputSmoothingType__Interp_Expo_Out = B,
		ENormalizeInputSmoothingType__Interp_Expo_In_Out = C,
		ENormalizeInputSmoothingType__Interp_Sin_In = D,
		ENormalizeInputSmoothingType__Interp_Sin_Out = E,
		ENormalizeInputSmoothingType__Interp_Sin_In_Out = F,
	};


	// Enum /Script/EnhancedInput.EDeadZoneType
	enum EDeadZoneType
	{
		EDeadZoneType__Axial = 0,
		EDeadZoneType__Radial = 1,
	};


	// Enum /Script/EnhancedInput.EFOVScalingType
	enum EFOVScalingType
	{
		EFOVScalingType__Standard = 0,
		EFOVScalingType__UE4_BackCompat = 1,
	};


	// Enum /Script/EnhancedInput.EInputAxisSwizzle
	enum EInputAxisSwizzle
	{
		EInputAxisSwizzle__YXZ = 0,
		EInputAxisSwizzle__ZYX = 1,
		EInputAxisSwizzle__XZY = 2,
		EInputAxisSwizzle__YZX = 3,
		EInputAxisSwizzle__ZXY = 4,
	};


	// Enum /Script/EnhancedInput.ETriggerState
	enum ETriggerState
	{
		ETriggerState__None = 0,
		ETriggerState__Ongoing = 1,
		ETriggerState__Triggered = 2,
	};


	// Enum /Script/EnhancedInput.ETriggerEvent
	enum ETriggerEvent
	{
		ETriggerEvent__None = 0,
		ETriggerEvent__Triggered = 1,
		ETriggerEvent__Started = 2,
		ETriggerEvent__Ongoing = 4,
		ETriggerEvent__Canceled = 8,
		ETriggerEvent__Completed = 10,
	};


	// Enum /Script/EnhancedInput.ETriggerType
	enum ETriggerType
	{
		ETriggerType__Explicit = 0,
		ETriggerType__Implicit = 1,
		ETriggerType__Blocker = 2,
	};


	// Enum /Script/EnhancedInput.ETriggerEventsSupported
	enum ETriggerEventsSupported
	{
		ETriggerEventsSupported__None = 0,
		ETriggerEventsSupported__Instant = 1,
		ETriggerEventsSupported__Uninterruptible = 2,
		ETriggerEventsSupported__Ongoing = 4,
		ETriggerEventsSupported__All = 7,
	};

}
