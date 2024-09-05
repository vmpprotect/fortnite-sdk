#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Tweening
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Tweening.TweenSplineInfo
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UTweenSplineInfo : public UObject	
	{
	public:
		TWeakObjectPtr<USplineComponent*> Spline; // 0x28(0x8)
		ETweenSplineAlignmentOption Alignment; // 0x30(0x1)
		bool bIgnorePitch; // 0x31(0x1)
		bool bIgnoreYaw; // 0x32(0x1)
		bool bIgnoreRoll; // 0x33(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

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

		void BP_TransformAlongSplineTo(int32_t& OutTweenId, UObject* ContextObject, AActor* Target, USplineComponent* Spline, ETweenSplineAlignmentOption Alignment, bool bIgnorePitch, bool bIgnoreYaw, bool bIgnoreRoll, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FBCCD1C(relative to base address)
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

		void BP_ScalarParamTo(int32_t& OutTweenId, UObject* ContextObject, UMaterialInstanceDynamic* Target, FName ParameterName, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FBCB8CC(relative to base address)
		void BP_ColorParamTo(int32_t& OutTweenId, UObject* ContextObject, UMaterialInstanceDynamic* Target, FName ParameterName, FTweenOptionalLinearColor FromOptions, FLinearColor ToValue, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FBCA144(relative to base address)
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

		void BP_ScalarParamTo(int32_t& OutTweenId, UObject* ContextObject, UMeshComponent* Target, FName ParameterName, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FBCC2FC(relative to base address)
	};


	// Class Tweening.TweenMaterialParameterInfo
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UTweenMaterialParameterInfo : public UObject	
	{
	public:
		FName ParameterName; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		TMap<int32_t, UObject*> TweenContexts; // 0x58(0x50)
		unsigned char UnknownData01_7[0x60]; // 0xA8(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.TweenManager");
			return ret;
		}

		void StopTweens(TArray<int32_t> InTweenIds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD13FC(relative to base address)
		bool StopTween(int32_t InTweenId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD1370(relative to base address)
		bool SetTweenTiming(int32_t InTweenId, float InDuration, float InDelayAtBeginning, float InDelayAtEnd); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FBD121C(relative to base address)
		void ResetTweens(TArray<int32_t> InTweenIds, ETweenResetDestination InDestination); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD110C(relative to base address)
		bool ResetTween(int32_t InTweenId, ETweenResetDestination InDestination); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD104C(relative to base address)
		bool PlayTweenWithLooping(int32_t InTweenId, ETweenLoopType InLoopType, int32_t InLoopCount, ETweenPlayDirection InPlayDirection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD0E00(relative to base address)
		void PlayTweens(TArray<int32_t> InTweenIds, ETweenPlayDirection InPlayDirection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD0F3C(relative to base address)
		bool PlayTween(int32_t InTweenId, ETweenPlayDirection InPlayDirection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD0D40(relative to base address)
		void KillTweens(TArray<int32_t> InTweenIds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD0BE4(relative to base address)
		bool KillTween(int32_t InTweenId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD0B58(relative to base address)
		bool HasTween(int32_t InTweenId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74FBD0ACC(relative to base address)
	};


	// Class Tweening.TweenSequence
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UTweenSequence : public UObject	
	{
	public:
		TArray<FTweenSequenceEntry> SequenceEntries; // 0x28(0x10)
		UTweenManager* TweenManager; // 0x38(0x8)
		TArray<FTimerHandle> TimerHandles; // 0x40(0x10)
		unsigned char UnknownData00_7[0x40]; // 0x50(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Tweening.TweenSequence");
			return ret;
		}

		void Stop(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD135C(relative to base address)
		void Play(ETweenPlayDirection InPlayDirection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBD0CC0(relative to base address)
		void BP_JoinTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence* OutSequence); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FBCAD14(relative to base address)
		void BP_JoinSequence(UTweenSequence* SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence* OutSequence); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FBCAAC0(relative to base address)
		void BP_AppendTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence* OutSequence); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FBC9F54(relative to base address)
		void BP_AppendSequence(UTweenSequence* SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence* OutSequence); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FBC9D00(relative to base address)
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

		void BP_TranslationTo(int32_t& OutTweenId, UObject* ContextObject, UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FBD00D0(relative to base address)
		void BP_TransformShearTo(int32_t& OutTweenId, UObject* ContextObject, UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FBCF6D4(relative to base address)
		void BP_TransformScaleTo(int32_t& OutTweenId, UObject* ContextObject, UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FBCECD8(relative to base address)
		void BP_TransformPivotTo(int32_t& OutTweenId, UObject* ContextObject, UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FBCE2DC(relative to base address)
		void BP_TransformAngleTo(int32_t& OutTweenId, UObject* ContextObject, UWidget* Target, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FBCD914(relative to base address)
		void BP_OpacityTo(int32_t& OutTweenId, UObject* ContextObject, UWidget* Target, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FBCAF04(relative to base address)
	};

}
