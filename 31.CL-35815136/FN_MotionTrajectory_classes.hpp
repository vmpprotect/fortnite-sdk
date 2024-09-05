#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotionTrajectory
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MotionTrajectory.CharacterTrajectoryComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x230 (0x2D0 - 0xA0)
	class UCharacterTrajectoryComponent : public UActorComponent	
	{
	public:
		FPoseSearchQueryTrajectory Trajectory; // 0xA0(0x10)
		FTrajectorySamplingData SamplingData; // 0xB0(0x20)
		FCharacterTrajectoryData CharacterTrajectoryData; // 0xD0(0x1E0)
		unsigned char UnknownData00_7[0x20]; // 0x2B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionTrajectory.CharacterTrajectoryComponent");
			return ret;
		}

		void OnMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF7513DA4D8(relative to base address)
	};

}
