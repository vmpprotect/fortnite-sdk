#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UnstableLiquidGunRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class UnstableLiquidGunRuntime.FortLiquidGunProjectile
	// Inherited from AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x150 (0xC78 - 0xB28)
	class AFortLiquidGunProjectile : public AFortProjectileBase	
	{
	public:
		USceneComponent* AttachComponent; // 0xB28(0x8)
		FVector AttachOffset; // 0xB30(0x18)
		int32_t ProjectileIndex; // 0xB48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY
		FVector StopNormal; // 0xB50(0x18)
		ALiquidRibbonManager* RibbonManager; // 0xB68(0x8)
		FScalableFloat MinDistBetweenProjectilesForSplineCollisionTest; // 0xB70(0x28)
		FScalableFloat MinDistBetweenInLineProjectilesForSplineCollisionTest; // 0xB98(0x28)
		FScalableFloat MinProjectileVelocityAngleToBeInLine; // 0xBC0(0x28)
		TEnumAsByte<ECollisionChannel> BroadSphereOverlapTraceChannel; // 0xBE8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xBE9(0x3) UNKNOWN PROPERTY
		FName CapsuleTraceProfileName; // 0xBEC(0x4)
		bool bCapsuleTraceComplex; // 0xBF0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xBF1(0x7) UNKNOWN PROPERTY
		FVector_NetQuantize RandomDetachmentAngleFirstHalf; // 0xBF8(0x18)
		FVector_NetQuantize RandomDetachmentAngleSecondHalf; // 0xC10(0x18)
		bool bDrawDebugCollision; // 0xC28(0x1)
		bool bDrawDebugCollisionOnlyCapsuleTraceHits; // 0xC29(0x1)
		ELiquidRibbonDetachmentReason DetachmentReason; // 0xC2A(0x1)
		unsigned char UnknownData03_7[0x4D]; // 0xC2B(0x4D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile");
			return ret;
		}

		void SetDetachmentReason(ELiquidRibbonDetachmentReason InDetachmentReason); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519E07F0(relative to base address)
		void HandleSplineHit(FHitResult& Hit); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		ELiquidRibbonDetachmentReason GetDetachmentReason(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519E0564(relative to base address)
	};


	// Class UnstableLiquidGunRuntime.LiquidRibbonManager
	// Inherited from AActor -> UObject
	// Size: 0x1B8 (0x448 - 0x290)
	class ALiquidRibbonManager : public AActor	
	{
	public:
		int32_t PointsPerSegment; // 0x290(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_6[0x4]; // 0x304(0x4) UNKNOWN PROPERTY
		FScalableFloat CalculateBaseCurlOffset_MaxSegmentLength; // 0x308(0x28)
		FScalableFloat CalculateBaseCurlOffset_MaxTimeSinceDetachment; // 0x330(0x28)
		FScalableFloat CalculateBaseCurlOffset_TowardPerpendicularMult; // 0x358(0x28)
		FScalableFloat CalculateBaseCurlOffset_TowardEndMult; // 0x380(0x28)
		FScalableFloat CalculateBaseCurlOffset_TowardRandomMult; // 0x3A8(0x28)
		UCurveFloat* TimeSinceDetachmentCurlCurve; // 0x3D0(0x8)
		FScalableFloat TimeSinceDetachmentCurlCurve_MaxTime; // 0x3D8(0x28)
		float CurlingMaxClosenessToBreakage; // 0x400(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x404(0x4) UNKNOWN PROPERTY
		TArray<float> SegmentLengths; // 0x408(0x10)
		TArray<FLiquidRibbonSplineDetachment> Detachments; // 0x418(0x10)
		TArray<FLiquidRibbonSplineSegment> SplineSegments; // 0x428(0x10)
		TArray<AFortLiquidGunProjectile*> Projectiles_Native; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UnstableLiquidGunRuntime.LiquidRibbonManager");
			return ret;
		}

		void SetNiagaraData(UNiagaraComponent* NiagaraComponent, TArray<FVector>& Positions, TArray<int32_t>& RibbonIDs, TArray<bool>& RibbonVisibilities, TArray<float>& FlashIntensities, TArray<int32_t>& RibbonSizes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519E086C(relative to base address)
		void RunSplineCollisionTestOnProjectiles(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519E0794(relative to base address)
		FVector GetPointOnSegment(float T, FLiquidRibbonSplineSegment& Segment); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519E0680(relative to base address)
		FLiquidRibbonSplineDetachment GetOrAddDetachment(int32_t RibbonID, FLiquidRibbonSplineSegment& Segment); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519E057C(relative to base address)
		int32_t GetFirstVisiblePointIndex(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74F0F8EBC(relative to base address)
		void CalculateSplinePointsAndSetNiagaraData(TArray<AFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, UNiagaraComponent* NiagaraComponent, TArray<FVector>& OutAllPositions, TArray<int32_t>& OutRibbonIDs, TArray<bool>& OutRibbonVisibilities, TArray<float>& OutFlashIntensities, TArray<int32_t>& OutRibbonSizes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519E0104(relative to base address)
		TArray CalculateSegments(TArray<FVector>& Points, float Tension); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519DFF6C(relative to base address)
		float CalculatePointSize(int32_t SegmentIndex, int32_t PointIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519DFEB0(relative to base address)
		float CalculatePointFlashIntensity(int32_t PointSize); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519DFE20(relative to base address)
	};

}
