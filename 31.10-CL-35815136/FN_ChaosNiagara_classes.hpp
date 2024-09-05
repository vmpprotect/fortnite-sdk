#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosNiagara
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x310 (0x348 - 0x38)
	class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface	
	{
	public:
		TSet<AChaosSolverActor*> ChaosSolverActorSet; // 0x38(0x50)
		EDataSourceTypeEnum DataSourceType; // 0x88(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		int32_t DataProcessFrequency; // 0x8C(0x4)
		int32_t MaxNumberOfDataEntriesToSpawn; // 0x90(0x4)
		bool DoSpawn; // 0x94(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		FVector2D SpawnMultiplierMinMax; // 0x98(0x10)
		float SpawnChance; // 0xA8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FVector2D ImpulseToSpawnMinMax; // 0xB0(0x10)
		FVector2D SpeedToSpawnMinMax; // 0xC0(0x10)
		FVector2D MassToSpawnMinMax; // 0xD0(0x10)
		FVector2D ExtentMinToSpawnMinMax; // 0xE0(0x10)
		FVector2D ExtentMaxToSpawnMinMax; // 0xF0(0x10)
		FVector2D VolumeToSpawnMinMax; // 0x100(0x10)
		FVector2D SolverTimeToSpawnMinMax; // 0x110(0x10)
		int32_t SurfaceTypeToSpawn; // 0x120(0x4)
		ELocationFilteringModeEnum LocationFilteringMode; // 0x124(0x1)
		ELocationXToSpawnEnum LocationXToSpawn; // 0x125(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x126(0x2) UNKNOWN PROPERTY
		FVector2D LocationXToSpawnMinMax; // 0x128(0x10)
		ELocationYToSpawnEnum LocationYToSpawn; // 0x138(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x139(0x7) UNKNOWN PROPERTY
		FVector2D LocationYToSpawnMinMax; // 0x140(0x10)
		ELocationZToSpawnEnum LocationZToSpawn; // 0x150(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x151(0x7) UNKNOWN PROPERTY
		FVector2D LocationZToSpawnMinMax; // 0x158(0x10)
		float TrailMinSpeedToSpawn; // 0x168(0x4)
		EDataSortTypeEnum DataSortingType; // 0x16C(0x1)
		bool bGetExternalCollisionData; // 0x16D(0x1)
		bool DoSpatialHash; // 0x16E(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x16F(0x1) UNKNOWN PROPERTY
		FVector SpatialHashVolumeMin; // 0x170(0x18)
		FVector SpatialHashVolumeMax; // 0x188(0x18)
		FVector SpatialHashVolumeCellSize; // 0x1A0(0x18)
		int32_t MaxDataPerCell; // 0x1B8(0x4)
		bool bApplyMaterialsFilter; // 0x1BC(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x1BD(0x3) UNKNOWN PROPERTY
		TSet<UPhysicalMaterial*> ChaosBreakingMaterialSet; // 0x1C0(0x50)
		bool bGetExternalBreakingData; // 0x210(0x1)
		bool bGetExternalTrailingData; // 0x211(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x212(0x6) UNKNOWN PROPERTY
		FVector2D RandomPositionMagnitudeMinMax; // 0x218(0x10)
		float InheritedVelocityMultiplier; // 0x228(0x4)
		ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType; // 0x22C(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x22D(0x3) UNKNOWN PROPERTY
		FVector2D RandomVelocityMagnitudeMinMax; // 0x230(0x10)
		float SpreadAngleMax; // 0x240(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		FVector VelocityOffsetMin; // 0x248(0x18)
		FVector VelocityOffsetMax; // 0x260(0x18)
		FVector2D FinalVelocityMagnitudeMinMax; // 0x278(0x10)
		float MaxLatency; // 0x288(0x4)
		EDebugTypeEnum DebugType; // 0x28C(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x28D(0x3) UNKNOWN PROPERTY
		int32_t LastSpawnedPointID; // 0x290(0x4)
		float LastSpawnTime; // 0x294(0x4)
		unsigned char UnknownData12_6[0x10]; // 0x298(0x10) UNKNOWN PROPERTY
		float SolverTime; // 0x2A8(0x4)
		float TimeStampOfLastProcessedData; // 0x2AC(0x4)
		unsigned char UnknownData13_7[0x98]; // 0x2B0(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction");
			return ret;
		}
	};


	// Class ChaosNiagara.NiagaraDataInterfaceGeometryCollection
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x68 (0xA0 - 0x38)
	class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface	
	{
	public:
		ENDIGeometryCollection_SourceMode SourceMode; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UGeometryCollection* DefaultGeometryCollection; // 0x40(0x8)
		TWeakObjectPtr<AGeometryCollectionActor*> GeometryCollectionActor; // 0x48(0x20)
		UGeometryCollectionComponent* SourceComponent; // 0x68(0x8)
		FNiagaraUserParameterBinding GeometryCollectionUserParameter; // 0x70(0x18)
		bool bIncludeIntermediateBones; // 0x88(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		FResolvedNiagaraGeometryCollection ResolvedSource; // 0x8C(0x10)
		unsigned char UnknownData02_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosNiagara.NiagaraDataInterfaceGeometryCollection");
			return ret;
		}
	};


	// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosNiagara.NiagaraDataInterfacePhysicsField");
			return ret;
		}
	};

}
