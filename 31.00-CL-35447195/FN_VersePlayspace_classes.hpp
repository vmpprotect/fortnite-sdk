#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VersePlayspace
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VersePlayspace.EntityPlayspaceRegistry
	// Inherited from UEntityPlayspaceRegistryBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEntityPlayspaceRegistry : public UEntityPlayspaceRegistryBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VersePlayspace.EntityPlayspaceRegistry");
			return ret;
		}
	};


	// Class VersePlayspace.PlayspaceComponentVerseWrapper
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UPlayspaceComponentVerseWrapper : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VersePlayspace.PlayspaceComponentVerseWrapper");
			return ret;
		}
	};


	// Class VersePlayspace.PlayspaceConfigComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UPlayspaceConfigComponent : public UPlayspaceComponent	
	{
	public:
		UClass PlayerComponentClass; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VersePlayspace.PlayspaceConfigComponent");
			return ret;
		}
	};

}
