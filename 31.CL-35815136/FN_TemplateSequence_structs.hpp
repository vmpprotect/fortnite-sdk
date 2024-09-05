#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TemplateSequence
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		TWeakObjectPtr<UObject*> Object; // 0x0(0x8)
		bool bOverridesDefault; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};

}
