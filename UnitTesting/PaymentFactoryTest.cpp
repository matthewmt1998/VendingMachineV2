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

		TEST_METHOD(payment_factory_cash_test)
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const cash = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = expectedValue.compare(cash->returnPaymentValue());
			Assert::IsTrue(result);
		}
		
		TEST_METHOD(payment_factory_card_test)
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const card = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = expectedValue.compare(card->returnPaymentValue());
			Assert::IsTrue(result);
		}

		TEST_METHOD(payment_factory_Contactless_test)
		{
			PaymentFactory pf = PaymentFactory();
			Money expectedValue = Money(100);
			auto const contactless = pf.CreatePaymentMethod(pf.Cash, 100);
			bool result = expectedValue.compare(contactless->returnPaymentValue());
			Assert::IsTrue(result);
		}
	};
}