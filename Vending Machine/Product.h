#pragma once
#include <string>
#include "Money.h"

class Product : public Money
{
public:
	Product();
	Product& ProdId(const std::string ProductIDentifier);
	Product& ProdName(const std::string ProdName);
	Product& ProdVal(const int ProductMV = 0);
	Product& ProdDesc(const std::string ProdDescription);
	std::string GetProductName();
	int GetProductValue();
	std::string GetProductDescription();
	std::string GetProductDetails();
	~Product();
	

private:
	int m_productMoneyValue;
	std::string m_productId;
	std::string m_productName;
	std::string m_productDescription;
	std::string m_productDetails;
	


};

