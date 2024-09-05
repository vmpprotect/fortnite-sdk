#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ExecutionTestSuite
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ExecutionTestSuite.ExecTestObject
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UExecTestObject : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ExecutionTestSuite.ExecTestObject");
			return ret;
		}
	};

}
