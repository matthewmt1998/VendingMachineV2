#pragma once
#include "stdafx.h"
#include <iostream>
#include "catch/catch.hpp"
#include "../Vending Machine/ProductManager.h"
#include "../Vending Machine/ProductManager.cpp"


namespace ProductManagerTestSystem
{

	TEST_CASE("ProductManager_AllGetProductDetails")
	{
		ProductManager ProductSelection = ProductManager();
		std::string ExpectedDescription = "Coca_Cola_ID : Coca Cola has the value of 150 Product Desc: A Classic Refreshing TasteSprite_ID : Sprite has the value of 130 Product Desc: A Refreshing LemonadePespi_ID : Pepsi has the value of 150 Product Desc: Great Tasting RefreshmentDiet_Coke_ID : Diet Coke has the value of 125 Product Desc: Coke... But Diet..Pespi_Max_ID : Pespi Max has the value of 175 Product Desc: Better than NormalDiet_Sprite_ID : Diet Sprite has the value of 150 Product Desc: Sprite Diet...";
		auto products = ProductSelection.GetProducts();
		std::string result;
		for(auto& product : products)
		{
			result += product.GetProductDetails();
		}
		
		REQUIRE(ExpectedDescription == result);
	}

	TEST_CASE("CAN_GET_SPECIFIC_IDs")
	{
		ProductManager ProductSelection = ProductManager();
		std::string ExpectedResult = "Coca Cola";
		auto products = ProductSelection.GetProducts();

		REQUIRE(ExpectedResult == products[ProductManager::Drinks::CocaCola].GetProductName());
	}
	TEST_CASE("ProductManager_SpecificGetProductDetails")
	{
		ProductManager ProductSelection = ProductManager();
		std::string ExpectedDescription = "Coca_Cola_ID : Coca Cola has the value of 150 Product Desc: A Classic Refreshing Taste";
		auto products = ProductSelection.GetProducts();

		REQUIRE(ExpectedDescription == products[ProductManager::Drinks::CocaCola].GetProductDetails());
	}
}