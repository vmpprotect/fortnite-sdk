#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DagwoodCameraMode
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Valet/DagwoodCameraMode.DagwoodCameraMode_C
	// Inherited from UFortCameraMode_Dagwood -> UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E90 - 0x1E90)
	class UDagwoodCameraMode_C : public UFortCameraMode_Dagwood	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/DagwoodCameraMode.DagwoodCameraMode_C");
			return ret;
		}
	};

}
