#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FNE_ConversationRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FNE_ConversationRuntime.ConversationEntityProxyActor
	// Inherited from AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class AConversationEntityProxyActor : public AActor	
	{
	public:
		TArray<AController*> ControllersInConversation; // 0x290(0x10)
		USceneComponent* RootSceneComponent; // 0x2A0(0x8)
		UFortNonPlayerConversationParticipantComponent* NonPlayerConversationComponent; // 0x2A8(0x8)
		FLocalizableMessage SpeakerName; // 0x2B0(0x30)
		UObject* CachedConversationEntityComponent; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_ConversationRuntime.ConversationEntityProxyActor");
			return ret;
		}

		void OnServerConversationStarted(AActor* ParticipantActorPlayer, FGameplayTag& ParticipantID); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75191EA38(relative to base address)
		void OnServerConversationEnded(AActor* ParticipantActorPlayer); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnRep_SpeakerName(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75191EA24(relative to base address)
		void OnRep_ControllersInConversation(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75191EA10(relative to base address)
	};


	// Class FNE_ConversationRuntime.FNE_NonPlayerConversationParticipantComponent
	// Inherited from UFortNonPlayerConversationParticipantComponent -> UConversationParticipantComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x5E8 - 0x5E8)
	class UFNE_NonPlayerConversationParticipantComponent : public UFortNonPlayerConversationParticipantComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FNE_ConversationRuntime.FNE_NonPlayerConversationParticipantComponent");
			return ret;
		}
	};

}
