#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ComputeFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/ComputeFramework.EComputeKernelFlags
	enum EComputeKernelFlags
	{
		EComputeKernelFlags__IsDefaultKernel = 1,
		EComputeKernelFlags__IsolatedMemoryWrites = 2,
	};


	// Enum /Script/ComputeFramework.EShaderFundamentalType
	enum EShaderFundamentalType
	{
		EShaderFundamentalType__Bool = 0,
		EShaderFundamentalType__Int = 1,
		EShaderFundamentalType__Uint = 2,
		EShaderFundamentalType__Float = 3,
		EShaderFundamentalType__Struct = 4,
		EShaderFundamentalType__None = FF,
	};


	// Enum /Script/ComputeFramework.EShaderFundamentalDimensionType
	enum EShaderFundamentalDimensionType
	{
		EShaderFundamentalDimensionType__Scalar = 0,
		EShaderFundamentalDimensionType__Vector = 1,
		EShaderFundamentalDimensionType__Matrix = 2,
	};


	// Enum /Script/ComputeFramework.EShaderParamBindingType
	enum EShaderParamBindingType
	{
		EShaderParamBindingType__None = 0,
		EShaderParamBindingType__ConstantParameter = 1,
		EShaderParamBindingType__ReadOnlyResource = 2,
		EShaderParamBindingType__ReadWriteResource = 3,
	};


	// Enum /Script/ComputeFramework.EShaderResourceType
	enum EShaderResourceType
	{
		EShaderResourceType__None = 0,
		EShaderResourceType__Texture1D = 1,
		EShaderResourceType__Texture2D = 2,
		EShaderResourceType__Texture3D = 3,
		EShaderResourceType__TextureCube = 4,
		EShaderResourceType__Buffer = 5,
		EShaderResourceType__StructuredBuffer = 6,
		EShaderResourceType__ByteAddressBuffer = 7,
	};

}
