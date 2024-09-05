#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PurchaseFlow
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct PurchaseFlow.PurchaseFlowItem
	// Size: 0x30 (0x30 - 0x0)
	struct FPurchaseFlowItem	
	{
	public:
		FString ItemId; // 0x0(0x10)
		FString EntitlementId; // 0x10(0x10)
		FString ValidationInfo; // 0x20(0x10)
	};


	// Struct PurchaseFlow.PurchaseFlowOffer
	// Size: 0x38 (0x38 - 0x0)
	struct FPurchaseFlowOffer	
	{
	public:
		FString OfferNamespace; // 0x0(0x10)
		FString OfferId; // 0x10(0x10)
		int32_t Quantity; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray Items; // 0x28(0x10)
	};


	// Struct PurchaseFlow.PurchaseFlowReceiptParam
	// Size: 0x30 (0x30 - 0x0)
	struct FPurchaseFlowReceiptParam	
	{
	public:
		FString TransactionId; // 0x0(0x10)
		FString TransactionState; // 0x10(0x10)
		TArray Offers; // 0x20(0x10)
	};

}
