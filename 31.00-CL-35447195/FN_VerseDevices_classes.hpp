#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseDevices
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseDevices.VerseCreativePropAsset
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UVerseCreativePropAsset : public UObject	
	{
	public:
		FName AssetPathName; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		ULevelSaveRecord LevelSaveRecord; // 0x30(0x8)
		TWeakObjectPtr ActorClass; // 0x38(0x20)
		unsigned char UnknownData03_7[0x38]; // 0x58(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.VerseCreativePropAsset");
			return ret;
		}
	};


	// Class VerseDevices.VerseDeviceHealth
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UVerseDeviceHealth : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.VerseDeviceHealth");
			return ret;
		}
	};


	// Class VerseDevices.PlaylistUserOptionScript
	// Inherited from UPlaylistUserOptionBase -> UDataAsset -> UObject
	// Size: 0x18 (0x1D0 - 0x1B8)
	class UPlaylistUserOptionScript : public UPlaylistUserOptionBase	
	{
	public:
		TArray OptionValues; // 0x1B8(0x10)
		int32_t DefaultValueIndex; // 0x1C8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.PlaylistUserOptionScript");
			return ret;
		}
	};


	// Class VerseDevices.ScriptDevice
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x28 (0xC00 - 0xBD8)
	class AScriptDevice : public ABuildingProp	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xBD8(0x8) UNKNOWN PROPERTY
		UVerseCreativeDevice Script; // 0xBE0(0x8)
		UVerseCreativeDevice ScriptInstance; // 0xBE8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0xBF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.ScriptDevice");
			return ret;
		}

		void SetEnabled(bool bInEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BA5878
		void BP_SetVisibility(bool bVisible); // Flags: Event|Public|BlueprintEvent 0x7FF414BA5798
	};


	// Class VerseDevices.VerseMovableObjectBase
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UVerseMovableObjectBase : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x78]; // 0x28(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.VerseMovableObjectBase");
			return ret;
		}
	};


	// Class VerseDevices.VerseCreativeDevice
	// Inherited from UVerseMovableObjectBase -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UVerseCreativeDevice : public UVerseMovableObjectBase	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.VerseCreativeDevice");
			return ret;
		}
	};


	// Class VerseDevices.VerseCreativeObject
	// Inherited from UVerseMovableObjectBase -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UVerseCreativeObject : public UVerseMovableObjectBase	
	{
	public:
		AActor SavedActor; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.VerseCreativeObject");
			return ret;
		}
	};


	// Class VerseDevices.VerseCreativeObjectQuotaHelperComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UVerseCreativeObjectQuotaHelperComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.VerseCreativeObjectQuotaHelperComponent");
			return ret;
		}
	};


	// Class VerseDevices.VerseDevicesFeatureAction_RegisterWrapperClasses
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UVerseDevicesFeatureAction_RegisterWrapperClasses : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr DeviceToWrapperClassMapAsset; // 0x28(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.VerseDevicesFeatureAction_RegisterWrapperClasses");
			return ret;
		}
	};


	// Class VerseDevices.VerseDeviceSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x118 (0x148 - 0x30)
	class UVerseDeviceSubsystem : public UWorldSubsystem	
	{
	public:
		TMap DeviceClassToVerseClassMap; // 0x30(0x50)
		unsigned char UnknownData01_7[0xC8]; // 0x80(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.VerseDeviceSubsystem");
			return ret;
		}

		void HandleOnActorEndPlay(AActor Actor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Private 0x7FF414BA5958
	};


	// Class VerseDevices.VerseDeviceWrapperClassMap
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UVerseDeviceWrapperClassMap : public UDataAsset	
	{
	public:
		TMap DeviceClassMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseDevices.VerseDeviceWrapperClassMap");
			return ret;
		}
	};

}
