#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayMessages
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_7[0x38]; // 0x60(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver");
			return ret;
		}

		void Unregister(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414592D18
		UAsyncAction_RegisterGameplayMessageReceiver RegisterGameplayMessageReceiver(UObject WorldContextObject, FEventMessageTag Channel, UScriptStruct PayloadType, EGameplayMessageMatchType MatchType, AActor ActorContext); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414592C38
		bool GetPayload(int32_t& OutPayload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414592B58
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

		void Multicast_ServerMessageTriggered(FEventMessageTag Channel, FReplicatedMessage MessageData); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414592DF8
	};


	// Class GameplayMessages.GameplayMessageRouter
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0xA8 (0xD8 - 0x30)
	class UGameplayMessageRouter : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData01_3[0xA0]; // 0x30(0xA0) UNKNOWN PROPERTY
		AGameplayMessageReplicator MessageReplicator; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayMessages.GameplayMessageRouter");
			return ret;
		}

		void K2_BroadcastMessage(FEventMessageTag Channel, int32_t& Message, bool bSaveToChannel, AActor ActorContext); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414593098
		bool HasValidSavedMessage(FEventMessageTag Channel); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414592FB8
		void ClearSavedMessage(FEventMessageTag Channel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414592ED8
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

		FEventMessageTag GetEventMessageTagFromGameplayTag(FGameplayTag InTag); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414593178
	};

}
