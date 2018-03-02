#include "stdafx.h"
#include "PaymentFactory.h"


PaymentFactory::PaymentFactory()
{
}


Money PaymentFactory::InsertedMonetaryValue()
{
	Money InsertedMoney =  Money(m_insertedcash);
	return InsertedMoney;
}

PaymentFactory::~PaymentFactory()
{
}

int PaymentFactory::Cash(int vInsertedCash)
{
	m_PossibleChangeState = true;
	m_insertedcash = vInsertedCash;
	return m_insertedcash;
}