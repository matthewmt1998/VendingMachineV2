#include "stdafx.h"
#include "ContactlessPayment.h"




ContactlessPayment::ContactlessPayment()
{
}

ContactlessPayment::ContactlessPayment(int vInsertedConValue)
{
	m_ContactInserted = vInsertedConValue;
}

int ContactlessPayment::returnPaymentValue()
{
	return m_ContactInserted;
}

bool ContactlessPayment::NeedofChange() const
{
	return m_PossibleChangeState;
}


ContactlessPayment::~ContactlessPayment()
{
}

//
//int PaymentFactory::Contactless(int vInsertedContactless)
//{
//	m_PossibleChangeState = false;
//	m_insertedMoney = vInsertedContactless;
//	return m_insertedMoney;
//}