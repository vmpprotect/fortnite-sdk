#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TraceUtilities
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TraceUtilities.TraceUtilLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTraceUtilLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TraceUtilities.TraceUtilLibrary");
			return ret;
		}

		void TraceMarkRegionStart(FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void TraceMarkRegionEnd(FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void TraceBookmark(FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C7B3138(relative to base address)
		bool ToggleChannel(FString ChannelName, bool Enabled); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7523F7F20(relative to base address)
		bool StopTracing(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF748CDD424(relative to base address)
		bool StartTraceToFile(FString Filename, TArray<FString>& Channels); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7523F7DEC(relative to base address)
		bool StartTraceSendTo(FString Target, TArray<FString>& Channels); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7523F7DEC(relative to base address)
		bool ResumeTracing(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF749859FE0(relative to base address)
		bool PauseTracing(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF749859FE0(relative to base address)
		bool IsTracing(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF748CDD424(relative to base address)
		bool IsChannelEnabled(FString ChannelName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E2124F8(relative to base address)
		TArray GetEnabledChannels(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7523F7DB0(relative to base address)
		TArray GetAllChannels(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C3803DC(relative to base address)
	};

}
