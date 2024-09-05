#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AndroidPermission
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AndroidPermission.AndroidPermissionCallbackProxy
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UAndroidPermissionCallbackProxy : public UObject	
	{
	public:
		FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

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

		bool CheckPermission(FString Permission); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E9BCC0
		UAndroidPermissionCallbackProxy AcquirePermissions(TArray& Permissions); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E9BBE0
	};

}
