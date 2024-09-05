#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DataflowEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DataflowEngine.DataflowBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowEngine.DataflowBlueprintLibrary");
			return ret;
		}

		void EvaluateTerminalNodeByName(UDataflow Dataflow, FName TerminalNodeName, UObject ResultAsset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144A5A38
	};


	// Class DataflowEngine.DataflowContextObject
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UDataflowContextObject : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowEngine.DataflowContextObject");
			return ret;
		}
	};


	// Class DataflowEngine.DataflowContentOwner
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataflowContentOwner : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowEngine.DataflowContentOwner");
			return ret;
		}
	};


	// Class DataflowEngine.DataflowBaseContent
	// Inherited from UDataflowContextObject -> UObject
	// Size: 0x48 (0x90 - 0x48)
	class UDataflowBaseContent : public UDataflowContextObject	
	{
	public:
		FString DataflowTerminal; // 0x48(0x10)
		UDataflow DataflowGraph; // 0x58(0x8)
		UObject TerminalAsset; // 0x60(0x8)
		unsigned char UnknownData02_6[0x18]; // 0x68(0x18) UNKNOWN PROPERTY
		bool bIsConstructionDirty; // 0x80(0x1)
		bool bIsSimulationDirty; // 0x81(0x1)
		unsigned char UnknownData03_7[0xE]; // 0x82(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowEngine.DataflowBaseContent");
			return ret;
		}
	};


	// Class DataflowEngine.DataflowSkeletalContent
	// Inherited from UDataflowBaseContent -> UDataflowContextObject -> UObject
	// Size: 0x20 (0xB0 - 0x90)
	class UDataflowSkeletalContent : public UDataflowBaseContent	
	{
	public:
		USkeletalMesh SkeletalMesh; // 0x90(0x8)
		USkeleton Skeleton; // 0x98(0x8)
		UAnimationAsset AnimationAsset; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowEngine.DataflowSkeletalContent");
			return ret;
		}
	};


	// Class DataflowEngine.DataflowEdNode
	// Inherited from UEdGraphNode -> UObject
	// Size: 0x28 (0xC0 - 0x98)
	class UDataflowEdNode : public UEdGraphNode	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x98(0x20) UNKNOWN PROPERTY
		bool bRenderInAssetEditor; // 0xB8(0x1)
		bool bRenderWireframeInAssetEditor; // 0xB9(0x1)
		bool bCanEnableRenderWireframe; // 0xBA(0x1)
		unsigned char UnknownData03_7[0x5]; // 0xBB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowEngine.DataflowEdNode");
			return ret;
		}
	};


	// Class DataflowEngine.Dataflow
	// Inherited from UEdGraph -> UObject
	// Size: 0x60 (0xC0 - 0x60)
	class UDataflow : public UEdGraph	
	{
	public:
		unsigned char UnknownData03_3[0x38]; // 0x60(0x38) UNKNOWN PROPERTY
		bool bActive; // 0x98(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		TArray Targets; // 0xA0(0x10)
		UMaterial Material; // 0xB0(0x8)
		EDataflowType Type; // 0xB8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowEngine.Dataflow");
			return ret;
		}
	};

}
