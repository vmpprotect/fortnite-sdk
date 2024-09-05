#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveLinkInterface
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LiveLinkInterface.LiveLinkController
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkController : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkController");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkFrameInterpolationProcessor : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkFramePreProcessor
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkFramePreProcessor : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkFramePreProcessor");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkRole
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkRole : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkRole");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkBasicRole
	// Inherited from ULiveLinkRole -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkBasicRole : public ULiveLinkRole	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkBasicRole");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkInputDeviceRole
	// Inherited from ULiveLinkBasicRole -> ULiveLinkRole -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkInputDeviceRole : public ULiveLinkBasicRole	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkInputDeviceRole");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkSourceSettings
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class ULiveLinkSourceSettings : public UObject	
	{
	public:
		ELiveLinkSourceMode Mode; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x30(0x60)
		FString ConnectionString; // 0x90(0x10)
		UClass Factory; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkSourceSettings");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkCurveRemapSettings
	// Inherited from ULiveLinkSourceSettings -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings	
	{
	public:
		FLiveLinkCurveConversionSettings CurveConversionSettings; // 0xA8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkCurveRemapSettings");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkFrameTranslator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkFrameTranslator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkFrameTranslator");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkSourceFactory
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkSourceFactory : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkSourceFactory");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkDefaultSourceSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class ULiveLinkDefaultSourceSettings : public UObject	
	{
	public:
		int32_t DefaultSourceFrameBufferSize; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkDefaultSourceSettings");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkDefaultSubjectSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class ULiveLinkDefaultSubjectSettings : public UObject	
	{
	public:
		bool bRebroadcastSubjectsByDefault; // 0x28(0x1)
		bool bAllowEditingRebroadcastProperty; // 0x29(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkDefaultSubjectSettings");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkSubjectSettings
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class ULiveLinkSubjectSettings : public UObject	
	{
	public:
		TArray PreProcessors; // 0x28(0x10)
		ULiveLinkFrameInterpolationProcessor InterpolationProcessor; // 0x38(0x8)
		TArray Translators; // 0x40(0x10)
		UClass Role; // 0x50(0x8)
		FFrameRate FrameRate; // 0x58(0x8)
		bool bAllowModifyingRebroadcast; // 0x60(0x1)
		bool bRebroadcastSubject; // 0x61(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x62(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkSubjectSettings");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkVirtualSubject
	// Inherited from UObject
	// Size: 0x130 (0x158 - 0x28)
	class ULiveLinkVirtualSubject : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UClass Role; // 0x30(0x8)
		TArray Subjects; // 0x38(0x10)
		TArray FrameTranslators; // 0x48(0x10)
		bool bRebroadcastSubject; // 0x58(0x1)
		unsigned char UnknownData03_7[0xFF]; // 0x59(0xFF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkVirtualSubject");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkAnimationRole
	// Inherited from ULiveLinkBasicRole -> ULiveLinkRole -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkAnimationRole : public ULiveLinkBasicRole	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkAnimationRole");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkTransformRole
	// Inherited from ULiveLinkBasicRole -> ULiveLinkRole -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkTransformRole : public ULiveLinkBasicRole	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkTransformRole");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkCameraRole
	// Inherited from ULiveLinkTransformRole -> ULiveLinkBasicRole -> ULiveLinkRole -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkCameraRole : public ULiveLinkTransformRole	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkCameraRole");
			return ret;
		}
	};


	// Class LiveLinkInterface.LiveLinkLightRole
	// Inherited from ULiveLinkTransformRole -> ULiveLinkBasicRole -> ULiveLinkRole -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULiveLinkLightRole : public ULiveLinkTransformRole	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkInterface.LiveLinkLightRole");
			return ret;
		}
	};

}
