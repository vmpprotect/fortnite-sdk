#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Building
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Building/ActorBlueprints/Wall/DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C
	// Inherited from UFortSoundIndicatorComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UDoorSoundIndicatorComponent_C : public UFortSoundIndicatorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Wall/DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C");
			return ret;
		}

		TArray GetAffiliationsToShowFor(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldShowSoundIndicator(AFortPlayerController* PlayerController); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Building/NavigationAreas/DoorMetaObstacle.DoorMetaObstacle_C
	// Inherited from UNavAreaMeta_SwitchByAgent -> UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0xC8 - 0xC8)
	class UDoorMetaObstacle_C : public UNavAreaMeta_SwitchByAgent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/NavigationAreas/DoorMetaObstacle.DoorMetaObstacle_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofC.PBWA_W1_RoofC_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_RoofC_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofC.PBWA_W1_RoofC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_DoorC.PBWA_W1_DoorC_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_DoorC_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_DoorC.PBWA_W1_DoorC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_ArchwayLargeSupport.PBWA_W1_ArchwayLargeSupport_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_ArchwayLargeSupport_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_ArchwayLargeSupport.PBWA_W1_ArchwayLargeSupport_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_ArchwayLargeSupport.PBWA_M1_ArchwayLargeSupport_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_ArchwayLargeSupport_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_ArchwayLargeSupport.PBWA_M1_ArchwayLargeSupport_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_BalconyO.PBWA_M1_BalconyO_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_BalconyO_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_BalconyO.PBWA_M1_BalconyO_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_DoorS.PBWA_M1_DoorS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_DoorS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_DoorS.PBWA_M1_DoorS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_DoorSide.PBWA_M1_DoorSide_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_DoorSide_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_DoorSide.PBWA_M1_DoorSide_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Floor.PBWA_M1_Floor_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_Floor_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Floor.PBWA_M1_Floor_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Solid.PBWA_M1_Solid_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_Solid_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Solid.PBWA_M1_Solid_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Archway.PBWA_M1_Archway_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_Archway_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Archway.PBWA_M1_Archway_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_ArchwayLarge.PBWA_M1_ArchwayLarge_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_ArchwayLarge_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_ArchwayLarge.PBWA_M1_ArchwayLarge_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_BalconyD.PBWA_M1_BalconyD_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_BalconyD_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_BalconyD.PBWA_M1_BalconyD_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Brace.PBWA_M1_Brace_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_Brace_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Brace.PBWA_M1_Brace_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_HalfWall.PBWA_M1_HalfWall_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_HalfWall_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_HalfWall.PBWA_M1_HalfWall_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_HalfWallDoorS.PBWA_M1_HalfWallDoorS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_HalfWallDoorS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_HalfWallDoorS.PBWA_M1_HalfWallDoorS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_HalfWallHalf.PBWA_M1_HalfWallHalf_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_HalfWallHalf_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_HalfWallHalf.PBWA_M1_HalfWallHalf_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofI.PBWA_M1_RoofI_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_RoofI_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofI.PBWA_M1_RoofI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofO.PBWA_M1_RoofO_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_RoofO_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofO.PBWA_M1_RoofO_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofS.PBWA_M1_RoofS_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_RoofS_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofS.PBWA_M1_RoofS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofWall.PBWA_M1_RoofWall_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_RoofWall_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofWall.PBWA_M1_RoofWall_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_StairR.PBWA_M1_StairR_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_M1_StairR_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_StairR.PBWA_M1_StairR_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_StairT.PBWA_M1_StairT_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_M1_StairT_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_StairT.PBWA_M1_StairT_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_StairW.PBWA_M1_StairW_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_M1_StairW_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_StairW.PBWA_M1_StairW_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_BalconyI.PBWA_M1_BalconyI_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_BalconyI_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_BalconyI.PBWA_M1_BalconyI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_BalconyS.PBWA_M1_BalconyS_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_BalconyS_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_BalconyS.PBWA_M1_BalconyS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_DoorC.PBWA_M1_DoorC_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_DoorC_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_DoorC.PBWA_M1_DoorC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Pillar.PBWA_M1_Pillar_C
	// Inherited from ABuildingPillar -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_Pillar_C : public ABuildingPillar	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Pillar.PBWA_M1_Pillar_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_QuarterWallHalf.PBWA_M1_QuarterWallHalf_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_QuarterWallHalf_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_QuarterWallHalf.PBWA_M1_QuarterWallHalf_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_QuarterWallS.PBWA_M1_QuarterWallS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_QuarterWallS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_QuarterWallS.PBWA_M1_QuarterWallS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofC.PBWA_M1_RoofC_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_RoofC_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofC.PBWA_M1_RoofC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofD.PBWA_M1_RoofD_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_M1_RoofD_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_RoofD.PBWA_M1_RoofD_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_StairF.PBWA_M1_StairF_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_M1_StairF_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_StairF.PBWA_M1_StairF_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_WindowC.PBWA_M1_WindowC_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_WindowC_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_WindowC.PBWA_M1_WindowC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Windows.PBWA_M1_Windows_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_Windows_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_Windows.PBWA_M1_Windows_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_WindowSide.PBWA_M1_WindowSide_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_WindowSide_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_WindowSide.PBWA_M1_WindowSide_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_HalfWallDoor.PBWA_M1_HalfWallDoor_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_M1_HalfWallDoor_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Metal/L1/PBWA_M1_HalfWallDoor.PBWA_M1_HalfWallDoor_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofD.PBWA_S1_RoofD_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_RoofD_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofD.PBWA_S1_RoofD_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_BalconyD.PBWA_S1_BalconyD_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_BalconyD_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_BalconyD.PBWA_S1_BalconyD_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_BalconyS.PBWA_S1_BalconyS_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_BalconyS_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_BalconyS.PBWA_S1_BalconyS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_HalfWallDoor.PBWA_S1_HalfWallDoor_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_HalfWallDoor_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_HalfWallDoor.PBWA_S1_HalfWallDoor_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_HalfWallHalf.PBWA_S1_HalfWallHalf_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_HalfWallHalf_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_HalfWallHalf.PBWA_S1_HalfWallHalf_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofWall.PBWA_S1_RoofWall_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_RoofWall_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofWall.PBWA_S1_RoofWall_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_StairT.PBWA_S1_StairT_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_S1_StairT_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_StairT.PBWA_S1_StairT_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Windows.PBWA_S1_Windows_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_Windows_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Windows.PBWA_S1_Windows_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_ArchwayLarge.PBWA_S1_ArchwayLarge_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_ArchwayLarge_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_ArchwayLarge.PBWA_S1_ArchwayLarge_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_ArchwayLargeSupport.PBWA_S1_ArchwayLargeSupport_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_ArchwayLargeSupport_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_ArchwayLargeSupport.PBWA_S1_ArchwayLargeSupport_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Brace.PBWA_S1_Brace_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_Brace_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Brace.PBWA_S1_Brace_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_DoorC.PBWA_S1_DoorC_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_DoorC_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_DoorC.PBWA_S1_DoorC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_DoorS.PBWA_S1_DoorS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_DoorS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_DoorS.PBWA_S1_DoorS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_DoorSide.PBWA_S1_DoorSide_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_DoorSide_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_DoorSide.PBWA_S1_DoorSide_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Floor.PBWA_S1_Floor_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_Floor_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Floor.PBWA_S1_Floor_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_HalfWallDoorSide.PBWA_S1_HalfWallDoorSide_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_HalfWallDoorSide_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_HalfWallDoorSide.PBWA_S1_HalfWallDoorSide_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Pillar.PBWA_S1_Pillar_C
	// Inherited from ABuildingPillar -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_Pillar_C : public ABuildingPillar	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Pillar.PBWA_S1_Pillar_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_QuarterWallHalf.PBWA_S1_QuarterWallHalf_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_QuarterWallHalf_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_QuarterWallHalf.PBWA_S1_QuarterWallHalf_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_QuarterWallS.PBWA_S1_QuarterWallS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_QuarterWallS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_QuarterWallS.PBWA_S1_QuarterWallS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofC.PBWA_S1_RoofC_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_RoofC_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofC.PBWA_S1_RoofC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofI.PBWA_S1_RoofI_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_RoofI_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofI.PBWA_S1_RoofI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofO.PBWA_S1_RoofO_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_RoofO_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofO.PBWA_S1_RoofO_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Solid.PBWA_S1_Solid_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x28 (0xD80 - 0xD58)
	class APBWA_S1_Solid_C : public ABuildingWall	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xD58(0x8)
		int32_t GnomeWallChance; // 0xD60(0x4)
		int32_t GnomeWallMax; // 0xD64(0x4)
		bool Gnomed; // 0xD68(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xD69(0x7) UNKNOWN PROPERTY
		UMaterialInstanceConstant* GnomeMaterial; // 0xD70(0x8)
		UStaticMesh* GnomeWall; // 0xD78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Solid.PBWA_S1_Solid_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_PBWA_S1_Solid(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_StairR.PBWA_S1_StairR_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_S1_StairR_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_StairR.PBWA_S1_StairR_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_WindowsC.PBWA_S1_WindowsC_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_WindowsC_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_WindowsC.PBWA_S1_WindowsC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_WindowSide.PBWA_W1_WindowSide_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_WindowSide_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_WindowSide.PBWA_W1_WindowSide_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Windows.PBWA_W1_Windows_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_Windows_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Windows.PBWA_W1_Windows_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairT.PBWA_W1_StairT_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_W1_StairT_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairT.PBWA_W1_StairT_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Solid.PBWA_W1_Solid_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_Solid_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Solid.PBWA_W1_Solid_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofD.PBWA_W1_RoofD_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_RoofD_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofD.PBWA_W1_RoofD_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_QuarterWallS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_HalfWallS.PBWA_W1_HalfWallS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_HalfWallS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_HalfWallS.PBWA_W1_HalfWallS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_DoorSide.PBWA_W1_DoorSide_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_DoorSide_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_DoorSide.PBWA_W1_DoorSide_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_BalconyO.PBWA_W1_BalconyO_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_BalconyO_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_BalconyO.PBWA_W1_BalconyO_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Archway.PBWA_S1_Archway_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_Archway_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Archway.PBWA_S1_Archway_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_BalconyI.PBWA_S1_BalconyI_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_BalconyI_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_BalconyI.PBWA_S1_BalconyI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_BalconyO.PBWA_S1_BalconyO_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_BalconyO_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_BalconyO.PBWA_S1_BalconyO_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_HalfWallS.PBWA_S1_HalfWallS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_HalfWallS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_HalfWallS.PBWA_S1_HalfWallS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofS.PBWA_S1_RoofS_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_S1_RoofS_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_RoofS.PBWA_S1_RoofS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_StairF.PBWA_S1_StairF_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_S1_StairF_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_StairF.PBWA_S1_StairF_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_StairW.PBWA_S1_StairW_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_S1_StairW_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_StairW.PBWA_S1_StairW_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_WindowsSide.PBWA_S1_WindowsSide_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_S1_WindowsSide_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_WindowsSide.PBWA_S1_WindowsSide_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_WindowC.PBWA_W1_WindowC_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_WindowC_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_WindowC.PBWA_W1_WindowC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairW.PBWA_W1_StairW_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_W1_StairW_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairW.PBWA_W1_StairW_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairR.PBWA_W1_StairR_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_W1_StairR_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairR.PBWA_W1_StairR_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairF.PBWA_W1_StairF_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_W1_StairF_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairF.PBWA_W1_StairF_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofS.PBWA_W1_RoofS_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_RoofS_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofS.PBWA_W1_RoofS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofO.PBWA_W1_RoofO_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_RoofO_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofO.PBWA_W1_RoofO_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofI.PBWA_W1_RoofI_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_RoofI_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofI.PBWA_W1_RoofI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_QuarterWallHalf.PBWA_W1_QuarterWallHalf_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_QuarterWallHalf_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_QuarterWallHalf.PBWA_W1_QuarterWallHalf_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Pillar.PBWA_W1_Pillar_C
	// Inherited from ABuildingPillar -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_Pillar_C : public ABuildingPillar	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Pillar.PBWA_W1_Pillar_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_HalfWallHalf.PBWA_W1_HalfWallHalf_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_HalfWallHalf_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_HalfWallHalf.PBWA_W1_HalfWallHalf_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_HalfWallDoor.PBWA_W1_HalfWallDoor_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_HalfWallDoor_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_HalfWallDoor.PBWA_W1_HalfWallDoor_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Floor.PBWA_W1_Floor_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_Floor_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Floor.PBWA_W1_Floor_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_DoorS.PBWA_W1_DoorS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_DoorS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_DoorS.PBWA_W1_DoorS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Brace.PBWA_W1_Brace_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_Brace_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Brace.PBWA_W1_Brace_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_BalconyI.PBWA_W1_BalconyI_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_BalconyI_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_BalconyI.PBWA_W1_BalconyI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_BalconyD.PBWA_W1_BalconyD_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_BalconyD_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_BalconyD.PBWA_W1_BalconyD_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_ArchwayLarge.PBWA_W1_ArchwayLarge_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_ArchwayLarge_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_ArchwayLarge.PBWA_W1_ArchwayLarge_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Archway.PBWA_W1_Archway_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_Archway_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_Archway.PBWA_W1_Archway_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofWall.PBWA_W1_RoofWall_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_RoofWall_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofWall.PBWA_W1_RoofWall_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_HalfWallDoorS.PBWA_W1_HalfWallDoorS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_W1_HalfWallDoorS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_HalfWallDoorS.PBWA_W1_HalfWallDoorS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_BalconyS.PBWA_W1_BalconyS_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_W1_BalconyS_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_BalconyS.PBWA_W1_BalconyS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Archway.PBWA_BG_Archway_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_Archway_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Archway.PBWA_BG_Archway_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_ArchwayLarge.PBWA_BG_ArchwayLarge_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_ArchwayLarge_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_ArchwayLarge.PBWA_BG_ArchwayLarge_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_ArchwayLargeSupport.PBWA_BG_ArchwayLargeSupport_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_ArchwayLargeSupport_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_ArchwayLargeSupport.PBWA_BG_ArchwayLargeSupport_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_BalconyD.PBWA_BG_BalconyD_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_BalconyD_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_BalconyD.PBWA_BG_BalconyD_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_BalconyI.PBWA_BG_BalconyI_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_BalconyI_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_BalconyI.PBWA_BG_BalconyI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_BalconyO.PBWA_BG_BalconyO_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_BalconyO_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_BalconyO.PBWA_BG_BalconyO_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_BalconyS.PBWA_BG_BalconyS_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_BalconyS_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_BalconyS.PBWA_BG_BalconyS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Brace.PBWA_BG_Brace_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_Brace_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Brace.PBWA_BG_Brace_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_DoorC.PBWA_BG_DoorC_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_DoorC_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_DoorC.PBWA_BG_DoorC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_DoorS.PBWA_BG_DoorS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_DoorS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_DoorS.PBWA_BG_DoorS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_DoorSide.PBWA_BG_DoorSide_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_DoorSide_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_DoorSide.PBWA_BG_DoorSide_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Floor.PBWA_BG_Floor_C
	// Inherited from ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_Floor_C : public ABuildingFloor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Floor.PBWA_BG_Floor_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_HalfWall.PBWA_BG_HalfWall_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_HalfWall_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_HalfWall.PBWA_BG_HalfWall_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_HalfWallDoor.PBWA_BG_HalfWallDoor_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_HalfWallDoor_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_HalfWallDoor.PBWA_BG_HalfWallDoor_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_HalfWallDoorS.PBWA_BG_HalfWallDoorS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_HalfWallDoorS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_HalfWallDoorS.PBWA_BG_HalfWallDoorS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_HalfWallHalf.PBWA_BG_HalfWallHalf_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_HalfWallHalf_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_HalfWallHalf.PBWA_BG_HalfWallHalf_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_QuarterWallHalf.PBWA_BG_QuarterWallHalf_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_QuarterWallHalf_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_QuarterWallHalf.PBWA_BG_QuarterWallHalf_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_QuarterWallS.PBWA_BG_QuarterWallS_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_QuarterWallS_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_QuarterWallS.PBWA_BG_QuarterWallS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofC.PBWA_BG_RoofC_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_RoofC_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofC.PBWA_BG_RoofC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofD.PBWA_BG_RoofD_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_RoofD_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofD.PBWA_BG_RoofD_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofI.PBWA_BG_RoofI_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_RoofI_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofI.PBWA_BG_RoofI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofO.PBWA_BG_RoofO_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_RoofO_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofO.PBWA_BG_RoofO_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofS.PBWA_BG_RoofS_C
	// Inherited from ABuildingRoof -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBA8 - 0xBA8)
	class APBWA_BG_RoofS_C : public ABuildingRoof	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofS.PBWA_BG_RoofS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofWall.PBWA_BG_RoofWall_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_RoofWall_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_RoofWall.PBWA_BG_RoofWall_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Solid.PBWA_BG_Solid_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_Solid_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Solid.PBWA_BG_Solid_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_StairF.PBWA_BG_StairF_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_BG_StairF_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_StairF.PBWA_BG_StairF_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_StairR.PBWA_BG_StairR_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_BG_StairR_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_StairR.PBWA_BG_StairR_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_StairT.PBWA_BG_StairT_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_BG_StairT_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_StairT.PBWA_BG_StairT_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_StairW.PBWA_BG_StairW_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_BG_StairW_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_StairW.PBWA_BG_StairW_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_WindowC.PBWA_BG_WindowC_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_WindowC_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_WindowC.PBWA_BG_WindowC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Windows.PBWA_BG_Windows_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_Windows_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Windows.PBWA_BG_Windows_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_WindowSide.PBWA_BG_WindowSide_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class APBWA_BG_WindowSide_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_WindowSide.PBWA_BG_WindowSide_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Player/Master/PBW_BP_Parent.PBW_BP_Parent_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x18 (0xD70 - 0xD58)
	class APBW_BP_Parent_C : public ABuildingWall	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xD58(0x8)
		TArray<UStaticMesh*> StaticMeshAlternateArray; // 0xD60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Master/PBW_BP_Parent.PBW_BP_Parent_C");
			return ret;
		}

		void OnRep_Random Chance(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_PBW_BP_Parent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C
	// Inherited from ABuildingStairs -> ABuildingFloor -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xBB0 - 0xBB0)
	class APBWA_W1_StairSpiral_C : public ABuildingStairs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Building/NavigationAreas/FortMetaNavWallAreaDef.FortMetaNavWallAreaDef_C
	// Inherited from UFortMetaNavArea_Wall -> UFortMetaNavArea -> UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UFortMetaNavWallAreaDef_C : public UFortMetaNavArea_Wall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/NavigationAreas/FortMetaNavWallAreaDef.FortMetaNavWallAreaDef_C");
			return ret;
		}
	};


	// Class /Game/Building/NavigationAreas/FortMetaNavAreaDef.FortMetaNavAreaDef_C
	// Inherited from UFortMetaNavArea -> UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UFortMetaNavAreaDef_C : public UFortMetaNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/NavigationAreas/FortMetaNavAreaDef.FortMetaNavAreaDef_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_StairF.NavLink_StairF_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_StairF_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_StairF.NavLink_StairF_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_FloorS.NavLink_FloorS_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_FloorS_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_FloorS.NavLink_FloorS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_BalconyI.NavLink_BalconyI_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_BalconyI_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_BalconyI.NavLink_BalconyI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_StairT.NavLink_StairT_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_StairT_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_StairT.NavLink_StairT_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_StairR.NavLink_StairR_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_StairR_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_StairR.NavLink_StairR_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_BalconyS.NavLink_BalconyS_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_BalconyS_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_BalconyS.NavLink_BalconyS_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_FloorI.NavLink_FloorI_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_FloorI_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_FloorI.NavLink_FloorI_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_BalconyO.NavLink_BalconyO_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_BalconyO_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_BalconyO.NavLink_BalconyO_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_Floor.NavLink_Floor_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_Floor_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_Floor.NavLink_Floor_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Navigation/NavLink_RoofC.NavLink_RoofC_C
	// Inherited from UFortNavLinkDefinition -> UNavLinkDefinition -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UNavLink_RoofC_C : public UFortNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_RoofC.NavLink_RoofC_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Containers/Creative_Tiered_Chest.Creative_Tiered_Chest_C
	// Inherited from ABuildingCustomizableSpawnContainer -> ABuildingContainer -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xDC (0xF14 - 0xE38)
	class ACreative_Tiered_Chest_C : public ABuildingCustomizableSpawnContainer	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xE38(0x8)
		UStaticMeshComponent* S_Chest_SmokeSheet; // 0xE40(0x8)
		UNiagaraComponent* NS_Athena_Loot_Chest_Aura; // 0xE48(0x8)
		UCreativeIslandResourceComponent* CreativeIslandResource; // 0xE50(0x8)
		UPointLightComponent* TrasureLight; // 0xE58(0x8)
		UAudioComponent* Chest_Ambient_Sound; // 0xE60(0x8)
		float MobileSelectedTL_LerpInteactoIcon_3B3245644A941BB300D1A3B017FAF4AC; // 0xE68(0x4)
		float MobileSelectedTL_LerpObject_3B3245644A941BB300D1A3B017FAF4AC; // 0xE6C(0x4)
		TEnumAsByte<ETimelineDirection> MobileSelectedTL__Direction_3B3245644A941BB300D1A3B017FAF4AC; // 0xE70(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xE71(0x7) UNKNOWN PROPERTY
		UTimelineComponent* MobileSelectedTL; // 0xE78(0x8)
		float MobileOnInteractTL_LERP_0EDB17994610CCA511D017A7FCB5FD6E; // 0xE80(0x4)
		TEnumAsByte<ETimelineDirection> MobileOnInteractTL__Direction_0EDB17994610CCA511D017A7FCB5FD6E; // 0xE84(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xE85(0x3) UNKNOWN PROPERTY
		UTimelineComponent* MobileOnInteractTL; // 0xE88(0x8)
		UParticleSystemComponent* Loot_Effect; // 0xE90(0x8)
		USoundBase* SpecialChestOpenSound; // 0xE98(0x8)
		TArray<UMaterialInstanceDynamic*> MIDs; // 0xEA0(0x10)
		double MobileWiggleAmount; // 0xEB0(0x8)
		FTimerHandle ChimeTimer; // 0xEB8(0x8)
		double ChestChimeVisualUpdate; // 0xEC0(0x8)
		UMaterialInterface* MobileInteractionMaterial; // 0xEC8(0x8)
		UStaticMeshComponent* MobileInteractIcon; // 0xED0(0x8)
		FVector MobileInteractIconLocation; // 0xED8(0x18)
		FVector MobileInteractIconScale; // 0xEF0(0x18)
		FName ResourceLightTag; // 0xF08(0x4)
		FName ResourceVFXTag; // 0xF0C(0x4)
		FName ResourceAudioTag; // 0xF10(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Containers/Creative_Tiered_Chest.Creative_Tiered_Chest_C");
			return ret;
		}

		void On Free Resources(UCreativeIslandResourceManagerComponent* Resource Manager); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Request Resources(UCreativeIslandResourceManagerComponent* Resource Manager); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCustomDepthStencilValue(TArray<UPrimitiveComponent*>& PrimComponents, bool bUseCustomDepth, int32_t StencilValue, bool& bOutConsume); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetVisibleMobileInteractIcon(bool Visible); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMaxAudibleDistance(double& Max Distance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CleanupWiggleMIDs(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateMobileMIDs(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldDie(float Damage, AController* EventInstigator, AActor* DamageCauser, bool bIsTest, FGameplayEffectContextHandle& EffectContext); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintCanInteract(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<TInteractionType> InteractionType); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLightVisibility(bool Visible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MobileOnInteractTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MobileOnInteractTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MobileSelectedTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MobileSelectedTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoot(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetSearched(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Mobile_Outline_On(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Mobile_Outline_Off(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Mobile_OnInteract(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Mobile_OnDisconnect(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Chime Visual(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableBacchusHighlight(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DisableBacchusHighlight(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBeginSearch(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CreativeIslandResource_K2Node_ComponentBoundEvent_0_RequestResourcesSignature__DelegateSignature(UCreativeIslandResourceManagerComponent* ResourceManager); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CreativeIslandResource_K2Node_ComponentBoundEvent_1_FreeResourcesSignature__DelegateSignature(UCreativeIslandResourceManagerComponent* ResourceManager); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreDestroy(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Creative_Tiered_Chest(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Building/ActorBlueprints/Containers/ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C
	// Inherited from ABuildingContainer -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xF8 (0xF18 - 0xE20)
	class AParentBuildingContainerBlueprint_C : public ABuildingContainer	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xE20(0x8)
		bool DebugWind; // 0xE28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xE29(0x7) UNKNOWN PROPERTY
		TArray<UMaterialInterface*> IntenseWindMaterialsForPreview; // 0xE30(0x10)
		UStaticMeshComponent* Wind_Intensity_Debug_Mesh; // 0xE40(0x8)
		TArray<UMaterialInterface*> OriginalMaterials; // 0xE48(0x10)
		UMaterialInstanceDynamic* Debug_TempMaterial; // 0xE58(0x8)
		double DebugWindYaw; // 0xE60(0x8)
		double Debug_Wind_Intensity; // 0xE68(0x8)
		bool Set_Max_Actor_Scale; // 0xE70(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xE71(0x7) UNKNOWN PROPERTY
		double Max_Scale; // 0xE78(0x8)
		bool Disable_TOD_Lights_and_Material_Emissive_Values; // 0xE80(0x1)
		bool Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active; // 0xE81(0x1)
		bool Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_; // 0xE82(0x1)
		unsigned char UnknownData02_6[0x5]; // 0xE83(0x5) UNKNOWN PROPERTY
		UStaticMesh* AlternateShadowStaticMesh; // 0xE88(0x8)
		bool Animate_Emissive_and_Lights_Over_Time; // 0xE90(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xE91(0x7) UNKNOWN PROPERTY
		TArray<FLinearColor> CodeControlled_EmissiveColor; // 0xE98(0x10)
		TArray<double> CodeControlled_LightConeOpacity; // 0xEA8(0x10)
		FDayPhaseFloats Light_Intensity_Over_Time_of_Day_; // 0xEB8(0x10)
		double Day_Phase_Transition_Length; // 0xEC8(0x8)
		FDayPhaseFloats Emissive_Intensity_Over_Time_of_Day; // 0xED0(0x10)
		double Volumetric_Light_Scattering_Intensity; // 0xEE0(0x8)
		bool Cast_Volumetric_Shadows; // 0xEE8(0x1)
		bool Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls; // 0xEE9(0x1)
		bool Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls; // 0xEEA(0x1)
		unsigned char UnknownData04_6[0x5]; // 0xEEB(0x5) UNKNOWN PROPERTY
		UCurveFloat* LightAnimationCurve; // 0xEF0(0x8)
		double CodeControlled_Animation_Curve_Animation_Length; // 0xEF8(0x8)
		int32_t CodeControlled_NumberOfMaterials; // 0xF00(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xF04(0x4) UNKNOWN PROPERTY
		double Random_Time_Scale_Percent; // 0xF08(0x8)
		double CodeControlled_CurrentPlayLength; // 0xF10(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Containers/ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C");
			return ret;
		}

		void GetTimeOfDayBlueprintDefaultVariables(FTimeOfDayBlueprintDefaultVariables& OutVariables); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetSearched(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Loop Animation Curve(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBounceAnimationUpdate(FFortBounceData& Data); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ParentBuildingContainerBlueprint(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Building/ActorBlueprints/Wall/Parent_BuildingWall.Parent_BuildingWall_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xD58 - 0xD58)
	class AParent_BuildingWall_C : public ABuildingWall	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Wall/Parent_BuildingWall.Parent_BuildingWall_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Prop/PropGameplayEffects/GE_Character_Launch_Static_Web.GE_Character_Launch_Static_Web_C
	// Inherited from UGE_Generic_Character_Launch_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Character_Launch_Static_Web_C : public UGE_Generic_Character_Launch_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Prop/PropGameplayEffects/GE_Character_Launch_Static_Web.GE_Character_Launch_Static_Web_C");
			return ret;
		}
	};


	// Class /Game/Building/ActorBlueprints/Prop/Car_DEFAULT.Car_DEFAULT_C
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x2A8 (0xE80 - 0xBD8)
	class ACar_DEFAULT_C : public ABuildingProp	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xBD8(0x8)
		UBuildingActorLootDropOnDeathComponent_C* BuildingActorLootDropOnDeathComponent; // 0xBE0(0x8)
		float Timeline_2_SirenLightMultiplier_432AD11E41A8AFC288A559BCD8B4B9AF; // 0xBE8(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_2__Direction_432AD11E41A8AFC288A559BCD8B4B9AF; // 0xBEC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xBED(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0xBF0(0x8)
		float BounceCar_Vertical_Bounce_Component_80AD679E42DD1FF308EBD994998BB983; // 0xBF8(0x4)
		TEnumAsByte<ETimelineDirection> BounceCar__Direction_80AD679E42DD1FF308EBD994998BB983; // 0xBFC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xBFD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* BounceCar; // 0xC00(0x8)
		float Timeline_0_AlarmLightMultiplier_431FAFC04FFC4DEBB684B3B6AF7510E7; // 0xC08(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_0__Direction_431FAFC04FFC4DEBB684B3B6AF7510E7; // 0xC0C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xC0D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0xC10(0x8)
		bool OverallAlarmCycleFinished; // 0xC18(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xC19(0x3) UNKNOWN PROPERTY
		FLinearColor InitialEmissiveMultiplier; // 0xC1C(0x10)
		FLinearColor InitialEmissiveMultiplier2; // 0xC2C(0x10)
		int32_t AlarmLightCounter; // 0xC3C(0x4)
		bool SoundIsRetriggerable; // 0xC40(0x1)
		bool CurrentFlashAnimationCycleFinished; // 0xC41(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xC42(0x2) UNKNOWN PROPERTY
		int32_t NumberOfTimesTheLightsFlashWhenHit; // 0xC44(0x4)
		double SirenLightEmissiveMultiplier; // 0xC48(0x8)
		bool SirenLightOn; // 0xC50(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xC51(0x3) UNKNOWN PROPERTY
		FName Emissive_Multiplier_2; // 0xC54(0x4)
		FName Emissive_Multiplier; // 0xC58(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xC5C(0x4) UNKNOWN PROPERTY
		USoundBase* Sound___HitAlarm; // 0xC60(0x8)
		bool Use_Emissive_2; // 0xC68(0x1)
		unsigned char UnknownData07_6[0x7]; // 0xC69(0x7) UNKNOWN PROPERTY
		USoundBase* Sound___Jump_on_Car; // 0xC70(0x8)
		double SuspensionMovementAmount; // 0xC78(0x8)
		bool ParticleEffectHas_NOT_AlreadyBeenTriggered; // 0xC80(0x1)
		unsigned char UnknownData08_6[0x7]; // 0xC81(0x7) UNKNOWN PROPERTY
		UParticleSystemComponent* EngineSteamParticleEffect; // 0xC88(0x8)
		USoundBase* Sound___Hit_AutoBody; // 0xC90(0x8)
		bool canMakeJumpingNoiseAgain; // 0xC98(0x1)
		bool CarAlarmIsCurrentlyMakingNoise; // 0xC99(0x1)
		bool CarAlarmEnabled; // 0xC9A(0x1)
		bool RandomlyDisableSomeCarAlarms; // 0xC9B(0x1)
		unsigned char UnknownData09_6[0x4]; // 0xC9C(0x4) UNKNOWN PROPERTY
		double PercentageChanceOfCarAlarmsBeingDisabled; // 0xCA0(0x8)
		UPointLightComponent* hlight1; // 0xCA8(0x8)
		FVector HLight1SocketLocation; // 0xCB0(0x18)
		FVector HLight2SocketLocation; // 0xCC8(0x18)
		TArray<UMaterialInstanceDynamic*> AnimatingMIDArray; // 0xCE0(0x10)
		UAudioComponent* AudibleAlarmSound; // 0xCF0(0x8)
		bool UseCarBounce; // 0xCF8(0x1)
		bool UseCarAlarm; // 0xCF9(0x1)
		unsigned char UnknownData10_6[0x6]; // 0xCFA(0x6) UNKNOWN PROPERTY
		double Headlight_Emissive_Brightness; // 0xD00(0x8)
		bool IsCarAlarmEnabledInitialized; // 0xD08(0x1)
		bool DebugWind; // 0xD09(0x1)
		unsigned char UnknownData11_6[0x6]; // 0xD0A(0x6) UNKNOWN PROPERTY
		TArray<UMaterialInterface*> OriginalMaterials; // 0xD10(0x10)
		TArray<UMaterialInterface*> IntenseWindMaterialsForPreview; // 0xD20(0x10)
		UMaterialInstanceDynamic* Debug_TempMaterial; // 0xD30(0x8)
		double Debug_Wind_Intensity; // 0xD38(0x8)
		UStaticMeshComponent* Wind_Intensity_Debug_Mesh; // 0xD40(0x8)
		bool CanDropOilDecal; // 0xD48(0x1)
		unsigned char UnknownData12_6[0x7]; // 0xD49(0x7) UNKNOWN PROPERTY
		double Wind_Yaw_Rotation; // 0xD50(0x8)
		UPointLightComponent* Taillight1; // 0xD58(0x8)
		UPointLightComponent* Taillight2; // 0xD60(0x8)
		double TailLightBrightness; // 0xD68(0x8)
		bool TailLightsExist; // 0xD70(0x1)
		bool HeadLightsExist; // 0xD71(0x1)
		unsigned char UnknownData13_6[0x6]; // 0xD72(0x6) UNKNOWN PROPERTY
		USpotLightComponent* hlight2; // 0xD78(0x8)
		double HeadLightLightBrightness; // 0xD80(0x8)
		FVector TLight1SocketLocation; // 0xD88(0x18)
		FVector TLight2SocketLocation; // 0xDA0(0x18)
		FVector Bounce_Offset; // 0xDB8(0x18)
		FVector hlight2___impact_bounce_light_location; // 0xDD0(0x18)
		FVector tlight2___impact_bounce_light_location; // 0xDE8(0x18)
		bool Car_Currently_Bouncing_From_Jump; // 0xE00(0x1)
		unsigned char UnknownData14_6[0x7]; // 0xE01(0x7) UNKNOWN PROPERTY
		FVector hlight1___impact_bounce_light_location; // 0xE08(0x18)
		FVector tlight1___impact_bounce_light_location; // 0xE20(0x18)
		bool Randomly_start_with_some_cars_lights_on; // 0xE38(0x1)
		unsigned char UnknownData15_6[0x7]; // 0xE39(0x7) UNKNOWN PROPERTY
		double Percentage_chance_of_lights_being_left_off; // 0xE40(0x8)
		double Final_Random_Light_Intensity_Variance; // 0xE48(0x8)
		bool This_Car_s_Lights_Have_Been_Enabled; // 0xE50(0x1)
		bool TurnHeadLightsOn; // 0xE51(0x1)
		unsigned char UnknownData16_6[0x6]; // 0xE52(0x6) UNKNOWN PROPERTY
		double TimeSinceLastJumpSound; // 0xE58(0x8)
		double MinTimeBetweenJumpSound; // 0xE60(0x8)
		FMulticastInlineDelegate OnPlayDeathEffects; // 0xE68(0x10)
		double currentLightRuntimeIntensity; // 0xE78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Prop/Car_DEFAULT.Car_DEFAULT_C");
			return ret;
		}

		void Construct Clean Up Lights(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void construct_ValidateLightsOnVars(bool& doesHaveLights); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void validateLightVisibility(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void generateMeshMIDs(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void getCarMatsForLights(TArray<UMaterialInstanceDynamic*>& outMaterials); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayJumpOnCarSound(FVector Location); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void toggle light visibility(bool bNewVisibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Randomize the target brightness levels(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Light Brightness(double 0-1 Intensity, bool Include Second Emissive Channel, bool Force); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		double MaterialEditorSine(double Look up value, double Period); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		double SetCarAlarmEnabledBasedOnLocation(FVector Location, bool& NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void setcanmakebouncingnoisetrue(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopCarAlarmFromPlaying(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BounceCar__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BounceCar__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_2__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_2__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_2__FireOffNoise__EventFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartSirenLight(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeSirenLight(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerLowHealthParticleEffect(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamagePlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamageServer(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FireOffCarAlarm(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBounceAnimationUpdate(FFortBounceData& Data); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Hit Bounce Finished(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Player jump based bounce (); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Car_DEFAULT(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayDeathEffects__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}