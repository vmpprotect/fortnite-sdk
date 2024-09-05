#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRDPlayerTracker
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRDPlayerTracker.CRDPlayerTrackerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UCRDPlayerTrackerComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPlayerTracker.CRDPlayerTrackerComponent");
			return ret;
		}
	};


	// Class CRDPlayerTracker.CRDPlayerTrackerMarker
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ACRDPlayerTrackerMarker : public AActor	
	{
	public:
		UClass* WidgetClass; // 0x290(0x8)
		UActorComponent* PlayerTrackerUIActorComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPlayerTracker.CRDPlayerTrackerMarker");
			return ret;
		}

		bool DestroyPlayerTrackerWidget(AFortPlayerControllerGameplay* InFortPlayerControllerGameplay); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516CAC48(relative to base address)
		UUserWidget CreatePlayerTrackerWidget(AFortPlayerControllerGameplay* InFortPlayerControllerGameplay, AFortPlayerStateAthena* AssociatedPSA); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516CAA54(relative to base address)
	};

}
