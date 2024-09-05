#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PropertyPath
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PropertyPath.PropertyPathTestObject
	// Inherited from UObject
	// Size: 0x158 (0x180 - 0x28)
	class UPropertyPathTestObject : public UObject	
	{
	public:
		bool bool; // 0x28(0x1)
		TEnumAsByte EnumOne; // 0x29(0x1)
		TEnumAsByte EnumTwo; // 0x2A(0x1)
		TEnumAsByte EnumThree; // 0x2B(0x1)
		TEnumAsByte EnumFour; // 0x2C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		int32_t Integer; // 0x30(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FString String; // 0x38(0x10)
		float float; // 0x48(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FPropertyPathTestStruct Struct; // 0x50(0x60)
		FPropertyPathTestStruct StructRef; // 0xB0(0x60)
		FPropertyPathTestStruct StructConstRef; // 0x110(0x60)
		UPropertyPathTestObject InnerObject; // 0x170(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x178(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PropertyPath.PropertyPathTestObject");
			return ret;
		}

		void SetStructRef(FPropertyPathTestStruct InStruct); // Flags: Final|Native|Public 0x7FF414492D38
		void SetStructConstRef(FPropertyPathTestStruct InStruct); // Flags: Final|Native|Public 0x7FF414492C58
		void SetStruct(FPropertyPathTestStruct InStruct); // Flags: Final|Native|Public 0x7FF414492B78
		void SetFloat(float InFloat); // Flags: Final|Native|Public 0x7FF414492A98
		FPropertyPathTestStruct GetStructRef(); // Flags: Final|Native|Public|Const 0x7FF4144929B8
		FPropertyPathTestStruct GetStructConstRef(); // Flags: Final|Native|Public|Const 0x7FF4144928D8
		FPropertyPathTestStruct GetStruct(); // Flags: Final|Native|Public|Const 0x7FF4144927F8
		float GetFloat(); // Flags: Final|Native|Public|Const 0x7FF414492718
	};

}
