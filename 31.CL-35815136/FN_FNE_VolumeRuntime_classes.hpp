#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FNE_VolumeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*> FNEVolumeShapeMap; // 0x2B8(0x50)
		USpatialGameplayActorTrackerComponent* SpatialGameplayActorTracker; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_VolumeRuntime.FNE_VolumeComponent");
			return ret;
		}

		void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, UStaticMesh* CustomShape); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D9860(relative to base address)
		void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512D9718(relative to base address)
		void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512D95D0(relative to base address)
		bool SetStaticMeshForBoundsComponent(UStaticMesh* NewMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D92EC(relative to base address)
		void SetRelativeScale3DForBoundsComponent(FVector& Scale3D); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7512D9164(relative to base address)
		void SetEnableOverlap(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D9064(relative to base address)
		void HandleNotifyPlayerStateEndOverlap(APlayerState* TouchingPlayerState, AGameplayVolume* Volume); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512D8A88(relative to base address)
		void HandleNotifyPlayerStateBeginOverlap(APlayerState* TouchingPlayerState, AGameplayVolume* Volume); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512D89C4(relative to base address)
		void HandleNotifyActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512D8900(relative to base address)
		void HandleNotifyActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512D883C(relative to base address)
		UOverlapComponent GetSpawnedVolumeBoundsComponent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D8818(relative to base address)
		AFNE_Volume GetSpawnedVolume(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512D87F4(relative to base address)
		bool GetEnableOverlap(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC51498(relative to base address)
		TArray GetAllTrackedActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512D8774(relative to base address)
		TArray GetAllPlayerStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512D86F4(relative to base address)
		TArray GetAllPlayerPawns(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512D867C(relative to base address)
		bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512D8508(relative to base address)
		bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512D83A8(relative to base address)
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
		unsigned char UnknownData00_6[0x7]; // 0x5D1(0x7) UNKNOWN PROPERTY
		TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*> FNEVolumeShapeMap; // 0x5D8(0x50)
		EFNEVolumeShapeTypeEnum SceneQueryShape; // 0x628(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x629(0x7) UNKNOWN PROPERTY
		TArray<TEnumAsByte> SceneQueryObjectTypes; // 0x630(0x10)
		unsigned char UnknownData02_6[0x20]; // 0x640(0x20) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortMinigame*> CachedMinigame; // 0x660(0x8)
		TSet<AActor*> TrackedActors; // 0x668(0x50)
		unsigned char UnknownData03_7[0x8]; // 0x6B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent");
			return ret;
		}

		void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, UStaticMesh* CustomShape); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D9968(relative to base address)
		void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512D97BC(relative to base address)
		void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512D9674(relative to base address)
		bool ShouldAllowOverlapEventToFire(AActor* OverlapActor); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7512D953C(relative to base address)
		void SetVolumeMaterial(TWeakObjectPtr<UMaterialInterface*> MaterialToLoad, int32_t ElementIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D940C(relative to base address)
		bool SetStaticMeshForBoundsComponent(UStaticMesh* NewMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D937C(relative to base address)
		void SetRelativeScale3DForBoundsComponent(FVector& Scale3D); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7512D9228(relative to base address)
		void SetEnableOverlapBehavior(EVolumeEnableOverlapBehavior InOverlapBehavior); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D90E4(relative to base address)
		void OnMinigameStarted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512D9050(relative to base address)
		void OnMinigameRoundEnded(AFortPlayerController* Instigator, EFortMinigameEnd EndMethod, EFortMinigameState NextState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512D8F58(relative to base address)
		void OnMinigameEnded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512D8F44(relative to base address)
		void OnEndActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512D8E18(relative to base address)
		void OnBeginActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7512D8C10(relative to base address)
		void HandleTrackedActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512D8B4C(relative to base address)
		EVolumeEnableOverlapBehavior GetEnableOverlap(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B4504(relative to base address)
		TArray GetAllTrackedActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512D87B4(relative to base address)
		TArray GetAllPlayerStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512D8734(relative to base address)
		TArray GetAllPlayerPawns(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512D86B8(relative to base address)
		void CheckCollidingActorsSceneQuery(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D8668(relative to base address)
		bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512D85B8(relative to base address)
		bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512D8458(relative to base address)
		void ActorExitVolume(AActor* LeavingActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512D8328(relative to base address)
		void ActorEnteredVolume(AActor* EnteringActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512D82A8(relative to base address)
	};

}
