#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoControlUnitRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoControlUnitRuntime.JunoControlUnitAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoControlUnitAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoControlUnitRuntime.JunoControlUnitAnalytics");
			return ret;
		}
	};


	// Class JunoControlUnitRuntime.JunoControlUnitBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoControlUnitBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoControlUnitRuntime.JunoControlUnitBlueprintLibrary");
			return ret;
		}

		void FireEvent_EndControlUnitSession(AController* PlayerController, AActor* ControlUnitActor); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751D29EBC(relative to base address)
		void FireEvent_BeginControlUnitSession(AController* PlayerController, AActor* ControlUnitActor); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751D29C74(relative to base address)
	};


	// Class JunoControlUnitRuntime.JunoPlayerControllerComponent_ControlUnitAnalytics
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UJunoPlayerControllerComponent_ControlUnitAnalytics : public UControllerComponent	
	{
	public:
		FJunoControlUnitSessionData ControlUnitSessionData; // 0xA0(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoControlUnitRuntime.JunoPlayerControllerComponent_ControlUnitAnalytics");
			return ret;
		}
	};

}
