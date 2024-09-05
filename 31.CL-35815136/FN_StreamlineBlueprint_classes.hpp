#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StreamlineBlueprint
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		UStreamlineFeatureSupport QueryStreamlineFeatureSupport(UStreamlineFeature Feature); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D52C(relative to base address)
		bool IsStreamlineFeatureSupported(UStreamlineFeature Feature); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D464(relative to base address)
		FStreamlineFeatureRequirements GetStreamlineFeatureInformation(UStreamlineFeature Feature); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D288(relative to base address)
		void BreakStreamlineFeatureRequirements(UStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217CE38(relative to base address)
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

		void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75217D5AC(relative to base address)
		UStreamlineFeatureSupport QueryDLSSGSupport(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D4E4(relative to base address)
		bool IsDLSSGSupported(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D418(relative to base address)
		bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D398(relative to base address)
		TArray GetSupportedDLSSGModes(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D32C(relative to base address)
		UStreamlineDLSSGMode GetDLSSGMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D17C(relative to base address)
		void GetDLSSGFrameTiming(float& FrameRateInHertz, int32_t& FramesPresented); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D068(relative to base address)
		UStreamlineDLSSGMode GetDefaultDLSSGMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D1A0(relative to base address)
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

		void SetReflexMode(UStreamlineReflexMode Mode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75217D61C(relative to base address)
		UStreamlineFeatureSupport QueryReflexSupport(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D508(relative to base address)
		bool IsReflexSupported(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D43C(relative to base address)
		float GetRenderLatencyInMs(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D260(relative to base address)
		UStreamlineReflexMode GetReflexMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D23C(relative to base address)
		float GetGameToRenderLatencyInMs(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D214(relative to base address)
		float GetGameLatencyInMs(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217D1EC(relative to base address)
		UStreamlineReflexMode GetDefaultReflexMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF749859FE0(relative to base address)
	};

}
