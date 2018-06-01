#pragma once
#include "PaymentMethod.h"
class ContactlessPayment
{
public:
	ContactlessPayment();
	ContactlessPayment(int vInsertedConValue);
	int returnPaymentValue();
	bool NeedofChange() const;
	~ContactlessPayment();
private:
	int m_ContactInserted;
	bool m_PossibleChangeState = false;
};

