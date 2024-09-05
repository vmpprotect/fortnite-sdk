#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayEventRouter
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameplayEventRouter.AsyncAction_StartListeningToEvent
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UAsyncAction_StartListeningToEvent : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnEventReceived; // 0x30(0x10)
		unsigned char UnknownData01_7[0x78]; // 0x40(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayEventRouter.AsyncAction_StartListeningToEvent");
			return ret;
		}

		void StopListeningToEvent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145934F8
		UAsyncAction_StartListeningToEvent StartListeningToEventBackwardCompatible(UObject WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent Target, UScriptStruct EventType, UObject Context, EEventBubblingRule EventBubblingRule); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414593418
		UAsyncAction_StartListeningToEvent StartListeningToEvent(UObject WorldContextObject, UGameplayEventRouterComponent Target, UScriptStruct EventType, UObject Context, EEventBubblingRule EventBubblingRule); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414593338
		bool GetPayload(int32_t& OutPayload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414593258
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
		unsigned char UnknownData01_7[0x78]; // 0x60(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent");
			return ret;
		}

		void StopListeningToStatefulEvent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414593878
		UAsyncAction_StartListeningToStatefulEvent StartListeningToStatefulEventBackwardsCompatible(UObject WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent Target, UScriptStruct EventType, UObject Context, EEventBubblingRule EventBubblingRule); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414593798
		UAsyncAction_StartListeningToStatefulEvent StartListeningToStatefulEvent(UObject WorldContextObject, UGameplayEventRouterComponent Target, UScriptStruct EventType, UObject Context, EEventBubblingRule EventBubblingRule); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145936B8
		bool GetPayload(int32_t& OutPayload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145935D8
	};


	// Class GameplayEventRouter.GameplayEventRouterComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x238 (0x2D8 - 0xA0)
	class UGameplayEventRouterComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x238]; // 0xA0(0x238) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayEventRouter.GameplayEventRouterComponent");
			return ret;
		}

		void StopListeningToEvent(FGameplayEventListenerHandle& HandleToRemove); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414593DB8
		bool K2_BroadcastStatefulEvent(int32_t& EventData, UObject EventContext); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414593CD8
		bool K2_BroadcastEvent(int32_t& EventData, UObject EventContext); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414593BF8
		bool HasValidEventState(UScriptStruct EventType, UObject Context); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414593B18
		void ClearEventStateByContext(UScriptStruct EventType, UObject Context); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414593A38
		void ClearEventState(UScriptStruct EventType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414593958
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

		UClass GetEventRouterClass(); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF414593E98
	};


	// Class GameplayEventRouter.GameplayEventRouterSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x168 (0x198 - 0x30)
	class UGameplayEventRouterSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x158]; // 0x30(0x158) UNKNOWN PROPERTY
		TArray PendingGlobalRouterListenerDatas; // 0x188(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayEventRouter.GameplayEventRouterSubsystem");
			return ret;
		}

		bool K2_BroadcastStatefulEventBackwardCompatible(UObject WorldContextObject, UGameplayEventRouterComponent Target, FEventMessageTag Channel, int32_t& EventData, UObject EventContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145943D8
		bool K2_BroadcastEventBackwardCompatible(UObject WorldContextObject, UGameplayEventRouterComponent Target, FEventMessageTag Channel, int32_t& EventData, UObject EventContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145942F8
		UGameplayEventRouterComponent GetGlobalEventRouter(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414594218
		UGameplayEventRouterComponent GetEventRouter(UClass Scope, AActor ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414594138
		void ClearEventStateByContextBackwardCompatible(UObject WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent Target, UScriptStruct EventType, UObject Context); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414594058
		void ClearEventStateBackwardCompatible(UObject WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent Target, UScriptStruct EventType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414593F78
	};

}
