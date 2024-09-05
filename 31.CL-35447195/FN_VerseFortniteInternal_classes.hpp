#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseFortniteInternal
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseFortniteInternal.BuildingActorEntityInteropComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UBuildingActorEntityInteropComponent : public UEntityComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

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

		void NotifyOfStateChange(FString& State, bool Active); // Flags: Final|Native|Public|HasOutParms 0x7FF414BA7C58
	};


	// Class VerseFortniteInternal.FortAthenaMutator_BuildingSettings
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x18 (0x350 - 0x338)
	class AFortAthenaMutator_BuildingSettings : public AFortAthenaMutator	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x338(0x18) UNKNOWN PROPERTY

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
		AFortAthenaMutator_BuildingSettings Mutator; // 0x78(0x8)
		TEnumAsByte Building; // 0x80(0x1)
		TEnumAsByte BuildingOnWater; // 0x81(0x1)
		TEnumAsByte Editing; // 0x82(0x1)
		TEnumAsByte EditingHostile; // 0x83(0x1)
		TEnumAsByte TrapPlacement; // 0x84(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x85(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.FortBuildingSettingsComponentBase");
			return ret;
		}

		void OnRep_Settings(); // Flags: Final|Native|Private 0x7FF414BA7D38
	};


	// Class VerseFortniteInternal.FortPlayspaceComponentHelper
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortPlayspaceComponentHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.FortPlayspaceComponentHelper");
			return ret;
		}

		void HandlePlayerPawnPossessed(APawn Pawn); // Flags: Final|Native|Public 0x7FF414BA7EF8
		void HandlePlayerDied(AFortPlayerPawnAthena FortPlayerPawnAthena); // Flags: Final|Native|Public 0x7FF414BA7E18
	};


	// Class VerseFortniteInternal.VerseFortniteEntitySubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UVerseFortniteEntitySubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteInternal.VerseFortniteEntitySubsystem");
			return ret;
		}
	};

}
