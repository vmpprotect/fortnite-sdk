#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SpatialMetricsExperimental
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/SpatialMetricsExperimental.EIoDispatcherChunkTypeFlags
	enum EIoDispatcherChunkTypeFlags
	{
		EIoDispatcherChunkTypeFlags__ExportBundleData = 1,
		EIoDispatcherChunkTypeFlags__BulkData = 2,
		EIoDispatcherChunkTypeFlags__OptionalBulkData = 4,
		EIoDispatcherChunkTypeFlags__MemoryMappedBulkData = 8,
		EIoDispatcherChunkTypeFlags__ScriptObjects = 10,
		EIoDispatcherChunkTypeFlags__ContainerHeader = 20,
		EIoDispatcherChunkTypeFlags__ExternalFile = 40,
		EIoDispatcherChunkTypeFlags__ShaderCodeLibrary = 80,
		EIoDispatcherChunkTypeFlags__ShaderCode = 100,
		EIoDispatcherChunkTypeFlags__PackageStoreEntry = 200,
		EIoDispatcherChunkTypeFlags__DerivedData = 400,
		EIoDispatcherChunkTypeFlags__EditorDerivedData = 800,
		EIoDispatcherChunkTypeFlags__PackageResource = 1000,
		EIoDispatcherChunkTypeFlags__None = 0,
		EIoDispatcherChunkTypeFlags__Default = F,
		EIoDispatcherChunkTypeFlags__All = 1FFF,
	};

}