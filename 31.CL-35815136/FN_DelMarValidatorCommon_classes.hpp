#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarValidatorCommon
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UWorld* DelMarWorld; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarValidatorCommon.DelMarWorldValidator_Task");
			return ret;
		}

		void ValidateDelMarWorld_CookOnly(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ValidateDelMarWorld_ClientOnly(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ValidateDelMarWorld(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LogString(FString InString); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519FD804(relative to base address)
		void AddWarningTokenized(UObject* InAsset, FText& Msg); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519FD724(relative to base address)
		void AddWarning(FText& Msg); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519FD684(relative to base address)
		void AddErrorTokenized(UObject* InAsset, FText& Msg); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519FD5A4(relative to base address)
		void AddError(FText& Msg); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7519FD508(relative to base address)
	};

}
