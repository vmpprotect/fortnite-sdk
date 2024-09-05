#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Hotfix
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Hotfix.OnlineHotfixManager
	// Inherited from UObject
	// Size: 0x240 (0x268 - 0x28)
	class UOnlineHotfixManager : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x200]; // 0x28(0x200) UNKNOWN PROPERTY
		FString OSSName; // 0x228(0x10)
		FString HotfixManagerClassName; // 0x238(0x10)
		FString DebugPrefix; // 0x248(0x10)
		TArray AssetsHotfixedFromIniFiles; // 0x258(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Hotfix.OnlineHotfixManager");
			return ret;
		}

		void StartHotfixProcess(); // Flags: Native|Public|BlueprintCallable 0x7FF414608758
	};


	// Class Hotfix.UpdateManager
	// Inherited from UObject
	// Size: 0x1D0 (0x1F8 - 0x28)
	class UUpdateManager : public UObject	
	{
	public:
		unsigned char UnknownData08_3[0x60]; // 0x28(0x60) UNKNOWN PROPERTY
		float UpdateCheckStartDelay; // 0x88(0x4)
		float UpdateCheckCachedResponseDelay; // 0x8C(0x4)
		float HotfixCheckCompleteDelay; // 0x90(0x4)
		float UpdateCheckCompleteDelay; // 0x94(0x4)
		float HotfixAvailabilityCheckCompleteDelay; // 0x98(0x4)
		float UpdateCheckAvailabilityCompleteDelay; // 0x9C(0x4)
		unsigned char UnknownData09_6[0x4]; // 0xA0(0x4) UNKNOWN PROPERTY
		int32_t AppSuspendedUpdateCheckTimeSeconds; // 0xA4(0x4)
		unsigned char UnknownData10_6[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		bool bInitialUpdateFinished; // 0xB0(0x1)
		bool bCheckHotfixAvailabilityOnly; // 0xB1(0x1)
		EUpdateState CurrentUpdateState; // 0xB2(0x1)
		unsigned char UnknownData11_6[0x1]; // 0xB3(0x1) UNKNOWN PROPERTY
		int32_t WorstNumFilesPendingLoadViewed; // 0xB4(0x4)
		unsigned char UnknownData12_6[0x4]; // 0xB8(0x4) UNKNOWN PROPERTY
		EHotfixResult LastHotfixResult; // 0xBC(0x1)
		unsigned char UnknownData13_6[0x23]; // 0xBD(0x23) UNKNOWN PROPERTY
		FDateTime LastUpdateCheck; // 0xE0(0x10)
		EUpdateCompletionStatus LastCompletionResult; // 0xF0(0x2)
		unsigned char UnknownData14_6[0x26]; // 0xF2(0x26) UNKNOWN PROPERTY
		UEnum UpdateStateEnum; // 0x118(0x8)
		UEnum UpdateCompletionEnum; // 0x120(0x8)
		FUpdateContextDefinition UpdateContextDefinitionUnknown; // 0x128(0x68)
		TArray UpdateContextDefinitions; // 0x190(0x10)
		unsigned char UnknownData15_7[0x58]; // 0x1A0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Hotfix.UpdateManager");
			return ret;
		}
	};

}
