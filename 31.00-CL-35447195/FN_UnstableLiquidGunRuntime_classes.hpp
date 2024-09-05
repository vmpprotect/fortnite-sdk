#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UnstableLiquidGunRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class UnstableLiquidGunRuntime.FortLiquidGunProjectile
	// Inherited from AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x150 (0xC78 - 0xB28)
	class AFortLiquidGunProjectile : public AFortProjectileBase	
	{
	public:
		USceneComponent AttachComponent; // 0xB28(0x8)
		FVector AttachOffset; // 0xB30(0x18)
		int32_t ProjectileIndex; // 0xB48(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY
		FVector StopNormal; // 0xB50(0x18)
		ALiquidRibbonManager RibbonManager; // 0xB68(0x8)
		FScalableFloat MinDistBetweenProjectilesForSplineCollisionTest; // 0xB70(0x28)
		FScalableFloat MinDistBetweenInLineProjectilesForSplineCollisionTest; // 0xB98(0x28)
		FScalableFloat MinProjectileVelocityAngleToBeInLine; // 0xBC0(0x28)
		TEnumAsByte BroadSphereOverlapTraceChannel; // 0xBE8(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xBE9(0x3) UNKNOWN PROPERTY
		FName CapsuleTraceProfileName; // 0xBEC(0x4)
		bool bCapsuleTraceComplex; // 0xBF0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xBF1(0x7) UNKNOWN PROPERTY
		FVector_NetQuantize RandomDetachmentAngleFirstHalf; // 0xBF8(0x18)
		FVector_NetQuantize RandomDetachmentAngleSecondHalf; // 0xC10(0x18)
		bool bDrawDebugCollision; // 0xC28(0x1)
		bool bDrawDebugCollisionOnlyCapsuleTraceHits; // 0xC29(0x1)
		ELiquidRibbonDetachmentReason DetachmentReason; // 0xC2A(0x1)
		unsigned char UnknownData07_7[0x4D]; // 0xC2B(0x4D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile");
			return ret;
		}

		void SetDetachmentReason(ELiquidRibbonDetachmentReason InDetachmentReason); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE6D40
		void HandleSplineHit(FHitResult& Hit); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DE6C60
		ELiquidRibbonDetachmentReason GetDetachmentReason(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE6B80
	};


	// Class UnstableLiquidGunRuntime.LiquidRibbonManager
	// Inherited from AActor -> UObject
	// Size: 0x1B8 (0x448 - 0x290)
	class ALiquidRibbonManager : public AActor	
	{
	public:
		int32_t PointsPerSegment; // 0x290(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		FScalableFloat MaxSegmentLengthBeforeBreak; // 0x298(0x28)
		float SplineCurveTension; // 0x2C0(0x4)
		float MinPointSize; // 0x2C4(0x4)
		float MaxPointSize; // 0x2C8(0x4)
		int32_t NumPointsAtMinPointSize; // 0x2CC(0x4)
		int32_t NumPointsAtMaxPointSize; // 0x2D0(0x4)
		float SplineLengthForSizeCalculation; // 0x2D4(0x4)
		int32_t NumPointsToTaperDownSplineEndSize; // 0x2D8(0x4)
		float MinSplineEndTaperSize; // 0x2DC(0x4)
		float TaperSizeAtDetachment_RemapClosenessToBreakageOldMin; // 0x2E0(0x4)
		float TaperSizeAtDetachment_RemapClosenessToBreakageOldMax; // 0x2E4(0x4)
		float MinPointSizePercentForFlashIntensity; // 0x2E8(0x4)
		float MaxPointSizePercentForFlashIntensity; // 0x2EC(0x4)
		FName PositionsNiagaraParamName; // 0x2F0(0x4)
		FName RibbonIDsNiagaraParamName; // 0x2F4(0x4)
		FName RibbonVisibilitiesNiagaraParamName; // 0x2F8(0x4)
		FName FlashIntensitiesNiagaraParamName; // 0x2FC(0x4)
		FName RibbonSizesNiagaraParamName; // 0x300(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x304(0x4) UNKNOWN PROPERTY
		FScalableFloat CalculateBaseCurlOffset_MaxSegmentLength; // 0x308(0x28)
		FScalableFloat CalculateBaseCurlOffset_MaxTimeSinceDetachment; // 0x330(0x28)
		FScalableFloat CalculateBaseCurlOffset_TowardPerpendicularMult; // 0x358(0x28)
		FScalableFloat CalculateBaseCurlOffset_TowardEndMult; // 0x380(0x28)
		FScalableFloat CalculateBaseCurlOffset_TowardRandomMult; // 0x3A8(0x28)
		UCurveFloat TimeSinceDetachmentCurlCurve; // 0x3D0(0x8)
		FScalableFloat TimeSinceDetachmentCurlCurve_MaxTime; // 0x3D8(0x28)
		float CurlingMaxClosenessToBreakage; // 0x400(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x404(0x4) UNKNOWN PROPERTY
		TArray SegmentLengths; // 0x408(0x10)
		TArray Detachments; // 0x418(0x10)
		TArray SplineSegments; // 0x428(0x10)
		TArray Projectiles_Native; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UnstableLiquidGunRuntime.LiquidRibbonManager");
			return ret;
		}

		void SetNiagaraData(UNiagaraComponent NiagaraComponent, TArray& Positions, TArray& RibbonIDs, TArray& RibbonVisibilities, TArray& FlashIntensities, TArray& RibbonSizes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DE7520
		void RunSplineCollisionTestOnProjectiles(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE7440
		FVector GetPointOnSegment(float T, FLiquidRibbonSplineSegment& Segment); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414DE7360
		FLiquidRibbonSplineDetachment GetOrAddDetachment(int32_t RibbonID, FLiquidRibbonSplineSegment& Segment); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE7280
		int32_t GetFirstVisiblePointIndex(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414DE71A0
		void CalculateSplinePointsAndSetNiagaraData(TArray& Projectiles, bool bAttachSplineToMuzzle, UNiagaraComponent NiagaraComponent, TArray& OutAllPositions, TArray& OutRibbonIDs, TArray& OutRibbonVisibilities, TArray& OutFlashIntensities, TArray& OutRibbonSizes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE70C0
		TArray CalculateSegments(TArray& Points, float Tension); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DE6FE0
		float CalculatePointSize(int32_t SegmentIndex, int32_t PointIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE6F00
		float CalculatePointFlashIntensity(int32_t PointSize); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE6E20
	};

}
