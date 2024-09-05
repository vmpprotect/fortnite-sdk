#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AshtonGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AshtonGameplayRuntime.AshtonShieldLayerAnimInstance
	// Inherited from UBallisticShieldItemLayerAnimInstance -> UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x58 (0x1540 - 0x14E8)
	class UAshtonShieldLayerAnimInstance : public UBallisticShieldItemLayerAnimInstance	
	{
	public:
		bool bIsShieldHit; // 0x14E8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x14E9(0x3) UNKNOWN PROPERTY
		float ShieldHitAlpha; // 0x14EC(0x4)
		FGameplayTag UnusableTagName; // 0x14F0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x14F4(0x4) UNKNOWN PROPERTY
		UFortWeaponAnimSet AshtonShieldThrowAnimAssetFortWeaponAnimSet; // 0x14F8(0x8)
		UFortWeaponAnimSet AshtonShieldAnimAssetFortWeaponAnimSet; // 0x1500(0x8)
		FFortPlayerAnimAssets PlayerAnimAssetsOverride; // 0x1508(0x18)
		unsigned char UnknownData05_7[0x20]; // 0x1520(0x20) UNKNOWN PROPERTY

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

		void GetAshtonShieldData(FScalableFloat& BlockHealth, float& DamageCount); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414BE8BD8
	};

}
