#include "stdafx.h"
#include "CashPayment.h"

CashPayment::CashPayment(int vInsertedCashValue)
{
	m_cashInserted = vInsertedCashValue;
	CashPayment::Payment(m_cashInserted);
}

Money CashPayment::Payment(int paymentValue)
{
	if(!m_cashInserted == 0)
	{
		return Money(m_cashInserted);
	}
	m_cashInserted = paymentValue;
	return Money(m_cashInserted);
}

bool CashPayment::ChangeNeeded()
{
	m_PossibleChangeState = true;
	return m_PossibleChangeState;
}

int CashPayment::returnPaymentValue() const
{
	return m_cashInserted;
}

CashPayment::~CashPayment()
{
}
