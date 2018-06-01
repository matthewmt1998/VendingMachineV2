#pragma once
#include "PaymentMethod.h"
class CardPayment
{
public:
	CardPayment();
	~CardPayment();
private:
	int m_cardInserted;
	bool m_PossibleChangeState = false;
};

