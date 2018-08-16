//Selection Presentor
//By Mathtew Taylor - 2018
#include "stdafx.h"
#include "SelectionPresentor.h"
#include <iostream>


SelectionPresentor::SelectionPresentor()
{
}

std::vector<Product> SelectionPresentor::GetSelectionOfProducts()
{
	return m_productManager.GetProducts();
}

std::string SelectionPresentor::GetProductSelectedDetails(ProductManager::Drinks selectedDrink)
{
	auto products = m_productManager.GetProducts();

	const auto details = products[selectedDrink].GetProductDetails();
	return details;
}

SelectionPresentor::~SelectionPresentor()
{
}


//TODO
/*


instance of selection using required products etx // Are availbalbe

*/