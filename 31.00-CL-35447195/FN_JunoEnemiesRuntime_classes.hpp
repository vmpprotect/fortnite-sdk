#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoEnemiesRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoEnemiesRuntime.JunoEnemiesBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoEnemiesBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEnemiesRuntime.JunoEnemiesBlueprintLibrary");
			return ret;
		}

		TArray GetCurvedPath(TArray& ControlPoints, int32_t NumSegments); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E1CC00
	};


	// Class JunoEnemiesRuntime.JunoCheatManager_Enemies
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCheatManager_Enemies : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEnemiesRuntime.JunoCheatManager_Enemies");
			return ret;
		}

		void JunoSpawnCreature(FString CreatureName, int32_t Count); // Flags: Final|Exec|Native|Public|Const 0x7FF414E1CCE0
	};

}
