#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRDLevelInstanceRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x340 - 0x338)
	class AFortAthenaMutator_LevelInstanceDevice : public AFortAthenaMutator	
	{
	public:
		TWeakObjectPtr CachedGameplayVolume; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice");
			return ret;
		}
	};


	// Class CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
	// Inherited from AGameplayVolume -> AActor -> UObject
	// Size: 0x1B8 (0x4E8 - 0x330)
	class ALevelInstanceGameplayVolume : public AGameplayVolume	
	{
	public:
		unsigned char UnknownData08_3[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLevelInstanceResolved; // 0x338(0x10)
		unsigned char UnknownData09_6[0x30]; // 0x348(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDisabledStateChanged; // 0x378(0x10)
		FMulticastInlineDelegate OnLevelInstanceGuidChanged; // 0x388(0x10)
		FMulticastInlineDelegate OnLevelInstanceNameChanged; // 0x398(0x10)
		FMulticastInlineDelegate OnLevelInstanceSizeChanged; // 0x3A8(0x10)
		FMulticastInlineDelegate OnLevelInstanceContentCollectionChanged; // 0x3B8(0x10)
		unsigned char UnknownData10_6[0x1]; // 0x3C8(0x1) UNKNOWN PROPERTY
		bool bEditMode; // 0x3C9(0x1)
		bool bDisabled; // 0x3CA(0x1)
		ESpatialLoadingState LoadingState; // 0x3CB(0x1)
		unsigned char UnknownData11_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		FString LevelInstanceName; // 0x3D0(0x10)
		bool bInstanceLoaded; // 0x3E0(0x1)
		bool bWantsLevelLoaded; // 0x3E1(0x1)
		unsigned char UnknownData12_6[0x1]; // 0x3E2(0x1) UNKNOWN PROPERTY
		bool bConvertStructuresToProps; // 0x3E3(0x1)
		unsigned char UnknownData13_6[0x4]; // 0x3E4(0x4) UNKNOWN PROPERTY
		AFortMinigame CachedMinigame; // 0x3E8(0x8)
		UFortMutatorListComponent MutatorListComponent; // 0x3F0(0x8)
		UFortClassTrackerComponent ClassFilterComponent; // 0x3F8(0x8)
		TArray BlacklistedClasses; // 0x400(0x10)
		unsigned char UnknownData14_6[0x50]; // 0x410(0x50) UNKNOWN PROPERTY
		FGuid LevelInstanceSaveActorGuid; // 0x460(0x10)
		AFortLevelInstanceSaveActor LevelInstanceSaveActor; // 0x470(0x8)
		unsigned char UnknownData15_7[0x70]; // 0x478(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume");
			return ret;
		}

		void SetWantsLevelLoaded(bool bInWantsLevelLoaded); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D86F60
		void SetReadyForInstantiation(bool bReady); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D86E80
		void SetLevelInstanceName(FString InName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D86DA0
		void SetLevelInstanceContentCollection(TWeakObjectPtr ContentCollection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D86CC0
		void SetLevelInstanceActorGuid(FGuid InLevelInstanceActorGuid); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D86BE0
		void SetEditMode(bool bInEditMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D86B00
		void RemoveActorWhenEndPlay(AActor Actor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Protected 0x7FF414D86A20
		void RemoveActorWhenDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF414D86940
		void OnVolumeChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D86860
		void OnRep_IsDisabled(); // Flags: Final|Native|Protected 0x7FF414D86780
		void OnRep_InstanceLoaded(); // Flags: Final|Native|Protected 0x7FF414D866A0
		void OnRep_EditMode(); // Flags: Final|Native|Protected 0x7FF414D865C0
		void OnMinigameStateChanged(AFortMinigame Minigame, EFortMinigameState MinigameState); // Flags: Final|Native|Protected 0x7FF414D864E0
		void LevelInstanceSizeChanged(AActor InstigatorActor); // Flags: Final|Native|Protected 0x7FF414D86400
		void LevelInstanceNameChanged(FString Name); // Flags: Final|Native|Protected 0x7FF414D86320
		void LevelInstanceContentCollectionChanged(AActor InstigatorActor, TWeakObjectPtr ContentCollection); // Flags: Final|Native|Protected 0x7FF414D86240
		void LevelInstanceContentChanged(AActor InstigatorActor); // Flags: Final|Native|Protected 0x7FF414D86160
		void LevelInstanceBeingDestroyed(); // Flags: Final|Native|Protected 0x7FF414D86080
		bool IsPreviewActor(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D85FA0
		bool IsInEditMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D85EC0
		bool IsDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D85DE0
		void InstantiateFromLevelInstanceSaveActor(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D85D00
		void HandleActorHealthChanged(AActor Actor, float NewHealth); // Flags: Final|Native|Protected 0x7FF414D85C20
		FString GetLevelInstanceName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D85B40
		AFortLevelInstanceSaveActor CreateLevelInstanceSaveActor(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D85A60
		void CheckForOverlappingVolumes(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D85980
	};


	// Class CRDLevelInstanceRuntime.LevelInstanceItemListComponent
	// Inherited from UFortMinigameItemContainerComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x128 - 0x128)
	class ULevelInstanceItemListComponent : public UFortMinigameItemContainerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDLevelInstanceRuntime.LevelInstanceItemListComponent");
			return ret;
		}
	};

}
