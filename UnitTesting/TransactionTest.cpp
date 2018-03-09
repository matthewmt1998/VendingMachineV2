#pragma once
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Vending Machine/Transaction.h"
#include "../Vending Machine/Transaction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace TransactionTestSystem
{
	TEST_CLASS(TransactionTest)
	{
	public:

		TEST_METHOD(TakeMoneyEntered_And_Return_EnteredAmount)
		{
			Transaction Trans = Transaction();
			Money ActualResult = Trans.MoneyEntered(200);
			Money ExpectedReturn = 200;
			bool result = ExpectedReturn == ActualResult;
			Assert::IsTrue(result);
		}
		TEST_METHOD(TakeProductChosen_And_Return_ProductCost)
		{
			Transaction Trans = Transaction();
			ProductManager PM = ProductManager();
			PM.
		}
	};
}
