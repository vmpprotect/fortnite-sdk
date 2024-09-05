#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ModularGameplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_1[0x208]; // 0x30(0x208) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ModularGameplay.GameFrameworkComponentManager");
			return ret;
		}

		bool UnregisterClassInitStateDelegate(TWeakObjectPtr ActorClass, FDelegateProperty DelegateToRemove); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145919D8
		bool UnregisterActorInitStateDelegate(AActor Actor, FDelegateProperty DelegateToRemove); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145918F8
		void SendExtensionEvent(AActor Receiver, FName EventName, bool bOnlyInGameWorlds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414591818
		void RemoveReceiver(AActor Receiver); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414591738
		bool RegisterAndCallForClassInitState(TWeakObjectPtr ActorClass, FName FeatureName, FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414591658
		bool RegisterAndCallForActorInitState(AActor Actor, FName FeatureName, FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414591578
		void AddReceiver(AActor Receiver, bool bAddOnlyInGameWorlds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414591498
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

		bool UnregisterInitStateDelegate(FDelegateProperty Delegate); // Flags: Native|Public|BlueprintCallable 0x7FF414591E38
		bool RegisterAndCallForInitStateChange(FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // Flags: Native|Public|BlueprintCallable 0x7FF414591D58
		bool HasReachedInitState(FGameplayTag DesiredState); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414591C78
		FGameplayTag GetInitState(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414591B98
		FName GetFeatureName(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414591AB8
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
