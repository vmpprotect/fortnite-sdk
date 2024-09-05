#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MIDIDevice
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FString DeviceName; // 0x40(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x18]; // 0x98(0x18) UNKNOWN PROPERTY
		int32_t DeviceID; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FString DeviceName; // 0xB8(0x10)
		unsigned char UnknownData02_7[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY

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

		void ShutDownAllMIDIDevices(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520BF50C(relative to base address)
		void GetMIDIOutputDeviceIDByName(FString DeviceName, int32_t& DeviceID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520BEC48(relative to base address)
		void GetMIDIInputDeviceIDByName(FString DeviceName, int32_t& DeviceID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520BEB1C(relative to base address)
		void GetDefaultMIDIOutputDeviceID(int32_t& DeviceID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520BEA38(relative to base address)
		void GetDefaultMIDIInputDeviceID(int32_t& DeviceID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520BE954(relative to base address)
		void FindMIDIDevices(TArray<FFoundMIDIDevice>& OutMIDIDevices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520BE8C8(relative to base address)
		void FindAllMIDIDeviceInfo(TArray<FMIDIDeviceInfo>& OutMIDIInputDevices, TArray<FMIDIDeviceInfo>& OutMIDIOutputDevices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520BE7B4(relative to base address)
		UMIDIDeviceOutputController CreateMIDIDeviceOutputController(int32_t DeviceID); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520BE734(relative to base address)
		UMIDIDeviceInputController CreateMIDIDeviceInputController(int32_t DeviceID, int32_t MIDIBufferSize); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520BE674(relative to base address)
		UMIDIDeviceController CreateMIDIDeviceController(int32_t DeviceID, int32_t MIDIBufferSize); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520BE5B4(relative to base address)
	};


	// Class MIDIDevice.MIDIDeviceOutputController
	// Inherited from UMIDIDeviceControllerBase -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UMIDIDeviceOutputController : public UMIDIDeviceControllerBase	
	{
	public:
		int32_t DeviceID; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString DeviceName; // 0x30(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MIDIDevice.MIDIDeviceOutputController");
			return ret;
		}

		void SendMIDIProgramChange(int32_t Channel, int32_t ProgramNumber); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520BF448(relative to base address)
		void SendMIDIPitchBend(int32_t Channel, int32_t pitch); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520BF360(relative to base address)
		void SendMIDINoteOn(int32_t Channel, int32_t Note, int32_t Velocity); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520BF264(relative to base address)
		void SendMIDINoteOff(int32_t Channel, int32_t Note, int32_t Velocity); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520BF168(relative to base address)
		void SendMIDINoteAftertouch(int32_t Channel, int32_t Note, float Amount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520BF06C(relative to base address)
		void SendMIDIEvent(EMIDIEventType EventType, int32_t Channel, int32_t data1, int32_t data2); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520BEF34(relative to base address)
		void SendMIDIControlChange(int32_t Channel, int32_t Type, int32_t Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520BEE38(relative to base address)
		void SendMIDIChannelAftertouch(int32_t Channel, float Amount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7520BED74(relative to base address)
	};

}
