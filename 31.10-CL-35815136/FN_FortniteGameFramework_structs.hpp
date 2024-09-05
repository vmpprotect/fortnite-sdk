#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteGameFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortniteGameFramework.ComponentCacheHelper
	// Size: 0x10 (0x10 - 0x0)
	struct FComponentCacheHelper	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteGameFramework.ActorOwnedStateTreeConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FActorOwnedStateTreeConfig	
	{
	public:
		TWeakObjectPtr<UStateTree*> StateTreeAsset; // 0x0(0x20)
		bool bShouldReplicate; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteGameFramework.StateTreeRuntimeData
	// Size: 0x30 (0x30 - 0x0)
	struct FStateTreeRuntimeData	
	{
	public:
		UObject* Owner; // 0x0(0x8)
		UStateTree* StateTree; // 0x8(0x8)
		FStateTreeInstanceData StateTreeInstanceData; // 0x10(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteGameFramework.StateChangeData
	// Inherited from FFastArraySerializerItem
	// Size: 0x1C (0x28 - 0xC)
	struct FStateChangeData : public FFastArraySerializerItem	
	{
	public:
		int32_t StateTreeDataHandle; // 0xC(0x4)
		int32_t Handle; // 0x10(0x4)
		int32_t StateIdentifier; // 0x14(0x4)
		UStateTreeTaskObject* StateObject; // 0x18(0x8)
		ETaskObjectStateChangeType StateChangeType; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteGameFramework.StateChangeDataArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FStateChangeDataArray : public FFastArraySerializer	
	{
	public:
		TArray<FStateChangeData> StateChangeDataList; // 0x108(0x10)
		UStateTreeManagerComponent* StateTreeManagerComponent; // 0x118(0x8)
	};


	// Struct FortniteGameFramework.StateTreeClientSimulationData
	// Size: 0x28 (0x28 - 0x0)
	struct FStateTreeClientSimulationData	
	{
	public:
		unsigned char UnknownData00_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};

}
