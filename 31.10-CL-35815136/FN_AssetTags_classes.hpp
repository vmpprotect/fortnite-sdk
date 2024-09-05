#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AssetTags
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AssetTags.AssetTagsSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAssetTagsSubsystem : public UEngineSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssetTags.AssetTagsSubsystem");
			return ret;
		}

		TArray K2_GetCollectionsContainingAsset(FSoftObjectPath& AssetPath); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7523F1BEC(relative to base address)
		TArray GetCollectionsContainingAssetPtr(UObject* AssetPtr); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523F1B3C(relative to base address)
		TArray GetCollectionsContainingAssetData(FAssetData& AssetData); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7523F1A44(relative to base address)
		TArray GetCollectionsContainingAsset(FName AssetPathName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523F1994(relative to base address)
		TArray GetCollections(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523F1954(relative to base address)
		TArray GetAssetsInCollection(FName Name); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523F18BC(relative to base address)
		bool CollectionExists(FName Name); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523F1840(relative to base address)
	};

}
