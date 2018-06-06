#pragma once
#include "stdafx.h"
#include "PaymentMethod.h"

Money PaymentMethod::Payment(int paymentValue)
{
	return Money(paymentValue);
}

bool const PaymentMethod::ChangeNeeded()
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
