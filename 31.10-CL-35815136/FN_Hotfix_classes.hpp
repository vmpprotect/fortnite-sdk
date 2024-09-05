#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Hotfix
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Hotfix.OnlineHotfixManager
	// Inherited from UObject
	// Size: 0x290 (0x2B8 - 0x28)
	class UOnlineHotfixManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x250]; // 0x28(0x250) UNKNOWN PROPERTY
		FString OSSName; // 0x278(0x10)
		FString HotfixManagerClassName; // 0x288(0x10)
		FString DebugPrefix; // 0x298(0x10)
		TArray<UObject*> AssetsHotfixedFromIniFiles; // 0x2A8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Hotfix.OnlineHotfixManager");
			return ret;
		}

		void StartHotfixProcess(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4A247C(relative to base address)
	};


	// Class Hotfix.UpdateManager
	// Inherited from UObject
	// Size: 0x1D0 (0x1F8 - 0x28)
	class UUpdateManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0x28(0x60) UNKNOWN PROPERTY
		float UpdateCheckStartDelay; // 0x88(0x4)
		float UpdateCheckCachedResponseDelay; // 0x8C(0x4)
		float HotfixCheckCompleteDelay; // 0x90(0x4)
		float UpdateCheckCompleteDelay; // 0x94(0x4)
		float HotfixAvailabilityCheckCompleteDelay; // 0x98(0x4)
		float UpdateCheckAvailabilityCompleteDelay; // 0x9C(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA0(0x4) UNKNOWN PROPERTY
		int32_t AppSuspendedUpdateCheckTimeSeconds; // 0xA4(0x4)
		unsigned char UnknownData02_6[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		bool bInitialUpdateFinished; // 0xB0(0x1)
		bool bCheckHotfixAvailabilityOnly; // 0xB1(0x1)
		EUpdateState CurrentUpdateState; // 0xB2(0x1)
		unsigned char UnknownData03_6[0x1]; // 0xB3(0x1) UNKNOWN PROPERTY
		int32_t WorstNumFilesPendingLoadViewed; // 0xB4(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xB8(0x4) UNKNOWN PROPERTY
		EHotfixResult LastHotfixResult; // 0xBC(0x1)
		unsigned char UnknownData05_6[0x23]; // 0xBD(0x23) UNKNOWN PROPERTY
		FDateTime LastUpdateCheck; // 0xE0(0x10)
		EUpdateCompletionStatus LastCompletionResult; // 0xF0(0x2)
		unsigned char UnknownData06_6[0x26]; // 0xF2(0x26) UNKNOWN PROPERTY
		UEnum* UpdateStateEnum; // 0x118(0x8)
		UEnum* UpdateCompletionEnum; // 0x120(0x8)
		FUpdateContextDefinition UpdateContextDefinitionUnknown; // 0x128(0x68)
		TArray<FUpdateContextDefinition> UpdateContextDefinitions; // 0x190(0x10)
		unsigned char UnknownData07_7[0x58]; // 0x1A0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Hotfix.UpdateManager");
			return ret;
		}
	};

}
