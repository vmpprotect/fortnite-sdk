#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ElectraDataChannelRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ElectraDataChannelRuntime.ElectraDataChannelPlayer
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class AElectraDataChannelPlayer : public AActor	
	{
	public:
		FMulticastInlineDelegate OnTerminalError; // 0x290(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x2A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer");
			return ret;
		}

		void UseTimeFromMediaPlayer(UMediaPlayer* InMediaPlayer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751611408(relative to base address)
		void PlayFromStateStreamServer(FString InStatePlaylistURL); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751611244(relative to base address)
		void PlayFromMediaPlayer(UMediaPlayer* InMediaPlayer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516111C4(relative to base address)
		void PlayFromFile(FString InFilename); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751611134(relative to base address)
		void EndPlayback(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516110F0(relative to base address)
	};


	// Class ElectraDataChannelRuntime.ElectraDataChannelRecorder
	// Inherited from AActor -> UObject
	// Size: 0x38 (0x2C8 - 0x290)
	class AElectraDataChannelRecorder : public AActor	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x290(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder");
			return ret;
		}

		void UseTimeFromMediaPlayer(UMediaPlayer* InMediaPlayer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751611488(relative to base address)
		void StartRecording(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516113F4(relative to base address)
		void RecordToFile(FString InFilename); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516112D4(relative to base address)
		void EndRecording(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751611104(relative to base address)
	};


	// Class ElectraDataChannelRuntime.ElectraDataChannelTarget
	// Inherited from AActor -> UObject
	// Size: 0x78 (0x308 - 0x290)
	class AElectraDataChannelTarget : public AActor	
	{
	public:
		unsigned char UnknownData00_1[0x78]; // 0x290(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ElectraDataChannelRuntime.ElectraDataChannelTarget");
			return ret;
		}

		void SetTargetAlias(FString InAlias); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751611364(relative to base address)
		FString GetTargetAlias(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751611118(relative to base address)
	};

}
