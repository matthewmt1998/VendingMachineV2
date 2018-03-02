#include "stdafx.h"
#include "Product.h"

Product& Product::ProdId(const std::string ProductIDentifier)
{
	m_productId = ProductIDentifier;
	return *this;
}


Product& Product::ProdName(const std::string ProdName)
{
	m_productName = ProdName;
	return *this;
	
}

Product& Product::ProdVal(const int ProductMV)
{
	m_productMoneyValue = ProductMV;
	return *this;
}

Product& Product::ProdDesc(const std::string ProdDescription)
{
	m_productDescription = ProdDescription;
	return *this;
}


std::string Product::GetProductName()
{
	return m_productName;
}
Product::Product()
{}
Product::~Product()
{}

std::string Product::GetProductDetails()
{
	if (m_productId.empty()) 
	{
		m_productId = "Undefined_Id";
	}
	if (m_productName.empty())
	{
		m_productName = "Undefined_Drink";
	}
	if (m_productMoneyValue == -858993460)
	{
		m_productMoneyValue = 0;
	}
	if (m_productDescription.empty())
	{
		m_productDescription = "Undefined_Drink_Description";
	}

	m_productDetails = m_productId + " : " + m_productName + " has the value of " + std::to_string(m_productMoneyValue) + " Product Desc: " + m_productDescription;
	return m_productDetails;
}



//TODO
/*

Unit 

Product ID!!! 

*/