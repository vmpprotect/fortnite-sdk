#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SidewaysCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SidewaysCodeRuntime.SidewaysCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USidewaysCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.SidewaysCheatManager");
			return ret;
		}

		void SetSidewaysState(ESidewaysState SidewaysState); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414CC9AD8
	};


	// Class SidewaysCodeRuntime.FortControllerComponent_Sideways
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortControllerComponent_Sideways : public UFortControllerComponent	
	{
	public:
		FTimerHandle UpdateClosestSidewaysHandle; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.FortControllerComponent_Sideways");
			return ret;
		}
	};


	// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE0 (0x1D8 - 0xF8)
	class UPlayspaceComponent_SidewaysDimension : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_3[0xD8]; // 0xF8(0xD8) UNKNOWN PROPERTY
		UAthenaAIServiceLoot CachedAIServiceLoot; // 0x1D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension");
			return ret;
		}
	};


	// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xF8 - 0xF8)
	class UPlayspaceComponent_SidewaysEncounter : public UFortPlayspaceComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter");
			return ret;
		}
	};


	// Class SidewaysCodeRuntime.SidewaysStateComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class USidewaysStateComponent : public UGameFrameworkComponent	
	{
	public:
		ESidewaysState SidewaysState; // 0xA0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		ASidewaysPlayspace SidewaysPlayspace; // 0xA8(0x8)
		FMulticastInlineDelegate OnSidewaysStateChangedDelegate; // 0xB0(0x10)
		unsigned char UnknownData03_7[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.SidewaysStateComponent");
			return ret;
		}

		void SetSidewaysState(ESidewaysState NewState, ASidewaysPlayspace NewSidewaysPlayspace); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CC9F38
		void OnRep_SidewaysState(ESidewaysState LastSidewaysState); // Flags: Final|Native|Protected 0x7FF414CC9E58
		void OnRep_SidewaysPlayspace(ASidewaysPlayspace NewSidewaysPlayspace); // Flags: Final|Native|Protected 0x7FF414CC9D78
		void HandleSidewaysStateChanged(ASidewaysPlayspace NewSidewaysPlayspace, ESidewaysState OldState, ESidewaysState NewState); // Flags: Event|Protected|BlueprintEvent 0x7FF414CC9C98
		ESidewaysState GetSidewaysState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CC9BB8
	};


	// Class SidewaysCodeRuntime.SidewaysStateComponent_Player
	// Inherited from USidewaysStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x110 - 0xC8)
	class USidewaysStateComponent_Player : public USidewaysStateComponent	
	{
	public:
		TWeakObjectPtr SidewaysMaterialParameterCollection; // 0xC8(0x20)
		FName SidewaysBubbleLocationParameterNamesForLocalPlayers; // 0xE8(0x8)
		FName SidewaysBubbleRadiusParameterNamesForLocalPlayers; // 0xF0(0x8)
		float ExtraCorruptionRadius; // 0xF8(0x4)
		float MinRadiusToHaveAnyCorruption; // 0xFC(0x4)
		float MaxRadiusForScalingExtraCorruptionRadius; // 0x100(0x4)
		float UpdateFrequency; // 0x104(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x108(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.SidewaysStateComponent_Player");
			return ret;
		}
	};


	// Class SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class USidewaysFeatureAction_HoldGlobalData : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr SidewaysMaterialParameterCollection; // 0x28(0x20)
		FName SidewaysBubbleLocationParameterNamesForLocalPlayers; // 0x48(0x8)
		FName SidewaysBubbleRadiusParameterNamesForLocalPlayers; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData");
			return ret;
		}
	};


	// Class SidewaysCodeRuntime.SidewaysLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USidewaysLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.SidewaysLibrary");
			return ret;
		}

		USidewaysStateComponent GetSidewaysStateComponent(AActor Owner); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CCA018
	};


	// Class SidewaysCodeRuntime.SidewaysPlayspace
	// Inherited from AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x6A0 - 0x6A0)
	class ASidewaysPlayspace : public AFortPlayspace	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.SidewaysPlayspace");
			return ret;
		}

		void RefreshActorsInSideways(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CCA1D8
		void NotifySizeChanged(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CCA0F8
	};


	// Class SidewaysCodeRuntime.SidewaysVolume
	// Inherited from AGameplayVolume -> AActor -> UObject
	// Size: 0x0 (0x330 - 0x330)
	class ASidewaysVolume : public AGameplayVolume	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.SidewaysVolume");
			return ret;
		}
	};

}
