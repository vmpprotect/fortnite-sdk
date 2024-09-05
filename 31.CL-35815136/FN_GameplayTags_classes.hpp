#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayTags
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C306A2C(relative to base address)
		bool NotEqual_TagTag(FGameplayTag A, FString B); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF747B0C220(relative to base address)
		bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3067EC(relative to base address)
		bool NotEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3066AC(relative to base address)
		bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3064DC(relative to base address)
		bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7488E5CD4(relative to base address)
		bool MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer& OtherContainer, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C306288(relative to base address)
		FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7494235A0(relative to base address)
		FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748FC8190(relative to base address)
		FGameplayTagQuery MakeGameplayTagQuery_MatchNoTags(FGameplayTagContainer& InTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3061A8(relative to base address)
		FGameplayTagQuery MakeGameplayTagQuery_MatchAnyTags(FGameplayTagContainer& InTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3060C8(relative to base address)
		FGameplayTagQuery MakeGameplayTagQuery_MatchAllTags(FGameplayTagContainer& InTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C305FE8(relative to base address)
		FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C305E3C(relative to base address)
		FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74919C724(relative to base address)
		FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<FGameplayTag>& GameplayTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF749A069D4(relative to base address)
		bool IsTagQueryEmpty(FGameplayTagQuery& TagQuery); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C305D4C(relative to base address)
		bool IsGameplayTagValid(FGameplayTag GameplayTag); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748FDE9F8(relative to base address)
		bool HasTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748BA3E98(relative to base address)
		bool HasAnyTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748FE1768(relative to base address)
		bool HasAllTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748FB99F0(relative to base address)
		bool HasAllMatchingGameplayTags(TScriptInterface<Class> TagContainerInterface, FGameplayTagContainer& OtherContainer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C305B90(relative to base address)
		FName GetTagName(FGameplayTag& GameplayTag); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C099704(relative to base address)
		int32_t GetNumGameplayTagsInContainer(FGameplayTagContainer& TagContainer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C305A10(relative to base address)
		FString GetDebugStringFromGameplayTagContainer(FGameplayTagContainer& TagContainer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C305930(relative to base address)
		FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C305804(relative to base address)
		void GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, UClass* ActorClass, FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C305614(relative to base address)
		bool EqualEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3054D4(relative to base address)
		bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748ED50A8(relative to base address)
		bool DoesTagAssetInterfaceHaveTag(TScriptInterface<Class> TagContainerInterface, FGameplayTag Tag); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3052E8(relative to base address)
		bool DoesContainerMatchTagQuery(FGameplayTagContainer& TagContainer, FGameplayTagQuery& TagQuery); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C305170(relative to base address)
		void BreakGameplayTagContainer(FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF747DF5A58(relative to base address)
		void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, FGameplayTagContainer& InTagContainer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C305040(relative to base address)
		void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C304EC0(relative to base address)
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

		bool HasMatchingGameplayTag(FGameplayTag TagToCheck); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7488A89D8(relative to base address)
		bool HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7492E1020(relative to base address)
		bool HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C305AC8(relative to base address)
		void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7491613A0(relative to base address)
	};


	// Class GameplayTags.EditableGameplayTagQuery
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UEditableGameplayTagQuery : public UObject	
	{
	public:
		FString UserDescription; // 0x28(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		UEditableGameplayTagQueryExpression* RootExpression; // 0x48(0x8)
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
		TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)

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
		TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)

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
		TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)

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
		unsigned char UnknownData00_3[0x160]; // 0x28(0x160) UNKNOWN PROPERTY
		TMap<FName, FGameplayTagSource> TagSources; // 0x188(0x50)
		unsigned char UnknownData01_6[0xB8]; // 0x1D8(0xB8) UNKNOWN PROPERTY
		TArray<UDataTable*> GameplayTagTables; // 0x290(0x10)

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
		TArray<FGameplayTagTableRow> GameplayTagList; // 0x38(0x10)

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
		TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38(0x10)

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
		unsigned char UnknownData00_6[0x2]; // 0x4E(0x2) UNKNOWN PROPERTY
		FString InvalidTagCharacters; // 0x50(0x10)
		TArray<FGameplayTagCategoryRemap> CategoryRemapping; // 0x60(0x10)
		TArray<FSoftObjectPath> GameplayTagTableList; // 0x70(0x10)
		TArray<FGameplayTagRedirect> GameplayTagRedirects; // 0x80(0x10)
		TArray<FName> CommonlyReplicatedTags; // 0x90(0x10)
		int32_t NumBitsForContainerSize; // 0xA0(0x4)
		int32_t NetIndexFirstBitSegment; // 0xA4(0x4)
		TArray<FRestrictedConfigInfo> RestrictedConfigFiles; // 0xA8(0x10)

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
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTags.GameplayTagsDeveloperSettings");
			return ret;
		}
	};

}
