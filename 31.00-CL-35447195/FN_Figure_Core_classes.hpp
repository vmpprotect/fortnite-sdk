#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Figure_Core
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /FigureCharacter/Figure_Core/AnimBP/ABP_Figure_PlaceHolder.ABP_Figure_PlaceHolder_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xF0 (0x4A8 - 0x3B8)
	class UABP_Figure_PlaceHolder_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3D0(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D8(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x3F8(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCharacter/Figure_Core/AnimBP/ABP_Figure_PlaceHolder.ABP_Figure_PlaceHolder_C");
			return ret;
		}

		void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D58422800
		void ExecuteUbergraph_ABP_Figure_PlaceHolder(int32_t EntryPoint); // Flags: Final 0x15D41150B00
	};

}
