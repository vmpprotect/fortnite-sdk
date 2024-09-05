#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeEditCameraModeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CreativeEditCameraModeRuntime.FortCreativeEditCameraController
	// Inherited from AFortFirstPersonCameraController -> AFortCustomCameraController -> AInfo -> AActor -> UObject
	// Size: 0x30 (0x450 - 0x420)
	class AFortCreativeEditCameraController : public AFortFirstPersonCameraController	
	{
	public:
		FCreativeOptionVariableBase WantsToImmersiveEdit; // 0x420(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x428(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController");
			return ret;
		}

		void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 0x7FF414D61D38
		void OnWantsToImmersiveEditChanged(UFortCreativeOption CreativeOption, char IndexValue); // Flags: Final|Native|Private 0x7FF414D61C58
		void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled); // Flags: Final|Native|Private 0x7FF414D61B78
		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414D61A98
	};

}
