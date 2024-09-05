#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_GameStreamRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UCreativeGameStreamDeviceComponent : public UActorComponent	
	{
	public:
		FMulticastSparseDelegate OnTriggered; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortMinigameLogicComponent*> MinigameLogicComponent; // 0xA4(0x8)
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent");
			return ret;
		}

		void RemoveFromEndGameQueue(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState); // Flags: Final|Native|Private, Memory Exec: 0x7FF74E6FF63C(relative to base address)
		bool IsWithinPublishedPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		void Init(UFortMinigameLogicComponent* InMinigameLogicComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void CreativeGameStreamDeviceComponentSignature__DelegateSignature(UCreativeGameStreamDeviceComponent* CreativeGameStreamDeviceComponent); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddToEndGameQueue(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UCreativeGameStreamDeviceCoordinatorComponent : public UPlayspaceComponent	
	{
	public:
		TArray<TWeakObjectPtr> EndGameCreativeGameStreamDeviceComponentQueue; // 0xA0(0x10)
		TWeakObjectPtr<AFortMinigame*> Minigame; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent");
			return ret;
		}

		void OnMinigameStateChanged(AFortMinigame* InMinigame, EFortMinigameState NewMinigameState); // Flags: Final|Native|Private, Memory Exec: 0x7FF74E6FF63C(relative to base address)
	};

}
