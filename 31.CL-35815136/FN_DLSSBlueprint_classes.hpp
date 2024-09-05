#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DLSSBlueprint
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DLSSBlueprint.DLSSLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDLSSLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DLSSBlueprint.DLSSLibrary");
			return ret;
		}

		void SetDLSSSharpness(float Sharpness); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75217BF3C(relative to base address)
		void SetDLSSMode(UObject* WorldContextObject, UDLSSMode DLSSMode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75217BE8C(relative to base address)
		UDLSSSupport QueryDLSSSupport(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217BE68(relative to base address)
		bool IsDLSSSupported(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217BE44(relative to base address)
		bool IsDLSSModeSupported(UDLSSMode DLSSMode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217BDC4(relative to base address)
		bool IsDLSSEnabled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217BDA0(relative to base address)
		bool IsDLAAEnabled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217BD18(relative to base address)
		TArray GetSupportedDLSSModes(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217BCAC(relative to base address)
		float GetDLSSSharpness(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217BC24(relative to base address)
		void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217BB4C(relative to base address)
		void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217B6AC(relative to base address)
		UDLSSMode GetDLSSMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217B688(relative to base address)
		void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217B50C(relative to base address)
		UDLSSMode GetDefaultDLSSMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75217BC4C(relative to base address)
		void EnableDLSS(bool bEnabled); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75217B49C(relative to base address)
		void EnableDLAA(bool bEnabled); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75217B42C(relative to base address)
	};

}
