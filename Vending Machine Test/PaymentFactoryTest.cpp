#pragma once 
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Vending Machine/PaymentFactory.h"
#include "../Vending Machine/PaymentFactory.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PaymentFactoryTest
{
	TEST_CLASS(PaymentFactoryTest)
	{
	public:

		TEST_METHOD(payment_factory_cash_test_ValueReturned)
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const cash = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = expectedValue.compare(cash->ReturnPaymentValue());
			Assert::IsTrue(result);
		}
		
		TEST_METHOD(payment_factory_card_test_ValueReturned)
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const card = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = expectedValue.compare(card->ReturnPaymentValue());
			Assert::IsTrue(result);
		}

		TEST_METHOD(payment_factory_Contactless_test_ValueReturned)
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const contactless = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = expectedValue.compare(contactless->ReturnPaymentValue());
			Assert::IsTrue(result);
		}

		TEST_METHOD(payment_factory_cash_test_ChangeNeeded)
		{
			PaymentFactory pf = PaymentFactory();
			auto const cash = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = cash->ChangeNeeded();
			Assert::IsTrue(result);
		}

		TEST_METHOD(payment_factory_card_test_ChangeNeeded)
		{
			PaymentFactory pf = PaymentFactory();
			auto const card = pf.CreatePaymentMethod(pf.Card, 100);
			bool result = card->ChangeNeeded();
			Assert::IsFalse(result);
		}

		TEST_METHOD(payment_factory_Contactless_test_ChangeNeeded)
		{
			PaymentFactory pf = PaymentFactory();
			auto const contactless = pf.CreatePaymentMethod(pf.Contactless, 100);
			bool result = contactless->ChangeNeeded();
			Assert::IsFalse(result);
		}

		TEST_METHOD(payment_factory_cash_test_Payment)
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const cash = pf.CreatePaymentMethod(pf.Cash);
			bool result = expectedValue.compare(cash->Payment(100));
			Assert::IsTrue(result);
		}

		TEST_METHOD(payment_factory_card_test_Payment)
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const card = pf.CreatePaymentMethod(pf.Card);
			bool result = expectedValue.compare(card->Payment(100));
			Assert::IsTrue(result);
		}

		TEST_METHOD(payment_factory_Contactless_test_Payment)
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const contactless = pf.CreatePaymentMethod(pf.Contactless);
			bool result = expectedValue.compare(contactless->Payment(100));
			Assert::IsTrue(result);
		}
	};
}