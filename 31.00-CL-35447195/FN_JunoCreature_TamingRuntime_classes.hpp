#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoCreature_TamingRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoCreature_TamingRuntime.JunoAnimalProcessorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UJunoAnimalProcessorComponent : public UGameFrameworkComponent	
	{
	public:
		UJunoAnimalProcessorFriendshipModifierMappings DefaultFriendshipModifiers; // 0xA0(0x8)
		FDataRegistryType AnimalProcessorConfigRegistryType; // 0xA8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer UnassignedCraftingTags; // 0xB0(0x20)
		FGameplayTag AssignedAnimalDescriptorTag; // 0xD0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FGameplayTag AssignedFriendshipStateTag; // 0xD8(0x4)
		float CurrentCraftingSpeedModifier; // 0xDC(0x4)
		unsigned char UnknownData05_7[0x38]; // 0xE0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingRuntime.JunoAnimalProcessorComponent");
			return ret;
		}
	};


	// Class JunoCreature_TamingRuntime.JunoAnimalProcessorFriendshipModifierMappings
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoAnimalProcessorFriendshipModifierMappings : public UDataAsset	
	{
	public:
		TMap FriendshipModifierMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingRuntime.JunoAnimalProcessorFriendshipModifierMappings");
			return ret;
		}
	};


	// Class JunoCreature_TamingRuntime.JunoAnimalProcessorWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UJunoAnimalProcessorWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingRuntime.JunoAnimalProcessorWorldConditionSchema");
			return ret;
		}
	};


	// Class JunoCreature_TamingRuntime.JunoBarnAssignmentMenuInitData
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UJunoBarnAssignmentMenuInitData : public UObject	
	{
	public:
		AActor BarnActor; // 0x28(0x8)
		AActor AnimalActor; // 0x30(0x8)
		EJunoBarnAssignmentMode BarnAssignmentMode; // 0x38(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FGameplayTag UniqueAIIdentifier; // 0x3C(0x4)
		FText ExistingName; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingRuntime.JunoBarnAssignmentMenuInitData");
			return ret;
		}
	};


	// Class JunoCreature_TamingRuntime.JunoControllerComponent_Taming
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UJunoControllerComponent_Taming : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData02_3[0x48]; // 0xA8(0x48) UNKNOWN PROPERTY
		FGameplayTag FollowingAnimalAIDescriptorTag; // 0xF0(0x4)
		unsigned char UnknownData03_7[0x1C]; // 0xF4(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming");
			return ret;
		}

		void Server_RenameAnimal(AFortPlayerController TriggeringPlayer, FGameplayTag UniqueAIIdentifier, FText NewName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414E38A40
		void Server_ReassignAnimalToBarn(AFortPlayerController TriggeringPlayer, AActor BarnActor, FGameplayTag UniqueAIIdentifier, FText ExistingName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414E38960
		void Server_BarnInteractionStarted(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414E38880
		void Server_BarnInteractionEnded(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414E387A0
		void Server_AssignAnimalToBarn(AFortPlayerController TriggeringPlayer, AActor BarnActor, AActor AnimalActor, FText CustomName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414E386C0
		void OnUnconvertFollowingAnimal(AFortPawn UnconvertedPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Public 0x7FF414E385E0
		void OnRep_FollowingAnimalAIDescriptorTag(); // Flags: Final|Native|Protected 0x7FF414E38500
		void OnConvertFollowingAnimal(AFortPawn ConvertedPawn); // Flags: Final|Native|Public 0x7FF414E38420
		void ClientNotifySaveNameResult(bool bSuccess, AActor BarnActor, AActor AnimalActor); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient 0x7FF414E38340
		void BP_HandleBarnInteractionStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E38260
		void BP_HandleBarnInteractionEnded(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E38180
	};

}
