#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NNEDenoiser
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NNEDenoiser.NNEDenoiserModelData
	// Inherited from UDataAsset -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UNNEDenoiserModelData : public UDataAsset	
	{
	public:
		TWeakObjectPtr<UNNEModelData*> ModelData; // 0x30(0x20)
		TWeakObjectPtr<UDataTable*> InputMapping; // 0x50(0x20)
		TWeakObjectPtr<UDataTable*> OutputMapping; // 0x70(0x20)
		FTilingConfig TilingConfig; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNEDenoiser.NNEDenoiserModelData");
			return ret;
		}
	};


	// Class NNEDenoiser.NNEDenoiserSettings
	// Inherited from UDeveloperSettingsBackedByCVars -> UDeveloperSettings -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UNNEDenoiserSettings : public UDeveloperSettingsBackedByCVars	
	{
	public:
		TWeakObjectPtr<UNNEDenoiserModelData*> DenoiserModelData; // 0x30(0x20)
		TEnumAsByte<EDenoiserRuntimeType> RuntimeType; // 0x50(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		FString RuntimeName; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNEDenoiser.NNEDenoiserSettings");
			return ret;
		}
	};

}
