#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LabradorRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LabradorRuntime.FortAIFaunaAnimInstance_Labrador
	// Inherited from UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x38 (0x7A0 - 0x768)
	class UFortAIFaunaAnimInstance_Labrador : public UFortAIFaunaAnimInstance	
	{
	public:
		bool bHighVelocity; // 0x768(0x1)
		bool bIsInterruptible; // 0x769(0x1)
		bool bLocoToIdle; // 0x76A(0x1)
		bool bIdleToLoco; // 0x76B(0x1)
		bool bJumpStartToJumpLoop; // 0x76C(0x1)
		bool bJumpLandToMovement; // 0x76D(0x1)
		bool bIsRunning; // 0x76E(0x1)
		bool bIdleToFalling; // 0x76F(0x1)
		bool bToppledOnGround; // 0x770(0x1)
		bool bTransitionToLand; // 0x771(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x772(0x2) UNKNOWN PROPERTY
		float TargetDistance; // 0x774(0x4)
		bool bTargetIsClose; // 0x778(0x1)
		bool bIsToppled; // 0x779(0x1)
		bool bIsLeaking; // 0x77A(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x77B(0x1) UNKNOWN PROPERTY
		float MinHighVelocityMagnitude; // 0x77C(0x4)
		float MaxInterruptibleCurveValue; // 0x780(0x4)
		float LocoIdleTransitionThreshold; // 0x784(0x4)
		float RunSpeedThreshold; // 0x788(0x4)
		float JumpLandToMovementInterruptibleThreshold; // 0x78C(0x4)
		float MinTargetIsCloseDistance; // 0x790(0x4)
		FName CurveName_Interruptible; // 0x794(0x4)
		unsigned char UnknownData05_7[0x8]; // 0x798(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LabradorRuntime.FortAIFaunaAnimInstance_Labrador");
			return ret;
		}
	};


	// Class LabradorRuntime.FortLabradorComponent_Telemetry
	// Inherited from UFortAIComponent_Telemetry -> UActorComponent -> UObject
	// Size: 0x20 (0x128 - 0x108)
	class UFortLabradorComponent_Telemetry : public UFortAIComponent_Telemetry	
	{
	public:
		bool bWasAwake; // 0x108(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x109(0x7) UNKNOWN PROPERTY
		FString InstigatorAwakeNetIDString; // 0x110(0x10)
		ELabradorDespawnReason DespawnReason; // 0x120(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x121(0x3) UNKNOWN PROPERTY
		float DamageReceivedFromPlayers; // 0x124(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LabradorRuntime.FortLabradorComponent_Telemetry");
			return ret;
		}

		void OnWakeUp(AActor GoalActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE5138
		void OnTeleport(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE5058
		void OnDamaged(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414CE4F78
	};

}
