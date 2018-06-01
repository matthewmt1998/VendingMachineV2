#pragma once
#include "Payment.h"
class CardPayment :
	public Payment
{
public:
	CardPayment();
	~CardPayment();
private:
	int m_cardInserted;
	bool m_PossibleChangeState = false;
};

