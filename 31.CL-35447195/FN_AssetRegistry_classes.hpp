#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AssetRegistry
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AssetRegistry.AssetRegistryHelpers
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAssetRegistryHelpers : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssetRegistry.AssetRegistryHelpers");
			return ret;
		}

		FSoftObjectPath ToSoftObjectPath(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414497178
		FARFilter SetFilterTagsAndValues(FARFilter& InFilter, TArray& InTagsAndValues); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414497098
		bool IsValid(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496FB8
		bool IsUAsset(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496ED8
		bool IsRedirector(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496DF8
		bool IsAssetLoaded(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496D18
		bool GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496C38
		FString GetFullName(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496B58
		FString GetExportTextName(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496A78
		UClass GetClass(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496998
		void GetBlueprintAssets(FARFilter& InFilter, TArray& OutAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144968B8
		TScriptInterface GetAssetRegistry(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144967D8
		UObject GetAsset(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144966F8
		UClass FindAssetNativeClass(FAssetData& AssetData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496618
		FAssetData CreateAssetData(UObject InAsset, bool bAllowBlueprintClass); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414496538
	};


	// Class AssetRegistry.AssetRegistry
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAssetRegistry : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssetRegistry.AssetRegistry");
			return ret;
		}

		void WaitForPackage(FString PackageName); // Flags: Native|Public|BlueprintCallable 0x7FF4144989F8
		void WaitForCompletion(); // Flags: Native|Public|BlueprintCallable 0x7FF414498918
		void UseFilterToExcludeAssets(TArray& AssetDataList, FARFilter& Filter); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414498838
		void SearchAllAssets(bool bSynchronousSearch); // Flags: Native|Public|BlueprintCallable 0x7FF414498758
		void ScanPathsSynchronous(TArray& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414498678
		void ScanModifiedAssetFiles(TArray& InFilePaths); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414498598
		void ScanFilesSynchronous(TArray& InFilePaths, bool bForceRescan); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4144984B8
		void RunAssetsThroughFilter(TArray& AssetDataList, FARFilter& Filter); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF4144983D8
		void PrioritizeSearchPath(FString PathToPrioritize); // Flags: Native|Public|BlueprintCallable 0x7FF4144982F8
		bool K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions& ReferenceOptions, TArray& OutReferencers); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414498218
		bool K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions& DependencyOptions, TArray& OutDependencies); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414498138
		FAssetData K2_GetAssetByObjectPath(FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets); // Flags: RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414498058
		bool IsSearchAsync(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414497F78
		bool IsSearchAllAssets(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414497E98
		bool IsLoadingAssets(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414497DB8
		bool HasAssets(FName PackagePath, bool bRecursive); // Flags: Native|Public|BlueprintCallable|Const 0x7FF414497CD8
		void GetSubPaths(FString InBasePath, TArray& OutPathList, bool bInRecurse); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414497BF8
		bool GetInMemoryAssets(FARFilter& Filter, TArray& OutAssetData, bool bSkipARFilteredAssets); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414497B18
		void GetDerivedClassNames(TArray& ClassNames, TSet& ExcludedClassNames, TSet& OutDerivedClassNames); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414497A38
		bool GetAssetsByPaths(TArray PackagePaths, TArray& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414497958
		bool GetAssetsByPath(FName PackagePath, TArray& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414497878
		bool GetAssetsByPackageName(FName PackageName, TArray& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414497798
		bool GetAssetsByClass(FTopLevelAssetPath ClassPathName, TArray& OutAssetData, bool bSearchSubClasses); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF4144976B8
		bool GetAssets(FARFilter& Filter, TArray& OutAssetData, bool bSkipARFilteredAssets); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF4144975D8
		FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // Flags: Native|Public|HasDefaults|BlueprintCallable|Const 0x7FF4144974F8
		bool GetAncestorClassNames(FTopLevelAssetPath ClassPathName, TArray& OutAncestorClassNames); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414497418
		void GetAllCachedPaths(TArray& OutPathList); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414497338
		bool GetAllAssets(TArray& OutAssetData, bool bIncludeOnlyOnDiskAssets); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414497258
	};


	// Class AssetRegistry.AssetRegistryImpl
	// Inherited from UObject
	// Size: 0x10B8 (0x10E0 - 0x28)
	class UAssetRegistryImpl : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10B8]; // 0x28(0x10B8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssetRegistry.AssetRegistryImpl");
			return ret;
		}
	};

}
