#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CrowdVolume
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CrowdVolume.CrowdSpawner
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x40 (0x260 - 0x220)
	class UCrowdSpawner : public USceneComponent	
	{
	public:
		TArray<UHierarchicalInstancedStaticMeshComponent*> CharacterMeshes; // 0x220(0x10)
		unsigned char UnknownData00_7[0x30]; // 0x230(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrowdVolume.CrowdSpawner");
			return ret;
		}

		void SpawnCrowd(int32_t Width, int32_t Depth, int32_t Height, int32_t Precision, int32_t CharacterScaleRandomness, int32_t CharacterAngleRandomness, int32_t Density); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515FF4C4(relative to base address)
		void RefreshTrackedActors(UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D1558(relative to base address)
	};

}
