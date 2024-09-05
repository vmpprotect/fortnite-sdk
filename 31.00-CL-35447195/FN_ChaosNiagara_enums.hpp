#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosNiagara
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ChaosNiagara.EDataSortTypeEnum
	enum EDataSortTypeEnum
	{
		EDataSortTypeEnum__ChaosNiagara_DataSortType_NoSorting = 0,
		EDataSortTypeEnum__ChaosNiagara_DataSortType_RandomShuffle = 1,
		EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
		EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
		EDataSortTypeEnum__ChaosNiagara_Max = 4,
	};


	// Enum /Script/ChaosNiagara.ERandomVelocityGenerationTypeEnum
	enum ERandomVelocityGenerationTypeEnum
	{
		ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
		ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
		ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
		ERandomVelocityGenerationTypeEnum__ChaosNiagara_Max = 3,
	};


	// Enum /Script/ChaosNiagara.EDebugTypeEnum
	enum EDebugTypeEnum
	{
		EDebugTypeEnum__ChaosNiagara_DebugType_NoDebug = 0,
		EDebugTypeEnum__ChaosNiagara_DebugType_ColorBySolver = 1,
		EDebugTypeEnum__ChaosNiagara_DebugType_ColorByParticleIndex = 2,
		EDebugTypeEnum__ChaosNiagara_Max = 3,
	};


	// Enum /Script/ChaosNiagara.EDataSourceTypeEnum
	enum EDataSourceTypeEnum
	{
		EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Collision = 0,
		EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Breaking = 1,
		EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Trailing = 2,
		EDataSourceTypeEnum__ChaosNiagara_Max = 3,
	};


	// Enum /Script/ChaosNiagara.ELocationFilteringModeEnum
	enum ELocationFilteringModeEnum
	{
		ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Inclusive = 0,
		ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Exclusive = 1,
		ELocationFilteringModeEnum__ChaosNiagara_Max = 2,
	};


	// Enum /Script/ChaosNiagara.ELocationXToSpawnEnum
	enum ELocationXToSpawnEnum
	{
		ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_None = 0,
		ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Min = 1,
		ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Max = 2,
		ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_MinMax = 3,
		ELocationXToSpawnEnum__ChaosNiagara_Max = 4,
	};


	// Enum /Script/ChaosNiagara.ELocationYToSpawnEnum
	enum ELocationYToSpawnEnum
	{
		ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_None = 0,
		ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Min = 1,
		ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Max = 2,
		ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_MinMax = 3,
		ELocationYToSpawnEnum__ChaosNiagara_Max = 4,
	};


	// Enum /Script/ChaosNiagara.ELocationZToSpawnEnum
	enum ELocationZToSpawnEnum
	{
		ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_None = 0,
		ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Min = 1,
		ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Max = 2,
		ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_MinMax = 3,
		ELocationZToSpawnEnum__ChaosNiagara_Max = 4,
	};


	// Enum /Script/ChaosNiagara.ENDIGeometryCollection_SourceMode
	enum ENDIGeometryCollection_SourceMode
	{
		ENDIGeometryCollection_SourceMode__Default = 0,
		ENDIGeometryCollection_SourceMode__Source = 1,
		ENDIGeometryCollection_SourceMode__AttachParent = 2,
		ENDIGeometryCollection_SourceMode__DefaultCollectionOnly = 3,
		ENDIGeometryCollection_SourceMode__ParameterBinding = 4,
	};

}
