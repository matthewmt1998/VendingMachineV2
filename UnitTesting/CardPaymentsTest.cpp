#pragma once
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Vending Machine/CardPayment.h"
#include "../Vending Machine/CardPayment.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CardPaymentTestSystem
{
	TEST_CLASS(CardPaymentTest)
	{
	public:

		TEST_METHOD(CardPaymentTest_ExpectedIntValueReturned)
		{
			auto cardPayment = CardPayment(100);
			const int expectedValue = 100;
			Assert::AreEqual(expectedValue, cardPayment.returnPaymentValue());
		};

		TEST_METHOD(CardPaymentTest_ExpectedBoolValueReturned)
		{
			auto cardPayment = CardPayment();
			auto result = cardPayment.ChangeNeeded();
			const bool expectedValue = false;
			Assert::AreEqual(expectedValue, result);
		};
		TEST_METHOD(CardPaymentTest_PaymentFunction)
		{
			auto cardPayment = CardPayment();
			Money expectedValue = Money(100);
			bool result = expectedValue == cardPayment.Payment(100);
			Assert::IsTrue(result);
		};
	};
}