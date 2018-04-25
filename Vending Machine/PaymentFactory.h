#pragma once
#include "Money.h"
#include "TotalTaken.h"
class PaymentFactory
{
public:
	PaymentFactory();
	int Cash(int InsertedCash);
	int Card(int InsertedCard);
	int Contactless(int InsertedContactless);
	Money InsertedMonetaryValue();
	~PaymentFactory();
	
private:
	int m_insertedMoney;
	bool m_PossibleChangeState;
	Money InsertedMoney;		
};

