#include "stdafx.h"
#include "PaymentFactory.h"


PaymentFactory::PaymentFactory()
{
}

PaymentFactory::~PaymentFactory()
{
}

CashPayment PaymentFactory::CreateCashPayment()
{
	return CashPayment();
}

CardPayment PaymentFactory::CreateCardPayment()
{
	return CardPayment();
}

ContactlessPayment PaymentFactory::CreateContactlessPayment()
{
	return ContactlessPayment();
}
