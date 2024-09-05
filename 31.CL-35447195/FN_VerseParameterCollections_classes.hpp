#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseParameterCollections
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseParameterCollections.VerseParameterCollection
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UVerseParameterCollection : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseParameterCollections.VerseParameterCollection");
			return ret;
		}
	};


	// Class VerseParameterCollections.VerseParameterCollectionsSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UVerseParameterCollectionsSubsystem : public UWorldSubsystem	
	{
	public:
		TArray ParameterCollections; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseParameterCollections.VerseParameterCollectionsSubsystem");
			return ret;
		}
	};


	// Class VerseParameterCollections.VerseParameterCollectionReplication
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AVerseParameterCollectionReplication : public AActor	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x290(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseParameterCollections.VerseParameterCollectionReplication");
			return ret;
		}
	};

}
