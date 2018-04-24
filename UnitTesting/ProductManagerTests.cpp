#pragma once
#include "stdafx.h"
#include <iostream>
#include "CppUnitTest.h"
#include "../Vending Machine/ProductManager.h"
#include "../Vending Machine/ProductManager.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProductManagerTestSystem
{
	TEST_CLASS(ProductManagerTest)
	{
	public:

		TEST_METHOD(TestName)
		{
			ProductManager ProductSelection = ProductManager();

			std::cout << ' ' << ProductSelection.m_products.at(1).GetProductDescription();
			
		}

	};
}