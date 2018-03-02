#pragma once
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Vending Machine/Product.h"
#include "../Vending Machine/Product.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProductTestSystem
{
	TEST_CLASS(ProductTest)
	{
	public:

		TEST_METHOD(Product_Name)
		{
			Product prod = Product().ProdName("Coke");
			std::string ExpectedProductName = "Coke";
			Assert::AreEqual(ExpectedProductName, prod.GetProductName());
		}

		TEST_METHOD(Product_Name_And_Product_Value)
		{
			Product prod = Product().ProdName("Coke").ProdVal(100);
			std::string ExpectedProductNameAndValue = "Coke has the value of 100";
			Assert::AreEqual(ExpectedProductNameAndValue, prod.GetProductDetails());
		}

		TEST_METHOD(Product_Details_All_Undefined)
		{
			Product prod = Product();
			std::string ExpectedDescription = "Undefined_Id : Undefined_Drink has the value of 0 Product Desc: Undefined_Drink_Description";
			Assert::AreEqual(ExpectedDescription, prod.GetProductDetails());
		}

		TEST_METHOD(Product_Details_UndefinedId_OtherArguementsFilled)
		{
			Product prod = Product().ProdName("Coke").ProdVal(100).ProdDesc("ProductDescription");
			std::string ExpectedDescription = "Undefined_Id : Coke has the value of 100 Product Desc: ProductDescription";
			Assert::AreEqual(ExpectedDescription, prod.GetProductDetails());
		}


	};
}