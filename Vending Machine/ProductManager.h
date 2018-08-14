#pragma once
#include <vector>
#include "Product.h"

class ProductManager
{
public:
	ProductManager();
	~ProductManager();
	std::vector<Product> GetProducts();

	enum Drinks
	{
		CocaCola,
		Sprite,
		Pepsi,
		DietCoke,
		PepsiMax,
		DietSprite
	};


private:
	std::vector<Product> m_products;
};

