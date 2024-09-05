#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TemplateSequence
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct TemplateSequence.TemplateSectionPropertyScale
	// Size: 0x130 (0x130 - 0x0)
	struct FTemplateSectionPropertyScale	
	{
	public:
		FGuid ObjectBinding; // 0x0(0x10)
		FMovieScenePropertyBinding PropertyBinding; // 0x10(0xC)
		ETemplateSectionPropertyScaleType PropertyScaleType; // 0x1C(0x4)
		FMovieSceneFloatChannel FloatChannel; // 0x20(0x110)
	};


	// Struct TemplateSequence.TemplateSequenceBindingOverrideData
	// Size: 0xC (0xC - 0x0)
	struct FTemplateSequenceBindingOverrideData	
	{
	public:
		TWeakObjectPtr Object; // 0x0(0x8)
		bool bOverridesDefault; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};

}
