#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DeltaFileSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DeltaFileSystem.DeltaFileSaveHandlerTestContext
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDeltaFileSaveHandlerTestContext : public UObject	
	{
	public:
		UDeltaFileSaveHandler SaveHandler; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeltaFileSystem.DeltaFileSaveHandlerTestContext");
			return ret;
		}
	};


	// Class DeltaFileSystem.DeltaFile
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDeltaFile : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeltaFileSystem.DeltaFile");
			return ret;
		}
	};


	// Class DeltaFileSystem.DeltaFileApplier
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDeltaFileApplier : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeltaFileSystem.DeltaFileApplier");
			return ret;
		}
	};


	// Class DeltaFileSystem.DeltaComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UDeltaComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeltaFileSystem.DeltaComponent");
			return ret;
		}
	};


	// Class DeltaFileSystem.DeltaFileSaveHandler
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UDeltaFileSaveHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x118]; // 0x28(0x118) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeltaFileSystem.DeltaFileSaveHandler");
			return ret;
		}
	};


	// Class DeltaFileSystem.DeltaFileSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xB8 (0xE8 - 0x30)
	class UDeltaFileSubsystem : public UEngineSubsystem	
	{
	public:
		TMap WorldToTrackingHandles; // 0x30(0x50)
		TMap DeltaFiles; // 0x80(0x50)
		FSoftClassPath DefaultDeltaFileClass; // 0xD0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeltaFileSystem.DeltaFileSubsystem");
			return ret;
		}
	};


	// Class DeltaFileSystem.MapDelta
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UMapDelta : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FString PackageToApplyTo; // 0x30(0x10)
		TMap AddActions; // 0x40(0x50)
		TArray UpdateActions; // 0x90(0x10)
		TMap DeleteActions; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeltaFileSystem.MapDelta");
			return ret;
		}
	};


	// Class DeltaFileSystem.MapDeltaApplier
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UMapDeltaApplier : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xC8]; // 0x28(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeltaFileSystem.MapDeltaApplier");
			return ret;
		}
	};

}
