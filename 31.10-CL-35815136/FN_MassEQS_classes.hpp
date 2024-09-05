#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassEQS
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MassEQS.EnvQueryItemType_MassEntityHandle
	// Inherited from UEnvQueryItemType_VectorBase -> UEnvQueryItemType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEnvQueryItemType_MassEntityHandle : public UEnvQueryItemType_VectorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.EnvQueryItemType_MassEntityHandle");
			return ret;
		}
	};


	// Class MassEQS.MassEnvQueryGenerator
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x28 (0x78 - 0x50)
	class UMassEnvQueryGenerator : public UEnvQueryGenerator	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x50(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEnvQueryGenerator");
			return ret;
		}
	};


	// Class MassEQS.MassEnvQueryProcessorBase
	// Inherited from UMassProcessor -> UObject
	// Size: 0x10 (0xD0 - 0xC0)
	class UMassEnvQueryProcessorBase : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xC0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEnvQueryProcessorBase");
			return ret;
		}
	};


	// Class MassEQS.MassEnvQueryGeneratorProcessor_MassEntityHandles
	// Inherited from UMassEnvQueryProcessorBase -> UMassProcessor -> UObject
	// Size: 0x320 (0x3F0 - 0xD0)
	class UMassEnvQueryGeneratorProcessor_MassEntityHandles : public UMassEnvQueryProcessorBase	
	{
	public:
		unsigned char UnknownData00_1[0x320]; // 0xD0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEnvQueryGeneratorProcessor_MassEntityHandles");
			return ret;
		}
	};


	// Class MassEQS.MassEnvQueryGenerator_MassEntityHandles
	// Inherited from UMassEnvQueryGenerator -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x40 (0xB8 - 0x78)
	class UMassEnvQueryGenerator_MassEntityHandles : public UMassEnvQueryGenerator	
	{
	public:
		FAIDataProviderFloatValue SearchRadius; // 0x78(0x38)
		UClass* SearchCenter; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEnvQueryGenerator_MassEntityHandles");
			return ret;
		}
	};


	// Class MassEQS.MassEnvQueryTest
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x28 (0x220 - 0x1F8)
	class UMassEnvQueryTest : public UEnvQueryTest	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x1F8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEnvQueryTest");
			return ret;
		}
	};


	// Class MassEQS.MassEnvQueryTestProcessor_MassEntityTags
	// Inherited from UMassEnvQueryProcessorBase -> UMassProcessor -> UObject
	// Size: 0x320 (0x3F0 - 0xD0)
	class UMassEnvQueryTestProcessor_MassEntityTags : public UMassEnvQueryProcessorBase	
	{
	public:
		unsigned char UnknownData00_1[0x320]; // 0xD0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEnvQueryTestProcessor_MassEntityTags");
			return ret;
		}
	};


	// Class MassEQS.MassEnvQueryTest_MassEntityTags
	// Inherited from UMassEnvQueryTest -> UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x18 (0x238 - 0x220)
	class UMassEnvQueryTest_MassEntityTags : public UMassEnvQueryTest	
	{
	public:
		EMassEntityTagsTestMode TagTestMode; // 0x220(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x221(0x7) UNKNOWN PROPERTY
		TArray<FInstancedStruct> Tags; // 0x228(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEnvQueryTest_MassEntityTags");
			return ret;
		}
	};


	// Class MassEQS.MassEQSBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassEQSBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEQSBlueprintLibrary");
			return ret;
		}

		void SendSignalToEntity(AActor* Owner, FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo, FName Signal); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75050CF40(relative to base address)
		TArray GetEnviromentQueryResultAsEntityInfo(UEnvQueryInstanceBlueprintWrapper* QueryInstance); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75050CE88(relative to base address)
		FVector GetCurrentEntityPosition(AActor* Owner, FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75050CD3C(relative to base address)
		FVector GetCachedEntityPosition(FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75050CC78(relative to base address)
		FString EntityToString(FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75050CB98(relative to base address)
		bool EntityComparison(FMassEnvQueryEntityInfoBlueprintWrapper& A, FMassEnvQueryEntityInfoBlueprintWrapper& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75050CA70(relative to base address)
		bool ContainsEntity(TArray<FMassEnvQueryEntityInfoBlueprintWrapper>& EntityList, FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75050C924(relative to base address)
	};


	// Class MassEQS.MassEQSSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xE8 (0x120 - 0x38)
	class UMassEQSSubsystem : public UMassSubsystemBase	
	{
	public:
		unsigned char UnknownData00_1[0xE8]; // 0x38(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEQSSubsystem");
			return ret;
		}
	};


	// Class MassEQS.MassEQSRequestInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassEQSRequestInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEQS.MassEQSRequestInterface");
			return ret;
		}
	};

}
