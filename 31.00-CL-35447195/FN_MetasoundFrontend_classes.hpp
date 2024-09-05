#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MetasoundFrontend
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundFrontend.MetasoundParameterPack");
			return ret;
		}

		ESetParamResult SetTrigger(FName ParameterName, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463D1F8
		ESetParamResult SetString(FName ParameterName, FString InValue, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463D118
		ESetParamResult SetInt(FName ParameterName, int32_t InValue, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463D038
		ESetParamResult SetFloat(FName ParameterName, float InValue, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463CF58
		ESetParamResult SetBool(FName ParameterName, bool InValue, bool OnlyIfExists); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463CE78
		UMetasoundParameterPack MakeMetasoundParameterPack(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41463CD98
		bool HasTrigger(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463CCB8
		bool HasString(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463CBD8
		bool HasInt(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463CAF8
		bool HasFloat(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463CA18
		bool HasBool(FName ParameterName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463C938
		bool GetTrigger(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41463C858
		FString GetString(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41463C778
		int32_t GetInt(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41463C698
		float GetFloat(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41463C5B8
		bool GetBool(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41463C4D8
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
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FMetasoundFrontendDocument Document; // 0x30(0x1C0)
		UClass MetaSoundUClass; // 0x1F0(0x8)
		UClass BuilderUClass; // 0x1F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MetasoundFrontend.MetaSoundBuilderDocument");
			return ret;
		}
	};

}
