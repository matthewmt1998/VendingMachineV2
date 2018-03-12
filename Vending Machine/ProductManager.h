#pragma once
#include <vector>
#include "Product.h"

class ProductManager
{
public:
	ProductManager();
	~ProductManager();
	std::vector<Product> m_products;

private:

	std::vector<Product> GetProducts(std::vector<Product> Prod);
};

