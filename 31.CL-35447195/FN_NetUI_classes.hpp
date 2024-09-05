#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NetUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NetUI.BadNetworkIndicator
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x358 - 0x320)
	class UBadNetworkIndicator : public UFortHUDElementWidget	
	{
	public:
		bool bEnabled; // 0x320(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x321(0x3) UNKNOWN PROPERTY
		float MinimumDisplayTime; // 0x324(0x4)
		float UpdateTime; // 0x328(0x4)
		float InitialDelay; // 0x32C(0x4)
		unsigned char UnknownData03_7[0x28]; // 0x330(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetUI.BadNetworkIndicator");
			return ret;
		}

		void UpdateDisplay(); // Flags: Event|Protected|BlueprintEvent 0x7FF414EB4300
		bool ShouldDisplay(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EB4220
		bool HasSeverePing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EB4140
		bool HasSeverePacketLoss(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EB4060
		bool HasBadPing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EB3F80
		bool HasBadPacketLoss(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EB3EA0
		float GetPing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EB3DC0
		float GetPacketLoss(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414EB3CE0
	};


	// Class NetUI.NetDebugWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x368 - 0x2B8)
	class UNetDebugWidget : public UUserWidget	
	{
	public:
		UCommonTextBlock PingUI; // 0x2B8(0x8)
		UCommonTextBlock PacketInRateUI; // 0x2C0(0x8)
		UCommonTextBlock PacketOutRateUI; // 0x2C8(0x8)
		UCommonTextBlock PacketInLossUI; // 0x2D0(0x8)
		UCommonTextBlock PacketOutLossUI; // 0x2D8(0x8)
		UCommonTextBlock UpBandwidthUI; // 0x2E0(0x8)
		UCommonTextBlock DownBandwidthUI; // 0x2E8(0x8)
		unsigned char UnknownData01_7[0x78]; // 0x2F0(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetUI.NetDebugWidget");
			return ret;
		}

		void StopTimer(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414EB44C0
		void StartTimer(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414EB43E0
	};


	// Class NetUI.NetGraph
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x2F0 - 0x2B8)
	class UNetGraph : public UUserWidget	
	{
	public:
		FColor BackgroundColor; // 0x2B8(0x4)
		FColor PingLineColor; // 0x2BC(0x4)
		FColor QueuedBunchesLineColor; // 0x2C0(0x4)
		FColor PacketLossLineColor; // 0x2C4(0x4)
		FVector2D DesiredSize; // 0x2C8(0x10)
		float MaxPingToGraph; // 0x2D8(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x2DC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetUI.NetGraph");
			return ret;
		}
	};

}
