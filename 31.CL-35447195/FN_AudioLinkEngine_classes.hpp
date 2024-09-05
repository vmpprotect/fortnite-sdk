#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioLinkEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void StopLink(); // Flags: Native|Public|BlueprintCallable 0x7FF4144CC4D8
		void SetLinkSound(USoundBase NewSound); // Flags: Native|Public|BlueprintCallable 0x7FF4144CC3F8
		void PlayLink(float StartTime); // Flags: Native|Public|BlueprintCallable 0x7FF4144CC318
		bool IsLinkPlaying(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144CC238
	};

}
