#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MudGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MudGameplayRuntime.FortPawnComponent_Mud
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UFortPawnComponent_Mud : public UFortPawnComponent	
	{
	public:
		FGameplayTag CurieFireTag; // 0xA8(0x4)
		FGameplayTag SlidingTag; // 0xAC(0x4)
		FGameplayTag SprintingTag; // 0xB0(0x4)
		FGameplayTag AttachParentCoveredEventTag; // 0xB4(0x4)
		FGameplayTag CreatureSprintingTag; // 0xB8(0x4)
		unsigned char UnknownData00_7[0x2C]; // 0xBC(0x2C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MudGameplayRuntime.FortPawnComponent_Mud");
			return ret;
		}

		void OnSprintingTagCountChanged(FGameplayTag Tag, int32_t NewCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSlidingTagCountChanged(FGameplayTag Tag, int32_t NewCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitedMud(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnteredMud(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieFireTagCountChanged(FGameplayTag Tag, int32_t NewCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCreatureSprintingTagCountChanged(FGameplayTag Tag, int32_t NewCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAttachedParentCoveredInMud(FGameplayEventData& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSurfaceTypeChanged(AActor* SurfaceActor, TEnumAsByte<EPhysicalSurface> CurrentSurfaceType, TEnumAsByte<EPhysicalSurface> PrevSurfaceType); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512E7A04(relative to base address)
		void HandleASCInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* AffectedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512E7938(relative to base address)
	};

}
