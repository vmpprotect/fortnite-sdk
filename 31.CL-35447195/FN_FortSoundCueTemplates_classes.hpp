#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortSoundCueTemplates
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FortSoundCueTemplates.FortSoundCueTemplateBase
	// Inherited from USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UFortSoundCueTemplateBase : public USoundCueTemplate	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.FortSoundCueTemplateBase");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.EmoteBase
	// Inherited from UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UEmoteBase : public UFortSoundCueTemplateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.EmoteBase");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.EmoteFoley
	// Inherited from UEmoteBase -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UEmoteFoley : public UEmoteBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.EmoteFoley");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.EmoteMusic
	// Inherited from UEmoteBase -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UEmoteMusic : public UEmoteBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.EmoteMusic");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.EmoteMusic3P
	// Inherited from UEmoteBase -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UEmoteMusic3P : public UEmoteBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.EmoteMusic3P");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PlayerFoleyBase
	// Inherited from UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UPlayerFoleyBase : public UFortSoundCueTemplateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PlayerFoleyBase");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PlayerFoley
	// Inherited from UPlayerFoleyBase -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UPlayerFoley : public UPlayerFoleyBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PlayerFoley");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.FootstepFoley
	// Inherited from UPlayerFoley -> UPlayerFoleyBase -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UFootstepFoley : public UPlayerFoley	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.FootstepFoley");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.FortSoundCueTemplateDefaults
	// Inherited from UDataAsset -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UFortSoundCueTemplateDefaults : public UDataAsset	
	{
	public:
		USoundClass SoundClass; // 0x30(0x8)
		USoundAttenuation Attenuation; // 0x38(0x8)
		USoundConcurrency Concurrency; // 0x40(0x8)
		float VolumeMultiplier; // 0x48(0x4)
		float PitchMultiplier; // 0x4C(0x4)
		TArray SubmixSends; // 0x50(0x10)
		TArray PreEffectBusSends; // 0x60(0x10)
		TArray PostEffectBusSends; // 0x70(0x10)
		USoundWave LicensedTrackAlternative; // 0x80(0x8)
		USoundSubmixBase LicensedSubmix; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.FortSoundCueTemplateDefaults");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortSoundCueTemplateDefaultSettings : public UDataAsset	
	{
	public:
		TMap TemplateDefaults; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings");
			return ret;
		}

		UFortSoundCueTemplateDefaults GetSettingsForTemplateType(UClass TemplateType); // Flags: Final|Native|Public 0x7FF414BCBA58
	};


	// Class FortSoundCueTemplates.FortSoundCueTemplateSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UFortSoundCueTemplateSettings : public UDeveloperSettings	
	{
	public:
		TWeakObjectPtr DefaultTemplateSettings; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.FortSoundCueTemplateSettings");
			return ret;
		}

		UFortSoundCueTemplateDefaults GetDefaultSettingsForTemplateType(UClass TemplateType); // Flags: Final|Native|Public|Const 0x7FF414BCBB38
	};


	// Class FortSoundCueTemplates.FortSoundCueTemplateSimple
	// Inherited from UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UFortSoundCueTemplateSimple : public UFortSoundCueTemplateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.FortSoundCueTemplateSimple");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.GliderThrustSCTDefaults
	// Inherited from UFortSoundCueTemplateDefaults -> UDataAsset -> UObject
	// Size: 0x160 (0x1F0 - 0x90)
	class UGliderThrustSCTDefaults : public UFortSoundCueTemplateDefaults	
	{
	public:
		FGliderThrustData Forward; // 0x90(0x58)
		FGliderThrustData Sideways; // 0xE8(0x58)
		FGliderThrustData Backwards; // 0x140(0x58)
		FGliderThrustData AnyDirection; // 0x198(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.GliderThrustSCTDefaults");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.GliderThrustLoop
	// Inherited from UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UGliderThrustLoop : public UFortSoundCueTemplateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.GliderThrustLoop");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.GliderThrustStart
	// Inherited from UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UGliderThrustStart : public UFortSoundCueTemplateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.GliderThrustStart");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.GliderOpen
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UGliderOpen : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.GliderOpen");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.GliderClose
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UGliderClose : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.GliderClose");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.MusicPack
	// Inherited from UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UMusicPack : public UFortSoundCueTemplateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.MusicPack");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PhysicsStateSCTDefaults
	// Inherited from UFortSoundCueTemplateDefaults -> UDataAsset -> UObject
	// Size: 0x248 (0x2D8 - 0x90)
	class UPhysicsStateSCTDefaults : public UFortSoundCueTemplateDefaults	
	{
	public:
		FName SpeedParameterName; // 0x90(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		FPhysicsStateData Rolling; // 0x98(0x90)
		FPhysicsStateData Sliding; // 0x128(0x90)
		FPhysicsStateData Flying; // 0x1B8(0x90)
		FPhysicsStateData Floating; // 0x248(0x90)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PhysicsStateSCTDefaults");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PhysicsStateLoop
	// Inherited from UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UPhysicsStateLoop : public UFortSoundCueTemplateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PhysicsStateLoop");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PhysicsImpactSCTDefaults
	// Inherited from UFortSoundCueTemplateDefaults -> UDataAsset -> UObject
	// Size: 0x110 (0x1A0 - 0x90)
	class UPhysicsImpactSCTDefaults : public UFortSoundCueTemplateDefaults	
	{
	public:
		FName ImpactTypeParameterName; // 0x90(0x4)
		FName StrengthParameterName; // 0x94(0x4)
		FPhysicsImpactData Light; // 0x98(0x58)
		FPhysicsImpactData Medium; // 0xF0(0x58)
		FPhysicsImpactData Heavy; // 0x148(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PhysicsImpactSCTDefaults");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PhysicsImpact
	// Inherited from UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UPhysicsImpact : public UFortSoundCueTemplateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PhysicsImpact");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PickaxeSCTDefaults
	// Inherited from UFortSoundCueTemplateDefaults -> UDataAsset -> UObject
	// Size: 0x20 (0xB0 - 0x90)
	class UPickaxeSCTDefaults : public UFortSoundCueTemplateDefaults	
	{
	public:
		USoundAttenuation CloseAttenuation; // 0x90(0x8)
		USoundAttenuation DistantAttenuation; // 0x98(0x8)
		TArray DistantVariations; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PickaxeSCTDefaults");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PickaxeBase
	// Inherited from UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UPickaxeBase : public UFortSoundCueTemplateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PickaxeBase");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PickaxeSwing
	// Inherited from UPickaxeBase -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UPickaxeSwing : public UPickaxeBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PickaxeSwing");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PickaxeReady
	// Inherited from UPickaxeBase -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UPickaxeReady : public UPickaxeBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PickaxeReady");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PickaxeImpactEnemy
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UPickaxeImpactEnemy : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PickaxeImpactEnemy");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.PlayerFoleyDefaults
	// Inherited from UFortSoundCueTemplateDefaults -> UDataAsset -> UObject
	// Size: 0x48 (0xD8 - 0x90)
	class UPlayerFoleyDefaults : public UFortSoundCueTemplateDefaults	
	{
	public:
		USoundClass LocalPlayerSoundClass; // 0x90(0x8)
		USoundClass TeammateSoundClass; // 0x98(0x8)
		USoundClass HostileSoundClass; // 0xA0(0x8)
		USoundAttenuation LocalPlayerAttenuation; // 0xA8(0x8)
		USoundAttenuation AboveAttenuation; // 0xB0(0x8)
		USoundAttenuation BelowAttenuation; // 0xB8(0x8)
		USoundAttenuation ParallelAttenuation; // 0xC0(0x8)
		TArray ElevationCrossfadeDistances; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.PlayerFoleyDefaults");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.WeaponLowAmmo
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UWeaponLowAmmo : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.WeaponLowAmmo");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.WeaponOutOfAmmo
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UWeaponOutOfAmmo : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.WeaponOutOfAmmo");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.WeaponReloadStart
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UWeaponReloadStart : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.WeaponReloadStart");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.WeaponReloadInsert
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UWeaponReloadInsert : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.WeaponReloadInsert");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.WeaponReloadEnd
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UWeaponReloadEnd : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.WeaponReloadEnd");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.WeaponTargetingStart
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UWeaponTargetingStart : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.WeaponTargetingStart");
			return ret;
		}
	};


	// Class FortSoundCueTemplates.WeaponTargetingEnd
	// Inherited from UFortSoundCueTemplateSimple -> UFortSoundCueTemplateBase -> USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UWeaponTargetingEnd : public UFortSoundCueTemplateSimple	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortSoundCueTemplates.WeaponTargetingEnd");
			return ret;
		}
	};

}
