#pragma once
#include "ProductManager.h"
#include <string>
class Transaction : public Product
{
public:
	Transaction();
	~Transaction();
	Money MoneyEntered(Money money);
	Money CostOfProd();
	std::string TransactionStatus();
private:
	Money m_moneyEntered;
	
};

