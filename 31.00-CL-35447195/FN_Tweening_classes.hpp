#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Tweening
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Tweening.TweenSplineInfo
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UTweenSplineInfo : public UObject	
	{
	public:
		TWeakObjectPtr Spline; // 0x28(0x8)
		ETweenSplineAlignmentOption Alignment; // 0x30(0x1)
		bool bIgnorePitch; // 0x31(0x1)
		bool bIgnoreYaw; // 0x32(0x1)
		bool bIgnoreRoll; // 0x33(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.TweenSplineInfo");
			return ret;
		}
	};


	// Class Tweening.ActorTweening
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UActorTweening : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.ActorTweening");
			return ret;
		}

		void BP_TransformAlongSplineTo(int32_t& OutTweenId, UObject ContextObject, AActor& Target, USplineComponent Spline, ETweenSplineAlignmentOption Alignment, bool bIgnorePitch, bool bIgnoreYaw, bool bIgnoreRoll, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149C31D8
	};


	// Class Tweening.MaterialTweening
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMaterialTweening : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.MaterialTweening");
			return ret;
		}

		void BP_ScalarParamTo(int32_t& OutTweenId, UObject ContextObject, UMaterialInstanceDynamic& Target, FName ParameterName, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149C3398
		void BP_ColorParamTo(int32_t& OutTweenId, UObject ContextObject, UMaterialInstanceDynamic& Target, FName ParameterName, FTweenOptionalLinearColor FromOptions, FLinearColor ToValue, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149C32B8
	};


	// Class Tweening.MeshMaterialTweening
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMeshMaterialTweening : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.MeshMaterialTweening");
			return ret;
		}

		void BP_ScalarParamTo(int32_t& OutTweenId, UObject ContextObject, UMeshComponent Target, FName ParameterName, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149C3478
	};


	// Class Tweening.TweenMaterialParameterInfo
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UTweenMaterialParameterInfo : public UObject	
	{
	public:
		FName ParameterName; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.TweenMaterialParameterInfo");
			return ret;
		}
	};


	// Class Tweening.TweenManager
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0xD8 (0x108 - 0x30)
	class UTweenManager : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		TMap TweenContexts; // 0x58(0x50)
		unsigned char UnknownData03_7[0x60]; // 0xA8(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.TweenManager");
			return ret;
		}

		void StopTweens(TArray InTweenIds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C3E18
		bool StopTween(int32_t InTweenId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C3D38
		bool SetTweenTiming(int32_t InTweenId, float InDuration, float InDelayAtBeginning, float InDelayAtEnd); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149C3C58
		void ResetTweens(TArray InTweenIds, ETweenResetDestination InDestination); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C3B78
		bool ResetTween(int32_t InTweenId, ETweenResetDestination InDestination); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C3A98
		bool PlayTweenWithLooping(int32_t InTweenId, ETweenLoopType InLoopType, int32_t InLoopCount, ETweenPlayDirection InPlayDirection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C39B8
		void PlayTweens(TArray InTweenIds, ETweenPlayDirection InPlayDirection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C38D8
		bool PlayTween(int32_t InTweenId, ETweenPlayDirection InPlayDirection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C37F8
		void KillTweens(TArray InTweenIds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C3718
		bool KillTween(int32_t InTweenId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C3638
		bool HasTween(int32_t InTweenId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4149C3558
	};


	// Class Tweening.TweenSequence
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UTweenSequence : public UObject	
	{
	public:
		TArray SequenceEntries; // 0x28(0x10)
		UTweenManager TweenManager; // 0x38(0x8)
		TArray TimerHandles; // 0x40(0x10)
		unsigned char UnknownData01_7[0x40]; // 0x50(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.TweenSequence");
			return ret;
		}

		void Stop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C4358
		void Play(ETweenPlayDirection InPlayDirection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C4278
		void BP_JoinTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence& OutSequence); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149C4198
		void BP_JoinSequence(UTweenSequence& SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence& OutSequence); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149C40B8
		void BP_AppendTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence& OutSequence); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149C3FD8
		void BP_AppendSequence(UTweenSequence& SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence& OutSequence); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149C3EF8
	};


	// Class Tweening.WidgetTweening
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetTweening : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.WidgetTweening");
			return ret;
		}

		void BP_TranslationTo(int32_t& OutTweenId, UObject ContextObject, UWidget Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149C4898
		void BP_TransformShearTo(int32_t& OutTweenId, UObject ContextObject, UWidget Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149C47B8
		void BP_TransformScaleTo(int32_t& OutTweenId, UObject ContextObject, UWidget Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149C46D8
		void BP_TransformPivotTo(int32_t& OutTweenId, UObject ContextObject, UWidget Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149C45F8
		void BP_TransformAngleTo(int32_t& OutTweenId, UObject ContextObject, UWidget Target, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149C4518
		void BP_OpacityTo(int32_t& OutTweenId, UObject ContextObject, UWidget Target, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149C4438
	};

}
