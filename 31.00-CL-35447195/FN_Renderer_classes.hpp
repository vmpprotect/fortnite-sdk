#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Renderer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Renderer.SparseVolumeTextureViewerComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x500 - 0x4C8)
	class USparseVolumeTextureViewerComponent : public UPrimitiveComponent	
	{
	public:
		USparseVolumeTexture SparseVolumeTexturePreview; // 0x4C8(0x8)
		float Frame; // 0x4D0(0x4)
		float FrameRate; // 0x4D4(0x4)
		bool bPlaying : 1; // 0x4D8:0(0x1)
		bool bLooping : 1; // 0x4D8:1(0x1)
		bool bReversePlayback : 1; // 0x4D8:2(0x1)
		bool bBlockingStreamingRequests : 1; // 0x4D8:3(0x1)
		bool bApplyPerFrameTransforms : 1; // 0x4D8:4(0x1)
		bool bPivotAtCentroid : 1; // 0x4D8:5(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x4D9(0x3) UNKNOWN PROPERTY
		float VoxelSize; // 0x4DC(0x4)
		TEnumAsByte PreviewAttribute; // 0x4E0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x4E1(0x3) UNKNOWN PROPERTY
		int32_t MipLevel; // 0x4E4(0x4)
		float Extinction; // 0x4E8(0x4)
		unsigned char UnknownData05_7[0x14]; // 0x4EC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Renderer.SparseVolumeTextureViewerComponent");
			return ret;
		}
	};


	// Class Renderer.SparseVolumeTextureViewer
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ASparseVolumeTextureViewer : public AInfo	
	{
	public:
		USparseVolumeTextureViewerComponent SparseVolumeTextureViewerComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Renderer.SparseVolumeTextureViewer");
			return ret;
		}
	};

}
