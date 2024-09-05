#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnalyticsBlueprintLibrary
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary");
			return ret;
		}

		bool StartSessionWithAttributes(TArray& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414664018
		bool StartSession(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663F38
		void SetUserId(FString UserId); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663E58
		void SetSessionId(FString SessionId); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663D78
		void SetLocation(FString Location); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663C98
		void SetGender(FString Gender); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663BB8
		void SetBuildInfo(FString BuildInfo); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663AD8
		void SetAge(int32_t Age); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146639F8
		void RecordSimpleItemPurchaseWithAttributes(FString ItemId, int32_t ItemQuantity, TArray& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414663918
		void RecordSimpleItemPurchase(FString ItemId, int32_t ItemQuantity); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663838
		void RecordSimpleCurrencyPurchaseWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414663758
		void RecordSimpleCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663678
		void RecordProgressWithFullHierarchyAndAttributes(FString ProgressType, TArray& ProgressNames, TArray& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414663598
		void RecordProgressWithAttributes(FString ProgressType, FString ProgressName, TArray& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146634B8
		void RecordProgress(FString ProgressType, FString ProgressName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146633D8
		void RecordItemPurchase(FString ItemId, FString Currency, int32_t PerItemCost, int32_t ItemQuantity); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146632F8
		void RecordEventWithAttributes(FString EventName, TArray& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414663218
		void RecordEventWithAttribute(FString EventName, FString AttributeName, FString AttributeValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663138
		void RecordEvent(FString EventName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414663058
		void RecordErrorWithAttributes(FString Error, TArray& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414662F78
		void RecordError(FString Error); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414662E98
		void RecordCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount, FString RealCurrencyType, float RealMoneyCost, FString PaymentProvider); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414662DB8
		void RecordCurrencyGivenWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414662CD8
		void RecordCurrencyGiven(FString GameCurrencyType, int32_t GameCurrencyAmount); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414662BF8
		FAnalyticsEventAttr MakeEventAttribute(FString AttributeName, FString AttributeValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414662B18
		FString GetUserId(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414662A38
		FString GetSessionId(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414662958
		void FlushEvents(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414662878
		void EndSession(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414662798
	};

}
