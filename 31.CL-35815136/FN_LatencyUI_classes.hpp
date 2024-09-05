#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LatencyUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LatencyUI.LatencyGraph
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x2F8 - 0x2B0)
	class ULatencyGraph : public UUserWidget	
	{
	public:
		FColor TotalLatencyLineColor; // 0x2B0(0x4)
		FColor GameLatencyLineColor; // 0x2B4(0x4)
		FColor RenderLatencyLineColor; // 0x2B8(0x4)
		FColor DriverLatencyLineColor; // 0x2BC(0x4)
		FColor OSWorkQueueLatencyLineColor; // 0x2C0(0x4)
		FColor GPURenderLatencyLineColor; // 0x2C4(0x4)
		FColor BackgroundColor; // 0x2C8(0x4)
		float MaxLatencyToGraph; // 0x2CC(0x4)
		FVector2D DesiredSize; // 0x2D0(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x2E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LatencyUI.LatencyGraph");
			return ret;
		}
	};


	// Class LatencyUI.LatencyWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x370 - 0x2B0)
	class ULatencyWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* TotalLatencyUI; // 0x2B8(0x8)
		UCommonTextBlock* GameLatencyUI; // 0x2C0(0x8)
		UCommonTextBlock* RenderLatencyUI; // 0x2C8(0x8)
		UCommonTextBlock* OSWorkLatencyUI; // 0x2D0(0x8)
		UCommonTextBlock* DriverLatencyUI; // 0x2D8(0x8)
		UCommonTextBlock* GPURenderLatencyUI; // 0x2E0(0x8)
		UCommonTextBlock* TweakLatencyUI; // 0x2E8(0x8)
		unsigned char UnknownData01_7[0x80]; // 0x2F0(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LatencyUI.LatencyWidget");
			return ret;
		}

		void StopTimer(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF752179C00(relative to base address)
		void StartTimer(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF752179BE8(relative to base address)
	};

}
