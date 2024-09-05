#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Rock_Vehicle_CameraMode
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /RockVehicle/Rock_Vehicle_CameraMode.Rock_Vehicle_CameraMode_C
	// Inherited from URockVehicleCameraMode -> UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1F20 - 0x1F20)
	class URock_Vehicle_CameraMode_C : public URockVehicleCameraMode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Rock_Vehicle_CameraMode.Rock_Vehicle_CameraMode_C");
			return ret;
		}
	};

}
