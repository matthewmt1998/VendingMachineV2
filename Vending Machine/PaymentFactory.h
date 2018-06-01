#pragma once
#include "Money.h"
#include "Payment.h"


class PaymentFactory
{
public:
	PaymentFactory();
	Payment InsertedPayment();
	void InsertedMonetaryValue();
	~PaymentFactory();

	
private:
	int m_insertedMoney;
	bool m_PossibleChangeState;
	Money InsertedMoney;
	Payment CurrentPayment;
};

