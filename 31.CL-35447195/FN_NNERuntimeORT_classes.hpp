#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NNERuntimeORT
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NNERuntimeORT.NNERuntimeORTSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UNNERuntimeORTSettings : public UDeveloperSettings	
	{
	public:
		FThreadingOptions EditorThreadingOptions; // 0x30(0x10)
		FThreadingOptions GameThreadingOptions; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNERuntimeORT.NNERuntimeORTSettings");
			return ret;
		}
	};


	// Class NNERuntimeORT.NNERuntimeORTCpu
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UNNERuntimeORTCpu : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNERuntimeORT.NNERuntimeORTCpu");
			return ret;
		}
	};


	// Class NNERuntimeORT.NNERuntimeORTDml
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UNNERuntimeORTDml : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NNERuntimeORT.NNERuntimeORTDml");
			return ret;
		}
	};

}
