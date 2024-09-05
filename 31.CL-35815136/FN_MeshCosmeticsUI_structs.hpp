#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MeshCosmeticsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MeshCosmeticsUI.FortVariantRedirectorTileLoadedEmoteToRandomize
	// Size: 0x10 (0x10 - 0x0)
	struct FFortVariantRedirectorTileLoadedEmoteToRandomize	
	{
	public:
		UItemDefinitionBase* LoadedEmote; // 0x0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct MeshCosmeticsUI.FortVariantSprayCustomizerChannelOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FFortVariantSprayCustomizerChannelOptions	
	{
	public:
		FRotator RotationOffset; // 0x0(0x18)
	};


	// Struct MeshCosmeticsUI.FortVariantSprayCustomizerCosmeticOptions
	// Size: 0x60 (0x60 - 0x0)
	struct FFortVariantSprayCustomizerCosmeticOptions	
	{
	public:
		TArray<TWeakObjectPtr> ItemShopPreviewStyles; // 0x0(0x10)
		TMap<FGameplayTag, FFortVariantSprayCustomizerChannelOptions> ChannelOptions; // 0x10(0x50)
	};

}
