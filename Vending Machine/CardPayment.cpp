#pragma once
#include "stdafx.h"
#include "CardPayment.h"

CardPayment::CardPayment()
{
}

CardPayment::CardPayment(int paymentValue)
{
	m_cardInserted = paymentValue;
	CardPayment::Payment(m_cardInserted);
}

Money CardPayment::Payment(int paymentValue)
{
	//TODO VERFIFICATION OF CARD WOULD GO HERE.. 

	if (!m_cardInserted == 0)
	{
		return Money(m_cardInserted);
	}
	m_cardInserted = paymentValue;
	return Money(m_cardInserted);
}

int CardPayment::ReturnPaymentValue()
{
	return m_cardInserted;
}

 bool CardPayment::ChangeNeeded() const 
{
	return false;
}

CardPayment::~CardPayment()
{
}
