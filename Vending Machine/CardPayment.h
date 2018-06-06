#pragma once
#include "PaymentMethod.h"
class CardPayment 
: 
public PaymentMethod
{
public:
	CardPayment(int paymentValue);
	Money Payment(int paymentValue) override;
	int returnPaymentValue() override;
	~CardPayment();
private:
	int m_cardInserted;
};

