#pragma once
#include "stdafx.h"
#include "catch/catch.hpp"
#include "../Vending Machine/CardPayment.h"
#include "../Vending Machine/CardPayment.cpp"

namespace CardPaymentTestSystem
{
	TEST_CASE("CardPaymentTest_ExpectedIntValueReturned")
	{
		auto cardPayment = CardPayment(100);
		const int expectedValue = 100;
		REQUIRE(expectedValue == cardPayment.ReturnPaymentValue());
	};

	TEST_CASE("CardPaymentTest_ExpectedBoolValueReturned")
	{
		auto cardPayment = CardPayment();
		auto result = cardPayment.ChangeNeeded();
		const bool expectedValue = false;
		REQUIRE(expectedValue == result);
	};
	TEST_CASE("CardPaymentTest_PaymentFunction")
	{
		auto cardPayment = CardPayment();
		Money expectedValue = Money(100);
		bool result = expectedValue == cardPayment.Payment(100);
		REQUIRE(result);
	};
}