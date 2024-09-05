#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MetasoundFrontend
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/MetasoundFrontend.ESetParamResult
	enum ESetParamResult
	{
		ESetParamResult__Succeeded = 0,
		ESetParamResult__Failed = 1,
	};


	// Enum /Script/MetasoundFrontend.EMetasoundFrontendVertexAccessType
	enum EMetasoundFrontendVertexAccessType
	{
		EMetasoundFrontendVertexAccessType__Reference = 0,
		EMetasoundFrontendVertexAccessType__Value = 1,
		EMetasoundFrontendVertexAccessType__Unset = 2,
	};


	// Enum /Script/MetasoundFrontend.EMetasoundFrontendClassType
	enum EMetasoundFrontendClassType
	{
		EMetasoundFrontendClassType__External = 0,
		EMetasoundFrontendClassType__Graph = 1,
		EMetasoundFrontendClassType__Input = 2,
		EMetasoundFrontendClassType__Output = 3,
		EMetasoundFrontendClassType__Literal = 4,
		EMetasoundFrontendClassType__Variable = 5,
		EMetasoundFrontendClassType__VariableDeferredAccessor = 6,
		EMetasoundFrontendClassType__VariableAccessor = 7,
		EMetasoundFrontendClassType__VariableMutator = 8,
		EMetasoundFrontendClassType__Template = 9,
		EMetasoundFrontendClassType__Invalid = A,
	};


	// Enum /Script/MetasoundFrontend.EMetaSoundFrontendGraphCommentMoveMode
	enum EMetaSoundFrontendGraphCommentMoveMode
	{
		EMetaSoundFrontendGraphCommentMoveMode__GroupMovement = 0,
		EMetaSoundFrontendGraphCommentMoveMode__NoGroupMovement = 1,
	};


	// Enum /Script/MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
	enum EMetasoundFrontendNodeStyleDisplayVisibility
	{
		EMetasoundFrontendNodeStyleDisplayVisibility__Visible = 0,
		EMetasoundFrontendNodeStyleDisplayVisibility__Hidden = 1,
	};


	// Enum /Script/MetasoundFrontend.EMetasoundFrontendLiteralType
	enum EMetasoundFrontendLiteralType
	{
		EMetasoundFrontendLiteralType__None = 0,
		EMetasoundFrontendLiteralType__Boolean = 1,
		EMetasoundFrontendLiteralType__Integer = 2,
		EMetasoundFrontendLiteralType__Float = 3,
		EMetasoundFrontendLiteralType__String = 4,
		EMetasoundFrontendLiteralType__UObject = 5,
		EMetasoundFrontendLiteralType__NoneArray = 6,
		EMetasoundFrontendLiteralType__BooleanArray = 7,
		EMetasoundFrontendLiteralType__IntegerArray = 8,
		EMetasoundFrontendLiteralType__FloatArray = 9,
		EMetasoundFrontendLiteralType__StringArray = A,
		EMetasoundFrontendLiteralType__UObjectArray = B,
		EMetasoundFrontendLiteralType__Invalid = C,
	};

}
