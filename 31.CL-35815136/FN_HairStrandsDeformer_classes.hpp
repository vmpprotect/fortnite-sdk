#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HairStrandsDeformer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HairStrandsDeformer.OptimusGroomDataInterface
	// Inherited from UOptimusComputeDataInterface -> UComputeDataInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOptimusGroomDataInterface : public UOptimusComputeDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsDeformer.OptimusGroomDataInterface");
			return ret;
		}
	};


	// Class HairStrandsDeformer.OptimusGroomDataProvider
	// Inherited from UComputeDataProvider -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UOptimusGroomDataProvider : public UComputeDataProvider	
	{
	public:
		UGroomComponent* Groom; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsDeformer.OptimusGroomDataProvider");
			return ret;
		}
	};


	// Class HairStrandsDeformer.OptimusGroomExecDataInterface
	// Inherited from UOptimusComputeDataInterface -> UComputeDataInterface -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		EOptimusGroomExecDomain Domain; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsDeformer.OptimusGroomExecDataInterface");
			return ret;
		}
	};


	// Class HairStrandsDeformer.OptimusGroomExecDataProvider
	// Inherited from UComputeDataProvider -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UOptimusGroomExecDataProvider : public UComputeDataProvider	
	{
	public:
		UGroomComponent* GroomComponent; // 0x28(0x8)
		EOptimusGroomExecDomain Domain; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsDeformer.OptimusGroomExecDataProvider");
			return ret;
		}
	};


	// Class HairStrandsDeformer.OptimusGroomGuideDataInterface
	// Inherited from UOptimusComputeDataInterface -> UComputeDataInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOptimusGroomGuideDataInterface : public UOptimusComputeDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsDeformer.OptimusGroomGuideDataInterface");
			return ret;
		}
	};


	// Class HairStrandsDeformer.OptimusGroomGuideDataProvider
	// Inherited from UComputeDataProvider -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UOptimusGroomGuideDataProvider : public UComputeDataProvider	
	{
	public:
		UGroomComponent* Groom; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsDeformer.OptimusGroomGuideDataProvider");
			return ret;
		}
	};


	// Class HairStrandsDeformer.OptimusGroomWriteDataInterface
	// Inherited from UOptimusComputeDataInterface -> UComputeDataInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsDeformer.OptimusGroomWriteDataInterface");
			return ret;
		}
	};


	// Class HairStrandsDeformer.OptimusGroomWriteDataProvider
	// Inherited from UComputeDataProvider -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UOptimusGroomWriteDataProvider : public UComputeDataProvider	
	{
	public:
		UGroomComponent* GroomComponent; // 0x28(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsDeformer.OptimusGroomWriteDataProvider");
			return ret;
		}
	};


	// Class HairStrandsDeformer.OptimusGroomComponentSource
	// Inherited from UOptimusComponentSource -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UOptimusGroomComponentSource : public UOptimusComponentSource	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HairStrandsDeformer.OptimusGroomComponentSource");
			return ret;
		}
	};

}
