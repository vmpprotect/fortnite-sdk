#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PurchaseFlow
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PurchaseFlow.PurchaseFlowJSBridge
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPurchaseFlowJSBridge : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PurchaseFlow.PurchaseFlowJSBridge");
			return ret;
		}

		void RequestClose(FString CloseInfo); // Flags: Final|Native|Public 0x7FF414664D38
		void Receipt(FPurchaseFlowReceiptParam Receipt); // Flags: Final|Native|Public 0x7FF414664C58
		bool LaunchValidatedExternalBrowserUrl(FString AllowedBrowserID, FString URL); // Flags: Final|Native|Public 0x7FF414664B78
		bool LaunchExternalBrowserUrl(FString URL); // Flags: Final|Native|Public 0x7FF414664A98
		FString GetExternalBrowserPath(FString BrowserId); // Flags: Final|Native|Public 0x7FF4146649B8
		FString GetExternalBrowserName(FString BrowserId); // Flags: Final|Native|Public 0x7FF4146648D8
		FString GetDefaultExternalBrowserID(FString URL); // Flags: Final|Native|Public 0x7FF4146647F8
	};

}
