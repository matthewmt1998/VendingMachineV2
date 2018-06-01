#include "stdafx.h"
#include "CashPayment.h"


CashPayment::CashPayment()
{
}

CashPayment::CashPayment(float vInsertedCashValue)
{
	m_cashInserted = vInsertedCashValue;
}

float CashPayment::returnPaymentValue()
{
	return m_cashInserted;
}

bool CashPayment::NeedofChange() const
{
	return m_PossibleChangeState;
}

CashPayment::~CashPayment()
{
}


//int PaymentFactory::Cash(int vInsertedCash)
//{
//	m_PossibleChangeState = true;
//	m_insertedMoney = vInsertedCash;
//	return m_insertedMoney;
//}
//