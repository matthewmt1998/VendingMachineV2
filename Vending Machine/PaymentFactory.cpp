#include "stdafx.h"
#include "PaymentFactory.h"


PaymentFactory::PaymentFactory()
{
}


Money PaymentFactory::InsertedMonetaryValue()
{
	Money InsertedMoney =  Money(m_insertedMoney);
	return InsertedMoney;
}

PaymentFactory::~PaymentFactory()
{
}

int PaymentFactory::Cash(int vInsertedCash)
{
	m_PossibleChangeState = true;
	m_insertedMoney = vInsertedCash;
	return m_insertedMoney;
}

int PaymentFactory::Card(int vInsertedCard)
{
	m_PossibleChangeState = false;
	m_insertedMoney = vInsertedCard;
	return m_insertedMoney;
}

int PaymentFactory::Contactless(int vInsertedContactless)
{
	m_PossibleChangeState = false;
	m_insertedMoney = vInsertedContactless;
	return m_insertedMoney;
}