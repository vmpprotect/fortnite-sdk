#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricSettingsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
