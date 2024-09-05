#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MetasoundFrontend
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MetasoundFrontend.MetaSoundDocumentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMetaSoundDocumentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundFrontend.MetaSoundDocumentInterface");
			return ret;
		}
	};


	// Class MetasoundFrontend.MetasoundParameterPack
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UMetasoundParameterPack : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundFrontend.MetasoundParameterPack");
			return ret;
		}

		ESetParamResult SetTrigger(FName ParameterName, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA8C9C8(relative to base address)
		ESetParamResult SetString(FName ParameterName, FString InValue, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA8C8AC(relative to base address)
		ESetParamResult SetInt(FName ParameterName, int32_t InValue, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA8C7B0(relative to base address)
		ESetParamResult SetFloat(FName ParameterName, float InValue, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA8C6B4(relative to base address)
		ESetParamResult SetBool(FName ParameterName, bool InValue, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA8C5A8(relative to base address)
		UMetasoundParameterPack MakeMetasoundParameterPack(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DA8C57C(relative to base address)
		bool HasTrigger(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8C4E0(relative to base address)
		bool HasString(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8C444(relative to base address)
		bool HasInt(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8C3A8(relative to base address)
		bool HasFloat(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8C30C(relative to base address)
		bool HasBool(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8C270(relative to base address)
		bool GetTrigger(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8C178(relative to base address)
		FString GetString(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8C080(relative to base address)
		int32_t GetInt(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8BFB4(relative to base address)
		float GetFloat(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8BEE4(relative to base address)
		bool GetBool(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA8BE18(relative to base address)
	};


	// Class MetasoundFrontend.MetaSoundFrontendMemberMetadata
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMetaSoundFrontendMemberMetadata : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundFrontend.MetaSoundFrontendMemberMetadata");
			return ret;
		}
	};


	// Class MetasoundFrontend.MetaSoundBuilderDocument
	// Inherited from UObject
	// Size: 0x1D8 (0x200 - 0x28)
	class UMetaSoundBuilderDocument : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FMetasoundFrontendDocument Document; // 0x30(0x1C0)
		UClass* MetaSoundUClass; // 0x1F0(0x8)
		UClass* BuilderUClass; // 0x1F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundFrontend.MetaSoundBuilderDocument");
			return ret;
		}
	};

}
