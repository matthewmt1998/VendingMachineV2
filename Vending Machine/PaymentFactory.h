#pragma once
#include "Money.h"
#include "PaymentMethod.h"


class PaymentFactory
{
public:
	PaymentFactory();
	~PaymentFactory();

	
private:
	int m_insertedMoney;
	bool m_PossibleChangeState;
	Money InsertedMoney;
};

