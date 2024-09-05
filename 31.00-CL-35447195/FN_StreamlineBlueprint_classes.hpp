#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StreamlineBlueprint
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class StreamlineBlueprint.StreamlineLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UStreamlineLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StreamlineBlueprint.StreamlineLibrary");
			return ret;
		}

		UStreamlineFeatureSupport QueryStreamlineFeatureSupport(UStreamlineFeature Feature); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBF580
		bool IsStreamlineFeatureSupported(UStreamlineFeature Feature); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBF4A0
		FStreamlineFeatureRequirements GetStreamlineFeatureInformation(UStreamlineFeature Feature); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBF3C0
		void BreakStreamlineFeatureRequirements(UStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EBF2E0
	};


	// Class StreamlineBlueprint.StreamlineLibraryDLSSG
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StreamlineBlueprint.StreamlineLibraryDLSSG");
			return ret;
		}

		void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414EBFC80
		UStreamlineFeatureSupport QueryDLSSGSupport(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBFBA0
		bool IsDLSSGSupported(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBFAC0
		bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBF9E0
		TArray GetSupportedDLSSGModes(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBF900
		UStreamlineDLSSGMode GetDLSSGMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBF820
		void GetDLSSGFrameTiming(float& FrameRateInHertz, int32_t& FramesPresented); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EBF740
		UStreamlineDLSSGMode GetDefaultDLSSGMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBF660
	};


	// Class StreamlineBlueprint.StreamlineLibraryReflex
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StreamlineBlueprint.StreamlineLibraryReflex");
			return ret;
		}

		void SetReflexMode(UStreamlineReflexMode Mode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414EC0380
		UStreamlineFeatureSupport QueryReflexSupport(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EC02A0
		bool IsReflexSupported(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EC01C0
		float GetRenderLatencyInMs(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EC00E0
		UStreamlineReflexMode GetReflexMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EC0000
		float GetGameToRenderLatencyInMs(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBFF20
		float GetGameLatencyInMs(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBFE40
		UStreamlineReflexMode GetDefaultReflexMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBFD60
	};

}
