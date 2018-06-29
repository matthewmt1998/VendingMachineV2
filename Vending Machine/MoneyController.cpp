#pragma once
#include "stdafx.h"
#include "MoneyController.h"


MoneyController::MoneyController()
{
}
MoneyController::MoneyController(Money TMV)
{
	totalMonetaryValue = TMV;
}

Money MoneyController::CurrentMoneyTotal() const
{
	return totalMonetaryValue;
}

Money MoneyController::addMoney(Money AddMoneyV)
{
	totalMonetaryValue += AddMoneyV;
	return totalMonetaryValue;
}

MoneyController::~MoneyController()
{
}
