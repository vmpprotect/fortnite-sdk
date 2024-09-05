#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DryBoxRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DryBoxRuntime.NyxGlassWeaponComponent_Swinging
	// Inherited from UFortWeaponComponent_Swinging -> UFortWeaponComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xBF0 (0x1268 - 0x678)
	class UNyxGlassWeaponComponent_Swinging : public UFortWeaponComponent_Swinging	
	{
	public:
		FScalableFloat SwingTargetRaycastDist; // 0x678(0x28)
		FScalableFloat AttackTargetRaycastDist; // 0x6A0(0x28)
		FScalableFloat CameraDistScale; // 0x6C8(0x28)
		FScalableFloat TargetingSphereRadius; // 0x6F0(0x28)
		FScalableFloat MaxAttachPointActorBoundsSize; // 0x718(0x28)
		FScalableFloat MaxAttachPointActorExtent; // 0x740(0x28)
		FScalableFloat MinAttachPointDistFromCamera; // 0x768(0x28)
		FScalableFloat MinAttachPointAngleInRad; // 0x790(0x28)
		FScalableFloat MaxSecondAttachPointDotProd; // 0x7B8(0x28)
		TEnumAsByte RayTraceTargetingCollisionChannel; // 0x7E0(0x1)
		TEnumAsByte SphereOverlapTargetingCollisionChannel; // 0x7E1(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x7E2(0x6) UNKNOWN PROPERTY
		TArray DisallowedActorClasses; // 0x7E8(0x10)
		TArray DirectRaycastDisallowedActorClasses; // 0x7F8(0x10)
		TArray AllowedBuildingTypes; // 0x808(0x10)
		FScalableFloat SwingingAutoDetachDist; // 0x818(0x28)
		FScalableFloat AttackStartSlashDist; // 0x840(0x28)
		FScalableFloat MaxAcceleration; // 0x868(0x28)
		FScalableFloat GasOrthogonalPowerWhileAttacking; // 0x890(0x28)
		FScalableFloat GasOrthogonalPowerWhileSwinging; // 0x8B8(0x28)
		FScalableFloat GasReelInPowerSwinging; // 0x8E0(0x28)
		FScalableFloat GasReelInPowerAttacking; // 0x908(0x28)
		FScalableFloat bShouldInterpolateCurGasToGoal; // 0x930(0x28)
		FScalableFloat GasForceInterpSpeed; // 0x958(0x28)
		FScalableFloat bShouldAccelerateWhileAttached; // 0x980(0x28)
		FScalableFloat UnattachedDeaccelerationMultiplier; // 0x9A8(0x28)
		FScalableFloat AttachedDeaccelerationMultiplier; // 0x9D0(0x28)
		FScalableFloat TimeAttachedBeforeSpeedStartsIncreasing; // 0x9F8(0x28)
		FScalableFloat TimeAttachedForMaxSpeed; // 0xA20(0x28)
		FScalableFloat MinAttachedSpeedMultiplier; // 0xA48(0x28)
		FScalableFloat MaxAttachedSpeedMultiplier; // 0xA70(0x28)
		FScalableFloat MinUnattachedSpeedMultiplier; // 0xA98(0x28)
		FScalableFloat MaxSpeedMultiplier; // 0xAC0(0x28)
		FScalableFloat MaxSpeedDecreaseFromUpwardAngle; // 0xAE8(0x28)
		UCurveFloat SpeedBasedOnHeightCurve; // 0xB10(0x8)
		FScalableFloat BaseSwingSpeed; // 0xB18(0x28)
		FScalableFloat InitialAccelerationStartSpeed; // 0xB40(0x28)
		FScalableFloat InitialAccelerationTime; // 0xB68(0x28)
		UCurveFloat InitialAccelerationCurve; // 0xB90(0x8)
		FScalableFloat SpeedSoftCapDrag; // 0xB98(0x28)
		FScalableFloat SpeedHardCapFailsafe; // 0xBC0(0x28)
		FScalableFloat MaxHoverTime; // 0xBE8(0x28)
		FScalableFloat FullHoverRechargeTime; // 0xC10(0x28)
		FScalableFloat DesiredHoverZSpeed; // 0xC38(0x28)
		FScalableFloat HoverZMultiplier; // 0xC60(0x28)
		FScalableFloat HoverTimeWhileUnequipped; // 0xC88(0x28)
		FScalableFloat HoverZMultiplierWhileUnequipped; // 0xCB0(0x28)
		FScalableFloat SpeedSoftCapDragWhenHovering; // 0xCD8(0x28)
		FScalableFloat MaxHoverSpeed; // 0xD00(0x28)
		FScalableFloat OldAttackDistanceXRange; // 0xD28(0x28)
		FScalableFloat OldAttackDistanceYRange; // 0xD50(0x28)
		FScalableFloat NewAttackDistanceXRange; // 0xD78(0x28)
		FScalableFloat NewAttackDistanceYRange; // 0xDA0(0x28)
		UCurveFloat AttackAccelerationCurve; // 0xDC8(0x8)
		FScalableFloat ReelInForceAttackMinDist; // 0xDD0(0x28)
		FScalableFloat ReelInForceAttackMaxDist; // 0xDF8(0x28)
		FScalableFloat ReelInForceAttackMinMult; // 0xE20(0x28)
		FScalableFloat ReelInForceAttackMaxMult; // 0xE48(0x28)
		FScalableFloat AttackStartSpeed; // 0xE70(0x28)
		FScalableFloat AttackMaxSpeed; // 0xE98(0x28)
		FScalableFloat SpeedSoftCapDragWhenAttacking; // 0xEC0(0x28)
		FScalableFloat SlashLockDistance; // 0xEE8(0x28)
		FScalableFloat MinSlashDistToTarget; // 0xF10(0x28)
		FScalableFloat SlashSpeed; // 0xF38(0x28)
		FScalableFloat SlashLockTime; // 0xF60(0x28)
		FScalableFloat SlashLeapBackTime; // 0xF88(0x28)
		FScalableFloat SlashLeapBackHeightModifier; // 0xFB0(0x28)
		FScalableFloat SlashLeapBackSpeed; // 0xFD8(0x28)
		FGameplayTag OverrideSwingingControlParamsTag_Swinging; // 0x1000(0x4)
		FGameplayTag OverrideSwingingControlParamsTag_Hovering; // 0x1004(0x4)
		FGameplayTag OverrideSwingingControlParamsTag_Attacking; // 0x1008(0x4)
		FGameplayTag OverrideSwingingControlParamsTag_LeapingBack; // 0x100C(0x4)
		FScalableFloat LeapingBack_OverrideTimer; // 0x1010(0x28)
		FName ActorHasPreferredSwingMeshTag; // 0x1038(0x4)
		FName ComponentIsPreferredSwingMeshTag; // 0x103C(0x4)
		bool bUsingDirectRaycast; // 0x1040(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1041(0x7) UNKNOWN PROPERTY
		FNyxGlassTargetingData CurTargetingData; // 0x1048(0x48)
		unsigned char UnknownData05_7[0x1D8]; // 0x1090(0x1D8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DryBoxRuntime.NyxGlassWeaponComponent_Swinging");
			return ret;
		}

		void UpdateRopeVFX(); // Flags: Event|Public|BlueprintEvent 0x7FF414CEFBD8
		bool ShouldUpdateTargeting(); // Flags: Event|Public|BlueprintEvent 0x7FF414CEFAF8
		void Server_SetTargetingData(FNyxGlassTargetingData NewData); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414CEFA18
		void OnWeaponUnequip(AFortWeapon Weapon); // Flags: Final|Native|Private 0x7FF414CEF938
		void OnWeaponFired(); // Flags: Final|Native|Private 0x7FF414CEF858
		void OnVelocityCalculated(FNyxGlassVelocityMetadata& VelocityMetadata); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414CEF778
		void OnTargetingComplete(FNyxGlassTargetingData& TargetingData); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414CEF698
		void OnServerTargetingDataReceived(); // Flags: Event|Public|BlueprintEvent 0x7FF414CEF5B8
		void OnNyxGlassStateChanged(ENyxGlassState OldState, ENyxGlassState NewState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CEF4D8
		void OnDetached(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CEF3F8
		void OnBPWeaponFired(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CEF318
		void OnAttackStart(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CEF238
		void OnAttached(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CEF158
		void Multicast_SetTargetingDataOnRemoteClients(FNyxGlassTargetingData NewData); // Flags: Final|Net|Native|Event|NetMulticast|Private 0x7FF414CEF078
		bool IsAttacking(); // Flags: Event|Public|BlueprintEvent 0x7FF414CEEF98
		ENyxGlassState GetNyxGlassState(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414CEEEB8
		ENyxGlassSlashSubstate GetNyxGlassSlashSubstate(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414CEEDD8
		void EndSwingingSession(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CEECF8
		float CalcInitialAccelerationAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CEEC18
	};


	// Class DryBoxRuntime.NyxGlassFuelAttributeSet
	// Inherited from UFortAttributeSet -> UAttributeSet -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UNyxGlassFuelAttributeSet : public UFortAttributeSet	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FFortGameplayAttributeData MaxFuel; // 0x38(0x28)
		FFortGameplayAttributeData Fuel; // 0x60(0x28)
		FFortGameplayAttributeData LocalFuel; // 0x88(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DryBoxRuntime.NyxGlassFuelAttributeSet");
			return ret;
		}

		void OnRep_LocalFuel(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414CEFD98
		void OnRep_Fuel(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414CEFCB8
	};


	// Class DryBoxRuntime.NyxGlassSwingingMovementControls
	// Inherited from UFortMovementControls -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UNyxGlassSwingingMovementControls : public UFortMovementControls	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DryBoxRuntime.NyxGlassSwingingMovementControls");
			return ret;
		}
	};

}
