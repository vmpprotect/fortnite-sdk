#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VoiceReportWizard
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct /VoiceRep/VoiceReportWizard/StepWizard/S_UI_StepWizard_Entry.S_UI_StepWizard_Entry
	// Size: 0x22 (0x22 - 0x0)
	struct FS_UI_StepWizard_Entry	
	{
	public:
		UClass StepWidgetContent_92_6EEB94B3459DD26D01A148B195183E7E; // 0x0(0x8)
		TEnumAsByte StepType_76_0255215A427AA56005F7AC8FAAC63C9B; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FText CurrentStepNameText_82_F4B3AD1E44726EC9C8162E85C97F1416; // 0x10(0x10)
		bool ButtonBack_90_58ACFB3441DDAF5DE4A56E8D44DFC54B; // 0x20(0x1)
		bool ButtonClose_91_A01DE58446773B26F654DFBD3DD3F8CD; // 0x21(0x1)
	};


	// Struct /VoiceRep/VoiceReportWizard/StepWizard/S_UI_StepWizard_StepList.S_UI_StepWizard_StepList
	// Size: 0x28 (0x28 - 0x0)
	struct FS_UI_StepWizard_StepList	
	{
	public:
		TArray StepWizardList_71_E762E0894D70401952B472BFB53761F9; // 0x0(0x10)
		UMaterialInstance StepWizardIcon_78_75DA97C94F4D4345CC6DDBA4EA66C9A2; // 0x10(0x8)
		FText HeaderText_76_B4FBFFC04F813A38A96500938566ABB0; // 0x18(0x10)
	};

}
