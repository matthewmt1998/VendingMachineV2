#pragma once
#include "PaymentMethod.h"
class ContactlessPayment : PaymentMethod
{
public:
	ContactlessPayment();
	ContactlessPayment(int vInsertedConValue);
	Money Payment(int paymentValue) override;
	int returnPaymentValue() override;
	bool ChangeNeeded();
	~ContactlessPayment();
private:
	int m_ContactInserted;
};

