#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioExtensions
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioExtensions.AudioPropertiesBindings
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAudioPropertiesBindings : public UObject	
	{
	public:
		TMap<FName, FName> ObjectPropertyToSheetPropertyMap; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.AudioPropertiesBindings");
			return ret;
		}
	};


	// Class AudioExtensions.AudioPropertiesSheetAssetBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioPropertiesSheetAssetBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.AudioPropertiesSheetAssetBase");
			return ret;
		}
	};


	// Class AudioExtensions.SpatializationPluginSourceSettingsBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USpatializationPluginSourceSettingsBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.SpatializationPluginSourceSettingsBase");
			return ret;
		}
	};


	// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USourceDataOverridePluginSourceSettingsBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.SourceDataOverridePluginSourceSettingsBase");
			return ret;
		}
	};


	// Class AudioExtensions.OcclusionPluginSourceSettingsBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOcclusionPluginSourceSettingsBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.OcclusionPluginSourceSettingsBase");
			return ret;
		}
	};


	// Class AudioExtensions.ReverbPluginSourceSettingsBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UReverbPluginSourceSettingsBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.ReverbPluginSourceSettingsBase");
			return ret;
		}
	};


	// Class AudioExtensions.AudioPropertySheetBaseAsset
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioPropertySheetBaseAsset : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.AudioPropertySheetBaseAsset");
			return ret;
		}
	};


	// Class AudioExtensions.AudioParameterControllerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioParameterControllerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.AudioParameterControllerInterface");
			return ret;
		}

		void SetTriggerParameter(FName InName); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7478E5970(relative to base address)
		void SetStringParameter(FName InName, FString InValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BC170AC(relative to base address)
		void SetStringArrayParameter(FName InName, TArray<FString>& InValue); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC16FA0(relative to base address)
		void SetParameters_Blueprint(TArray<FAudioParameter>& InParameters); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74858C06C(relative to base address)
		void SetObjectParameter(FName InName, UObject* InValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B4E7FC(relative to base address)
		void SetObjectArrayParameter(FName InName, TArray<UObject*>& InValue); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC16EBC(relative to base address)
		void SetIntParameter(FName InName, int32_t inInt); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BC16DF8(relative to base address)
		void SetIntArrayParameter(FName InName, TArray<int32_t>& InValue); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC16D14(relative to base address)
		void SetFloatParameter(FName InName, float InFloat); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BC16C50(relative to base address)
		void SetFloatArrayParameter(FName InName, TArray<float>& InValue); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC16B30(relative to base address)
		void SetBoolParameter(FName InName, bool InBool); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF747CE2004(relative to base address)
		void SetBoolArrayParameter(FName InName, TArray<bool>& InValue); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BC16A4C(relative to base address)
		void ResetParameters(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF748D7CC28(relative to base address)
	};


	// Class AudioExtensions.AudioEndpointSettingsBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioEndpointSettingsBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.AudioEndpointSettingsBase");
			return ret;
		}
	};


	// Class AudioExtensions.DummyEndpointSettings
	// Inherited from UAudioEndpointSettingsBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDummyEndpointSettings : public UAudioEndpointSettingsBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.DummyEndpointSettings");
			return ret;
		}
	};


	// Class AudioExtensions.SoundModulatorBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USoundModulatorBase : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.SoundModulatorBase");
			return ret;
		}
	};


	// Class AudioExtensions.SoundfieldEndpointSettingsBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USoundfieldEndpointSettingsBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.SoundfieldEndpointSettingsBase");
			return ret;
		}
	};


	// Class AudioExtensions.SoundfieldEncodingSettingsBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USoundfieldEncodingSettingsBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.SoundfieldEncodingSettingsBase");
			return ret;
		}
	};


	// Class AudioExtensions.SoundfieldEffectSettingsBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USoundfieldEffectSettingsBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.SoundfieldEffectSettingsBase");
			return ret;
		}
	};


	// Class AudioExtensions.SoundfieldEffectBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USoundfieldEffectBase : public UObject	
	{
	public:
		USoundfieldEffectSettingsBase* Settings; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.SoundfieldEffectBase");
			return ret;
		}
	};


	// Class AudioExtensions.WaveformTransformationBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWaveformTransformationBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.WaveformTransformationBase");
			return ret;
		}
	};


	// Class AudioExtensions.WaveformTransformationChain
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UWaveformTransformationChain : public UObject	
	{
	public:
		TArray<UWaveformTransformationBase*> Transformations; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioExtensions.WaveformTransformationChain");
			return ret;
		}
	};

}
