#include "stdafx.h"
#include "Product.h"


Product::Product(std::string ProdName, int ProductMV)
{
	Productname = ProdName;
	int  ProductMoneyValue = ProductMV;
	 
}

std::string Product::GetProductDetails()
{
	ProductDetails = Productname + " Has the value of " + std::to_string(ProductMoneyValue);
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