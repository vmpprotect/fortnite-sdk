#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortniteConversationRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FortniteConversationRuntime.FortConversationGetGraphInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationGetGraphInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationGetGraphInterface");
			return ret;
		}

		UConversationDatabase GetConversationGraph(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414BC6B98
	};


	// Class FortniteConversationRuntime.FortConversationMarkerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationMarkerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationMarkerInterface");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationParticipantComponent
	// Inherited from UConversationParticipantComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x190 - 0x190)
	class UFortConversationParticipantComponent : public UConversationParticipantComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationParticipantComponent");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationContextCondition : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition");
			return ret;
		}

		bool DoesContextPass(FConversationContext& Context); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC6C78
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
	// Inherited from UFortConversationContextCondition -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFortConversationContextCondition_ParticipantHasCID : public UFortConversationContextCondition	
	{
	public:
		FGameplayTag ParticipantID; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray AllowedCIDs; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
	// Inherited from UFortConversationContextCondition -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortConversationContextCondition_ParticipantHasMetaTag : public UFortConversationContextCondition	
	{
	public:
		FGameplayTag ParticipantID; // 0x28(0x4)
		FGameplayTag MetaTag; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
	// Inherited from UFortConversationContextCondition -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortConversationContextCondition_ParticipantHasOwnedTag : public UFortConversationContextCondition	
	{
	public:
		FGameplayTag ParticipantID; // 0x28(0x4)
		FGameplayTag OwnedTag; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
	// Inherited from UFortConversationContextCondition -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortConversationContextCondition_ParticipantControllerMeetsRequirement : public UFortConversationContextCondition	
	{
	public:
		FGameplayTag ParticipantID; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UFortControllerRequirement Requirement; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortConversationContextConditionHelpers
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationContextConditionHelpers : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationContextConditionHelpers");
			return ret;
		}

		bool GetMessageForContext(FFortConversationNodeConditionalMessages& Messages, FConversationContext& Context, FText& OutText); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414BC6D58
	};


	// Class FortniteConversationRuntime.FortConversationParamLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortConversationParamLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortConversationParamLibrary");
			return ret;
		}

		bool ExtractConversationParameterValue(TArray& ConversationParameters, FString DesiredParameterName, FString& ParameterValueOut); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BC6E38
	};


	// Class FortniteConversationRuntime.FortniteConversationGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortniteConversationGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortniteConversationGlobals");
			return ret;
		}
	};


	// Class FortniteConversationRuntime.FortPlayerConversationComponent
	// Inherited from UFortConversationParticipantComponent -> UConversationParticipantComponent -> UActorComponent -> UObject
	// Size: 0x248 (0x3D8 - 0x190)
	class UFortPlayerConversationComponent : public UFortConversationParticipantComponent	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x190(0x8) UNKNOWN PROPERTY
		TArray ConversationParticipantsInRange; // 0x198(0x10)
		float GreetSphereRadius; // 0x1A8(0x4)
		float IconVisibilityRadius; // 0x1AC(0x4)
		float AbortConversationRange; // 0x1B0(0x4)
		FGameplayTag RidingOnActorTag; // 0x1B4(0x4)
		float RidingOnActorRangeMultiplierSquared; // 0x1B8(0x4)
		unsigned char UnknownData05_6[0x3C]; // 0x1BC(0x3C) UNKNOWN PROPERTY
		TSet IndicatedNPCConversationComponents; // 0x1F8(0x50)
		unsigned char UnknownData06_6[0x8]; // 0x248(0x8) UNKNOWN PROPERTY
		bool bMoveShouldAbortConversation; // 0x250(0x1)
		bool bCachedDefaultMoveShouldAbortConverationValue; // 0x251(0x1)
		unsigned char UnknownData07_6[0x11E]; // 0x252(0x11E) UNKNOWN PROPERTY
		FClientConversationMessagePayload LastSanitizationMessage; // 0x370(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationRuntime.FortPlayerConversationComponent");
			return ret;
		}

		void RequestServerAbortConversationWithParticipant(UFortNonPlayerConversationParticipantComponent Participant); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414BC7B58
		void RequestServerAbortConversation(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414BC7A78
		void OnRootPlayspaceSet(APlayspace RootPlayspace); // Flags: Final|Native|Protected 0x7FF414BC7998
		void OnMinigameReady(AFortMinigame InMinigame); // Flags: Final|Native|Protected 0x7FF414BC78B8
		void OnMinigameEnded(); // Flags: Final|Native|Protected 0x7FF414BC77D8
		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414BC76F8
		void HandleViewTargetChanged(); // Flags: Final|Native|Private 0x7FF414BC7618
		void HandlePossessedPawnChangedWhileRefreshTriggersBound(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Private 0x7FF414BC7538
		void HandleFollowedPlayerChanged(AFortPlayerControllerSpectating SpectatingPC, AFortPlayerState FollowedPlayerState); // Flags: Final|Native|Private 0x7FF414BC7458
		void HandleDBNOChanged(AFortPawn Pawn, bool bIsDBNO); // Flags: Final|Native|Private 0x7FF414BC7378
		void ClientSpectatorOpenUI(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414BC7298
		void ClientSpectatorLeaveConversationState(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414BC71B8
		void ClientSpectatorEnterConversationState(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414BC70D8
		void ClientSpectatorCloseUI(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414BC6FF8
		void ClientReceiveConversationGiftUINotification(FGiftUINotificationInfo ConversationGiftUINotification); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414BC6F18
	};

}
