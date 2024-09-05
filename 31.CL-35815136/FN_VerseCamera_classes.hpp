#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseCamera
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseCamera.VerseCameraDirectorBase
	// Inherited from UCameraDirector -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseCameraDirectorBase : public UCameraDirector	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseCamera.VerseCameraDirectorBase");
			return ret;
		}
	};


	// Class VerseCamera.VerseCameraMode
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseCameraMode : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseCamera.VerseCameraMode");
			return ret;
		}
	};


	// Class VerseCamera.VerseCameraNode
	// Inherited from UCameraNode -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UVerseCameraNode : public UCameraNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseCamera.VerseCameraNode");
			return ret;
		}
	};


	// Class VerseCamera.VersePlayerCameraViewComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UVersePlayerCameraViewComponent : public UActorComponent	
	{
	public:
		UObject* CameraBehaviorComponent; // 0xA0(0x8)
		UVerseCameraDirectorBase* CameraDirector; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseCamera.VersePlayerCameraViewComponent");
			return ret;
		}

		void OnRep_CameraDirector(UVerseCameraDirectorBase* OldValue); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C8DF63C(relative to base address)
		void OnRep_CameraBehaviorComponent(UObject* OldValue); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7504214A4(relative to base address)
	};

}
