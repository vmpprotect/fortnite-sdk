#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Conversation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Conversation/NonPlayerConversationComponent.NonPlayerConversationComponent_C
	// Inherited from UFortNonPlayerConversationParticipantComponent -> UConversationParticipantComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x5E8 - 0x5E8)
	class UNonPlayerConversationComponent_C : public UFortNonPlayerConversationParticipantComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Conversation/NonPlayerConversationComponent.NonPlayerConversationComponent_C");
			return ret;
		}

		void UpdateMaxConvesrationNameVar(FString Name); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateLocationVars(FVector UI Relative Location); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateNameVars(FString Name); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetUIVariables(bool Show Indicator Bubble, double Indicator Bubble Range, bool Show Conversation Text, bool Show Name In  Range, FString Name, FVector UI Relative Location, TWeakObjectPtr<UTexture2D*> IconTexture., FString MaxConversationName, FSlateColor MaxConversationTextColor, TWeakObjectPtr<UTexture2D*> Creative Conversation Max Marker Indicator Soft Icon); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortniteConversation/Conversation/FortPlayerConversationComponent.FortPlayerConversationComponent_C
	// Inherited from UFortPlayerConversationComponent -> UFortConversationParticipantComponent -> UConversationParticipantComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x3D8 - 0x3D8)
	class UFortPlayerConversationComponent_C : public UFortPlayerConversationComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortniteConversation/Conversation/FortPlayerConversationComponent.FortPlayerConversationComponent_C");
			return ret;
		}
	};

}
