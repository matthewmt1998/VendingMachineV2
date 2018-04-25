#pragma once
#include "Money.h"
class MoneyController :
	public Money
{
private:
	int totalMonetaryValue;
public:
	MoneyController();
	MoneyController(int TMV);
	int CurrentMoneyTotal();
	~MoneyController();

	int addMoney(int AddMoneyV);
};

