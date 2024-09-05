#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OptimusSettings
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class OptimusSettings.OptimusSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UOptimusSettings : public UDeveloperSettings	
	{
	public:
		EOptimusDefaultDeformerMode DefaultMode; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UMeshDeformer*> DefaultDeformer; // 0x38(0x20)
		TWeakObjectPtr<UMeshDeformer*> DefaultRecomputeTangentDeformer; // 0x58(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OptimusSettings.OptimusSettings");
			return ret;
		}
	};

}
