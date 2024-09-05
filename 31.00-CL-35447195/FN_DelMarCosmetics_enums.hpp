#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarCosmetics
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/DelMarCosmetics.EDelMarVehicleBoosterFlags
	enum EDelMarVehicleBoosterFlags
	{
		EDelMarVehicleBoosterFlags__None = 0,
		EDelMarVehicleBoosterFlags__Side = 2,
		EDelMarVehicleBoosterFlags__Down = 4,
		EDelMarVehicleBoosterFlags__Front = 8,
		EDelMarVehicleBoosterFlags__Back = 10,
		EDelMarVehicleBoosterFlags__Left = 20,
		EDelMarVehicleBoosterFlags__Right = 40,
		EDelMarVehicleBoosterFlags__All = FF,
	};


	// Enum /Script/DelMarCosmetics.EDelMarWheelMirrorType
	enum EDelMarWheelMirrorType
	{
		EDelMarWheelMirrorType__Scale = 0,
		EDelMarWheelMirrorType__Rotate = 1,
		EDelMarWheelMirrorType__None = 2,
	};


	// Enum /Script/DelMarCosmetics.EDelMarPreviewCameraType
	enum EDelMarPreviewCameraType
	{
		EDelMarPreviewCameraType__None = 0,
		EDelMarPreviewCameraType__ZoomIn = 1,
		EDelMarPreviewCameraType__ZoomOut = 2,
	};


	// Enum /Script/DelMarCosmetics.EDelMarWheelAttachPoint
	enum EDelMarWheelAttachPoint
	{
		EDelMarWheelAttachPoint__Spin = 0,
		EDelMarWheelAttachPoint__Pivot = 1,
		EDelMarWheelAttachPoint__Contact = 2,
	};

}
