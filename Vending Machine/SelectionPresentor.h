#pragma once
#include "ProductManager.h"
class SelectionPresentor : public ProductManager 
{
public:
	SelectionPresentor();
	std::string m_text;
	~SelectionPresentor();
};

