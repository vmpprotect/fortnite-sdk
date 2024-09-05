#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ElectraDataChannelRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ElectraDataChannelRuntime.ElectraDataChannelPlayer
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class AElectraDataChannelPlayer : public AActor	
	{
	public:
		FMulticastInlineDelegate OnTerminalError; // 0x290(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x2A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer");
			return ret;
		}

		void UseTimeFromMediaPlayer(UMediaPlayer InMediaPlayer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D67E58
		void PlayFromStateStreamServer(FString InStatePlaylistURL); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D67D78
		void PlayFromMediaPlayer(UMediaPlayer InMediaPlayer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D67C98
		void PlayFromFile(FString InFilename); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D67BB8
		void EndPlayback(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D67AD8
	};


	// Class ElectraDataChannelRuntime.ElectraDataChannelRecorder
	// Inherited from AActor -> UObject
	// Size: 0x38 (0x2C8 - 0x290)
	class AElectraDataChannelRecorder : public AActor	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x290(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder");
			return ret;
		}

		void UseTimeFromMediaPlayer(UMediaPlayer InMediaPlayer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D681D8
		void StartRecording(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D680F8
		void RecordToFile(FString InFilename); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D68018
		void EndRecording(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D67F38
	};


	// Class ElectraDataChannelRuntime.ElectraDataChannelTarget
	// Inherited from AActor -> UObject
	// Size: 0x78 (0x308 - 0x290)
	class AElectraDataChannelTarget : public AActor	
	{
	public:
		unsigned char UnknownData01_1[0x78]; // 0x290(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ElectraDataChannelRuntime.ElectraDataChannelTarget");
			return ret;
		}

		void SetTargetAlias(FString InAlias); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D68398
		FString GetTargetAlias(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D682B8
	};

}
