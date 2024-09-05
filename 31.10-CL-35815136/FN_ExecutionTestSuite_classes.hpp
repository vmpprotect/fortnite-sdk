#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ExecutionTestSuite
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ExecutionTestSuite.ExecTestObject
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UExecTestObject : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ExecutionTestSuite.ExecTestObject");
			return ret;
		}
	};

}
