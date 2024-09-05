#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Component
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Component.CameraEntityProxyActor
	// Inherited from ACameraActor -> AActor -> UObject
	// Size: 0x0 (0x9B0 - 0x9B0)
	class ACameraEntityProxyActor : public ACameraActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.CameraEntityProxyActor");
			return ret;
		}
	};


	// Class Component.LightProxyActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ALightProxyActor : public AActor	
	{
	public:
		ULightComponent LightComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.LightProxyActor");
			return ret;
		}
	};


	// Class Component.DirectionalLightProxyActor
	// Inherited from ALightProxyActor -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class ADirectionalLightProxyActor : public ALightProxyActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.DirectionalLightProxyActor");
			return ret;
		}
	};


	// Class Component.StaticMeshEntityComponent_Implementation
	// Inherited from UObject
	// Size: 0x1D8 (0x200 - 0x28)
	class UStaticMeshEntityComponent_Implementation : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x1D8]; // 0x28(0x1D8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.StaticMeshEntityComponent_Implementation");
			return ret;
		}
	};


	// Class Component.ParticleSystemProxyActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AParticleSystemProxyActor : public AActor	
	{
	public:
		UNiagaraComponent NiagaraComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.ParticleSystemProxyActor");
			return ret;
		}
	};


	// Class Component.PhysicsEntityComponent_Implementation
	// Inherited from UObject
	// Size: 0x180 (0x1A8 - 0x28)
	class UPhysicsEntityComponent_Implementation : public UObject	
	{
	public:
		FBodyInstance BodyInstance; // 0x28(0x170)
		unsigned char UnknownData01_7[0x10]; // 0x198(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.PhysicsEntityComponent_Implementation");
			return ret;
		}
	};


	// Class Component.PointLightProxyActor
	// Inherited from ALightProxyActor -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class APointLightProxyActor : public ALightProxyActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.PointLightProxyActor");
			return ret;
		}
	};


	// Class Component.RectLightProxyActor
	// Inherited from ALightProxyActor -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class ARectLightProxyActor : public ALightProxyActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.RectLightProxyActor");
			return ret;
		}
	};


	// Class Component.SoundProxyActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ASoundProxyActor : public AActor	
	{
	public:
		float StartTime; // 0x290(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		UAudioComponent AudioComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.SoundProxyActor");
			return ret;
		}

		void OnRep_StartTime(); // Flags: Final|Native|Private 0x7FF41460E5D8
	};


	// Class Component.SpotLightProxyActor
	// Inherited from ALightProxyActor -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class ASpotLightProxyActor : public ALightProxyActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.SpotLightProxyActor");
			return ret;
		}
	};


	// Class Component.TextDisplayProxyActor
	// Inherited from AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class ATextDisplayProxyActor : public AActor	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		UTextRenderComponent TextRenderComponent; // 0x2A0(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x2A8(0x10) UNKNOWN PROPERTY
		UMaterialInstanceDynamic TextMaterialInstanceDynamic; // 0x2B8(0x8)
		UFont Font; // 0x2C0(0x8)
		unsigned char UnknownData05_7[0x20]; // 0x2C8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Component.TextDisplayProxyActor");
			return ret;
		}
	};

}
