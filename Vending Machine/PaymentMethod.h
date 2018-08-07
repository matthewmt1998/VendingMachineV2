#pragma once
#include "Money.h"

class PaymentMethod
{
public:
	virtual Money Payment(int paymentValue) = 0;
	virtual bool ChangeNeeded() const = 0;
	virtual int ReturnPaymentValue() = 0;
	virtual ~PaymentMethod() = default;
};