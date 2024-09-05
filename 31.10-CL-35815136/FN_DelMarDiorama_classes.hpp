#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarDiorama
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarDiorama.DelMarCockpitActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ADelMarCockpitActor : public AActor	
	{
	public:
		USkeletalMeshComponent* CockpitMeshComponent; // 0x290(0x8)
		ADelMarVehicle* BoundVehicle; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarCockpitActor");
			return ret;
		}

		void BP_OnBoundVehicleChanged(ADelMarVehicle* NewVehicle); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarDiorama.DelMarDioramaActor
	// Inherited from AActor -> UObject
	// Size: 0x158 (0x3E8 - 0x290)
	class ADelMarDioramaActor : public AActor	
	{
	public:
		USkeletalMeshComponent* VehicleInteriorMeshComponent; // 0x290(0x8)
		TMap<FGameplayTag, FDelMarDriverSequenceDataList> CustomSequenceListTable; // 0x298(0x50)
		unsigned char UnknownData00_6[0x18]; // 0x2E8(0x18) UNKNOWN PROPERTY
		UClass* DriverMannequinClass; // 0x300(0x8)
		UClass* LevelSequenceActorClass; // 0x308(0x8)
		UClass* CineCameraClass; // 0x310(0x8)
		UClass* CockpitClass; // 0x318(0x8)
		UDelMarDioramaConfigData* ConfigData; // 0x320(0x8)
		FVector DefaultCameraOffset; // 0x328(0x18)
		FRotator DefaultCameraRotation; // 0x340(0x18)
		ALevelSequenceActor* SequenceActor; // 0x358(0x8)
		ADelMarDriverCameraActor* CameraActor; // 0x360(0x8)
		ADelMarDriverMannequin* DriverMannequin; // 0x368(0x8)
		ADelMarCockpitActor* CockpitActor; // 0x370(0x8)
		APlayerState* BoundPlayer; // 0x378(0x8)
		UDelMarDriverSequenceData* LastPlayedSequenceData; // 0x380(0x8)
		TSet<UDelMarDriverSequenceDataTable*> BoundSequencesTables; // 0x388(0x50)
		unsigned char UnknownData01_6[0x4]; // 0x3D8(0x4) UNKNOWN PROPERTY
		int32_t DefaultCameraSocketIndex; // 0x3DC(0x4)
		unsigned char UnknownData02_7[0x8]; // 0x3E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDioramaActor");
			return ret;
		}

		void HandleSequenceFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BF9A4(relative to base address)
	};


	// Class DelMarDiorama.DelMarDioramaConfigData
	// Inherited from UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UDelMarDioramaConfigData : public UDataAsset	
	{
	public:
		FName CameraActorTag; // 0x30(0x4)
		FName DriverMannequinTag; // 0x34(0x4)
		FName CockpitActorTag; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray<FName> CockpitCameraCutSockets; // 0x40(0x10)
		FName CockpitCameraIdleSocket; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDioramaConfigData");
			return ret;
		}
	};


	// Class DelMarDiorama.DelMarDriverCameraActor
	// Inherited from ACineCameraActor -> ACameraActor -> AActor -> UObject
	// Size: 0x10 (0xA30 - 0xA20)
	class ADelMarDriverCameraActor : public ACineCameraActor	
	{
	public:
		USceneCaptureComponent2D* CaptureComponent; // 0xA20(0x8)
		unsigned char UnknownData00_7[0x8]; // 0xA28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverCameraActor");
			return ret;
		}
	};


	// Class DelMarDiorama.DelMarDriverCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarDriverCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverCheatManager");
			return ret;
		}

		void DelMarIntercomPlayInteraction(FString InteractionTag); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void DelMarIntercomBroadcastEmote(FString EmoteTag); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void DelMarDioramaSetVisibleInSceneCaptureOnly(bool bOnly); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarDioramaSetLocation(float X, float Y, float Z); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74EC58610(relative to base address)
		void DelMarDioramaSetLightingChannel(bool bMainChannel); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarDioramaSetEnabled(bool bEnabled); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarDioramaSetDriverReaction(FString ReactionTag); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void DelMarDioramaOpenChannel(bool bOpened); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
	};


	// Class DelMarDiorama.DelMarDriverSequenceData
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UDelMarDriverSequenceData : public UDataAsset	
	{
	public:
		ULevelSequence* Sequence; // 0x30(0x8)
		int32_t PriorityLevel; // 0x38(0x4)
		bool bLoop; // 0x3C(0x1)
		bool bTriggerReactiveWidget; // 0x3D(0x1)
		bool bCameraCut; // 0x3E(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x3F(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverSequenceData");
			return ret;
		}
	};


	// Class DelMarDiorama.DelMarDriverSequenceDataTable
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UDelMarDriverSequenceDataTable : public UDataAsset	
	{
	public:
		TMap<FGameplayTag, FDelMarDriverSequenceDataList> SequenceListTable; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverSequenceDataTable");
			return ret;
		}
	};


	// Class DelMarDiorama.DelMarIntercomEvent
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UDelMarIntercomEvent : public UObject	
	{
	public:
		AFortPlayerState* OwningPlayerState; // 0x28(0x8)
		ADelMarVehicle* OwningVehicle; // 0x30(0x8)
		UDelMarIntercomComponent* IntercomComponent; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarIntercomEvent");
			return ret;
		}
	};


	// Class DelMarDiorama.DelMarIntercomEvent_TurboPassing
	// Inherited from UDelMarIntercomEvent -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UDelMarIntercomEvent_TurboPassing : public UDelMarIntercomEvent	
	{
	public:
		TWeakObjectPtr<AFortPlayerState*> PlayerAhead; // 0x40(0x8)
		UDelMarPlayerRaceDataComponent* RaceData; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarIntercomEvent_TurboPassing");
			return ret;
		}
	};


	// Class DelMarDiorama.DelMarDriverAnimInstance
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x28 (0x4D0 - 0x4A8)
	class UDelMarDriverAnimInstance : public UFortBaseAnimInstance	
	{
	public:
		ADelMarVehicle* BoundVehicle; // 0x4A8(0x8)
		bool bDrifting; // 0x4B0(0x1)
		bool bTurboing; // 0x4B1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x4B2(0x2) UNKNOWN PROPERTY
		float SteeringAngle; // 0x4B4(0x4)
		float SlipAngle; // 0x4B8(0x4)
		float StableSpeed; // 0x4BC(0x4)
		float DrivingSpeedThreshold; // 0x4C0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverAnimInstance");
			return ret;
		}

		bool IsDrivingSpeed(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518C01D0(relative to base address)
	};


	// Class DelMarDiorama.DelMarCockpitAnimInstance
	// Inherited from UDelMarDriverAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18 (0x4E0 - 0x4C8)
	class UDelMarCockpitAnimInstance : public UDelMarDriverAnimInstance	
	{
	public:
		float DefaultCameraShakeIntensity; // 0x4C8(0x4)
		float DefaultTerrainAccMultiplier; // 0x4CC(0x4)
		float DefaultTerrainMaxForwardSpeedPercentage; // 0x4D0(0x4)
		float CameraShakeIntensity; // 0x4D4(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x4D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarCockpitAnimInstance");
			return ret;
		}
	};


	// Class DelMarDiorama.DelMarDioramaControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x1D0 - 0xA0)
	class UDelMarDioramaControllerComponent : public UControllerComponent	
	{
	public:
		FVector DioramaOffset; // 0xA0(0x18)
		UClass* DioramaClass; // 0xB8(0x8)
		UDelMarDriverSequenceDataTable* CustomizedSequencesTable; // 0xC0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FTransform DioramaInitialTransform; // 0xD0(0x60)
		UClass* MainChannelClass; // 0x130(0x8)
		UDelMarDriverChannel* MainChannel; // 0x138(0x8)
		UClass* PostRaceChannelClass; // 0x140(0x8)
		TArray<UDelMarDriverChannelBase*> PostRaceChannels; // 0x148(0x10)
		APlayerState* CachedOwningPlayerState; // 0x158(0x8)
		APlayerState* ViewTargetPlayer; // 0x160(0x8)
		TWeakObjectPtr<ADelMarVehicle*> ViewTargetVehicle; // 0x168(0x8)
		TMap<APlayerState*, ADelMarDioramaActor*> PlayerDioramaTable; // 0x170(0x50)
		int32_t NumPostRaceChannel; // 0x1C0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDioramaControllerComponent");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* PC, AActor* Old, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BFF88(relative to base address)
	};


	// Class DelMarDiorama.DelMarDriverChannelBase
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UDelMarDriverChannelBase : public UObject	
	{
	public:
		UTextureRenderTarget2D* ViewRenderTarget; // 0x28(0x8)
		FIntPoint RenderTargetDim; // 0x30(0x8)
		unsigned char UnknownData00_6[0x30]; // 0x38(0x30) UNKNOWN PROPERTY
		UDelMarDriverSequenceDataTable* SequencesTable; // 0x68(0x8)
		APlayerState* ViewPlayer; // 0x70(0x8)
		ADelMarDioramaActor* ViewDiorama; // 0x78(0x8)
		UMovieSceneSequencePlayer* SequencePlayer; // 0x80(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverChannelBase");
			return ret;
		}

		void HandleSequenceFinished(); // Flags: Native|Protected, Memory Exec: 0x7FF747E989FC(relative to base address)
	};


	// Class DelMarDiorama.DelMarDriverChannel
	// Inherited from UDelMarDriverChannelBase -> UObject
	// Size: 0xD8 (0x160 - 0x88)
	class UDelMarDriverChannel : public UDelMarDriverChannelBase	
	{
	public:
		ADelMarVehicle* ViewVehicle; // 0x88(0x8)
		TArray<FGameplayTag> QueueReactions; // 0x90(0x10)
		TMap<FGameplayTag, FDelMarDriverSequenceDataList> SequenceListTableInstance; // 0xA0(0x50)
		TMap<FGameplayTag, float> ReactionCoolDownTimeStamp; // 0xF0(0x50)
		float LandingForceThreshold; // 0x140(0x4)
		float SlowDownImpactSpeedThreshold; // 0x144(0x4)
		float HitWallImpactThreshold; // 0x148(0x4)
		float HitWallImpactHardThreshold; // 0x14C(0x4)
		float DraftBonusPercentageThreshold; // 0x150(0x4)
		float StartlineBoostPercentageEarnedThreshold; // 0x154(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x158(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverChannel");
			return ret;
		}

		void HandleVehicleSpawned(bool bFirstCar, bool bPrevCarDemolished); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BFEC4(relative to base address)
		void HandleVehicleLanded(float LandingForce, bool bLandedKickflip); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BFDFC(relative to base address)
		void HandleVehicleHitWall(float ImpactMagnitude, FVector WorldLocation, float ForwardRotationDegrees); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF7518BFBDC(relative to base address)
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BFACC(relative to base address)
		void HandleTurboActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BFAB8(relative to base address)
		void HandleStartlineBoostActivated(float PercentageSpeedEarned); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BFA38(relative to base address)
		void HandleSpeedChanged(float NewSpeed); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BF9B8(relative to base address)
		void HandleHazardSpeedLost(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BF990(relative to base address)
		void HandleDriftBoostActivated(float PercentageMaxBoostGained); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BF910(relative to base address)
		void HandleDraftStateChanged(EDelmarDraftingState DraftState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518BF890(relative to base address)
	};


	// Class DelMarDiorama.DelMarDriverMannequin
	// Inherited from AFortPlayerMannequin -> ASkeletalMeshActor -> AActor -> UObject
	// Size: 0x0 (0x608 - 0x608)
	class ADelMarDriverMannequin : public AFortPlayerMannequin	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverMannequin");
			return ret;
		}
	};


	// Class DelMarDiorama.DelMarIntercomComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UDelMarIntercomComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		UClass* GuestChannelClass; // 0xB8(0x8)
		UDelMarDriverChannel* GuestChannel; // 0xC0(0x8)
		TWeakObjectPtr<AFortPlayerPawn*> ViewPlayerPawn; // 0xC8(0x8)
		TWeakObjectPtr<ADelMarDioramaActor*> MainChannelDiorama; // 0xD0(0x8)
		APlayerState* ViewPlayerState; // 0xD8(0x8)
		UDelMarDioramaControllerComponent* DioramaControllerComponent; // 0xE0(0x8)
		TArray<UClass*> ServerEventClasses; // 0xE8(0x10)
		TArray<UDelMarIntercomEvent*> ServerEvents; // 0xF8(0x10)
		TMap<FGameplayTag, FDelMarInteractionTagData> InteractionTagTable; // 0x108(0x50)
		float EmoteBroadcastMaxDistanceSq; // 0x158(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x15C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarIntercomComponent");
			return ret;
		}

		void ServerReceiveInteraction(FGameplayTag EmoteTag, APlayerState* Receiver); // Flags: Net|Native|Event|Public|NetServer, Memory Exec: 0x7FF7518C0308(relative to base address)
		void ServerReceiveEmote(FGameplayTag EmoteTag); // Flags: Net|Native|Event|Protected|NetServer, Memory Exec: 0x7FF7518C01F4(relative to base address)
		void HandleViewTargetChanged(AFortPlayerController* InController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518C00D8(relative to base address)
		void ClientReceiveInteraction(FGameplayTag InteractionTag, APlayerState* Instigator, APlayerState* Receiver); // Flags: Net|Native|Event|Protected|NetClient, Memory Exec: 0x7FF7518BF604(relative to base address)
		void ClientReceiveEmote(FGameplayTag EmoteTag, APlayerState* Instigator); // Flags: Net|Native|Event|Protected|NetClient, Memory Exec: 0x7FF7518BF428(relative to base address)
	};

}
