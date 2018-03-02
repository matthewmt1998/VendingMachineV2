#pragma once
#include <string>
#include "Money.h"

class Product : public Money
{
private:
	int m_productMoneyValue;
	std::string m_productName;
	std::string m_productDetails;
public:
	Product(std::string ProdName);
	Product(std::string ProdName, int ProductMV);
	std::string GetProductDetails();
	~Product();
};

