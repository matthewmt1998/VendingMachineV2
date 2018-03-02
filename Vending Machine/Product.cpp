#include "stdafx.h"
#include "Product.h"


Product::Product(std::string ProdName, int ProductMV)
{
	m_productName = ProdName;
	m_productMoneyValue = ProductMV;
	 
}

Product::Product(std::string ProdName)
{
	m_productName = ProdName;
}

std::string Product::GetProductDetails()
{
	m_productDetails = m_productName + " has the value of " + std::to_string(m_productMoneyValue);
	return m_productDetails;
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