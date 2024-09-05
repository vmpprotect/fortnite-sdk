#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FabricSettingsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FabricSettingsRuntime.FabricClientSettingRecordPartition
	// Inherited from UFortClientSettingRecordPartition -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFabricClientSettingRecordPartition : public UFortClientSettingRecordPartition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricSettingsRuntime.FabricClientSettingRecordPartition");
			return ret;
		}
	};

}
