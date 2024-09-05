#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortImGuiCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortImGuiCore.DebuggableObject
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDebuggableObject : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortImGuiCore.DebuggableObject");
			return ret;
		}
	};


	// Class FortImGuiCore.ImGuiDebugMenuBase
	// Inherited from AActor -> UObject
	// Size: 0x230 (0x4C0 - 0x290)
	class AImGuiDebugMenuBase : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0xA0]; // 0x290(0xA0) UNKNOWN PROPERTY
		APlayerController* PrivateLocalPlayerController; // 0x330(0x8)
		unsigned char UnknownData01_7[0x188]; // 0x338(0x188) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortImGuiCore.ImGuiDebugMenuBase");
			return ret;
		}

		void ToggleInputLock(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class FortImGuiCore.ObjectDebuggerMenu
	// Inherited from AImGuiDebugMenuBase -> AActor -> UObject
	// Size: 0x130 (0x5F0 - 0x4C0)
	class AObjectDebuggerMenu : public AImGuiDebugMenuBase	
	{
	public:
		unsigned char UnknownData00_1[0x130]; // 0x4C0(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortImGuiCore.ObjectDebuggerMenu");
			return ret;
		}
	};

}
