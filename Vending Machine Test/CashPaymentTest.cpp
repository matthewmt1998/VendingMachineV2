#pragma once
#include "stdafx.h"
#include "catch/catch.hpp"
#include "../Vending Machine/CashPayment.h"
#include "../Vending Machine/CashPayment.cpp"

namespace CashPaymentTestSystem
{

		TEST_CASE("CashPaymentTest_ExpectedIntValueReturned")
		{
			auto cashPayment = CashPayment(100);
			const int expectedValue = 100;
			REQUIRE(expectedValue == cashPayment.ReturnPaymentValue());
		}

		TEST_CASE("CashPaymentTest_ExpectedBoolValueReturned")
		{
			auto cashPayment = CashPayment(100);
			auto result = cashPayment.ChangeNeeded();
			const bool expectedValue = true;
			REQUIRE(expectedValue == result);
		}

		TEST_CASE("CashPaymentTest_PaymentFunction")
		{
			auto cashPayment = CashPayment();
			Money expectedValue = Money(100);
			bool result = expectedValue == cashPayment.Payment(100);
			REQUIRE(result);
		}
}