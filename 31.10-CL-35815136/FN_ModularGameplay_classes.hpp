#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ModularGameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ModularGameplay.GameFrameworkComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UGameFrameworkComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModularGameplay.GameFrameworkComponent");
			return ret;
		}
	};


	// Class ModularGameplay.PlayerStateComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPlayerStateComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModularGameplay.PlayerStateComponent");
			return ret;
		}
	};


	// Class ModularGameplay.ControllerComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UControllerComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModularGameplay.ControllerComponent");
			return ret;
		}
	};


	// Class ModularGameplay.GameFrameworkComponentManager
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x208 (0x238 - 0x30)
	class UGameFrameworkComponentManager : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x208]; // 0x30(0x208) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModularGameplay.GameFrameworkComponentManager");
			return ret;
		}

		bool UnregisterClassInitStateDelegate(TWeakObjectPtr<UClass*> ActorClass, FDelegateProperty DelegateToRemove); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCB9618(relative to base address)
		bool UnregisterActorInitStateDelegate(AActor* Actor, FDelegateProperty DelegateToRemove); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCB9430(relative to base address)
		void SendExtensionEvent(AActor* Receiver, FName EventName, bool bOnlyInGameWorlds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCB92F8(relative to base address)
		void RemoveReceiver(AActor* Receiver); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCB927C(relative to base address)
		bool RegisterAndCallForClassInitState(TWeakObjectPtr<UClass*> ActorClass, FName FeatureName, FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCB8C20(relative to base address)
		bool RegisterAndCallForActorInitState(AActor* Actor, FName FeatureName, FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCB883C(relative to base address)
		void AddReceiver(AActor* Receiver, bool bAddOnlyInGameWorlds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCB85D4(relative to base address)
	};


	// Class ModularGameplay.GameFrameworkInitStateInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameFrameworkInitStateInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModularGameplay.GameFrameworkInitStateInterface");
			return ret;
		}

		bool UnregisterInitStateDelegate(FDelegateProperty Delegate); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCB976C(relative to base address)
		bool RegisterAndCallForInitStateChange(FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCB8FC4(relative to base address)
		bool HasReachedInitState(FGameplayTag DesiredState); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CCB871C(relative to base address)
		FGameplayTag GetInitState(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CCB86F0(relative to base address)
		FName GetFeatureName(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CCB86C4(relative to base address)
	};


	// Class ModularGameplay.GameStateComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UGameStateComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModularGameplay.GameStateComponent");
			return ret;
		}
	};


	// Class ModularGameplay.PawnComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPawnComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModularGameplay.PawnComponent");
			return ret;
		}
	};

}
