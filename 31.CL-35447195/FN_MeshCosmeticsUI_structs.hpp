#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshCosmeticsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MeshCosmeticsUI.FortVariantRedirectorTileLoadedEmoteToRandomize
	// Size: 0x10 (0x10 - 0x0)
	struct FFortVariantRedirectorTileLoadedEmoteToRandomize	
	{
	public:
		UItemDefinitionBase LoadedEmote; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
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
		TArray ItemShopPreviewStyles; // 0x0(0x10)
		TMap ChannelOptions; // 0x10(0x50)
	};

}
