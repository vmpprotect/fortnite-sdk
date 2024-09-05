#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnalyticsBlueprintLibrary
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		bool StartSessionWithAttributes(TArray<FAnalyticsEventAttr>& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E03EF50(relative to base address)
		bool StartSession(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03EED8(relative to base address)
		void SetUserId(FString UserId); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03EE10(relative to base address)
		void SetSessionId(FString SessionId); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03ED48(relative to base address)
		void SetLocation(FString Location); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03EC80(relative to base address)
		void SetGender(FString Gender); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03EBB8(relative to base address)
		void SetBuildInfo(FString BuildInfo); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03EAF0(relative to base address)
		void SetAge(int32_t Age); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03EA40(relative to base address)
		void RecordSimpleItemPurchaseWithAttributes(FString ItemId, int32_t ItemQuantity, TArray<FAnalyticsEventAttr>& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E03E91C(relative to base address)
		void RecordSimpleItemPurchase(FString ItemId, int32_t ItemQuantity); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03E858(relative to base address)
		void RecordSimpleCurrencyPurchaseWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E03E734(relative to base address)
		void RecordSimpleCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03E618(relative to base address)
		void RecordProgressWithFullHierarchyAndAttributes(FString ProgressType, TArray<FString>& ProgressNames, TArray<FAnalyticsEventAttr>& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E03E4A4(relative to base address)
		void RecordProgressWithAttributes(FString ProgressType, FString ProgressName, TArray<FAnalyticsEventAttr>& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E03E36C(relative to base address)
		void RecordProgress(FString ProgressType, FString ProgressName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03E23C(relative to base address)
		void RecordItemPurchase(FString ItemId, FString Currency, int32_t PerItemCost, int32_t ItemQuantity); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03E0E0(relative to base address)
		void RecordEventWithAttributes(FString EventName, TArray<FAnalyticsEventAttr>& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E03DFF8(relative to base address)
		void RecordEventWithAttribute(FString EventName, FString AttributeName, FString AttributeValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03DEC8(relative to base address)
		void RecordEvent(FString EventName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03DDF8(relative to base address)
		void RecordErrorWithAttributes(FString Error, TArray<FAnalyticsEventAttr>& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E03DD10(relative to base address)
		void RecordError(FString Error); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03DC44(relative to base address)
		void RecordCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount, FString RealCurrencyType, float RealMoneyCost, FString PaymentProvider); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03DA8C(relative to base address)
		void RecordCurrencyGivenWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E03D968(relative to base address)
		void RecordCurrencyGiven(FString GameCurrencyType, int32_t GameCurrencyAmount); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03D84C(relative to base address)
		FAnalyticsEventAttr MakeEventAttribute(FString AttributeName, FString AttributeValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74E03D718(relative to base address)
		FString GetUserId(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03D698(relative to base address)
		FString GetSessionId(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03D618(relative to base address)
		void FlushEvents(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03D5B4(relative to base address)
		void EndSession(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E03D550(relative to base address)
	};

}
