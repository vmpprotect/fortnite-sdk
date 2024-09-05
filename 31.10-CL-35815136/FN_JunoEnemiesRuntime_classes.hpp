#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoEnemiesRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		TArray GetCurvedPath(TArray<FVector>& ControlPoints, int32_t NumSegments); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C777C4(relative to base address)
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

		void JunoSpawnCreature(FString CreatureName, int32_t Count); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74E56B058(relative to base address)
	};

}
