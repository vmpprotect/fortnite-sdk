#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VKDownloadOnDemandGameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VKDownloadOnDemandGameplay.DownloadOnDemandComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x190 (0x230 - 0xA0)
	class UDownloadOnDemandComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x168]; // 0xA0(0x168) UNKNOWN PROPERTY
		UDownloadOnDemandPlot* Plot; // 0x208(0x8)
		TArray<UDownloadOnDemandProject*> UserOwnedProjects; // 0x210(0x10)
		TArray<UDownloadOnDemandProjectContent*> ShelvedContents; // 0x220(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent");
			return ret;
		}

		void HandleMnemonicsFromValkyriePaletteProviderReceived(TArray<FString>& Mnemonics); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7519EC854(relative to base address)
	};


	// Class VKDownloadOnDemandGameplay.DownloadOnDemandPlot
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UDownloadOnDemandPlot : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x78]; // 0x28(0x78) UNKNOWN PROPERTY
		TArray<UDownloadOnDemandProject*> ActiveProjects; // 0xA0(0x10)
		TArray<UDownloadOnDemandProject*> PendingProjects; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandGameplay.DownloadOnDemandPlot");
			return ret;
		}
	};


	// Class VKDownloadOnDemandGameplay.DownloadOnDemandProject
	// Inherited from UObject
	// Size: 0x108 (0x130 - 0x28)
	class UDownloadOnDemandProject : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x90]; // 0x28(0x90) UNKNOWN PROPERTY
		UDownloadOnDemandProjectDescriptor* Descriptor; // 0xB8(0x8)
		TMap<FString, UDownloadOnDemandProjectContent*> Contents; // 0xC0(0x50)
		unsigned char UnknownData01_7[0x20]; // 0x110(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandGameplay.DownloadOnDemandProject");
			return ret;
		}
	};


	// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectContent
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UDownloadOnDemandProjectContent : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x28(0x48) UNKNOWN PROPERTY
		TArray<UFortItemDefinition*> ContentItemDefinitions; // 0x70(0x10)
		TArray<FSoftObjectPath> ContentSoftObjectPaths; // 0x80(0x10)
		TArray<FSoftObjectPath> LoadFailedContentObjectPaths; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectContent");
			return ret;
		}
	};


	// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectDescriptor
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UDownloadOnDemandProjectDescriptor : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x28(0x48) UNKNOWN PROPERTY
		UDownloadOnDemandProjectImage* Image; // 0x70(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectDescriptor");
			return ret;
		}
	};


	// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UDownloadOnDemandProjectImage : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		UTexture2DDynamic* PreviewTexture; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage");
			return ret;
		}
	};

}
