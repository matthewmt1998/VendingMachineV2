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

Money Transaction::ProductId(int productId)
{
	return Money();
}

std::string Transaction::TransactionStatus()
{
	return std::string();
}