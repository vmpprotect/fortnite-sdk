#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteConversationRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortniteConversationRuntime.FortConversationEnterEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FFortConversationEnterEvent	
	{
	public:
		APlayerController* PlayerController; // 0x0(0x8)
	};


	// Struct FortniteConversationRuntime.FortConversationLeaveEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FFortConversationLeaveEvent	
	{
	public:
		APlayerController* PlayerController; // 0x0(0x8)
	};


	// Struct FortniteConversationRuntime.FortConversation_Spectator_EnterConversation
	// Size: 0x1 (0x1 - 0x0)
	struct FFortConversation_Spectator_EnterConversation	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct FortniteConversationRuntime.FortConversation_Spectator_LeaveConversation
	// Size: 0x1 (0x1 - 0x0)
	struct FFortConversation_Spectator_LeaveConversation	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct FortniteConversationRuntime.FortConversation_SetDialogMarkerClassEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FFortConversation_SetDialogMarkerClassEvent	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct FortniteConversationRuntime.NPCConversationIndicatorMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FNPCConversationIndicatorMessage	
	{
	public:
		UFortNonPlayerConversationParticipantComponent* NPCConversationComponent; // 0x0(0x8)
	};


	// Struct FortniteConversationRuntime.FortConversation_NPC_AddIndicator
	// Inherited from FNPCConversationIndicatorMessage
	// Size: 0x0 (0x8 - 0x8)
	struct FFortConversation_NPC_AddIndicator : public FNPCConversationIndicatorMessage	
	{
	public:
	};


	// Struct FortniteConversationRuntime.FortConversation_NPC_RemoveIndicator
	// Inherited from FNPCConversationIndicatorMessage
	// Size: 0x0 (0x8 - 0x8)
	struct FFortConversation_NPC_RemoveIndicator : public FNPCConversationIndicatorMessage	
	{
	public:
	};


	// Struct FortniteConversationRuntime.ConversationSettingDialogMarkerData
	// Size: 0x20 (0x20 - 0x0)
	struct FConversationSettingDialogMarkerData	
	{
	public:
		TWeakObjectPtr<UClass*> DialogMarkerSoftClass; // 0x0(0x20)
	};


	// Struct FortniteConversationRuntime.FortConversationConditionalMessage
	// Size: 0x18 (0x18 - 0x0)
	struct FFortConversationConditionalMessage	
	{
	public:
		UFortConversationContextCondition* Condition; // 0x0(0x8)
		FText Message; // 0x8(0x10)
	};


	// Struct FortniteConversationRuntime.FortConversationNodeConditionalMessages
	// Size: 0x10 (0x10 - 0x0)
	struct FFortConversationNodeConditionalMessages	
	{
	public:
		TArray<FFortConversationConditionalMessage> Messages; // 0x0(0x10)
	};

}
