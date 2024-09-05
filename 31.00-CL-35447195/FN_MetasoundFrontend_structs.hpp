#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MetasoundFrontend
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MetasoundFrontend.MetaSoundFrontendGraphComment
	// Size: 0x1 (0x1 - 0x0)
	struct FMetaSoundFrontendGraphComment	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendVersionNumber
	// Size: 0x8 (0x8 - 0x0)
	struct FMetasoundFrontendVersionNumber	
	{
	public:
		int32_t Major; // 0x0(0x4)
		int32_t Minor; // 0x4(0x4)
	};


	// Struct MetasoundFrontend.MetasoundFrontendVersion
	// Size: 0xC (0xC - 0x0)
	struct FMetasoundFrontendVersion	
	{
	public:
		FName Name; // 0x0(0x4)
		FMetasoundFrontendVersionNumber Number; // 0x4(0x8)
	};


	// Struct MetasoundFrontend.MetasoundFrontendVertex
	// Size: 0x18 (0x18 - 0x0)
	struct FMetasoundFrontendVertex	
	{
	public:
		FName Name; // 0x0(0x4)
		FName TypeName; // 0x4(0x4)
		FGuid VertexID; // 0x8(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendVertexHandle
	// Size: 0x20 (0x20 - 0x0)
	struct FMetasoundFrontendVertexHandle	
	{
	public:
		FGuid NodeId; // 0x0(0x10)
		FGuid VertexID; // 0x10(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendVertexLiteral
	// Size: 0x68 (0x68 - 0x0)
	struct FMetasoundFrontendVertexLiteral	
	{
	public:
		FGuid VertexID; // 0x0(0x10)
		FMetasoundFrontendLiteral Value; // 0x10(0x58)
	};


	// Struct MetasoundFrontend.MetasoundFrontendLiteral
	// Size: 0x58 (0x58 - 0x0)
	struct FMetasoundFrontendLiteral	
	{
	public:
		EMetasoundFrontendLiteralType Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t AsNumDefault; // 0x4(0x4)
		TArray AsBoolean; // 0x8(0x10)
		TArray AsInteger; // 0x18(0x10)
		TArray AsFloat; // 0x28(0x10)
		TArray AsString; // 0x38(0x10)
		TArray AsUObject; // 0x48(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendVariable
	// Size: 0xB0 (0xB0 - 0x0)
	struct FMetasoundFrontendVariable	
	{
	public:
		FName Name; // 0x0(0x4)
		FName TypeName; // 0x4(0x4)
		FMetasoundFrontendLiteral Literal; // 0x8(0x58)
		FGuid ID; // 0x60(0x10)
		FGuid VariableNodeID; // 0x70(0x10)
		FGuid MutatorNodeID; // 0x80(0x10)
		TArray AccessorNodeIDs; // 0x90(0x10)
		TArray DeferredAccessorNodeIDs; // 0xA0(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendNodeInterface
	// Size: 0x30 (0x30 - 0x0)
	struct FMetasoundFrontendNodeInterface	
	{
	public:
		TArray Inputs; // 0x0(0x10)
		TArray Outputs; // 0x10(0x10)
		TArray Environment; // 0x20(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
	// Size: 0x1 (0x1 - 0x0)
	struct FMetasoundFrontendNodeStyleDisplay	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendNodeStyle
	// Size: 0x1 (0x1 - 0x0)
	struct FMetasoundFrontendNodeStyle	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendNode
	// Size: 0x68 (0x68 - 0x0)
	struct FMetasoundFrontendNode	
	{
	public:
		FGuid ID; // 0x0(0x10)
		FGuid ClassID; // 0x10(0x10)
		FName Name; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FMetasoundFrontendNodeInterface Interface; // 0x28(0x30)
		TArray InputLiterals; // 0x58(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendEdge
	// Size: 0x40 (0x40 - 0x0)
	struct FMetasoundFrontendEdge	
	{
	public:
		FGuid FromNodeID; // 0x0(0x10)
		FGuid FromVertexID; // 0x10(0x10)
		FGuid ToNodeID; // 0x20(0x10)
		FGuid ToVertexID; // 0x30(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
	// Size: 0x68 (0x68 - 0x0)
	struct FMetasoundFrontendEdgeStyleLiteralColorPair	
	{
	public:
		FMetasoundFrontendLiteral Value; // 0x0(0x58)
		FLinearColor Color; // 0x58(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendEdgeStyle
	// Size: 0x28 (0x28 - 0x0)
	struct FMetasoundFrontendEdgeStyle	
	{
	public:
		FGuid NodeId; // 0x0(0x10)
		FName OutputName; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray LiteralColorPairs; // 0x18(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendGraphStyle
	// Size: 0x1 (0x1 - 0x0)
	struct FMetasoundFrontendGraphStyle	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendGraph
	// Size: 0x40 (0x40 - 0x0)
	struct FMetasoundFrontendGraph	
	{
	public:
		TArray Nodes; // 0x0(0x10)
		TArray Edges; // 0x10(0x10)
		TArray Variables; // 0x20(0x10)
		FGuid PageId; // 0x30(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendVertexMetadata
	// Size: 0x1 (0x1 - 0x0)
	struct FMetasoundFrontendVertexMetadata	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassVertex
	// Inherited from FMetasoundFrontendVertex
	// Size: 0x14 (0x2C - 0x18)
	struct FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex	
	{
	public:
		FGuid NodeId; // 0x18(0x10)
		EMetasoundFrontendVertexAccessType AccessType; // 0x28(0x4)
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
	// Size: 0x1 (0x1 - 0x0)
	struct FMetasoundFrontendClassStyleDisplay	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassInput
	// Inherited from FMetasoundFrontendClassVertex -> FMetasoundFrontendVertex
	// Size: 0x5C (0x88 - 0x2C)
	struct FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FMetasoundFrontendLiteral DefaultLiteral; // 0x30(0x58)
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassVariable
	// Inherited from FMetasoundFrontendClassVertex -> FMetasoundFrontendVertex
	// Size: 0x5C (0x88 - 0x2C)
	struct FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FMetasoundFrontendLiteral DefaultLiteral; // 0x30(0x58)
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassOutput
	// Inherited from FMetasoundFrontendClassVertex -> FMetasoundFrontendVertex
	// Size: 0x0 (0x2C - 0x2C)
	struct FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex	
	{
	public:
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
	// Size: 0xC (0xC - 0x0)
	struct FMetasoundFrontendClassEnvironmentVariable	
	{
	public:
		FName Name; // 0x0(0x4)
		FName TypeName; // 0x4(0x4)
		bool bIsRequired; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendInterfaceStyle
	// Size: 0x1 (0x1 - 0x0)
	struct FMetasoundFrontendInterfaceStyle	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassInterface
	// Size: 0x40 (0x40 - 0x0)
	struct FMetasoundFrontendClassInterface	
	{
	public:
		TArray Inputs; // 0x0(0x10)
		TArray Outputs; // 0x10(0x10)
		TArray Environment; // 0x20(0x10)
		FGuid ChangeID; // 0x30(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendInterfaceVertexBinding
	// Size: 0x8 (0x8 - 0x0)
	struct FMetasoundFrontendInterfaceVertexBinding	
	{
	public:
		FName OutputName; // 0x0(0x4)
		FName InputName; // 0x4(0x4)
	};


	// Struct MetasoundFrontend.MetasoundFrontendInterfaceBinding
	// Size: 0x30 (0x30 - 0x0)
	struct FMetasoundFrontendInterfaceBinding	
	{
	public:
		FMetasoundFrontendVersion OutputInterfaceVersion; // 0x0(0xC)
		FMetasoundFrontendVersion InputInterfaceVersion; // 0xC(0xC)
		int32_t BindingPriority; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray VertexBindings; // 0x20(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendInterfaceUClassOptions
	// Size: 0xC (0xC - 0x0)
	struct FMetasoundFrontendInterfaceUClassOptions	
	{
	public:
		FTopLevelAssetPath ClassPath; // 0x0(0x8)
		bool bIsModifiable; // 0x8(0x1)
		bool bIsDefault; // 0x9(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendInterface
	// Inherited from FMetasoundFrontendClassInterface
	// Size: 0x20 (0x60 - 0x40)
	struct FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface	
	{
	public:
		FMetasoundFrontendVersion Version; // 0x40(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		TArray UClassOptions; // 0x50(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassName
	// Size: 0xC (0xC - 0x0)
	struct FMetasoundFrontendClassName	
	{
	public:
		FName NameSpace; // 0x0(0x4)
		FName Name; // 0x4(0x4)
		FName Variant; // 0x8(0x4)
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassMetadata
	// Size: 0x28 (0x28 - 0x0)
	struct FMetasoundFrontendClassMetadata	
	{
	public:
		FMetasoundFrontendClassName ClassName; // 0x0(0xC)
		FMetasoundFrontendVersionNumber Version; // 0xC(0x8)
		EMetasoundFrontendClassType Type; // 0x14(0x1)
		bool bIsDeprecated; // 0x15(0x1)
		bool bAutoUpdateManagesInterface; // 0x16(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x17(0x1) UNKNOWN PROPERTY
		FGuid ChangeID; // 0x18(0x10)
	};


	// Struct MetasoundFrontend.MetasoundFrontendClassStyle
	// Size: 0x1 (0x1 - 0x0)
	struct FMetasoundFrontendClassStyle	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetasoundFrontendClass
	// Size: 0x80 (0x80 - 0x0)
	struct FMetasoundFrontendClass	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FGuid ID; // 0x8(0x10)
		FMetasoundFrontendClassMetadata MetaData; // 0x18(0x28)
		FMetasoundFrontendClassInterface Interface; // 0x40(0x40)
	};


	// Struct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
	// Size: 0x58 (0x58 - 0x0)
	struct FMetasoundFrontendGraphClassPresetOptions	
	{
	public:
		bool bIsPreset; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TSet InputsInheritingDefault; // 0x8(0x50)
	};


	// Struct MetasoundFrontend.MetasoundFrontendGraphClass
	// Inherited from FMetasoundFrontendClass
	// Size: 0xA8 (0x128 - 0x80)
	struct FMetasoundFrontendGraphClass : public FMetasoundFrontendClass	
	{
	public:
		FMetasoundFrontendGraph Graph; // 0x80(0x40)
		TArray PagedGraphs; // 0xC0(0x10)
		FMetasoundFrontendGraphClassPresetOptions PresetOptions; // 0xD0(0x58)
	};


	// Struct MetasoundFrontend.MetasoundFrontendDocumentMetadata
	// Size: 0xC (0xC - 0x0)
	struct FMetasoundFrontendDocumentMetadata	
	{
	public:
		FMetasoundFrontendVersion Version; // 0x0(0xC)
	};


	// Struct MetasoundFrontend.MetasoundFrontendDocument
	// Size: 0x1C0 (0x1C0 - 0x0)
	struct FMetasoundFrontendDocument	
	{
	public:
		unsigned char UnknownData03_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		FMetasoundFrontendDocumentMetadata MetaData; // 0x10(0xC)
		unsigned char UnknownData04_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TSet Interfaces; // 0x20(0x50)
		FMetasoundFrontendGraphClass RootGraph; // 0x70(0x128)
		TArray Subgraphs; // 0x198(0x10)
		TArray Dependencies; // 0x1A8(0x10)
		uint32_t IdCounter; // 0x1B8(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x1BC(0x4) UNKNOWN PROPERTY
	};


	// Struct MetasoundFrontend.MetaSoundFrontendDocumentBuilder
	// Size: 0x48 (0x48 - 0x0)
	struct FMetaSoundFrontendDocumentBuilder	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TScriptInterface DocumentInterface; // 0x8(0x10)
		FGuid BuildPageID; // 0x18(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
	};

}
