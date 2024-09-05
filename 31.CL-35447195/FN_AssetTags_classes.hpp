#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AssetTags
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		TArray K2_GetCollectionsContainingAsset(FSoftObjectPath& AssetPath); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EFE3C0
		TArray GetCollectionsContainingAssetPtr(UObject AssetPtr); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFE2E0
		TArray GetCollectionsContainingAssetData(FAssetData& AssetData); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EFE200
		TArray GetCollectionsContainingAsset(FName AssetPathName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFE120
		TArray GetCollections(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFE040
		TArray GetAssetsInCollection(FName Name); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFDF60
		bool CollectionExists(FName Name); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFDE80
	};

}
