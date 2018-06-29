#pragma once
#include "CashPayment.h"
#include "CardPayment.h"
#include "ContactlessPayment.h"



class PaymentFactory
{
public:
	PaymentFactory();
	~PaymentFactory();
	CashPayment CreateCashPayment();
	CardPayment CreateCardPayment();
	ContactlessPayment CreateContactlessPayment();
};

