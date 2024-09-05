#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CameraModesRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CameraModesRuntime.CameraModes_FirstPersonCameraController
	// Inherited from AFortFirstPersonCameraController -> AFortCustomCameraController -> AInfo -> AActor -> UObject
	// Size: 0x30 (0x450 - 0x420)
	class ACameraModes_FirstPersonCameraController : public AFortFirstPersonCameraController	
	{
	public:
		float HeadMotionScalar; // 0x420(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x424(0x4) UNKNOWN PROPERTY
		TArray AllowedWeaponClassList; // 0x428(0x10)
		USkeletalMeshComponentBudgeted FirstPersonSkeletalMeshComp; // 0x438(0x8)
		USkeletalMeshComponentBudgeted ThirdPersonWeaponMeshComp; // 0x440(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x448(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CameraModesRuntime.CameraModes_FirstPersonCameraController");
			return ret;
		}

		void SetWPOEnabled(bool bEnable); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D64118
		void SetVisibilityForProxyMeshes(bool bNewVisibility); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D64038
		void OnWeaponUnHolstered(); // Flags: Final|Native|Private 0x7FF414D63F58
		void OnWeaponHolstered(); // Flags: Final|Native|Private 0x7FF414D63E78
		void OnLocalPlayerVisibilityChanged(bool bShouldBeVisible); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414D63D98
		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414D63CB8
		void CreateFirstPersonProxyMeshes(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D63BD8
	};


	// Class CameraModesRuntime.FortCheatManager_CameraModes
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortCheatManager_CameraModes : public UChildCheatManager	
	{
	public:
		UClass CameraControllerClass; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CameraModesRuntime.FortCheatManager_CameraModes");
			return ret;
		}

		void EnableFpCameraForAllPlayers(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D642D8
		void EnableFpCamera(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D641F8
	};

}
