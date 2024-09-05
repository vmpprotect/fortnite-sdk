#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TraceUtilities
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void TraceMarkRegionStart(FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFEF20
		void TraceMarkRegionEnd(FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFEE40
		void TraceBookmark(FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFED60
		bool ToggleChannel(FString ChannelName, bool Enabled); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFEC80
		bool StopTracing(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFEBA0
		bool StartTraceToFile(FString Filename, TArray& Channels); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EFEAC0
		bool StartTraceSendTo(FString Target, TArray& Channels); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EFE9E0
		bool ResumeTracing(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFE900
		bool PauseTracing(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFE820
		bool IsTracing(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFE740
		bool IsChannelEnabled(FString ChannelName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFE660
		TArray GetEnabledChannels(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFE580
		TArray GetAllChannels(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFE4A0
	};

}
