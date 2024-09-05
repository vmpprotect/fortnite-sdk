#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VGameplayRst
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VGameplayRst.AudioComponentBase
	// Inherited from UEntityActorComponent -> UEntityComponent -> UObject
	// Size: 0x10 (0x98 - 0x88)
	class UAudioComponentBase : public UEntityActorComponent	
	{
	public:
		UVerseAssetPtr* SoundAsset; // 0x88(0x8)
		FActiveSoundInfo ActiveSoundInfo; // 0x90(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.AudioComponentBase");
			return ret;
		}

		void OnRep_SoundAsset(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75048AE84(relative to base address)
		void OnRep_ActiveSoundInfo(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75048AC9C(relative to base address)
	};


	// Class VGameplayRst.ControllerStateComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UControllerStateComponent : public UControllerComponent	
	{
	public:
		TArray<FString> ActiveStates; // 0xA0(0x10)
		unsigned char UnknownData00_7[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.ControllerStateComponent");
			return ret;
		}

		void OnStateChanged__DelegateSignature(FString& State, bool Active); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_ActiveStates(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75048ACCC(relative to base address)
	};


	// Class VGameplayRst.DatastoreComponentBase
	// Inherited from UEntityActorPlayerComponent -> UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x140 (0x210 - 0xD0)
	class UDatastoreComponentBase : public UEntityActorPlayerComponent	
	{
	public:
		FDatastoreState ReplicatedDatastoreState; // 0xD0(0x128)
		unsigned char UnknownData00_7[0x18]; // 0x1F8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.DatastoreComponentBase");
			return ret;
		}
	};


	// Class VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UVerseLevelStreamingPlayerControllerRpcComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent");
			return ret;
		}

		void TellServer_ClientLevelUnloaded(UVerseLevelStreamingComponentBase* LevelStreamingComponent); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74C75FA60(relative to base address)
		void TellServer_ClientLevelLoaded(UVerseLevelStreamingComponentBase* LevelStreamingComponent); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74C8DF63C(relative to base address)
	};


	// Class VGameplayRst.VerseLevelStreamingComponentBase
	// Inherited from UEntityActorComponent -> UEntityComponent -> UObject
	// Size: 0xA8 (0x130 - 0x88)
	class UVerseLevelStreamingComponentBase : public UEntityActorComponent	
	{
	public:
		FVerseLevelStreamingLevelIdentifier NewLevel; // 0x88(0x28)
		FVerseLevelStreamingLevelStatus LevelStatus; // 0xB0(0x28)
		unsigned char UnknownData00_7[0x58]; // 0xD8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.VerseLevelStreamingComponentBase");
			return ret;
		}

		void OnRep_NewLevel(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75048AE3C(relative to base address)
		void OnLevelUnloaded_Server(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75048AC88(relative to base address)
		void OnLevelUnloaded_Client(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75048AC74(relative to base address)
		void OnLevelShown_Server(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75048AC60(relative to base address)
		void OnLevelShown_Client(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75048AC4C(relative to base address)
	};


	// Class VGameplayRst.PointLightComponentBase
	// Inherited from UEntityActorComponent -> UEntityComponent -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class UPointLightComponentBase : public UEntityActorComponent	
	{
	public:
		UVerseLightPropertiesBase* ReplicatedLightProperties; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.PointLightComponentBase");
			return ret;
		}
	};


	// Class VGameplayRst.SpotLightComponentBase
	// Inherited from UEntityActorComponent -> UEntityComponent -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class USpotLightComponentBase : public UEntityActorComponent	
	{
	public:
		UVerseLightPropertiesBase* ReplicatedLightProperties; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.SpotLightComponentBase");
			return ret;
		}
	};


	// Class VGameplayRst.VerseLightPropertiesBase
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UVerseLightPropertiesBase : public UObject	
	{
	public:
		float Intensity; // 0x28(0x4)
		FLinearColor LightColor; // 0x2C(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		ULightComponentBase* LightComponent; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.VerseLightPropertiesBase");
			return ret;
		}

		void OnRep_LightComponent(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75048ADBC(relative to base address)
		void OnRep_LightColor(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75048AD7C(relative to base address)
		void OnRep_Intensity(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75048AD48(relative to base address)
	};


	// Class VGameplayRst.VerseLocalLightProperties
	// Inherited from UVerseLightPropertiesBase -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UVerseLocalLightProperties : public UVerseLightPropertiesBase	
	{
	public:
		float AttenuationRadius; // 0x48(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.VerseLocalLightProperties");
			return ret;
		}

		void OnRep_AttenuationRadius(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75048ACE0(relative to base address)
	};


	// Class VGameplayRst.VersePointLightProperties
	// Inherited from UVerseLocalLightProperties -> UVerseLightPropertiesBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UVersePointLightProperties : public UVerseLocalLightProperties	
	{
	public:
		float SourceRadius; // 0x50(0x4)
		float SourceLength; // 0x54(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.VersePointLightProperties");
			return ret;
		}

		void OnRep_SourceRadius(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75048AEE0(relative to base address)
		void OnRep_SourceLength(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75048AEAC(relative to base address)
	};


	// Class VGameplayRst.VerseSpotLightProperties
	// Inherited from UVersePointLightProperties -> UVerseLocalLightProperties -> UVerseLightPropertiesBase -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UVerseSpotLightProperties : public UVersePointLightProperties	
	{
	public:
		float InnerConeAngle; // 0x58(0x4)
		float OuterConeAngle; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VGameplayRst.VerseSpotLightProperties");
			return ret;
		}

		void OnRep_OuterConeAngle(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75048AE50(relative to base address)
		void OnRep_InnerConeAngle(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75048AD14(relative to base address)
	};

}
