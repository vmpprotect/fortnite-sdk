#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FNE_VolumeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FNE_VolumeRuntime.FNE_Volume
	// Inherited from AGameplayVolume -> AActor -> UObject
	// Size: 0x0 (0x330 - 0x330)
	class AFNE_Volume : public AGameplayVolume	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_VolumeRuntime.FNE_Volume");
			return ret;
		}
	};


	// Class FNE_VolumeRuntime.FNE_VolumeComponent
	// Inherited from UChildActorComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x310 - 0x270)
	class UFNE_VolumeComponent : public UChildActorComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerStateBeginOverlap; // 0x270(0x10)
		FMulticastInlineDelegate OnPlayerStateEndOverlap; // 0x280(0x10)
		FMulticastInlineDelegate OnOtherActorBeginOverlap; // 0x290(0x10)
		FMulticastInlineDelegate OnOtherActorEndOverlap; // 0x2A0(0x10)
		bool bEnableOverlap; // 0x2B0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		TMap FNEVolumeShapeMap; // 0x2B8(0x50)
		USpatialGameplayActorTrackerComponent SpatialGameplayActorTracker; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_VolumeRuntime.FNE_VolumeComponent");
			return ret;
		}

		void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, UStaticMesh CustomShape); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE0C18
		void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE0B38
		void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE0A58
		bool SetStaticMeshForBoundsComponent(UStaticMesh NewMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE0978
		void SetRelativeScale3DForBoundsComponent(FVector& Scale3D); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CE0898
		void SetEnableOverlap(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE07B8
		void HandleNotifyPlayerStateEndOverlap(APlayerState TouchingPlayerState, AGameplayVolume Volume); // Flags: Final|Native|Protected 0x7FF414CE06D8
		void HandleNotifyPlayerStateBeginOverlap(APlayerState TouchingPlayerState, AGameplayVolume Volume); // Flags: Final|Native|Protected 0x7FF414CE05F8
		void HandleNotifyActorEndOverlap(AActor OverlappedActor, AActor OtherActor); // Flags: Final|Native|Private 0x7FF414CE0518
		void HandleNotifyActorBeginOverlap(AActor OverlappedActor, AActor OtherActor); // Flags: Final|Native|Private 0x7FF414CE0438
		UOverlapComponent GetSpawnedVolumeBoundsComponent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE0358
		AFNE_Volume GetSpawnedVolume(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE0278
		bool GetEnableOverlap(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE0198
		TArray GetAllTrackedActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE00B8
		TArray GetAllPlayerStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CDFFD8
		TArray GetAllPlayerPawns(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CDFEF8
		bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CDFE18
		bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CDFD38
	};


	// Class FNE_VolumeRuntime.FNE_VolumeOverlapComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x6C0 - 0x590)
	class UFNE_VolumeOverlapComponent : public UStaticMeshComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerStateBeginOverlap; // 0x590(0x10)
		FMulticastInlineDelegate OnPlayerStateEndOverlap; // 0x5A0(0x10)
		FMulticastInlineDelegate OnOtherActorBeginOverlap; // 0x5B0(0x10)
		FMulticastInlineDelegate OnOtherActorEndOverlap; // 0x5C0(0x10)
		EVolumeEnableOverlapBehavior EnableOverlapBehavior; // 0x5D0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x5D1(0x7) UNKNOWN PROPERTY
		TMap FNEVolumeShapeMap; // 0x5D8(0x50)
		EFNEVolumeShapeTypeEnum SceneQueryShape; // 0x628(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x629(0x7) UNKNOWN PROPERTY
		TArray SceneQueryObjectTypes; // 0x630(0x10)
		unsigned char UnknownData06_6[0x20]; // 0x640(0x20) UNKNOWN PROPERTY
		TWeakObjectPtr CachedMinigame; // 0x660(0x8)
		TSet TrackedActors; // 0x668(0x50)
		unsigned char UnknownData07_7[0x8]; // 0x6B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent");
			return ret;
		}

		void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, UStaticMesh CustomShape); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE2038
		void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE1F58
		void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE1E78
		bool ShouldAllowOverlapEventToFire(AActor OverlapActor); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414CE1D98
		void SetVolumeMaterial(TWeakObjectPtr MaterialToLoad, int32_t ElementIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE1CB8
		bool SetStaticMeshForBoundsComponent(UStaticMesh NewMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE1BD8
		void SetRelativeScale3DForBoundsComponent(FVector& Scale3D); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CE1AF8
		void SetEnableOverlapBehavior(EVolumeEnableOverlapBehavior InOverlapBehavior); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE1A18
		void OnMinigameStarted(); // Flags: Final|Native|Protected 0x7FF414CE1938
		void OnMinigameRoundEnded(AFortPlayerController Instigator, EFortMinigameEnd EndMethod, EFortMinigameState NextState); // Flags: Final|Native|Protected 0x7FF414CE1858
		void OnMinigameEnded(); // Flags: Final|Native|Protected 0x7FF414CE1778
		void OnEndActorOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Private 0x7FF414CE1698
		void OnBeginActorOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Private|HasOutParms 0x7FF414CE15B8
		void HandleTrackedActorEndPlay(AActor Actor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Private 0x7FF414CE14D8
		EVolumeEnableOverlapBehavior GetEnableOverlap(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE13F8
		TArray GetAllTrackedActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE1318
		TArray GetAllPlayerStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE1238
		TArray GetAllPlayerPawns(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE1158
		void CheckCollidingActorsSceneQuery(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE1078
		bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE0F98
		bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE0EB8
		void ActorExitVolume(AActor LeavingActor); // Flags: Final|Native|Private 0x7FF414CE0DD8
		void ActorEnteredVolume(AActor EnteringActor); // Flags: Final|Native|Private 0x7FF414CE0CF8
	};

}
