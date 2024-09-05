#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Constraints
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Constraints.ConstraintsInWorld
	// Size: 0x28 (0x28 - 0x0)
	struct FConstraintsInWorld	
	{
	public:
		TWeakObjectPtr World; // 0x0(0x8)
		TArray Constraints; // 0x8(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
	};


	// Struct Constraints.MovieSceneConstraintChannel
	// Inherited from FMovieSceneBoolChannel -> FMovieSceneChannel
	// Size: 0x0 (0x108 - 0x108)
	struct FMovieSceneConstraintChannel : public FMovieSceneBoolChannel	
	{
	public:
	};


	// Struct Constraints.ConstraintAndActiveChannel
	// Size: 0x110 (0x110 - 0x0)
	struct FConstraintAndActiveChannel	
	{
	public:
		FMovieSceneConstraintChannel ActiveChannel; // 0x0(0x108)
		UTickableConstraint ConstraintCopyToSpawn; // 0x108(0x8)
	};


	// Struct Constraints.ConstraintTickFunction
	// Inherited from FTickFunction
	// Size: 0x18 (0x40 - 0x28)
	struct FConstraintTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
	};

}
