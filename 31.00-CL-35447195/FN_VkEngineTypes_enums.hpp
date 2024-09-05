#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VkEngineTypes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/VkEngineTypes.EValkyrieProjectDescriptorFileVersion
	enum EValkyrieProjectDescriptorFileVersion
	{
		EValkyrieProjectDescriptorFileVersion__Invalid = 0,
		EValkyrieProjectDescriptorFileVersion__Initial = 1,
		EValkyrieProjectDescriptorFileVersion__AddProjectMetadata = 2,
		EValkyrieProjectDescriptorFileVersion__AddedCompatibilityLabel = 3,
		EValkyrieProjectDescriptorFileVersion__AddBindings = 4,
		EValkyrieProjectDescriptorFileVersion__AddEditorPermissions = 5,
		EValkyrieProjectDescriptorFileVersion__AddEpicApp = 6,
		EValkyrieProjectDescriptorFileVersion__AddDataSets = 7,
		EValkyrieProjectDescriptorFileVersion__AddVersionSuffix = 8,
		EValkyrieProjectDescriptorFileVersion__AddProjectKind = 9,
		EValkyrieProjectDescriptorFileVersion__AddMetaDataTags = A,
		EValkyrieProjectDescriptorFileVersion__RevertMetaDataTags = B,
		EValkyrieProjectDescriptorFileVersion__AddDocsUrl = C,
		EValkyrieProjectDescriptorFileVersion__AddTemplateCategory = D,
		EValkyrieProjectDescriptorFileVersion__BranchDependencies = E,
		EValkyrieProjectDescriptorFileVersion__AddFeatureSet = F,
		EValkyrieProjectDescriptorFileVersion__LatestPlusOne = 10,
		EValkyrieProjectDescriptorFileVersion__Latest = F,
	};


	// Enum /Script/VkEngineTypes.EValkyrieProjectReferenceDescriptorFileVersion
	enum EValkyrieProjectReferenceDescriptorFileVersion
	{
		EValkyrieProjectReferenceDescriptorFileVersion__Invalid = 0,
		EValkyrieProjectReferenceDescriptorFileVersion__Initial = 1,
		EValkyrieProjectReferenceDescriptorFileVersion__AddLinkCode = 2,
		EValkyrieProjectReferenceDescriptorFileVersion__LatestPlusOne = 3,
		EValkyrieProjectReferenceDescriptorFileVersion__Latest = 2,
	};


	// Enum /Script/VkEngineTypes.EValkyrieProjectKind
	enum EValkyrieProjectKind
	{
		EValkyrieProjectKind__Island = 0,
		EValkyrieProjectKind__Library = 1,
		EValkyrieProjectKind__Count = 2,
		EValkyrieProjectKind__Unspecified = 3,
		EValkyrieProjectKind__Default = 0,
	};


	// Enum /Script/VkEngineTypes.EConsumerRole
	enum EConsumerRole
	{
		EConsumerRole__Server = 0,
		EConsumerRole__Client = 1,
		EConsumerRole__Editor = 2,
	};


	// Enum /Script/VkEngineTypes.EVkLinkPublishMode
	enum EVkLinkPublishMode
	{
		EVkLinkPublishMode__Live = 0,
		EVkLinkPublishMode__Playtest = 1,
	};


	// Enum /Script/VkEngineTypes.EVkIdType
	enum EVkIdType
	{
		EVkIdType__Account = 0,
		EVkIdType__Team = 1,
	};


	// Enum /Script/VkEngineTypes.EVkTicketStatus
	enum EVkTicketStatus
	{
		EVkTicketStatus__None = 0,
		EVkTicketStatus__Succeeded = 1,
		EVkTicketStatus__Running = 2,
		EVkTicketStatus__Failed = 3,
	};


	// Enum /Script/VkEngineTypes.EVkModuleAccess
	enum EVkModuleAccess
	{
		EVkModuleAccess__Private = 0,
		EVkModuleAccess__Protected = 1,
		EVkModuleAccess__Public = 2,
	};


	// Enum /Script/VkEngineTypes.EVkModulePublishStatus
	enum EVkModulePublishStatus
	{
		EVkModulePublishStatus__Unreleased = 0,
		EVkModulePublishStatus__PublishedLive = 1,
	};


	// Enum /Script/VkEngineTypes.EVkModuleSafetyStatus
	enum EVkModuleSafetyStatus
	{
		EVkModuleSafetyStatus__Unknown = 0,
		EVkModuleSafetyStatus__Passed = 1,
		EVkModuleSafetyStatus__FailedSoft = 2,
		EVkModuleSafetyStatus__FailedHard = 3,
	};


	// Enum /Script/VkEngineTypes.EVkModuleModerationSource
	enum EVkModuleModerationSource
	{
		EVkModuleModerationSource__System = 0,
		EVkModuleModerationSource__Manual = 1,
		EVkModuleModerationSource__Error = 2,
		EVkModuleModerationSource__AdminAction = 3,
		EVkModuleModerationSource__CommandletError = 4,
		EVkModuleModerationSource__IngestionError = 5,
	};


	// Enum /Script/VkEngineTypes.EVkTeamMembershipStatus
	enum EVkTeamMembershipStatus
	{
		EVkTeamMembershipStatus__Pending = 0,
		EVkTeamMembershipStatus__Accepted = 1,
	};


	// Enum /Script/VkEngineTypes.EVkTeamAccessLevel
	enum EVkTeamAccessLevel
	{
		EVkTeamAccessLevel__Edit = 0,
		EVkTeamAccessLevel__Operate = 1,
		EVkTeamAccessLevel__Publish = 2,
		EVkTeamAccessLevel__Admin = 3,
	};


	// Enum /Script/VkEngineTypes.EVkValidationFlags
	enum EVkValidationFlags
	{
		EVkValidationFlags__None = 0,
		EVkValidationFlags__VF_IgnoreValidation = 1,
		EVkValidationFlags__VF_AllowMissingGameFeatureDataAsset = 2,
		EVkValidationFlags__VF_AllowEngineContent = 4,
		EVkValidationFlags__VF_AllowGameContent = 8,
		EVkValidationFlags__VF_NoPreCheckVerse = 10,
		EVkValidationFlags__VF_ErrorsAsWarnings = 20,
	};

}
