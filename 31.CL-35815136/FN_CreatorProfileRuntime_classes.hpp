#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreatorProfileRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CreatorProfileRuntime.CreatorProfileBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCreatorProfileBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreatorProfileRuntime.CreatorProfileBlueprintFunctionLibrary");
			return ret;
		}

		bool IsUGCRestricted(APlayerController* PC); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7515FE1AC(relative to base address)
		bool IsMinor(APlayerController* PC); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7515FE0F0(relative to base address)
		bool GetOwnerProfile(AActor* ActorContext, FString& OutCreatorName, FString& OutSupportCode); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7515FDFA8(relative to base address)
		bool GetLinkData(AActor* ActorContext, FString& OutCreatorName, FString& OutSupportCode); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7515FDE20(relative to base address)
	};

}
