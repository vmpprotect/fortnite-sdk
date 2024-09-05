#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCameraDirectorRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/SparksCameraDirectorRuntime.ESparksCameraConfigType
	enum ESparksCameraConfigType
	{
		ESparksCameraConfigType__Main = 0,
		ESparksCameraConfigType__QA = 1,
		ESparksCameraConfigType__Perf = 2,
		ESparksCameraConfigType__Custom = 3,
	};


	// Enum /Script/SparksCameraDirectorRuntime.ESparksCameraLogType
	enum ESparksCameraLogType
	{
		ESparksCameraLogType__ShotGenerator = 0,
		ESparksCameraLogType__ShotName = 1,
		ESparksCameraLogType__SectionName = 2,
		ESparksCameraLogType__Unknown = 3,
	};


	// Enum /Script/SparksCameraDirectorRuntime.ESparksFilterResult
	enum ESparksFilterResult
	{
		ESparksFilterResult__Match = 0,
		ESparksFilterResult__FailedRequired = 1,
		ESparksFilterResult__FailedExcluded = 2,
	};


	// Enum /Script/SparksCameraDirectorRuntime.ESparksSectionGeneratorResult
	enum ESparksSectionGeneratorResult
	{
		ESparksSectionGeneratorResult__Success = 0,
		ESparksSectionGeneratorResult__SuccessTooShort = 1,
		ESparksSectionGeneratorResult__SuccessTooLong = 2,
		ESparksSectionGeneratorResult__Failed = 3,
	};

}
