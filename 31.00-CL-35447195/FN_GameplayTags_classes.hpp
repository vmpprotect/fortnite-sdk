#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayTags
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameplayTags.BlueprintGameplayTagLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.BlueprintGameplayTagLibrary");
			return ret;
		}

		bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag tag); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144D4738
		bool NotEqual_TagTag(FGameplayTag A, FString B); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D4658
		bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D4578
		bool NotEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D4498
		bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D43B8
		bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D42D8
		bool MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer& OtherContainer, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D41F8
		FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D4118
		FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D4038
		FGameplayTagQuery MakeGameplayTagQuery_MatchNoTags(FGameplayTagContainer& InTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3F58
		FGameplayTagQuery MakeGameplayTagQuery_MatchAnyTags(FGameplayTagContainer& InTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3E78
		FGameplayTagQuery MakeGameplayTagQuery_MatchAllTags(FGameplayTagContainer& InTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3D98
		FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D3CB8
		FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D3BD8
		FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray& GameplayTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3AF8
		bool IsTagQueryEmpty(FGameplayTagQuery& TagQuery); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3A18
		bool IsGameplayTagValid(FGameplayTag GameplayTag); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D3938
		bool HasTag(FGameplayTagContainer& TagContainer, FGameplayTag tag, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3858
		bool HasAnyTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3778
		bool HasAllTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3698
		bool HasAllMatchingGameplayTags(TScriptInterface TagContainerInterface, FGameplayTagContainer& OtherContainer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D35B8
		FName GetTagName(FGameplayTag& GameplayTag); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D34D8
		int32_t GetNumGameplayTagsInContainer(FGameplayTagContainer& TagContainer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D33F8
		FString GetDebugStringFromGameplayTagContainer(FGameplayTagContainer& TagContainer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3318
		FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D3238
		void GetAllActorsOfClassMatchingTagQuery(UObject WorldContextObject, UClass ActorClass, FGameplayTagQuery& GameplayTagQuery, TArray& OutActors); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144D3158
		bool EqualEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D3078
		bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D2F98
		bool DoesTagAssetInterfaceHaveTag(TScriptInterface TagContainerInterface, FGameplayTag tag); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144D2EB8
		bool DoesContainerMatchTagQuery(FGameplayTagContainer& TagContainer, FGameplayTagQuery& TagQuery); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D2DD8
		void BreakGameplayTagContainer(FGameplayTagContainer& GameplayTagContainer, TArray& GameplayTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144D2CF8
		void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, FGameplayTagContainer& InTagContainer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144D2C18
		void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag tag); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144D2B38
	};


	// Class GameplayTags.GameplayTagAssetInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayTagAssetInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.GameplayTagAssetInterface");
			return ret;
		}

		bool HasMatchingGameplayTag(FGameplayTag TagToCheck); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D4AB8
		bool HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4144D49D8
		bool HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4144D48F8
		void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4144D4818
	};


	// Class GameplayTags.EditableGameplayTagQuery
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UEditableGameplayTagQuery : public UObject	
	{
	public:
		FString UserDescription; // 0x28(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		UEditableGameplayTagQueryExpression RootExpression; // 0x48(0x8)
		FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQuery");
			return ret;
		}
	};


	// Class GameplayTags.EditableGameplayTagQueryExpression
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEditableGameplayTagQueryExpression : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression");
			return ret;
		}
	};


	// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
	// Inherited from UEditableGameplayTagQueryExpression -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression	
	{
	public:
		FGameplayTagContainer Tags; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
			return ret;
		}
	};


	// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
	// Inherited from UEditableGameplayTagQueryExpression -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression	
	{
	public:
		FGameplayTagContainer Tags; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
			return ret;
		}
	};


	// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
	// Inherited from UEditableGameplayTagQueryExpression -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression	
	{
	public:
		FGameplayTagContainer Tags; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
			return ret;
		}
	};


	// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
	// Inherited from UEditableGameplayTagQueryExpression -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression	
	{
	public:
		TArray Expressions; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
			return ret;
		}
	};


	// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
	// Inherited from UEditableGameplayTagQueryExpression -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression	
	{
	public:
		TArray Expressions; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
			return ret;
		}
	};


	// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
	// Inherited from UEditableGameplayTagQueryExpression -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression	
	{
	public:
		TArray Expressions; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
			return ret;
		}
	};


	// Class GameplayTags.GameplayTagsManager
	// Inherited from UObject
	// Size: 0x278 (0x2A0 - 0x28)
	class UGameplayTagsManager : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x160]; // 0x28(0x160) UNKNOWN PROPERTY
		TMap TagSources; // 0x188(0x50)
		unsigned char UnknownData03_6[0xB8]; // 0x1D8(0xB8) UNKNOWN PROPERTY
		TArray GameplayTagTables; // 0x290(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.GameplayTagsManager");
			return ret;
		}
	};


	// Class GameplayTags.GameplayTagsList
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameplayTagsList : public UObject	
	{
	public:
		FString ConfigFileName; // 0x28(0x10)
		TArray GameplayTagList; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.GameplayTagsList");
			return ret;
		}
	};


	// Class GameplayTags.RestrictedGameplayTagsList
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class URestrictedGameplayTagsList : public UObject	
	{
	public:
		FString ConfigFileName; // 0x28(0x10)
		TArray RestrictedGameplayTagList; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.RestrictedGameplayTagsList");
			return ret;
		}
	};


	// Class GameplayTags.GameplayTagsSettings
	// Inherited from UGameplayTagsList -> UObject
	// Size: 0x70 (0xB8 - 0x48)
	class UGameplayTagsSettings : public UGameplayTagsList	
	{
	public:
		bool ImportTagsFromConfig; // 0x48(0x1)
		bool WarnOnInvalidTags; // 0x49(0x1)
		bool ClearInvalidTags; // 0x4A(0x1)
		bool AllowEditorTagUnloading; // 0x4B(0x1)
		bool AllowGameTagUnloading; // 0x4C(0x1)
		bool FastReplication; // 0x4D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x4E(0x2) UNKNOWN PROPERTY
		FString InvalidTagCharacters; // 0x50(0x10)
		TArray CategoryRemapping; // 0x60(0x10)
		TArray GameplayTagTableList; // 0x70(0x10)
		TArray GameplayTagRedirects; // 0x80(0x10)
		TArray CommonlyReplicatedTags; // 0x90(0x10)
		int32_t NumBitsForContainerSize; // 0xA0(0x4)
		int32_t NetIndexFirstBitSegment; // 0xA4(0x4)
		TArray RestrictedConfigFiles; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.GameplayTagsSettings");
			return ret;
		}
	};


	// Class GameplayTags.GameplayTagsDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UGameplayTagsDeveloperSettings : public UDeveloperSettings	
	{
	public:
		FString DeveloperConfigName; // 0x30(0x10)
		FName FavoriteTagSource; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.GameplayTagsDeveloperSettings");
			return ret;
		}
	};

}
