#pragma once 
#include "stdafx.h"
#include "catch/catch.hpp"
#include "../Vending Machine/PaymentFactory.h"
#include "../Vending Machine/PaymentFactory.cpp"


namespace PaymentFactoryTest
{
		TEST_CASE("payment_factory_cash_test_ValueReturned")
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const cash = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = expectedValue.compare(cash->ReturnPaymentValue());
			REQUIRE(result);
		}
		
		TEST_CASE("payment_factory_card_test_ValueReturned")
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const card = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = expectedValue.compare(card->ReturnPaymentValue());
			REQUIRE(result);
		}

		TEST_CASE("payment_factory_Contactless_test_ValueReturned")
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const contactless = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = expectedValue.compare(contactless->ReturnPaymentValue());
			REQUIRE(result);
		}

		TEST_CASE("payment_factory_cash_test_ChangeNeeded")
		{
			PaymentFactory pf = PaymentFactory();
			auto const cash = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = cash->ChangeNeeded();
			REQUIRE(result);
		}

		TEST_CASE("payment_factory_card_test_ChangeNeeded")
		{
			PaymentFactory pf = PaymentFactory();
			auto const card = pf.CreatePaymentMethod(pf.Card, 100);
			bool result = card->ChangeNeeded();
			REQUIRE_FALSE(result);
		}

		TEST_CASE("payment_factory_Contactless_test_ChangeNeeded")
		{
			PaymentFactory pf = PaymentFactory();
			auto const contactless = pf.CreatePaymentMethod(pf.Contactless, 100);
			bool result = contactless->ChangeNeeded();
			REQUIRE_FALSE(result);
		}

		TEST_CASE("payment_factory_cash_test_Payment")
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const cash = pf.CreatePaymentMethod(pf.Cash);
			bool result = expectedValue.compare(cash->Payment(100));
			REQUIRE(result);
		}

		TEST_CASE("payment_factory_card_test_Payment")
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const card = pf.CreatePaymentMethod(pf.Card);
			bool result = expectedValue.compare(card->Payment(100));
			REQUIRE(result);
		}

		TEST_CASE("payment_factory_Contactless_test_Payment")
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const contactless = pf.CreatePaymentMethod(pf.Contactless);
			bool result = expectedValue.compare(contactless->Payment(100));
			REQUIRE(result);
		}
}