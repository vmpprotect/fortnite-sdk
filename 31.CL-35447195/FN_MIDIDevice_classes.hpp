#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MIDIDevice
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MIDIDevice.MIDIDeviceControllerBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMIDIDeviceControllerBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MIDIDevice.MIDIDeviceControllerBase");
			return ret;
		}
	};


	// Class MIDIDevice.MIDIDeviceController
	// Inherited from UMIDIDeviceControllerBase -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class UMIDIDeviceController : public UMIDIDeviceControllerBase	
	{
	public:
		FMulticastInlineDelegate OnMIDIEvent; // 0x28(0x10)
		int32_t DeviceID; // 0x38(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FString DeviceName; // 0x40(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MIDIDevice.MIDIDeviceController");
			return ret;
		}
	};


	// Class MIDIDevice.MIDIDeviceInputController
	// Inherited from UMIDIDeviceControllerBase -> UObject
	// Size: 0xB0 (0xD8 - 0x28)
	class UMIDIDeviceInputController : public UMIDIDeviceControllerBase	
	{
	public:
		FMulticastInlineDelegate OnMIDINoteOn; // 0x28(0x10)
		FMulticastInlineDelegate OnMIDINoteOff; // 0x38(0x10)
		FMulticastInlineDelegate OnMIDIPitchBend; // 0x48(0x10)
		FMulticastInlineDelegate OnMIDIAftertouch; // 0x58(0x10)
		FMulticastInlineDelegate OnMIDIControlChange; // 0x68(0x10)
		FMulticastInlineDelegate OnMIDIProgramChange; // 0x78(0x10)
		FMulticastInlineDelegate OnMIDIChannelAftertouch; // 0x88(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x98(0x18) UNKNOWN PROPERTY
		int32_t DeviceID; // 0xB0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FString DeviceName; // 0xB8(0x10)
		unsigned char UnknownData05_7[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MIDIDevice.MIDIDeviceInputController");
			return ret;
		}
	};


	// Class MIDIDevice.MIDIDeviceManager
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMIDIDeviceManager : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MIDIDevice.MIDIDeviceManager");
			return ret;
		}

		void ShutDownAllMIDIDevices(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB9620
		void GetMIDIOutputDeviceIDByName(FString DeviceName, int32_t& DeviceID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB9540
		void GetMIDIInputDeviceIDByName(FString DeviceName, int32_t& DeviceID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB9460
		void GetDefaultMIDIOutputDeviceID(int32_t& DeviceID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB9380
		void GetDefaultMIDIInputDeviceID(int32_t& DeviceID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB92A0
		void FindMIDIDevices(TArray& OutMIDIDevices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB91C0
		void FindAllMIDIDeviceInfo(TArray& OutMIDIInputDevices, TArray& OutMIDIOutputDevices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414EB90E0
		UMIDIDeviceOutputController CreateMIDIDeviceOutputController(int32_t DeviceID); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB9000
		UMIDIDeviceInputController CreateMIDIDeviceInputController(int32_t DeviceID, int32_t MIDIBufferSize); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB8F20
		UMIDIDeviceController CreateMIDIDeviceController(int32_t DeviceID, int32_t MIDIBufferSize); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EB8E40
	};


	// Class MIDIDevice.MIDIDeviceOutputController
	// Inherited from UMIDIDeviceControllerBase -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UMIDIDeviceOutputController : public UMIDIDeviceControllerBase	
	{
	public:
		int32_t DeviceID; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString DeviceName; // 0x30(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MIDIDevice.MIDIDeviceOutputController");
			return ret;
		}

		void SendMIDIProgramChange(int32_t Channel, int32_t ProgramNumber); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB9D20
		void SendMIDIPitchBend(int32_t Channel, int32_t pitch); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB9C40
		void SendMIDINoteOn(int32_t Channel, int32_t Note, int32_t Velocity); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB9B60
		void SendMIDINoteOff(int32_t Channel, int32_t Note, int32_t Velocity); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB9A80
		void SendMIDINoteAftertouch(int32_t Channel, int32_t Note, float Amount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB99A0
		void SendMIDIEvent(EMIDIEventType EventType, int32_t Channel, int32_t data1, int32_t data2); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB98C0
		void SendMIDIControlChange(int32_t Channel, int32_t Type, int32_t Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB97E0
		void SendMIDIChannelAftertouch(int32_t Channel, float Amount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB9700
	};

}
