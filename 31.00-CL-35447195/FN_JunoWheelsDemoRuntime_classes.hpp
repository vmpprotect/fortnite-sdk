#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoWheelsDemoRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoWheelsDemoRuntime.JunoWheelSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UJunoWheelSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWheelsDemoRuntime.JunoWheelSubsystem");
			return ret;
		}
	};


	// Class JunoWheelsDemoRuntime.JunoWheelActor
	// Inherited from AAttachableWheel -> AActor -> UObject
	// Size: 0x318 (0x648 - 0x330)
	class AJunoWheelActor : public AAttachableWheel	
	{
	public:
		unsigned char UnknownData08_3[0xC0]; // 0x330(0xC0) UNKNOWN PROPERTY
		UFortHealthSet HealthSet; // 0x3F0(0x8)
		UFortAbilitySystemComponent AbilitySystemComponent; // 0x3F8(0x8)
		unsigned char UnknownData09_6[0x18]; // 0x400(0x18) UNKNOWN PROPERTY
		FGuid WheelGuid; // 0x418(0x10)
		unsigned char UnknownData10_6[0x8]; // 0x428(0x8) UNKNOWN PROPERTY
		UItemDefinitionBase AssociatedItem; // 0x430(0x8)
		FAttachableWheelAttachData LocalAttachData; // 0x438(0x58)
		FGameplayTag ControlChannelTag_Steering; // 0x490(0x4)
		FGameplayTag ControlChannelTag_Velocity; // 0x494(0x4)
		FGameplayTag ControlChannelTag_Brake; // 0x498(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x49C(0x4) UNKNOWN PROPERTY
		FScalableFloat MaxSteerAngle; // 0x4A0(0x28)
		FScalableFloat MaxAccelerationTorque; // 0x4C8(0x28)
		FScalableFloat MaxBrakeTorque; // 0x4F0(0x28)
		FScalableFloat MaxAngularVelocity; // 0x518(0x28)
		bool bControlChannelInvert_Steering; // 0x540(0x1)
		bool bControlChannelInvert_Velocity; // 0x541(0x1)
		unsigned char UnknownData12_6[0x6]; // 0x542(0x6) UNKNOWN PROPERTY
		FScalableFloat SteeringMatchRate; // 0x548(0x28)
		FScalableFloat VelocityMatchRate; // 0x570(0x28)
		FScalableFloat BrakeMatchRate; // 0x598(0x28)
		FScalableFloat AngularVelocityBrakeThreshold; // 0x5C0(0x28)
		UPhysicalMaterial TEMP_HotfixableWheelMaterial; // 0x5E8(0x8)
		unsigned char UnknownData13_6[0x8]; // 0x5F0(0x8) UNKNOWN PROPERTY
		UJunoControlChannelComponent ControlChannelComponent; // 0x5F8(0x8)
		UJunoPowerConsumerComponent PowerConsumerComponent; // 0x600(0x8)
		AActor ActorRef; // 0x608(0x8)
		unsigned char UnknownData14_6[0x10]; // 0x610(0x10) UNKNOWN PROPERTY
		FGameplayTagContainer DefaultTags; // 0x620(0x20)
		unsigned char UnknownData15_7[0x8]; // 0x640(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWheelsDemoRuntime.JunoWheelActor");
			return ret;
		}

		void SetControlChannelInvert_Velocity(bool InControlChannelInvert_Velocity); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5D820
		void SetControlChannelInvert_Steering(bool InControlChannelInvert_Steering); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5D740
		void SetControlChannel_SteerAngle(FGameplayTag InChannelTag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5D660
		void SetControlChannel_Brake(FGameplayTag InChannelTag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5D580
		void SetControlChannel_AngularVelocity(FGameplayTag InChannelTag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5D4A0
		void SetAssociatedItem(UItemDefinitionBase ItemDefinition); // Flags: Native|Public|BlueprintCallable 0x7FF414E5D3C0
		void SetActorRef(AActor NewActorRef); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5D2E0
		void OnLocalInteractStop(AFortPlayerController FortPC); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E5D200
		void OnLocalInteractStart(AFortPlayerController FortPC); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E5D120
		void OnHeldObjectPickedUp(); // Flags: Final|Native|Private 0x7FF414E5D040
		void OnComponentPhysicsStateChanged(UPrimitiveComponent ChangedComponent, EComponentPhysicsStateChange StateChange); // Flags: Final|Native|Protected 0x7FF414E5CF60
		void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E5CE80
		void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E5CDA0
		void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E5CCC0
		void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, AController InEventInstigator, AActor InDamageCauser); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414E5CBE0
		void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, AController EventInstigator, AActor DamageCauser); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E5CB00
		float GetMaxHealth(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E5CA20
		float GetHealth(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E5C940
		float GetEngineStrainPercent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E5C860
		AActor GetActorRef(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5C780
		void GameplayCue_Damage(TEnumAsByte EventType, FGameplayCueParameters Parameters); // Flags: Final|Native|Public 0x7FF414E5C6A0
		void Die(FGameplayTag DeathReason, AController Killer, AActor DamageCauser); // Flags: Final|BlueprintAuthorityOnly|Native|Private|BlueprintCallable 0x7FF414E5C5C0
		void BlueprintOnInteract(AFortPawn InteractingPawn, TEnumAsByte InteractionBeingAttempted); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF414E5C4E0
		bool BlueprintGetInteractionTime(AFortPawn InteractingPawn, float& OutInteractionTime, TEnumAsByte InteractionBeingAttempted); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414E5C400
		FText BlueprintGetInteractionString(AFortPawn InteractingPawn, TEnumAsByte InteractionBeingAttempted); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414E5C320
		void BlueprintFillContextInfo(FInteractionType& InteractType, UFortInteractContextInfo ContextInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E5C240
		bool BlueprintCanInteract(AFortPawn InteractingPawn, TEnumAsByte InteractionBeingAttempted, TEnumAsByte InteractionType); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414E5C160
		bool AttachToUsingCachedData(UPrimitiveComponent InAttachComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5C080
	};

}
