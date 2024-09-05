#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortImGuiCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData02_3[0xA0]; // 0x290(0xA0) UNKNOWN PROPERTY
		APlayerController PrivateLocalPlayerController; // 0x330(0x8)
		unsigned char UnknownData03_7[0x188]; // 0x338(0x188) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortImGuiCore.ImGuiDebugMenuBase");
			return ret;
		}

		void ToggleInputLock(); // Flags: Final|Native|Protected 0x7FF414C84558
	};


	// Class FortImGuiCore.ObjectDebuggerMenu
	// Inherited from AImGuiDebugMenuBase -> AActor -> UObject
	// Size: 0x130 (0x5F0 - 0x4C0)
	class AObjectDebuggerMenu : public AImGuiDebugMenuBase	
	{
	public:
		unsigned char UnknownData01_1[0x130]; // 0x4C0(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortImGuiCore.ObjectDebuggerMenu");
			return ret;
		}
	};

}
