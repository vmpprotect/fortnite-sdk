#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarValidatorCommon
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarValidatorCommon.DelMarValidatorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarValidatorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarValidatorCommon.DelMarValidatorInterface");
			return ret;
		}
	};


	// Class DelMarValidatorCommon.DelMarWorldValidator_Task
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarWorldValidator_Task : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UWorld DelMarWorld; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarValidatorCommon.DelMarWorldValidator_Task");
			return ret;
		}

		void ValidateDelMarWorld_CookOnly(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414DE8860
		void ValidateDelMarWorld_ClientOnly(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414DE8780
		void ValidateDelMarWorld(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414DE86A0
		void LogString(FString InString); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE85C0
		void AddWarningTokenized(UObject InAsset, FText& Msg); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414DE84E0
		void AddWarning(FText& Msg); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414DE8400
		void AddErrorTokenized(UObject InAsset, FText& Msg); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414DE8320
		void AddError(FText& Msg); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414DE8240
	};

}
