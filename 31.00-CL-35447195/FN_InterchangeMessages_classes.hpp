#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeMessages
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class InterchangeMessages.InterchangeResultMeshWarning
	// Inherited from UInterchangeResultWarning -> UInterchangeResult -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UInterchangeResultMeshWarning : public UInterchangeResultWarning	
	{
	public:
		FString MeshName; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeMessages.InterchangeResultMeshWarning");
			return ret;
		}
	};


	// Class InterchangeMessages.InterchangeResultTextureDisplay
	// Inherited from UInterchangeResultDisplay_Generic -> UInterchangeResultSuccess -> UInterchangeResult -> UObject
	// Size: 0x10 (0x90 - 0x80)
	class UInterchangeResultTextureDisplay : public UInterchangeResultDisplay_Generic	
	{
	public:
		FString TextureName; // 0x80(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeMessages.InterchangeResultTextureDisplay");
			return ret;
		}
	};


	// Class InterchangeMessages.InterchangeResultTextureWarning
	// Inherited from UInterchangeResultWarning -> UInterchangeResult -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UInterchangeResultTextureWarning : public UInterchangeResultWarning	
	{
	public:
		FString TextureName; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeMessages.InterchangeResultTextureWarning");
			return ret;
		}
	};


	// Class InterchangeMessages.InterchangeResultMeshError
	// Inherited from UInterchangeResultError -> UInterchangeResult -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UInterchangeResultMeshError : public UInterchangeResultError	
	{
	public:
		FString MeshName; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeMessages.InterchangeResultMeshError");
			return ret;
		}
	};


	// Class InterchangeMessages.InterchangeResultMeshWarning_Generic
	// Inherited from UInterchangeResultMeshWarning -> UInterchangeResultWarning -> UInterchangeResult -> UObject
	// Size: 0x10 (0x90 - 0x80)
	class UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning	
	{
	public:
		FText Text; // 0x80(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeMessages.InterchangeResultMeshWarning_Generic");
			return ret;
		}
	};


	// Class InterchangeMessages.InterchangeResultMeshError_Generic
	// Inherited from UInterchangeResultMeshError -> UInterchangeResultError -> UInterchangeResult -> UObject
	// Size: 0x10 (0x90 - 0x80)
	class UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError	
	{
	public:
		FText Text; // 0x80(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeMessages.InterchangeResultMeshError_Generic");
			return ret;
		}
	};


	// Class InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
	// Inherited from UInterchangeResultMeshWarning -> UInterchangeResultWarning -> UInterchangeResult -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UInterchangeResultMeshWarning_TooManyUVs : public UInterchangeResultMeshWarning	
	{
	public:
		int32_t ExcessUVs; // 0x80(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs");
			return ret;
		}
	};


	// Class InterchangeMessages.InterchangeResultTextureDisplay_TextureFileDoNotExist
	// Inherited from UInterchangeResultTextureDisplay -> UInterchangeResultDisplay_Generic -> UInterchangeResultSuccess -> UInterchangeResult -> UObject
	// Size: 0x10 (0xA0 - 0x90)
	class UInterchangeResultTextureDisplay_TextureFileDoNotExist : public UInterchangeResultTextureDisplay	
	{
	public:
		FString MaterialName; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InterchangeMessages.InterchangeResultTextureDisplay_TextureFileDoNotExist");
			return ret;
		}
	};

}
