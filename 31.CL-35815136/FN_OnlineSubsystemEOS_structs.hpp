#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OnlineSubsystemEOS
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct OnlineSubsystemEOS.ArtifactSettings
	// Size: 0x70 (0x70 - 0x0)
	struct FArtifactSettings	
	{
	public:
		FString ArtifactName; // 0x0(0x10)
		FString ClientId; // 0x10(0x10)
		FString ClientSecret; // 0x20(0x10)
		FString ProductID; // 0x30(0x10)
		FString SandboxId; // 0x40(0x10)
		FString DeploymentId; // 0x50(0x10)
		FString ClientEncryptionKey; // 0x60(0x10)
	};

}
