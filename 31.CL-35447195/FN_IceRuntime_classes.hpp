#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: IceRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class IceRuntime.FortCurieElementAttachConditionHandlerIce
	// Inherited from UFortCurieElementAttachConditionHandler -> UCurieElementAttachConditionHandler -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFortCurieElementAttachConditionHandlerIce : public UFortCurieElementAttachConditionHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IceRuntime.FortCurieElementAttachConditionHandlerIce");
			return ret;
		}
	};


	// Class IceRuntime.FortCurieElementAttachHandlerIce
	// Inherited from UFortCurieElementAttachHandler -> UCurieElementAttachHandler -> UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x58 (0xE8 - 0x90)
	class UFortCurieElementAttachHandlerIce : public UFortCurieElementAttachHandler	
	{
	public:
		float MinWaterContentOnDetach; // 0x90(0x4)
		float ShatterDamageThreshold; // 0x94(0x4)
		TMap AggregateDamagePerActor; // 0x98(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IceRuntime.FortCurieElementAttachHandlerIce");
			return ret;
		}

		void ResolveBuildingDamage(ABuildingActor DamagedBuildingActor, AController InstigatedBy, AActor DamageCauser); // Flags: Final|Native|Private 0x7FF414CFDBD8
		void HandleBuildingDamaged(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414CFDAF8
	};


	// Class IceRuntime.FortCurieIceNativeFXHandlerConfig
	// Inherited from UFortCurieNativeFXHandlerConfig -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x168 - 0x168)
	class UFortCurieIceNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IceRuntime.FortCurieIceNativeFXHandlerConfig");
			return ret;
		}
	};


	// Class IceRuntime.FortCurieIceNativeFXHandler
	// Inherited from UFortCurieNativeFXHandler -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFortCurieIceNativeFXHandler : public UFortCurieNativeFXHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IceRuntime.FortCurieIceNativeFXHandler");
			return ret;
		}
	};


	// Class IceRuntime.IceGroundPath
	// Inherited from AActor -> UObject
	// Size: 0x60 (0x2F0 - 0x290)
	class AIceGroundPath : public AActor	
	{
	public:
		UStaticMesh StaticMesh; // 0x290(0x8)
		UMaterial Material; // 0x298(0x8)
		TEnumAsByte ForwardAxis; // 0x2A0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2A1(0x7) UNKNOWN PROPERTY
		TArray SplinePoints; // 0x2A8(0x10)
		FVector SplineOffset; // 0x2B8(0x18)
		float SplineColliderExtentWidth; // 0x2D0(0x4)
		float SplineColliderExtentHeight; // 0x2D4(0x4)
		float LandscapeTraceBuffer; // 0x2D8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY
		TArray BoxColliderArray; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IceRuntime.IceGroundPath");
			return ret;
		}

		void OnRep_SplinePoints(); // Flags: Final|Native|Private 0x7FF414CFDF58
		FVector GetLocationOnLandscape(FVector Location); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414CFDE78
		bool GetLastSplinePointLocation(FVector& LastPointLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CFDD98
		void AddSplinePoint(FVector InWorldLoc); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414CFDCB8
	};


	// Class IceRuntime.FortCurieIcePropagationManagerConfig
	// Inherited from UCurieManagerComponentConfig -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UFortCurieIcePropagationManagerConfig : public UCurieManagerComponentConfig	
	{
	public:
		float IceBlockSeparation; // 0x40(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UClass IceBlockClass; // 0x48(0x8)
		float PropagationRate; // 0x50(0x4)
		int32_t DefaultPropagationDepth; // 0x54(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IceRuntime.FortCurieIcePropagationManagerConfig");
			return ret;
		}
	};


	// Class IceRuntime.FortCurieIcePropagationManager
	// Inherited from UFortCurieManagerComponent -> UCurieManagerComponent -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UFortCurieIcePropagationManager : public UFortCurieManagerComponent	
	{
	public:
		UFortCurieIcePropagationManagerConfig InternalManagerConfig; // 0x30(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x38(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IceRuntime.FortCurieIcePropagationManager");
			return ret;
		}

		void OnIceBlockDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF414CFE038
	};


	// Class IceRuntime.FortIceSkatesMovementControls
	// Inherited from UFortMovementControls -> UObject
	// Size: 0x190 (0x1C0 - 0x30)
	class UFortIceSkatesMovementControls : public UFortMovementControls	
	{
	public:
		FScalableFloat TurnSpeed; // 0x30(0x28)
		FScalableFloat Acceleration; // 0x58(0x28)
		FScalableFloat UphillSlopeAcceleration; // 0x80(0x28)
		FScalableFloat DownhillSlopeAcceleration; // 0xA8(0x28)
		FScalableFloat MaxSlopeAngle; // 0xD0(0x28)
		FScalableFloat MinSpeed; // 0xF8(0x28)
		FScalableFloat TargetSpeed; // 0x120(0x28)
		FScalableFloat MaxSpeed; // 0x148(0x28)
		FScalableFloat AirDrag; // 0x170(0x28)
		unsigned char UnknownData01_7[0x28]; // 0x198(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IceRuntime.FortIceSkatesMovementControls");
			return ret;
		}
	};

}
