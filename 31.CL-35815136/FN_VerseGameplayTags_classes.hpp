#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseGameplayTags
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseGameplayTags.EntityTagContainerComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x18 (0x70 - 0x58)
	class UEntityTagContainerComponent : public UEntityComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FVerseGameplayTagContainer InternalTags; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseGameplayTags.EntityTagContainerComponent");
			return ret;
		}
	};


	// Class VerseGameplayTags.VerseGameplayTagBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseGameplayTagBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseGameplayTags.VerseGameplayTagBase");
			return ret;
		}
	};


	// Class VerseGameplayTags.TaggedObjectQueryWorldSubsystemBase
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UTaggedObjectQueryWorldSubsystemBase : public UWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseGameplayTags.TaggedObjectQueryWorldSubsystemBase");
			return ret;
		}
	};


	// Class VerseGameplayTags.TagRegistrationHandler
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UTagRegistrationHandler : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x28(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseGameplayTags.TagRegistrationHandler");
			return ret;
		}
	};


	// Class VerseGameplayTags.VerseGameplayTagContainerBase
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UVerseGameplayTagContainerBase : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseGameplayTags.VerseGameplayTagContainerBase");
			return ret;
		}
	};


	// Class VerseGameplayTags.VerseGameplayTagAssetInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseGameplayTagAssetInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseGameplayTags.VerseGameplayTagAssetInterface");
			return ret;
		}

		bool HasMatchingGameplayTag(FVerseGameplayTag TagToCheck); // Flags: Native|Public|Const, Memory Exec: 0x7FF74D7278B8(relative to base address)
		bool HasAnyMatchingGameplayTags(FVerseGameplayTagContainer& TagContainer); // Flags: Native|Public|HasOutParms|Const, Memory Exec: 0x7FF74D72780C(relative to base address)
		bool HasAllMatchingGameplayTags(FVerseGameplayTagContainer& TagContainer); // Flags: Native|Public|HasOutParms|Const, Memory Exec: 0x7FF74D727760(relative to base address)
		void GetOwnedGameplayTags(FVerseGameplayTagContainer& TagContainer); // Flags: Native|Public|HasOutParms|Const, Memory Exec: 0x7FF74D7276C0(relative to base address)
	};


	// Class VerseGameplayTags.VerseTagMarkupComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UVerseTagMarkupComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FVerseGameplayTagContainer InternalTags; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseGameplayTags.VerseTagMarkupComponent");
			return ret;
		}
	};

}
