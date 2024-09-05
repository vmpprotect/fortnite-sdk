#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TimeManagement
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TimeManagement.FixedFrameRateCustomTimeStep
	// Inherited from UEngineCustomTimeStep -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TimeManagement.FixedFrameRateCustomTimeStep");
			return ret;
		}
	};


	// Class TimeManagement.GenlockedCustomTimeStep
	// Inherited from UFixedFrameRateCustomTimeStep -> UEngineCustomTimeStep -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep	
	{
	public:
		bool bAutoDetectFormat; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TimeManagement.GenlockedCustomTimeStep");
			return ret;
		}
	};


	// Class TimeManagement.GenlockedFixedRateCustomTimeStep
	// Inherited from UGenlockedCustomTimeStep -> UFixedFrameRateCustomTimeStep -> UEngineCustomTimeStep -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep	
	{
	public:
		FFrameRate FrameRate; // 0x30(0x8)
		bool bShouldBlock; // 0x38(0x1)
		bool bForceSingleFrameDeltaTime; // 0x39(0x1)
		unsigned char UnknownData00_7[0x16]; // 0x3A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TimeManagement.GenlockedFixedRateCustomTimeStep");
			return ret;
		}
	};


	// Class TimeManagement.GenlockedTimecodeProvider
	// Inherited from UTimecodeProvider -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UGenlockedTimecodeProvider : public UTimecodeProvider	
	{
	public:
		bool bUseGenlockToCount; // 0x30(0x1)
		unsigned char UnknownData00_7[0x27]; // 0x31(0x27) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TimeManagement.GenlockedTimecodeProvider");
			return ret;
		}
	};


	// Class TimeManagement.TimeManagementBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TimeManagement.TimeManagementBlueprintLibrary");
			return ret;
		}

		FFrameTime TransformTime(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& DestinationRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C09A734(relative to base address)
		FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32_t B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C09A564(relative to base address)
		FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C09A394(relative to base address)
		FFrameTime SnapFrameTimeToRate(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& SnapToRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C09A248(relative to base address)
		FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, FFrameRate& FrameRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C09A16C(relative to base address)
		FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32_t B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099F9C(relative to base address)
		bool IsValid_MultipleOf(FFrameRate& InFrameRate, FFrameRate& OtherFramerate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099EA8(relative to base address)
		bool IsValid_Framerate(FFrameRate& InFrameRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099E18(relative to base address)
		FFrameRate GetTimecodeFrameRate(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099DF0(relative to base address)
		Ftimecode GetTimecode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099DB4(relative to base address)
		FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32_t B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099BE4(relative to base address)
		FString Conv_TimecodeToString(Ftimecode& InTimecode, bool bForceSignDisplay); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099A50(relative to base address)
		float Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime& InFrameTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C09996C(relative to base address)
		float Conv_FrameRateToSeconds(FFrameRate& InFrameRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C0998C0(relative to base address)
		float Conv_FrameRateToInterval(FFrameRate InFrameRate); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C09978C(relative to base address)
		int32_t Conv_FrameNumberToInteger(FFrameNumber& InFrameNumber); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099704(relative to base address)
		FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32_t B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099534(relative to base address)
		FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099364(relative to base address)
	};


	// Class TimeManagement.TimeSynchronizationSource
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UTimeSynchronizationSource : public UObject	
	{
	public:
		bool bUseForSynchronization; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t FrameOffset; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TimeManagement.TimeSynchronizationSource");
			return ret;
		}
	};

}
