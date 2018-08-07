#pragma once
#include "PaymentMethod.h"
class CardPayment 
: 
public PaymentMethod
{
public:
	CardPayment();
	CardPayment(int paymentValue);
	Money Payment(int paymentValue) override;
	int ReturnPaymentValue() override;
	 bool ChangeNeeded()const override;
	~CardPayment();
private:
	int m_cardInserted = 0;
};

