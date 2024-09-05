#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NavCorridor
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NavCorridor.NavCorridorTestingComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x128 (0x640 - 0x518)
	class UNavCorridorTestingComponent : public UDebugDrawComponent	
	{
	public:
		FNavAgentProperties NavAgentProps; // 0x518(0x30)
		UClass* FilterClass; // 0x548(0x8)
		bool bFindCorridorToGoal; // 0x550(0x1)
		bool bFollowPathOnGoalCorridor; // 0x551(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x552(0x2) UNKNOWN PROPERTY
		float FollowLookAheadDistance; // 0x554(0x4)
		AActor* GoalActor; // 0x558(0x8)
		ANavigationData* NavData; // 0x560(0x8)
		FNavCorridorParams CorridorParams; // 0x568(0x1C)
		bool bUpdateParametersFromWidth; // 0x584(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x585(0x3) UNKNOWN PROPERTY
		float PathOffset; // 0x588(0x4)
		float PathfindingTimeUs; // 0x58C(0x4)
		float CorridorTimeUs; // 0x590(0x4)
		unsigned char UnknownData02_7[0xAC]; // 0x594(0xAC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavCorridor.NavCorridorTestingComponent");
			return ret;
		}
	};


	// Class NavCorridor.NavCorridorTestingActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ANavCorridorTestingActor : public AActor	
	{
	public:
		UNavCorridorTestingComponent* DebugComp; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavCorridor.NavCorridorTestingActor");
			return ret;
		}
	};

}
