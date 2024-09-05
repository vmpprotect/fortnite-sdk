#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MudGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_7[0x2C]; // 0xBC(0x2C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MudGameplayRuntime.FortPawnComponent_Mud");
			return ret;
		}

		void OnSprintingTagCountChanged(FGameplayTag tag, int32_t NewCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE4E98
		void OnSlidingTagCountChanged(FGameplayTag tag, int32_t NewCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE4DB8
		void OnExitedMud(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE4CD8
		void OnEnteredMud(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE4BF8
		void OnCurieFireTagCountChanged(FGameplayTag tag, int32_t NewCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE4B18
		void OnCreatureSprintingTagCountChanged(FGameplayTag tag, int32_t NewCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE4A38
		void OnAttachedParentCoveredInMud(FGameplayEventData& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CE4958
		void HandleSurfaceTypeChanged(AActor SurfaceActor, TEnumAsByte CurrentSurfaceType, TEnumAsByte PrevSurfaceType); // Flags: Final|Native|Private 0x7FF414CE4878
		void HandleASCInitialized(UFortAbilitySystemComponent AbilitySystemComponent, AFortPlayerPawn AffectedPawn); // Flags: Final|Native|Private 0x7FF414CE4798
	};

}
