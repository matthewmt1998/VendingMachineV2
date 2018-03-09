#include "stdafx.h"
#include "Transaction.h"


Transaction::Transaction()
{
}


Transaction::~Transaction()
{
}

Money Transaction::MoneyEntered(Money money)
{
	return money.GetMonetaryValue();
}

Money Transaction::CostOfProd()
{
	return Money();
}

std::string Transaction::TransactionStatus()
{
	return std::string();
}


//TODO
/*

mONEY IN

COST

PROD ID
SUCESSFUL /FAILURE

STATE 

*/