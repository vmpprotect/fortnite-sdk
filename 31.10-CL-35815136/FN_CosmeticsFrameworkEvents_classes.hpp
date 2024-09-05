#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CosmeticsFrameworkEvents
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CosmeticsFrameworkEvents.CosmeticsEventRegistrar
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticsEventRegistrar : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkEvents.CosmeticsEventRegistrar");
			return ret;
		}

		FCosmeticsEventHandle RegisterOnCosmeticApplicationCompleted_BP(FDelegateProperty& Delegate, int32_t Flags); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF6AA40(relative to base address)
	};


	// Class CosmeticsFrameworkEvents.CosmeticsFinishable
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticsFinishable : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkEvents.CosmeticsFinishable");
			return ret;
		}
	};


	// Class CosmeticsFrameworkEvents.CosmeticsMeshTarget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticsMeshTarget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkEvents.CosmeticsMeshTarget");
			return ret;
		}
	};


	// Class CosmeticsFrameworkEvents.CosmeticsStreaming
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCosmeticsStreaming : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsFrameworkEvents.CosmeticsStreaming");
			return ret;
		}
	};

}
