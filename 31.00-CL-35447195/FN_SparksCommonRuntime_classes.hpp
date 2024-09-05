#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCommonRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksCommonRuntime.SparksCommonUtilities
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class USparksCommonUtilities : public UActorComponent	
	{
	public:
		bool bSparksToolIsVisible; // 0xA0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UClass CaptureToolWidgetClass; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCommonRuntime.SparksCommonUtilities");
			return ret;
		}

		void ShowSparksCaptureTool(bool bShow); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE9D60
		USparksCommonUtilities GetSparksCommonUtilities(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DE9C80
	};


	// Class SparksCommonRuntime.SparksControllerComponent_DisablePCStreamingSource
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class USparksControllerComponent_DisablePCStreamingSource : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCommonRuntime.SparksControllerComponent_DisablePCStreamingSource");
			return ret;
		}

		bool IsSparksCustomStreamingEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DE9E40
	};


	// Class SparksCommonRuntime.SparksCrowdSpawner
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x330 - 0x220)
	class USparksCrowdSpawner : public USceneComponent	
	{
	public:
		TMap MeshWeights; // 0x220(0x50)
		int32_t TotalMeshWeight; // 0x270(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x274(0x4) UNKNOWN PROPERTY
		FVector Area; // 0x278(0x18)
		FIntPoint CrowdSize; // 0x290(0x8)
		FVector2D PositionRandomness; // 0x298(0x10)
		FVector LookAt; // 0x2A8(0x18)
		float LookAtRandomness; // 0x2C0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY
		FRotator AdditionalRotation; // 0x2C8(0x18)
		FVector2D ScaleVariance; // 0x2E0(0x10)
		int32_t BatchSize; // 0x2F0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		TArray CrowdMembersToSpawn; // 0x2F8(0x10)
		UCurveFloat ParamTransitionCurve; // 0x308(0x8)
		FTimerHandle TransitionTickTimerHandle; // 0x310(0x8)
		int32_t CurrentTransitionParamIndex; // 0x318(0x4)
		float ParamValueAtStartOfTransition; // 0x31C(0x4)
		float CurrentParamValue; // 0x320(0x4)
		float CurrentTransitionTarget; // 0x324(0x4)
		float CurrentTransitionDuration; // 0x328(0x4)
		float TimeElapsedInCurrentTransition; // 0x32C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCommonRuntime.SparksCrowdSpawner");
			return ret;
		}

		void TransitionCrowdToTargetParamValue(int32_t DataIndex, float TargetValue, float TimeToTransition); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DEA0E0
		bool SpawnCrowdNow(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, TMap InMeshWeights); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414DEA000
		bool SpawnCrowd(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, int32_t InBatchSize, TMap InMeshWeights); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414DE9F20
	};


	// Class SparksCommonRuntime.SparksMapDataLayerController
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class ASparksMapDataLayerController : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCommonRuntime.SparksMapDataLayerController");
			return ret;
		}

		void OnSparksActivationChange(FString ActivationString); // Flags: Event|Protected|BlueprintEvent 0x7FF414DEA2A0
		FString GetCurrentSparksActivation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEA1C0
	};

}
