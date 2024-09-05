#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CinematicCamera
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CinematicCamera.CameraRig_Crane
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class ACameraRig_Crane : public AActor	
	{
	public:
		float CranePitch; // 0x290(0x4)
		float CraneYaw; // 0x294(0x4)
		float CraneArmLength; // 0x298(0x4)
		bool bLockMountPitch; // 0x29C(0x1)
		bool bLockMountYaw; // 0x29D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x29E(0x2) UNKNOWN PROPERTY
		USceneComponent TransformComponent; // 0x2A0(0x8)
		USceneComponent CraneYawControl; // 0x2A8(0x8)
		USceneComponent CranePitchControl; // 0x2B0(0x8)
		USceneComponent CraneCameraMount; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CinematicCamera.CameraRig_Crane");
			return ret;
		}
	};


	// Class CinematicCamera.CameraRig_Rail
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ACameraRig_Rail : public AActor	
	{
	public:
		float CurrentPositionOnRail; // 0x290(0x4)
		bool bLockOrientationToRail; // 0x294(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x295(0x3) UNKNOWN PROPERTY
		USceneComponent TransformComponent; // 0x298(0x8)
		USplineComponent RailSplineComponent; // 0x2A0(0x8)
		USceneComponent RailCameraMount; // 0x2A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CinematicCamera.CameraRig_Rail");
			return ret;
		}

		USplineComponent GetRailSplineComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8F78
	};


	// Class CinematicCamera.CineCameraActor
	// Inherited from ACameraActor -> AActor -> UObject
	// Size: 0x70 (0xA20 - 0x9B0)
	class ACineCameraActor : public ACameraActor	
	{
	public:
		FCameraLookatTrackingSettings LookatTrackingSettings; // 0x9B0(0x60)
		unsigned char UnknownData01_7[0x10]; // 0xA10(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CinematicCamera.CineCameraActor");
			return ret;
		}

		UCineCameraComponent GetCineCameraComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C9138
	};


	// Class CinematicCamera.CineCameraComponent
	// Inherited from UCameraComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x110 (0xAE0 - 0x9D0)
	class UCineCameraComponent : public UCameraComponent	
	{
	public:
		FCameraFilmbackSettings FilmbackSettings; // 0x9D0(0xC)
		FCameraFilmbackSettings Filmback; // 0x9DC(0xC)
		FCameraLensSettings LensSettings; // 0x9E8(0x1C)
		unsigned char UnknownData03_6[0x4]; // 0xA04(0x4) UNKNOWN PROPERTY
		FCameraFocusSettings FocusSettings; // 0xA08(0x58)
		FPlateCropSettings CropSettings; // 0xA60(0x4)
		float CurrentFocalLength; // 0xA64(0x4)
		float CurrentAperture; // 0xA68(0x4)
		float CurrentFocusDistance; // 0xA6C(0x4)
		bool bOverride_CustomNearClippingPlane : 1; // 0xA70:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0xA71(0x3) UNKNOWN PROPERTY
		float CustomNearClippingPlane; // 0xA74(0x4)
		unsigned char UnknownData05_6[0x8]; // 0xA78(0x8) UNKNOWN PROPERTY
		TArray FilmbackPresets; // 0xA80(0x10)
		TArray LensPresets; // 0xA90(0x10)
		FString DefaultFilmbackPresetName; // 0xAA0(0x10)
		FString DefaultFilmbackPreset; // 0xAB0(0x10)
		FString DefaultLensPresetName; // 0xAC0(0x10)
		float DefaultLensFocalLength; // 0xAD0(0x4)
		float DefaultLensFStop; // 0xAD4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CinematicCamera.CineCameraComponent");
			return ret;
		}

		void SetLensSettings(FCameraLensSettings& NewLensSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CB438
		void SetLensPresetByName(FString InPresetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CB358
		void SetFocusSettings(FCameraFocusSettings& NewFocusSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CB278
		void SetFilmbackPresetByName(FString InPresetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CB198
		void SetFilmback(FCameraFilmbackSettings& NewFilmback); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CB0B8
		void SetCustomNearClippingPlane(float NewCustomNearClippingPlane); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CAFD8
		void SetCurrentFocalLength(float InFocalLength); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CAEF8
		void SetCurrentAperture(float NewCurrentAperture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CAE18
		void SetCropSettings(FPlateCropSettings& NewCropSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CAD38
		void SetCropPresetByName(FString InPresetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CAC58
		float GetVerticalFieldOfView(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144CAB78
		TArray GetLensPresetsCopy(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CAA98
		FString GetLensPresetName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144CA9B8
		float GetHorizontalFieldOfView(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144CA8D8
		TArray GetFilmbackPresetsCopy(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CA7F8
		FString GetFilmbackPresetName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144CA718
		FString GetDefaultFilmbackPresetName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144CA638
		FString GetCropPresetName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144CA558
	};


	// Class CinematicCamera.CineCameraSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UCineCameraSettings : public UDeveloperSettings	
	{
	public:
		FString DefaultLensPresetName; // 0x30(0x10)
		float DefaultLensFocalLength; // 0x40(0x4)
		float DefaultLensFStop; // 0x44(0x4)
		TArray LensPresets; // 0x48(0x10)
		FString DefaultFilmbackPreset; // 0x58(0x10)
		TArray FilmbackPresets; // 0x68(0x10)
		FString DefaultCropPresetName; // 0x78(0x10)
		TArray CropPresets; // 0x88(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x98(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CinematicCamera.CineCameraSettings");
			return ret;
		}

		void SetLensPresets(TArray& InLensPresets); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF4144CC158
		void SetFilmbackPresets(TArray& InFilmbackPresets); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF4144CC078
		void SetDefaultLensPresetName(FString InDefaultLensPresetName); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4144CBF98
		void SetDefaultLensFStop(float InDefaultLensFStop); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4144CBEB8
		void SetDefaultLensFocalLength(float InDefaultLensFocalLength); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4144CBDD8
		void SetDefaultFilmbackPreset(FString InDefaultFilmbackPreset); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4144CBCF8
		void SetDefaultCropPresetName(FString InDefaultCropPresetName); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4144CBC18
		void SetCropPresets(TArray& InCropPresets); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF4144CBB38
		TArray GetLensPresetNames(); // Flags: Final|Native|Private|Const 0x7FF4144CBA58
		bool GetLensPresetByName(FString PresetName, FCameraLensSettings& LensSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CB978
		TArray GetFilmbackPresetNames(); // Flags: Final|Native|Private|Const 0x7FF4144CB898
		bool GetFilmbackPresetByName(FString PresetName, FCameraFilmbackSettings& FilmbackSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CB7B8
		TArray GetCropPresetNames(); // Flags: Final|Native|Private|Const 0x7FF4144CB6D8
		bool GetCropPresetByName(FString PresetName, FPlateCropSettings& CropSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CB5F8
		UCineCameraSettings GetCineCameraSettings(); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF4144CB518
	};

}
