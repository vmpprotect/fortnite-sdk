#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoControlUnitRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void FireEvent_EndControlUnitSession(AController PlayerController, AActor ControlUnitActor); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414E5BFA0
		void FireEvent_BeginControlUnitSession(AController PlayerController, AActor ControlUnitActor); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414E5BEC0
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
