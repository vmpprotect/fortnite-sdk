#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AshtonGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AshtonGameplayRuntime.AshtonShieldLayerAnimInstance
	// Inherited from UBallisticShieldItemLayerAnimInstance -> UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x58 (0x1550 - 0x14F8)
	class UAshtonShieldLayerAnimInstance : public UBallisticShieldItemLayerAnimInstance	
	{
	public:
		bool bIsShieldHit; // 0x14F8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x14F9(0x3) UNKNOWN PROPERTY
		float ShieldHitAlpha; // 0x14FC(0x4)
		FGameplayTag UnusableTagName; // 0x1500(0x4)
		FGameplayTag ShieldChargeTagName; // 0x1504(0x4)
		UFortWeaponAnimSet* AshtonShieldThrowAnimAssetFortWeaponAnimSet; // 0x1508(0x8)
		UFortWeaponAnimSet* AshtonShieldAnimAssetFortWeaponAnimSet; // 0x1510(0x8)
		UProxyTable* DefaultNoWeaponProxyTable; // 0x1518(0x8)
		FFortPlayerAnimAssets PlayerAnimAssetsOverride; // 0x1520(0x18)
		unsigned char UnknownData01_7[0x18]; // 0x1538(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AshtonGameplayRuntime.AshtonShieldLayerAnimInstance");
			return ret;
		}
	};


	// Class AshtonGameplayRuntime.AshtonShieldWeaponInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAshtonShieldWeaponInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AshtonGameplayRuntime.AshtonShieldWeaponInterface");
			return ret;
		}

		void GetAshtonShieldData(FScalableFloat& BlockHealth, float& DamageCount); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7507665B8(relative to base address)
	};

}
