//Selection Presentor Tests
//By Mathtew Taylor - 2018
#pragma once
#include "stdafx.h"
#include "catch/catch.hpp"
#include "../Vending Machine/SelectionPresentor.h"
#include "../Vending Machine/SelectionPresentor.cpp"


namespace SelectionPresentorTestSystem
{

	TEST_CASE("SelectionPresentor_GetSelectionOfProducts")
	{
		SelectionPresentor selectionPresentor;
		REQUIRE(!selectionPresentor.GetSelectionOfProducts().empty());
	}

	TEST_CASE("SelectionPresentor_GetProductSelectedDetails")
	{
		SelectionPresentor selectionPresentor;
		REQUIRE(!selectionPresentor.GetProductSelectedDetails(ProductManager::CocaCola).empty());

	}
}