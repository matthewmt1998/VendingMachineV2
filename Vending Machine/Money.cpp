#include "stdafx.h"
#include "Money.h"

Money::Money()
{

}
Money::Money(int monetaryv)
{
	monetaryValue = monetaryv;
}

Money::~Money()
{
}

int Money::GetMonetaryValue() {
	return monetaryValue;
}

bool Money::operator==(const Money & obj)
{
	return (monetaryValue == obj.monetaryValue) && (monetaryValue == obj.monetaryValue);
}

bool Money::compare(const Money & obj)
{
	return false;
}

