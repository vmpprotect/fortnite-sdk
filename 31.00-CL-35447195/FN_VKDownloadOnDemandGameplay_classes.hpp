#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VKDownloadOnDemandGameplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VKDownloadOnDemandGameplay.DownloadOnDemandComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x190 (0x230 - 0xA0)
	class UDownloadOnDemandComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData01_3[0x168]; // 0xA0(0x168) UNKNOWN PROPERTY
		UDownloadOnDemandPlot Plot; // 0x208(0x8)
		TArray UserOwnedProjects; // 0x210(0x10)
		TArray ShelvedContents; // 0x220(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent");
			return ret;
		}

		void HandleMnemonicsFromValkyriePaletteProviderReceived(TArray& Mnemonics); // Flags: Final|Native|Private|HasOutParms 0x7FF414DE7600
	};


	// Class VKDownloadOnDemandGameplay.DownloadOnDemandPlot
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UDownloadOnDemandPlot : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x78]; // 0x28(0x78) UNKNOWN PROPERTY
		TArray ActiveProjects; // 0xA0(0x10)
		TArray PendingProjects; // 0xB0(0x10)

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
		unsigned char UnknownData02_3[0x90]; // 0x28(0x90) UNKNOWN PROPERTY
		UDownloadOnDemandProjectDescriptor Descriptor; // 0xB8(0x8)
		TMap Contents; // 0xC0(0x50)
		unsigned char UnknownData03_7[0x20]; // 0x110(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x48]; // 0x28(0x48) UNKNOWN PROPERTY
		TArray ContentItemDefinitions; // 0x70(0x10)
		TArray ContentSoftObjectPaths; // 0x80(0x10)
		TArray LoadFailedContentObjectPaths; // 0x90(0x10)

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
		unsigned char UnknownData02_3[0x48]; // 0x28(0x48) UNKNOWN PROPERTY
		UDownloadOnDemandProjectImage Image; // 0x70(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		UTexture2DDynamic PreviewTexture; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage");
			return ret;
		}
	};

}
