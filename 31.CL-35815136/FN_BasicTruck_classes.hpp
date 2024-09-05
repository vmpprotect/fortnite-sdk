#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BasicTruck
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Valet/BasicTruck/Valet_BasicTruck_Vehicle.Valet_BasicTruck_Vehicle_C
	// Inherited from AValet_BasicCar_Vehicle_C -> AFortDagwoodVehicle -> AFortAthenaSKMotorVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x74 (0x37C4 - 0x3750)
	class AValet_BasicTruck_Vehicle_C : public AValet_BasicCar_Vehicle_C	
	{
	public:
		FScalableFloat HotfixScalePontoonTickRateFront; // 0x3750(0x28)
		FScalableFloat HotfixScalePontoonTickRateRear; // 0x3778(0x28)
		TArray<UMaterialInterface*> SK_Mat2_Array; // 0x37A0(0x10)
		TArray<UMaterialInterface*> SK_Mat0_Array_0; // 0x37B0(0x10)
		int32_t MatIndex; // 0x37C0(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicTruck/Valet_BasicTruck_Vehicle.Valet_BasicTruck_Vehicle_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Valet/BasicTruck/Valet_BasicTruck_VehicleConfigs_BR.Valet_BasicTruck_VehicleConfigs_BR_C
	// Inherited from UFortDagwoodVehicleConfigs -> UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x0 (0xF18 - 0xF18)
	class UValet_BasicTruck_VehicleConfigs_BR_C : public UFortDagwoodVehicleConfigs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicTruck/Valet_BasicTruck_VehicleConfigs_BR.Valet_BasicTruck_VehicleConfigs_BR_C");
			return ret;
		}
	};


	// Class /Valet/BasicTruck/Valet_BasicTruck_VehicleConfigs.Valet_BasicTruck_VehicleConfigs_C
	// Inherited from UFortDagwoodVehicleConfigs -> UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x0 (0xF18 - 0xF18)
	class UValet_BasicTruck_VehicleConfigs_C : public UFortDagwoodVehicleConfigs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicTruck/Valet_BasicTruck_VehicleConfigs.Valet_BasicTruck_VehicleConfigs_C");
			return ret;
		}
	};


	// Class /Valet/BasicTruck/Valet_BasicTruck_CameraMode.Valet_BasicTruck_CameraMode_C
	// Inherited from UDagwoodCameraMode_C -> UFortCameraMode_Dagwood -> UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1E90 - 0x1E90)
	class UValet_BasicTruck_CameraMode_C : public UDagwoodCameraMode_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicTruck/Valet_BasicTruck_CameraMode.Valet_BasicTruck_CameraMode_C");
			return ret;
		}
	};

}
