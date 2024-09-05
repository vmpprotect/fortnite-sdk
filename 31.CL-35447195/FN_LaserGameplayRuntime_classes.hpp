#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LaserGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LaserGameplayRuntime.LaserCapsuleComponent
	// Inherited from UCapsuleComponent -> UShapeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x500 - 0x4F0)
	class ULaserCapsuleComponent : public UCapsuleComponent	
	{
	public:
		TEnumAsByte CollisionWhenEnabled; // 0x4F0(0x1)
		TEnumAsByte CollisionWhenDisabled; // 0x4F1(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x4F2(0xE) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY

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
		TArray LaserGridPatterns; // 0x9A8(0x10)
		float LaserPatternChangeWarningTime; // 0x9B8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x9BC(0x4) UNKNOWN PROPERTY
		TMap LaserOutletToBuildingAttachmentMap; // 0x9C0(0x50)
		FGameplayTagContainer IgnoreActorTags; // 0xA10(0x20)
		UClass LaserCapsuleComponentClass; // 0xA30(0x8)
		FRotator LaserCapsuleCollisionRotationOffset; // 0xA38(0x18)
		int32_t LaserCustomDataIndexForRandomizedVisuals; // 0xA50(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xA54(0x4) UNKNOWN PROPERTY
		FLaserGridConnectionArray LaserGridConnections; // 0xA58(0x118)
		TArray LocalLaserGridConnections; // 0xB70(0x10)
		FTransform LaserConnectionOffset; // 0xB80(0x60)
		FVector LaserOutletConnectionOffset; // 0xBE0(0x18)
		USoundBase SoundOutletTransitionOn; // 0xBF8(0x8)
		USoundBase SoundLaserTransitionPrimaryOutlet; // 0xC00(0x8)
		USoundBase SoundLaserTransitionSecondaryOutlet; // 0xC08(0x8)
		USoundBase SoundLaserTransition; // 0xC10(0x8)
		int32_t OutletMaterialCustomDataIndex_EmissiveEnabled; // 0xC18(0x4)
		int32_t OutletMaterialCustomDataIndex_DisableEmissivePulse; // 0xC1C(0x4)
		int32_t OutletMaterialCustomDataIndex_AnimTimestamp; // 0xC20(0x4)
		int32_t OutletMaterialCustomDataIndex_AnimTimestampDuration; // 0xC24(0x4)
		float MaterialCosineWavePeriod; // 0xC28(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xC2C(0x4) UNKNOWN PROPERTY
		FVector2D OutletMaterialTransitionOffTimestampOffset; // 0xC30(0x10)
		int32_t LaserMaterialCustomDataIndex_PulseEnabled; // 0xC40(0x4)
		int32_t LaserMaterialCustomDataIndex_RandomFlickeringSpeed; // 0xC44(0x4)
		int32_t LaserMaterialCustomDataIndex_AnimTimestamp; // 0xC48(0x4)
		int32_t LaserMaterialCustomDataIndex_PulseTimeOffset; // 0xC4C(0x4)
		FVector2D LaserMaterialRandomFlickeringSpeed; // 0xC50(0x10)
		FLaserGridOutletArray LaserGridOutlets; // 0xC60(0x120)
		UHierarchicalInstancedStaticMeshComponent HISMComponentOutlet; // 0xD80(0x8)
		UHierarchicalInstancedStaticMeshComponent HISMComponentLaser; // 0xD88(0x8)
		bool bEnabled; // 0xD90(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xD91(0x3) UNKNOWN PROPERTY
		int32_t LaserGridPatternIndex; // 0xD94(0x4)
		FTimerHandle LaserPatternTimerHandle; // 0xD98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid");
			return ret;
		}

		void SetLaserGridEnable(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414D004F8
		void OnRep_LaserGridConnections(); // Flags: Final|Native|Private 0x7FF414D00418
		void OnRep_bEnabled(); // Flags: Final|Native|Private 0x7FF414D00338
		void LaserGridTriggered(FLaserGridConnectionEntry& LaserConnectionData, AActor TriggeringActor); // Flags: BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D00258
		void LaserGridStateUpdated(bool bLaserGridEnabled); // Flags: Event|Protected|BlueprintEvent 0x7FF414D00178
		void HandlePatternTimerComplete_PreTransition(); // Flags: Final|Native|Private 0x7FF414D00098
		void HandlePatternTimerComplete_PostTransition(); // Flags: Final|Native|Private 0x7FF414CFFFB8
		void HandleLaserCollisionOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Private|HasOutParms 0x7FF414CFFED8
		void HandleAttachedBuildingActorDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414CFFDF8
		void GetActiveLaserGridConnections(TArray& OutActiveLaserGridConnections); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414CFFD18
		void CosmeticLaserConnectionsUpdated(TArray& NewLaserGridConnections); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CFFC38
		void CosmeticDestroyOutletInstance(FLaserGridOutletEntry& OutletEntry); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CFFB58
		bool CanActorTriggerLaserGrid(AActor TriggeringActor); // Flags: BlueprintAuthorityOnly|Native|Event|Protected|BlueprintEvent|Const 0x7FF414CFFA78
	};

}
