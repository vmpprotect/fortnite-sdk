#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AssetRegistry
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		FSoftObjectPath ToSoftObjectPath(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC78934(relative to base address)
		FARFilter SetFilterTagsAndValues(FARFilter& InFilter, TArray<FTagAndValue>& InTagsAndValues); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC787E4(relative to base address)
		bool IsValid(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC77A5C(relative to base address)
		bool IsUAsset(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC779A4(relative to base address)
		bool IsRedirector(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC7789C(relative to base address)
		bool IsAssetLoaded(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC777BC(relative to base address)
		bool GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC77580(relative to base address)
		FString GetFullName(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC77080(relative to base address)
		FString GetExportTextName(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC76FA0(relative to base address)
		UClass GetClass(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC76CFC(relative to base address)
		void GetBlueprintAssets(FARFilter& InFilter, TArray<FAssetData>& OutAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC76BA4(relative to base address)
		TScriptInterface GetAssetRegistry(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC75E98(relative to base address)
		UObject GetAsset(FAssetData& InAssetData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC75CB8(relative to base address)
		UClass FindAssetNativeClass(FAssetData& AssetData); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC75808(relative to base address)
		FAssetData CreateAssetData(UObject* InAsset, bool bAllowBlueprintClass); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BC756E4(relative to base address)
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

		void WaitForPackage(FString PackageName); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BC78B84(relative to base address)
		void WaitForCompletion(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BC78B6C(relative to base address)
		void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, FARFilter& Filter); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF74BC78A0C(relative to base address)
		void SearchAllAssets(bool bSynchronousSearch); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BC78760(relative to base address)
		void ScanPathsSynchronous(TArray<FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC784F4(relative to base address)
		void ScanModifiedAssetFiles(TArray<FString>& InFilePaths); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC7842C(relative to base address)
		void ScanFilesSynchronous(TArray<FString>& InFilePaths, bool bForceRescan); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC78280(relative to base address)
		void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, FARFilter& Filter); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF74BC78120(relative to base address)
		void PrioritizeSearchPath(FString PathToPrioritize); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BC7808C(relative to base address)
		bool K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC77F0C(relative to base address)
		bool K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC77D8C(relative to base address)
		FAssetData K2_GetAssetByObjectPath(FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets); // Flags: RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF74BC77B1C(relative to base address)
		bool IsSearchAsync(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC7797C(relative to base address)
		bool IsSearchAllAssets(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC77954(relative to base address)
		bool IsLoadingAssets(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC77874(relative to base address)
		bool HasAssets(FName PackagePath, bool bRecursive); // Flags: Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74BC776F4(relative to base address)
		void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC77394(relative to base address)
		bool GetInMemoryAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData, bool bSkipARFilteredAssets); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF74BC77160(relative to base address)
		void GetDerivedClassNames(TArray<FTopLevelAssetPath>& ClassNames, TSet<FTopLevelAssetPath>& ExcludedClassNames, TSet<FTopLevelAssetPath>& OutDerivedClassNames); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC76DB4(relative to base address)
		bool GetAssetsByPaths(TArray<FName> PackagePaths, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC768A8(relative to base address)
		bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC76604(relative to base address)
		bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC76360(relative to base address)
		bool GetAssetsByClass(FTopLevelAssetPath ClassPathName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC76100(relative to base address)
		bool GetAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData, bool bSkipARFilteredAssets); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF74BC75ECC(relative to base address)
		FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // Flags: Native|Public|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF74BC75DA0(relative to base address)
		bool GetAncestorClassNames(FTopLevelAssetPath ClassPathName, TArray<FTopLevelAssetPath>& OutAncestorClassNames); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC75B34(relative to base address)
		void GetAllCachedPaths(TArray<FString>& OutPathList); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC75A6C(relative to base address)
		bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets); // Flags: Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74BC758C0(relative to base address)
	};


	// Class AssetRegistry.AssetRegistryImpl
	// Inherited from UObject
	// Size: 0x10B8 (0x10E0 - 0x28)
	class UAssetRegistryImpl : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10B8]; // 0x28(0x10B8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssetRegistry.AssetRegistryImpl");
			return ret;
		}
	};

}
