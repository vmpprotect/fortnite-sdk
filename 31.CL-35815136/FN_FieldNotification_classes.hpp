#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FieldNotification
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FieldNotification.NotifyFieldValueChanged
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNotifyFieldValueChanged : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FieldNotification.NotifyFieldValueChanged");
			return ret;
		}
	};

}
