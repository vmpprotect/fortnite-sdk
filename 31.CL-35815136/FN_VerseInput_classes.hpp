#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseInput
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseInput.VerseInputActionBase
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UVerseInputActionBase : public UObject	
	{
	public:
		FGuid Guid; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseInput.VerseInputActionBase");
			return ret;
		}
	};


	// Class VerseInput.VerseInputTriggerBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseInputTriggerBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseInput.VerseInputTriggerBase");
			return ret;
		}
	};


	// Class VerseInput.VerseInputModifierBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseInputModifierBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseInput.VerseInputModifierBase");
			return ret;
		}
	};


	// Class VerseInput.VerseInputClientActionBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseInputClientActionBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseInput.VerseInputClientActionBase");
			return ret;
		}
	};


	// Class VerseInput.VerseInputWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UVerseInputWorldSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseInput.VerseInputWorldSubsystem");
			return ret;
		}
	};


	// Class VerseInput.VerseReplicatedInputDataComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x130 (0x1D0 - 0xA0)
	class UVerseReplicatedInputDataComponent : public UActorComponent	
	{
	public:
		FVerseInputActionDataList InputActions; // 0xA0(0x120)
		UEnhancedInputComponent* InputComponent; // 0x1C0(0x8)
		UInputMappingContext* CurrentInputMappingContext; // 0x1C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseInput.VerseReplicatedInputDataComponent");
			return ret;
		}

		void ServerInputActionTriggered(FGuid Guid, FVector InputValue); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|Const, Memory Exec: 0x7FF74D73234C(relative to base address)
		void OnInputActionTriggered(FInputActionInstance& ActionInstance); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74D7322A8(relative to base address)
	};

}
