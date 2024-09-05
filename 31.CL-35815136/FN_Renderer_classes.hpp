#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Renderer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Renderer.SparseVolumeTextureViewerComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x500 - 0x4C8)
	class USparseVolumeTextureViewerComponent : public UPrimitiveComponent	
	{
	public:
		USparseVolumeTexture* SparseVolumeTexturePreview; // 0x4C8(0x8)
		float Frame; // 0x4D0(0x4)
		float FrameRate; // 0x4D4(0x4)
		bool bPlaying : 1; // 0x4D8:0(0x1)
		bool bLooping : 1; // 0x4D8:1(0x1)
		bool bReversePlayback : 1; // 0x4D8:2(0x1)
		bool bBlockingStreamingRequests : 1; // 0x4D8:3(0x1)
		bool bApplyPerFrameTransforms : 1; // 0x4D8:4(0x1)
		bool bPivotAtCentroid : 1; // 0x4D8:5(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x4D9(0x3) UNKNOWN PROPERTY
		float VoxelSize; // 0x4DC(0x4)
		TEnumAsByte<ESparseVolumeTexturePreviewAttribute> PreviewAttribute; // 0x4E0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x4E1(0x3) UNKNOWN PROPERTY
		int32_t MipLevel; // 0x4E4(0x4)
		float Extinction; // 0x4E8(0x4)
		unsigned char UnknownData02_7[0x14]; // 0x4EC(0x14) UNKNOWN PROPERTY

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
		USparseVolumeTextureViewerComponent* SparseVolumeTextureViewerComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Renderer.SparseVolumeTextureViewer");
			return ret;
		}
	};

}
