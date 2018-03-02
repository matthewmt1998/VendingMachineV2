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
			Money expectedValue = Money(10);
			pf.Cash(10);
			pf.InsertedMonetaryValue();
			bool result = expectedValue == pf.InsertedMonetaryValue();
			Assert::IsTrue(result);
		}
		
	};
}