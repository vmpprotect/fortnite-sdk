#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoWheelsDemoRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoWheelsDemoRuntime.JunoWheelSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UJunoWheelSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0xC0]; // 0x330(0xC0) UNKNOWN PROPERTY
		UFortHealthSet* HealthSet; // 0x3F0(0x8)
		UFortAbilitySystemComponent* AbilitySystemComponent; // 0x3F8(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x400(0x18) UNKNOWN PROPERTY
		FGuid WheelGuid; // 0x418(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x428(0x8) UNKNOWN PROPERTY
		UItemDefinitionBase* AssociatedItem; // 0x430(0x8)
		FAttachableWheelAttachData LocalAttachData; // 0x438(0x58)
		FGameplayTag ControlChannelTag_Steering; // 0x490(0x4)
		FGameplayTag ControlChannelTag_Velocity; // 0x494(0x4)
		FGameplayTag ControlChannelTag_Brake; // 0x498(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x49C(0x4) UNKNOWN PROPERTY
		FScalableFloat MaxSteerAngle; // 0x4A0(0x28)
		FScalableFloat MaxAccelerationTorque; // 0x4C8(0x28)
		FScalableFloat MaxBrakeTorque; // 0x4F0(0x28)
		FScalableFloat MaxAngularVelocity; // 0x518(0x28)
		bool bControlChannelInvert_Steering; // 0x540(0x1)
		bool bControlChannelInvert_Velocity; // 0x541(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x542(0x6) UNKNOWN PROPERTY
		FScalableFloat SteeringMatchRate; // 0x548(0x28)
		FScalableFloat VelocityMatchRate; // 0x570(0x28)
		FScalableFloat BrakeMatchRate; // 0x598(0x28)
		FScalableFloat AngularVelocityBrakeThreshold; // 0x5C0(0x28)
		UPhysicalMaterial* TEMP_HotfixableWheelMaterial; // 0x5E8(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x5F0(0x8) UNKNOWN PROPERTY
		UJunoControlChannelComponent* ControlChannelComponent; // 0x5F8(0x8)
		UJunoPowerConsumerComponent* PowerConsumerComponent; // 0x600(0x8)
		AActor* ActorRef; // 0x608(0x8)
		unsigned char UnknownData06_6[0x10]; // 0x610(0x10) UNKNOWN PROPERTY
		FGameplayTagContainer DefaultTags; // 0x620(0x20)
		unsigned char UnknownData07_7[0x8]; // 0x640(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWheelsDemoRuntime.JunoWheelActor");
			return ret;
		}

		void SetControlChannelInvert_Velocity(bool InControlChannelInvert_Velocity); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D2F8DC(relative to base address)
		void SetControlChannelInvert_Steering(bool InControlChannelInvert_Steering); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D2F854(relative to base address)
		void SetControlChannel_SteerAngle(FGameplayTag InChannelTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D2FB8C(relative to base address)
		void SetControlChannel_Brake(FGameplayTag InChannelTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D2FA78(relative to base address)
		void SetControlChannel_AngularVelocity(FGameplayTag InChannelTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D2F964(relative to base address)
		void SetAssociatedItem(UItemDefinitionBase* ItemDefinition); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D2F7D0(relative to base address)
		void SetActorRef(AActor* NewActorRef); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D2F750(relative to base address)
		void OnLocalInteractStop(AFortPlayerController* FortPC); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLocalInteractStart(AFortPlayerController* FortPC); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHeldObjectPickedUp(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D2F73C(relative to base address)
		void OnComponentPhysicsStateChanged(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D2F680(relative to base address)
		void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D2F4E8(relative to base address)
		void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D2F350(relative to base address)
		void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D2F1B8(relative to base address)
		void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, AController* InEventInstigator, AActor* InDamageCauser); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7515A45E0(relative to base address)
		void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetMaxHealth(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D2F188(relative to base address)
		float GetHealth(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D2F158(relative to base address)
		float GetEngineStrainPercent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74ED4CB38(relative to base address)
		AActor GetActorRef(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7492F617C(relative to base address)
		void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // Flags: Final|Native|Public, Memory Exec: 0x7FF751D2EFCC(relative to base address)
		void Die(FGameplayTag DeathReason, AController* Killer, AActor* DamageCauser); // Flags: Final|BlueprintAuthorityOnly|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751D2ED44(relative to base address)
		void BlueprintOnInteract(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintGetInteractionTime(AFortPawn* InteractingPawn, float& OutInteractionTime, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF751D2EBE8(relative to base address)
		FText BlueprintGetInteractionString(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintFillContextInfo(FInteractionType& InteractType, UFortInteractContextInfo* ContextInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintCanInteract(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<TInteractionType> InteractionType); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool AttachToUsingCachedData(UPrimitiveComponent* InAttachComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D2EB58(relative to base address)
	};

}
