#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VoiceReportWizard
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step.WBP_VoiceRep_Reporting_Step_C
	// Inherited from UVoiceRepPanel_Reporting -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x81 (0x481 - 0x400)
	class UWBP_VoiceRep_Reporting_Step_C : public UVoiceRepPanel_Reporting	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x8)
		UWBP_UIKit_Button_Loud_C* Button_Submit; // 0x408(0x8)
		UHorizontalBox* HB_Party; // 0x410(0x8)
		UHorizontalBox* HBLoadingAudio; // 0x418(0x8)
		UHorizontalBox* HBsubmitting; // 0x420(0x8)
		UImage* Image; // 0x428(0x8)
		UImage* Line; // 0x430(0x8)
		UImage* ProgressSpinner; // 0x438(0x8)
		UImage* ProgressSpinner; // 0x440(0x8)
		UScaleBox* ScaleBox_Portraits_Mobile; // 0x448(0x8)
		UScaleBox* ScaleBox_TextBlock_Mobile; // 0x450(0x8)
		UImage* Step_Header; // 0x458(0x8)
		UCommonTextBlock* Text_Loading_State; // 0x460(0x8)
		UCommonTextBlock* Text_Loading_State; // 0x468(0x8)
		UUEFN_TextBlock_C* UEFN_TextBlock_C; // 0x470(0x8)
		UWidget* Parent_Widget; // 0x478(0x8)
		EVoiceRepUploadRecordResult Result; // 0x480(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step.WBP_VoiceRep_Reporting_Step_C");
			return ret;
		}

		void BndEvt__WBP_VoiceRep_Reporting_Step_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Load Audio(bool Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CompleteReport(bool bSucceeded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReportIsReadyToSubmit(EVoiceRepUploadRecordResult Result); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSubmitReport(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_VoiceRep_Reporting_Step(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/StepWizard/WBP_StepWizard_Base.WBP_StepWizard_Base_C
	// Inherited from UVoiceRepModalPanelContainer -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x118 (0x520 - 0x408)
	class UWBP_StepWizard_Base_C : public UVoiceRepModalPanelContainer	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x8)
		UBorder* BNextStep; // 0x410(0x8)
		UWBP_UIKit_Button_Quiet_C* Button_Back; // 0x418(0x8)
		UWBP_UIKit_Button_Quiet_C* Button_Close; // 0x420(0x8)
		UCloseButton_C* Button_TouchClose; // 0x428(0x8)
		UHorizontalBox* CountBoxNext; // 0x430(0x8)
		UCommonRichTextBlock* CurrentStepNameText; // 0x438(0x8)
		UHorizontalBox* HB_Buttons; // 0x440(0x8)
		UCommonTextBlock* HeaderText; // 0x448(0x8)
		UListView* ListView; // 0x450(0x8)
		UCommonTextBlock* Next_Step_Name; // 0x458(0x8)
		UCommonTextBlock* NextStepText; // 0x460(0x8)
		UImage* Report_Icon; // 0x468(0x8)
		USafeZone* SafeZone_TouchClose; // 0x470(0x8)
		UImage* Step_Image; // 0x478(0x8)
		UCommonTextBlock* TotalStepsText; // 0x480(0x8)
		int32_t CurrentStep; // 0x488(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x48C(0x4) UNKNOWN PROPERTY
		UBP_UI_StepWizard_C* CurrentListItem; // 0x490(0x8)
		int32_t TotalSteps; // 0x498(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x49C(0x4) UNKNOWN PROPERTY
		UBP_UI_StepWizard_C* NextListItem; // 0x4A0(0x8)
		TArray<FS_UI_StepWizard_Entry> CurrentStepList; // 0x4A8(0x10)
		TMap<FString, FS_UI_StepWizard_StepList> StepList; // 0x4B8(0x50)
		TEnumAsByte<E_UI_StepWizard_Type> Step_Type; // 0x508(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x509(0x7) UNKNOWN PROPERTY
		UWidget* Parent_Widget; // 0x510(0x8)
		UWidget* CurrentDataWidget; // 0x518(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/StepWizard/WBP_StepWizard_Base.WBP_StepWizard_Base_C");
			return ret;
		}

		void Get Next Step Data(int32_t Current Step); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Add Step(int32_t Step); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Current Step Name(int32_t Step); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Total Steps(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Create Step Wizard(FString List Name, UWidget* Parent Widget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Load Step From List(FString List Name, int32_t Step); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Next Step(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Previous Step(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StepWizard_Base_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StepWizard_Base_Button_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StepWizard_Base_ListView_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(UObject* Item, UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StepWizard_Base_Button_TouchClose_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SubmitReport(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_StepWizard_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/WBP_VoiceReport.WBP_VoiceReport_C
	// Inherited from UVoiceRepModal -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x570 - 0x548)
	class UWBP_VoiceReport_C : public UVoiceRepModal	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x8)
		UImage* Background; // 0x550(0x8)
		UImage* LoadingSpinner; // 0x558(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x560(0x8)
		UWBP_StepWizard_Base_C* As_WBP_Step_Wizard_Base; // 0x568(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/WBP_VoiceReport.WBP_VoiceReport_C");
			return ret;
		}

		void Show Step Wizard(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Complete Report(bool Sent, EVoiceRepUploadRecordResult Result); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Voice Chat Audio(bool Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BeginReportingFlow(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_VoiceReport(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_EmeraldError.WBP_VoiceRep_Reporting_Step_EmeraldError_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3F0 - 0x3F0)
	class UWBP_VoiceRep_Reporting_Step_EmeraldError_C : public UCommonActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_EmeraldError.WBP_VoiceRep_Reporting_Step_EmeraldError_C");
			return ret;
		}
	};


	// Class /VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Reporting_Off.WBP_VoiceRep_Reporting_Step_Reporting_Off_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class UWBP_VoiceRep_Reporting_Step_Reporting_Off_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWBP_UIKit_Button_Regular_C* WBP_UIKit_Button_Regular; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Reporting_Off.WBP_VoiceRep_Reporting_Step_Reporting_Off_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_VoiceRep_Reporting_Step_Reporting_Off(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Complete.WBP_VoiceRep_Reporting_Step_Complete_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class UWBP_VoiceRep_Reporting_Step_Complete_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UScaleBox* ScaleBox_Mobile; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Complete.WBP_VoiceRep_Reporting_Step_Complete_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_VoiceRep_Reporting_Step_Complete(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Cancelled.WBP_VoiceRep_Reporting_Step_Cancelled_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UWBP_VoiceRep_Reporting_Step_Cancelled_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Cancelled.WBP_VoiceRep_Reporting_Step_Cancelled_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_VoiceRep_Reporting_Step_Cancelled(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_No_Audio.WBP_VoiceRep_Reporting_Step_No_Audio_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UWBP_VoiceRep_Reporting_Step_No_Audio_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_No_Audio.WBP_VoiceRep_Reporting_Step_No_Audio_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_VoiceRep_Reporting_Step_No_Audio(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Reporting_Off_Complete.WBP_VoiceRep_Reporting_Step_Reporting_Off_Complete_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UWBP_VoiceRep_Reporting_Step_Reporting_Off_Complete_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Reporting_Off_Complete.WBP_VoiceRep_Reporting_Step_Reporting_Off_Complete_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_VoiceRep_Reporting_Step_Reporting_Off_Complete(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Error.WBP_VoiceRep_Reporting_Step_Error_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UWBP_VoiceRep_Reporting_Step_Error_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/VoiceReport_Steps/WBP_VoiceRep_Reporting_Step_Error.WBP_VoiceRep_Reporting_Step_Error_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_VoiceRep_Reporting_Step_Error(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/StepWizard/WBP_StepWizard_List_Entry.WBP_StepWizard_List_Entry_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x300 - 0x2B0)
	class UWBP_StepWizard_List_Entry_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UBorder* Border; // 0x2B8(0x8)
		UHorizontalBox* CountBox; // 0x2C0(0x8)
		UCommonTextBlock* CurrentStep; // 0x2C8(0x8)
		UImage* Step_Image; // 0x2D0(0x8)
		UCommonTextBlock* Step_Name; // 0x2D8(0x8)
		UCommonTextBlock* TotalSteps; // 0x2E0(0x8)
		UVerticalBox* VerticalBox; // 0x2E8(0x8)
		UBP_UI_StepWizard_C* ItemData; // 0x2F0(0x8)
		UUserWidget* ContentWidget; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/StepWizard/WBP_StepWizard_List_Entry.WBP_StepWizard_List_Entry_C");
			return ret;
		}

		void SetStepTypeAndCount(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_StepWizard_List_Entry(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VoiceRep/VoiceReportWizard/StepWizard/BP_UI_StepWizard.BP_UI_StepWizard_C
	// Inherited from UObject
	// Size: 0x39 (0x61 - 0x28)
	class UBP_UI_StepWizard_C : public UObject	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x8)
		FS_UI_StepWizard_Entry StepContentData; // 0x30(0x28)
		int32_t CurrentStep; // 0x58(0x4)
		int32_t TotalSteps; // 0x5C(0x4)
		TEnumAsByte<E_UI_StepWizard_Type> StepType; // 0x60(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/VoiceReportWizard/StepWizard/BP_UI_StepWizard.BP_UI_StepWizard_C");
			return ret;
		}

		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_UI_StepWizard(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
