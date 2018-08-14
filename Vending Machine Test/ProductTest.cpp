#pragma once
#include "stdafx.h"
#include "catch/catch.hpp"
#include "../Vending Machine/Product.h"
#include "../Vending Machine/Product.cpp"


namespace ProductTestSystem
{
		TEST_CASE("Product_Name")
		{
			Product prod = Product().ProdName("Coke");
			std::string ExpectedProductName = "Coke";
			REQUIRE(ExpectedProductName == prod.GetProductName());
		}

		TEST_CASE("Product_Name_And_Product_Value")
		{
			Product prod = Product().ProdName("Coke").ProdVal(100);
			std::string ExpectedProductName = "Coke";
			int ExpectedProductValue = 100;
			REQUIRE(ExpectedProductName == prod.GetProductName());
			REQUIRE(ExpectedProductValue == prod.GetProductValue().GetMonetaryValue());
		}

		TEST_CASE("Product_Name_And_Product_Value_And_Description")
		{
			Product prod = Product().ProdName("Coke").ProdVal(100).ProdDesc("Description");
			std::string ExpectedProductName = "Coke";
			std::string ExpectedProductDesc = "Description";
			int ExpectedProductValue = 100;
			REQUIRE(ExpectedProductName == prod.GetProductName());
			REQUIRE(ExpectedProductValue == prod.GetProductValue().GetMonetaryValue());
			REQUIRE(ExpectedProductDesc == prod.GetProductDescription());
		}

		TEST_CASE("Product_Details_All_Undefined")
		{
			Product prod = Product();
			std::string ExpectedDescription = "Undefined_Id : Undefined_Drink has the value of 0 Product Desc: Undefined_Drink_Description";
			REQUIRE(ExpectedDescription == prod.GetProductDetails());
		}

		TEST_CASE("Product_Details_ID_Defined_AllOthersUndefined")
		{
			Product prod = Product().ProdId("Coke_ID");
			std::string ExpectedDescription = "Coke_ID : Undefined_Drink has the value of 0 Product Desc: Undefined_Drink_Description";
			REQUIRE(ExpectedDescription == prod.GetProductDetails());
		}
		
		TEST_CASE("Product_Details_ID_Defined_And_NameDefined_Coke_ValueAndDescUndefined")
		{
			Product prod = Product().ProdId("Coke_ID").ProdName("Coke");
			std::string ExpectedDescription = "Coke_ID : Coke has the value of 0 Product Desc: Undefined_Drink_Description";
			REQUIRE(ExpectedDescription == prod.GetProductDetails());
		}

		TEST_CASE("Product_Details_ID_Defined_And_NameDefined_Coke_ValueDefined_DescUndefined")
		{
			Product prod = Product().ProdId("Coke_ID").ProdName("Coke").ProdVal(100);
			std::string ExpectedDescription = "Coke_ID : Coke has the value of 100 Product Desc: Undefined_Drink_Description";
			REQUIRE(ExpectedDescription == prod.GetProductDetails());
		}

		TEST_CASE("Product_Details_All_Defined")
		{
			Product prod = Product().ProdId("Coke_ID").ProdName("Coke").ProdVal(100).ProdDesc("ProductDescription");
			std::string ExpectedDescription = "Coke_ID : Coke has the value of 100 Product Desc: ProductDescription";
			REQUIRE(ExpectedDescription == prod.GetProductDetails());
		}
}