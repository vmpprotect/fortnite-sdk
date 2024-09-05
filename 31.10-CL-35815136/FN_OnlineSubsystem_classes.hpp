#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OnlineSubsystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class OnlineSubsystem.NamedInterfaces
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UNamedInterfaces : public UObject	
	{
	public:
		TArray<FNamedInterface> NamedInterfaces; // 0x28(0x10)
		TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x48(0x18) UNKNOWN PROPERTY

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

		void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMatchEnded(FString Match); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
