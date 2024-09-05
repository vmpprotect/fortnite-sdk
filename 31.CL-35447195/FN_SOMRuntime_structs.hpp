#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SOMRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SOMRuntime.ScriptedObjectMovement_AStarGraphWrapper
	// Size: 0x1 (0x1 - 0x0)
	struct FScriptedObjectMovement_AStarGraphWrapper	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SOMRuntime.ScriptedObjectMovement_DynamicPathContext
	// Size: 0x38 (0x38 - 0x0)
	struct FScriptedObjectMovement_DynamicPathContext	
	{
	public:
		UFortScriptedObjectMovement_Slot SourceSlot; // 0x0(0x8)
		UFortScriptedObjectMovement_Slot DestinationSlot; // 0x8(0x8)
		TScriptInterface GridProvider; // 0x10(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x20(0x18) UNKNOWN PROPERTY
	};


	// Struct SOMRuntime.ScriptedObjectMovement_Grid
	// Size: 0xC8 (0xC8 - 0x0)
	struct FScriptedObjectMovement_Grid	
	{
	public:
		unsigned char UnknownData02_7[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
		FVector CellSize; // 0x50(0x18)
		unsigned char UnknownData03_7[0x60]; // 0x68(0x60) UNKNOWN PROPERTY
	};


	// Struct SOMRuntime.FortScriptedObjectMovementPhaseData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortScriptedObjectMovementPhaseData	
	{
	public:
		TArray Structures; // 0x0(0x10)
	};


	// Struct SOMRuntime.ScriptedObjectMovementCalendarEventData
	// Size: 0x28 (0x28 - 0x0)
	struct FScriptedObjectMovementCalendarEventData	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct SOMRuntime.ScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
	// Size: 0x18 (0x18 - 0x0)
	struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData	
	{
	public:
		FString EventName; // 0x0(0x10)
		float DurationTimeSeconds; // 0x10(0x4)
		float DelayStartTimeSeconds; // 0x14(0x4)
	};


	// Struct SOMRuntime.ScriptedObjectMovement_StaticPathStepData
	// Size: 0xF0 (0xF0 - 0x0)
	struct FScriptedObjectMovement_StaticPathStepData	
	{
	public:
		FTransform StartWorldTransform; // 0x0(0x60)
		FTransform EndWorldTransform; // 0x60(0x60)
		int32_t MasterPathStartSplinePoint; // 0xC0(0x4)
		int32_t SubSplineStartPoint; // 0xC4(0x4)
		float MoveAtServerTimeSecs; // 0xC8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		AFortScriptedObjectMovement_MovableObjectBase PathTraveler; // 0xD0(0x8)
		unsigned char UnknownData04_6[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
		FGameplayTag MoveStyleTag; // 0xE0(0x4)
		bool bTeleport; // 0xE4(0x1)
		bool bIsSkipStep; // 0xE5(0x1)
		unsigned char UnknownData05_7[0xA]; // 0xE6(0xA) UNKNOWN PROPERTY
	};


	// Struct SOMRuntime.StaticPathCalendarSplinePointGroup
	// Size: 0x30 (0x30 - 0x0)
	struct FStaticPathCalendarSplinePointGroup	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct SOMRuntime.ScriptedObjectMovement_StaticPathSplineInputKeyData
	// Size: 0x28 (0x28 - 0x0)
	struct FScriptedObjectMovement_StaticPathSplineInputKeyData	
	{
	public:
		bool bLockGeneratedData; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString CalendarEvent; // 0x8(0x10)
		FString PauseCalendarEvent; // 0x18(0x10)
	};


	// Struct SOMRuntime.ScriptedObjectMovement_StepMetaData
	// Size: 0x1 (0x1 - 0x0)
	struct FScriptedObjectMovement_StepMetaData	
	{
	public:
		bool bSkipStep; // 0x0(0x1)
	};


	// Struct SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
	// Size: 0xC0 (0xC0 - 0x0)
	struct FScriptedObjectMovement_StaticPathTravelerData	
	{
	public:
		TArray GeneratedSplinesArray; // 0x0(0x10)
		TArray StepMetaData; // 0x10(0x10)
		USplineComponent EnterSpline; // 0x20(0x8)
		USplineComponent ExitSpline; // 0x28(0x8)
		AFortScriptedObjectMovement_MovableObjectBase PathTraveler; // 0x30(0x8)
		int32_t TravelOrder; // 0x38(0x4)
		float LateralOffset; // 0x3C(0x4)
		bool bLocked; // 0x40(0x1)
		bool bLockEnterSpline; // 0x41(0x1)
		bool bLockExitSpline; // 0x42(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x43(0x5) UNKNOWN PROPERTY
		FVector TravelerBounds; // 0x48(0x18)
		unsigned char UnknownData03_7[0x60]; // 0x60(0x60) UNKNOWN PROPERTY
	};

}
