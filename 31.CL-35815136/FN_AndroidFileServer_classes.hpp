#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AndroidFileServer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		bool StopFileServer(bool bUSB, bool bNetwork); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7523F0A5C(relative to base address)
		bool StartFileServer(bool bUSB, bool bNetwork, int32_t Port); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7523F0970(relative to base address)
		TEnumAsByte IsFileServerRunning(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF748CDD424(relative to base address)
	};

}
