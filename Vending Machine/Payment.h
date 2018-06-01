#pragma once
#include "CashPayment.h"
#include <string>
#include "CardPayment.h"
#include "ContactlessPayment.h"

class Payment
{
public:
	Payment();
	Payment(int value);
	Payment(float value);
	~Payment();
private:
	int m_insertedValue;
	ContactlessPayment m_contactlessPay;
	CashPayment m_cashPayment;
	std::string PaymentConversionError = "Conversion Error!";
};

