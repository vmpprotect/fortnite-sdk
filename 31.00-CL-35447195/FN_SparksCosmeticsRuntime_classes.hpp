#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCosmeticsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksCosmeticsRuntime.SparksCosmeticsCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksCosmeticsCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager");
			return ret;
		}

		void GrantSparksSongsLoadedAssets(bool bIncludeSongsWithoutCatalogData); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 0x7FF414C0A518
		void GrantSparksCosmeticsLoadedAssets(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 0x7FF414C0A438
	};


	// Class SparksCosmeticsRuntime.SparksInstrumentPreviewActor
	// Inherited from AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x40 (0x4B8 - 0x478)
	class ASparksInstrumentPreviewActor : public AFortItemPreviewActor	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x478(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr ItemDef; // 0x488(0x20)
		FDelegateProperty OnSettingsChangedDelegate; // 0x4A8(0xC)
		unsigned char UnknownData03_7[0x4]; // 0x4B4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCosmeticsRuntime.SparksInstrumentPreviewActor");
			return ret;
		}

		FSparksVariantChoices GetCurrentChoices(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0A5F8
	};


	// Class SparksCosmeticsRuntime.SparksItemPreviewOffPawnActor
	// Inherited from AFortItemPreviewOffPawnActor -> AFortItemPreviewSingleAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x0 (0x4D0 - 0x4D0)
	class ASparksItemPreviewOffPawnActor : public AFortItemPreviewOffPawnActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCosmeticsRuntime.SparksItemPreviewOffPawnActor");
			return ret;
		}

		ESparksInstrumentType GetInstrumentType(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0A6D8
	};


	// Class SparksCosmeticsRuntime.SparksItemPreviewOnPawnActor
	// Inherited from AFortItemPreviewOnPawnActor -> AFortItemPreviewMultiAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x10 (0x7A0 - 0x790)
	class ASparksItemPreviewOnPawnActor : public AFortItemPreviewOnPawnActor	
	{
	public:
		UNiagaraComponent ActiveAura; // 0x790(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x798(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCosmeticsRuntime.SparksItemPreviewOnPawnActor");
			return ret;
		}
	};


	// Class SparksCosmeticsRuntime.SparksPlayerStateComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class USparksPlayerStateComponent : public UPlayerStateComponent	
	{
	public:
		ESparksInstrumentType SparksInstrumentChoice; // 0xA0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCosmeticsRuntime.SparksPlayerStateComponent");
			return ret;
		}

		void SetSparksInstrumentChoice(ESparksInstrumentType Instrument); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E5580
		ESparksInstrumentType GetSparksInstrumentChoice(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E54A0
	};


	// Class SparksCosmeticsRuntime.SparksSongPreviewActor
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class ASparksSongPreviewActor : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		FName SongShortName; // 0x2A0(0x4)
		float BoundsScale; // 0x2A4(0x4)
		unsigned char UnknownData03_7[0x10]; // 0x2A8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCosmeticsRuntime.SparksSongPreviewActor");
			return ret;
		}

		void StartSongPreview(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C0A898
		void OnSongTextureLoaded(UTexture2D CoverArt); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C0A7B8
	};

}
