#pragma once
#include "Payment.h"
class CashPayment :
	public Payment
{
public:
	CashPayment();
	~CashPayment();
private:
	float m_cashInserted;
};

