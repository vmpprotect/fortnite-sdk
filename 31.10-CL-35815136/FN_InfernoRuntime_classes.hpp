#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InfernoRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class InfernoRuntime.FortCurieElementAttachHandlerVoxelFire
	// Inherited from UFortCurieElementAttachHandlerFire -> UFortCurieElementAttachHandler -> UCurieElementAttachHandler -> UCurieElementGameplayEffectOwner -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UFortCurieElementAttachHandlerVoxelFire : public UFortCurieElementAttachHandlerFire	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieElementAttachHandlerVoxelFire");
			return ret;
		}
	};


	// Class InfernoRuntime.FortCurieElementAttachConditionHandlerVoxelFire
	// Inherited from UFortCurieElementAttachConditionHandlerFire -> UFortCurieElementAttachConditionHandler -> UCurieElementAttachConditionHandler -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFortCurieElementAttachConditionHandlerVoxelFire : public UFortCurieElementAttachConditionHandlerFire	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieElementAttachConditionHandlerVoxelFire");
			return ret;
		}
	};


	// Class InfernoRuntime.FortCurieVoxelFirePropagationManagerConfig
	// Inherited from UFortCurieFirePropagationManagerConfig -> UCurieManagerComponentConfig -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x48 (0x178 - 0x130)
	class UFortCurieVoxelFirePropagationManagerConfig : public UFortCurieFirePropagationManagerConfig	
	{
	public:
		FFortCurieVoxelPropagationProperties DefaultPropagationProperties; // 0x130(0x18)
		FName PropagationPropertiesRegistry; // 0x148(0x4)
		float PropagationNoiseMinimum; // 0x14C(0x4)
		float PropagationNoiseMaximum; // 0x150(0x4)
		float PropagationSpeedNoiseRange; // 0x154(0x4)
		float PropagationMinimumSpeed; // 0x158(0x4)
		float PropagationMinimumTime; // 0x15C(0x4)
		float VoxelOverlapExpansionFactor; // 0x160(0x4)
		bool bAllowPerMaterialPropagationProperties; // 0x164(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x165(0x3) UNKNOWN PROPERTY
		float ActorPropagationInteractMagnitude; // 0x168(0x4)
		float MovedActorGrassIgnitionDelay; // 0x16C(0x4)
		float MovedActorGrassGridCellZExpansion; // 0x170(0x4)
		float MovedActorGroundTraceZRange; // 0x174(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerConfig");
			return ret;
		}
	};


	// Class InfernoRuntime.FortCurieVoxelFirePropagationManager
	// Inherited from UFortCurieManagerComponent -> UCurieManagerComponent -> UObject
	// Size: 0x650 (0x680 - 0x30)
	class UFortCurieVoxelFirePropagationManager : public UFortCurieManagerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		FFortCurieVoxelFirePropagationManagerTickFunction PrimaryTickFunction; // 0x40(0x30)
		unsigned char UnknownData01_6[0x5F8]; // 0x70(0x5F8) UNKNOWN PROPERTY
		UFortCurieVoxelFirePropagationManagerConfig* InternalManagerConfig; // 0x668(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x670(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieVoxelFirePropagationManager");
			return ret;
		}
	};


	// Class InfernoRuntime.FortCurieVoxelFireDebugParticleDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCurieVoxelFireDebugParticleDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieVoxelFireDebugParticleDataInterface");
			return ret;
		}
	};


	// Class InfernoRuntime.FortCurieVoxelFireDebugNiagaraDataInterface
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UFortCurieVoxelFireDebugNiagaraDataInterface : public UNiagaraDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieVoxelFireDebugNiagaraDataInterface");
			return ret;
		}
	};


	// Class InfernoRuntime.FortCurieVoxelFireNativeFXHandlerConfig
	// Inherited from UFortCurieNativeFXHandlerConfig -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x58 (0x1C0 - 0x168)
	class UFortCurieVoxelFireNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig	
	{
	public:
		UNiagaraSystem* WorldFireSystem; // 0x168(0x8)
		UNiagaraSystem* WorldFireDebugSystem; // 0x170(0x8)
		UTextureRenderTarget2D* LandscapeCharRenderTarget; // 0x178(0x8)
		UMaterialParameterCollection* MaterialParameterCollection; // 0x180(0x8)
		FName PlayerWorldFireSystemLightScalabilityParamName; // 0x188(0x4)
		FName LandscapeBiasParameterName; // 0x18C(0x4)
		FName LandscapeDivisorParameterName; // 0x190(0x4)
		float LandscapeFireRandomLocationRadius; // 0x194(0x4)
		float MinLandscapeFireSphericalBounds; // 0x198(0x4)
		float MaxLandscapeFireSphericalBounds; // 0x19C(0x4)
		float LandscapeCharInterpSpeed; // 0x1A0(0x4)
		float LandscapeIgnitionParticleMovementSpeed; // 0x1A4(0x4)
		bool bUseVoxelFireAmbientAudio; // 0x1A8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1A9(0x7) UNKNOWN PROPERTY
		USoundBase* StructureFireAmbientSound; // 0x1B0(0x8)
		USoundBase* GrassFireAmbientSound; // 0x1B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandlerConfig");
			return ret;
		}
	};


	// Class InfernoRuntime.FortCurieVoxelFireNativeFXHandler
	// Inherited from UFortCurieNativeFXHandler -> UObject
	// Size: 0x328 (0x368 - 0x40)
	class UFortCurieVoxelFireNativeFXHandler : public UFortCurieNativeFXHandler	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x40(0x30) UNKNOWN PROPERTY
		TSet<UFortCurieComponent*> PendingUpdateComponents; // 0x70(0x50)
		TSet<UFortCurieComponent*> PendingRemoveComponents; // 0xC0(0x50)
		unsigned char UnknownData01_6[0x50]; // 0x110(0x50) UNKNOWN PROPERTY
		TArray<UFortCurieWorldNiagaraComponent*> WorldFireNiagaraSystems; // 0x160(0x10)
		TArray<UFortCurieWorldNiagaraComponent*> WorldFireDebugNiagaraSystems; // 0x170(0x10)
		float WorldSystemFireParticleSignificanceRequirement; // 0x180(0x4)
		float WorldSystemIgnitionParticleSignificanceRequirement; // 0x184(0x4)
		float AudioGrassFireSignificanceRequirement; // 0x188(0x4)
		float AudioActorFireSignificanceRequirement; // 0x18C(0x4)
		FRandomStream RandomStream; // 0x190(0x8)
		FBox GrassFireBounds; // 0x198(0x38)
		float LandscapeCharInterpSpeed; // 0x1D0(0x4)
		float TimeSinceAudioUpdate; // 0x1D4(0x4)
		TArray<FFortCurieVoxelFireParticleGrassData> CachedFireParticleGrassData; // 0x1D8(0x10)
		TArray<FFortCurieFireParticleActorData> CachedFireParticleActorData; // 0x1E8(0x10)
		unsigned char UnknownData02_6[0x60]; // 0x1F8(0x60) UNKNOWN PROPERTY
		TSet<FFortSpatialCellIndex> CachedBurningGrassGridCells; // 0x258(0x50)
		TMap<FFortSpatialCellIndex, UAudioComponent*> GrassAudioMap; // 0x2A8(0x50)
		unsigned char UnknownData03_6[0x50]; // 0x2F8(0x50) UNKNOWN PROPERTY
		TArray<UAudioComponent*> PreallocatedAudioComponents; // 0x348(0x10)
		FTimerHandle AudioComponentCleanupTimerHandle; // 0x358(0x8)
		double PreviousLandscapeCharTickTime; // 0x360(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandler");
			return ret;
		}

		void OnUserSettingsEffectQualityChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7513B375C(relative to base address)
	};


	// Class InfernoRuntime.FortCurieVoxelFireParticleDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCurieVoxelFireParticleDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieVoxelFireParticleDataInterface");
			return ret;
		}
	};


	// Class InfernoRuntime.FortCurieVoxelFireNiagaraDataInterface
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UFortCurieVoxelFireNiagaraDataInterface : public UNiagaraDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.FortCurieVoxelFireNiagaraDataInterface");
			return ret;
		}
	};


	// Class InfernoRuntime.InfernoCurieVoxelFireAudioParticleDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInfernoCurieVoxelFireAudioParticleDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.InfernoCurieVoxelFireAudioParticleDataInterface");
			return ret;
		}
	};


	// Class InfernoRuntime.InfernoCurieVoxelFireAudioNiagaraDataInterface
	// Inherited from UNiagaraDataInterface -> UNiagaraDataInterfaceBase -> UNiagaraMergeable -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UInfernoCurieVoxelFireAudioNiagaraDataInterface : public UNiagaraDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InfernoRuntime.InfernoCurieVoxelFireAudioNiagaraDataInterface");
			return ret;
		}
	};

}
