#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AndroidFileServer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AndroidFileServer.AndroidFileServerBPLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AndroidFileServer.AndroidFileServerBPLibrary");
			return ret;
		}

		bool StopFileServer(bool bUSB, bool bNetwork); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFDDA0
		bool StartFileServer(bool bUSB, bool bNetwork, int32_t Port); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFDCC0
		TEnumAsByte IsFileServerRunning(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414EFDBE0
	};

}
