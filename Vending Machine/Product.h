#pragma once
#include <string>
#include "Money.h"

class Product : public Money
{
private:
	int ProductMoneyValue;
	std::string Productname;
	std::string ProductDetails;
public:

	Product(std::string ProdName, int ProductMV);
	std::string GetProductDetails();
	~Product();
};

