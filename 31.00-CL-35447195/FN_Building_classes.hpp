#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Building
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		TArray GetAffiliationsToShowFor(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D66EDA700
		bool ShouldShowSoundIndicator(AFortPlayerController PlayerController); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D66EDA600
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
		unsigned char UnknownData01_6[0x7]; // 0xD69(0x7) UNKNOWN PROPERTY
		UMaterialInstanceConstant GnomeMaterial; // 0xD70(0x8)
		UStaticMesh GnomeWall; // 0xD78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Solid.PBWA_S1_Solid_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D8226B800
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D8226B700
		void ExecuteUbergraph_PBWA_S1_Solid(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D8226B900
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

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D84D4E100
	};


	// Class /Game/Building/ActorBlueprints/Player/Master/PBW_BP_Parent.PBW_BP_Parent_C
	// Inherited from ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x18 (0xD70 - 0xD58)
	class APBW_BP_Parent_C : public ABuildingWall	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xD58(0x8)
		TArray StaticMeshAlternateArray; // 0xD60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Player/Master/PBW_BP_Parent.PBW_BP_Parent_C");
			return ret;
		}

		void OnRep_Random Chance(); // Flags: BlueprintCallable|BlueprintEvent 0x15D84D4DE00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D84D4D400
		void ExecuteUbergraph_PBW_BP_Parent(int32_t EntryPoint); // Flags: Final 0x15D84D4DF00
	};


	// Class /Game/Building/ActorBlueprints/Containers/Creative_Tiered_Chest.Creative_Tiered_Chest_C
	// Inherited from ABuildingCustomizableSpawnContainer -> ABuildingContainer -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xDC (0xF14 - 0xE38)
	class ACreative_Tiered_Chest_C : public ABuildingCustomizableSpawnContainer	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xE38(0x8)
		UStaticMeshComponent S_Chest_SmokeSheet; // 0xE40(0x8)
		UNiagaraComponent NS_Athena_Loot_Chest_Aura; // 0xE48(0x8)
		UCreativeIslandResourceComponent CreativeIslandResource; // 0xE50(0x8)
		UPointLightComponent TrasureLight; // 0xE58(0x8)
		UAudioComponent Chest_Ambient_Sound; // 0xE60(0x8)
		float MobileSelectedTL_LerpInteactoIcon_3B3245644A941BB300D1A3B017FAF4AC; // 0xE68(0x4)
		float MobileSelectedTL_LerpObject_3B3245644A941BB300D1A3B017FAF4AC; // 0xE6C(0x4)
		TEnumAsByte MobileSelectedTL__Direction_3B3245644A941BB300D1A3B017FAF4AC; // 0xE70(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xE71(0x7) UNKNOWN PROPERTY
		UTimelineComponent MobileSelectedTL; // 0xE78(0x8)
		float MobileOnInteractTL_LERP_0EDB17994610CCA511D017A7FCB5FD6E; // 0xE80(0x4)
		TEnumAsByte MobileOnInteractTL__Direction_0EDB17994610CCA511D017A7FCB5FD6E; // 0xE84(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xE85(0x3) UNKNOWN PROPERTY
		UTimelineComponent MobileOnInteractTL; // 0xE88(0x8)
		UParticleSystemComponent Loot_Effect; // 0xE90(0x8)
		USoundBase SpecialChestOpenSound; // 0xE98(0x8)
		TArray MIDs; // 0xEA0(0x10)
		double MobileWiggleAmount; // 0xEB0(0x8)
		FTimerHandle ChimeTimer; // 0xEB8(0x8)
		double ChestChimeVisualUpdate; // 0xEC0(0x8)
		UMaterialInterface MobileInteractionMaterial; // 0xEC8(0x8)
		UStaticMeshComponent MobileInteractIcon; // 0xED0(0x8)
		FVector MobileInteractIconLocation; // 0xED8(0x18)
		FVector MobileInteractIconScale; // 0xEF0(0x18)
		FName ResourceLightTag; // 0xF08(0x4)
		FName ResourceVFXTag; // 0xF0C(0x4)
		FName ResourceAudioTag; // 0xF10(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Containers/Creative_Tiered_Chest.Creative_Tiered_Chest_C");
			return ret;
		}

		void On Free Resources(UCreativeIslandResourceManagerComponent Resource Manager); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D46CEC900
		void On Request Resources(UCreativeIslandResourceManagerComponent Resource Manager); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D46CEC800
		void OnSetCustomDepthStencilValue(TArray& PrimComponents, bool bUseCustomDepth, int32_t StencilValue, bool& bOutConsume); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D46CEFE00
		void SetVisibleMobileInteractIcon(bool Visible); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D46CEF800
		void GetMaxAudibleDistance(double& Max Distance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D46CED200
		void CleanupWiggleMIDs(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D46CED700
		void CreateMobileMIDs(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D46CED600
		bool ShouldDie(float Damage, AController EventInstigator, AActor DamageCauser, bool bIsTest, FGameplayEffectContextHandle& EffectContext); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D46CEF700
		bool BlueprintCanInteract(AFortPawn InteractingPawn, TEnumAsByte InteractionBeingAttempted, TEnumAsByte InteractionType); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D46CEDB00
		void SetLightVisibility(bool Visible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D46CEF900
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D46CEF600
		void MobileOnInteractTL__FinishedFunc(); // Flags: BlueprintEvent 0x15D46CECD00
		void MobileOnInteractTL__UpdateFunc(); // Flags: BlueprintEvent 0x15D46CECC00
		void MobileSelectedTL__FinishedFunc(); // Flags: BlueprintEvent 0x15D46CECB00
		void MobileSelectedTL__UpdateFunc(); // Flags: BlueprintEvent 0x15D46CECA00
		void OnLoot(); // Flags: Event|Public|BlueprintEvent 0x15D46CEFF00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D46CEFB00
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent 0x15D46CEFA00
		void OnSetSearched(); // Flags: Event|Public|BlueprintEvent 0x15D46CEFD00
		void Mobile_Outline_On(); // Flags: BlueprintCallable|BlueprintEvent 0x15D46CECE00
		void Mobile_Outline_Off(); // Flags: BlueprintCallable|BlueprintEvent 0x15D46CECF00
		void Mobile_OnInteract(); // Flags: BlueprintCallable|BlueprintEvent 0x15D46CED000
		void Mobile_OnDisconnect(); // Flags: BlueprintCallable|BlueprintEvent 0x15D46CED100
		void Chime Visual(); // Flags: BlueprintCallable|BlueprintEvent 0x15D46CED800
		void EnableBacchusHighlight(); // Flags: Event|Public|BlueprintEvent 0x15D46CED400
		void DisableBacchusHighlight(); // Flags: Event|Public|BlueprintEvent 0x15D46CED500
		void OnBeginSearch(); // Flags: Event|Public|BlueprintEvent 0x15D46CEC700
		void BndEvt__CreativeIslandResource_K2Node_ComponentBoundEvent_0_RequestResourcesSignature__DelegateSignature(UCreativeIslandResourceManagerComponent ResourceManager); // Flags: BlueprintEvent 0x15D46CEDA00
		void BndEvt__CreativeIslandResource_K2Node_ComponentBoundEvent_1_FreeResourcesSignature__DelegateSignature(UCreativeIslandResourceManagerComponent ResourceManager); // Flags: BlueprintEvent 0x15D46CED900
		void PreDestroy(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D46CEFC00
		void ExecuteUbergraph_Creative_Tiered_Chest(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D46CED300
	};

}
