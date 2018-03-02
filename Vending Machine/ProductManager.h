#pragma once
#include <vector>
#include "Product.h"

class ProductManager
{
public:
	ProductManager();
	~ProductManager();

private:

	std::vector<Product> Products;

};

