#pragma once
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Vending Machine/Money.h"
#include "../Vending Machine/Money.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MoneyTestSystem
{		
	TEST_CLASS(MoneyTest)
	{
	public:
		
		TEST_METHOD(MoneyTest_Ten_Pence)
		{
			Money*GrabThis = new Money(10);
			int expectedMoneyValue = 10;
			Assert::AreEqual(expectedMoneyValue, GrabThis->GetMonetaryValue());
		}
		TEST_METHOD(MoneyTest_Twenty_Pence)
		{
			Money*GrabThis = new Money(20);
			int expectedMoneyValue = 20;
			Assert::AreEqual(expectedMoneyValue, GrabThis->GetMonetaryValue());
		}
		TEST_METHOD(MoneyTest_Fifty_Pence)
		{
			Money*GrabThis = new Money(50);
			int expectedMoneyValue = 50;
			Assert::AreEqual(expectedMoneyValue, GrabThis->GetMonetaryValue());
		}
		TEST_METHOD(MoneyTest_One_Pound)
		{
			Money*GrabThis = new Money(100);
			int expectedMoneyValue = 100;
			Assert::AreEqual(expectedMoneyValue, GrabThis->GetMonetaryValue());
		}
		TEST_METHOD(MoneyTest_Two_Pound)
		{
			Money*GrabThis = new Money(200);
			int expectedMoneyValue = 200;
			Assert::AreEqual(expectedMoneyValue, GrabThis->GetMonetaryValue());
		}
		TEST_METHOD(MoneyTest_Comparing_Two_Money)
		{
			auto  Money1 = Money(100);
			auto  Money2 = Money(100);

			auto result = Money1.compare(Money2);
			Assert::IsTrue(result);
		}
		TEST_METHOD(MoneyTest_AreEqual_Two_Money)
		{
			auto  Money1 = Money(100);
			auto  Money2 = Money(100);

			auto result = Money1 == Money2;
			Assert::IsTrue(result);
		}
		TEST_METHOD(MoneyTest_plusEquals_Two_Money)
		{
			auto  Money1 = Money(100);
			auto  Money2 = Money(200);

			auto result = Money(300) == (Money1 += Money2);
			Assert::IsTrue(result);
		}
	};
}