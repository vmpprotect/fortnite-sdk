#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayMessages
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UAsyncAction_RegisterGameplayMessageReceiver : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnMessageReceived; // 0x30(0x10)
		FMulticastInlineDelegate HandleSavedState; // 0x40(0x10)
		FMulticastInlineDelegate HandleStateCleared; // 0x50(0x10)
		unsigned char UnknownData00_7[0x38]; // 0x60(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver");
			return ret;
		}

		void Unregister(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494B08D8(relative to base address)
		UAsyncAction_RegisterGameplayMessageReceiver RegisterGameplayMessageReceiver(UObject* WorldContextObject, FEventMessageTag Channel, UScriptStruct* PayloadType, EGameplayMessageMatchType MatchType, AActor* ActorContext); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CCDCFB0(relative to base address)
		bool GetPayload(int32_t& OutPayload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCDC6D0(relative to base address)
	};


	// Class GameplayMessages.GameplayMessageReplicator
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AGameplayMessageReplicator : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayMessages.GameplayMessageReplicator");
			return ret;
		}

		void Multicast_ServerMessageTriggered(FEventMessageTag Channel, FReplicatedMessage MessageData); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74CCDCD54(relative to base address)
	};


	// Class GameplayMessages.GameplayMessageRouter
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0xA8 (0xD8 - 0x30)
	class UGameplayMessageRouter : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0xA0]; // 0x30(0xA0) UNKNOWN PROPERTY
		AGameplayMessageReplicator* MessageReplicator; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayMessages.GameplayMessageRouter");
			return ret;
		}

		void K2_BroadcastMessage(FEventMessageTag Channel, int32_t& Message, bool bSaveToChannel, AActor* ActorContext); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCDC9C4(relative to base address)
		bool HasValidSavedMessage(FEventMessageTag Channel); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CCDC854(relative to base address)
		void ClearSavedMessage(FEventMessageTag Channel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74CCDC4B8(relative to base address)
	};


	// Class GameplayMessages.BlueprintEventMessageTagLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlueprintEventMessageTagLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayMessages.BlueprintEventMessageTagLibrary");
			return ret;
		}

		FEventMessageTag GetEventMessageTagFromGameplayTag(FGameplayTag InTag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CCDC5C8(relative to base address)
	};

}
