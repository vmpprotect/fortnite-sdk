#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AndroidPermission
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AndroidPermission.AndroidPermissionCallbackProxy
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UAndroidPermissionCallbackProxy : public UObject	
	{
	public:
		FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AndroidPermission.AndroidPermissionCallbackProxy");
			return ret;
		}
	};


	// Class AndroidPermission.AndroidPermissionFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AndroidPermission.AndroidPermissionFunctionLibrary");
			return ret;
		}

		bool CheckPermission(FString Permission); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751DCF540(relative to base address)
		UAndroidPermissionCallbackProxy AcquirePermissions(TArray<FString>& Permissions); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DCF430(relative to base address)
	};

}
