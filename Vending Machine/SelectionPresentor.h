#pragma once
#include "ProductManager.h"
class SelectionPresentor
{
public:

	SelectionPresentor();
	std::vector<Product> GetSelectionOfProducts();
	std::string GetProductSelectedDetails(ProductManager::Drinks selectedDrink);
	~SelectionPresentor();

private:
	ProductManager m_productManager;

};

