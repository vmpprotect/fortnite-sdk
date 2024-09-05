#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NNE
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/NNE.ENNEAttributeDataType
	enum ENNEAttributeDataType
	{
		ENNEAttributeDataType__None = 0,
		ENNEAttributeDataType__Float = 1,
		ENNEAttributeDataType__FloatArray = 2,
		ENNEAttributeDataType__Int32 = 3,
		ENNEAttributeDataType__Int32Array = 4,
		ENNEAttributeDataType__String = 5,
		ENNEAttributeDataType__StringArray = 6,
	};


	// Enum /Script/NNE.ENNEFormatTensorType
	enum ENNEFormatTensorType
	{
		ENNEFormatTensorType__None = 0,
		ENNEFormatTensorType__Input = 1,
		ENNEFormatTensorType__Output = 2,
		ENNEFormatTensorType__Intermediate = 3,
		ENNEFormatTensorType__Initializer = 4,
		ENNEFormatTensorType__Empty = 5,
		ENNEFormatTensorType__NUM = 6,
	};


	// Enum /Script/NNE.ENNEInferenceFormat
	enum ENNEInferenceFormat
	{
		ENNEInferenceFormat__Invalid = 0,
		ENNEInferenceFormat__ONNX = 1,
		ENNEInferenceFormat__ORT = 2,
		ENNEInferenceFormat__NNERT = 3,
	};


	// Enum /Script/NNE.ENNETensorDataType
	enum ENNETensorDataType
	{
		ENNETensorDataType__None = 0,
		ENNETensorDataType__Char = 1,
		ENNETensorDataType__Boolean = 2,
		ENNETensorDataType__Half = 3,
		ENNETensorDataType__Float = 4,
		ENNETensorDataType__Double = 5,
		ENNETensorDataType__Int8 = 6,
		ENNETensorDataType__Int16 = 7,
		ENNETensorDataType__Int32 = 8,
		ENNETensorDataType__Int64 = 9,
		ENNETensorDataType__UInt8 = A,
		ENNETensorDataType__UInt16 = B,
		ENNETensorDataType__UInt32 = C,
		ENNETensorDataType__UInt64 = D,
		ENNETensorDataType__Complex64 = E,
		ENNETensorDataType__Complex128 = F,
		ENNETensorDataType__BFloat16 = 10,
	};

}
