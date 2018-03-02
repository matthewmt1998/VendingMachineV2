#include "stdafx.h"

#include "MoneyController.h"


MoneyController::MoneyController()
{
}
MoneyController::MoneyController(int TMV)
{
	totalMonetaryValue = TMV;
}

int MoneyController::CurrentMoneyTotal()
{
	return totalMonetaryValue;
}

int MoneyController::addMoney(int AddMoneyV)
{
	totalMonetaryValue += AddMoneyV;
	return totalMonetaryValue;
}

MoneyController::~MoneyController()
{
}
