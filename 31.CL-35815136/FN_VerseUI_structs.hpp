#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct VerseUI.VerseUIUserWidgetViewmodel
	// Inherited from FFastArraySerializerItem
	// Size: 0x1C (0x28 - 0xC)
	struct FVerseUIUserWidgetViewmodel : public FFastArraySerializerItem	
	{
	public:
		FName Name; // 0xC(0x4)
		UObject* Instance; // 0x10(0x8)
		UObject* AuthorityInstance; // 0x18(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct VerseUI.VerseUIUserWidgetViewmodelList
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FVerseUIUserWidgetViewmodelList : public FFastArraySerializer	
	{
	public:
		TArray<FVerseUIUserWidgetViewmodel> Viewmodels; // 0x108(0x10)
		UVerseUIUserWidget* Owner; // 0x118(0x8)
	};


	// Struct VerseUI.VerseUIViewmodelRegistryTag
	// Size: 0x38 (0x38 - 0x0)
	struct FVerseUIViewmodelRegistryTag	
	{
	public:
		FString ViewmodelName; // 0x0(0x10)
		FString ClassName; // 0x10(0x10)
		FString ClassPackageName; // 0x20(0x10)
		bool bGeneratedClass; // 0x30(0x1)
		bool bOptional; // 0x31(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
	};

}
