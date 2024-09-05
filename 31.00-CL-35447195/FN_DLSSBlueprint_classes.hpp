#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DLSSBlueprint
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void SetDLSSSharpness(float Sharpness); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414EBF200
		void SetDLSSMode(UObject WorldContextObject, UDLSSMode DLSSMode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414EBF120
		UDLSSSupport QueryDLSSSupport(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBF040
		bool IsDLSSSupported(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBEF60
		bool IsDLSSModeSupported(UDLSSMode DLSSMode); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBEE80
		bool IsDLSSEnabled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBEDA0
		bool IsDLAAEnabled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBECC0
		TArray GetSupportedDLSSModes(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBEBE0
		float GetDLSSSharpness(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBEB00
		void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EBEA20
		void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EBE940
		UDLSSMode GetDLSSMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBE860
		void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414EBE780
		UDLSSMode GetDefaultDLSSMode(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EBE6A0
		void EnableDLSS(bool bEnabled); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414EBE5C0
		void EnableDLAA(bool bEnabled); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414EBE4E0
	};

}
