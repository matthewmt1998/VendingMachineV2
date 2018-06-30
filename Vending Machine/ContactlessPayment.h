#pragma once
#include "PaymentMethod.h"
class ContactlessPayment 
	:public PaymentMethod
{
public:
	ContactlessPayment();
	ContactlessPayment(int vInsertedConValue);
	Money Payment(int paymentValue) override;
	int returnPaymentValue() override;
	 bool ChangeNeeded() const override;
	~ContactlessPayment();
private:
	int m_ContactInserted = 0;
};

