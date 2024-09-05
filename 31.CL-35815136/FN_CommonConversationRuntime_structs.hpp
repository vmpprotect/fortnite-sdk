#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommonConversationRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CommonConversationRuntime.ClientConversationMessagePayload
	// Size: 0x68 (0x68 - 0x0)
	struct FClientConversationMessagePayload	
	{
	public:
		FClientConversationMessage Message; // 0x0(0x38)
		FConversationParticipants Participants; // 0x38(0x10)
		FConversationNodeHandle CurrentNode; // 0x48(0x10)
		TArray<FClientConversationOptionEntry> Options; // 0x58(0x10)
	};


	// Struct CommonConversationRuntime.ClientConversationOptionEntry
	// Size: 0x68 (0x68 - 0x0)
	struct FClientConversationOptionEntry	
	{
	public:
		FText ChoiceText; // 0x0(0x10)
		FGameplayTagContainer ChoiceTags; // 0x10(0x20)
		EConversationChoiceType ChoiceType; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FConversationChoiceReference ChoiceReference; // 0x38(0x20)
		TArray<FConversationNodeParameterPair> ExtraData; // 0x58(0x10)
	};


	// Struct CommonConversationRuntime.ConversationNodeParameterPair
	// Size: 0x20 (0x20 - 0x0)
	struct FConversationNodeParameterPair	
	{
	public:
		FString Name; // 0x0(0x10)
		FString Value; // 0x10(0x10)
	};


	// Struct CommonConversationRuntime.ConversationChoiceReference
	// Size: 0x20 (0x20 - 0x0)
	struct FConversationChoiceReference	
	{
	public:
		FConversationNodeHandle NodeReference; // 0x0(0x10)
		TArray<FConversationNodeParameterPair> NodeParameters; // 0x10(0x10)
	};


	// Struct CommonConversationRuntime.ConversationNodeHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FConversationNodeHandle	
	{
	public:
		FGuid NodeGUID; // 0x0(0x10)
	};


	// Struct CommonConversationRuntime.ConversationParticipants
	// Size: 0x10 (0x10 - 0x0)
	struct FConversationParticipants	
	{
	public:
		TArray<FConversationParticipantEntry> List; // 0x0(0x10)
	};


	// Struct CommonConversationRuntime.ConversationParticipantEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FConversationParticipantEntry	
	{
	public:
		AActor* Actor; // 0x0(0x8)
		FGameplayTag ParticipantID; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct CommonConversationRuntime.ClientConversationMessage
	// Size: 0x38 (0x38 - 0x0)
	struct FClientConversationMessage	
	{
	public:
		FGameplayTag SpeakerID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText ParticipantDisplayName; // 0x8(0x10)
		FText Text; // 0x18(0x10)
		TArray<FConversationNodeParameterPair> MetadataParameters; // 0x28(0x10)
	};


	// Struct CommonConversationRuntime.ConversationTaskResult
	// Size: 0x70 (0x70 - 0x0)
	struct FConversationTaskResult	
	{
	public:
		EConversationTaskResultType Type; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FAdvanceConversationRequest AdvanceToChoice; // 0x8(0x30)
		FClientConversationMessage Message; // 0x38(0x38)
	};


	// Struct CommonConversationRuntime.AdvanceConversationRequest
	// Size: 0x30 (0x30 - 0x0)
	struct FAdvanceConversationRequest	
	{
	public:
		FConversationChoiceReference Choice; // 0x0(0x20)
		TArray<FConversationNodeParameterPair> UserParameters; // 0x20(0x10)
	};


	// Struct CommonConversationRuntime.ConversationContext
	// Size: 0x38 (0x38 - 0x0)
	struct FConversationContext	
	{
	public:
		UConversationRegistry* ConversationRegistry; // 0x0(0x8)
		UConversationInstance* ActiveConversation; // 0x8(0x8)
		UConversationParticipantComponent* ClientParticipant; // 0x10(0x8)
		UConversationTaskNode* TaskBeingConsidered; // 0x18(0x8)
		TArray<FConversationNodeHandle> ReturnScopeStack; // 0x20(0x10)
		bool bServer_PRIVATE; // 0x30(0x1)
		bool bClient_PRIVATE; // 0x31(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
	};


	// Struct CommonConversationRuntime.ConversationEntryList
	// Size: 0x18 (0x18 - 0x0)
	struct FConversationEntryList	
	{
	public:
		FGameplayTag EntryTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FGuid> DestinationList; // 0x8(0x10)
	};


	// Struct CommonConversationRuntime.CommonDialogueBankParticipant
	// Size: 0x28 (0x28 - 0x0)
	struct FCommonDialogueBankParticipant	
	{
	public:
		FText FallbackName; // 0x0(0x10)
		FGameplayTag ParticipantName; // 0x10(0x4)
		FLinearColor NodeTint; // 0x14(0x10)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct CommonConversationRuntime.NetSerializeScriptStructCache_ConvVersion
	// Size: 0x60 (0x60 - 0x0)
	struct FNetSerializeScriptStructCache_ConvVersion	
	{
	public:
		TMap<UScriptStruct*, int32_t> ScriptStructsToIndex; // 0x0(0x50)
		TArray<UScriptStruct*> IndexToScriptStructs; // 0x50(0x10)
	};


	// Struct CommonConversationRuntime.ConversationChoiceData
	// Size: 0x8 (0x8 - 0x0)
	struct FConversationChoiceData	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct CommonConversationRuntime.ConversationChoiceDataHandle
	// Size: 0x20 (0x20 - 0x0)
	struct FConversationChoiceDataHandle	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct CommonConversationRuntime.ConversationBranchPoint
	// Size: 0x78 (0x78 - 0x0)
	struct FConversationBranchPoint	
	{
	public:
		TArray<FConversationNodeHandle> ReturnScopeStack; // 0x0(0x10)
		FClientConversationOptionEntry ClientChoice; // 0x10(0x68)
	};

}
