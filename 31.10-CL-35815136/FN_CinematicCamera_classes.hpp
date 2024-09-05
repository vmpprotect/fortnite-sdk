#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CinematicCamera
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x2]; // 0x29E(0x2) UNKNOWN PROPERTY
		USceneComponent* TransformComponent; // 0x2A0(0x8)
		USceneComponent* CraneYawControl; // 0x2A8(0x8)
		USceneComponent* CranePitchControl; // 0x2B0(0x8)
		USceneComponent* CraneCameraMount; // 0x2B8(0x8)

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
		unsigned char UnknownData00_6[0x3]; // 0x295(0x3) UNKNOWN PROPERTY
		USceneComponent* TransformComponent; // 0x298(0x8)
		USplineComponent* RailSplineComponent; // 0x2A0(0x8)
		USceneComponent* RailCameraMount; // 0x2A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CinematicCamera.CameraRig_Rail");
			return ret;
		}

		USplineComponent GetRailSplineComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2DA7CC(relative to base address)
	};


	// Class CinematicCamera.CineCameraActor
	// Inherited from ACameraActor -> AActor -> UObject
	// Size: 0x70 (0xA20 - 0x9B0)
	class ACineCameraActor : public ACameraActor	
	{
	public:
		FCameraLookatTrackingSettings LookatTrackingSettings; // 0x9B0(0x60)
		unsigned char UnknownData00_7[0x10]; // 0xA10(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CinematicCamera.CineCameraActor");
			return ret;
		}

		UCineCameraComponent GetCineCameraComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D9FEC(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0xA04(0x4) UNKNOWN PROPERTY
		FCameraFocusSettings FocusSettings; // 0xA08(0x58)
		FPlateCropSettings CropSettings; // 0xA60(0x4)
		float CurrentFocalLength; // 0xA64(0x4)
		float CurrentAperture; // 0xA68(0x4)
		float CurrentFocusDistance; // 0xA6C(0x4)
		bool bOverride_CustomNearClippingPlane : 1; // 0xA70:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0xA71(0x3) UNKNOWN PROPERTY
		float CustomNearClippingPlane; // 0xA74(0x4)
		unsigned char UnknownData02_6[0x8]; // 0xA78(0x8) UNKNOWN PROPERTY
		TArray<FNamedFilmbackPreset> FilmbackPresets; // 0xA80(0x10)
		TArray<FNamedLensPreset> LensPresets; // 0xA90(0x10)
		FString DefaultFilmbackPresetName; // 0xAA0(0x10)
		FString DefaultFilmbackPreset; // 0xAB0(0x10)
		FString DefaultLensPresetName; // 0xAC0(0x10)
		float DefaultLensFocalLength; // 0xAD0(0x4)
		float DefaultLensFStop; // 0xAD4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CinematicCamera.CineCameraComponent");
			return ret;
		}

		void SetLensSettings(FCameraLensSettings& NewLensSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DB314(relative to base address)
		void SetLensPresetByName(FString InPresetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DB1C4(relative to base address)
		void SetFocusSettings(FCameraFocusSettings& NewFocusSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DB114(relative to base address)
		void SetFilmbackPresetByName(FString InPresetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DAFC4(relative to base address)
		void SetFilmback(FCameraFilmbackSettings& NewFilmback); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DAF14(relative to base address)
		void SetCustomNearClippingPlane(float NewCustomNearClippingPlane); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DAB04(relative to base address)
		void SetCurrentFocalLength(float InFocalLength); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DAA7C(relative to base address)
		void SetCurrentAperture(float NewCurrentAperture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DA9F4(relative to base address)
		void SetCropSettings(FPlateCropSettings& NewCropSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DA95C(relative to base address)
		void SetCropPresetByName(FString InPresetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DA80C(relative to base address)
		float GetVerticalFieldOfView(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2DA7E4(relative to base address)
		TArray GetLensPresetsCopy(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DA700(relative to base address)
		FString GetLensPresetName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2DA684(relative to base address)
		float GetHorizontalFieldOfView(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2DA534(relative to base address)
		TArray GetFilmbackPresetsCopy(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2DA468(relative to base address)
		FString GetFilmbackPresetName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2DA38C(relative to base address)
		FString GetDefaultFilmbackPresetName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2DA208(relative to base address)
		FString GetCropPresetName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2DA134(relative to base address)
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
		TArray<FNamedLensPreset> LensPresets; // 0x48(0x10)
		FString DefaultFilmbackPreset; // 0x58(0x10)
		TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x68(0x10)
		FString DefaultCropPresetName; // 0x78(0x10)
		TArray<FNamedPlateCropPreset> CropPresets; // 0x88(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x98(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CinematicCamera.CineCameraSettings");
			return ret;
		}

		void SetLensPresets(TArray<FNamedLensPreset>& InLensPresets); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DB254(relative to base address)
		void SetFilmbackPresets(TArray<FNamedFilmbackPreset>& InFilmbackPresets); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DB054(relative to base address)
		void SetDefaultLensPresetName(FString InDefaultLensPresetName); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74C2DAE4C(relative to base address)
		void SetDefaultLensFStop(float InDefaultLensFStop); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74C2DAD14(relative to base address)
		void SetDefaultLensFocalLength(float InDefaultLensFocalLength); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74C2DADB0(relative to base address)
		void SetDefaultFilmbackPreset(FString InDefaultFilmbackPreset); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74C2DAC4C(relative to base address)
		void SetDefaultCropPresetName(FString InDefaultCropPresetName); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74C2DAB84(relative to base address)
		void SetCropPresets(TArray<FNamedPlateCropPreset>& InCropPresets); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DA8A4(relative to base address)
		TArray GetLensPresetNames(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF74C2DA6C4(relative to base address)
		bool GetLensPresetByName(FString PresetName, FCameraLensSettings& LensSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DA55C(relative to base address)
		TArray GetFilmbackPresetNames(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF74C2DA42C(relative to base address)
		bool GetFilmbackPresetByName(FString PresetName, FCameraFilmbackSettings& FilmbackSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DA26C(relative to base address)
		TArray GetCropPresetNames(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF74C2DA1CC(relative to base address)
		bool GetCropPresetByName(FString PresetName, FPlateCropSettings& CropSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2DA034(relative to base address)
		UCineCameraSettings GetCineCameraSettings(); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74C2DA004(relative to base address)
	};

}
