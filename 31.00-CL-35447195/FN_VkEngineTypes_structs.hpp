#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VkEngineTypes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VkEngineTypes.VkLaunchData_JoinMatchmakingSession
	// Size: 0x10 (0x10 - 0x0)
	struct FVkLaunchData_JoinMatchmakingSession	
	{
	public:
		FString SessionId; // 0x0(0x10)
	};


	// Struct VkEngineTypes.ValkyrieProjectDescriptorIOContext
	// Size: 0x40 (0x40 - 0x0)
	struct FValkyrieProjectDescriptorIOContext	
	{
	public:
		unsigned char UnknownData01_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.ValkyriePluginReferenceDescriptor
	// Size: 0x18 (0x18 - 0x0)
	struct FValkyriePluginReferenceDescriptor	
	{
	public:
		FString Name; // 0x0(0x10)
		bool bIsRoot; // 0x10(0x1)
		bool bIsPublic; // 0x11(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.ValkyrieProjectReferenceDescriptor
	// Size: 0x48 (0x48 - 0x0)
	struct FValkyrieProjectReferenceDescriptor	
	{
	public:
		char FileVersion; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString ID; // 0x8(0x10)
		FOnlineLinkId LinkCode; // 0x18(0x18)
		FString ProjectID; // 0x30(0x10)
		bool bEnabled; // 0x40(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.ValkyrieProjectBindingsDescriptor
	// Size: 0x70 (0x70 - 0x0)
	struct FValkyrieProjectBindingsDescriptor	
	{
	public:
		FString ProjectID; // 0x0(0x10)
		FString ProjectVersePath; // 0x10(0x10)
		TMap Modules; // 0x20(0x50)
	};


	// Struct VkEngineTypes.ValkyrieProjectDescriptor
	// Size: 0x250 (0x250 - 0x0)
	struct FValkyrieProjectDescriptor	
	{
	public:
		char FileVersion; // 0x0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString VersionSuffix; // 0x8(0x10)
		FString Title; // 0x18(0x10)
		FString Description; // 0x28(0x10)
		FString KeyArt; // 0x38(0x10)
		FString DocsUrl; // 0x48(0x10)
		EValkyrieProjectKind Kind; // 0x58(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FString CompatibilityVersion; // 0x60(0x10)
		TArray EditorPermissions; // 0x70(0x10)
		FString EpicApp; // 0x80(0x10)
		float SortPriority; // 0x90(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		FString FeatureSet; // 0x98(0x10)
		TArray Plugins; // 0xA8(0x10)
		TMap DataSets; // 0xB8(0x50)
		TArray Dependencies; // 0x108(0x10)
		unsigned char UnknownData07_6[0xC8]; // 0x118(0xC8) UNKNOWN PROPERTY
		FValkyrieProjectBindingsDescriptor Bindings; // 0x1E0(0x70)
	};


	// Struct VkEngineTypes.VkNamedId
	// Size: 0x20 (0x20 - 0x0)
	struct FVkNamedId	
	{
	public:
		FString Name; // 0x0(0x10)
		FString ID; // 0x10(0x10)
	};


	// Struct VkEngineTypes.VkTypedId
	// Size: 0x18 (0x18 - 0x0)
	struct FVkTypedId	
	{
	public:
		FString ID; // 0x0(0x10)
		EVkIdType Type; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkVersionedLinkCode
	// Size: 0x18 (0x18 - 0x0)
	struct FVkVersionedLinkCode	
	{
	public:
		FString Mnemonic; // 0x0(0x10)
		int32_t Version; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkContentFilter
	// Size: 0x20 (0x20 - 0x0)
	struct FVkContentFilter	
	{
	public:
		FString Platform; // 0x0(0x10)
		FString BuildVersion; // 0x10(0x10)
	};


	// Struct VkEngineTypes.VkArtifactOption
	// Size: 0x38 (0x38 - 0x0)
	struct FVkArtifactOption	
	{
	public:
		FString ArtifactId; // 0x0(0x10)
		EConsumerRole Role; // 0x10(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FVkContentFilter Filter; // 0x18(0x20)
	};


	// Struct VkEngineTypes.VkFoundMatchingArtifact
	// Size: 0x40 (0x40 - 0x0)
	struct FVkFoundMatchingArtifact	
	{
	public:
		FString ArtifactId; // 0x0(0x10)
		FString Name; // 0x10(0x10)
		FVkContentFilter Filter; // 0x20(0x20)
	};


	// Struct VkEngineTypes.VkModuleVersion
	// Size: 0x18 (0x18 - 0x0)
	struct FVkModuleVersion	
	{
	public:
		FString ModuleId; // 0x0(0x10)
		int32_t Version; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkModuleVersionDependency
	// Inherited from FVkModuleVersion
	// Size: 0x10 (0x28 - 0x18)
	struct FVkModuleVersionDependency : public FVkModuleVersion	
	{
	public:
		TArray References; // 0x18(0x10)
	};


	// Struct VkEngineTypes.VkPendingModuleVersion
	// Size: 0x20 (0x20 - 0x0)
	struct FVkPendingModuleVersion	
	{
	public:
		FString ModuleId; // 0x0(0x10)
		FString TicketId; // 0x10(0x10)
	};


	// Struct VkEngineTypes.VkModuleVersionWithArtifacts
	// Inherited from FVkModuleVersion
	// Size: 0x10 (0x28 - 0x18)
	struct FVkModuleVersionWithArtifacts : public FVkModuleVersion	
	{
	public:
		TArray Artifacts; // 0x18(0x10)
	};


	// Struct VkEngineTypes.VkModuleDoc
	// Size: 0xF0 (0xF0 - 0x0)
	struct FVkModuleDoc	
	{
	public:
		FString ModuleId; // 0x0(0x10)
		FDateTime Created; // 0x10(0x8)
		FDateTime Updated; // 0x18(0x8)
		FVkTypedId Author; // 0x20(0x18)
		FString ProjectID; // 0x38(0x10)
		FString ModuleName; // 0x48(0x10)
		FString ContentType; // 0x58(0x10)
		TMap Relevance; // 0x68(0x50)
		FString AliasForModuleId; // 0xB8(0x10)
		FJsonObjectWrapper Meta; // 0xC8(0x20)
		int32_t LatestVersion; // 0xE8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkResolvedContent
	// Size: 0x68 (0x68 - 0x0)
	struct FVkResolvedContent	
	{
	public:
		FVkModuleVersion Root; // 0x0(0x18)
		TMap Resolutions; // 0x18(0x50)
	};


	// Struct VkEngineTypes.VkContentPackage
	// Size: 0xD8 (0xD8 - 0x0)
	struct FVkContentPackage	
	{
	public:
		FString ProjectID; // 0x0(0x10)
		TMap ProjectFlags; // 0x10(0x50)
		TArray Content; // 0x60(0x10)
		FVkResolvedContent Resolved; // 0x70(0x68)
	};


	// Struct VkEngineTypes.VkModuleImports
	// Size: 0x10 (0x10 - 0x0)
	struct FVkModuleImports	
	{
	public:
		TArray References; // 0x0(0x10)
	};


	// Struct VkEngineTypes.VkInstallMetadata
	// Size: 0x60 (0x60 - 0x0)
	struct FVkInstallMetadata	
	{
	public:
		FString GameFeaturePluginUri; // 0x0(0x10)
		TMap Imports; // 0x10(0x50)
	};


	// Struct VkEngineTypes.VkModuleBinaries
	// Size: 0x60 (0x60 - 0x0)
	struct FVkModuleBinaries	
	{
	public:
		FString BaseURL; // 0x0(0x10)
		FString manifest; // 0x10(0x10)
		TArray Files; // 0x20(0x10)
		double TotalSizeKb; // 0x30(0x8)
		double ManifestSizeKb; // 0x38(0x8)
		double ManifestDiskSizeKb; // 0x40(0x8)
		double ManifestDownloadSizeKb; // 0x48(0x8)
		TArray InstallMetadata; // 0x50(0x10)
	};


	// Struct VkEngineTypes.VkResolvedModule
	// Size: 0xA8 (0xA8 - 0x0)
	struct FVkResolvedModule	
	{
	public:
		FString ModuleId; // 0x0(0x10)
		int32_t Version; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString BinaryVersion; // 0x18(0x10)
		FString ArtifactId; // 0x28(0x10)
		FString CookJobId; // 0x38(0x10)
		FVkModuleBinaries Binaries; // 0x48(0x60)
	};


	// Struct VkEngineTypes.VkCookedContentPackage
	// Size: 0x88 (0x88 - 0x0)
	struct FVkCookedContentPackage	
	{
	public:
		FString ProjectID; // 0x0(0x10)
		TArray Content; // 0x10(0x10)
		FVkResolvedContent Resolved; // 0x20(0x68)
	};


	// Struct VkEngineTypes.VkCookedModuleUpdate
	// Inherited from FVkModuleVersion
	// Size: 0x28 (0x40 - 0x18)
	struct FVkCookedModuleUpdate : public FVkModuleVersion	
	{
	public:
		FString ArtifactId; // 0x18(0x10)
		FString CookJobId; // 0x28(0x10)
		bool IsComplete; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkCookedContentUpdate
	// Size: 0x80 (0x80 - 0x0)
	struct FVkCookedContentUpdate	
	{
	public:
		int32_t PendingCookRequests; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVkResolvedContent Resolved; // 0x8(0x68)
		TArray Modules; // 0x70(0x10)
	};


	// Struct VkEngineTypes.VkFileSize
	// Size: 0x28 (0x28 - 0x0)
	struct FVkFileSize	
	{
	public:
		TArray Types; // 0x0(0x10)
		int64_t SourceSize; // 0x10(0x8)
		int64_t UncompressedSize; // 0x18(0x8)
		int64_t CompressedSize; // 0x20(0x8)
	};


	// Struct VkEngineTypes.VkFileSizes
	// Size: 0x50 (0x50 - 0x0)
	struct FVkFileSizes	
	{
	public:
		TMap FileSizeMap; // 0x0(0x50)
	};


	// Struct VkEngineTypes.VkExtendedErrorParam
	// Size: 0x20 (0x20 - 0x0)
	struct FVkExtendedErrorParam	
	{
	public:
		FString Key; // 0x0(0x10)
		FString Value; // 0x10(0x10)
	};


	// Struct VkEngineTypes.VkExtendedError
	// Size: 0x40 (0x40 - 0x0)
	struct FVkExtendedError	
	{
	public:
		FString FormatKey; // 0x0(0x10)
		FString FormatNs; // 0x10(0x10)
		FString Message; // 0x20(0x10)
		TArray Params; // 0x30(0x10)
	};


	// Struct VkEngineTypes.VkExtendedErrorInformation
	// Size: 0x30 (0x30 - 0x0)
	struct FVkExtendedErrorInformation	
	{
	public:
		FString ErrorCode; // 0x0(0x10)
		FString ErrorMessage; // 0x10(0x10)
		TArray AdditionalErrors; // 0x20(0x10)
	};


	// Struct VkEngineTypes.VkTicketDetails
	// Size: 0x48 (0x48 - 0x0)
	struct FVkTicketDetails	
	{
	public:
		EVkTicketStatus Status; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FDateTime StartDate; // 0x8(0x8)
		FDateTime EndDate; // 0x10(0x8)
		FVkExtendedErrorInformation Error; // 0x18(0x30)
	};


	// Struct VkEngineTypes.VkVersePath
	// Size: 0x28 (0x28 - 0x0)
	struct FVkVersePath	
	{
	public:
		FString VersePath; // 0x0(0x10)
		FString URL; // 0x10(0x10)
		bool Primary; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkVersePathTarget
	// Size: 0x28 (0x28 - 0x0)
	struct FVkVersePathTarget	
	{
	public:
		FString ProjectID; // 0x0(0x10)
		FVkVersionedLinkCode LinkCode; // 0x10(0x18)
	};


	// Struct VkEngineTypes.VkResolvedVersePath
	// Inherited from FVkVersePath
	// Size: 0x28 (0x50 - 0x28)
	struct FVkResolvedVersePath : public FVkVersePath	
	{
	public:
		FVkVersePathTarget Target; // 0x28(0x28)
	};


	// Struct VkEngineTypes.VkContentManifest
	// Size: 0x10 (0x10 - 0x0)
	struct FVkContentManifest	
	{
	public:
		TArray Content; // 0x0(0x10)
	};


	// Struct VkEngineTypes.VkBuildVersion
	// Size: 0x18 (0x18 - 0x0)
	struct FVkBuildVersion	
	{
	public:
		FString Major; // 0x0(0x10)
		int32_t Minor; // 0x10(0x4)
		int32_t Patch; // 0x14(0x4)
	};


	// Struct VkEngineTypes.VkJobOutput
	// Size: 0x40 (0x40 - 0x0)
	struct FVkJobOutput	
	{
	public:
		FString BaseURL; // 0x0(0x10)
		double TotalSizeKb; // 0x10(0x8)
		double UserContentTotalSizeKb; // 0x18(0x8)
		TArray Files; // 0x20(0x10)
		FString manifest; // 0x30(0x10)
	};


	// Struct VkEngineTypes.VkModuleVersionDoc
	// Size: 0x168 (0x168 - 0x0)
	struct FVkModuleVersionDoc	
	{
	public:
		FString ModuleId; // 0x0(0x10)
		int32_t Version; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString ProjectID; // 0x18(0x10)
		EVkModuleAccess Access; // 0x28(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FDateTime Created; // 0x30(0x8)
		FVkTypedId Author; // 0x38(0x18)
		FJsonObjectWrapper Meta; // 0x50(0x20)
		TArray Dependencies; // 0x70(0x10)
		FVkJobOutput StagedFiles; // 0x80(0x40)
		FVkBuildVersion SourceVersion; // 0xC0(0x18)
		FString ContentType; // 0xD8(0x10)
		TMap Relevance; // 0xE8(0x50)
		FString ArtifactKey; // 0x138(0x10)
		FString Checksum; // 0x148(0x10)
		TArray Artifacts; // 0x158(0x10)
	};


	// Struct VkEngineTypes.VkModuleVersionModerationStatus
	// Size: 0x30 (0x30 - 0x0)
	struct FVkModuleVersionModerationStatus	
	{
	public:
		FString ModuleId; // 0x0(0x10)
		int32_t Version; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString MoreInfoUrl; // 0x18(0x10)
		EVkModulePublishStatus PublishStatus; // 0x28(0x1)
		EVkModuleSafetyStatus SafetyStatus; // 0x29(0x1)
		EVkModuleModerationSource ModerationSource; // 0x2A(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x2B(0x5) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkProjectLimitsDoc
	// Size: 0x30 (0x30 - 0x0)
	struct FVkProjectLimitsDoc	
	{
	public:
		int64_t PublishingMemorySize; // 0x0(0x8)
		int64_t PublishingDownloadSize; // 0x8(0x8)
		int64_t ProjectUploadSize; // 0x10(0x8)
		int32_t ModuleUploadConcurrencyLimit; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		int64_t FileCount; // 0x20(0x8)
		int64_t IndividualFileSizeKb; // 0x28(0x8)
	};


	// Struct VkEngineTypes.VkProjectUserInfo
	// Size: 0x98 (0x98 - 0x0)
	struct FVkProjectUserInfo	
	{
	public:
		FString ProjectID; // 0x0(0x10)
		FString AccountId; // 0x10(0x10)
		FString Title; // 0x20(0x10)
		bool HasStar; // 0x30(0x1)
		bool IsNew; // 0x31(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		TMap Access; // 0x38(0x50)
		TArray Permissions; // 0x88(0x10)
	};


	// Struct VkEngineTypes.VkOwnerInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FVkOwnerInfo	
	{
	public:
		FString Owner; // 0x0(0x10)
		FString Brand; // 0x10(0x10)
	};


	// Struct VkEngineTypes.VkCreateProjectRequest
	// Size: 0x50 (0x50 - 0x0)
	struct FVkCreateProjectRequest	
	{
	public:
		FString DesiredProjectId; // 0x0(0x10)
		FString TeamID; // 0x10(0x10)
		FJsonObjectWrapper Meta; // 0x20(0x20)
		TArray GameFeaturesets; // 0x40(0x10)
	};


	// Struct VkEngineTypes.VkTransferProjectRequest
	// Size: 0x10 (0x10 - 0x0)
	struct FVkTransferProjectRequest	
	{
	public:
		FString TeamID; // 0x0(0x10)
	};


	// Struct VkEngineTypes.VkCreateModuleRequest
	// Size: 0xA0 (0xA0 - 0x0)
	struct FVkCreateModuleRequest	
	{
	public:
		FString ModuleName; // 0x0(0x10)
		FJsonObjectWrapper Meta; // 0x10(0x20)
		FString ContentType; // 0x30(0x10)
		TMap Relevance; // 0x40(0x50)
		FString DesiredModuleId; // 0x90(0x10)
	};


	// Struct VkEngineTypes.VkCreateModuleVersionRequest
	// Size: 0xC0 (0xC0 - 0x0)
	struct FVkCreateModuleVersionRequest	
	{
	public:
		TMap RawFiles; // 0x0(0x50)
		TArray Dependencies; // 0x50(0x10)
		TArray StaticDependencies; // 0x60(0x10)
		FJsonObjectWrapper Meta; // 0x70(0x20)
		FString Checksum; // 0x90(0x10)
		FString ManifestLink; // 0xA0(0x10)
		TArray GameFeaturesets; // 0xB0(0x10)
	};


	// Struct VkEngineTypes.VkContentPackageRequest
	// Inherited from FVkResolvedContent
	// Size: 0x10 (0x78 - 0x68)
	struct FVkContentPackageRequest : public FVkResolvedContent	
	{
	public:
		FString ProjectID; // 0x68(0x10)
	};


	// Struct VkEngineTypes.VkSnapshotSaveRequest
	// Size: 0xA8 (0xA8 - 0x0)
	struct FVkSnapshotSaveRequest	
	{
	public:
		FVkResolvedContent Content; // 0x0(0x68)
		TArray Palette; // 0x68(0x10)
		FString MapPath; // 0x78(0x10)
		FJsonObjectWrapper MatchmakingConfig; // 0x88(0x20)
	};


	// Struct VkEngineTypes.VkProjectSnapshot
	// Size: 0xE8 (0xE8 - 0x0)
	struct FVkProjectSnapshot	
	{
	public:
		FString UniqueID; // 0x0(0x10)
		FString ProjectID; // 0x10(0x10)
		FString AccountId; // 0x20(0x10)
		FDateTime CreatedAt; // 0x30(0x8)
		int32_t DeltaFileIndex; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVkResolvedContent Content; // 0x40(0x68)
		TArray Palette; // 0xA8(0x10)
		FString MapPath; // 0xB8(0x10)
		FJsonObjectWrapper MatchmakingConfig; // 0xC8(0x20)
	};


	// Struct VkEngineTypes.VkGenerateBuildCodeRequest
	// Size: 0xA8 (0xA8 - 0x0)
	struct FVkGenerateBuildCodeRequest	
	{
	public:
		FVkResolvedContent Content; // 0x0(0x68)
		FString CommitMessage; // 0x68(0x10)
		FJsonObjectWrapper MatchmakingConfig; // 0x78(0x20)
		FString SourceControlBase; // 0x98(0x10)
	};


	// Struct VkEngineTypes.VkProjectSearchResult
	// Size: 0x70 (0x70 - 0x0)
	struct FVkProjectSearchResult	
	{
	public:
		FString ProjectID; // 0x0(0x10)
		FDateTime Created; // 0x10(0x8)
		FDateTime Accessed; // 0x18(0x8)
		FJsonObjectWrapper Meta; // 0x20(0x20)
		FJsonObjectWrapper SysMeta; // 0x40(0x20)
		FString LinkCode; // 0x60(0x10)
	};


	// Struct VkEngineTypes.VkProjectInfoSlim
	// Size: 0x78 (0x78 - 0x0)
	struct FVkProjectInfoSlim	
	{
	public:
		FVkTypedId Owner; // 0x0(0x18)
		FString Title; // 0x18(0x10)
		FString Description; // 0x28(0x10)
		FString LinkCode; // 0x38(0x10)
		FString RcsProvider; // 0x48(0x10)
		FJsonObjectWrapper SysMeta; // 0x58(0x20)
	};


	// Struct VkEngineTypes.VkProjectSearchResultSlim
	// Size: 0x98 (0x98 - 0x0)
	struct FVkProjectSearchResultSlim	
	{
	public:
		FString ProjectID; // 0x0(0x10)
		FDateTime Date; // 0x10(0x8)
		FVkProjectInfoSlim Info; // 0x18(0x78)
		bool is_starred; // 0x90(0x1)
		bool is_new; // 0x91(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x92(0x6) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkTeamMembershipResult
	// Size: 0xA0 (0xA0 - 0x0)
	struct FVkTeamMembershipResult	
	{
	public:
		FString Name; // 0x0(0x10)
		TMap Access; // 0x10(0x50)
		EVkTeamMembershipStatus Status; // 0x60(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FString MembershipId; // 0x68(0x10)
		FString TeamID; // 0x78(0x10)
		FString AccountId; // 0x88(0x10)
		FDateTime Updated; // 0x98(0x8)
	};


	// Struct VkEngineTypes.VkTeamAccessControl
	// Size: 0x4 (0x4 - 0x0)
	struct FVkTeamAccessControl	
	{
	public:
		bool Admin; // 0x0(0x1)
		bool Edit; // 0x1(0x1)
		bool Operate; // 0x2(0x1)
		bool Publish; // 0x3(0x1)
	};


	// Struct VkEngineTypes.VkTeamAuthorizedEmailDomain
	// Size: 0x18 (0x18 - 0x0)
	struct FVkTeamAuthorizedEmailDomain	
	{
	public:
		FString Domain; // 0x0(0x10)
		FVkTeamAccessControl Access; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkTeamPublicProperties
	// Size: 0x30 (0x30 - 0x0)
	struct FVkTeamPublicProperties	
	{
	public:
		FString Name; // 0x0(0x10)
		FString Description; // 0x10(0x10)
		TArray EmailDomains; // 0x20(0x10)
	};


	// Struct VkEngineTypes.VkTeamDoc
	// Size: 0x90 (0x90 - 0x0)
	struct FVkTeamDoc	
	{
	public:
		FString TeamID; // 0x0(0x10)
		FDateTime Created; // 0x10(0x8)
		FDateTime Updated; // 0x18(0x8)
		FVkTypedId Owner; // 0x20(0x18)
		FVkTeamPublicProperties PublicProps; // 0x38(0x30)
		int32_t MemberCount; // 0x68(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FJsonObjectWrapper SysMeta; // 0x70(0x20)
	};


	// Struct VkEngineTypes.VkLaunchData_Link
	// Size: 0x18 (0x18 - 0x0)
	struct FVkLaunchData_Link	
	{
	public:
		FString LinkCode; // 0x0(0x10)
		int32_t Version; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct VkEngineTypes.VkProjectPlaytestAccessRequest
	// Size: 0x20 (0x20 - 0x0)
	struct FVkProjectPlaytestAccessRequest	
	{
	public:
		TArray Users; // 0x0(0x10)
		FString PlaytestGroupId; // 0x10(0x10)
	};


	// Struct VkEngineTypes.VkProjectAccessControl
	// Size: 0x5 (0x5 - 0x0)
	struct FVkProjectAccessControl	
	{
	public:
		bool Read; // 0x0(0x1)
		bool Edit; // 0x1(0x1)
		bool Operate; // 0x2(0x1)
		bool Publish; // 0x3(0x1)
		bool Admin; // 0x4(0x1)
	};


	// Struct VkEngineTypes.VkProjectPlaytestAccessResult
	// Size: 0x80 (0x80 - 0x0)
	struct FVkProjectPlaytestAccessResult	
	{
	public:
		FVkNamedId Owner; // 0x0(0x20)
		FString OwnerType; // 0x20(0x10)
		TMap Playtesters; // 0x30(0x50)
	};


	// Struct VkEngineTypes.VkSnapshotDeltaFiles
	// Size: 0x60 (0x60 - 0x0)
	struct FVkSnapshotDeltaFiles	
	{
	public:
		FString SnapshotId; // 0x0(0x10)
		TMap DeltaFileLinks; // 0x10(0x50)
	};


	// Struct VkEngineTypes.VkProfileBuildResult_Duration
	// Size: 0x10 (0x10 - 0x0)
	struct FVkProfileBuildResult_Duration	
	{
	public:
		FDateTime Start; // 0x0(0x8)
		FDateTime End; // 0x8(0x8)
	};


	// Struct VkEngineTypes.VkProfileBuildResult_Server
	// Size: 0x70 (0x70 - 0x0)
	struct FVkProfileBuildResult_Server	
	{
	public:
		FString BuildId; // 0x0(0x10)
		FString Platform; // 0x10(0x10)
		TMap Stat; // 0x20(0x50)
	};


	// Struct VkEngineTypes.VkProfileBuildResult_Client
	// Size: 0x80 (0x80 - 0x0)
	struct FVkProfileBuildResult_Client	
	{
	public:
		FString AccountId; // 0x0(0x10)
		FString BuildId; // 0x10(0x10)
		FString Platform; // 0x20(0x10)
		TMap Stat; // 0x30(0x50)
	};


	// Struct VkEngineTypes.VkProfileBuildResult
	// Size: 0xA8 (0xA8 - 0x0)
	struct FVkProfileBuildResult	
	{
	public:
		float Score; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString SessionId; // 0x8(0x10)
		FVkProfileBuildResult_Duration duration; // 0x18(0x10)
		FVkProfileBuildResult_Server Server; // 0x28(0x70)
		TArray Clients; // 0x98(0x10)
	};


	// Struct VkEngineTypes.VkBuildCode
	// Size: 0x100 (0x100 - 0x0)
	struct FVkBuildCode	
	{
	public:
		FString LinkCode; // 0x0(0x10)
		int32_t LinkVersion; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FDateTime LastPublished; // 0x18(0x8)
		FVkTypedId PublishedBy; // 0x20(0x18)
		FString base; // 0x38(0x10)
		FString CommitMessage; // 0x48(0x10)
		FVkProfileBuildResult ProfileResult; // 0x58(0xA8)
	};


	// Struct VkEngineTypes.VkProjectDoc
	// Size: 0x188 (0x188 - 0x0)
	struct FVkProjectDoc	
	{
	public:
		FString ProjectID; // 0x0(0x10)
		FDateTime Created; // 0x10(0x8)
		FVkTypedId Author; // 0x18(0x18)
		FVkTypedId Owner; // 0x30(0x18)
		FJsonObjectWrapper Meta; // 0x48(0x20)
		FJsonObjectWrapper SysMeta; // 0x68(0x20)
		FVkBuildCode LiveLink; // 0x88(0x100)
	};


	// Struct VkEngineTypes.VkLinkCodeInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FVkLinkCodeInfo	
	{
	public:
		FString LinkCode; // 0x0(0x10)
		int32_t Version; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString Type; // 0x18(0x10)
		bool IsActive; // 0x28(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FString ProjectID; // 0x30(0x10)
		FString CreatorName; // 0x40(0x10)
		FJsonObjectWrapper MetaData; // 0x50(0x20)
	};


	// Struct VkEngineTypes.VkLinkCodePublicModules
	// Size: 0x88 (0x88 - 0x0)
	struct FVkLinkCodePublicModules	
	{
	public:
		FString LinkCode; // 0x0(0x10)
		int32_t Version; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString Type; // 0x18(0x10)
		FString ProjectID; // 0x28(0x10)
		TMap Public_Modules; // 0x38(0x50)
	};


	// Struct VkEngineTypes.VkMetaDataFlags
	// Size: 0x50 (0x50 - 0x0)
	struct FVkMetaDataFlags	
	{
	public:
		TMap _validation_flags; // 0x0(0x50)
	};

}
