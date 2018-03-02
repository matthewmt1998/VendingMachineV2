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
			Product*GrabThis = new Product("Coke", 100);
			std::string ExpectedProductName = "Coke has the value of 100";
			Assert::AreEqual(ExpectedProductName, GrabThis->GetProductDetails());
		}
	};
}