#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MediaPlate
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MediaPlate.MediaPlate
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AMediaPlate : public AActor	
	{
	public:
		UMediaPlateComponent MediaPlateComponent; // 0x290(0x8)
		UStaticMeshComponent StaticMeshComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaPlate.MediaPlate");
			return ret;
		}
	};


	// Class MediaPlate.MediaPlateAssetUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMediaPlateAssetUserData : public UAssetUserData	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaPlate.MediaPlateAssetUserData");
			return ret;
		}
	};


	// Class MediaPlate.MediaPlateComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x148 (0x1E8 - 0xA0)
	class UMediaPlateComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData09_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		bool bPlayOnOpen; // 0xA8(0x1)
		bool bAutoPlay; // 0xA9(0x1)
		bool bEnableAudio; // 0xAA(0x1)
		unsigned char UnknownData10_6[0x1]; // 0xAB(0x1) UNKNOWN PROPERTY
		float StartTime; // 0xAC(0x4)
		UMediaSoundComponent SoundComponent; // 0xB0(0x8)
		UStaticMeshComponent StaticMeshComponent; // 0xB8(0x8)
		TArray Letterboxes; // 0xC0(0x10)
		FMediaPlateResource MediaPlateResource; // 0xD0(0x68)
		int32_t PlaylistIndex; // 0x138(0x4)
		FMediaSourceCacheSettings CacheSettings; // 0x13C(0x8)
		bool bIsMediaPlatePlaying; // 0x144(0x1)
		unsigned char UnknownData11_6[0x13]; // 0x145(0x13) UNKNOWN PROPERTY
		bool bPlayOnlyWhenVisible; // 0x158(0x1)
		bool bLoop; // 0x159(0x1)
		EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations; // 0x15A(0x1)
		unsigned char UnknownData12_6[0x1]; // 0x15B(0x1) UNKNOWN PROPERTY
		float MipMapBias; // 0x15C(0x4)
		bool bIsAspectRatioAuto; // 0x160(0x1)
		bool bEnableMipMapUpscaling; // 0x161(0x1)
		unsigned char UnknownData13_6[0x2]; // 0x162(0x2) UNKNOWN PROPERTY
		int32_t MipLevelToUpscale; // 0x164(0x4)
		bool bAdaptivePoleMipUpscaling; // 0x168(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x169(0x3) UNKNOWN PROPERTY
		float LetterboxAspectRatio; // 0x16C(0x4)
		unsigned char UnknownData15_6[0x8]; // 0x170(0x8) UNKNOWN PROPERTY
		FVector2D MeshRange; // 0x178(0x10)
		TArray MediaTextures; // 0x188(0x10)
		FMediaTextureResourceSettings MediaTextureSettings; // 0x198(0x2)
		unsigned char UnknownData16_6[0x6]; // 0x19A(0x6) UNKNOWN PROPERTY
		UMediaPlayer MediaPlayer; // 0x1A0(0x8)
		unsigned char UnknownData17_7[0x40]; // 0x1A8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaPlate.MediaPlateComponent");
			return ret;
		}

		void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFD940
		void SetMeshRange(FVector2D InMeshRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414EFD860
		void SetLoop(bool bInLoop); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFD780
		void SetLetterboxAspectRatio(float AspectRatio); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFD6A0
		void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFD5C0
		bool Seek(FTimespan& Time); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EFD4E0
		bool Rewind(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFD400
		void Play(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFD320
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFD240
		void Open(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFD160
		void OnMediaSuspended(); // Flags: Final|Native|Private 0x7FF414EFD080
		void OnMediaResumed(); // Flags: Final|Native|Private 0x7FF414EFCFA0
		void OnMediaOpened(FString DeviceUrl); // Flags: Final|Native|Private 0x7FF414EFCEC0
		void OnMediaEnd(); // Flags: Final|Native|Private 0x7FF414EFCDE0
		bool IsMediaPlatePlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EFCD00
		FVector2D GetMeshRange(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EFCC20
		UMediaTexture GetMediaTexture(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFCB40
		UMediaPlayer GetMediaPlayer(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFCA60
		void GetLoop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414EFC980
		void GetLetterboxAspectRatio(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFC8A0
		bool GetIsAspectRatioAuto(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EFC7C0
		void Close(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EFC6E0
	};

}
