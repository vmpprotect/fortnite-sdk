#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortniteGameFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FortniteGameFramework.FGF_PlayerState
	// Inherited from APlayerState -> AInfo -> AActor -> UObject
	// Size: 0x10 (0x358 - 0x348)
	class AFGF_PlayerState : public APlayerState	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x348(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteGameFramework.FGF_PlayerState");
			return ret;
		}
	};


	// Class FortniteGameFramework.FGF_PlayerController
	// Inherited from APlayerController -> AController -> AActor -> UObject
	// Size: 0x10 (0x858 - 0x848)
	class AFGF_PlayerController : public APlayerController	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x848(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteGameFramework.FGF_PlayerController");
			return ret;
		}
	};


	// Class FortniteGameFramework.FGF_Character
	// Inherited from ACharacter -> APawn -> AActor -> UObject
	// Size: 0x18 (0x630 - 0x618)
	class AFGF_Character : public ACharacter	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x618(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteGameFramework.FGF_Character");
			return ret;
		}
	};


	// Class FortniteGameFramework.FGF_GameMode
	// Inherited from AGameMode -> AGameModeBase -> AInfo -> AActor -> UObject
	// Size: 0x10 (0x380 - 0x370)
	class AFGF_GameMode : public AGameMode	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x370(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteGameFramework.FGF_GameMode");
			return ret;
		}
	};


	// Class FortniteGameFramework.FGF_GameState
	// Inherited from AGameState -> AGameStateBase -> AInfo -> AActor -> UObject
	// Size: 0x18 (0x318 - 0x300)
	class AFGF_GameState : public AGameState	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x300(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteGameFramework.FGF_GameState");
			return ret;
		}
	};


	// Class FortniteGameFramework.ObjectBasedStateTreeSchema
	// Inherited from UStateTreeSchema -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UObjectBasedStateTreeSchema : public UStateTreeSchema	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteGameFramework.ObjectBasedStateTreeSchema");
			return ret;
		}
	};


	// Class FortniteGameFramework.StateTreeManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class UStateTreeManagerComponent : public UActorComponent	
	{
	public:
		TArray StateTreeRuntimeDataList; // 0xA0(0x10)
		TArray SimulatedDataList; // 0xB0(0x10)
		FStateChangeDataArray ReplicatedStateChanges; // 0xC0(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteGameFramework.StateTreeManagerComponent");
			return ret;
		}
	};


	// Class FortniteGameFramework.StateTreeTaskObject
	// Inherited from UStateTreeTaskBlueprintBase -> UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UStateTreeTaskObject : public UStateTreeTaskBlueprintBase	
	{
	public:
		bool bReplicates; // 0x58(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteGameFramework.StateTreeTaskObject");
			return ret;
		}
	};

}
