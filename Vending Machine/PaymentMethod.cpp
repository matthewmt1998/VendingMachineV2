#include "stdafx.h"
#include "PaymentMethod.h"

PaymentMethod::PaymentMethod()
{
}

Money PaymentMethod::Payment(int paymentValue)
{
	return Money(paymentValue);
}

bool PaymentMethod::ChangeNeeded()
{
	return false;
}

int PaymentMethod::returnPaymentValue()
{
	return 0;
}

PaymentMethod::~PaymentMethod()
{
}
