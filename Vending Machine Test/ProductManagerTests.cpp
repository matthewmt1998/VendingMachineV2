#pragma once
#include "stdafx.h"
#include <iostream>
#include "catch/catch.hpp"
#include "../Vending Machine/ProductManager.h"
#include "../Vending Machine/ProductManager.cpp"


namespace ProductManagerTestSystem
{
		TEST_CASE("ProductManagerTest")
		{
			ProductManager ProductSelection = ProductManager();

			std::cout << ' ' << ProductSelection.m_products.at(1).GetProductDescription();
			
		}
;
}