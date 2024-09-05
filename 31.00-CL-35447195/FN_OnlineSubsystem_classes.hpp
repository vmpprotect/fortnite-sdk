#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OnlineSubsystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class OnlineSubsystem.NamedInterfaces
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UNamedInterfaces : public UObject	
	{
	public:
		TArray NamedInterfaces; // 0x28(0x10)
		TArray NamedInterfaceDefs; // 0x38(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x48(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystem.NamedInterfaces");
			return ret;
		}
	};


	// Class OnlineSubsystem.TurnBasedMatchInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTurnBasedMatchInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystem.TurnBasedMatchInterface");
			return ret;
		}

		void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive); // Flags: Event|Public|BlueprintEvent 0x7FF41458E2B8
		void OnMatchEnded(FString Match); // Flags: Event|Public|BlueprintEvent 0x7FF41458E1D8
	};

}
