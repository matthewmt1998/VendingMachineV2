//Selection Presentor
//By Mathtew Taylor - 2018
#include "stdafx.h"
#include "SelectionPresentor.h"


SelectionPresentor::SelectionPresentor()
{
	ProductManager();
	for (auto& prod : m_products)
	{
		m_text += prod.GetProductDetails();
	}
	
}


SelectionPresentor::~SelectionPresentor()
{
}


//TODO
/*


instance of selection using required products etx // Are availbalbe

*/