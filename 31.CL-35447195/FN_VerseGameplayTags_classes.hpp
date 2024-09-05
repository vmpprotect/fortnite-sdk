#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseGameplayTags
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseGameplayTags.EntityTagContainerComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x18 (0x70 - 0x58)
	class UEntityTagContainerComponent : public UEntityComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_1[0x40]; // 0x28(0x40) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

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

		bool HasMatchingGameplayTag(FVerseGameplayTag TagToCheck); // Flags: Native|Public|Const 0x7FF414615878
		bool HasAnyMatchingGameplayTags(FVerseGameplayTagContainer& TagContainer); // Flags: Native|Public|HasOutParms|Const 0x7FF414615798
		bool HasAllMatchingGameplayTags(FVerseGameplayTagContainer& TagContainer); // Flags: Native|Public|HasOutParms|Const 0x7FF4146156B8
		void GetOwnedGameplayTags(FVerseGameplayTagContainer& TagContainer); // Flags: Native|Public|HasOutParms|Const 0x7FF4146155D8
	};


	// Class VerseGameplayTags.VerseTagMarkupComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UVerseTagMarkupComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FVerseGameplayTagContainer InternalTags; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseGameplayTags.VerseTagMarkupComponent");
			return ret;
		}
	};

}
