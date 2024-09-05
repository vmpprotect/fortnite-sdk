#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Rock_Vehicle_CameraMode
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /RockVehicle/Rock_Vehicle_CameraMode.Rock_Vehicle_CameraMode_C
	// Inherited from URockVehicleCameraMode -> UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x2050 - 0x2050)
	class URock_Vehicle_CameraMode_C : public URockVehicleCameraMode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Rock_Vehicle_CameraMode.Rock_Vehicle_CameraMode_C");
			return ret;
		}
	};

}
