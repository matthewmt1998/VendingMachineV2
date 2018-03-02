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
			Product*GrabThis = new Product("Coke");
			std::string ExpectedProductName = "Coke";
			Assert::AreEqual(ExpectedProductName, GrabThis->GetProductDetails());
		}

		TEST_METHOD(Product_Name_And_Product_Value)
		{
			Product*GrabThis = new Product("Coke", 100);
			std::string ExpectedProductNameAndValue = "Coke has the value of 100";
			Assert::AreEqual(ExpectedProductNameAndValue, GrabThis->GetProductDetails());
		}


	};
}