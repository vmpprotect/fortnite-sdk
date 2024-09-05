#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoLowMemoryFallbackRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoLowMemoryFallbackRuntime.JunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy
	// Inherited from ULowMemoryFallbackStrategy -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UJunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy	
	{
	public:
		UClass StrategyToActivate; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy");
			return ret;
		}
	};


	// Class JunoLowMemoryFallbackRuntime.JunoBlockBuilding_LowMemoryFallbackStrategy
	// Inherited from ULowMemoryFallbackStrategy -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UJunoBlockBuilding_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy	
	{
	public:
		FGameplayTag BlockingTag; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoBlockBuilding_LowMemoryFallbackStrategy");
			return ret;
		}
	};


	// Class JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackGameStateComponent
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UJunoLowMemoryFallbackGameStateComponent : public UFortGameStateComponent	
	{
	public:
		TArray TriggeredStrategies; // 0xA0(0x10)
		TArray ActiveStrategies; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackGameStateComponent");
			return ret;
		}

		void OnRep_TriggeredStrategies(); // Flags: Final|Native|Private 0x7FF414E20F60
	};


	// Class JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackPlayerControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoLowMemoryFallbackPlayerControllerComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackPlayerControllerComponent");
			return ret;
		}

		void Server_UntriggerStrategy(UClass StrategyClass); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414E21120
		void Server_TriggerStrategy(UClass StrategyClass); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414E21040
	};


	// Class JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackWorldSubsystem
	// Inherited from ULowMemoryFallbackWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x118 - 0x118)
	class UJunoLowMemoryFallbackWorldSubsystem : public ULowMemoryFallbackWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackWorldSubsystem");
			return ret;
		}
	};


	// Class JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategy
	// Inherited from ULowMemoryFallbackStrategy -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy	
	{
	public:
		EJunoLowMemoryState MemoryState; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategy");
			return ret;
		}
	};


	// Class JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood
	// Inherited from UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy -> ULowMemoryFallbackStrategy -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood");
			return ret;
		}
	};


	// Class JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow
	// Inherited from UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy -> ULowMemoryFallbackStrategy -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow");
			return ret;
		}
	};


	// Class JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow
	// Inherited from UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy -> ULowMemoryFallbackStrategy -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow");
			return ret;
		}
	};


	// Class JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical
	// Inherited from UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy -> ULowMemoryFallbackStrategy -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical");
			return ret;
		}
	};


	// Class JunoLowMemoryFallbackRuntime.JunoStreamingDistance_LowMemoryFallbackStrategy
	// Inherited from ULowMemoryFallbackStrategy -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UJunoStreamingDistance_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy	
	{
	public:
		float ScaleMultiplier; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoLowMemoryFallbackRuntime.JunoStreamingDistance_LowMemoryFallbackStrategy");
			return ret;
		}
	};

}
