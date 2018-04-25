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
			std::string ExpectedDescription = "Coca_Cola_ID : Coca Cola has the value of 150 Product Desc: A Classic Refreshing TasteSprite_ID : Sprite has the value of 130 Product Desc: A Refreshing LemonadePespi_ID : Pepsi has the value of 150 Product Desc: Great Tasting RefreshmentDiet_Coke_ID : Diet Coke has the value of 125 Product Desc: Coke... But Diet..Pespi_Max_ID : Pespi Max has the value of 175 Product Desc: Better than NormalDiet_Sprite_ID : Diet Sprite has the value of 150 Product Desc: Sprite Diet...";
			Assert::AreEqual(ExpectedDescription, SelectionP.m_text);
		}

		TEST_METHOD(CAN_GET_SPECIFIC_IDs)
		{
			SelectionPresentor SelectionP = SelectionPresentor();
			std::string ExpectedResult = "Coca Cola";
			Assert::AreEqual(ExpectedResult, SelectionP.m_products[0].GetProductName());
		}

		TEST_METHOD(CAN_GET_SPECIFIC_Details_I_want)
		{
			SelectionPresentor SelectionP = SelectionPresentor();
			std::string ExpectedResult = "Coca_Cola_ID : Coca Cola has the value of 150 Product Desc: A Classic Refreshing Taste";
			Assert::AreEqual(ExpectedResult, SelectionP.m_products[0].GetProductDetails());
		}
	};
}