#pragma once
#include "PaymentMethod.h"
class CardPayment : PaymentMethod
{
public:
	CardPayment(int paymentValue);
	Money Payment(int paymentValue) override;
	int returnPaymentValue() override;
	~CardPayment();
private:
	int m_cardInserted;
};

