#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PropertyPath
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PropertyPath.PropertyPathTestObject
	// Inherited from UObject
	// Size: 0x158 (0x180 - 0x28)
	class UPropertyPathTestObject : public UObject	
	{
	public:
		bool bool; // 0x28(0x1)
		TEnumAsByte<EPropertyPathTestEnum> EnumOne; // 0x29(0x1)
		TEnumAsByte<EPropertyPathTestEnum> EnumTwo; // 0x2A(0x1)
		TEnumAsByte<EPropertyPathTestEnum> EnumThree; // 0x2B(0x1)
		TEnumAsByte<EPropertyPathTestEnum> EnumFour; // 0x2C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		int32_t Integer; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FString String; // 0x38(0x10)
		float float; // 0x48(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FPropertyPathTestStruct Struct; // 0x50(0x60)
		FPropertyPathTestStruct StructRef; // 0xB0(0x60)
		FPropertyPathTestStruct StructConstRef; // 0x110(0x60)
		UPropertyPathTestObject* InnerObject; // 0x170(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x178(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PropertyPath.PropertyPathTestObject");
			return ret;
		}

		void SetStructRef(FPropertyPathTestStruct InStruct); // Flags: Final|Native|Public, Memory Exec: 0x7FF74BBFE6D0(relative to base address)
		void SetStructConstRef(FPropertyPathTestStruct InStruct); // Flags: Final|Native|Public, Memory Exec: 0x7FF74BBFE598(relative to base address)
		void SetStruct(FPropertyPathTestStruct InStruct); // Flags: Final|Native|Public, Memory Exec: 0x7FF74BBFE460(relative to base address)
		void SetFloat(float InFloat); // Flags: Final|Native|Public, Memory Exec: 0x7FF74BBFE3DC(relative to base address)
		FPropertyPathTestStruct GetStructRef(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74BBFE3B8(relative to base address)
		FPropertyPathTestStruct GetStructConstRef(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74BBFE394(relative to base address)
		FPropertyPathTestStruct GetStruct(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74BBFE350(relative to base address)
		float GetFloat(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74BBFE334(relative to base address)
	};

}
