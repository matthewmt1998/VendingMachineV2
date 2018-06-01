#pragma once
#include "Payment.h"
class CashPayment :
	public Payment
{
public:
	CashPayment();
	CashPayment(float vInsertedCashValue);
	float returnPaymentValue();
	bool NeedofChange() const;
	~CashPayment();
private:
	float m_cashInserted;
	bool m_PossibleChangeState = true;
};

