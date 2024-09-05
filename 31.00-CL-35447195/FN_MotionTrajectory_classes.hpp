#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MotionTrajectory
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_7[0x20]; // 0x2B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotionTrajectory.CharacterTrajectoryComponent");
			return ret;
		}

		void OnMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity); // Flags: Final|Native|Protected|HasDefaults 0x7FF414D005D8
	};

}
