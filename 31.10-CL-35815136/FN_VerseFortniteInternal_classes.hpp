#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseFortniteInternal
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseFortniteInternal.BuildingActorEntityInteropComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UBuildingActorEntityInteropComponent : public UEntityComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.BuildingActorEntityInteropComponent");
			return ret;
		}
	};


	// Class VerseFortniteInternal.VerseFortniteMovementComponentBase
	// Inherited from UEntityActorComponent -> UEntityComponent -> UObject
	// Size: 0x0 (0x88 - 0x88)
	class UVerseFortniteMovementComponentBase : public UEntityActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.VerseFortniteMovementComponentBase");
			return ret;
		}
	};


	// Class VerseFortniteInternal.FortControllerStateHandlerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFortControllerStateHandlerComponent : public UControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.FortControllerStateHandlerComponent");
			return ret;
		}

		void NotifyOfStateChange(FString& State, bool Active); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF75053E528(relative to base address)
	};


	// Class VerseFortniteInternal.FortAthenaMutator_BuildingSettings
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x18 (0x350 - 0x338)
	class AFortAthenaMutator_BuildingSettings : public AFortAthenaMutator	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x338(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.FortAthenaMutator_BuildingSettings");
			return ret;
		}
	};


	// Class VerseFortniteInternal.FortBuildingSettingsComponentBase
	// Inherited from UEntityEnableableComponent -> UEntityComponent -> UObject
	// Size: 0x10 (0x88 - 0x78)
	class UFortBuildingSettingsComponentBase : public UEntityEnableableComponent	
	{
	public:
		AFortAthenaMutator_BuildingSettings* Mutator; // 0x78(0x8)
		TEnumAsByte<EPlayerSettingStateInternal> Building; // 0x80(0x1)
		TEnumAsByte<EPlayerSettingStateInternal> BuildingOnWater; // 0x81(0x1)
		TEnumAsByte<EPlayerSettingStateInternal> Editing; // 0x82(0x1)
		TEnumAsByte<EPlayerSettingStateInternal> EditingHostile; // 0x83(0x1)
		TEnumAsByte<EPlayerSettingStateInternal> TrapPlacement; // 0x84(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x85(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.FortBuildingSettingsComponentBase");
			return ret;
		}

		void OnRep_Settings(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75053E6AC(relative to base address)
	};


	// Class VerseFortniteInternal.FortPlayspaceComponentHelper
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortPlayspaceComponentHelper : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.FortPlayspaceComponentHelper");
			return ret;
		}

		void HandlePlayerPawnPossessed(APawn* Pawn); // Flags: Final|Native|Public, Memory Exec: 0x7FF75053E4A8(relative to base address)
		void HandlePlayerDied(AFortPlayerPawnAthena* FortPlayerPawnAthena); // Flags: Final|Native|Public, Memory Exec: 0x7FF75053E428(relative to base address)
	};


	// Class VerseFortniteInternal.VerseFortniteEntitySubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UVerseFortniteEntitySubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.VerseFortniteEntitySubsystem");
			return ret;
		}
	};

}
