//Selection Presentor Tests
//By Mathtew Taylor - 2018

#pragma once
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Vending Machine/SelectionPresentor.h"
#include "../Vending Machine/SelectionPresentor.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProductManagerTestSystem
{
	TEST_CLASS(SelectionPresentorTest)
	{
	public:

		TEST_METHOD(Can_SelectionPresentor_GetProductDetails)
		{
			SelectionPresentor SelectionP = SelectionPresentor();
			std::string ExpectedDescription = "Coca_Cola_ID : Coca Cola has the value of 150 Product Desc: A Classic Refreshing TasteSprite_ID : Sprite has the value of 130 Product Desc: A Refreshing LemonadePespi_ID : Pepsi has the value of 150 Product Desc: Great Tasting RefreshmentUndefined_Id : Undefined_Drink has the value of 0 Product Desc: Undefined_Drink_DescriptionUndefined_Id : Undefined_Drink has the value of 0 Product Desc: Undefined_Drink_DescriptionUndefined_Id : Undefined_Drink has the value of 0 Product Desc: Undefined_Drink_Description";
			Assert::AreEqual(ExpectedDescription, SelectionP.m_text);
		}

	};
}