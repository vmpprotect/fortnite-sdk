#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioLinkEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioLinkEngine.AudioLinkBlueprintInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioLinkBlueprintInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioLinkEngine.AudioLinkBlueprintInterface");
			return ret;
		}

		void StopLink(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF748E753C0(relative to base address)
		void SetLinkSound(USoundBase* NewSound); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DE2BC(relative to base address)
		void PlayLink(float StartTime); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DE238(relative to base address)
		bool IsLinkPlaying(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748F0C694(relative to base address)
	};

}
