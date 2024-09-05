#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DataDrivenGameplayEventRouter
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayEventLegacyBroadcast : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast");
			return ret;
		}
	};


	// Class DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayEventDescriptorLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary");
			return ret;
		}

		bool BroadcastEvent(FGameplayEventDescriptor& EventDescriptor, UObject* EventContext, int32_t& Event, UClass* EventRouterScope, AActor* RouterContextActor); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D633C20(relative to base address)
	};

}
