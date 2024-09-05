#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NNE
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NNE.NNEModelData
	// Inherited from UObject
	// Size: 0xE0 (0x108 - 0x28)
	class UNNEModelData : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xE0]; // 0x28(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNE.NNEModelData");
			return ret;
		}
	};


	// Class NNE.NNERuntime
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNNERuntime : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNE.NNERuntime");
			return ret;
		}
	};


	// Class NNE.NNERuntimeCPU
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNNERuntimeCPU : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNE.NNERuntimeCPU");
			return ret;
		}
	};


	// Class NNE.NNERuntimeGPU
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNNERuntimeGPU : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNE.NNERuntimeGPU");
			return ret;
		}
	};


	// Class NNE.NNERuntimeRDG
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNNERuntimeRDG : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNE.NNERuntimeRDG");
			return ret;
		}
	};

}
