#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeImport
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class InterchangeImport.InterchangeAnimationPayloadInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeAnimationPayloadInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeAnimationPayloadInterface");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeAssetUserData
	// Inherited from UAssetUserData -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UInterchangeAssetUserData : public UAssetUserData	
	{
	public:
		TMap MetaData; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeAssetUserData");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeBlockedTexturePayloadInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeBlockedTexturePayloadInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeBlockedTexturePayloadInterface");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeActorFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangeActorFactory : public UInterchangeFactoryBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeActorFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeDecalActorFactory
	// Inherited from UInterchangeActorFactory -> UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangeDecalActorFactory : public UInterchangeActorFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeDecalActorFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeLevelSequenceFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UInterchangeLevelSequenceFactory : public UInterchangeFactoryBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeLevelSequenceFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeLightActorFactory
	// Inherited from UInterchangeActorFactory -> UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangeLightActorFactory : public UInterchangeActorFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeLightActorFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeMeshPayloadInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeMeshPayloadInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeMeshPayloadInterface");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeSceneImportAssetFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangeSceneImportAssetFactory : public UInterchangeFactoryBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeSceneImportAssetFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeSceneVariantSetsFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UInterchangeSceneVariantSetsFactory : public UInterchangeFactoryBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeSceneVariantSetsFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeSlicedTexturePayloadInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeSlicedTexturePayloadInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeSlicedTexturePayloadInterface");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeTextureLightProfilePayloadInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeTextureLightProfilePayloadInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeTextureLightProfilePayloadInterface");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeTexturePayloadInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeTexturePayloadInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeTexturePayloadInterface");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeVariantSetPayloadInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInterchangeVariantSetPayloadInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeVariantSetPayloadInterface");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXRamp4
	// Inherited from UMaterialExpression -> UObject
	// Size: 0xD0 (0x180 - 0xB0)
	class UMaterialExpressionMaterialXRamp4 : public UMaterialExpression	
	{
	public:
		FExpressionInput Coordinates; // 0xB0(0x28)
		FExpressionInput A; // 0xD8(0x28)
		FExpressionInput B; // 0x100(0x28)
		FExpressionInput C; // 0x128(0x28)
		FExpressionInput D; // 0x150(0x28)
		char ConstCoordinate; // 0x178(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x179(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXRamp4");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeAnimSequenceFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x108 (0x138 - 0x30)
	class UInterchangeAnimSequenceFactory : public UInterchangeFactoryBase	
	{
	public:
		unsigned char UnknownData01_1[0x108]; // 0x30(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeAnimSequenceFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeFbxTranslatorSettings
	// Inherited from UInterchangeTranslatorSettings -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UInterchangeFbxTranslatorSettings : public UInterchangeTranslatorSettings	
	{
	public:
		bool bConvertScene; // 0x28(0x1)
		bool bForceFrontXAxis; // 0x29(0x1)
		bool bConvertSceneUnit; // 0x2A(0x1)
		bool bKeepFbxNamespace; // 0x2B(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeFbxTranslatorSettings");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeFbxTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x40 (0x78 - 0x38)
	class UInterchangeFbxTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x38(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeFbxTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeGLTFTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x258 (0x290 - 0x38)
	class UInterchangeGLTFTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x258]; // 0x38(0x258) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeGLTFTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeMaterialXTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UInterchangeMaterialXTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeMaterialXTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXAppend3Vector
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x78 (0x128 - 0xB0)
	class UMaterialExpressionMaterialXAppend3Vector : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput C; // 0x100(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXAppend3Vector");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXAppend4Vector
	// Inherited from UMaterialExpression -> UObject
	// Size: 0xA0 (0x150 - 0xB0)
	class UMaterialExpressionMaterialXAppend4Vector : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput C; // 0x100(0x28)
		FExpressionInput D; // 0x128(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXAppend4Vector");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXBurn
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXBurn : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXBurn");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXDifference
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXDifference : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXDifference");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXDisjointOver
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXDisjointOver : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXDisjointOver");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXDodge
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXDodge : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXDodge");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXFractal3D
	// Inherited from UMaterialExpression -> UObject
	// Size: 0xF8 (0x1A8 - 0xB0)
	class UMaterialExpressionMaterialXFractal3D : public UMaterialExpression	
	{
	public:
		FExpressionInput Position; // 0xB0(0x28)
		FExpressionInput Amplitude; // 0xD8(0x28)
		float ConstAmplitude; // 0x100(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FExpressionInput Octaves; // 0x108(0x28)
		int32_t ConstOctaves; // 0x130(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		FExpressionInput Lacunarity; // 0x138(0x28)
		float ConstLacunarity; // 0x160(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		FExpressionInput Diminish; // 0x168(0x28)
		float ConstDiminish; // 0x190(0x4)
		float Scale; // 0x194(0x4)
		bool bTurbulence; // 0x198(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x199(0x3) UNKNOWN PROPERTY
		int32_t Levels; // 0x19C(0x4)
		float OutputMin; // 0x1A0(0x4)
		float OutputMax; // 0x1A4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXFractal3D");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXIn
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXIn : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXIn");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXLuminance
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x40 (0xF0 - 0xB0)
	class UMaterialExpressionMaterialXLuminance : public UMaterialExpression	
	{
	public:
		FExpressionInput Input; // 0xB0(0x28)
		FLinearColor LuminanceFactors; // 0xD8(0x10)
		EMaterialXLuminanceMode LuminanceMode; // 0xE8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXLuminance");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXMask
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXMask : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXMask");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXMatte
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXMatte : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXMatte");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXMinus
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXMinus : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXMinus");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXOut
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXOut : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXOut");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXOver
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXOver : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXOver");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXOverlay
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXOverlay : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXOverlay");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXPlace2D
	// Inherited from UMaterialExpression -> UObject
	// Size: 0xD0 (0x180 - 0xB0)
	class UMaterialExpressionMaterialXPlace2D : public UMaterialExpression	
	{
	public:
		FExpressionInput Coordinates; // 0xB0(0x28)
		FExpressionInput Pivot; // 0xD8(0x28)
		FExpressionInput Scale; // 0x100(0x28)
		FExpressionInput Offset; // 0x128(0x28)
		FExpressionInput RotationAngle; // 0x150(0x28)
		float ConstRotationAngle; // 0x178(0x4)
		char ConstCoordinate; // 0x17C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x17D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXPlace2D");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXPlus
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXPlus : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXPlus");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXPremult
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x28 (0xD8 - 0xB0)
	class UMaterialExpressionMaterialXPremult : public UMaterialExpression	
	{
	public:
		FExpressionInput Input; // 0xB0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXPremult");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXRampLeftRight
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXRampLeftRight : public UMaterialExpression	
	{
	public:
		FExpressionInput Coordinates; // 0xB0(0x28)
		FExpressionInput A; // 0xD8(0x28)
		FExpressionInput B; // 0x100(0x28)
		char ConstCoordinate; // 0x128(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x129(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXRampLeftRight");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXRampTopBottom
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXRampTopBottom : public UMaterialExpression	
	{
	public:
		FExpressionInput Coordinates; // 0xB0(0x28)
		FExpressionInput A; // 0xD8(0x28)
		FExpressionInput B; // 0x100(0x28)
		char ConstCoordinate; // 0x128(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x129(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXRampTopBottom");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXRemap
	// Inherited from UMaterialExpression -> UObject
	// Size: 0xD8 (0x188 - 0xB0)
	class UMaterialExpressionMaterialXRemap : public UMaterialExpression	
	{
	public:
		FExpressionInput Input; // 0xB0(0x28)
		FExpressionInput InputLow; // 0xD8(0x28)
		FExpressionInput InputHigh; // 0x100(0x28)
		FExpressionInput TargetLow; // 0x128(0x28)
		FExpressionInput TargetHigh; // 0x150(0x28)
		float InputLowDefault; // 0x178(0x4)
		float InputHighDefault; // 0x17C(0x4)
		float TargetLowDefault; // 0x180(0x4)
		float TargetHighDefault; // 0x184(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXRemap");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXRotate2D
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x58 (0x108 - 0xB0)
	class UMaterialExpressionMaterialXRotate2D : public UMaterialExpression	
	{
	public:
		FExpressionInput Input; // 0xB0(0x28)
		FExpressionInput RotationAngle; // 0xD8(0x28)
		float ConstRotationAngle; // 0x100(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x104(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXRotate2D");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXScreen
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x80 (0x130 - 0xB0)
	class UMaterialExpressionMaterialXScreen : public UMaterialExpression	
	{
	public:
		FExpressionInput A; // 0xB0(0x28)
		FExpressionInput B; // 0xD8(0x28)
		FExpressionInput Alpha; // 0x100(0x28)
		float ConstAlpha; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXScreen");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXSplitLeftRight
	// Inherited from UMaterialExpression -> UObject
	// Size: 0xA8 (0x158 - 0xB0)
	class UMaterialExpressionMaterialXSplitLeftRight : public UMaterialExpression	
	{
	public:
		FExpressionInput Coordinates; // 0xB0(0x28)
		FExpressionInput A; // 0xD8(0x28)
		FExpressionInput B; // 0x100(0x28)
		FExpressionInput Center; // 0x128(0x28)
		float ConstCenter; // 0x150(0x4)
		char ConstCoordinate; // 0x154(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x155(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXSplitLeftRight");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXSplitTopBottom
	// Inherited from UMaterialExpression -> UObject
	// Size: 0xA8 (0x158 - 0xB0)
	class UMaterialExpressionMaterialXSplitTopBottom : public UMaterialExpression	
	{
	public:
		FExpressionInput Coordinates; // 0xB0(0x28)
		FExpressionInput A; // 0xD8(0x28)
		FExpressionInput B; // 0x100(0x28)
		FExpressionInput Center; // 0x128(0x28)
		float ConstCenter; // 0x150(0x4)
		char ConstCoordinate; // 0x154(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x155(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXSplitTopBottom");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXSwizzle
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x38 (0xE8 - 0xB0)
	class UMaterialExpressionMaterialXSwizzle : public UMaterialExpression	
	{
	public:
		FExpressionInput Input; // 0xB0(0x28)
		FString Channels; // 0xD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXSwizzle");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXTextureSampleParameterBlur
	// Inherited from UMaterialExpressionTextureSampleParameter2D -> UMaterialExpressionTextureSampleParameter -> UMaterialExpressionTextureSample -> UMaterialExpressionTextureBase -> UMaterialExpression -> UObject
	// Size: 0x10 (0x228 - 0x218)
	class UMaterialExpressionMaterialXTextureSampleParameterBlur : public UMaterialExpressionTextureSampleParameter2D	
	{
	public:
		EMAterialXTextureSampleBlurKernel KernelSize; // 0x218(0x4)
		float FilterSize; // 0x21C(0x4)
		float FilterOffset; // 0x220(0x4)
		EMaterialXTextureSampleBlurFilter Filter; // 0x224(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x225(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXTextureSampleParameterBlur");
			return ret;
		}
	};


	// Class InterchangeImport.MaterialExpressionMaterialXUnpremult
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x28 (0xD8 - 0xB0)
	class UMaterialExpressionMaterialXUnpremult : public UMaterialExpression	
	{
	public:
		FExpressionInput Input; // 0xB0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.MaterialExpressionMaterialXUnpremult");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeMaterialFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UInterchangeMaterialFactory : public UInterchangeFactoryBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeMaterialFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeMaterialFunctionFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UInterchangeMaterialFunctionFactory : public UInterchangeFactoryBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeMaterialFunctionFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeOBJTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UInterchangeOBJTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeOBJTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangePhysicsAssetFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangePhysicsAssetFactory : public UInterchangeFactoryBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangePhysicsAssetFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeSkeletalMeshFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UInterchangeSkeletalMeshFactory : public UInterchangeFactoryBase	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeSkeletalMeshFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeSkeletonFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangeSkeletonFactory : public UInterchangeFactoryBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeSkeletonFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeStaticMeshFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UInterchangeStaticMeshFactory : public UInterchangeFactoryBase	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x30(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeStaticMeshFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeCineCameraActorFactory
	// Inherited from UInterchangeActorFactory -> UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangeCineCameraActorFactory : public UInterchangeActorFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeCineCameraActorFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeCameraActorFactory
	// Inherited from UInterchangeActorFactory -> UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangeCameraActorFactory : public UInterchangeActorFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeCameraActorFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeSkeletalMeshActorFactory
	// Inherited from UInterchangeActorFactory -> UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangeSkeletalMeshActorFactory : public UInterchangeActorFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeSkeletalMeshActorFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeStaticMeshActorFactory
	// Inherited from UInterchangeActorFactory -> UInterchangeFactoryBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UInterchangeStaticMeshActorFactory : public UInterchangeActorFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeStaticMeshActorFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeDDSTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UInterchangeDDSTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeDDSTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeIESTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UInterchangeIESTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeIESTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeImageWrapperTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UInterchangeImageWrapperTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeImageWrapperTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeJPGTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UInterchangeJPGTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeJPGTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangePSDTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UInterchangePSDTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangePSDTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeTextureFactory
	// Inherited from UInterchangeFactoryBase -> UObject
	// Size: 0x90 (0xC0 - 0x30)
	class UInterchangeTextureFactory : public UInterchangeFactoryBase	
	{
	public:
		unsigned char UnknownData01_1[0x90]; // 0x30(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeTextureFactory");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeUEJPEGTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UInterchangeUEJPEGTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeUEJPEGTranslator");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeUsdTranslatorSettings
	// Inherited from UInterchangeTranslatorSettings -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UInterchangeUsdTranslatorSettings : public UInterchangeTranslatorSettings	
	{
	public:
		int32_t GeometryPurpose; // 0x28(0x4)
		FName RenderContext; // 0x2C(0x4)
		FName MaterialPurpose; // 0x30(0x4)
		bool bOverrideStageOptions; // 0x34(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		FUsdStageOptions StageOptions; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeUsdTranslatorSettings");
			return ret;
		}
	};


	// Class InterchangeImport.InterchangeUSDTranslator
	// Inherited from UInterchangeTranslatorBase -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UInterchangeUSDTranslator : public UInterchangeTranslatorBase	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x38(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeImport.InterchangeUSDTranslator");
			return ret;
		}
	};

}
