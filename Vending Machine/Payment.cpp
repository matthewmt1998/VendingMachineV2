#include "stdafx.h"
#include "Payment.h"
#include <string>
#include <algorithm>

Payment::Payment()
{
}

Payment::Payment(int value) :
	m_contactlessPay(value)
{
}

Payment::Payment(float value) :
	m_cashPayment(value)
{
	const auto cash = m_cashPayment.returnPaymentValue();
	auto str = std::to_string(cash);

	std::size_t found = str.find('.');
	if (found != std::string::npos)
	{
		str.erase(std::remove(str.begin(), str.end(), '.'), str.end());
	}
	else
	{
		throw PaymentConversionError;
	}
	m_insertedValue = std::stoi(str, nullptr,10);
}


Payment::~Payment()
{
}
