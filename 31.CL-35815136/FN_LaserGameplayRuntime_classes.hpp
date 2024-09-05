#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LaserGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LaserGameplayRuntime.LaserCapsuleComponent
	// Inherited from UCapsuleComponent -> UShapeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x500 - 0x4F0)
	class ULaserCapsuleComponent : public UCapsuleComponent	
	{
	public:
		TEnumAsByte<ECollisionEnabled> CollisionWhenEnabled; // 0x4F0(0x1)
		TEnumAsByte<ECollisionEnabled> CollisionWhenDisabled; // 0x4F1(0x1)
		unsigned char UnknownData00_7[0xE]; // 0x4F2(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LaserGameplayRuntime.LaserCapsuleComponent");
			return ret;
		}
	};


	// Class LaserGameplayRuntime.LaserGridEditorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class ULaserGridEditorComponent : public UActorComponent	
	{
	public:
		int32_t VisualizeLaserGridPatternIndex; // 0xA0(0x4)
		bool bVisualizeOutletIndex; // 0xA4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LaserGameplayRuntime.LaserGridEditorComponent");
			return ret;
		}
	};


	// Class LaserGameplayRuntime.BuildingGameplayActorLaserGrid
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x418 (0xDA0 - 0x988)
	class ABuildingGameplayActorLaserGrid : public ABuildingGameplayActor	
	{
	public:
		FMulticastInlineDelegate OnLaserGridTriggered; // 0x988(0x10)
		FMulticastInlineDelegate OnLaserGridOutletDestroyed; // 0x998(0x10)
		TArray<FLaserGridPattern> LaserGridPatterns; // 0x9A8(0x10)
		float LaserPatternChangeWarningTime; // 0x9B8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x9BC(0x4) UNKNOWN PROPERTY
		TMap<int32_t, ABuildingActor*> LaserOutletToBuildingAttachmentMap; // 0x9C0(0x50)
		FGameplayTagContainer IgnoreActorTags; // 0xA10(0x20)
		UClass* LaserCapsuleComponentClass; // 0xA30(0x8)
		FRotator LaserCapsuleCollisionRotationOffset; // 0xA38(0x18)
		int32_t LaserCustomDataIndexForRandomizedVisuals; // 0xA50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA54(0x4) UNKNOWN PROPERTY
		FLaserGridConnectionArray LaserGridConnections; // 0xA58(0x118)
		TArray<FLaserGridConnectionEntry> LocalLaserGridConnections; // 0xB70(0x10)
		FTransform LaserConnectionOffset; // 0xB80(0x60)
		FVector LaserOutletConnectionOffset; // 0xBE0(0x18)
		USoundBase* SoundOutletTransitionOn; // 0xBF8(0x8)
		USoundBase* SoundLaserTransitionPrimaryOutlet; // 0xC00(0x8)
		USoundBase* SoundLaserTransitionSecondaryOutlet; // 0xC08(0x8)
		USoundBase* SoundLaserTransition; // 0xC10(0x8)
		int32_t OutletMaterialCustomDataIndex_EmissiveEnabled; // 0xC18(0x4)
		int32_t OutletMaterialCustomDataIndex_DisableEmissivePulse; // 0xC1C(0x4)
		int32_t OutletMaterialCustomDataIndex_AnimTimestamp; // 0xC20(0x4)
		int32_t OutletMaterialCustomDataIndex_AnimTimestampDuration; // 0xC24(0x4)
		float MaterialCosineWavePeriod; // 0xC28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC2C(0x4) UNKNOWN PROPERTY
		FVector2D OutletMaterialTransitionOffTimestampOffset; // 0xC30(0x10)
		int32_t LaserMaterialCustomDataIndex_PulseEnabled; // 0xC40(0x4)
		int32_t LaserMaterialCustomDataIndex_RandomFlickeringSpeed; // 0xC44(0x4)
		int32_t LaserMaterialCustomDataIndex_AnimTimestamp; // 0xC48(0x4)
		int32_t LaserMaterialCustomDataIndex_PulseTimeOffset; // 0xC4C(0x4)
		FVector2D LaserMaterialRandomFlickeringSpeed; // 0xC50(0x10)
		FLaserGridOutletArray LaserGridOutlets; // 0xC60(0x120)
		UHierarchicalInstancedStaticMeshComponent* HISMComponentOutlet; // 0xD80(0x8)
		UHierarchicalInstancedStaticMeshComponent* HISMComponentLaser; // 0xD88(0x8)
		bool bEnabled; // 0xD90(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xD91(0x3) UNKNOWN PROPERTY
		int32_t LaserGridPatternIndex; // 0xD94(0x4)
		FTimerHandle LaserPatternTimerHandle; // 0xD98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid");
			return ret;
		}

		void SetLaserGridEnable(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C079284(relative to base address)
		void OnRep_LaserGridConnections(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7513D9C94(relative to base address)
		void OnRep_bEnabled(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7513D9CA8(relative to base address)
		void LaserGridTriggered(FLaserGridConnectionEntry& LaserConnectionData, AActor* TriggeringActor); // Flags: BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LaserGridStateUpdated(bool bLaserGridEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePatternTimerComplete_PreTransition(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void HandlePatternTimerComplete_PostTransition(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void HandleLaserCollisionOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74E228F04(relative to base address)
		void HandleAttachedBuildingActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF74E7294A8(relative to base address)
		void GetActiveLaserGridConnections(TArray<FLaserGridConnectionEntry>& OutActiveLaserGridConnections); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF7513D9BF8(relative to base address)
		void CosmeticLaserConnectionsUpdated(TArray<FLaserGridConnectionEntry>& NewLaserGridConnections); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CosmeticDestroyOutletInstance(FLaserGridOutletEntry& OutletEntry); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanActorTriggerLaserGrid(AActor* TriggeringActor); // Flags: BlueprintAuthorityOnly|Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7513D9B64(relative to base address)
	};

}
