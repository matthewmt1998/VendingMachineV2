#pragma once
#include "stdafx.h"
#include "ContactlessPayment.h"

ContactlessPayment::ContactlessPayment()
{
}

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

int ContactlessPayment::ReturnPaymentValue()
{
	return m_ContactInserted;
}

 bool ContactlessPayment::ChangeNeeded() const
{
	return false;
}

ContactlessPayment::~ContactlessPayment()
{
}