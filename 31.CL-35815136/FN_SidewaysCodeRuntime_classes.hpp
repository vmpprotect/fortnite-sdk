#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SidewaysCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void SetSidewaysState(ESidewaysState SidewaysState); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74E2263E0(relative to base address)
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
		unsigned char UnknownData00_3[0xD8]; // 0xF8(0xD8) UNKNOWN PROPERTY
		UAthenaAIServiceLoot* CachedAIServiceLoot; // 0x1D0(0x8)

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
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		ASidewaysPlayspace* SidewaysPlayspace; // 0xA8(0x8)
		FMulticastInlineDelegate OnSidewaysStateChangedDelegate; // 0xB0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeRuntime.SidewaysStateComponent");
			return ret;
		}

		void SetSidewaysState(ESidewaysState NewState, ASidewaysPlayspace* NewSidewaysPlayspace); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75120BF14(relative to base address)
		void OnRep_SidewaysState(ESidewaysState LastSidewaysState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75120BE24(relative to base address)
		void OnRep_SidewaysPlayspace(ASidewaysPlayspace* NewSidewaysPlayspace); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C75FA60(relative to base address)
		void HandleSidewaysStateChanged(ASidewaysPlayspace* NewSidewaysPlayspace, ESidewaysState OldState, ESidewaysState NewState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		ESidewaysState GetSidewaysState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E228C6C(relative to base address)
	};


	// Class SidewaysCodeRuntime.SidewaysStateComponent_Player
	// Inherited from USidewaysStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x110 - 0xC8)
	class USidewaysStateComponent_Player : public USidewaysStateComponent	
	{
	public:
		TWeakObjectPtr<UMaterialParameterCollection*> SidewaysMaterialParameterCollection; // 0xC8(0x20)
		FName SidewaysBubbleLocationParameterNamesForLocalPlayers; // 0xE8(0x8)
		FName SidewaysBubbleRadiusParameterNamesForLocalPlayers; // 0xF0(0x8)
		float ExtraCorruptionRadius; // 0xF8(0x4)
		float MinRadiusToHaveAnyCorruption; // 0xFC(0x4)
		float MaxRadiusForScalingExtraCorruptionRadius; // 0x100(0x4)
		float UpdateFrequency; // 0x104(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x108(0x8) UNKNOWN PROPERTY

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
		TWeakObjectPtr<UMaterialParameterCollection*> SidewaysMaterialParameterCollection; // 0x28(0x20)
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

		USidewaysStateComponent GetSidewaysStateComponent(AActor* Owner); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75120BD90(relative to base address)
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

		void RefreshActorsInSideways(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75120BEA4(relative to base address)
		void NotifySizeChanged(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75120BE10(relative to base address)
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
