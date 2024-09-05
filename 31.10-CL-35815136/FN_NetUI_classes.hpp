#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NetUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NetUI.BadNetworkIndicator
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x350 - 0x318)
	class UBadNetworkIndicator : public UFortHUDElementWidget	
	{
	public:
		bool bEnabled; // 0x318(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x319(0x3) UNKNOWN PROPERTY
		float MinimumDisplayTime; // 0x31C(0x4)
		float UpdateTime; // 0x320(0x4)
		float InitialDelay; // 0x324(0x4)
		unsigned char UnknownData01_7[0x28]; // 0x328(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetUI.BadNetworkIndicator");
			return ret;
		}

		void UpdateDisplay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldDisplay(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752075204(relative to base address)
		bool HasSeverePing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7520751E0(relative to base address)
		bool HasSeverePacketLoss(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7520751BC(relative to base address)
		bool HasBadPing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752075198(relative to base address)
		bool HasBadPacketLoss(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752075174(relative to base address)
		float GetPing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75207514C(relative to base address)
		float GetPacketLoss(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF752075124(relative to base address)
	};


	// Class NetUI.NetDebugWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x360 - 0x2B0)
	class UNetDebugWidget : public UUserWidget	
	{
	public:
		UCommonTextBlock* PingUI; // 0x2B0(0x8)
		UCommonTextBlock* PacketInRateUI; // 0x2B8(0x8)
		UCommonTextBlock* PacketOutRateUI; // 0x2C0(0x8)
		UCommonTextBlock* PacketInLossUI; // 0x2C8(0x8)
		UCommonTextBlock* PacketOutLossUI; // 0x2D0(0x8)
		UCommonTextBlock* UpBandwidthUI; // 0x2D8(0x8)
		UCommonTextBlock* DownBandwidthUI; // 0x2E0(0x8)
		unsigned char UnknownData00_7[0x78]; // 0x2E8(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetUI.NetDebugWidget");
			return ret;
		}

		void StopTimer(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75207523C(relative to base address)
		void StartTimer(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF752075228(relative to base address)
	};


	// Class NetUI.NetGraph
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x2E8 - 0x2B0)
	class UNetGraph : public UUserWidget	
	{
	public:
		FColor BackgroundColor; // 0x2B0(0x4)
		FColor PingLineColor; // 0x2B4(0x4)
		FColor QueuedBunchesLineColor; // 0x2B8(0x4)
		FColor PacketLossLineColor; // 0x2BC(0x4)
		FVector2D DesiredSize; // 0x2C0(0x10)
		float MaxPingToGraph; // 0x2D0(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x2D4(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetUI.NetGraph");
			return ret;
		}
	};

}
