#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRDLevelInstanceRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x340 - 0x338)
	class AFortAthenaMutator_LevelInstanceDevice : public AFortAthenaMutator	
	{
	public:
		TWeakObjectPtr<ALevelInstanceGameplayVolume*> CachedGameplayVolume; // 0x338(0x8)

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
		unsigned char UnknownData00_3[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLevelInstanceResolved; // 0x338(0x10)
		unsigned char UnknownData01_6[0x30]; // 0x348(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDisabledStateChanged; // 0x378(0x10)
		FMulticastInlineDelegate OnLevelInstanceGuidChanged; // 0x388(0x10)
		FMulticastInlineDelegate OnLevelInstanceNameChanged; // 0x398(0x10)
		FMulticastInlineDelegate OnLevelInstanceSizeChanged; // 0x3A8(0x10)
		FMulticastInlineDelegate OnLevelInstanceContentCollectionChanged; // 0x3B8(0x10)
		unsigned char UnknownData02_6[0x1]; // 0x3C8(0x1) UNKNOWN PROPERTY
		bool bEditMode; // 0x3C9(0x1)
		bool bDisabled; // 0x3CA(0x1)
		ESpatialLoadingState LoadingState; // 0x3CB(0x1)
		unsigned char UnknownData03_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		FString LevelInstanceName; // 0x3D0(0x10)
		bool bInstanceLoaded; // 0x3E0(0x1)
		bool bWantsLevelLoaded; // 0x3E1(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x3E2(0x1) UNKNOWN PROPERTY
		bool bConvertStructuresToProps; // 0x3E3(0x1)
		unsigned char UnknownData05_6[0x4]; // 0x3E4(0x4) UNKNOWN PROPERTY
		AFortMinigame* CachedMinigame; // 0x3E8(0x8)
		UFortMutatorListComponent* MutatorListComponent; // 0x3F0(0x8)
		UFortClassTrackerComponent* ClassFilterComponent; // 0x3F8(0x8)
		TArray<UClass*> BlacklistedClasses; // 0x400(0x10)
		unsigned char UnknownData06_6[0x50]; // 0x410(0x50) UNKNOWN PROPERTY
		FGuid LevelInstanceSaveActorGuid; // 0x460(0x10)
		AFortLevelInstanceSaveActor* LevelInstanceSaveActor; // 0x470(0x8)
		unsigned char UnknownData07_7[0x70]; // 0x478(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume");
			return ret;
		}

		void SetWantsLevelLoaded(bool bInWantsLevelLoaded); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516C5EE8(relative to base address)
		void SetReadyForInstantiation(bool bReady); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516C5E68(relative to base address)
		void SetLevelInstanceName(FString InName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516C5DD8(relative to base address)
		void SetLevelInstanceContentCollection(TWeakObjectPtr<UFortCreativeActorCollection*> ContentCollection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516C5CDC(relative to base address)
		void SetLevelInstanceActorGuid(FGuid InLevelInstanceActorGuid); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516C5BBC(relative to base address)
		void SetEditMode(bool bInEditMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516C5B04(relative to base address)
		void RemoveActorWhenEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C5A40(relative to base address)
		void RemoveActorWhenDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF7516C54E8(relative to base address)
		void OnVolumeChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_IsDisabled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C54D4(relative to base address)
		void OnRep_InstanceLoaded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C54D4(relative to base address)
		void OnRep_EditMode(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C54D4(relative to base address)
		void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C5410(relative to base address)
		void LevelInstanceSizeChanged(AActor* InstigatorActor); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C5390(relative to base address)
		void LevelInstanceNameChanged(FString Name); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C5300(relative to base address)
		void LevelInstanceContentCollectionChanged(AActor* InstigatorActor, TWeakObjectPtr<UFortCreativeActorCollection*> ContentCollection); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C51D0(relative to base address)
		void LevelInstanceContentChanged(AActor* InstigatorActor); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C5150(relative to base address)
		void LevelInstanceBeingDestroyed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C513C(relative to base address)
		bool IsPreviewActor(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C5118(relative to base address)
		bool IsInEditMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748ED5090(relative to base address)
		bool IsDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E226324(relative to base address)
		void InstantiateFromLevelInstanceSaveActor(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516C5104(relative to base address)
		void HandleActorHealthChanged(AActor* Actor, float NewHealth); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7516C5050(relative to base address)
		FString GetLevelInstanceName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C5034(relative to base address)
		AFortLevelInstanceSaveActor CreateLevelInstanceSaveActor(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516C5010(relative to base address)
		void CheckForOverlappingVolumes(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7516C4FFC(relative to base address)
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
