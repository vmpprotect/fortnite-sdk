#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoWorldManagement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoWorldManagement.JunoWorldManagementHandler
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoWorldManagementHandler : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWorldManagement.JunoWorldManagementHandler");
			return ret;
		}
	};


	// Class JunoWorldManagement.JunoWorld
	// Inherited from UObject
	// Size: 0x150 (0x178 - 0x28)
	class UJunoWorld : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x150]; // 0x28(0x150) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWorldManagement.JunoWorld");
			return ret;
		}
	};


	// Class JunoWorldManagement.JunoUserWorldView
	// Inherited from UJunoWorld -> UObject
	// Size: 0x28 (0x1A0 - 0x178)
	class UJunoUserWorldView : public UJunoWorld	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x178(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWorldManagement.JunoUserWorldView");
			return ret;
		}
	};


	// Class JunoWorldManagement.JunoWorldManagerSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UJunoWorldManagerSubsystem : public UWorldSubsystem	
	{
	public:
		bool bEnableWorldManager; // 0x30(0x1)
		bool bEnableWorldManagerInPIE; // 0x31(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		int32_t WorldPersistenceCompatibilityVersion; // 0x34(0x4)
		FString DeviceProfileSuffix; // 0x38(0x10)
		unsigned char UnknownData03_6[0x28]; // 0x48(0x28) UNKNOWN PROPERTY
		UJunoWorldManagementHandler WorldManagementHandler; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWorldManagement.JunoWorldManagerSubsystem");
			return ret;
		}
	};


	// Class JunoWorldManagement.JunoWorldManagerSubsystemData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UJunoWorldManagerSubsystemData : public UPrimaryDataAsset	
	{
	public:
		TArray AvailableWorldManagementHandlerClasses; // 0x30(0x10)
		UClass DefaultWorldManagementHandlerClass; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWorldManagement.JunoWorldManagerSubsystemData");
			return ret;
		}
	};


	// Class JunoWorldManagement.JunoPersistenceFeatureWorldMetadataCorrespondentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPersistenceFeatureWorldMetadataCorrespondentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWorldManagement.JunoPersistenceFeatureWorldMetadataCorrespondentInterface");
			return ret;
		}
	};


	// Class JunoWorldManagement.JunoWorldManagementHandler_WorldArbitrationService
	// Inherited from UJunoWorldManagementHandler -> UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UJunoWorldManagementHandler_WorldArbitrationService : public UJunoWorldManagementHandler	
	{
	public:
		TMap WorldViewMap; // 0x28(0x50)
		unsigned char UnknownData02_6[0x50]; // 0x78(0x50) UNKNOWN PROPERTY
		uint32_t GetAllAccessibleWorldsCacheTime; // 0xC8(0x4)
		uint32_t GetAllAccessibleWorldsErrorCacheTime; // 0xCC(0x4)
		unsigned char UnknownData03_7[0x50]; // 0xD0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoWorldManagement.JunoWorldManagementHandler_WorldArbitrationService");
			return ret;
		}
	};

}
