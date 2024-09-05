#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VkRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VkRuntime.ValkyrieGameFeatureSetDefinition
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UValkyrieGameFeatureSetDefinition : public UPrimaryDataAsset	
	{
	public:
		FString GameFeatureSet; // 0x30(0x10)
		FText DisplayName; // 0x40(0x10)
		FString ContentGuidelinesUrl; // 0x50(0x10)
		FString CreationAccessUrl; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VkRuntime.ValkyrieGameFeatureSetDefinition");
			return ret;
		}
	};


	// Class VkRuntime.ValkyrieGameFeatureSetMetadataSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xD8 (0x108 - 0x30)
	class UValkyrieGameFeatureSetMetadataSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0xD8]; // 0x30(0xD8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VkRuntime.ValkyrieGameFeatureSetMetadataSubsystem");
			return ret;
		}
	};

}
