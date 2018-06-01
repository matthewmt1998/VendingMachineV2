#pragma once
#include "Money.h"

class PaymentMethod
{
public:
	PaymentMethod();
	virtual Money Payment(int paymentValue) = 0;
	virtual bool ChangeNeeded() = 0;
	virtual int returnPaymentValue() = 0;
	virtual ~PaymentMethod();
};