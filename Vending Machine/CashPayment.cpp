#include "stdafx.h"
#include "CashPayment.h"

CashPayment::CashPayment(int paymentValue)
{
	m_cashInserted = paymentValue;
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
	return true;
}

int CashPayment::returnPaymentValue()
{
	return m_cashInserted;
}

CashPayment::~CashPayment()
{
}
