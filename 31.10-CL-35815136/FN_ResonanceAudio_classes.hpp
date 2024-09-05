#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ResonanceAudio
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
	// Inherited from USoundfieldEncodingSettingsBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase	
	{
	public:
		EResonanceRenderMode RenderMode; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResonanceAudio.ResonanceAudioSoundfieldSettings");
			return ret;
		}
	};


	// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary");
			return ret;
		}

		void SetGlobalReverbPreset(UResonanceAudioReverbPluginPreset* InPreset); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75213D1B0(relative to base address)
		UResonanceAudioReverbPluginPreset GetGlobalReverbPreset(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75213D0B4(relative to base address)
	};


	// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
	// Inherited from AActor -> UObject
	// Size: 0x80 (0x310 - 0x290)
	class AResonanceAudioDirectivityVisualizer : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x70]; // 0x290(0x70) UNKNOWN PROPERTY
		UMaterial* Material; // 0x300(0x8)
		UResonanceAudioSpatializationSourceSettings* Settings; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResonanceAudio.ResonanceAudioDirectivityVisualizer");
			return ret;
		}
	};


	// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x108 (0x170 - 0x68)
	class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x98]; // 0x68(0x98) UNKNOWN PROPERTY
		FResonanceAudioReverbPluginSettings Settings; // 0x100(0x70)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResonanceAudio.ResonanceAudioReverbPluginPreset");
			return ret;
		}

		void SetRoomRotation(FQuat& InRotation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75213D73C(relative to base address)
		void SetRoomPosition(FVector& InPosition); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75213D678(relative to base address)
		void SetRoomMaterials(TArray<ERaMaterialName>& InMaterials); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75213D5BC(relative to base address)
		void SetRoomDimensions(FVector& InDimensions); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75213D4F8(relative to base address)
		void SetReverbTimeModifier(float InReverbTimeModifier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75213D468(relative to base address)
		void SetReverbGain(float InReverbGain); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75213D3D8(relative to base address)
		void SetReverbBrightness(float InReverbBrightness); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75213D348(relative to base address)
		void SetReflectionScalar(float InReflectionScalar); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75213D2B8(relative to base address)
		void SetEnableRoomEffects(bool bInEnableRoomEffects); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75213D124(relative to base address)
	};


	// Class ResonanceAudio.ResonanceAudioSettings
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UResonanceAudioSettings : public UObject	
	{
	public:
		FSoftObjectPath OutputSubmix; // 0x28(0x18)
		ERaQualityMode QualityMode; // 0x40(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FSoftObjectPath GlobalReverbPreset; // 0x48(0x18)
		FSoftObjectPath GlobalSourcePreset; // 0x60(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResonanceAudio.ResonanceAudioSettings");
			return ret;
		}
	};


	// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
	// Inherited from USpatializationPluginSourceSettingsBase -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase	
	{
	public:
		ERaSpatializationMethod SpatializationMethod; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float Pattern; // 0x2C(0x4)
		float Sharpness; // 0x30(0x4)
		bool bToggleVisualization; // 0x34(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		float Scale; // 0x38(0x4)
		float Spread; // 0x3C(0x4)
		ERaDistanceRolloffModel Rolloff; // 0x40(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float MinDistance; // 0x44(0x4)
		float MaxDistance; // 0x48(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings");
			return ret;
		}

		void SetSoundSourceSpread(float InSpread); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4A32AC(relative to base address)
		void SetSoundSourceDirectivity(float InPattern, float InSharpness); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75213D7C4(relative to base address)
	};

}
