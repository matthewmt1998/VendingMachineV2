#include "stdafx.h"
#include "ContactlessPayment.h"


ContactlessPayment::ContactlessPayment(int vInsertedConValue)
{
	m_ContactInserted = vInsertedConValue;
	ContactlessPayment::Payment(m_ContactInserted);
}

Money ContactlessPayment::Payment(int paymentValue)
{
	if (!m_ContactInserted == 0)
	{
		return Money(m_ContactInserted);
	}
	m_ContactInserted = paymentValue;
	return Money(m_ContactInserted);
}

int ContactlessPayment::returnPaymentValue()
{
	return m_ContactInserted;
}

ContactlessPayment::~ContactlessPayment()
{
}