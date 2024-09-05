#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EntityInteract
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EntityInteract.EntityInteractLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEntityInteractLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityInteract.EntityInteractLibrary");
			return ret;
		}

		AActor EntityInteractGetActor(UObject* WorldContextObject, FHitResult& HitResult); // Flags: Final|Native|Static|Public|HasOutParms, Memory Exec: 0x7FF75191D7D4(relative to base address)
	};


	// Class EntityInteract.EntityInteractProxyActor
	// Inherited from AActor -> UObject
	// Size: 0x1A8 (0x438 - 0x290)
	class AEntityInteractProxyActor : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FLocalizableMessage InteractMessage; // 0x298(0x30)
		FLocalizableMessage CannotInteractMessage; // 0x2C8(0x30)
		FLocalizableMessage CoolDownMessage; // 0x2F8(0x30)
		FText InteractText; // 0x328(0x10)
		FText CannotInteractText; // 0x338(0x10)
		FText CooldownText; // 0x348(0x10)
		FTimerHandle CoolDownTimerHandle; // 0x358(0x8)
		TMap<AController*, UFortControllerComponent_Interaction*> PerControllerOverriddenInteractDurationPlayerComponents; // 0x360(0x50)
		TMap<AController*, UFortControllerComponent_Interaction*> PerControllerCooldownTimerHandlePlayerComponents; // 0x3B0(0x50)
		TArray<AController*> InteractingControllers; // 0x400(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x410(0x10) UNKNOWN PROPERTY
		float ForwardInteractOffset; // 0x420(0x4)
		float RightInteractOffset; // 0x424(0x4)
		int64_t TrackedSuccessfulInteractsNum; // 0x428(0x8)
		bool bInteractEnabled; // 0x430(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x431(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityInteract.EntityInteractProxyActor");
			return ret;
		}

		void OnRep_InteractMessage(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75191D928(relative to base address)
		void OnRep_CoolDownMessage(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75191D90C(relative to base address)
		void OnRep_CannotInteractMessage(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75191D8F0(relative to base address)
		void NetMultiCastBeginCooldownTimer(float CooldownTime); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74C088288(relative to base address)
	};


	// Class EntityInteract.FortAthenaMutator_EntityInteract
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x338 - 0x338)
	class AFortAthenaMutator_EntityInteract : public AFortAthenaMutator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityInteract.FortAthenaMutator_EntityInteract");
			return ret;
		}
	};

}
