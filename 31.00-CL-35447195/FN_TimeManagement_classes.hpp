#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TimeManagement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x16]; // 0x3A(0x16) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x27]; // 0x31(0x27) UNKNOWN PROPERTY

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

		FFrameTime TransformTime(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& DestinationRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41449F838
		FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32_t B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41449F758
		FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41449F678
		FFrameTime SnapFrameTimeToRate(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& SnapToRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41449F598
		FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, FFrameRate& FrameRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41449F4B8
		FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32_t B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41449F3D8
		bool IsValid_MultipleOf(FFrameRate& InFrameRate, FFrameRate& OtherFramerate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41449F2F8
		bool IsValid_Framerate(FFrameRate& InFrameRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41449F218
		FFrameRate GetTimecodeFrameRate(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41449F138
		Ftimecode GetTimecode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41449F058
		FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32_t B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41449EF78
		FString Conv_TimecodeToString(Ftimecode& InTimecode, bool bForceSignDisplay); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41449EE98
		float Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime& InFrameTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41449EDB8
		float Conv_FrameRateToSeconds(FFrameRate& InFrameRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41449ECD8
		float Conv_FrameRateToInterval(FFrameRate InFrameRate); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41449EBF8
		int32_t Conv_FrameNumberToInteger(FFrameNumber& InFrameNumber); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41449EB18
		FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32_t B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41449EA38
		FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41449E958
	};


	// Class TimeManagement.TimeSynchronizationSource
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UTimeSynchronizationSource : public UObject	
	{
	public:
		bool bUseForSynchronization; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t FrameOffset; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TimeManagement.TimeSynchronizationSource");
			return ret;
		}
	};

}
