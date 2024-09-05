#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PurchaseFlow
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PurchaseFlow.PurchaseFlowJSBridge
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPurchaseFlowJSBridge : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PurchaseFlow.PurchaseFlowJSBridge");
			return ret;
		}

		void RequestClose(FString CloseInfo); // Flags: Final|Native|Public, Memory Exec: 0x7FF74E091C5C(relative to base address)
		void Receipt(FPurchaseFlowReceiptParam Receipt); // Flags: Final|Native|Public, Memory Exec: 0x7FF74E091B14(relative to base address)
		bool LaunchValidatedExternalBrowserUrl(FString AllowedBrowserID, FString URL); // Flags: Final|Native|Public, Memory Exec: 0x7FF74E091A0C(relative to base address)
		bool LaunchExternalBrowserUrl(FString URL); // Flags: Final|Native|Public, Memory Exec: 0x7FF74E091928(relative to base address)
		FString GetExternalBrowserPath(FString BrowserId); // Flags: Final|Native|Public, Memory Exec: 0x7FF74E091858(relative to base address)
		FString GetExternalBrowserName(FString BrowserId); // Flags: Final|Native|Public, Memory Exec: 0x7FF74E091788(relative to base address)
		FString GetDefaultExternalBrowserID(FString URL); // Flags: Final|Native|Public, Memory Exec: 0x7FF74E0916D0(relative to base address)
	};

}
