#pragma once
#include "stdafx.h"
#include "catch/catch.hpp"
#include "../Vending Machine/Transaction.h"
#include "../Vending Machine/Transaction.cpp"

namespace TransactionTestSystem
{

		TEST_CASE("TakeMoneyEntered_And_Return_EnteredAmount")
		{
			Transaction Trans = Transaction();
			Money ActualResult = Trans.MoneyEntered(200);
			Money ExpectedReturn = 200;
			bool result = ExpectedReturn == ActualResult;
			REQUIRE(result);
		}
		TEST_CASE("TakeProductChosen_And_Return_ProductCost")
		{
			Transaction Trans = Transaction();
			ProductManager PM = ProductManager();
			//PM.
		}
}
