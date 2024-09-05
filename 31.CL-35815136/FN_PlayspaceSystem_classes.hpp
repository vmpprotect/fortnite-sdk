#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PlayspaceSystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PlayspaceSystem.Playspace
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x340 (0x5D0 - 0x290)
	class APlayspace : public AInfo	
	{
	public:
		FMulticastInlineDelegate NotifyPlayspaceUserAdded; // 0x290(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x2A0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyPlayspaceUserRemoved; // 0x2B8(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x2C8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyPlayspaceInitialized; // 0x2E0(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x2F0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyPlayspaceCreatedAndReady; // 0x308(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x318(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyBoundGameplayVolumeSet; // 0x330(0x10)
		unsigned char UnknownData04_6[0x30]; // 0x340(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyStartMatch; // 0x370(0x10)
		unsigned char UnknownData05_6[0x18]; // 0x380(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyEndMatch; // 0x398(0x10)
		unsigned char UnknownData06_6[0x18]; // 0x3A8(0x18) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x3C0(0x20)
		FGameplayTag RequestedPlayspaceParentTag; // 0x3E0(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x3E4(0x4) UNKNOWN PROPERTY
		TArray<UClass*> ChildPlayspaceClasses; // 0x3E8(0x10)
		FPlayspaceUserList PlayspaceUsers; // 0x3F8(0x178)
		TArray<APlayspace*> ChildPlayspaces; // 0x570(0x10)
		TArray<FUniqueNetIdRepl> PendingUsers; // 0x580(0x10)
		bool bAutoStartMatchOnServerStart; // 0x590(0x1)
		EWithinBoundsEvaluationType BoundsEvaluationType; // 0x591(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x592(0x6) UNKNOWN PROPERTY
		UPlayspaceManagerComponent* PlayspaceManagerCached; // 0x598(0x8)
		AGameplayVolume* BoundGameplayVolume; // 0x5A0(0x8)
		bool bIsInitialized; // 0x5A8(0x1)
		unsigned char UnknownData09_6[0x1]; // 0x5A9(0x1) UNKNOWN PROPERTY
		bool bMatchHasEnded; // 0x5AA(0x1)
		unsigned char UnknownData10_6[0x1]; // 0x5AB(0x1) UNKNOWN PROPERTY
		float MatchStartTime; // 0x5AC(0x4)
		unsigned char UnknownData11_7[0x20]; // 0x5B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.Playspace");
			return ret;
		}

		void OnRep_PlayspaceUsers(); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF747E9D2E0(relative to base address)
		void OnRep_MatchStartTime(); // Flags: RequiredAPI|Native|Protected, Memory Exec: 0x7FF749B193F0(relative to base address)
		void OnRep_BoundGameplayVolume(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D7209A8(relative to base address)
		void OnRep_bMatchHasEnded(); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF748629A08(relative to base address)
		void OnRep_bIsInitialized(); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74C75F5A0(relative to base address)
	};


	// Class PlayspaceSystem.GameStateComponent_ListenForExternallyReachablePlayspaces
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UGameStateComponent_ListenForExternallyReachablePlayspaces : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0xB8]; // 0xA0(0xB8) UNKNOWN PROPERTY
		TArray<FPlayspaceExternallyReachableListenRequest> Requests; // 0x158(0x10)
		TArray<FPlayspaceExternallyReachableListenRequest> PendingRequests; // 0x168(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x178(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.GameStateComponent_ListenForExternallyReachablePlayspaces");
			return ret;
		}
	};


	// Class PlayspaceSystem.PlayspaceComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPlayspaceComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceComponent");
			return ret;
		}
	};


	// Class PlayspaceSystem.PlayspaceComponent_DispatchExternallyReachable
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UPlayspaceComponent_DispatchExternallyReachable : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceComponent_DispatchExternallyReachable");
			return ret;
		}
	};


	// Class PlayspaceSystem.PlayspaceJurisdictionFilterUtilities
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPlayspaceJurisdictionFilterUtilities : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceJurisdictionFilterUtilities");
			return ret;
		}

		FPlayspaceJurisdictionFilter SpecifyPlayspaceClass(FPlayspaceJurisdictionFilter& Filter, TWeakObjectPtr<UClass*> Class); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D720B14(relative to base address)
		FPlayspaceJurisdictionFilter MakeFilterFromPlayerState(APlayerState* PlayerState); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D7201D4(relative to base address)
		FPlayspaceJurisdictionFilter MakeFilterFromPlayerController(APlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D720114(relative to base address)
		FPlayspaceJurisdictionFilter MakeFilterFromPawn(APawn* Pawn); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D720054(relative to base address)
		FPlayspaceJurisdictionFilter MakeFilterFromLocation(FVector& Location, UObject* WorldContext); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D71FEC0(relative to base address)
		FPlayspaceJurisdictionFilter MakeFilterFromComponent(UActorComponent* ActorComponent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D71FDC4(relative to base address)
		FPlayspaceJurisdictionFilter MakeFilterFromActor(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D71FD04(relative to base address)
	};


	// Class PlayspaceSystem.WaitForDiscoverablePlayspaceWithFilterAction
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UWaitForDiscoverablePlayspaceWithFilterAction : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnFoundPlayspace; // 0x30(0x10)
		FPlayspaceJurisdictionFilter Filter; // 0x40(0x58)
		unsigned char UnknownData00_7[0x10]; // 0x98(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.WaitForDiscoverablePlayspaceWithFilterAction");
			return ret;
		}

		UWaitForDiscoverablePlayspaceWithFilterAction WaitForDiscoverablePlayspaceOfTypeForActor(TWeakObjectPtr<UClass*> PlayspaceClass, AActor* Actor, UObject* Requester); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D720F98(relative to base address)
		UWaitForDiscoverablePlayspaceWithFilterAction WaitForDiscoverablePlayspaceMatchingFilter(FPlayspaceJurisdictionFilter& Filter, UObject* Requester); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D720E04(relative to base address)
		void OnMatchingPlayspaceBecameDiscoverable__DelegateSignature(APlayspace* Playspace); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cancel(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D71F998(relative to base address)
	};


	// Class PlayspaceSystem.OverlapComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x5B0 - 0x590)
	class UOverlapComponent : public UStaticMeshComponent	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x590(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.OverlapComponent");
			return ret;
		}

		void OnEndActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: Native|Protected, Memory Exec: 0x7FF74D7204E4(relative to base address)
		void OnBeginActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF74D720294(relative to base address)
	};


	// Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent	
	{
	public:
		bool bQueueUserForSpawnWhenAdded; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		float SpawnDelayMin; // 0xA4(0x4)
		float SpawnDelayMax; // 0xA8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceComponent_PlayerSpawning");
			return ret;
		}
	};


	// Class PlayspaceSystem.PlayspaceComponent_VoiceManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPlayspaceComponent_VoiceManager : public UPlayspaceComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceComponent_VoiceManager");
			return ret;
		}
	};


	// Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerQueuedToSpawn; // 0xA0(0x10)
		ACameraActor* SpawnCameraActor; // 0xB0(0x8)
		unsigned char UnknownData00_6[0x1]; // 0xB8(0x1) UNKNOWN PROPERTY
		bool bClientReadyForSpawning; // 0xB9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xBA(0x6) UNKNOWN PROPERTY
		FReplicatedSpawnInfo ReplicatedSpawnInfo; // 0xC0(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning");
			return ret;
		}

		void ServerMarkReadyForSpawning(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF74D720AC8(relative to base address)
		void OnRep_ReplicatedSpawnInfo(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D720A24(relative to base address)
		FReplicatedSpawnInfo GetSpawnInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D71FB90(relative to base address)
		void ClientReplicatedSpawnInfo(FReplicatedSpawnInfo InReplicatedSpawnInfo); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF74D71F9AC(relative to base address)
	};


	// Class PlayspaceSystem.PlayspaceGameStateComponent
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPlayspaceGameStateComponent : public UGameStateComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceGameStateComponent");
			return ret;
		}
	};


	// Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
	// Inherited from UPlayspaceGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UPlayspaceGameStateComponent_PlayerSpawningManager : public UPlayspaceGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY
		TArray<FPlayspaceSpawningInfo> SpawningUsersArray; // 0xE8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager");
			return ret;
		}
	};


	// Class PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGameFeatureAction_AddPlayspaceComponent : public UGameFeatureAction	
	{
	public:
		TArray<FPlayspaceComponentConfiguration> PlayspaceComponentDataList; // 0x28(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent");
			return ret;
		}
	};


	// Class PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UGameFeatureAction_CreatePlayspacesFromConfig : public UGameFeatureAction	
	{
	public:
		TArray<FPlayspaceConfiguration> PlayspaceDataList; // 0x28(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig");
			return ret;
		}
	};


	// Class PlayspaceSystem.GameplayVolume
	// Inherited from AActor -> UObject
	// Size: 0xA0 (0x330 - 0x290)
	class AGameplayVolume : public AActor	
	{
	public:
		TWeakObjectPtr<UClass*> PlayspaceClassTemplate; // 0x290(0x20)
		EPlayspaceCreationType PlayspaceCreationType; // 0x2B0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		UClass* PlayspaceClass; // 0x2B8(0x8)
		bool bDestroyPlayspaceOnEndPlay; // 0x2C0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		APlayspace* Playspace; // 0x2C8(0x8)
		FGameplayTagContainer VolumeTags; // 0x2D0(0x20)
		UOverlapComponent* BoundsComponent; // 0x2F0(0x8)
		unsigned char UnknownData02_7[0x38]; // 0x2F8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.GameplayVolume");
			return ret;
		}

		void UpdateSize(FVector& NewScale); // Flags: Native|Public|HasOutParms|HasDefaults, Memory Exec: 0x7FF74D720D3C(relative to base address)
		void OnRep_Playspace(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D7209E0(relative to base address)
		void OnOverlappedPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController); // Flags: Native|Protected, Memory Exec: 0x7FF74D720624(relative to base address)
		void InitializeBoundsComponent(UOverlapComponent* NewBoundsComponent); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74D71FBE8(relative to base address)
		APlayspace GetPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748B49DF4(relative to base address)
	};


	// Class PlayspaceSystem.PlayspaceComponent_Logic
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPlayspaceComponent_Logic : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceComponent_Logic");
			return ret;
		}
	};


	// Class PlayspaceSystem.PlayspaceComponent_PlayerManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UPlayspaceComponent_PlayerManager : public UPlayspaceComponent	
	{
	public:
		TArray<FPlayspace_ControllerComponentInfo> ControllerComponents; // 0xA0(0x10)
		TArray<FPlayspace_PlayerStateComponentInfo> PlayerStateComponents; // 0xB0(0x10)
		TArray<FPlayspace_ActorComponentInfo> ActorComponents; // 0xC0(0x10)
		unsigned char UnknownData00_7[0xF0]; // 0xD0(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceComponent_PlayerManager");
			return ret;
		}

		void OnPlayerPawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D7208A8(relative to base address)
	};


	// Class PlayspaceSystem.PlayspaceLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPlayspaceLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceLibrary");
			return ret;
		}

		APlayspace GetPlayspaceForActor(UObject* WorldContextObject, AActor* InActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF748DE06C8(relative to base address)
		void DestroyPlayspace(APlayspace* PlayspaceToDestroy); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D71FB14(relative to base address)
	};


	// Class PlayspaceSystem.PlayspaceLogic
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class APlayspaceLogic : public AActor	
	{
	public:
		APlayspace* Playspace; // 0x290(0x8)
		bool bAutoStartMatchOnServerStart; // 0x298(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x299(0x1) UNKNOWN PROPERTY
		bool bMatchHasEnded; // 0x29A(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x29B(0x1) UNKNOWN PROPERTY
		float MatchStartTime; // 0x29C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceLogic");
			return ret;
		}

		void OnRep_MatchStartTime(); // Flags: Native|Protected, Memory Exec: 0x7FF749172684(relative to base address)
		void OnRep_bMatchHasEnded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF747E38800(relative to base address)
	};


	// Class PlayspaceSystem.PlayspaceManagerComponent
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1C0 (0x260 - 0xA0)
	class UPlayspaceManagerComponent : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		APlayspace* RootPlayspace; // 0xB8(0x8)
		EPlayspaceRootType PlayspaceRootType; // 0xC0(0x1)
		unsigned char UnknownData01_6[0x11F]; // 0xC1(0x11F) UNKNOWN PROPERTY
		TArray<FActorOverlapEvent> UnhandledEnterEvents; // 0x1E0(0x10)
		TArray<FActorOverlapEvent> UnhandledExitEvents; // 0x1F0(0x10)
		TSet<APlayerController*> UnassignedPlayers; // 0x200(0x50)
		bool bAssumeChildPlayspacesAreNested; // 0x250(0x1)
		unsigned char UnknownData02_7[0xF]; // 0x251(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceManagerComponent");
			return ret;
		}

		bool ProcessOverlapEvents(float DeltaTime); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D720A38(relative to base address)
		void OnRep_RootPlayspace(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7489F1340(relative to base address)
		void OnPlayerEndOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D7207E4(relative to base address)
		void OnPlayerBeginOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D720720(relative to base address)
	};


	// Class PlayspaceSystem.PlayspaceSpawnActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class APlayspaceSpawnActor : public AActor	
	{
	public:
		USceneComponent* SceneComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayspaceSystem.PlayspaceSpawnActor");
			return ret;
		}
	};

}
