#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CrowdVolume
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CrowdVolume.CrowdSpawner
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x40 (0x260 - 0x220)
	class UCrowdSpawner : public USceneComponent	
	{
	public:
		TArray CharacterMeshes; // 0x220(0x10)
		unsigned char UnknownData01_7[0x30]; // 0x230(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrowdVolume.CrowdSpawner");
			return ret;
		}

		void SpawnCrowd(int32_t Width, int32_t Depth, int32_t Height, int32_t Precision, int32_t CharacterScaleRandomness, int32_t CharacterAngleRandomness, int32_t Density); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D66F78
		void RefreshTrackedActors(UPlayspaceComponent_SpatialActorTracker InPlaySpaceComponent_SpatialActorTracker); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D66E98
	};

}
