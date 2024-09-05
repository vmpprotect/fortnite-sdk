#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoPowerSystemRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoPowerSystemRuntime.JunoPowerBank
	// Inherited from AJunoBuildingActor -> AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x10 (0xCB8 - 0xCA8)
	class AJunoPowerBank : public AJunoBuildingActor	
	{
	public:
		UJunoInventoryComponent* InventoryComponent; // 0xCA8(0x8)
		UJunoPowerManagerComponent* PowerManager; // 0xCB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoPowerSystemRuntime.JunoPowerBank");
			return ret;
		}

		void HandleInventoryChanged(TArray<UFortItem*>& AddedItems, TArray<UFortItem*>& RemovedItems); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D28EBC(relative to base address)
	};


	// Class JunoPowerSystemRuntime.JunoPowerCenter
	// Inherited from AJunoBuildingActor -> AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x38 (0xCE0 - 0xCA8)
	class AJunoPowerCenter : public AJunoBuildingActor	
	{
	public:
		UJunoInventoryComponent* InventoryComponent; // 0xCA8(0x8)
		UFortWeaponItemDefinition* PowerItemDef; // 0xCB0(0x8)
		UJunoPowerManagerComponent* PowerManager; // 0xCB8(0x8)
		FGuid CurrentPowerItemGUID; // 0xCC0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0xCD0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoPowerSystemRuntime.JunoPowerCenter");
			return ret;
		}

		void HandleInventoryChanged(TArray<UFortItem*>& AddedItems, TArray<UFortItem*>& RemovedItems); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D28FD0(relative to base address)
		float GetPowerConsumptionAmount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28E80(relative to base address)
		float GetPowerCapacityPercent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28E30(relative to base address)
		float GetMaxPowerCapacity(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28DB0(relative to base address)
		FGuid GetCurrentPowerItemGUID(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28D94(relative to base address)
		float GetCurrentPowerCapacity(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28CD0(relative to base address)
		float GetAggregateEngineEffort(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28C28(relative to base address)
		void ClearEngineEffort(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D28BE8(relative to base address)
	};


	// Class JunoPowerSystemRuntime.JunoPowerConsumerComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UJunoPowerConsumerComponent : public UGameFrameworkComponent	
	{
	public:
		FScalableFloat PowerRequired; // 0xA0(0x28)
		FScalableFloat ConsumptionInterval; // 0xC8(0x28)
		FGameplayTagContainer ConsumerChannelTags; // 0xF0(0x20)
		UJunoPowerManagerComponent* PowerManager; // 0x110(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent");
			return ret;
		}

		void RemovePowerChannel(FGameplayTag Channel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D29404(relative to base address)
		void RegisterPowerConsumer(FGameplayTagContainer Channels); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D292B8(relative to base address)
		void OnDetached(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D29228(relative to base address)
		void OnAttached(FGraphIslandHandle& IslandHandle); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751D29188(relative to base address)
		void IncreaseEngineEffortAggregate(float Amount); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D29108(relative to base address)
		bool HasPower(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D290E4(relative to base address)
		bool ConsumePower(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D28C04(relative to base address)
		void AddPowerChannel(FGameplayTag Channel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D28AD8(relative to base address)
	};


	// Class JunoPowerSystemRuntime.JunoPowerManagerComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UJunoPowerManagerComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStartConsumingPowerEvent; // 0xB8(0x10)
		FMulticastInlineDelegate OnStopConsumingPowerEvent; // 0xC8(0x10)
		TArray<TWeakObjectPtr> AttachedPowerCenters; // 0xD8(0x10)
		TArray<TWeakObjectPtr> AttachedPowerBanks; // 0xE8(0x10)
		TArray<FConsumerChannelPowerInfo> ConsumerChannelPowers; // 0xF8(0x10)
		TWeakObjectPtr<AJunoPowerCenter*> CurrentPowerCenter; // 0x108(0x8)
		bool bIsConsumingPower; // 0x110(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x111(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoPowerSystemRuntime.JunoPowerManagerComponent");
			return ret;
		}

		void OnStopConsumingPower__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartConsumingPower__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_IsConsumingPower(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D29250(relative to base address)
		void OnRep_AttachedPowerCenters(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D2923C(relative to base address)
		int32_t GetRemainingPowerItemsCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28E98(relative to base address)
		AJunoPowerCenter GetPowerCenterInUse(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28E58(relative to base address)
		int32_t GetMaxPowerItemsCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28E18(relative to base address)
		float GetMaxPowerItemDurability(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28DF0(relative to base address)
		float GetMaxPowerCapacity(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28DD8(relative to base address)
		float GetCurrentPowerItemDurability(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28D6C(relative to base address)
		UFortWorldItem GetCurrentPowerItem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28D48(relative to base address)
		float GetCurrentPowerCapacityPercent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28D20(relative to base address)
		float GetCurrentPowerCapacity(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28CF8(relative to base address)
		TArray GetAttachedPowerConsumerInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D28C58(relative to base address)
	};


	// Class JunoPowerSystemRuntime.JunoPowerSystemLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPowerSystemLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoPowerSystemRuntime.JunoPowerSystemLibrary");
			return ret;
		}
	};

}
