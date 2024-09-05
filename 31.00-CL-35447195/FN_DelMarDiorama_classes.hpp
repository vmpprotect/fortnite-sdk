#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarDiorama
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarDiorama.DelMarCockpitActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ADelMarCockpitActor : public AActor	
	{
	public:
		USkeletalMeshComponent CockpitMeshComponent; // 0x290(0x8)
		ADelMarVehicle BoundVehicle; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarCockpitActor");
			return ret;
		}

		void BP_OnBoundVehicleChanged(ADelMarVehicle NewVehicle); // Flags: Event|Protected|BlueprintEvent 0x7FF414DCC160
	};


	// Class DelMarDiorama.DelMarDioramaActor
	// Inherited from AActor -> UObject
	// Size: 0x158 (0x3E8 - 0x290)
	class ADelMarDioramaActor : public AActor	
	{
	public:
		USkeletalMeshComponent VehicleInteriorMeshComponent; // 0x290(0x8)
		TMap CustomSequenceListTable; // 0x298(0x50)
		unsigned char UnknownData02_6[0x18]; // 0x2E8(0x18) UNKNOWN PROPERTY
		UClass DriverMannequinClass; // 0x300(0x8)
		UClass LevelSequenceActorClass; // 0x308(0x8)
		UClass CineCameraClass; // 0x310(0x8)
		UClass CockpitClass; // 0x318(0x8)
		UDelMarDioramaConfigData ConfigData; // 0x320(0x8)
		FVector DefaultCameraOffset; // 0x328(0x18)
		FRotator DefaultCameraRotation; // 0x340(0x18)
		ALevelSequenceActor SequenceActor; // 0x358(0x8)
		ADelMarDriverCameraActor CameraActor; // 0x360(0x8)
		ADelMarDriverMannequin DriverMannequin; // 0x368(0x8)
		unsigned char UnknownData03_7[0x78]; // 0x370(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDioramaActor");
			return ret;
		}

		void HandleSequenceFinished(); // Flags: Final|Native|Protected 0x7FF414DCC240
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
		unsigned char UnknownData02_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray CockpitCameraCutSockets; // 0x40(0x10)
		FName CockpitCameraIdleSocket; // 0x50(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

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
		USceneCaptureComponent2D CaptureComponent; // 0xA20(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xA28(0x8) UNKNOWN PROPERTY

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

		void DelMarIntercomPlayInteraction(FString InteractionTag); // Flags: Final|Exec|Native|Protected 0x7FF414DCC940
		void DelMarIntercomBroadcastEmote(FString EmoteTag); // Flags: Final|Exec|Native|Protected 0x7FF414DCC860
		void DelMarDioramaSetVisibleInSceneCaptureOnly(bool bOnly); // Flags: Final|Exec|Native|Protected 0x7FF414DCC780
		void DelMarDioramaSetLocation(float X, float Y, float Z); // Flags: Final|Exec|Native|Protected 0x7FF414DCC6A0
		void DelMarDioramaSetLightingChannel(bool bMainChannel); // Flags: Final|Exec|Native|Protected 0x7FF414DCC5C0
		void DelMarDioramaSetEnabled(bool bEnabled); // Flags: Final|Exec|Native|Protected 0x7FF414DCC4E0
		void DelMarDioramaSetDriverReaction(FString ReactionTag); // Flags: Final|Exec|Native|Protected 0x7FF414DCC400
		void DelMarDioramaOpenChannel(bool bOpened); // Flags: Final|Exec|Native|Protected 0x7FF414DCC320
	};


	// Class DelMarDiorama.DelMarDriverSequenceData
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UDelMarDriverSequenceData : public UDataAsset	
	{
	public:
		ULevelSequence Sequence; // 0x30(0x8)
		int32_t PriorityLevel; // 0x38(0x4)
		bool bLoop; // 0x3C(0x1)
		bool bTriggerReactiveWidget; // 0x3D(0x1)
		bool bCameraCut; // 0x3E(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x3F(0x1) UNKNOWN PROPERTY

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
		TMap SequenceListTable; // 0x30(0x50)

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
		AFortPlayerState OwningPlayerState; // 0x28(0x8)
		ADelMarVehicle OwningVehicle; // 0x30(0x8)
		UDelMarIntercomComponent IntercomComponent; // 0x38(0x8)

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
		TWeakObjectPtr PlayerAhead; // 0x40(0x8)
		UDelMarPlayerRaceDataComponent RaceData; // 0x48(0x8)

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
		ADelMarVehicle BoundVehicle; // 0x4A8(0x8)
		bool bDrifting; // 0x4B0(0x1)
		bool bTurboing; // 0x4B1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x4B2(0x2) UNKNOWN PROPERTY
		float SteeringAngle; // 0x4B4(0x4)
		float SlipAngle; // 0x4B8(0x4)
		float StableSpeed; // 0x4BC(0x4)
		float DrivingSpeedThreshold; // 0x4C0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverAnimInstance");
			return ret;
		}

		bool IsDrivingSpeed(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DCCA20
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
		unsigned char UnknownData01_7[0x8]; // 0x4D8(0x8) UNKNOWN PROPERTY

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
		UClass DioramaClass; // 0xB8(0x8)
		UDelMarDriverSequenceDataTable CustomizedSequencesTable; // 0xC0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FTransform DioramaInitialTransform; // 0xD0(0x60)
		UClass MainChannelClass; // 0x130(0x8)
		UDelMarDriverChannel MainChannel; // 0x138(0x8)
		UClass PostRaceChannelClass; // 0x140(0x8)
		TArray PostRaceChannels; // 0x148(0x10)
		APlayerState CachedOwningPlayerState; // 0x158(0x8)
		APlayerState ViewTargetPlayer; // 0x160(0x8)
		TWeakObjectPtr ViewTargetVehicle; // 0x168(0x8)
		TMap PlayerDioramaTable; // 0x170(0x50)
		int32_t NumPostRaceChannel; // 0x1C0(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x1C4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDioramaControllerComponent");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController PC, AActor Old, AActor NewViewTarget); // Flags: Final|Native|Protected 0x7FF414DCCB00
	};


	// Class DelMarDiorama.DelMarDriverChannelBase
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UDelMarDriverChannelBase : public UObject	
	{
	public:
		UTextureRenderTarget2D ViewRenderTarget; // 0x28(0x8)
		FIntPoint RenderTargetDim; // 0x30(0x8)
		unsigned char UnknownData01_6[0x30]; // 0x38(0x30) UNKNOWN PROPERTY
		UDelMarDriverSequenceDataTable SequencesTable; // 0x68(0x8)
		APlayerState ViewPlayer; // 0x70(0x8)
		ADelMarDioramaActor ViewDiorama; // 0x78(0x8)
		UMovieSceneSequencePlayer SequencePlayer; // 0x80(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverChannelBase");
			return ret;
		}

		void HandleSequenceFinished(); // Flags: Native|Protected 0x7FF414DCCBE0
	};


	// Class DelMarDiorama.DelMarDriverChannel
	// Inherited from UDelMarDriverChannelBase -> UObject
	// Size: 0xD8 (0x160 - 0x88)
	class UDelMarDriverChannel : public UDelMarDriverChannelBase	
	{
	public:
		ADelMarVehicle ViewVehicle; // 0x88(0x8)
		TArray QueueReactions; // 0x90(0x10)
		TMap SequenceListTableInstance; // 0xA0(0x50)
		TMap ReactionCoolDownTimeStamp; // 0xF0(0x50)
		float LandingForceThreshold; // 0x140(0x4)
		float SlowDownImpactSpeedThreshold; // 0x144(0x4)
		float HitWallImpactThreshold; // 0x148(0x4)
		float HitWallImpactHardThreshold; // 0x14C(0x4)
		float DraftBonusPercentageThreshold; // 0x150(0x4)
		float StartlineBoostPercentageEarnedThreshold; // 0x154(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x158(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarDriverChannel");
			return ret;
		}

		void HandleVehicleSpawned(bool bFirstCar, bool bPrevCarDemolished); // Flags: Final|Native|Protected 0x7FF414DCD4A0
		void HandleVehicleLanded(float LandingForce, bool bLandedKickflip); // Flags: Final|Native|Protected 0x7FF414DCD3C0
		void HandleVehicleHitWall(float ImpactMagnitude, FVector WorldLocation, float ForwardRotationDegrees); // Flags: Final|Native|Protected|HasDefaults 0x7FF414DCD2E0
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected 0x7FF414DCD200
		void HandleTurboActivated(); // Flags: Final|Native|Protected 0x7FF414DCD120
		void HandleStartlineBoostActivated(float PercentageSpeedEarned); // Flags: Final|Native|Protected 0x7FF414DCD040
		void HandleSpeedChanged(float NewSpeed); // Flags: Final|Native|Protected 0x7FF414DCCF60
		void HandleHazardSpeedLost(); // Flags: Final|Native|Protected 0x7FF414DCCE80
		void HandleDriftBoostActivated(float PercentageMaxBoostGained); // Flags: Final|Native|Protected 0x7FF414DCCDA0
		void HandleDraftStateChanged(EDelmarDraftingState DraftState); // Flags: Final|Native|Protected 0x7FF414DCCCC0
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
		unsigned char UnknownData02_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		UClass GuestChannelClass; // 0xB8(0x8)
		UDelMarDriverChannel GuestChannel; // 0xC0(0x8)
		TWeakObjectPtr ViewPlayerPawn; // 0xC8(0x8)
		TWeakObjectPtr MainChannelDiorama; // 0xD0(0x8)
		APlayerState ViewPlayerState; // 0xD8(0x8)
		UDelMarDioramaControllerComponent DioramaControllerComponent; // 0xE0(0x8)
		TArray ServerEventClasses; // 0xE8(0x10)
		TArray ServerEvents; // 0xF8(0x10)
		TMap InteractionTagTable; // 0x108(0x50)
		float EmoteBroadcastMaxDistanceSq; // 0x158(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x15C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarDiorama.DelMarIntercomComponent");
			return ret;
		}

		void ServerReceiveInteraction(FGameplayTag EmoteTag, APlayerState Receiver); // Flags: Net|Native|Event|Public|NetServer 0x7FF414DCD900
		void ServerReceiveEmote(FGameplayTag EmoteTag); // Flags: Net|Native|Event|Protected|NetServer 0x7FF414DCD820
		void HandleViewTargetChanged(AFortPlayerController InController, AActor OldViewTarget, AActor NewViewTarget); // Flags: Final|Native|Protected 0x7FF414DCD740
		void ClientReceiveInteraction(FGameplayTag InteractionTag, APlayerState Instigator, APlayerState Receiver); // Flags: Net|Native|Event|Protected|NetClient 0x7FF414DCD660
		void ClientReceiveEmote(FGameplayTag EmoteTag, APlayerState Instigator); // Flags: Net|Native|Event|Protected|NetClient 0x7FF414DCD580
	};

}
