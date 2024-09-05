#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CoreUObject
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/CoreUObject.EAutomationEventType
	enum EAutomationEventType
	{
		EAutomationEventType__Info = 0,
		EAutomationEventType__Warning = 1,
		EAutomationEventType__Error = 2,
	};


	// Enum /Script/CoreUObject.ERangeBoundTypes
	enum ERangeBoundTypes
	{
		ERangeBoundTypes__Exclusive = 0,
		ERangeBoundTypes__Inclusive = 1,
		ERangeBoundTypes__Open = 2,
	};


	// Enum /Script/CoreUObject.EInterpCurveMode
	enum EInterpCurveMode
	{
		CIM_Linear = 0,
		CIM_CurveAuto = 1,
		CIM_Constant = 2,
		CIM_CurveUser = 3,
		CIM_CurveBreak = 4,
		CIM_CurveAutoClamped = 5,
	};


	// Enum /Script/CoreUObject.EInputDeviceConnectionState
	enum EInputDeviceConnectionState
	{
		EInputDeviceConnectionState__Invalid = 0,
		EInputDeviceConnectionState__Unknown = 1,
		EInputDeviceConnectionState__Disconnected = 2,
		EInputDeviceConnectionState__Connected = 3,
	};


	// Enum /Script/CoreUObject.ELocalizedTextSourceCategory
	enum ELocalizedTextSourceCategory
	{
		ELocalizedTextSourceCategory__Game = 0,
		ELocalizedTextSourceCategory__Engine = 1,
		ELocalizedTextSourceCategory__Editor = 2,
	};


	// Enum /Script/CoreUObject.ELifetimeCondition
	enum ELifetimeCondition
	{
		COND_None = 0,
		COND_InitialOnly = 1,
		COND_OwnerOnly = 2,
		COND_SkipOwner = 3,
		COND_SimulatedOnly = 4,
		COND_AutonomousOnly = 5,
		COND_SimulatedOrPhysics = 6,
		COND_InitialOrOwner = 7,
		COND_Custom = 8,
		COND_ReplayOrOwner = 9,
		COND_ReplayOnly = A,
		COND_SimulatedOnlyNoReplay = B,
		COND_SimulatedOrPhysicsNoReplay = C,
		COND_SkipReplay = D,
		COND_Dynamic = E,
		COND_Never = F,
		COND_NetGroup = 10,
		COND_Max = 11,
	};


	// Enum /Script/CoreUObject.EDataValidationUsecase
	enum EDataValidationUsecase
	{
		EDataValidationUsecase__None = 0,
		EDataValidationUsecase__Manual = 1,
		EDataValidationUsecase__Commandlet = 2,
		EDataValidationUsecase__Save = 3,
		EDataValidationUsecase__PreSubmit = 4,
		EDataValidationUsecase__Script = 5,
	};


	// Enum /Script/CoreUObject.ETestInstanceDataObjectFruit
	enum ETestInstanceDataObjectFruit
	{
		ETestInstanceDataObjectFruit__None = 0,
		ETestInstanceDataObjectFruit__Apple = 1,
		ETestInstanceDataObjectFruit__Banana = 2,
		ETestInstanceDataObjectFruit__Orange = 3,
	};


	// Enum /Script/CoreUObject.ETestInstanceDataObjectFlags
	enum ETestInstanceDataObjectFlags
	{
		ETestInstanceDataObjectFlags__None = 0,
		ETestInstanceDataObjectFlags__North = 1,
		ETestInstanceDataObjectFlags__East = 2,
		ETestInstanceDataObjectFlags__South = 4,
		ETestInstanceDataObjectFlags__West = 8,
	};


	// Enum /Script/CoreUObject.ESearchCase
	enum ESearchCase
	{
		ESearchCase__CaseSensitive = 0,
		ESearchCase__IgnoreCase = 1,
	};


	// Enum /Script/CoreUObject.ESearchDir
	enum ESearchDir
	{
		ESearchDir__FromStart = 0,
		ESearchDir__FromEnd = 1,
	};


	// Enum /Script/CoreUObject.ELogTimes
	enum ELogTimes
	{
		ELogTimes__None = 0,
		ELogTimes__UTC = 1,
		ELogTimes__SinceGStartTime = 2,
		ELogTimes__Local = 3,
	};


	// Enum /Script/CoreUObject.EAxis
	enum EAxis
	{
		EAxis__None = 0,
		EAxis__X = 1,
		EAxis__Y = 2,
		EAxis__Z = 3,
	};


	// Enum /Script/CoreUObject.EAxisList
	enum EAxisList
	{
		EAxisList__None = 0,
		EAxisList__X = 1,
		EAxisList__Y = 2,
		EAxisList__Z = 4,
		EAxisList__Screen = 8,
		EAxisList__XY = 3,
		EAxisList__XZ = 5,
		EAxisList__YZ = 6,
		EAxisList__XYZ = 7,
		EAxisList__All = F,
		EAxisList__ZRotation = 6,
		EAxisList__Rotate2D = 8,
	};


	// Enum /Script/CoreUObject.EPixelFormat
	enum EPixelFormat
	{
		PF_Unknown = 0,
		PF_A32B32G32R32F = 1,
		PF_B8G8R8A8 = 2,
		PF_G8 = 3,
		PF_G16 = 4,
		PF_DXT1 = 5,
		PF_DXT3 = 6,
		PF_DXT5 = 7,
		PF_UYVY = 8,
		PF_FloatRGB = 9,
		PF_FloatRGBA = A,
		PF_DepthStencil = B,
		PF_ShadowDepth = C,
		PF_R32_FLOAT = D,
		PF_G16R16 = E,
		PF_G16R16F = F,
		PF_G16R16F_FILTER = 10,
		PF_G32R32F = 11,
		PF_A2B10G10R10 = 12,
		PF_A16B16G16R16 = 13,
		PF_D24 = 14,
		PF_R16F = 15,
		PF_R16F_FILTER = 16,
		PF_BC5 = 17,
		PF_V8U8 = 18,
		PF_A1 = 19,
		PF_FloatR11G11B10 = 1A,
		PF_A8 = 1B,
		PF_R32_UINT = 1C,
		PF_R32_SINT = 1D,
		PF_PVRTC2 = 1E,
		PF_PVRTC4 = 1F,
		PF_R16_UINT = 20,
		PF_R16_SINT = 21,
		PF_R16G16B16A16_UINT = 22,
		PF_R16G16B16A16_SINT = 23,
		PF_R5G6B5_UNORM = 24,
		PF_R8G8B8A8 = 25,
		PF_A8R8G8B8 = 26,
		PF_BC4 = 27,
		PF_R8G8 = 28,
		PF_ATC_RGB = 29,
		PF_ATC_RGBA_E = 2A,
		PF_ATC_RGBA_I = 2B,
		PF_X24_G8 = 2C,
		PF_ETC1 = 2D,
		PF_ETC2_RGB = 2E,
		PF_ETC2_RGBA = 2F,
		PF_R32G32B32A32_UINT = 30,
		PF_R16G16_UINT = 31,
		PF_ASTC_4x4 = 32,
		PF_ASTC_6x6 = 33,
		PF_ASTC_8x8 = 34,
		PF_ASTC_10x10 = 35,
		PF_ASTC_12x12 = 36,
		PF_BC6H = 37,
		PF_BC7 = 38,
		PF_R8_UINT = 39,
		PF_L8 = 3A,
		PF_XGXR8 = 3B,
		PF_R8G8B8A8_UINT = 3C,
		PF_R8G8B8A8_SNORM = 3D,
		PF_R16G16B16A16_UNORM = 3E,
		PF_R16G16B16A16_SNORM = 3F,
		PF_PLATFORM_HDR = 40,
		PF_PLATFORM_HDR = 41,
		PF_PLATFORM_HDR = 42,
		PF_NV12 = 43,
		PF_R32G32_UINT = 44,
		PF_ETC2_R11_EAC = 45,
		PF_ETC2_RG11_EAC = 46,
		PF_R8 = 47,
		PF_B5G5R5A1_UNORM = 48,
		PF_ASTC_4x4_HDR = 49,
		PF_ASTC_6x6_HDR = 4A,
		PF_ASTC_8x8_HDR = 4B,
		PF_ASTC_10x10_HDR = 4C,
		PF_ASTC_12x12_HDR = 4D,
		PF_G16R16_SNORM = 4E,
		PF_R8G8_UINT = 4F,
		PF_R32G32B32_UINT = 50,
		PF_R32G32B32_SINT = 51,
		PF_R32G32B32F = 52,
		PF_R8_SINT = 53,
		PF_R64_UINT = 54,
		PF_R9G9B9EXP5 = 55,
		PF_P010 = 56,
		PF_ASTC_4x4_NORM_RG = 57,
		PF_ASTC_6x6_NORM_RG = 58,
		PF_ASTC_8x8_NORM_RG = 59,
		PF_ASTC_10x10_NORM_RG = 5A,
		PF_ASTC_12x12_NORM_RG = 5B,
	};


	// Enum /Script/CoreUObject.EMouseCursor
	enum EMouseCursor
	{
		EMouseCursor__None = 0,
		EMouseCursor__Default = 1,
		EMouseCursor__TextEditBeam = 2,
		EMouseCursor__ResizeLeftRight = 3,
		EMouseCursor__ResizeUpDown = 4,
		EMouseCursor__ResizeSouthEast = 5,
		EMouseCursor__ResizeSouthWest = 6,
		EMouseCursor__CardinalCross = 7,
		EMouseCursor__Crosshairs = 8,
		EMouseCursor__Hand = 9,
		EMouseCursor__GrabHand = A,
		EMouseCursor__GrabHandClosed = B,
		EMouseCursor__SlashedCircle = C,
		EMouseCursor__EyeDropper = D,
		EMouseCursor__Custom = E,
	};


	// Enum /Script/CoreUObject.EUnit
	enum EUnit
	{
		EUnit__Micrometers = 0,
		EUnit__Millimeters = 1,
		EUnit__Centimeters = 2,
		EUnit__Meters = 3,
		EUnit__Kilometers = 4,
		EUnit__Inches = 5,
		EUnit__Feet = 6,
		EUnit__Yards = 7,
		EUnit__Miles = 8,
		EUnit__Lightyears = 9,
		EUnit__Degrees = A,
		EUnit__Radians = B,
		EUnit__CentimetersPerSecond = C,
		EUnit__MetersPerSecond = D,
		EUnit__KilometersPerHour = E,
		EUnit__MilesPerHour = F,
		EUnit__DegreesPerSecond = 10,
		EUnit__RadiansPerSecond = 11,
		EUnit__CentimetersPerSecondSquared = 12,
		EUnit__MetersPerSecondSquared = 13,
		EUnit__Celsius = 14,
		EUnit__Farenheit = 15,
		EUnit__Kelvin = 16,
		EUnit__Micrograms = 17,
		EUnit__Milligrams = 18,
		EUnit__Grams = 19,
		EUnit__Kilograms = 1A,
		EUnit__MetricTons = 1B,
		EUnit__Ounces = 1C,
		EUnit__Pounds = 1D,
		EUnit__Stones = 1E,
		EUnit__GramsPerCubicCentimeter = 1F,
		EUnit__GramsPerCubicMeter = 20,
		EUnit__KilogramsPerCubicCentimeter = 21,
		EUnit__KilogramsPerCubicMeter = 22,
		EUnit__Newtons = 23,
		EUnit__PoundsForce = 24,
		EUnit__KilogramsForce = 25,
		EUnit__KilogramCentimetersPerSecondSquared = 26,
		EUnit__NewtonMeters = 27,
		EUnit__KilogramCentimetersSquaredPerSecondSquared = 28,
		EUnit__NewtonSeconds = 29,
		EUnit__KilogramCentimeters = 2A,
		EUnit__KilogramMeters = 2B,
		EUnit__Hertz = 2C,
		EUnit__Kilohertz = 2D,
		EUnit__Megahertz = 2E,
		EUnit__Gigahertz = 2F,
		EUnit__RevolutionsPerMinute = 30,
		EUnit__Bytes = 31,
		EUnit__Kilobytes = 32,
		EUnit__Megabytes = 33,
		EUnit__Gigabytes = 34,
		EUnit__Terabytes = 35,
		EUnit__Lumens = 36,
		EUnit__Candela = 37,
		EUnit__Lux = 38,
		EUnit__CandelaPerMeter2 = 39,
		EUnit__ExposureValue = 3A,
		EUnit__Nanoseconds = 3B,
		EUnit__Microseconds = 3C,
		EUnit__Milliseconds = 3D,
		EUnit__Seconds = 3E,
		EUnit__Minutes = 3F,
		EUnit__Hours = 40,
		EUnit__Days = 41,
		EUnit__Months = 42,
		EUnit__Years = 43,
		EUnit__PixelsPerInch = 44,
		EUnit__Percentage = 45,
		EUnit__Multiplier = 46,
		EUnit__Pascals = 47,
		EUnit__KiloPascals = 48,
		EUnit__MegaPascals = 49,
		EUnit__GigaPascals = 4A,
		EUnit__Unspecified = 4B,
	};


	// Enum /Script/CoreUObject.EPropertyAccessChangeNotifyMode
	enum EPropertyAccessChangeNotifyMode
	{
		EPropertyAccessChangeNotifyMode__Default = 0,
		EPropertyAccessChangeNotifyMode__Never = 1,
		EPropertyAccessChangeNotifyMode__Always = 2,
	};


	// Enum /Script/CoreUObject.EAppMsgCategory
	enum EAppMsgCategory
	{
		EAppMsgCategory__Warning = 0,
		EAppMsgCategory__Error = 1,
		EAppMsgCategory__Success = 2,
		EAppMsgCategory__Info = 3,
	};


	// Enum /Script/CoreUObject.EAppReturnType
	enum EAppReturnType
	{
		EAppReturnType__No = 0,
		EAppReturnType__Yes = 1,
		EAppReturnType__YesAll = 2,
		EAppReturnType__NoAll = 3,
		EAppReturnType__Cancel = 4,
		EAppReturnType__Ok = 5,
		EAppReturnType__Retry = 6,
		EAppReturnType__Continue = 7,
	};


	// Enum /Script/CoreUObject.EAppMsgType
	enum EAppMsgType
	{
		EAppMsgType__Ok = 0,
		EAppMsgType__YesNo = 1,
		EAppMsgType__OkCancel = 2,
		EAppMsgType__YesNoCancel = 3,
		EAppMsgType__CancelRetryContinue = 4,
		EAppMsgType__YesNoYesAllNoAll = 5,
		EAppMsgType__YesNoYesAllNoAllCancel = 6,
		EAppMsgType__YesNoYesAll = 7,
	};


	// Enum /Script/CoreUObject.EInputDeviceTriggerMask
	enum EInputDeviceTriggerMask
	{
		EInputDeviceTriggerMask__None = 0,
		EInputDeviceTriggerMask__Left = 1,
		EInputDeviceTriggerMask__Right = 2,
		EInputDeviceTriggerMask__All = 3,
	};


	// Enum /Script/CoreUObject.EDataValidationResult
	enum EDataValidationResult
	{
		EDataValidationResult__Invalid = 0,
		EDataValidationResult__Valid = 1,
		EDataValidationResult__NotValidated = 2,
	};


	// Enum /Script/CoreUObject.EOverriddenPropertyOperation
	enum EOverriddenPropertyOperation
	{
		EOverriddenPropertyOperation__None = 0,
		EOverriddenPropertyOperation__Modified = 1,
		EOverriddenPropertyOperation__Replace = 2,
		EOverriddenPropertyOperation__Add = 3,
		EOverriddenPropertyOperation__Remove = 4,
	};


	// Enum /Script/CoreUObject.EUserDefinedStructureStatus
	enum EUserDefinedStructureStatus
	{
		UDSS_UpToDate = 0,
		UDSS_Dirty = 1,
		UDSS_Error = 2,
		UDSS_Duplicate = 3,
	};


	// Enum /Script/CoreUObject.EPropertyBagPropertyType
	enum EPropertyBagPropertyType
	{
		EPropertyBagPropertyType__None = 0,
		EPropertyBagPropertyType__Bool = 1,
		EPropertyBagPropertyType__Byte = 2,
		EPropertyBagPropertyType__Int32 = 3,
		EPropertyBagPropertyType__Int64 = 4,
		EPropertyBagPropertyType__Float = 5,
		EPropertyBagPropertyType__Double = 6,
		EPropertyBagPropertyType__Name = 7,
		EPropertyBagPropertyType__String = 8,
		EPropertyBagPropertyType__Text = 9,
		EPropertyBagPropertyType__Enum = A,
		EPropertyBagPropertyType__Struct = B,
		EPropertyBagPropertyType__Object = C,
		EPropertyBagPropertyType__SoftObject = D,
		EPropertyBagPropertyType__Class = E,
		EPropertyBagPropertyType__SoftClass = F,
		EPropertyBagPropertyType__UInt32 = 10,
		EPropertyBagPropertyType__UInt64 = 11,
		EPropertyBagPropertyType__Count = 12,
	};


	// Enum /Script/CoreUObject.EPropertyBagContainerType
	enum EPropertyBagContainerType
	{
		EPropertyBagContainerType__None = 0,
		EPropertyBagContainerType__Array = 1,
		EPropertyBagContainerType__Count = 2,
	};


	// Enum /Script/CoreUObject.EPropertyBagResult
	enum EPropertyBagResult
	{
		EPropertyBagResult__Success = 0,
		EPropertyBagResult__TypeMismatch = 1,
		EPropertyBagResult__OutOfBounds = 2,
		EPropertyBagResult__PropertyNotFound = 3,
	};


	// Enum /Script/CoreUObject.EPropertyBagMissingEnum
	enum EPropertyBagMissingEnum
	{
		EPropertyBagMissingEnum__Missing = 0,
	};

}
