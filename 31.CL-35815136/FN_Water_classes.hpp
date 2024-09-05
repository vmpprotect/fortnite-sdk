#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Water
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Water.WaterBodyMeshComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x590 - 0x590)
	class UWaterBodyMeshComponent : public UStaticMeshComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyMeshComponent");
			return ret;
		}
	};


	// Class Water.WaterBodyStaticMeshComponent
	// Inherited from UWaterBodyMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x590 - 0x590)
	class UWaterBodyStaticMeshComponent : public UWaterBodyMeshComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyStaticMeshComponent");
			return ret;
		}
	};


	// Class Water.WaterTerrainComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UWaterTerrainComponent : public UActorComponent	
	{
	public:
		TWeakObjectPtr<AWaterZone*> WaterZoneOverride; // 0xA0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterTerrainComponent");
			return ret;
		}
	};


	// Class Water.BuoyancyComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x168 (0x208 - 0xA0)
	class UBuoyancyComponent : public UActorComponent	
	{
	public:
		TArray<FSphericalPontoon> Pontoons; // 0xA0(0x10)
		FMulticastInlineDelegate OnEnteredWaterDelegate; // 0xB0(0x10)
		FMulticastInlineDelegate OnExitedWaterDelegate; // 0xC0(0x10)
		FBuoyancyData BuoyancyData; // 0xD0(0x90)
		TArray<UWaterBodyComponent*> CurrentWaterBodyComponents; // 0x160(0x10)
		UPrimitiveComponent* SimulatingComponent; // 0x170(0x8)
		unsigned char UnknownData00_7[0x90]; // 0x178(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.BuoyancyComponent");
			return ret;
		}

		void OnPontoonExitedWater(FSphericalPontoon& Pontoon); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA0C44C(relative to base address)
		void OnPontoonEnteredWater(FSphericalPontoon& Pontoon); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA0C388(relative to base address)
		bool IsOverlappingWaterBody(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0C36C(relative to base address)
		bool IsInWaterBody(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0C350(relative to base address)
		void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, FVector& OutWaterVelocity); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DA0B928(relative to base address)
		TArray GetCurrentWaterBodyComponents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0B800(relative to base address)
	};


	// Class Water.BuoyancyManager
	// Inherited from AActor -> UObject
	// Size: 0xC8 (0x358 - 0x290)
	class ABuoyancyManager : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x290(0x50) UNKNOWN PROPERTY
		TArray<UBuoyancyComponent*> BuoyancyComponents; // 0x2E0(0x10)
		unsigned char UnknownData01_7[0x68]; // 0x2F0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.BuoyancyManager");
			return ret;
		}

		bool GetBuoyancyComponentManager(UObject* WorldContextObject, ABuoyancyManager* Manager); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF74DA0B644(relative to base address)
	};


	// Class Water.EnvQueryTest_InsideWaterBody
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest	
	{
	public:
		bool bIncludeWaves; // 0x1F8(0x1)
		bool bSimpleWaves; // 0x1F9(0x1)
		bool bIgnoreExclusionVolumes; // 0x1FA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x1FB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.EnvQueryTest_InsideWaterBody");
			return ret;
		}
	};


	// Class Water.GerstnerWaterWaveGeneratorBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGerstnerWaterWaveGeneratorBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.GerstnerWaterWaveGeneratorBase");
			return ret;
		}

		void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74DA0B50C(relative to base address)
	};


	// Class Water.GerstnerWaterWaveGeneratorSimple
	// Inherited from UGerstnerWaterWaveGeneratorBase -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase	
	{
	public:
		int32_t NumWaves; // 0x28(0x4)
		int32_t Seed; // 0x2C(0x4)
		float Randomness; // 0x30(0x4)
		float MinWavelength; // 0x34(0x4)
		float MaxWavelength; // 0x38(0x4)
		float WavelengthFalloff; // 0x3C(0x4)
		float MinAmplitude; // 0x40(0x4)
		float MaxAmplitude; // 0x44(0x4)
		unsigned char UnknownData00_7[0x18]; // 0x48(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.GerstnerWaterWaveGeneratorSimple");
			return ret;
		}
	};


	// Class Water.GerstnerWaterWaveGeneratorSpectrum
	// Inherited from UGerstnerWaterWaveGeneratorBase -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase	
	{
	public:
		EWaveSpectrumType SpectrumType; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray<FGerstnerWaveOctave> Octaves; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.GerstnerWaterWaveGeneratorSpectrum");
			return ret;
		}
	};


	// Class Water.WaterWavesBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWaterWavesBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterWavesBase");
			return ret;
		}
	};


	// Class Water.WaterWaves
	// Inherited from UWaterWavesBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWaterWaves : public UWaterWavesBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterWaves");
			return ret;
		}
	};


	// Class Water.GerstnerWaterWaves
	// Inherited from UWaterWaves -> UWaterWavesBase -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGerstnerWaterWaves : public UWaterWaves	
	{
	public:
		UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator; // 0x28(0x8)
		TArray<FGerstnerWave> GerstnerWaves; // 0x30(0x10)
		float MaxWaveHeight; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.GerstnerWaterWaves");
			return ret;
		}
	};


	// Class Water.GerstnerWaterWaveSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UGerstnerWaterWaveSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x30(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.GerstnerWaterWaveSubsystem");
			return ret;
		}
	};


	// Class Water.LakeCollisionComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x28 (0x4F0 - 0x4C8)
	class ULakeCollisionComponent : public UPrimitiveComponent	
	{
	public:
		UBodySetup* CachedBodySetup; // 0x4C8(0x8)
		FVector BoxExtent; // 0x4D0(0x18)
		unsigned char UnknownData00_7[0x8]; // 0x4E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.LakeCollisionComponent");
			return ret;
		}
	};


	// Class Water.NiagaraDataInterfaceWater
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UNiagaraDataInterfaceWater : public UNiagaraDataInterface	
	{
	public:
		bool bFindWaterBodyOnSpawn; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UWaterBodyComponent* SourceBodyComponent; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.NiagaraDataInterfaceWater");
			return ret;
		}
	};


	// Class Water.NiagaraWaterFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.NiagaraWaterFunctionLibrary");
			return ret;
		}

		void SetWaterBodyComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, UWaterBodyComponent* WaterBodyComponent); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DA0C8E8(relative to base address)
		void SetWaterBody(UNiagaraComponent* NiagaraSystem, FString OverrideName, AWaterBody* WaterBody); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DA0C7F0(relative to base address)
	};


	// Class Water.OceanCollisionComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x510 - 0x4C8)
	class UOceanCollisionComponent : public UPrimitiveComponent	
	{
	public:
		UBodySetup* CachedBodySetup; // 0x4C8(0x8)
		unsigned char UnknownData00_7[0x40]; // 0x4D0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.OceanCollisionComponent");
			return ret;
		}
	};


	// Class Water.OceanBoxCollisionComponent
	// Inherited from UBoxComponent -> UShapeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x500 - 0x500)
	class UOceanBoxCollisionComponent : public UBoxComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.OceanBoxCollisionComponent");
			return ret;
		}
	};


	// Class Water.WaterBody
	// Inherited from AActor -> UObject
	// Size: 0x70 (0x300 - 0x290)
	class AWaterBody : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UWaterSplineComponent* SplineComp; // 0x298(0x8)
		UWaterSplineMetadata* WaterSplineMetadata; // 0x2A0(0x8)
		UWaterBodyComponent* WaterBodyComponent; // 0x2A8(0x8)
		int32_t WaterBodyIndex; // 0x2B0(0x4)
		EWaterBodyType WaterBodyType; // 0x2B4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2B5(0x3) UNKNOWN PROPERTY
		UWaterWavesBase* WaterWaves; // 0x2B8(0x8)
		UWaterBodyInfoMeshComponent* WaterInfoMeshComponent; // 0x2C0(0x8)
		UWaterBodyInfoMeshComponent* DilatedWaterInfoMeshComponent; // 0x2C8(0x8)
		TArray<UWaterBodyStaticMeshComponent*> WaterBodyStaticMeshComponents; // 0x2D0(0x10)
		UClass* WaterBodyRiverComponentClass; // 0x2E0(0x8)
		UClass* WaterBodyLakeComponentClass; // 0x2E8(0x8)
		UClass* WaterBodyOceanComponentClass; // 0x2F0(0x8)
		UClass* WaterBodyCustomComponentClass; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBody");
			return ret;
		}

		void SetWaterWaves(UWaterWavesBase* InWaterWaves); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0CB2C(relative to base address)
		void SetWaterMaterial(UMaterialInterface* InMaterial); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0C9F4(relative to base address)
		void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0C510(relative to base address)
		FVector GetWaterVelocityVectorAtSplineInputKey(float InKey); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0C284(relative to base address)
		float GetWaterVelocityAtSplineInputKey(float InKey); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0C154(relative to base address)
		UWaterSplineComponent GetWaterSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C34224C(relative to base address)
		UMaterialInstanceDynamic GetWaterMaterialInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0BDD0(relative to base address)
		EWaterBodyType GetWaterBodyType(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0BD90(relative to base address)
		UWaterBodyComponent GetWaterBodyComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0BD78(relative to base address)
		UMaterialInstanceDynamic GetRiverToOceanTransitionMaterialInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0BCE0(relative to base address)
		UMaterialInstanceDynamic GetRiverToLakeTransitionMaterialInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0BC88(relative to base address)
		TArray GetIslands(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0B8A8(relative to base address)
		TArray GetExclusionVolumes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0B81C(relative to base address)
		float GetAudioIntensityAtSplineInputKey(float InKey); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0B5AC(relative to base address)
	};


	// Class Water.WaterBodyGenerator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWaterBodyGenerator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyGenerator");
			return ret;
		}
	};


	// Class Water.WaterBodyComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xFC8 (0x1490 - 0x4C8)
	class UWaterBodyComponent : public UPrimitiveComponent	
	{
	public:
		UPhysicalMaterial* PhysicalMaterial; // 0x4C8(0x8)
		float TargetWaveMaskDepth; // 0x4D0(0x4)
		float MaxWaveHeightOffset; // 0x4D4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x4D8(0x8) UNKNOWN PROPERTY
		FUnderwaterPostProcessSettings UnderwaterPostProcessSettings; // 0x4E0(0x710)
		FWaterCurveSettings CurveSettings; // 0xBF0(0x20)
		UMaterialInterface* WaterMaterial; // 0xC10(0x8)
		UMaterialInterface* WaterHLODMaterial; // 0xC18(0x8)
		UMaterialInterface* WaterStaticMeshMaterial; // 0xC20(0x8)
		UMaterialInterface* UnderwaterPostProcessMaterial; // 0xC28(0x8)
		UMaterialInterface* WaterInfoMaterial; // 0xC30(0x8)
		FWaterBodyHeightmapSettings WaterHeightmapSettings; // 0xC38(0x80)
		float ShapeDilation; // 0xCB8(0x4)
		float CollisionHeightOffset; // 0xCBC(0x4)
		bool bAffectsLandscape; // 0xCC0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xCC1(0x7) UNKNOWN PROPERTY
		FWaterBodyStaticMeshSettings StaticMeshSettings; // 0xCC8(0x10)
		int32_t WaterBodyIndex; // 0xCD8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xCDC(0x4) UNKNOWN PROPERTY
		UStaticMesh* WaterMeshOverride; // 0xCE0(0x8)
		bool bAlwaysGenerateWaterMeshTiles; // 0xCE8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xCE9(0x3) UNKNOWN PROPERTY
		int32_t OverlapMaterialPriority; // 0xCEC(0x4)
		UWaterSplineMetadata* WaterSplineMetadata; // 0xCF0(0x8)
		UMaterialInstanceDynamic* WaterMID; // 0xCF8(0x8)
		UMaterialInstanceDynamic* WaterStaticMeshMID; // 0xD00(0x8)
		UMaterialInstanceDynamic* UnderwaterPostProcessMID; // 0xD08(0x8)
		UMaterialInstanceDynamic* WaterInfoMID; // 0xD10(0x8)
		TArray<TWeakObjectPtr> WaterBodyIslands; // 0xD18(0x10)
		TArray<TWeakObjectPtr> WaterBodyExclusionVolumes; // 0xD28(0x10)
		TWeakObjectPtr<ALandscapeProxy*> Landscape; // 0xD38(0x8)
		TWeakObjectPtr<AWaterZone*> OwningWaterZone; // 0xD40(0x20)
		TWeakObjectPtr<AWaterZone*> WaterZoneOverride; // 0xD60(0x20)
		FPostProcessSettings CurrentPostProcessSettings; // 0xD80(0x6F0)
		UClass* WaterNavAreaClass; // 0x1470(0x8)
		double FixedWaterDepth; // 0x1478(0x8)
		unsigned char UnknownData04_7[0x8]; // 0x1480(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyComponent");
			return ret;
		}

		void SetWaterZoneOverride(TWeakObjectPtr<AWaterZone*>& InWaterZoneOverride); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA0CBAC(relative to base address)
		void SetWaterStaticMeshMaterial(UMaterialInterface* InMaterial); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0CA78(relative to base address)
		void SetWaterMaterial(UMaterialInterface* InMaterial); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7491A5868(relative to base address)
		void SetWaterAndUnderWaterPostProcessMaterial(UMaterialInterface* InWaterMaterial, UMaterialInterface* InUnderWaterPostProcessMaterial); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0C72C(relative to base address)
		void SetUnderwaterPostProcessMaterial(UMaterialInterface* InMaterial); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0C694(relative to base address)
		void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged, bool bUserTriggeredChanged); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA0C5B4(relative to base address)
		UWaterWavesBase GetWaterWaves(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0C32C(relative to base address)
		float GetWaterVelocityAtSplineInputKey(float InKey); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0C1EC(relative to base address)
		void GetWaterSurfaceInfoAtLocation(FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0BE20(relative to base address)
		UMaterialInstanceDynamic GetWaterStaticMeshMaterialInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749551614(relative to base address)
		UWaterSplineComponent GetWaterSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0BDFC(relative to base address)
		UMaterialInstanceDynamic GetWaterMaterialInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749478254(relative to base address)
		UMaterialInterface GetWaterMaterial(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0BDB8(relative to base address)
		UMaterialInstanceDynamic GetWaterLODMaterialInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749551614(relative to base address)
		UMaterialInstanceDynamic GetWaterInfoMaterialInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494A94A4(relative to base address)
		AWaterBody GetWaterBodyActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0BD54(relative to base address)
		UMaterialInstanceDynamic GetUnderwaterPostProcessMaterialInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749695F3C(relative to base address)
		TArray GetStandardRenderableComponents(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0BD10(relative to base address)
		UMaterialInstanceDynamic GetRiverToOceanTransitionMaterialInstance(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74934F2AC(relative to base address)
		UMaterialInterface GetRiverToOceanTransitionMaterial(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0BCB8(relative to base address)
		UMaterialInstanceDynamic GetRiverToLakeTransitionMaterialInstance(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74934F2F0(relative to base address)
		UMaterialInterface GetRiverToLakeTransitionMaterial(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D345EF8(relative to base address)
		float GetMaxWaveHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0BC60(relative to base address)
		TArray GetIslands(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0B8EC(relative to base address)
		TArray GetExclusionVolumes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0B868(relative to base address)
		TArray GetCollisionComponents(bool bInOnlyEnabledComponents); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA0B754(relative to base address)
	};


	// Class Water.CustomMeshGenerator
	// Inherited from UWaterBodyGenerator -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCustomMeshGenerator : public UWaterBodyGenerator	
	{
	public:
		UStaticMeshComponent* MeshComp; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.CustomMeshGenerator");
			return ret;
		}
	};


	// Class Water.WaterBodyCustom
	// Inherited from AWaterBody -> AActor -> UObject
	// Size: 0x0 (0x300 - 0x300)
	class AWaterBodyCustom : public AWaterBody	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyCustom");
			return ret;
		}
	};


	// Class Water.WaterBodyCustomComponent
	// Inherited from UWaterBodyComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x1490 - 0x1488)
	class UWaterBodyCustomComponent : public UWaterBodyComponent	
	{
	public:
		UStaticMeshComponent* MeshComp; // 0x1488(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyCustomComponent");
			return ret;
		}
	};


	// Class Water.WaterBodyExclusionVolume
	// Inherited from APhysicsVolume -> AVolume -> ABrush -> AActor -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class AWaterBodyExclusionVolume : public APhysicsVolume	
	{
	public:
		EWaterExclusionMode ExclusionMode; // 0x2D8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> WaterBodies; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyExclusionVolume");
			return ret;
		}
	};


	// Class Water.WaterBodyHLODBuilder
	// Inherited from UHLODBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWaterBodyHLODBuilder : public UHLODBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyHLODBuilder");
			return ret;
		}
	};


	// Class Water.WaterBodyInfoMeshComponent
	// Inherited from UWaterBodyMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x5A0 - 0x590)
	class UWaterBodyInfoMeshComponent : public UWaterBodyMeshComponent	
	{
	public:
		bool bIsDilatedMesh; // 0x590(0x1)
		bool bIsConservativeRasterCompatible; // 0x591(0x1)
		unsigned char UnknownData00_7[0xE]; // 0x592(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyInfoMeshComponent");
			return ret;
		}
	};


	// Class Water.WaterBodyIsland
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AWaterBodyIsland : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UWaterSplineComponent* SplineComp; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyIsland");
			return ret;
		}

		UWaterSplineComponent GetWaterSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C34224C(relative to base address)
	};


	// Class Water.LakeGenerator
	// Inherited from UWaterBodyGenerator -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULakeGenerator : public UWaterBodyGenerator	
	{
	public:
		UStaticMeshComponent* LakeMeshComp; // 0x28(0x8)
		UBoxComponent* LakeCollisionComp; // 0x30(0x8)
		ULakeCollisionComponent* LakeCollision; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.LakeGenerator");
			return ret;
		}
	};


	// Class Water.WaterBodyLake
	// Inherited from AWaterBody -> AActor -> UObject
	// Size: 0x0 (0x300 - 0x300)
	class AWaterBodyLake : public AWaterBody	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyLake");
			return ret;
		}
	};


	// Class Water.WaterBodyLakeComponent
	// Inherited from UWaterBodyComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x14A0 - 0x1488)
	class UWaterBodyLakeComponent : public UWaterBodyComponent	
	{
	public:
		UStaticMeshComponent* LakeMeshComp; // 0x1488(0x8)
		ULakeCollisionComponent* LakeCollision; // 0x1490(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyLakeComponent");
			return ret;
		}
	};


	// Class Water.OceanGenerator
	// Inherited from UWaterBodyGenerator -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UOceanGenerator : public UWaterBodyGenerator	
	{
	public:
		TArray<UOceanBoxCollisionComponent*> CollisionBoxes; // 0x28(0x10)
		TArray<UOceanCollisionComponent*> CollisionHullSets; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.OceanGenerator");
			return ret;
		}
	};


	// Class Water.WaterBodyOcean
	// Inherited from AWaterBody -> AActor -> UObject
	// Size: 0x0 (0x300 - 0x300)
	class AWaterBodyOcean : public AWaterBody	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyOcean");
			return ret;
		}
	};


	// Class Water.WaterBodyOceanComponent
	// Inherited from UWaterBodyComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x14F0 - 0x1488)
	class UWaterBodyOceanComponent : public UWaterBodyComponent	
	{
	public:
		TArray<UOceanBoxCollisionComponent*> CollisionBoxes; // 0x1488(0x10)
		TArray<UOceanCollisionComponent*> CollisionHullSets; // 0x1498(0x10)
		FVector CollisionExtents; // 0x14A8(0x18)
		FVector2D OceanExtents; // 0x14C0(0x10)
		FVector2D SavedZoneLocation; // 0x14D0(0x10)
		bool bCenterOnWaterZone; // 0x14E0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x14E1(0x3) UNKNOWN PROPERTY
		float HeightOffset; // 0x14E4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyOceanComponent");
			return ret;
		}
	};


	// Class Water.RiverGenerator
	// Inherited from UWaterBodyGenerator -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class URiverGenerator : public UWaterBodyGenerator	
	{
	public:
		TArray<USplineMeshComponent*> SplineMeshComponents; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.RiverGenerator");
			return ret;
		}
	};


	// Class Water.WaterBodyRiver
	// Inherited from AWaterBody -> AActor -> UObject
	// Size: 0x0 (0x300 - 0x300)
	class AWaterBodyRiver : public AWaterBody	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyRiver");
			return ret;
		}
	};


	// Class Water.WaterBodyRiverComponent
	// Inherited from UWaterBodyComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x14C0 - 0x1488)
	class UWaterBodyRiverComponent : public UWaterBodyComponent	
	{
	public:
		TArray<USplineMeshComponent*> SplineMeshComponents; // 0x1488(0x10)
		UMaterialInterface* LakeTransitionMaterial; // 0x1498(0x8)
		UMaterialInstanceDynamic* LakeTransitionMID; // 0x14A0(0x8)
		UMaterialInterface* OceanTransitionMaterial; // 0x14A8(0x8)
		UMaterialInstanceDynamic* OceanTransitionMID; // 0x14B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBodyRiverComponent");
			return ret;
		}

		void SetOceanTransitionMaterial(UMaterialInterface* InMat); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA28698(relative to base address)
		void SetLakeTransitionMaterial(UMaterialInterface* InMat); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA28600(relative to base address)
		void SetLakeAndOceanTransitionMaterials(UMaterialInterface* InLakeTransition, UMaterialInterface* InOceanTransition); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74938F0AC(relative to base address)
	};


	// Class Water.WaterBrushActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWaterBrushActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterBrushActorInterface");
			return ret;
		}
	};


	// Class Water.WaterMeshComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x238 (0x730 - 0x4F8)
	class UWaterMeshComponent : public UMeshComponent	
	{
	public:
		int32_t ForceCollapseDensityLevel; // 0x4F8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4FC(0x4) UNKNOWN PROPERTY
		UMaterialInterface* FarDistanceMaterial; // 0x500(0x8)
		float FarDistanceMeshExtent; // 0x508(0x4)
		float TileSize; // 0x50C(0x4)
		FIntPoint QuadTreeResolution; // 0x510(0x8)
		unsigned char UnknownData01_6[0x158]; // 0x518(0x158) UNKNOWN PROPERTY
		TSet<UMaterialInterface*> UsedMaterials; // 0x670(0x50)
		TMap<UMaterialInterface*, UMaterialInstanceDynamic*> MaterialToMID; // 0x6C0(0x50)
		bool bUseFarMeshWithoutOcean; // 0x710(0x1)
		unsigned char UnknownData02_6[0xF]; // 0x711(0xF) UNKNOWN PROPERTY
		int32_t TessellationFactor; // 0x720(0x4)
		float LODScale; // 0x724(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x728(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterMeshComponent");
			return ret;
		}

		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA285E8(relative to base address)
	};


	// Class Water.WaterRuntimeSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UWaterRuntimeSettings : public UDeveloperSettings	
	{
	public:
		TEnumAsByte<ECollisionChannel> CollisionChannelForWaterTraces; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UMaterialParameterCollection*> MaterialParameterCollection; // 0x38(0x20)
		float WaterBodyIconWorldZOffset; // 0x58(0x4)
		FName DefaultWaterCollisionProfileName; // 0x5C(0x4)
		TWeakObjectPtr<UMaterialInterface*> DefaultWaterInfoMaterial; // 0x60(0x20)
		UClass* WaterBodyRiverComponentClass; // 0x80(0x8)
		UClass* WaterBodyLakeComponentClass; // 0x88(0x8)
		UClass* WaterBodyOceanComponentClass; // 0x90(0x8)
		UClass* WaterBodyCustomComponentClass; // 0x98(0x8)
		bool bWarnOnMismatchOceanExtent; // 0xA0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterRuntimeSettings");
			return ret;
		}
	};


	// Class Water.WaterSplineComponent
	// Inherited from USplineComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x580 - 0x560)
	class UWaterSplineComponent : public USplineComponent	
	{
	public:
		FWaterSplineCurveDefaults WaterSplineDefaults; // 0x560(0x10)
		FWaterSplineCurveDefaults PreviousWaterSplineDefaults; // 0x570(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterSplineComponent");
			return ret;
		}

		void K2_SynchronizeAndBroadcastDataChange(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class Water.WaterSplineMetadata
	// Inherited from USplineMetadata -> UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UWaterSplineMetadata : public USplineMetadata	
	{
	public:
		FInterpCurveFloat Depth; // 0x28(0x18)
		FInterpCurveFloat WaterVelocityScalar; // 0x40(0x18)
		FInterpCurveFloat RiverWidth; // 0x58(0x18)
		FInterpCurveFloat AudioIntensity; // 0x70(0x18)
		FInterpCurveVector WaterVelocity; // 0x88(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterSplineMetadata");
			return ret;
		}
	};


	// Class Water.WaterSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x190 (0x1D0 - 0x40)
	class UWaterSubsystem : public UTickableWorldSubsystem	
	{
	public:
		ABuoyancyManager* BuoyancyManager; // 0x40(0x8)
		FMulticastInlineDelegate OnCameraUnderwaterStateChanged; // 0x48(0x10)
		FMulticastInlineDelegate OnWaterScalabilityChanged; // 0x58(0x10)
		UStaticMesh* DefaultRiverMesh; // 0x68(0x8)
		UStaticMesh* DefaultLakeMesh; // 0x70(0x8)
		unsigned char UnknownData00_6[0x28]; // 0x78(0x28) UNKNOWN PROPERTY
		UMaterialParameterCollection* MaterialParameterCollection; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x128]; // 0xA8(0x128) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterSubsystem");
			return ret;
		}

		void SetOceanFloodHeight(float InFloodHeight); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA2D914(relative to base address)
		void PrintToWaterLog(FString Message, bool bWarning); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA2D804(relative to base address)
		bool IsWaterRenderingEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA2D7E4(relative to base address)
		bool IsUnderwaterPostProcessEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA2D7C8(relative to base address)
		bool IsShallowWaterSimulationEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA2D7AC(relative to base address)
		float GetWaterTimeSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA2D76C(relative to base address)
		float GetSmoothedWorldTimeSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA2D74C(relative to base address)
		int32_t GetShallowWaterSimulationRenderTargetSize(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DA2D734(relative to base address)
		int32_t GetShallowWaterMaxImpulseForces(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DA2D71C(relative to base address)
		int32_t GetShallowWaterMaxDynamicForces(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DA2D704(relative to base address)
		float GetOceanTotalHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA2D6E0(relative to base address)
		float GetOceanFloodHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA2D6C8(relative to base address)
		float GetOceanBaseHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA2D6A4(relative to base address)
		float GetCameraUnderwaterDepth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2440(relative to base address)
	};


	// Class Water.WaterWavesAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UWaterWavesAsset : public UObject	
	{
	public:
		UWaterWaves* WaterWaves; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterWavesAsset");
			return ret;
		}
	};


	// Class Water.WaterWavesAssetReference
	// Inherited from UWaterWavesBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UWaterWavesAssetReference : public UWaterWavesBase	
	{
	public:
		UWaterWavesAsset* WaterWavesAsset; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterWavesAssetReference");
			return ret;
		}
	};


	// Class Water.WaterZone
	// Inherited from AActor -> UObject
	// Size: 0xA8 (0x338 - 0x290)
	class AWaterZone : public AActor	
	{
	public:
		UTextureRenderTarget2DArray* WaterInfoTextureArray; // 0x290(0x8)
		TArray<TWeakObjectPtr> OwnedWaterBodies; // 0x298(0x10)
		FIntPoint RenderTargetResolution; // 0x2A8(0x8)
		UWaterMeshComponent* WaterMesh; // 0x2B0(0x8)
		FVector2D ZoneExtent; // 0x2B8(0x10)
		float CaptureZOffset; // 0x2C8(0x4)
		bool bHalfPrecisionTexture; // 0x2CC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2CD(0x3) UNKNOWN PROPERTY
		int32_t VelocityBlurRadius; // 0x2D0(0x4)
		int32_t OverlapPriority; // 0x2D4(0x4)
		bool bEnableLocalOnlyTessellation; // 0x2D8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2D9(0x7) UNKNOWN PROPERTY
		FVector LocalTessellationExtent; // 0x2E0(0x18)
		bool bAutoIncludeLandscapesAsTerrain; // 0x2F8(0x1)
		unsigned char UnknownData02_6[0x27]; // 0x2F9(0x27) UNKNOWN PROPERTY
		int32_t WaterZoneIndex; // 0x320(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x324(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnWaterInfoTextureArrayCreated; // 0x328(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Water.WaterZone");
			return ret;
		}

		void SetFarMeshMaterial(UMaterialInterface* InFarMaterial); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74869892C(relative to base address)
		int32_t GetWaterZoneIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA2D794(relative to base address)
	};

}
