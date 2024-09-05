#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreativeEditCameraModeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CreativeEditCameraModeRuntime.FortCreativeEditCameraController
	// Inherited from AFortFirstPersonCameraController -> AFortCustomCameraController -> AInfo -> AActor -> UObject
	// Size: 0x30 (0x4A8 - 0x478)
	class AFortCreativeEditCameraController : public AFortFirstPersonCameraController	
	{
	public:
		FCreativeOptionVariableBase WantsToImmersiveEdit; // 0x478(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x480(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController");
			return ret;
		}

		void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF7515E8A28(relative to base address)
		void OnWantsToImmersiveEditChanged(UFortCreativeOption* CreativeOption, char IndexValue); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E8964(relative to base address)
		void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E88E4(relative to base address)
		void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E8820(relative to base address)
	};

}
