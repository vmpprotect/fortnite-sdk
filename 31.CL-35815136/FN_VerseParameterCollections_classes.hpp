#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseParameterCollections
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseParameterCollections.VerseParameterCollection
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UVerseParameterCollection : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

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
		TArray<FVerseParameterCollectionSubsystemEntry> ParameterCollections; // 0x30(0x10)

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
		unsigned char UnknownData00_1[0x8]; // 0x290(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseParameterCollections.VerseParameterCollectionReplication");
			return ret;
		}
	};

}
