#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_GameStreamRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UCreativeGameStreamDeviceComponent : public UActorComponent	
	{
	public:
		FMulticastSparseDelegate OnTriggered; // 0xA0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr MinigameLogicComponent; // 0xA4(0x8)
		unsigned char UnknownData03_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent");
			return ret;
		}

		void RemoveFromEndGameQueue(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D84C60
		void OnMinigameStateChanged(AFortMinigame Minigame, EFortMinigameState NewMinigameState); // Flags: Final|Native|Private 0x7FF414D84B80
		bool IsWithinPublishedPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D84AA0
		void Init(UFortMinigameLogicComponent InMinigameLogicComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D849C0
		void CreativeGameStreamDeviceComponentSignature__DelegateSignature(UCreativeGameStreamDeviceComponent CreativeGameStreamDeviceComponent); // Flags: MulticastDelegate|Public|Delegate 0x7FF414D848D8
		void AddToEndGameQueue(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D847F8
	};


	// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UCreativeGameStreamDeviceCoordinatorComponent : public UPlayspaceComponent	
	{
	public:
		TArray EndGameCreativeGameStreamDeviceComponentQueue; // 0xA0(0x10)
		TWeakObjectPtr Minigame; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent");
			return ret;
		}

		void OnMinigameStateChanged(AFortMinigame InMinigame, EFortMinigameState NewMinigameState); // Flags: Final|Native|Private 0x7FF414D84D40
	};

}
