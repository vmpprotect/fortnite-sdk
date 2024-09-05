#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ResonanceAudio
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
	// Inherited from USoundfieldEncodingSettingsBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase	
	{
	public:
		EResonanceRenderMode RenderMode; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

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

		void SetGlobalReverbPreset(UResonanceAudioReverbPluginPreset InPreset); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EBA260
		UResonanceAudioReverbPluginPreset GetGlobalReverbPreset(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EBA180
	};


	// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
	// Inherited from AActor -> UObject
	// Size: 0x80 (0x310 - 0x290)
	class AResonanceAudioDirectivityVisualizer : public AActor	
	{
	public:
		unsigned char UnknownData01_3[0x70]; // 0x290(0x70) UNKNOWN PROPERTY
		UMaterial Material; // 0x300(0x8)
		UResonanceAudioSpatializationSourceSettings Settings; // 0x308(0x8)

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
		unsigned char UnknownData01_3[0x98]; // 0x68(0x98) UNKNOWN PROPERTY
		FResonanceAudioReverbPluginSettings Settings; // 0x100(0x70)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResonanceAudio.ResonanceAudioReverbPluginPreset");
			return ret;
		}

		void SetRoomRotation(FQuat& InRotation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EBAA40
		void SetRoomPosition(FVector& InPosition); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EBA960
		void SetRoomMaterials(TArray& InMaterials); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EBA880
		void SetRoomDimensions(FVector& InDimensions); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EBA7A0
		void SetReverbTimeModifier(float InReverbTimeModifier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EBA6C0
		void SetReverbGain(float InReverbGain); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EBA5E0
		void SetReverbBrightness(float InReverbBrightness); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EBA500
		void SetReflectionScalar(float InReflectionScalar); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EBA420
		void SetEnableRoomEffects(bool bInEnableRoomEffects); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EBA340
	};


	// Class ResonanceAudio.ResonanceAudioSettings
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UResonanceAudioSettings : public UObject	
	{
	public:
		FSoftObjectPath OutputSubmix; // 0x28(0x18)
		ERaQualityMode QualityMode; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData04_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float Pattern; // 0x2C(0x4)
		float Sharpness; // 0x30(0x4)
		bool bToggleVisualization; // 0x34(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		float Scale; // 0x38(0x4)
		float Spread; // 0x3C(0x4)
		ERaDistanceRolloffModel Rolloff; // 0x40(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float MinDistance; // 0x44(0x4)
		float MaxDistance; // 0x48(0x4)
		unsigned char UnknownData07_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings");
			return ret;
		}

		void SetSoundSourceSpread(float InSpread); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EBAC00
		void SetSoundSourceDirectivity(float InPattern, float InSharpness); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EBAB20
	};

}
