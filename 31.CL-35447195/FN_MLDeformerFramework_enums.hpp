#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MLDeformerFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MLDeformerFramework.EMLDeformerMaskingMode
	enum EMLDeformerMaskingMode
	{
		EMLDeformerMaskingMode__Generated = 0,
		EMLDeformerMaskingMode__VertexAttribute = 1,
	};


	// Enum /Script/MLDeformerFramework.EMLDeformerVizMode
	enum EMLDeformerVizMode
	{
		EMLDeformerVizMode__TrainingData = 0,
		EMLDeformerVizMode__TestData = 1,
	};


	// Enum /Script/MLDeformerFramework.EMLDeformerHeatMapMode
	enum EMLDeformerHeatMapMode
	{
		EMLDeformerHeatMapMode__Activations = 0,
		EMLDeformerHeatMapMode__GroundTruth = 1,
	};


	// Enum /Script/MLDeformerFramework.EMLDeformerMaskChannel
	enum EMLDeformerMaskChannel
	{
		EMLDeformerMaskChannel__Disabled = 0,
		EMLDeformerMaskChannel__VertexColorRed = 1,
		EMLDeformerMaskChannel__VertexColorGreen = 2,
		EMLDeformerMaskChannel__VertexColorBlue = 3,
		EMLDeformerMaskChannel__VertexColorAlpha = 4,
		EMLDeformerMaskChannel__VertexAttribute = 5,
	};

}
