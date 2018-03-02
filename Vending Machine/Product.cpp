#include "stdafx.h"
#include "Product.h"


Product::Product(std::string ProdName, int ProductMV)
{
	Productname = ProdName;
	ProductMoneyValue = ProductMV;
	 
}

std::string Product::GetProductDetails()
{
	ProductDetails = Productname + " has the value of " + std::to_string(ProductMoneyValue);
	return ProductDetails;
}

Product::~Product()
{

}

//TODO
/*

his needs 

Desc

Unit 

Product ID!!! 

*/