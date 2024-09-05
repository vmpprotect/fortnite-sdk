#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreatorProfileRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		bool IsUGCRestricted(APlayerController PC); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414D66DB8
		bool IsMinor(APlayerController PC); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414D66CD8
		bool GetOwnerProfile(AActor ActorContext, FString& OutCreatorName, FString& OutSupportCode); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D66BF8
		bool GetLinkData(AActor ActorContext, FString& OutCreatorName, FString& OutSupportCode); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D66B18
	};

}
