#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OptimusCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/OptimusCore.EOptimusPinMutability
	enum EOptimusPinMutability
	{
		EOptimusPinMutability__Undefined = 0,
		EOptimusPinMutability__Immutable = 1,
		EOptimusPinMutability__Mutable = 2,
	};


	// Enum /Script/OptimusCore.EOptimusConstantType
	enum EOptimusConstantType
	{
		EOptimusConstantType__Input = 0,
		EOptimusConstantType__Output = 1,
	};


	// Enum /Script/OptimusCore.EOptimusDiagnosticLevel
	enum EOptimusDiagnosticLevel
	{
		EOptimusDiagnosticLevel__None = 0,
		EOptimusDiagnosticLevel__Info = 1,
		EOptimusDiagnosticLevel__Warning = 2,
		EOptimusDiagnosticLevel__Error = 3,
	};


	// Enum /Script/OptimusCore.EOptimusBufferWriteType
	enum EOptimusBufferWriteType
	{
		EOptimusBufferWriteType__Write = 0,
		EOptimusBufferWriteType__WriteAtomicAdd = 1,
		EOptimusBufferWriteType__WriteAtomicMin = 2,
		EOptimusBufferWriteType__WriteAtomicMax = 3,
		EOptimusBufferWriteType__Count = 4,
	};


	// Enum /Script/OptimusCore.EOptimusSkinnedMeshExecDomain
	enum EOptimusSkinnedMeshExecDomain
	{
		EOptimusSkinnedMeshExecDomain__None = 0,
		EOptimusSkinnedMeshExecDomain__Vertex = 1,
		EOptimusSkinnedMeshExecDomain__Triangle = 2,
	};


	// Enum /Script/OptimusCore.EOptimusTerminalType
	enum EOptimusTerminalType
	{
		EOptimusTerminalType__Unknown = 0,
		EOptimusTerminalType__Entry = 1,
		EOptimusTerminalType__Return = 2,
	};


	// Enum /Script/OptimusCore.EOptimusDataDomainType
	enum EOptimusDataDomainType
	{
		EOptimusDataDomainType__Dimensional = 0,
		EOptimusDataDomainType__Expression = 1,
	};


	// Enum /Script/OptimusCore.EOptimusDataTypeUsageFlags
	enum EOptimusDataTypeUsageFlags
	{
		EOptimusDataTypeUsageFlags__None = 0,
		EOptimusDataTypeUsageFlags__Resource = 1,
		EOptimusDataTypeUsageFlags__Variable = 2,
		EOptimusDataTypeUsageFlags__AnimAttributes = 4,
		EOptimusDataTypeUsageFlags__DataInterfaceOutput = 8,
		EOptimusDataTypeUsageFlags__PinType = 10,
	};


	// Enum /Script/OptimusCore.EOptimusDataTypeFlags
	enum EOptimusDataTypeFlags
	{
		EOptimusDataTypeFlags__None = 0,
		EOptimusDataTypeFlags__IsStructType = 1,
		EOptimusDataTypeFlags__ShowElements = 2,
	};


	// Enum /Script/OptimusCore.EOptimusDeformerStatus
	enum EOptimusDeformerStatus
	{
		EOptimusDeformerStatus__Compiled = 0,
		EOptimusDeformerStatus__CompiledWithWarnings = 1,
		EOptimusDeformerStatus__Modified = 2,
		EOptimusDeformerStatus__HasErrors = 3,
	};


	// Enum /Script/OptimusCore.EOptimusExecutionDomainType
	enum EOptimusExecutionDomainType
	{
		EOptimusExecutionDomainType__DomainName = 0,
		EOptimusExecutionDomainType__Expression = 1,
	};


	// Enum /Script/OptimusCore.EOptimusNodeGraphType
	enum EOptimusNodeGraphType
	{
		EOptimusNodeGraphType__Setup = 0,
		EOptimusNodeGraphType__Update = 1,
		EOptimusNodeGraphType__ExternalTrigger = 2,
		EOptimusNodeGraphType__Function = 3,
		EOptimusNodeGraphType__SubGraph = 4,
		EOptimusNodeGraphType__Transient = 5,
	};


	// Enum /Script/OptimusCore.EOptimusNodePinStorageType
	enum EOptimusNodePinStorageType
	{
		EOptimusNodePinStorageType__Value = 0,
		EOptimusNodePinStorageType__Resource = 1,
	};


	// Enum /Script/OptimusCore.EOptimusNodePinDirection
	enum EOptimusNodePinDirection
	{
		EOptimusNodePinDirection__Unknown = 0,
		EOptimusNodePinDirection__Input = 1,
		EOptimusNodePinDirection__Output = 2,
	};

}
