#pragma once 
#include "stdafx.h"
#include <iostream>

#include "PaymentFactory.h"


PaymentFactory::PaymentFactory()
{
}

PaymentFactory::~PaymentFactory()
{
}

PaymentMethod* PaymentFactory::CreatePaymentMethod(int PaymentMethod, int Amount)
{
	switch (PaymentMethod)
	{
	case 0:
		return new CashPayment(Amount);
	case 1:
		return new CardPayment(Amount);
	case 2:
		return new ContactlessPayment(Amount);
	default:
		throw "Error Not valid Payment Method";
	}
}
