#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DataflowCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DataflowCore.DataflowAnyType
	// Size: 0x1 (0x1 - 0x0)
	struct FDataflowAnyType	
	{
	public:
	};


	// Struct DataflowCore.DataflowAllTypes
	// Inherited from FDataflowAnyType
	// Size: 0x1 (0x1 - 0x0)
	struct FDataflowAllTypes : public FDataflowAnyType	
	{
	public:
		unsigned char UnknownData00_1[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowNumericTypes
	// Inherited from FDataflowAnyType
	// Size: 0x8 (0x8 - 0x0)
	struct FDataflowNumericTypes : public FDataflowAnyType	
	{
	public:
		double Value; // 0x0(0x8)
	};


	// Struct DataflowCore.DataflowStringTypes
	// Inherited from FDataflowAnyType
	// Size: 0x10 (0x10 - 0x0)
	struct FDataflowStringTypes : public FDataflowAnyType	
	{
	public:
		FString Value; // 0x0(0x10)
	};


	// Struct DataflowCore.DataflowStringConvertibleTypes
	// Inherited from FDataflowAnyType
	// Size: 0x10 (0x10 - 0x0)
	struct FDataflowStringConvertibleTypes : public FDataflowAnyType	
	{
	public:
		FString Value; // 0x0(0x10)
	};


	// Struct DataflowCore.DataflowUObjectConvertibleTypes
	// Inherited from FDataflowAnyType
	// Size: 0x8 (0x8 - 0x0)
	struct FDataflowUObjectConvertibleTypes : public FDataflowAnyType	
	{
	public:
		UObject* Value; // 0x0(0x8)
	};


	// Struct DataflowCore.DataflowNode
	// Size: 0x198 (0x198 - 0x0)
	struct FDataflowNode	
	{
	public:
		unsigned char UnknownData00_7[0xC8]; // 0x0(0xC8) UNKNOWN PROPERTY
		bool bActive; // 0xC8(0x1)
		unsigned char UnknownData01_7[0xCF]; // 0xC9(0xCF) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowReRouteNode
	// Inherited from FDataflowNode
	// Size: 0x8 (0x1A0 - 0x198)
	struct FDataflowReRouteNode : public FDataflowNode	
	{
	public:
		FDataflowAnyType Value; // 0x198(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x199(0x7) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowBranchNode
	// Inherited from FDataflowNode
	// Size: 0x8 (0x1A0 - 0x198)
	struct FDataflowBranchNode : public FDataflowNode	
	{
	public:
		FDataflowAnyType TrueValue; // 0x198(0x1)
		FDataflowAnyType FalseValue; // 0x199(0x1)
		bool bCondition; // 0x19A(0x1)
		FDataflowAnyType Result; // 0x19B(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowSelectNode
	// Inherited from FDataflowNode
	// Size: 0x18 (0x1B0 - 0x198)
	struct FDataflowSelectNode : public FDataflowNode	
	{
	public:
		TArray<FDataflowAnyType> Inputs; // 0x198(0x10)
		int32_t SelectedIndex; // 0x1A8(0x4)
		FDataflowAnyType Result; // 0x1AC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x1AD(0x3) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowPrintNode
	// Inherited from FDataflowNode
	// Size: 0x10 (0x1A8 - 0x198)
	struct FDataflowPrintNode : public FDataflowNode	
	{
	public:
		FDataflowStringConvertibleTypes Value; // 0x198(0x10)
	};


	// Struct DataflowCore.DataflowMathOneInputOperatorNode
	// Inherited from FDataflowNode
	// Size: 0x10 (0x1A8 - 0x198)
	struct FDataflowMathOneInputOperatorNode : public FDataflowNode	
	{
	public:
		FDataflowNumericTypes A; // 0x198(0x8)
		FDataflowNumericTypes Result; // 0x1A0(0x8)
	};


	// Struct DataflowCore.DataflowMathTwoInputsOperatorNode
	// Inherited from FDataflowNode
	// Size: 0x18 (0x1B0 - 0x198)
	struct FDataflowMathTwoInputsOperatorNode : public FDataflowNode	
	{
	public:
		FDataflowNumericTypes A; // 0x198(0x8)
		FDataflowNumericTypes B; // 0x1A0(0x8)
		FDataflowNumericTypes Result; // 0x1A8(0x8)
	};


	// Struct DataflowCore.DataflowMathAddNode
	// Inherited from FDataflowMathTwoInputsOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1B0 - 0x1B0)
	struct FDataflowMathAddNode : public FDataflowMathTwoInputsOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathSubtractNode
	// Inherited from FDataflowMathTwoInputsOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1B0 - 0x1B0)
	struct FDataflowMathSubtractNode : public FDataflowMathTwoInputsOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathMultiplyNode
	// Inherited from FDataflowMathTwoInputsOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1B0 - 0x1B0)
	struct FDataflowMathMultiplyNode : public FDataflowMathTwoInputsOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathDivideNode
	// Inherited from FDataflowMathTwoInputsOperatorNode -> FDataflowNode
	// Size: 0x8 (0x1B8 - 0x1B0)
	struct FDataflowMathDivideNode : public FDataflowMathTwoInputsOperatorNode	
	{
	public:
		FDataflowNumericTypes Fallback; // 0x1B0(0x8)
	};


	// Struct DataflowCore.DataflowMathMinimumNode
	// Inherited from FDataflowMathTwoInputsOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1B0 - 0x1B0)
	struct FDataflowMathMinimumNode : public FDataflowMathTwoInputsOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathMaximumNode
	// Inherited from FDataflowMathTwoInputsOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1B0 - 0x1B0)
	struct FDataflowMathMaximumNode : public FDataflowMathTwoInputsOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathReciprocalNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x8 (0x1B0 - 0x1A8)
	struct FDataflowMathReciprocalNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
		FDataflowNumericTypes Fallback; // 0x1A8(0x8)
	};


	// Struct DataflowCore.DataflowMathSquareNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathSquareNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathCubeNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathCubeNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathSquareRootNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathSquareRootNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathInverseSquareRootNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x8 (0x1B0 - 0x1A8)
	struct FDataflowMathInverseSquareRootNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
		FDataflowNumericTypes Fallback; // 0x1A8(0x8)
	};


	// Struct DataflowCore.DataflowMathNegateNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x8 (0x1B0 - 0x1A8)
	struct FDataflowMathNegateNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
		FDataflowNumericTypes Fallback; // 0x1A8(0x8)
	};


	// Struct DataflowCore.DataflowMathAbsNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x8 (0x1B0 - 0x1A8)
	struct FDataflowMathAbsNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
		FDataflowNumericTypes Fallback; // 0x1A8(0x8)
	};


	// Struct DataflowCore.DataflowMathFloorNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathFloorNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathCeilNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathCeilNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathRoundNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathRoundNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathTruncNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathTruncNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathFracNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathFracNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathPowNode
	// Inherited from FDataflowMathTwoInputsOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1B0 - 0x1B0)
	struct FDataflowMathPowNode : public FDataflowMathTwoInputsOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathLogXNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x8 (0x1B0 - 0x1A8)
	struct FDataflowMathLogXNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
		FDataflowNumericTypes base; // 0x1A8(0x8)
	};


	// Struct DataflowCore.DataflowMathLogNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathLogNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathExpNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathExpNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowMathSignNode
	// Inherited from FDataflowMathOneInputOperatorNode -> FDataflowNode
	// Size: 0x0 (0x1A8 - 0x1A8)
	struct FDataflowMathSignNode : public FDataflowMathOneInputOperatorNode	
	{
	public:
	};


	// Struct DataflowCore.DataflowConnection
	// Size: 0x40 (0x40 - 0x0)
	struct FDataflowConnection	
	{
	public:
		unsigned char UnknownData00_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowInput
	// Inherited from FDataflowConnection
	// Size: 0x8 (0x48 - 0x40)
	struct FDataflowInput : public FDataflowConnection	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowArrayInput
	// Inherited from FDataflowInput -> FDataflowConnection
	// Size: 0x10 (0x58 - 0x48)
	struct FDataflowArrayInput : public FDataflowInput	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowOutput
	// Inherited from FDataflowConnection
	// Size: 0x30 (0x70 - 0x40)
	struct FDataflowOutput : public FDataflowConnection	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x40(0x30) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowOverrideNode
	// Inherited from FDataflowNode
	// Size: 0x20 (0x1B8 - 0x198)
	struct FDataflowOverrideNode : public FDataflowNode	
	{
	public:
		FName Key; // 0x198(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FString Default; // 0x1A0(0x10)
		bool IsOverriden; // 0x1B0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x1B1(0x7) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowSelection
	// Size: 0x20 (0x20 - 0x0)
	struct FDataflowSelection	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct DataflowCore.DataflowTransformSelection
	// Inherited from FDataflowSelection
	// Size: 0x0 (0x20 - 0x20)
	struct FDataflowTransformSelection : public FDataflowSelection	
	{
	public:
	};


	// Struct DataflowCore.DataflowVertexSelection
	// Inherited from FDataflowSelection
	// Size: 0x0 (0x20 - 0x20)
	struct FDataflowVertexSelection : public FDataflowSelection	
	{
	public:
	};


	// Struct DataflowCore.DataflowFaceSelection
	// Inherited from FDataflowSelection
	// Size: 0x0 (0x20 - 0x20)
	struct FDataflowFaceSelection : public FDataflowSelection	
	{
	public:
	};


	// Struct DataflowCore.NodeColors
	// Size: 0x20 (0x20 - 0x0)
	struct FNodeColors	
	{
	public:
		FLinearColor NodeTitleColor; // 0x0(0x10)
		FLinearColor NodeBodyTintColor; // 0x10(0x10)
	};


	// Struct DataflowCore.DataflowTerminalNode
	// Inherited from FDataflowNode
	// Size: 0x0 (0x198 - 0x198)
	struct FDataflowTerminalNode : public FDataflowNode	
	{
	public:
	};

}
