#pragma once
#include "stdafx.h"
#include "catch/catch.hpp"
#include "../Vending Machine/ContactlessPayment.h"
#include "../Vending Machine/ContactlessPayment.cpp"


namespace ContactlessPaymentTestSystem
{
		TEST_CASE("ContactlessPaymentTest_ExpectedIntValueReturned")
		{
			auto contactlessPayment = ContactlessPayment(100);
			const int expectedValue = 100;
			REQUIRE(expectedValue == contactlessPayment.ReturnPaymentValue());
		};

		TEST_CASE("ContactlessPaymentTest_ExpectedBoolValueReturned")
		{
			auto contactlessPayment = ContactlessPayment(100);
			auto result = contactlessPayment.ChangeNeeded();
			const bool expectedValue = false;
			REQUIRE(expectedValue == result);
		};
		TEST_CASE("ContactlessPaymentTest_PaymentFunction")
		{
			auto contactlessPayment = ContactlessPayment();
			Money expectedValue = Money(100);
			bool result = expectedValue == contactlessPayment.Payment(100);
			REQUIRE(result);
		};
}