#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MediaPlate
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MediaPlate.MediaPlate
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AMediaPlate : public AActor	
	{
	public:
		UMediaPlateComponent* MediaPlateComponent; // 0x290(0x8)
		UStaticMeshComponent* StaticMeshComponent; // 0x298(0x8)

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
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		bool bPlayOnOpen; // 0xA8(0x1)
		bool bAutoPlay; // 0xA9(0x1)
		bool bEnableAudio; // 0xAA(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xAB(0x1) UNKNOWN PROPERTY
		float StartTime; // 0xAC(0x4)
		UMediaSoundComponent* SoundComponent; // 0xB0(0x8)
		UStaticMeshComponent* StaticMeshComponent; // 0xB8(0x8)
		TArray<UStaticMeshComponent*> Letterboxes; // 0xC0(0x10)
		FMediaPlateResource MediaPlateResource; // 0xD0(0x68)
		int32_t PlaylistIndex; // 0x138(0x4)
		FMediaSourceCacheSettings CacheSettings; // 0x13C(0x8)
		bool bIsMediaPlatePlaying; // 0x144(0x1)
		unsigned char UnknownData02_6[0x13]; // 0x145(0x13) UNKNOWN PROPERTY
		bool bPlayOnlyWhenVisible; // 0x158(0x1)
		bool bLoop; // 0x159(0x1)
		EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations; // 0x15A(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x15B(0x1) UNKNOWN PROPERTY
		float MipMapBias; // 0x15C(0x4)
		bool bIsAspectRatioAuto; // 0x160(0x1)
		bool bEnableMipMapUpscaling; // 0x161(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x162(0x2) UNKNOWN PROPERTY
		int32_t MipLevelToUpscale; // 0x164(0x4)
		bool bAdaptivePoleMipUpscaling; // 0x168(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x169(0x3) UNKNOWN PROPERTY
		float LetterboxAspectRatio; // 0x16C(0x4)
		unsigned char UnknownData06_6[0x8]; // 0x170(0x8) UNKNOWN PROPERTY
		FVector2D MeshRange; // 0x178(0x10)
		TArray<UMediaTexture*> MediaTextures; // 0x188(0x10)
		FMediaTextureResourceSettings MediaTextureSettings; // 0x198(0x2)
		unsigned char UnknownData07_6[0x6]; // 0x19A(0x6) UNKNOWN PROPERTY
		UMediaPlayer* MediaPlayer; // 0x1A0(0x8)
		unsigned char UnknownData08_7[0x40]; // 0x1A8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaPlate.MediaPlateComponent");
			return ret;
		}

		void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CEC7C(relative to base address)
		void SetMeshRange(FVector2D InMeshRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7523CEB68(relative to base address)
		void SetLoop(bool bInLoop); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CEAD8(relative to base address)
		void SetLetterboxAspectRatio(float AspectRatio); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CEA58(relative to base address)
		void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CE9C8(relative to base address)
		bool Seek(FTimespan& Time); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7523CE930(relative to base address)
		bool Rewind(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CE900(relative to base address)
		void Play(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CE8DC(relative to base address)
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CE8BC(relative to base address)
		void Open(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CE8A8(relative to base address)
		void OnMediaSuspended(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7523CE890(relative to base address)
		void OnMediaResumed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7523CE878(relative to base address)
		void OnMediaOpened(FString DeviceUrl); // Flags: Final|Native|Private, Memory Exec: 0x7FF7523CE7DC(relative to base address)
		void OnMediaEnd(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7523CE7C8(relative to base address)
		bool IsMediaPlatePlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7523CE7B0(relative to base address)
		FVector2D GetMeshRange(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7523CE794(relative to base address)
		UMediaTexture GetMediaTexture(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CE708(relative to base address)
		UMediaPlayer GetMediaPlayer(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CE6F0(relative to base address)
		bool GetLoop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7523CE6D8(relative to base address)
		float GetLetterboxAspectRatio(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3C1308(relative to base address)
		bool GetIsAspectRatioAuto(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFBAAD0(relative to base address)
		void Close(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7523CE6C4(relative to base address)
	};

}
