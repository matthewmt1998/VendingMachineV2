#pragma once
#include "stdafx.h"
#include "catch/catch.hpp"
#include "../Vending Machine/Money.h"
#include "../Vending Machine/Money.cpp"

namespace MoneyTestSystem
{
		TEST_CASE("MoneyTest_Ten_Pence")
		{
			auto money = new Money(10);
			auto expectedMoneyValue = 10;
			REQUIRE(expectedMoneyValue == money->GetMonetaryValue());
		}
		TEST_CASE("MoneyTest_Twenty_Pence")
		{
			auto money = new Money(20);
			int expectedMoneyValue = 20;
			REQUIRE(expectedMoneyValue == money->GetMonetaryValue());
		}
		TEST_CASE("MoneyTest_Fifty_Pence")
		{
			auto money = new Money(50);
			int expectedMoneyValue = 50;
			REQUIRE(expectedMoneyValue == money->GetMonetaryValue());
		}
		TEST_CASE("MoneyTest_One_Pound")
		{
			auto money = new Money(100);
			int expectedMoneyValue = 100;
			REQUIRE(expectedMoneyValue == money->GetMonetaryValue());
		}
		TEST_CASE("MoneyTest_Two_Pound")
		{
			auto money = new Money(200);
			int expectedMoneyValue = 200;
			REQUIRE(expectedMoneyValue == money->GetMonetaryValue());
		}
		TEST_CASE("MoneyTest_Comparing_Two_Money")
		{
			auto  Money1 = Money(100);
			auto  Money2 = Money(100);

			auto result = Money1.compare(Money2);
			REQUIRE(result);
		}
		TEST_CASE("MoneyTest_AreEqual_Two_Money")
		{
			auto  Money1 = Money(100);
			auto  Money2 = Money(100);

			auto result = Money1 == Money2;
			REQUIRE(result);
		}
		TEST_CASE("MoneyTest_plusEquals_Two_Money")
		{
			auto  Money1 = Money(100);
			auto  Money2 = Money(200);

			auto result = Money(300) == (Money1 += Money2);
			REQUIRE(result);
		}
}
