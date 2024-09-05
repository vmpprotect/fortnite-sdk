#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Curie
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Curie.CurieComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UCurieComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieComponent");
			return ret;
		}
	};


	// Class Curie.CurieElementGameplayEffectOwner
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCurieElementGameplayEffectOwner : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieElementGameplayEffectOwner");
			return ret;
		}
	};


	// Class Curie.CurieEntityStateBehavior
	// Inherited from UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UCurieEntityStateBehavior : public UCurieElementGameplayEffectOwner	
	{
	public:
		FGameplayTagContainer RequiredAttachedElements; // 0x28(0x20)
		FGameplayTagContainer RequiredInteractingElements; // 0x48(0x20)
		FGameplayTagContainer AllowedAttachmentEntityTypes; // 0x68(0x20)
		TArray<FCurieEffectContainer> OnBeginEffects; // 0x88(0x10)
		TArray<FCurieEffectContainer> OngoingEffects; // 0x98(0x10)
		TArray<FCurieEffectContainer> OnEndEffects; // 0xA8(0x10)
		bool bShouldDetach : 1; // 0xB8:0(0x1)
		bool bSkipExecuteAttachDetach : 1; // 0xB8:1(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieEntityStateBehavior");
			return ret;
		}
	};


	// Class Curie.CurieGlobals
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UCurieGlobals : public UObject	
	{
	public:
		bool bEnableCurie; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FSoftClassPath CurieGlobalsClassName; // 0x30(0x18)
		UCurieManager* RegisteredCurieManager; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieGlobals");
			return ret;
		}
	};


	// Class Curie.CurieElementAllocationHandler
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCurieElementAllocationHandler : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieElementAllocationHandler");
			return ret;
		}
	};


	// Class Curie.CurieElementInteractWithElementHandler
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCurieElementInteractWithElementHandler : public UObject	
	{
	public:
		ECurieHandlerPriority HandlerPriority; // 0x28(0x1)
		ECurieHandlerBehavior HandlerBehavior; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FGameplayTag ElementTag; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieElementInteractWithElementHandler");
			return ret;
		}
	};


	// Class Curie.CurieElementInteractWithMaterialHandler
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCurieElementInteractWithMaterialHandler : public UObject	
	{
	public:
		ECurieHandlerPriority HandlerPriority; // 0x28(0x1)
		ECurieHandlerBehavior HandlerBehavior; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FGameplayTag ElementTag; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieElementInteractWithMaterialHandler");
			return ret;
		}
	};


	// Class Curie.CurieElementAttachHandler
	// Inherited from UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class UCurieElementAttachHandler : public UCurieElementGameplayEffectOwner	
	{
	public:
		ECurieHandlerPriority HandlerPriority; // 0x28(0x1)
		ECurieHandlerBehavior HandlerBehavior; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FGameplayTag ElementTag; // 0x2C(0x4)
		TArray<FCurieEffectContainer> OnBeginAttachmentEffects; // 0x30(0x10)
		TArray<FCurieEffectContainer> OngoingAttachmentEffects; // 0x40(0x10)
		TArray<FCurieEffectContainer> OnEndAttachmentEffects; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieElementAttachHandler");
			return ret;
		}
	};


	// Class Curie.CurieElementAttachConditionHandler
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCurieElementAttachConditionHandler : public UObject	
	{
	public:
		ECurieHandlerPriority HandlerPriority; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FGameplayTag ElementTag; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieElementAttachConditionHandler");
			return ret;
		}
	};


	// Class Curie.CurieElementInteractWithContainerHandler
	// Inherited from UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x48 (0x70 - 0x28)
	class UCurieElementInteractWithContainerHandler : public UCurieElementGameplayEffectOwner	
	{
	public:
		ECurieHandlerPriority HandlerPriority; // 0x28(0x1)
		ECurieHandlerBehavior HandlerBehavior; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FGameplayTag ElementTag; // 0x2C(0x4)
		TArray<FCurieEffectContainer> OnInstantInteractionEffects; // 0x30(0x10)
		TArray<FCurieEffectContainer> OnBeginInteractionEffects; // 0x40(0x10)
		TArray<FCurieEffectContainer> OngoingInteractionEffects; // 0x50(0x10)
		TArray<FCurieEffectContainer> OnEndInteractionEffects; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieElementInteractWithContainerHandler");
			return ret;
		}
	};


	// Class Curie.CurieInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCurieInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieInterface");
			return ret;
		}

		void OnCurieStateDetached_BP(FCurieContainerHandle CurieContainerHandle, FGameplayTag StateTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieStateAttached_BP(FCurieContainerHandle CurieContainerHandle, FGameplayTag StateTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieElementInteractEnded_BP(FCurieContainerHandle CurieContainerHandle, FGameplayTag ElementTag, FCurieInteractParamsHandle& InteractParamsHandle); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieElementInteractBegun_BP(FCurieContainerHandle CurieContainerHandle, FGameplayTag ElementTag, FCurieInteractParamsHandle& InteractParamsHandle); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieElementInteract_BP(FCurieContainerHandle CurieContainerHandle, FGameplayTag ElementTag, FCurieInteractParamsHandle& InteractParamsHandle); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieElementDetached_BP(FCurieContainerHandle CurieContainerHandle, FGameplayTag ElementTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieElementAttached_BP(FCurieContainerHandle CurieContainerHandle, FGameplayTag ElementTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieContainerReparented_BP(FCurieContainerHandle CurieContainerHandle); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieContainerReleased_BP(FCurieContainerHandle CurieContainerHandle); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieContainerAcquired_BP(FCurieContainerHandle CurieContainerHandle); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class Curie.CurieManager
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x590 (0x630 - 0xA0)
	class UCurieManager : public UGameStateComponent	
	{
	public:
		UClass* CurieComponentClass; // 0xA0(0x8)
		FName CurieManagerRegistryName; // 0xA8(0x4)
		FName MaterialDataRegistryName; // 0xAC(0x4)
		FName ElementDataRegistryName; // 0xB0(0x4)
		FName EntityStateDataRegistryName; // 0xB4(0x4)
		unsigned char UnknownData00_6[0x298]; // 0xB8(0x298) UNKNOWN PROPERTY
		TMap<FGameplayTag, UCurieElementAllocationHandler*> ElementAllocationHandlers; // 0x350(0x50)
		TMap<FGameplayTag, FCurieElementAttachHandlersContainer> ElementAttachmentHandlers; // 0x3A0(0x50)
		TMap<None, FCurieElementAttachConditionHandlersContainer> ElementAttachmentConditionHandlers; // 0x3F0(0x50)
		TMap<FCurieElementPairKey, None> ElementInteractWithElementHandlers; // 0x440(0x50)
		TMap<FGameplayTag, FCurieElementInteractWithMaterialHandlersContainer> ElementInteractWithMaterialHandlers; // 0x490(0x50)
		TMap<FGameplayTag, FCurieElementInteractWithContainerHandlersContainer> ElementInteractWithContainerHandlers; // 0x4E0(0x50)
		TArray<UCurieManagerComponent*> CurieManagerComponents; // 0x530(0x10)
		unsigned char UnknownData01_7[0xF0]; // 0x540(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieManager");
			return ret;
		}

		void UnbindDelegateForCurieStateDetached(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D396E3C(relative to base address)
		void UnbindDelegateForCurieStateAttached(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D396BCC(relative to base address)
		void UnbindDelegateForCurieElementInteract(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D39695C(relative to base address)
		void UnbindDelegateForCurieElementEndInteract(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D3966EC(relative to base address)
		void UnbindDelegateForCurieElementDetached(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D39647C(relative to base address)
		void UnbindDelegateForCurieElementBeginInteract(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D39620C(relative to base address)
		void UnbindDelegateForCurieElementAttached(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D395F9C(relative to base address)
		void HandleContainerOwnerDestroyed(AActor* OwnerActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C3C4F88(relative to base address)
		void BindDelegateForCurieStateDetached(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D395E14(relative to base address)
		void BindDelegateForCurieStateAttached(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D395C90(relative to base address)
		void BindDelegateForCurieElementInteract(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D395B08(relative to base address)
		void BindDelegateForCurieElementEndInteract(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D395980(relative to base address)
		void BindDelegateForCurieElementDetached(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D3957F8(relative to base address)
		void BindDelegateForCurieElementBeginInteract(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D395670(relative to base address)
		void BindDelegateForCurieElementAttached(UObject* CurieOwner, FDelegateProperty& Delegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D3954E8(relative to base address)
	};


	// Class Curie.CurieManagerComponentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCurieManagerComponentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieManagerComponentInterface");
			return ret;
		}
	};


	// Class Curie.CurieManagerComponentConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UCurieManagerComponentConfig : public UPrimaryDataAsset	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FName ConfigName; // 0x38(0x4)
		FGameplayTag ConfigTag; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieManagerComponentConfig");
			return ret;
		}
	};


	// Class Curie.CurieManagerComponent
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCurieManagerComponent : public UObject	
	{
	public:
		UCurieManagerComponentConfig* CachedConfig; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Curie.CurieManagerComponent");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/FireAllocationHandler.FireAllocationHandler_C
	// Inherited from UFortCurieElementAllocationHandlerFire -> UFortCurieElementAllocationHandler -> UCurieElementAllocationHandler -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFireAllocationHandler_C : public UFortCurieElementAllocationHandlerFire	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/FireAllocationHandler.FireAllocationHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/FireAttachConditionHandler.FireAttachConditionHandler_C
	// Inherited from UFortCurieElementAttachConditionHandlerFire -> UFortCurieElementAttachConditionHandler -> UCurieElementAttachConditionHandler -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFireAttachConditionHandler_C : public UFortCurieElementAttachConditionHandlerFire	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/FireAttachConditionHandler.FireAttachConditionHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/FireSelfInteractHandler.FireSelfInteractHandler_C
	// Inherited from UFortCurieElementInteractWithSameElementHandlerFire -> UFortCurieElementInteractWithSameElementHandler -> UCurieElementInteractWithElementHandler -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFireSelfInteractHandler_C : public UFortCurieElementInteractWithSameElementHandlerFire	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/FireSelfInteractHandler.FireSelfInteractHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/WaterSelfInteractHandler.WaterSelfInteractHandler_C
	// Inherited from UFortCurieElementInteractWithSameElementHandler -> UCurieElementInteractWithElementHandler -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UWaterSelfInteractHandler_C : public UFortCurieElementInteractWithSameElementHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/WaterSelfInteractHandler.WaterSelfInteractHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/WaterFireInteractHandler.WaterFireInteractHandler_C
	// Inherited from UFortCurieElementInteractWithElementHandler -> UCurieElementInteractWithElementHandler -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UWaterFireInteractHandler_C : public UFortCurieElementInteractWithElementHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/WaterFireInteractHandler.WaterFireInteractHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/GameplayEffects/GE_CurieElementalStatus_Burning.GE_CurieElementalStatus_Burning_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_CurieElementalStatus_Burning_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/GameplayEffects/GE_CurieElementalStatus_Burning.GE_CurieElementalStatus_Burning_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/FireAttachHandler.FireAttachHandler_C
	// Inherited from UFortCurieElementAttachHandlerFire -> UFortCurieElementAttachHandler -> UCurieElementAttachHandler -> UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UFireAttachHandler_C : public UFortCurieElementAttachHandlerFire	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/FireAttachHandler.FireAttachHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/WaterMaterialInteractHandler.WaterMaterialInteractHandler_C
	// Inherited from UFortCurieElementInteractWithMaterialHandlerWater -> UFortCurieElementInteractWithMaterialHandler -> UCurieElementInteractWithMaterialHandler -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UWaterMaterialInteractHandler_C : public UFortCurieElementInteractWithMaterialHandlerWater	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/WaterMaterialInteractHandler.WaterMaterialInteractHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/FireWaterInteractHandler.FireWaterInteractHandler_C
	// Inherited from UFortCurieElementInteractWithElementHandler -> UCurieElementInteractWithElementHandler -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UFireWaterInteractHandler_C : public UFortCurieElementInteractWithElementHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/FireWaterInteractHandler.FireWaterInteractHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/GameplayEffects/GE_Curie_FireInteract_Vehicle.GE_Curie_FireInteract_Vehicle_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Curie_FireInteract_Vehicle_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/GameplayEffects/GE_Curie_FireInteract_Vehicle.GE_Curie_FireInteract_Vehicle_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/FireContainerInteractHandler.FireContainerInteractHandler_C
	// Inherited from UFortCurieElementInteractWithContainerHandler -> UCurieElementInteractWithContainerHandler -> UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UFireContainerInteractHandler_C : public UFortCurieElementInteractWithContainerHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/FireContainerInteractHandler.FireContainerInteractHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/FireMaterialInteractHandler.FireMaterialInteractHandler_C
	// Inherited from UFortCurieElementInteractWithMaterialHandlerFire -> UFortCurieElementInteractWithMaterialHandler -> UCurieElementInteractWithMaterialHandler -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UFireMaterialInteractHandler_C : public UFortCurieElementInteractWithMaterialHandlerFire	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/FireMaterialInteractHandler.FireMaterialInteractHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/ElementHandlers/WaterAttachConditionHandler.WaterAttachConditionHandler_C
	// Inherited from UFortCurieElementAttachConditionHandlerWater -> UFortCurieElementAttachConditionHandler -> UCurieElementAttachConditionHandler -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UWaterAttachConditionHandler_C : public UFortCurieElementAttachConditionHandlerWater	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/ElementHandlers/WaterAttachConditionHandler.WaterAttachConditionHandler_C");
			return ret;
		}
	};


	// Class /Game/Curie/States/CurieEntityStateBehavior_ElemAttached_Fire.CurieEntityStateBehavior_ElemAttached_Fire_C
	// Inherited from UFortCurieEntityStateBehavior -> UCurieEntityStateBehavior -> UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UCurieEntityStateBehavior_ElemAttached_Fire_C : public UFortCurieEntityStateBehavior	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/States/CurieEntityStateBehavior_ElemAttached_Fire.CurieEntityStateBehavior_ElemAttached_Fire_C");
			return ret;
		}
	};


	// Class /Game/Curie/States/CurieEntityStateBehavior_ElemInteraction_Water.CurieEntityStateBehavior_ElemInteraction_Water_C
	// Inherited from UFortCurieEntityStateBehavior -> UCurieEntityStateBehavior -> UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UCurieEntityStateBehavior_ElemInteraction_Water_C : public UFortCurieEntityStateBehavior	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/States/CurieEntityStateBehavior_ElemInteraction_Water.CurieEntityStateBehavior_ElemInteraction_Water_C");
			return ret;
		}
	};


	// Class /Game/Curie/States/CurieEntityStateBehavior_ElemInteraction_Fire.CurieEntityStateBehavior_ElemInteraction_Fire_C
	// Inherited from UFortCurieEntityStateBehavior -> UCurieEntityStateBehavior -> UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UCurieEntityStateBehavior_ElemInteraction_Fire_C : public UFortCurieEntityStateBehavior	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/States/CurieEntityStateBehavior_ElemInteraction_Fire.CurieEntityStateBehavior_ElemInteraction_Fire_C");
			return ret;
		}
	};


	// Class /Game/Curie/States/CurieEntityStateBehavior_FullyIgnited.CurieEntityStateBehavior_FullyIgnited_C
	// Inherited from UFortCurieEntityStateBehavior_Burning -> UFortCurieEntityStateBehavior -> UCurieEntityStateBehavior -> UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UCurieEntityStateBehavior_FullyIgnited_C : public UFortCurieEntityStateBehavior_Burning	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/States/CurieEntityStateBehavior_FullyIgnited.CurieEntityStateBehavior_FullyIgnited_C");
			return ret;
		}
	};


	// Class /Game/Curie/States/CurieEntityStateBehavior_Drying.CurieEntityStateBehavior_Drying_C
	// Inherited from UFortCurieEntityStateBehavior_Drying -> UFortCurieEntityStateBehavior -> UCurieEntityStateBehavior -> UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x0 (0xE8 - 0xE8)
	class UCurieEntityStateBehavior_Drying_C : public UFortCurieEntityStateBehavior_Drying	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/States/CurieEntityStateBehavior_Drying.CurieEntityStateBehavior_Drying_C");
			return ret;
		}
	};


	// Class /Game/Curie/Managers/BP_FortCurieManagerAthena.BP_FortCurieManagerAthena_C
	// Inherited from UFortCurieManager -> UCurieManager -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x898 - 0x898)
	class UBP_FortCurieManagerAthena_C : public UFortCurieManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/Managers/BP_FortCurieManagerAthena.BP_FortCurieManagerAthena_C");
			return ret;
		}
	};


	// Class /Game/Curie/Executions/CurieExecution_Water.CurieExecution_Water_C
	// Inherited from UFortCurieElementExecution -> UFortGameplayEffectExecutionCalculation -> UGameplayEffectExecutionCalculation -> UGameplayEffectCalculation -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UCurieExecution_Water_C : public UFortCurieElementExecution	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Curie/Executions/CurieExecution_Water.CurieExecution_Water_C");
			return ret;
		}
	};

}
