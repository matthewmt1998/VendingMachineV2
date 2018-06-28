#pragma once
#include "PaymentMethod.h"
class ContactlessPayment : PaymentMethod
{
public:
	ContactlessPayment();
	ContactlessPayment(int vInsertedConValue);
	Money Payment(int paymentValue) override;
	int returnPaymentValue() override;
	const bool ChangeNeeded() override;
	~ContactlessPayment();
private:
	int m_ContactInserted = 0;
};

