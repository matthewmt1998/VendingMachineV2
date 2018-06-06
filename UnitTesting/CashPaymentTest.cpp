#pragma once
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Vending Machine/CashPayment.h"
#include "../Vending Machine/CashPayment.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CashPaymentTestSystem
{
	TEST_CLASS(CashPaymentTest)
	{
	public:

		TEST_METHOD(CashPaymentTest_ExpectedIntValueReturned)
		{
			auto cashPayment = CashPayment(100);
			const int expectedValue = 100;
			Assert::AreEqual(expectedValue, cashPayment.returnPaymentValue());
		};

		TEST_METHOD(CashPaymentTest_ExpectedBoolValueReturned)
		{
			auto cashPayment = CashPayment(100);
			auto result = cashPayment.ChangeNeeded();
			const bool expectedValue = true;
			Assert::AreEqual(expectedValue, result);
		};
		TEST_METHOD(CashPaymentTest_PaymentFunction)
		{
			auto cashPayment = CashPayment(100);
			Money expectedValue = Money(100);
			bool result = expectedValue == cashPayment.returnPaymentValue();
			Assert::IsTrue(result);
		};
	};
}