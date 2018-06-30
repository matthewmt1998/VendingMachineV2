#pragma once
#include "CashPayment.h"
#include "CardPayment.h"
#include "ContactlessPayment.h"



class PaymentFactory
{
public:
	PaymentFactory();
	~PaymentFactory();
	PaymentMethod* CreatePaymentMethod(int PaymentMethod, int Amount);

	enum payMethods
	{
		Cash,
		Card,
		Contactless
	};
};

