#pragma once
#include "Money.h"
class MoneyController :
	public Money
{
private:
	Money totalMonetaryValue;
public:
	MoneyController();
	MoneyController(Money TMV);
	Money CurrentMoneyTotal() const;
	~MoneyController();

	Money addMoney(Money AddMoneyV);
};

