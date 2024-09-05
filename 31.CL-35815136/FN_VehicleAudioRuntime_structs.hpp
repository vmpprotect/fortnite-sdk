#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VehicleAudioRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct VehicleAudioRuntime.FortMotorSimPatternState
	// Size: 0x30 (0x30 - 0x0)
	struct FFortMotorSimPatternState	
	{
	public:
		TArray<UCurveVector*> Curves; // 0x0(0x10)
		float OnsetInterpSpeed; // 0x10(0x4)
		float ThrottleThreshold; // 0x14(0x4)
		float RpmFallRate; // 0x18(0x4)
		float SpeedMin; // 0x1C(0x4)
		float SpeedMax; // 0x20(0x4)
		float RpmOffsetMin; // 0x24(0x4)
		float RpmOffsetMax; // 0x28(0x4)
		bool bLoopCurves; // 0x2C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
	};


	// Struct VehicleAudioRuntime.FortVehicleAudioControllerUpdateGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FFortVehicleAudioControllerUpdateGroup	
	{
	public:
		TArray<TScriptInterface> RegisteredControllers; // 0x0(0x10)
		UFortVehicleAudioControllerUpdater* Updater; // 0x10(0x8)
	};


	// Struct VehicleAudioRuntime.VehicleEngineAudioRegistryEntryRequest
	// Size: 0x30 (0x30 - 0x0)
	struct FVehicleEngineAudioRegistryEntryRequest	
	{
	public:
		TScriptInterface<Class> Vehicle; // 0x0(0x10)
		TWeakObjectPtr<USoundBase*> Asset; // 0x10(0x20)
	};


	// Struct VehicleAudioRuntime.FortVehicleSoundComponent_BoostContext
	// Size: 0x18 (0x18 - 0x0)
	struct FFortVehicleSoundComponent_BoostContext	
	{
	public:
		USoundBase* BoostStartSound; // 0x0(0x8)
		USoundBase* BoostEndSound; // 0x8(0x8)
		float BoostStartFadeOutTime; // 0x10(0x4)
		float BoostEndFadeOutTime; // 0x14(0x4)
	};


	// Struct VehicleAudioRuntime.FortVehicleSoundComponent_DamageStateContext
	// Size: 0x20 (0x20 - 0x0)
	struct FFortVehicleSoundComponent_DamageStateContext	
	{
	public:
		USoundBase* ScrapingSound; // 0x0(0x8)
		float RelevantScrapingSpeedThreshold; // 0x8(0x4)
		float NormalizedScrapingSpeedRangeA; // 0xC(0x4)
		float NormalizedScrapingSpeedRangeB; // 0x10(0x4)
		FName ScrapingParamName; // 0x14(0x4)
		FName SpeedParamName; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct VehicleAudioRuntime.VehicleSoundSurfaceDataRow
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FVehicleSoundSurfaceDataRow : public FTableRowBase	
	{
	public:
		TEnumAsByte<EPhysicalSurface> SurfaceType; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TArray<USoundBase*> SurfaceSounds; // 0x10(0x10)
	};


	// Struct VehicleAudioRuntime.VehicleCollisionAudioConfig
	// Size: 0x50 (0x50 - 0x0)
	struct FVehicleCollisionAudioConfig	
	{
	public:
		USoundBase* PawnCollisionSound; // 0x0(0x8)
		TWeakObjectPtr<UFortCollisionAudioComponent*> CollisionAudioComponent; // 0x8(0x8)
		float MaxVehicleSpeed; // 0x10(0x4)
		float MinCollisionAudioSpeedRange; // 0x14(0x4)
		float MaxCollisionAudioSpeedRange; // 0x18(0x4)
		float MinCollisionAudioNormalizedSpeedRange; // 0x1C(0x4)
		float MaxCollisionAudioNormalizedSpeedRange; // 0x20(0x4)
		float VehicleRecentlyAwakenedThreshold; // 0x24(0x4)
		float VehicleVolumeMultiplier; // 0x28(0x4)
		float LandscapeVolumeMultiplier; // 0x2C(0x4)
		FVector AudioLocationOffset; // 0x30(0x18)
		float VehicleAwakeTimestamp; // 0x48(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct VehicleAudioRuntime.FortVehicleSoundSurfaceParam
	// Size: 0xC (0xC - 0x0)
	struct FFortVehicleSoundSurfaceParam	
	{
	public:
		TEnumAsByte<EPhysicalSurface> Surface; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName Name; // 0x4(0x4)
		float Value; // 0x8(0x4)
	};


	// Struct VehicleAudioRuntime.FortVehicleSoundComponent_SurfaceContext
	// Size: 0x178 (0x178 - 0x0)
	struct FFortVehicleSoundComponent_SurfaceContext	
	{
	public:
		float BrakingHardStopThreshold; // 0x0(0x4)
		float BrakingSoftStopThreshold; // 0x4(0x4)
		float SurfaceParamInterpSpeed; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TMap<TEnumAsByte, TEnumAsByte> SurfaceMap; // 0x10(0x50)
		FName WaterParamName; // 0x60(0x4)
		float WaterParamInterpSpeed; // 0x64(0x4)
		FName AirParamName; // 0x68(0x4)
		float AirParamAttackInterpSpeed; // 0x6C(0x4)
		float AirParamReleaseInterpSpeed; // 0x70(0x4)
		float MinSpeedForSkidFX; // 0x74(0x4)
		float MaxSpeedForSkidFX; // 0x78(0x4)
		FName SkiddingParamName; // 0x7C(0x4)
		FName StartSkidTriggerParamName; // 0x80(0x4)
		FName StopSkidTriggerParamName; // 0x84(0x4)
		float SkiddingParamInterpSpeed; // 0x88(0x4)
		FName SurfaceMagnitudeParamName; // 0x8C(0x4)
		float SpringCompressionMagnitudeAttack; // 0x90(0x4)
		float SpringCompressionMagnitudeRelease; // 0x94(0x4)
		float MaxSpringCompressionMultiplier; // 0x98(0x4)
		float ResetSpringCompressionMagnitudeTime; // 0x9C(0x4)
		float NormalizedVehicleSpeedThreshold; // 0xA0(0x4)
		float MinAirTimeForLandSound; // 0xA4(0x4)
		FName BrakeStopSurfaceParamName; // 0xA8(0x4)
		float BrakeStopFadeOutDuration; // 0xAC(0x4)
		float HardStopThreshold; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		USoundBase* SoftStopSound; // 0xB8(0x8)
		USoundBase* HardStopSound; // 0xC0(0x8)
		bool bHasTireMod; // 0xC8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		UVehicleSoundSurfaceData* SurfaceData; // 0xD0(0x8)
		UVehicleSoundSurfaceData* SurfaceOffRoadTireModData; // 0xD8(0x8)
		FName TirePoppedAudioParamName; // 0xE0(0x4)
		FName TireRepairedAudioParamName; // 0xE4(0x4)
		FName TireQuantityParamName; // 0xE8(0x4)
		FName OnStopAudioParamName; // 0xEC(0x4)
		FName SurfaceSpeedParamName; // 0xF0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		USoundBase* WaterEnterSound; // 0xF8(0x8)
		USoundBase* WaterExitSound; // 0x100(0x8)
		FName LandSpeedParamName; // 0x108(0x4)
		FName LandVelocityParamName; // 0x10C(0x4)
		USoundBase* LandSound; // 0x110(0x8)
		FVector LandSoundLocationOffset; // 0x118(0x18)
		TEnumAsByte<EPhysicalSurface> CurrentSurface; // 0x130(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
		TArray<FFortVehicleSoundSurfaceParam> SurfaceParams; // 0x138(0x10)
		unsigned char UnknownData05_7[0x30]; // 0x148(0x30) UNKNOWN PROPERTY
	};

}
