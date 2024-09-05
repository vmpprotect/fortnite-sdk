#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayEventRouter
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayEventRouter.AsyncAction_StartListeningToEvent
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UAsyncAction_StartListeningToEvent : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnEventReceived; // 0x30(0x10)
		unsigned char UnknownData00_7[0x78]; // 0x40(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayEventRouter.AsyncAction_StartListeningToEvent");
			return ret;
		}

		void StopListeningToEvent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494B08D8(relative to base address)
		UAsyncAction_StartListeningToEvent StartListeningToEventBackwardCompatible(UObject* WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent* Target, UScriptStruct* EventType, UObject* Context, EEventBubblingRule EventBubblingRule); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CCE2040(relative to base address)
		UAsyncAction_StartListeningToEvent StartListeningToEvent(UObject* WorldContextObject, UGameplayEventRouterComponent* Target, UScriptStruct* EventType, UObject* Context, EEventBubblingRule EventBubblingRule); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF748EDF9A0(relative to base address)
		bool GetPayload(int32_t& OutPayload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7493AB224(relative to base address)
	};


	// Class GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0xA8 (0xD8 - 0x30)
	class UAsyncAction_StartListeningToStatefulEvent : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnEventReceived; // 0x30(0x10)
		FMulticastInlineDelegate OnSavedEventStateExists; // 0x40(0x10)
		FMulticastInlineDelegate OnEventStateCleared; // 0x50(0x10)
		unsigned char UnknownData00_7[0x78]; // 0x60(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent");
			return ret;
		}

		void StopListeningToStatefulEvent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494B08D8(relative to base address)
		UAsyncAction_StartListeningToStatefulEvent StartListeningToStatefulEventBackwardsCompatible(UObject* WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent* Target, UScriptStruct* EventType, UObject* Context, EEventBubblingRule EventBubblingRule); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CCE2488(relative to base address)
		UAsyncAction_StartListeningToStatefulEvent StartListeningToStatefulEvent(UObject* WorldContextObject, UGameplayEventRouterComponent* Target, UScriptStruct* EventType, UObject* Context, EEventBubblingRule EventBubblingRule); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF748EDFBF8(relative to base address)
		bool GetPayload(int32_t& OutPayload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748F649C8(relative to base address)
	};


	// Class GameplayEventRouter.GameplayEventRouterComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x238 (0x2D8 - 0xA0)
	class UGameplayEventRouterComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x238]; // 0xA0(0x238) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayEventRouter.GameplayEventRouterComponent");
			return ret;
		}

		void StopListeningToEvent(FGameplayEventListenerHandle& HandleToRemove); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCE28D0(relative to base address)
		bool K2_BroadcastStatefulEvent(int32_t& EventData, UObject* EventContext); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCE19F4(relative to base address)
		bool K2_BroadcastEvent(int32_t& EventData, UObject* EventContext); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCE13A8(relative to base address)
		bool HasValidEventState(UScriptStruct* EventType, UObject* Context); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CCE117C(relative to base address)
		void ClearEventStateByContext(UScriptStruct* EventType, UObject* Context); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCE0D48(relative to base address)
		void ClearEventState(UScriptStruct* EventType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCE099C(relative to base address)
	};


	// Class GameplayEventRouter.GameplayEventRouterOwnerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayEventRouterOwnerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayEventRouter.GameplayEventRouterOwnerInterface");
			return ret;
		}

		UClass GetEventRouterClass(); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF74969A7D0(relative to base address)
	};


	// Class GameplayEventRouter.GameplayEventRouterSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x168 (0x198 - 0x30)
	class UGameplayEventRouterSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x158]; // 0x30(0x158) UNKNOWN PROPERTY
		TArray<FGameplayEventGlobalRouterPendingListenerData> PendingGlobalRouterListenerDatas; // 0x188(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayEventRouter.GameplayEventRouterSubsystem");
			return ret;
		}

		bool K2_BroadcastStatefulEventBackwardCompatible(UObject* WorldContextObject, UGameplayEventRouterComponent* Target, FEventMessageTag Channel, int32_t& EventData, UObject* EventContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCE1C1C(relative to base address)
		bool K2_BroadcastEventBackwardCompatible(UObject* WorldContextObject, UGameplayEventRouterComponent* Target, FEventMessageTag Channel, int32_t& EventData, UObject* EventContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCE15D0(relative to base address)
		UGameplayEventRouterComponent GetGlobalEventRouter(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF749417018(relative to base address)
		UGameplayEventRouterComponent GetEventRouter(UClass* Scope, AActor* ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74953E65C(relative to base address)
		void ClearEventStateByContextBackwardCompatible(UObject* WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent* Target, UScriptStruct* EventType, UObject* Context); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CCE0E0C(relative to base address)
		void ClearEventStateBackwardCompatible(UObject* WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent* Target, UScriptStruct* EventType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CCE0A94(relative to base address)
	};

}
