#include "stdafx.h"
#include "ProductManager.h"


ProductManager::ProductManager()
{
	Product P1 = Product().ProdId("Coca_Cola_ID").ProdName("Coca Cola").ProdVal(150).ProdDesc("A Classic Refreshing Taste");
	m_products.push_back(P1);
	Product P2 = Product().ProdId("Sprite_ID").ProdName("Sprite").ProdVal(130).ProdDesc("A Refreshing Lemonade");
	m_products.push_back(P2);
	Product P3 = Product().ProdId("Pespi_ID").ProdName("Pepsi").ProdVal(150).ProdDesc("Great Tasting Refreshment");
	m_products.push_back(P3);
	Product P4 = Product().ProdId("").ProdName("").ProdVal(0).ProdDesc("");
	m_products.push_back(P4);
	Product P5 = Product().ProdId("").ProdName("").ProdVal(0).ProdDesc("");
	m_products.push_back(P5);
	Product P6 = Product().ProdId("").ProdName("").ProdVal(0).ProdDesc("");
	m_products.push_back(P6);
	GetProducts(m_products);
	;
}


ProductManager::~ProductManager()
{
}

std::vector<Product> ProductManager::GetProducts(std::vector<Product> Prod)
{
	return m_products;
}
