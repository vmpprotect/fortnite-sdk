#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoCreature_TamingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoCreature_TamingRuntime.JunoAnimalProcessorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UJunoAnimalProcessorComponent : public UGameFrameworkComponent	
	{
	public:
		UJunoAnimalProcessorFriendshipModifierMappings* DefaultFriendshipModifiers; // 0xA0(0x8)
		FDataRegistryType AnimalProcessorConfigRegistryType; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer UnassignedCraftingTags; // 0xB0(0x20)
		FGameplayTag AssignedAnimalDescriptorTag; // 0xD0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FGameplayTag AssignedFriendshipStateTag; // 0xD8(0x4)
		float CurrentCraftingSpeedModifier; // 0xDC(0x4)
		unsigned char UnknownData02_7[0x38]; // 0xE0(0x38) UNKNOWN PROPERTY

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
		TMap<FGameplayTag, FDataTableRowHandle> FriendshipModifierMap; // 0x30(0x50)

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
		unsigned char UnknownData00_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

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
		AActor* BarnActor; // 0x28(0x8)
		AActor* AnimalActor; // 0x30(0x8)
		EJunoBarnAssignmentMode BarnAssignmentMode; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_3[0x48]; // 0xA8(0x48) UNKNOWN PROPERTY
		FGameplayTag FollowingAnimalAIDescriptorTag; // 0xF0(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0xF4(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming");
			return ret;
		}

		void Server_RenameAnimal(AFortPlayerController* TriggeringPlayer, FGameplayTag UniqueAIIdentifier, FText NewName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751D17C84(relative to base address)
		void Server_ReassignAnimalToBarn(AFortPlayerController* TriggeringPlayer, AActor* BarnActor, FGameplayTag UniqueAIIdentifier, FText ExistingName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751D17A38(relative to base address)
		void Server_BarnInteractionStarted(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E4851A4(relative to base address)
		void Server_BarnInteractionEnded(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E217D18(relative to base address)
		void Server_AssignAnimalToBarn(AFortPlayerController* TriggeringPlayer, AActor* BarnActor, AActor* AnimalActor, FText CustomName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751D178E8(relative to base address)
		void OnUnconvertFollowingAnimal(AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Public, Memory Exec: 0x7FF751D17828(relative to base address)
		void OnRep_FollowingAnimalAIDescriptorTag(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D177F4(relative to base address)
		void OnConvertFollowingAnimal(AFortPawn* ConvertedPawn); // Flags: Final|Native|Public, Memory Exec: 0x7FF751D17754(relative to base address)
		void ClientNotifySaveNameResult(bool bSuccess, AActor* BarnActor, AActor* AnimalActor); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF751D17654(relative to base address)
		void BP_HandleBarnInteractionStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleBarnInteractionEnded(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
