#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCommonRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksCommonRuntime.SparksCommonUtilities
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class USparksCommonUtilities : public UActorComponent	
	{
	public:
		bool bSparksToolIsVisible; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UClass* CaptureToolWidgetClass; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCommonRuntime.SparksCommonUtilities");
			return ret;
		}

		void ShowSparksCaptureTool(bool bShow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		USparksCommonUtilities GetSparksCommonUtilities(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A16090(relative to base address)
	};


	// Class SparksCommonRuntime.SparksControllerComponent_DisablePCStreamingSource
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class USparksControllerComponent_DisablePCStreamingSource : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCommonRuntime.SparksControllerComponent_DisablePCStreamingSource");
			return ret;
		}

		bool IsSparksCustomStreamingEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1614C(relative to base address)
	};


	// Class SparksCommonRuntime.SparksCrowdSpawner
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x330 - 0x220)
	class USparksCrowdSpawner : public USceneComponent	
	{
	public:
		TMap<UInstancedStaticMeshComponent*, int32_t> MeshWeights; // 0x220(0x50)
		int32_t TotalMeshWeight; // 0x270(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x274(0x4) UNKNOWN PROPERTY
		FVector Area; // 0x278(0x18)
		FIntPoint CrowdSize; // 0x290(0x8)
		FVector2D PositionRandomness; // 0x298(0x10)
		FVector LookAt; // 0x2A8(0x18)
		float LookAtRandomness; // 0x2C0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY
		FRotator AdditionalRotation; // 0x2C8(0x18)
		FVector2D ScaleVariance; // 0x2E0(0x10)
		int32_t BatchSize; // 0x2F0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		TArray<FCrowdMemberToSpawn> CrowdMembersToSpawn; // 0x2F8(0x10)
		UCurveFloat* ParamTransitionCurve; // 0x308(0x8)
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

		void TransitionCrowdToTargetParamValue(int32_t DataIndex, float TargetValue, float TimeToTransition); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A17084(relative to base address)
		bool SpawnCrowdNow(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751A16954(relative to base address)
		bool SpawnCrowd(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, int32_t InBatchSize, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751A16164(relative to base address)
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

		void OnSparksActivationChange(FString ActivationString); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FString GetCurrentSparksActivation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A16074(relative to base address)
	};

}
