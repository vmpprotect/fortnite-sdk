#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CosmeticsFrameworkModifiers
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CosmeticsFrameworkModifiers.CosmeticModifierInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticModifierInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkModifiers.CosmeticModifierInterface");
			return ret;
		}
	};


	// Class CosmeticsFrameworkModifiers.CosmeticModifierOwnerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticModifierOwnerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkModifiers.CosmeticModifierOwnerInterface");
			return ret;
		}
	};


	// Class CosmeticsFrameworkModifiers.CosmeticModifierProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticModifierProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkModifiers.CosmeticModifierProviderInterface");
			return ret;
		}
	};

}
