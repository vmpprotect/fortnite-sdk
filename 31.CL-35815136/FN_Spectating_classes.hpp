#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Spectating
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Spectating/BP_BattleMapPawnLive.BP_BattleMapPawnLive_C
	// Inherited from ABattleMapPawnLive -> AFortReplaySpectatorPawnBase -> ASpectatorPawn -> ADefaultPawn -> APawn -> AActor -> UObject
	// Size: 0x0 (0x690 - 0x690)
	class ABP_BattleMapPawnLive_C : public ABattleMapPawnLive	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BP_BattleMapPawnLive.BP_BattleMapPawnLive_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapGroundMoveNode.BP_BattleMapGroundMoveNode_C
	// Inherited from ABattleMapGroundMoveNode -> ABattleMapNode -> AActor -> UObject
	// Size: 0x10 (0x3E0 - 0x3D0)
	class ABP_BattleMapGroundMoveNode_C : public ABattleMapGroundMoveNode	
	{
	public:
		UStaticMeshComponent* StaticMesh; // 0x3D0(0x8)
		USceneComponent* DefaultSceneRoot; // 0x3D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapGroundMoveNode.BP_BattleMapGroundMoveNode_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapAirMoveNode.BP_BattleMapAirMoveNode_C
	// Inherited from ABattleMapGroundMoveNode -> ABattleMapNode -> AActor -> UObject
	// Size: 0x10 (0x3E0 - 0x3D0)
	class ABP_BattleMapAirMoveNode_C : public ABattleMapGroundMoveNode	
	{
	public:
		UStaticMeshComponent* StaticMesh; // 0x3D0(0x8)
		USceneComponent* DefaultSceneRoot; // 0x3D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapAirMoveNode.BP_BattleMapAirMoveNode_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapGroundMoveChestNode.BP_BattleMapGroundMoveChestNode_C
	// Inherited from ABP_BattleMapBaseNode_C -> ABattleMapNode -> AActor -> UObject
	// Size: 0x0 (0x3D0 - 0x3D0)
	class ABP_BattleMapGroundMoveChestNode_C : public ABP_BattleMapBaseNode_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapGroundMoveChestNode.BP_BattleMapGroundMoveChestNode_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapZoneNode.BP_BattleMapZoneNode_C
	// Inherited from ABP_BattleMapBaseNode_C -> ABattleMapNode -> AActor -> UObject
	// Size: 0x8 (0x3D8 - 0x3D0)
	class ABP_BattleMapZoneNode_C : public ABP_BattleMapBaseNode_C	
	{
	public:
		UStaticMeshComponent* StaticMesh_Inverted; // 0x3D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapZoneNode.BP_BattleMapZoneNode_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapWeaponGotKillNode.BP_BattleMapWeaponGotKillNode_C
	// Inherited from ABP_BattleMapBaseNode_C -> ABattleMapNode -> AActor -> UObject
	// Size: 0x0 (0x3D0 - 0x3D0)
	class ABP_BattleMapWeaponGotKillNode_C : public ABP_BattleMapBaseNode_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapWeaponGotKillNode.BP_BattleMapWeaponGotKillNode_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapWeaponGotKillInstigatorNode.BP_BattleMapWeaponGotKillInstigatorNode_C
	// Inherited from ABP_BattleMapBaseNode_C -> ABattleMapNode -> AActor -> UObject
	// Size: 0x0 (0x3D0 - 0x3D0)
	class ABP_BattleMapWeaponGotKillInstigatorNode_C : public ABP_BattleMapBaseNode_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapWeaponGotKillInstigatorNode.BP_BattleMapWeaponGotKillInstigatorNode_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapTeamFlightNode.BP_BattleMapTeamFlightNode_C
	// Inherited from ABP_BattleMapBaseNode_C -> ABattleMapNode -> AActor -> UObject
	// Size: 0x0 (0x3D0 - 0x3D0)
	class ABP_BattleMapTeamFlightNode_C : public ABP_BattleMapBaseNode_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapTeamFlightNode.BP_BattleMapTeamFlightNode_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapTeamFlightdge.BP_BattleMapTeamFlightdge_C
	// Inherited from ABP_BattleMapBaseEdge_C -> ABattleMapEdge -> AActor -> UObject
	// Size: 0x0 (0x308 - 0x308)
	class ABP_BattleMapTeamFlightdge_C : public ABP_BattleMapBaseEdge_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapTeamFlightdge.BP_BattleMapTeamFlightdge_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapWeaponGotKillInstigatorEdge.BP_BattleMapWeaponGotKillInstigatorEdge_C
	// Inherited from ABP_BattleMapBaseEdge_C -> ABattleMapEdge -> AActor -> UObject
	// Size: 0x0 (0x308 - 0x308)
	class ABP_BattleMapWeaponGotKillInstigatorEdge_C : public ABP_BattleMapBaseEdge_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapWeaponGotKillInstigatorEdge.BP_BattleMapWeaponGotKillInstigatorEdge_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapGroundMoveEdge.BP_BattleMapGroundMoveEdge_C
	// Inherited from ABP_BattleMapBaseEdge_C -> ABattleMapEdge -> AActor -> UObject
	// Size: 0x0 (0x308 - 0x308)
	class ABP_BattleMapGroundMoveEdge_C : public ABP_BattleMapBaseEdge_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapGroundMoveEdge.BP_BattleMapGroundMoveEdge_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapAIrMoveEdge.BP_BattleMapAIrMoveEdge_C
	// Inherited from ABP_BattleMapBaseEdge_C -> ABattleMapEdge -> AActor -> UObject
	// Size: 0x0 (0x308 - 0x308)
	class ABP_BattleMapAIrMoveEdge_C : public ABP_BattleMapBaseEdge_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapAIrMoveEdge.BP_BattleMapAIrMoveEdge_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapGroundMoveChestEdge.BP_BattleMapGroundMoveChestEdge_C
	// Inherited from ABP_BattleMapBaseEdge_C -> ABattleMapEdge -> AActor -> UObject
	// Size: 0x0 (0x308 - 0x308)
	class ABP_BattleMapGroundMoveChestEdge_C : public ABP_BattleMapBaseEdge_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapGroundMoveChestEdge.BP_BattleMapGroundMoveChestEdge_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapBaseNode.BP_BattleMapBaseNode_C
	// Inherited from ABattleMapNode -> AActor -> UObject
	// Size: 0x10 (0x3D0 - 0x3C0)
	class ABP_BattleMapBaseNode_C : public ABattleMapNode	
	{
	public:
		UStaticMeshComponent* StaticMesh; // 0x3C0(0x8)
		USceneComponent* DefaultSceneRoot; // 0x3C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapBaseNode.BP_BattleMapBaseNode_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/BP_BattleMapBaseEdge.BP_BattleMapBaseEdge_C
	// Inherited from ABattleMapEdge -> AActor -> UObject
	// Size: 0x10 (0x308 - 0x2F8)
	class ABP_BattleMapBaseEdge_C : public ABattleMapEdge	
	{
	public:
		USplineMeshComponent* SplineMesh; // 0x2F8(0x8)
		USceneComponent* DefaultSceneRoot; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/BP_BattleMapBaseEdge.BP_BattleMapBaseEdge_C");
			return ret;
		}
	};


	// Class /Game/Spectating/BattleMap/Support/BP_BattleMapTimeIndicator.BP_BattleMapTimeIndicator_C
	// Inherited from ABattleMapTimeIndicator -> AActor -> UObject
	// Size: 0x10 (0x318 - 0x308)
	class ABP_BattleMapTimeIndicator_C : public ABattleMapTimeIndicator	
	{
	public:
		UStaticMeshComponent* Arrow; // 0x308(0x8)
		USceneComponent* DefaultSceneRoot; // 0x310(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Spectating/BattleMap/Support/BP_BattleMapTimeIndicator.BP_BattleMapTimeIndicator_C");
			return ret;
		}
	};

}
