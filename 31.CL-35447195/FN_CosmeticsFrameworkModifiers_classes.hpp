#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CosmeticsFrameworkModifiers
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
