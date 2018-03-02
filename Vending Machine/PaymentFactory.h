#pragma once
#include "Money.h"
class PaymentFactory
{
public:
	PaymentFactory();
	int Cash(int InsertedCash);
	int Card();
	int Contactless();
	Money InsertedMonetaryValue();
	~PaymentFactory();
	
private:
	int m_insertedcash;
	bool m_PossibleChangeState;
	Money InsertedMoney;
};

