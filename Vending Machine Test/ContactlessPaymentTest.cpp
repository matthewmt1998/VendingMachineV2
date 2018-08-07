#pragma once
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Vending Machine/ContactlessPayment.h"
#include "../Vending Machine/ContactlessPayment.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ContactlessPaymentTestSystem
{
	TEST_CLASS(ContactlessPaymentTest)
	{
	public:

		TEST_METHOD(ContactlessPaymentTest_ExpectedIntValueReturned)
		{
			auto contactlessPayment = ContactlessPayment(100);
			const int expectedValue = 100;
			Assert::AreEqual(expectedValue, contactlessPayment.ReturnPaymentValue());
		};

		TEST_METHOD(ContactlessPaymentTest_ExpectedBoolValueReturned)
		{
			auto contactlessPayment = ContactlessPayment(100);
			auto result = contactlessPayment.ChangeNeeded();
			const bool expectedValue = false;
			Assert::AreEqual(expectedValue, result);
		};
		TEST_METHOD(ContactlessPaymentTest_PaymentFunction)
		{
			auto contactlessPayment = ContactlessPayment();
			Money expectedValue = Money(100);
			bool result = expectedValue == contactlessPayment.Payment(100);
			Assert::IsTrue(result);
		};
	};
}