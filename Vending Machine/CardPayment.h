#pragma once
#include "PaymentMethod.h"
class CardPayment : PaymentMethod
{
public:
	CardPayment();
	CardPayment(int paymentValue);
	Money Payment(int paymentValue) override;
	bool ChangeNeeded();
	int returnPaymentValue() override;
	~CardPayment();
private:
	int m_cardInserted;
};

