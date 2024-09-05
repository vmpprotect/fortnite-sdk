#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BasicType
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Custom/EObjectFlags
	enum EObjectFlags
	{
		RF_NoFlags = 0,
		RF_Public = 1,
		RF_Standalone = 2,
		RF_MarkAsNative = 4,
		RF_Transactional = 8,
		RF_ClassDefaultObject = 10,
		RF_ArchetypeObject = 20,
		RF_Transient = 40,
		RF_MarkAsRootSet = 80,
		RF_TagGarbageTemp = 100,
		RF_NeedInitialization = 200,
		RF_NeedLoad = 400,
		RF_KeepForCooker = 800,
		RF_NeedPostLoad = 1000,
		RF_NeedPostLoadSubobjects = 2000,
		RF_NewerVersionExists = 4000,
		RF_BeginDestroyed = 8000,
		RF_FinishDestroyed = 10000,
		RF_BeingRegenerated = 20000,
		RF_DefaultSubObject = 40000,
		RF_WasLoaded = 80000,
		RF_TextExportTransient = 100000,
		RF_LoadCompleted = 200000,
		RF_InheritableComponentTemplate = 400000,
		RF_DuplicateTransient = 800000,
		RF_StrongRefOnFrame = 1000000,
		RF_NonPIEDuplicateTransient = 2000000,
		RF_Dynamic = 4000000,
		RF_WillBeLoaded = 8000000,
	};

}
